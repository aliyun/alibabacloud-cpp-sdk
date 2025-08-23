#include <darabonba/Core.hpp>
#include <alibabacloud/QuanMiaoLightApp20240801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::QuanMiaoLightApp20240801::Models;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{

AlibabaCloud::QuanMiaoLightApp20240801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("quanmiaolightapp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 取消异步任务
 *
 * @param request CancelAsyncTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAsyncTaskResponse
 */
CancelAsyncTaskResponse Client::cancelAsyncTaskWithOptions(const string &workspaceId, const CancelAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelAsyncTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/cancelAsyncTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAsyncTaskResponse>();
}

/**
 * @summary 取消异步任务
 *
 * @param request CancelAsyncTaskRequest
 * @return CancelAsyncTaskResponse
 */
CancelAsyncTaskResponse Client::cancelAsyncTask(const string &workspaceId, const CancelAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelAsyncTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 导出挖掘任务明细
 *
 * @param tmpReq ExportAnalysisTagDetailByTaskIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportAnalysisTagDetailByTaskIdResponse
 */
ExportAnalysisTagDetailByTaskIdResponse Client::exportAnalysisTagDetailByTaskIdWithOptions(const string &workspaceId, const ExportAnalysisTagDetailByTaskIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportAnalysisTagDetailByTaskIdShrinkRequest request = ExportAnalysisTagDetailByTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.categories(), "categories", "json"));
  }

  json body = {};
  if (!!request.hasCategoriesShrink()) {
    body["categories"] = request.categoriesShrink();
  }

  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportAnalysisTagDetailByTaskId"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/exportAnalysisTagDetailByTaskId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportAnalysisTagDetailByTaskIdResponse>();
}

/**
 * @summary 导出挖掘任务明细
 *
 * @param request ExportAnalysisTagDetailByTaskIdRequest
 * @return ExportAnalysisTagDetailByTaskIdResponse
 */
ExportAnalysisTagDetailByTaskIdResponse Client::exportAnalysisTagDetailByTaskId(const string &workspaceId, const ExportAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportAnalysisTagDetailByTaskIdWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 新闻播报-抽取分类获取播报热点
 *
 * @param request GenerateBroadcastNewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateBroadcastNewsResponse
 */
GenerateBroadcastNewsResponse Client::generateBroadcastNewsWithOptions(const string &workspaceId, const GenerateBroadcastNewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateBroadcastNews"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/GenerateBroadcastNews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateBroadcastNewsResponse>();
}

/**
 * @summary 新闻播报-抽取分类获取播报热点
 *
 * @param request GenerateBroadcastNewsRequest
 * @return GenerateBroadcastNewsResponse
 */
GenerateBroadcastNewsResponse Client::generateBroadcastNews(const string &workspaceId, const GenerateBroadcastNewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateBroadcastNewsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-标签挖掘-获取示例输出格式
 *
 * @param tmpReq GenerateOutputFormatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateOutputFormatResponse
 */
GenerateOutputFormatResponse Client::generateOutputFormatWithOptions(const string &workspaceId, const GenerateOutputFormatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateOutputFormatShrinkRequest request = GenerateOutputFormatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateOutputFormat"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/generateOutputFormat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateOutputFormatResponse>();
}

/**
 * @summary 轻应用-标签挖掘-获取示例输出格式
 *
 * @param request GenerateOutputFormatRequest
 * @return GenerateOutputFormatResponse
 */
GenerateOutputFormatResponse Client::generateOutputFormat(const string &workspaceId, const GenerateOutputFormatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateOutputFormatWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取企业VOC分析任务结果
 *
 * @param request GetEnterpriseVocAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnterpriseVocAnalysisTaskResponse
 */
GetEnterpriseVocAnalysisTaskResponse Client::getEnterpriseVocAnalysisTaskWithOptions(const string &workspaceId, const GetEnterpriseVocAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnterpriseVocAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/getEnterpriseVocAnalysisTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnterpriseVocAnalysisTaskResponse>();
}

/**
 * @summary 获取企业VOC分析任务结果
 *
 * @param request GetEnterpriseVocAnalysisTaskRequest
 * @return GetEnterpriseVocAnalysisTaskResponse
 */
GetEnterpriseVocAnalysisTaskResponse Client::getEnterpriseVocAnalysisTask(const string &workspaceId, const GetEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnterpriseVocAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取作业批改结果
 *
 * @param request GetEssayCorrectionTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEssayCorrectionTaskResponse
 */
GetEssayCorrectionTaskResponse Client::getEssayCorrectionTaskWithOptions(const string &workspaceId, const GetEssayCorrectionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEssayCorrectionTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/getEssayCorrectionTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEssayCorrectionTaskResponse>();
}

/**
 * @summary 获取作业批改结果
 *
 * @param request GetEssayCorrectionTaskRequest
 * @return GetEssayCorrectionTaskResponse
 */
GetEssayCorrectionTaskResponse Client::getEssayCorrectionTask(const string &workspaceId, const GetEssayCorrectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEssayCorrectionTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取文件内容
 *
 * @param request GetFileContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileContentResponse
 */
GetFileContentResponse Client::getFileContentWithOptions(const string &workspaceId, const GetFileContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["fileKey"] = request.fileKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFileContent"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/getFileContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileContentResponse>();
}

/**
 * @summary 获取文件内容
 *
 * @param request GetFileContentRequest
 * @return GetFileContentResponse
 */
GetFileContentResponse Client::getFileContent(const string &workspaceId, const GetFileContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFileContentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取挖掘分析任务结果
 *
 * @param request GetTagMiningAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTagMiningAnalysisTaskResponse
 */
GetTagMiningAnalysisTaskResponse Client::getTagMiningAnalysisTaskWithOptions(const string &workspaceId, const GetTagMiningAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTagMiningAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/getTagMiningAnalysisTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTagMiningAnalysisTaskResponse>();
}

/**
 * @summary 获取挖掘分析任务结果
 *
 * @param request GetTagMiningAnalysisTaskRequest
 * @return GetTagMiningAnalysisTaskResponse
 */
GetTagMiningAnalysisTaskResponse Client::getTagMiningAnalysisTask(const string &workspaceId, const GetTagMiningAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTagMiningAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 视频理解-获取配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoAnalysisConfigResponse
 */
GetVideoAnalysisConfigResponse Client::getVideoAnalysisConfigWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoAnalysisConfig"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/videoAnalysis/getVideoAnalysisConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoAnalysisConfigResponse>();
}

/**
 * @summary 视频理解-获取配置
 *
 * @return GetVideoAnalysisConfigResponse
 */
GetVideoAnalysisConfigResponse Client::getVideoAnalysisConfig(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVideoAnalysisConfigWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary 轻应用-获取视频理解异步任务结果
 *
 * @param request GetVideoAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoAnalysisTaskResponse
 */
GetVideoAnalysisTaskResponse Client::getVideoAnalysisTaskWithOptions(const string &workspaceId, const GetVideoAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/videoAnalysis/getVideoAnalysisTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoAnalysisTaskResponse>();
}

/**
 * @summary 轻应用-获取视频理解异步任务结果
 *
 * @param request GetVideoAnalysisTaskRequest
 * @return GetVideoAnalysisTaskResponse
 */
GetVideoAnalysisTaskResponse Client::getVideoAnalysisTask(const string &workspaceId, const GetVideoAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 热点新闻推荐
 *
 * @param request HotNewsRecommendRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotNewsRecommendResponse
 */
HotNewsRecommendResponse Client::hotNewsRecommendWithOptions(const string &workspaceId, const HotNewsRecommendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HotNewsRecommend"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/hotNewsRecommend")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotNewsRecommendResponse>();
}

/**
 * @summary 热点新闻推荐
 *
 * @param request HotNewsRecommendRequest
 * @return HotNewsRecommendResponse
 */
HotNewsRecommendResponse Client::hotNewsRecommend(const string &workspaceId, const HotNewsRecommendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return hotNewsRecommendWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取挖掘分析结果明细列表
 *
 * @param request ListAnalysisTagDetailByTaskIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnalysisTagDetailByTaskIdResponse
 */
ListAnalysisTagDetailByTaskIdResponse Client::listAnalysisTagDetailByTaskIdWithOptions(const string &workspaceId, const ListAnalysisTagDetailByTaskIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnalysisTagDetailByTaskId"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/listAnalysisTagDetailByTaskId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnalysisTagDetailByTaskIdResponse>();
}

/**
 * @summary 获取挖掘分析结果明细列表
 *
 * @param request ListAnalysisTagDetailByTaskIdRequest
 * @return ListAnalysisTagDetailByTaskIdResponse
 */
ListAnalysisTagDetailByTaskIdResponse Client::listAnalysisTagDetailByTaskId(const string &workspaceId, const ListAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAnalysisTagDetailByTaskIdWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-新闻播报-获取热点话题摘要列表
 *
 * @param request ListHotTopicSummariesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotTopicSummariesResponse
 */
ListHotTopicSummariesResponse Client::listHotTopicSummariesWithOptions(const string &workspaceId, const ListHotTopicSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasHotTopic()) {
    body["hotTopic"] = request.hotTopic();
  }

  if (!!request.hasHotTopicVersion()) {
    body["hotTopicVersion"] = request.hotTopicVersion();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotTopicSummaries"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/listHotTopicSummaries")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotTopicSummariesResponse>();
}

/**
 * @summary 轻应用-新闻播报-获取热点话题摘要列表
 *
 * @param request ListHotTopicSummariesRequest
 * @return ListHotTopicSummariesResponse
 */
ListHotTopicSummariesResponse Client::listHotTopicSummaries(const string &workspaceId, const ListHotTopicSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHotTopicSummariesWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 企业VOC分析
 *
 * @param tmpReq RunEnterpriseVocAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunEnterpriseVocAnalysisResponse
 */
FutrueGenerator<RunEnterpriseVocAnalysisResponse> Client::runEnterpriseVocAnalysisWithSSE(const string &workspaceId, const RunEnterpriseVocAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunEnterpriseVocAnalysisShrinkRequest request = RunEnterpriseVocAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterTags()) {
    request.setFilterTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterTags(), "filterTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasAkProxy()) {
    body["akProxy"] = request.akProxy();
  }

  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasFilterTagsShrink()) {
    body["filterTags"] = request.filterTagsShrink();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasSourceTrace()) {
    body["sourceTrace"] = request.sourceTrace();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunEnterpriseVocAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runEnterpriseVocAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunEnterpriseVocAnalysisResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 企业VOC分析
 *
 * @param tmpReq RunEnterpriseVocAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunEnterpriseVocAnalysisResponse
 */
RunEnterpriseVocAnalysisResponse Client::runEnterpriseVocAnalysisWithOptions(const string &workspaceId, const RunEnterpriseVocAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunEnterpriseVocAnalysisShrinkRequest request = RunEnterpriseVocAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterTags()) {
    request.setFilterTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterTags(), "filterTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasAkProxy()) {
    body["akProxy"] = request.akProxy();
  }

  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasFilterTagsShrink()) {
    body["filterTags"] = request.filterTagsShrink();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasSourceTrace()) {
    body["sourceTrace"] = request.sourceTrace();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunEnterpriseVocAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runEnterpriseVocAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunEnterpriseVocAnalysisResponse>();
}

/**
 * @summary 企业VOC分析
 *
 * @param request RunEnterpriseVocAnalysisRequest
 * @return RunEnterpriseVocAnalysisResponse
 */
RunEnterpriseVocAnalysisResponse Client::runEnterpriseVocAnalysis(const string &workspaceId, const RunEnterpriseVocAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runEnterpriseVocAnalysisWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 作业批改
 *
 * @param request RunEssayCorrectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunEssayCorrectionResponse
 */
FutrueGenerator<RunEssayCorrectionResponse> Client::runEssayCorrectionWithSSE(const string &workspaceId, const RunEssayCorrectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnswer()) {
    body["answer"] = request.answer();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.grade();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOtherReviewPoints()) {
    body["otherReviewPoints"] = request.otherReviewPoints();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.question();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTotalScore()) {
    body["totalScore"] = request.totalScore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunEssayCorrection"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runEssayCorrection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunEssayCorrectionResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 作业批改
 *
 * @param request RunEssayCorrectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunEssayCorrectionResponse
 */
RunEssayCorrectionResponse Client::runEssayCorrectionWithOptions(const string &workspaceId, const RunEssayCorrectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnswer()) {
    body["answer"] = request.answer();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.grade();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOtherReviewPoints()) {
    body["otherReviewPoints"] = request.otherReviewPoints();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.question();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTotalScore()) {
    body["totalScore"] = request.totalScore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunEssayCorrection"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runEssayCorrection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunEssayCorrectionResponse>();
}

/**
 * @summary 作业批改
 *
 * @param request RunEssayCorrectionRequest
 * @return RunEssayCorrectionResponse
 */
RunEssayCorrectionResponse Client::runEssayCorrection(const string &workspaceId, const RunEssayCorrectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runEssayCorrectionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-热点播报-问答
 *
 * @param tmpReq RunHotTopicChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotTopicChatResponse
 */
FutrueGenerator<RunHotTopicChatResponse> Client::runHotTopicChatWithSSE(const string &workspaceId, const RunHotTopicChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunHotTopicChatShrinkRequest request = RunHotTopicChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGenerateOptions()) {
    request.setGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.generateOptions(), "generateOptions", "json"));
  }

  if (!!tmpReq.hasHotTopics()) {
    request.setHotTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotTopics(), "hotTopics", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messages(), "messages", "json"));
  }

  if (!!tmpReq.hasStepForBroadcastContentConfig()) {
    request.setStepForBroadcastContentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stepForBroadcastContentConfig(), "stepForBroadcastContentConfig", "json"));
  }

  json body = {};
  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasGenerateOptionsShrink()) {
    body["generateOptions"] = request.generateOptionsShrink();
  }

  if (!!request.hasHotTopicVersion()) {
    body["hotTopicVersion"] = request.hotTopicVersion();
  }

  if (!!request.hasHotTopicsShrink()) {
    body["hotTopics"] = request.hotTopicsShrink();
  }

  if (!!request.hasImageCount()) {
    body["imageCount"] = request.imageCount();
  }

  if (!!request.hasMessagesShrink()) {
    body["messages"] = request.messagesShrink();
  }

  if (!!request.hasModelCustomPromptTemplate()) {
    body["modelCustomPromptTemplate"] = request.modelCustomPromptTemplate();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["originalSessionId"] = request.originalSessionId();
  }

  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  if (!!request.hasStepForBroadcastContentConfigShrink()) {
    body["stepForBroadcastContentConfig"] = request.stepForBroadcastContentConfigShrink();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunHotTopicChat"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runHotTopicChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunHotTopicChatResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 轻应用-热点播报-问答
 *
 * @param tmpReq RunHotTopicChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotTopicChatResponse
 */
RunHotTopicChatResponse Client::runHotTopicChatWithOptions(const string &workspaceId, const RunHotTopicChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunHotTopicChatShrinkRequest request = RunHotTopicChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGenerateOptions()) {
    request.setGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.generateOptions(), "generateOptions", "json"));
  }

  if (!!tmpReq.hasHotTopics()) {
    request.setHotTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotTopics(), "hotTopics", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messages(), "messages", "json"));
  }

  if (!!tmpReq.hasStepForBroadcastContentConfig()) {
    request.setStepForBroadcastContentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stepForBroadcastContentConfig(), "stepForBroadcastContentConfig", "json"));
  }

  json body = {};
  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasGenerateOptionsShrink()) {
    body["generateOptions"] = request.generateOptionsShrink();
  }

  if (!!request.hasHotTopicVersion()) {
    body["hotTopicVersion"] = request.hotTopicVersion();
  }

  if (!!request.hasHotTopicsShrink()) {
    body["hotTopics"] = request.hotTopicsShrink();
  }

  if (!!request.hasImageCount()) {
    body["imageCount"] = request.imageCount();
  }

  if (!!request.hasMessagesShrink()) {
    body["messages"] = request.messagesShrink();
  }

  if (!!request.hasModelCustomPromptTemplate()) {
    body["modelCustomPromptTemplate"] = request.modelCustomPromptTemplate();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["originalSessionId"] = request.originalSessionId();
  }

  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  if (!!request.hasStepForBroadcastContentConfigShrink()) {
    body["stepForBroadcastContentConfig"] = request.stepForBroadcastContentConfigShrink();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunHotTopicChat"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runHotTopicChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunHotTopicChatResponse>();
}

/**
 * @summary 轻应用-热点播报-问答
 *
 * @param request RunHotTopicChatRequest
 * @return RunHotTopicChatResponse
 */
RunHotTopicChatResponse Client::runHotTopicChat(const string &workspaceId, const RunHotTopicChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runHotTopicChatWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-热点播报-热点摘要生成
 *
 * @param tmpReq RunHotTopicSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotTopicSummaryResponse
 */
FutrueGenerator<RunHotTopicSummaryResponse> Client::runHotTopicSummaryWithSSE(const string &workspaceId, const RunHotTopicSummaryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunHotTopicSummaryShrinkRequest request = RunHotTopicSummaryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStepForCustomSummaryStyleConfig()) {
    request.setStepForCustomSummaryStyleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stepForCustomSummaryStyleConfig(), "stepForCustomSummaryStyleConfig", "json"));
  }

  if (!!tmpReq.hasTopicIds()) {
    request.setTopicIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topicIds(), "topicIds", "json"));
  }

  json body = {};
  if (!!request.hasHotTopicVersion()) {
    body["hotTopicVersion"] = request.hotTopicVersion();
  }

  if (!!request.hasStepForCustomSummaryStyleConfigShrink()) {
    body["stepForCustomSummaryStyleConfig"] = request.stepForCustomSummaryStyleConfigShrink();
  }

  if (!!request.hasTopicIdsShrink()) {
    body["topicIds"] = request.topicIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunHotTopicSummary"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runHotTopicSummary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunHotTopicSummaryResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 轻应用-热点播报-热点摘要生成
 *
 * @param tmpReq RunHotTopicSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotTopicSummaryResponse
 */
RunHotTopicSummaryResponse Client::runHotTopicSummaryWithOptions(const string &workspaceId, const RunHotTopicSummaryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunHotTopicSummaryShrinkRequest request = RunHotTopicSummaryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStepForCustomSummaryStyleConfig()) {
    request.setStepForCustomSummaryStyleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stepForCustomSummaryStyleConfig(), "stepForCustomSummaryStyleConfig", "json"));
  }

  if (!!tmpReq.hasTopicIds()) {
    request.setTopicIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topicIds(), "topicIds", "json"));
  }

  json body = {};
  if (!!request.hasHotTopicVersion()) {
    body["hotTopicVersion"] = request.hotTopicVersion();
  }

  if (!!request.hasStepForCustomSummaryStyleConfigShrink()) {
    body["stepForCustomSummaryStyleConfig"] = request.stepForCustomSummaryStyleConfigShrink();
  }

  if (!!request.hasTopicIdsShrink()) {
    body["topicIds"] = request.topicIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunHotTopicSummary"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runHotTopicSummary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunHotTopicSummaryResponse>();
}

/**
 * @summary 轻应用-热点播报-热点摘要生成
 *
 * @param request RunHotTopicSummaryRequest
 * @return RunHotTopicSummaryResponse
 */
RunHotTopicSummaryResponse Client::runHotTopicSummary(const string &workspaceId, const RunHotTopicSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runHotTopicSummaryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 营销信息抽取服务
 *
 * @param tmpReq RunMarketingInformationExtractRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMarketingInformationExtractResponse
 */
FutrueGenerator<RunMarketingInformationExtractResponse> Client::runMarketingInformationExtractWithSSE(const string &workspaceId, const RunMarketingInformationExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunMarketingInformationExtractShrinkRequest request = RunMarketingInformationExtractShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceMaterials()) {
    request.setSourceMaterialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMaterials(), "sourceMaterials", "json"));
  }

  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.customPrompt();
  }

  if (!!request.hasExtractType()) {
    body["extractType"] = request.extractType();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasSourceMaterialsShrink()) {
    body["sourceMaterials"] = request.sourceMaterialsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunMarketingInformationExtract"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runMarketingInformationExtract")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunMarketingInformationExtractResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 营销信息抽取服务
 *
 * @param tmpReq RunMarketingInformationExtractRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMarketingInformationExtractResponse
 */
RunMarketingInformationExtractResponse Client::runMarketingInformationExtractWithOptions(const string &workspaceId, const RunMarketingInformationExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunMarketingInformationExtractShrinkRequest request = RunMarketingInformationExtractShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceMaterials()) {
    request.setSourceMaterialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMaterials(), "sourceMaterials", "json"));
  }

  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.customPrompt();
  }

  if (!!request.hasExtractType()) {
    body["extractType"] = request.extractType();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasSourceMaterialsShrink()) {
    body["sourceMaterials"] = request.sourceMaterialsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunMarketingInformationExtract"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runMarketingInformationExtract")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunMarketingInformationExtractResponse>();
}

/**
 * @summary 营销信息抽取服务
 *
 * @param request RunMarketingInformationExtractRequest
 * @return RunMarketingInformationExtractResponse
 */
RunMarketingInformationExtractResponse Client::runMarketingInformationExtract(const string &workspaceId, const RunMarketingInformationExtractRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runMarketingInformationExtractWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 营销文案写作服务
 *
 * @param request RunMarketingInformationWritingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMarketingInformationWritingResponse
 */
FutrueGenerator<RunMarketingInformationWritingResponse> Client::runMarketingInformationWritingWithSSE(const string &workspaceId, const RunMarketingInformationWritingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasCustomLimitation()) {
    body["customLimitation"] = request.customLimitation();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.customPrompt();
  }

  if (!!request.hasInputExample()) {
    body["inputExample"] = request.inputExample();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputExample()) {
    body["outputExample"] = request.outputExample();
  }

  if (!!request.hasSourceMaterial()) {
    body["sourceMaterial"] = request.sourceMaterial();
  }

  if (!!request.hasWritingType()) {
    body["writingType"] = request.writingType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunMarketingInformationWriting"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runMarketingInformationWriting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunMarketingInformationWritingResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 营销文案写作服务
 *
 * @param request RunMarketingInformationWritingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMarketingInformationWritingResponse
 */
RunMarketingInformationWritingResponse Client::runMarketingInformationWritingWithOptions(const string &workspaceId, const RunMarketingInformationWritingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasCustomLimitation()) {
    body["customLimitation"] = request.customLimitation();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.customPrompt();
  }

  if (!!request.hasInputExample()) {
    body["inputExample"] = request.inputExample();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputExample()) {
    body["outputExample"] = request.outputExample();
  }

  if (!!request.hasSourceMaterial()) {
    body["sourceMaterial"] = request.sourceMaterial();
  }

  if (!!request.hasWritingType()) {
    body["writingType"] = request.writingType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunMarketingInformationWriting"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runMarketingInformationWriting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunMarketingInformationWritingResponse>();
}

/**
 * @summary 营销文案写作服务
 *
 * @param request RunMarketingInformationWritingRequest
 * @return RunMarketingInformationWritingResponse
 */
RunMarketingInformationWritingResponse Client::runMarketingInformationWriting(const string &workspaceId, const RunMarketingInformationWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runMarketingInformationWritingWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-网络内容审核
 *
 * @param tmpReq RunNetworkContentAuditRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNetworkContentAuditResponse
 */
FutrueGenerator<RunNetworkContentAuditResponse> Client::runNetworkContentAuditWithSSE(const string &workspaceId, const RunNetworkContentAuditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunNetworkContentAuditShrinkRequest request = RunNetworkContentAuditShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunNetworkContentAudit"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runNetworkContentAudit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunNetworkContentAuditResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 轻应用-网络内容审核
 *
 * @param tmpReq RunNetworkContentAuditRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunNetworkContentAuditResponse
 */
RunNetworkContentAuditResponse Client::runNetworkContentAuditWithOptions(const string &workspaceId, const RunNetworkContentAuditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunNetworkContentAuditShrinkRequest request = RunNetworkContentAuditShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunNetworkContentAudit"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runNetworkContentAudit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunNetworkContentAuditResponse>();
}

/**
 * @summary 轻应用-网络内容审核
 *
 * @param request RunNetworkContentAuditRequest
 * @return RunNetworkContentAuditResponse
 */
RunNetworkContentAuditResponse Client::runNetworkContentAudit(const string &workspaceId, const RunNetworkContentAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runNetworkContentAuditWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 作业批改
 *
 * @param request RunOcrParseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunOcrParseResponse
 */
FutrueGenerator<RunOcrParseResponse> Client::runOcrParseWithSSE(const string &workspaceId, const RunOcrParseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["fileKey"] = request.fileKey();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunOcrParse"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runOcrParse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunOcrParseResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 作业批改
 *
 * @param request RunOcrParseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunOcrParseResponse
 */
RunOcrParseResponse Client::runOcrParseWithOptions(const string &workspaceId, const RunOcrParseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["fileKey"] = request.fileKey();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunOcrParse"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runOcrParse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunOcrParseResponse>();
}

/**
 * @summary 作业批改
 *
 * @param request RunOcrParseRequest
 * @return RunOcrParseResponse
 */
RunOcrParseResponse Client::runOcrParse(const string &workspaceId, const RunOcrParseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runOcrParseWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 长剧本创作
 *
 * @param request RunScriptChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptChatResponse
 */
FutrueGenerator<RunScriptChatResponse> Client::runScriptChatWithSSE(const string &workspaceId, const RunScriptChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptChat"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunScriptChatResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 长剧本创作
 *
 * @param request RunScriptChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptChatResponse
 */
RunScriptChatResponse Client::runScriptChatWithOptions(const string &workspaceId, const RunScriptChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["prompt"] = request.prompt();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptChat"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunScriptChatResponse>();
}

/**
 * @summary 长剧本创作
 *
 * @param request RunScriptChatRequest
 * @return RunScriptChatResponse
 */
RunScriptChatResponse Client::runScriptChat(const string &workspaceId, const RunScriptChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runScriptChatWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 剧本续写
 *
 * @param request RunScriptContinueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptContinueResponse
 */
FutrueGenerator<RunScriptContinueResponse> Client::runScriptContinueWithSSE(const string &workspaceId, const RunScriptContinueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScriptSummary()) {
    body["scriptSummary"] = request.scriptSummary();
  }

  if (!!request.hasScriptTypeKeyword()) {
    body["scriptTypeKeyword"] = request.scriptTypeKeyword();
  }

  if (!!request.hasUserProvidedContent()) {
    body["userProvidedContent"] = request.userProvidedContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptContinue"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptContinue")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunScriptContinueResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 剧本续写
 *
 * @param request RunScriptContinueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptContinueResponse
 */
RunScriptContinueResponse Client::runScriptContinueWithOptions(const string &workspaceId, const RunScriptContinueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScriptSummary()) {
    body["scriptSummary"] = request.scriptSummary();
  }

  if (!!request.hasScriptTypeKeyword()) {
    body["scriptTypeKeyword"] = request.scriptTypeKeyword();
  }

  if (!!request.hasUserProvidedContent()) {
    body["userProvidedContent"] = request.userProvidedContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptContinue"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptContinue")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunScriptContinueResponse>();
}

/**
 * @summary 剧本续写
 *
 * @param request RunScriptContinueRequest
 * @return RunScriptContinueResponse
 */
RunScriptContinueResponse Client::runScriptContinue(const string &workspaceId, const RunScriptContinueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runScriptContinueWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 剧本策划
 *
 * @param request RunScriptPlanningRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptPlanningResponse
 */
FutrueGenerator<RunScriptPlanningResponse> Client::runScriptPlanningWithSSE(const string &workspaceId, const RunScriptPlanningRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalNote()) {
    body["additionalNote"] = request.additionalNote();
  }

  if (!!request.hasDialogueInScene()) {
    body["dialogueInScene"] = request.dialogueInScene();
  }

  if (!!request.hasPlotConflict()) {
    body["plotConflict"] = request.plotConflict();
  }

  if (!!request.hasScriptName()) {
    body["scriptName"] = request.scriptName();
  }

  if (!!request.hasScriptShotCount()) {
    body["scriptShotCount"] = request.scriptShotCount();
  }

  if (!!request.hasScriptSummary()) {
    body["scriptSummary"] = request.scriptSummary();
  }

  if (!!request.hasScriptTypeKeyword()) {
    body["scriptTypeKeyword"] = request.scriptTypeKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptPlanning"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptPlanning")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunScriptPlanningResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 剧本策划
 *
 * @param request RunScriptPlanningRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptPlanningResponse
 */
RunScriptPlanningResponse Client::runScriptPlanningWithOptions(const string &workspaceId, const RunScriptPlanningRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalNote()) {
    body["additionalNote"] = request.additionalNote();
  }

  if (!!request.hasDialogueInScene()) {
    body["dialogueInScene"] = request.dialogueInScene();
  }

  if (!!request.hasPlotConflict()) {
    body["plotConflict"] = request.plotConflict();
  }

  if (!!request.hasScriptName()) {
    body["scriptName"] = request.scriptName();
  }

  if (!!request.hasScriptShotCount()) {
    body["scriptShotCount"] = request.scriptShotCount();
  }

  if (!!request.hasScriptSummary()) {
    body["scriptSummary"] = request.scriptSummary();
  }

  if (!!request.hasScriptTypeKeyword()) {
    body["scriptTypeKeyword"] = request.scriptTypeKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptPlanning"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptPlanning")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunScriptPlanningResponse>();
}

/**
 * @summary 剧本策划
 *
 * @param request RunScriptPlanningRequest
 * @return RunScriptPlanningResponse
 */
RunScriptPlanningResponse Client::runScriptPlanning(const string &workspaceId, const RunScriptPlanningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runScriptPlanningWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 剧本对话内容的整理
 *
 * @param request RunScriptRefineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptRefineResponse
 */
FutrueGenerator<RunScriptRefineResponse> Client::runScriptRefineWithSSE(const string &workspaceId, const RunScriptRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptRefine"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptRefine")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunScriptRefineResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 剧本对话内容的整理
 *
 * @param request RunScriptRefineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunScriptRefineResponse
 */
RunScriptRefineResponse Client::runScriptRefineWithOptions(const string &workspaceId, const RunScriptRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunScriptRefine"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runScriptRefine")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunScriptRefineResponse>();
}

/**
 * @summary 剧本对话内容的整理
 *
 * @param request RunScriptRefineRequest
 * @return RunScriptRefineResponse
 */
RunScriptRefineResponse Client::runScriptRefine(const string &workspaceId, const RunScriptRefineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runScriptRefineWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 文体学习和写作推理服务
 *
 * @param tmpReq RunStyleWritingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStyleWritingResponse
 */
FutrueGenerator<RunStyleWritingResponse> Client::runStyleWritingWithSSE(const string &workspaceId, const RunStyleWritingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStyleWritingShrinkRequest request = RunStyleWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLearningSamples()) {
    request.setLearningSamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.learningSamples(), "learningSamples", "json"));
  }

  if (!!tmpReq.hasReferenceMaterials()) {
    request.setReferenceMaterialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.referenceMaterials(), "referenceMaterials", "json"));
  }

  json body = {};
  if (!!request.hasLearningSamplesShrink()) {
    body["learningSamples"] = request.learningSamplesShrink();
  }

  if (!!request.hasProcessStage()) {
    body["processStage"] = request.processStage();
  }

  if (!!request.hasReferenceMaterialsShrink()) {
    body["referenceMaterials"] = request.referenceMaterialsShrink();
  }

  if (!!request.hasStyleFeature()) {
    body["styleFeature"] = request.styleFeature();
  }

  if (!!request.hasUseSearch()) {
    body["useSearch"] = request.useSearch();
  }

  if (!!request.hasWritingTheme()) {
    body["writingTheme"] = request.writingTheme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunStyleWriting"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runStyleWriting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunStyleWritingResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 文体学习和写作推理服务
 *
 * @param tmpReq RunStyleWritingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStyleWritingResponse
 */
RunStyleWritingResponse Client::runStyleWritingWithOptions(const string &workspaceId, const RunStyleWritingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStyleWritingShrinkRequest request = RunStyleWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLearningSamples()) {
    request.setLearningSamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.learningSamples(), "learningSamples", "json"));
  }

  if (!!tmpReq.hasReferenceMaterials()) {
    request.setReferenceMaterialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.referenceMaterials(), "referenceMaterials", "json"));
  }

  json body = {};
  if (!!request.hasLearningSamplesShrink()) {
    body["learningSamples"] = request.learningSamplesShrink();
  }

  if (!!request.hasProcessStage()) {
    body["processStage"] = request.processStage();
  }

  if (!!request.hasReferenceMaterialsShrink()) {
    body["referenceMaterials"] = request.referenceMaterialsShrink();
  }

  if (!!request.hasStyleFeature()) {
    body["styleFeature"] = request.styleFeature();
  }

  if (!!request.hasUseSearch()) {
    body["useSearch"] = request.useSearch();
  }

  if (!!request.hasWritingTheme()) {
    body["writingTheme"] = request.writingTheme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunStyleWriting"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runStyleWriting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunStyleWritingResponse>();
}

/**
 * @summary 文体学习和写作推理服务
 *
 * @param request RunStyleWritingRequest
 * @return RunStyleWritingResponse
 */
RunStyleWritingResponse Client::runStyleWriting(const string &workspaceId, const RunStyleWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runStyleWritingWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-标签挖掘
 *
 * @param tmpReq RunTagMiningAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTagMiningAnalysisResponse
 */
FutrueGenerator<RunTagMiningAnalysisResponse> Client::runTagMiningAnalysisWithSSE(const string &workspaceId, const RunTagMiningAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTagMiningAnalysisShrinkRequest request = RunTagMiningAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunTagMiningAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runTagMiningAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunTagMiningAnalysisResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 轻应用-标签挖掘
 *
 * @param tmpReq RunTagMiningAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTagMiningAnalysisResponse
 */
RunTagMiningAnalysisResponse Client::runTagMiningAnalysisWithOptions(const string &workspaceId, const RunTagMiningAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTagMiningAnalysisShrinkRequest request = RunTagMiningAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunTagMiningAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runTagMiningAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTagMiningAnalysisResponse>();
}

/**
 * @summary 轻应用-标签挖掘
 *
 * @param request RunTagMiningAnalysisRequest
 * @return RunTagMiningAnalysisResponse
 */
RunTagMiningAnalysisResponse Client::runTagMiningAnalysis(const string &workspaceId, const RunTagMiningAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runTagMiningAnalysisWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-视频理解
 *
 * @param tmpReq RunVideoAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunVideoAnalysisResponse
 */
FutrueGenerator<RunVideoAnalysisResponse> Client::runVideoAnalysisWithSSE(const string &workspaceId, const RunVideoAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunVideoAnalysisShrinkRequest request = RunVideoAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeGenerateOptions()) {
    request.setExcludeGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.excludeGenerateOptions(), "excludeGenerateOptions", "json"));
  }

  if (!!tmpReq.hasFrameSampleMethod()) {
    request.setFrameSampleMethodShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.frameSampleMethod(), "frameSampleMethod", "json"));
  }

  if (!!tmpReq.hasGenerateOptions()) {
    request.setGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.generateOptions(), "generateOptions", "json"));
  }

  if (!!tmpReq.hasTextProcessTasks()) {
    request.setTextProcessTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textProcessTasks(), "textProcessTasks", "json"));
  }

  if (!!tmpReq.hasVideoCaptionInfo()) {
    request.setVideoCaptionInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoCaptionInfo(), "videoCaptionInfo", "json"));
  }

  if (!!tmpReq.hasVideoRoles()) {
    request.setVideoRolesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoRoles(), "videoRoles", "json"));
  }

  json body = {};
  if (!!request.hasAutoRoleRecognitionVideoUrl()) {
    body["autoRoleRecognitionVideoUrl"] = request.autoRoleRecognitionVideoUrl();
  }

  if (!!request.hasExcludeGenerateOptionsShrink()) {
    body["excludeGenerateOptions"] = request.excludeGenerateOptionsShrink();
  }

  if (!!request.hasFaceIdentitySimilarityMinScore()) {
    body["faceIdentitySimilarityMinScore"] = request.faceIdentitySimilarityMinScore();
  }

  if (!!request.hasFrameSampleMethodShrink()) {
    body["frameSampleMethod"] = request.frameSampleMethodShrink();
  }

  if (!!request.hasGenerateOptionsShrink()) {
    body["generateOptions"] = request.generateOptionsShrink();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasModelCustomPromptTemplate()) {
    body["modelCustomPromptTemplate"] = request.modelCustomPromptTemplate();
  }

  if (!!request.hasModelCustomPromptTemplateId()) {
    body["modelCustomPromptTemplateId"] = request.modelCustomPromptTemplateId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["originalSessionId"] = request.originalSessionId();
  }

  if (!!request.hasSnapshotInterval()) {
    body["snapshotInterval"] = request.snapshotInterval();
  }

  if (!!request.hasSplitInterval()) {
    body["splitInterval"] = request.splitInterval();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasTextProcessTasksShrink()) {
    body["textProcessTasks"] = request.textProcessTasksShrink();
  }

  if (!!request.hasVideoCaptionInfoShrink()) {
    body["videoCaptionInfo"] = request.videoCaptionInfoShrink();
  }

  if (!!request.hasVideoExtraInfo()) {
    body["videoExtraInfo"] = request.videoExtraInfo();
  }

  if (!!request.hasVideoModelCustomPromptTemplate()) {
    body["videoModelCustomPromptTemplate"] = request.videoModelCustomPromptTemplate();
  }

  if (!!request.hasVideoModelId()) {
    body["videoModelId"] = request.videoModelId();
  }

  if (!!request.hasVideoRolesShrink()) {
    body["videoRoles"] = request.videoRolesShrink();
  }

  if (!!request.hasVideoShotFaceIdentityCount()) {
    body["videoShotFaceIdentityCount"] = request.videoShotFaceIdentityCount();
  }

  if (!!request.hasVideoUrl()) {
    body["videoUrl"] = request.videoUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunVideoAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runVideoAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunVideoAnalysisResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 轻应用-视频理解
 *
 * @param tmpReq RunVideoAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunVideoAnalysisResponse
 */
RunVideoAnalysisResponse Client::runVideoAnalysisWithOptions(const string &workspaceId, const RunVideoAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunVideoAnalysisShrinkRequest request = RunVideoAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeGenerateOptions()) {
    request.setExcludeGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.excludeGenerateOptions(), "excludeGenerateOptions", "json"));
  }

  if (!!tmpReq.hasFrameSampleMethod()) {
    request.setFrameSampleMethodShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.frameSampleMethod(), "frameSampleMethod", "json"));
  }

  if (!!tmpReq.hasGenerateOptions()) {
    request.setGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.generateOptions(), "generateOptions", "json"));
  }

  if (!!tmpReq.hasTextProcessTasks()) {
    request.setTextProcessTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textProcessTasks(), "textProcessTasks", "json"));
  }

  if (!!tmpReq.hasVideoCaptionInfo()) {
    request.setVideoCaptionInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoCaptionInfo(), "videoCaptionInfo", "json"));
  }

  if (!!tmpReq.hasVideoRoles()) {
    request.setVideoRolesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoRoles(), "videoRoles", "json"));
  }

  json body = {};
  if (!!request.hasAutoRoleRecognitionVideoUrl()) {
    body["autoRoleRecognitionVideoUrl"] = request.autoRoleRecognitionVideoUrl();
  }

  if (!!request.hasExcludeGenerateOptionsShrink()) {
    body["excludeGenerateOptions"] = request.excludeGenerateOptionsShrink();
  }

  if (!!request.hasFaceIdentitySimilarityMinScore()) {
    body["faceIdentitySimilarityMinScore"] = request.faceIdentitySimilarityMinScore();
  }

  if (!!request.hasFrameSampleMethodShrink()) {
    body["frameSampleMethod"] = request.frameSampleMethodShrink();
  }

  if (!!request.hasGenerateOptionsShrink()) {
    body["generateOptions"] = request.generateOptionsShrink();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasModelCustomPromptTemplate()) {
    body["modelCustomPromptTemplate"] = request.modelCustomPromptTemplate();
  }

  if (!!request.hasModelCustomPromptTemplateId()) {
    body["modelCustomPromptTemplateId"] = request.modelCustomPromptTemplateId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["originalSessionId"] = request.originalSessionId();
  }

  if (!!request.hasSnapshotInterval()) {
    body["snapshotInterval"] = request.snapshotInterval();
  }

  if (!!request.hasSplitInterval()) {
    body["splitInterval"] = request.splitInterval();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasTextProcessTasksShrink()) {
    body["textProcessTasks"] = request.textProcessTasksShrink();
  }

  if (!!request.hasVideoCaptionInfoShrink()) {
    body["videoCaptionInfo"] = request.videoCaptionInfoShrink();
  }

  if (!!request.hasVideoExtraInfo()) {
    body["videoExtraInfo"] = request.videoExtraInfo();
  }

  if (!!request.hasVideoModelCustomPromptTemplate()) {
    body["videoModelCustomPromptTemplate"] = request.videoModelCustomPromptTemplate();
  }

  if (!!request.hasVideoModelId()) {
    body["videoModelId"] = request.videoModelId();
  }

  if (!!request.hasVideoRolesShrink()) {
    body["videoRoles"] = request.videoRolesShrink();
  }

  if (!!request.hasVideoShotFaceIdentityCount()) {
    body["videoShotFaceIdentityCount"] = request.videoShotFaceIdentityCount();
  }

  if (!!request.hasVideoUrl()) {
    body["videoUrl"] = request.videoUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunVideoAnalysis"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/runVideoAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunVideoAnalysisResponse>();
}

/**
 * @summary 轻应用-视频理解
 *
 * @param request RunVideoAnalysisRequest
 * @return RunVideoAnalysisResponse
 */
RunVideoAnalysisResponse Client::runVideoAnalysis(const string &workspaceId, const RunVideoAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runVideoAnalysisWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 提交企业VOC异步任务
 *
 * @param tmpReq SubmitEnterpriseVocAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEnterpriseVocAnalysisTaskResponse
 */
SubmitEnterpriseVocAnalysisTaskResponse Client::submitEnterpriseVocAnalysisTaskWithOptions(const string &workspaceId, const SubmitEnterpriseVocAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitEnterpriseVocAnalysisTaskShrinkRequest request = SubmitEnterpriseVocAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contents(), "contents", "json"));
  }

  if (!!tmpReq.hasFilterTags()) {
    request.setFilterTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterTags(), "filterTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasContentsShrink()) {
    body["contents"] = request.contentsShrink();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasFileKey()) {
    body["fileKey"] = request.fileKey();
  }

  if (!!request.hasFilterTagsShrink()) {
    body["filterTags"] = request.filterTagsShrink();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasSourceTrace()) {
    body["sourceTrace"] = request.sourceTrace();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitEnterpriseVocAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/submitEnterpriseVocAnalysisTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitEnterpriseVocAnalysisTaskResponse>();
}

/**
 * @summary 提交企业VOC异步任务
 *
 * @param request SubmitEnterpriseVocAnalysisTaskRequest
 * @return SubmitEnterpriseVocAnalysisTaskResponse
 */
SubmitEnterpriseVocAnalysisTaskResponse Client::submitEnterpriseVocAnalysisTask(const string &workspaceId, const SubmitEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitEnterpriseVocAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 提交批改任务
 *
 * @param tmpReq SubmitEssayCorrectionTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEssayCorrectionTaskResponse
 */
SubmitEssayCorrectionTaskResponse Client::submitEssayCorrectionTaskWithOptions(const string &workspaceId, const SubmitEssayCorrectionTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitEssayCorrectionTaskShrinkRequest request = SubmitEssayCorrectionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tasks(), "tasks", "json"));
  }

  json body = {};
  if (!!request.hasGrade()) {
    body["grade"] = request.grade();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOtherReviewPoints()) {
    body["otherReviewPoints"] = request.otherReviewPoints();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.question();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTasksShrink()) {
    body["tasks"] = request.tasksShrink();
  }

  if (!!request.hasTotalScore()) {
    body["totalScore"] = request.totalScore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitEssayCorrectionTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/submitEssayCorrectionTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitEssayCorrectionTaskResponse>();
}

/**
 * @summary 提交批改任务
 *
 * @param request SubmitEssayCorrectionTaskRequest
 * @return SubmitEssayCorrectionTaskResponse
 */
SubmitEssayCorrectionTaskResponse Client::submitEssayCorrectionTask(const string &workspaceId, const SubmitEssayCorrectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitEssayCorrectionTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-标签挖掘
 *
 * @param tmpReq SubmitTagMiningAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTagMiningAnalysisTaskResponse
 */
SubmitTagMiningAnalysisTaskResponse Client::submitTagMiningAnalysisTaskWithOptions(const string &workspaceId, const SubmitTagMiningAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTagMiningAnalysisTaskShrinkRequest request = SubmitTagMiningAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contents(), "contents", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.apiKey();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.businessType();
  }

  if (!!request.hasContentsShrink()) {
    body["contents"] = request.contentsShrink();
  }

  if (!!request.hasExtraInfo()) {
    body["extraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasOutputFormat()) {
    body["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.taskDescription();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitTagMiningAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/submitTagMiningAnalysisTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTagMiningAnalysisTaskResponse>();
}

/**
 * @summary 轻应用-标签挖掘
 *
 * @param request SubmitTagMiningAnalysisTaskRequest
 * @return SubmitTagMiningAnalysisTaskResponse
 */
SubmitTagMiningAnalysisTaskResponse Client::submitTagMiningAnalysisTask(const string &workspaceId, const SubmitTagMiningAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitTagMiningAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 轻应用-提交视频理解任务
 *
 * @param tmpReq SubmitVideoAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoAnalysisTaskResponse
 */
SubmitVideoAnalysisTaskResponse Client::submitVideoAnalysisTaskWithOptions(const string &workspaceId, const SubmitVideoAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitVideoAnalysisTaskShrinkRequest request = SubmitVideoAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeGenerateOptions()) {
    request.setExcludeGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.excludeGenerateOptions(), "excludeGenerateOptions", "json"));
  }

  if (!!tmpReq.hasFrameSampleMethod()) {
    request.setFrameSampleMethodShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.frameSampleMethod(), "frameSampleMethod", "json"));
  }

  if (!!tmpReq.hasGenerateOptions()) {
    request.setGenerateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.generateOptions(), "generateOptions", "json"));
  }

  if (!!tmpReq.hasTextProcessTasks()) {
    request.setTextProcessTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textProcessTasks(), "textProcessTasks", "json"));
  }

  if (!!tmpReq.hasVideoCaptionInfo()) {
    request.setVideoCaptionInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoCaptionInfo(), "videoCaptionInfo", "json"));
  }

  if (!!tmpReq.hasVideoRoles()) {
    request.setVideoRolesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoRoles(), "videoRoles", "json"));
  }

  json body = {};
  if (!!request.hasAutoRoleRecognitionVideoUrl()) {
    body["autoRoleRecognitionVideoUrl"] = request.autoRoleRecognitionVideoUrl();
  }

  if (!!request.hasDeduplicationId()) {
    body["deduplicationId"] = request.deduplicationId();
  }

  if (!!request.hasExcludeGenerateOptionsShrink()) {
    body["excludeGenerateOptions"] = request.excludeGenerateOptionsShrink();
  }

  if (!!request.hasFaceIdentitySimilarityMinScore()) {
    body["faceIdentitySimilarityMinScore"] = request.faceIdentitySimilarityMinScore();
  }

  if (!!request.hasFrameSampleMethodShrink()) {
    body["frameSampleMethod"] = request.frameSampleMethodShrink();
  }

  if (!!request.hasGenerateOptionsShrink()) {
    body["generateOptions"] = request.generateOptionsShrink();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasModelCustomPromptTemplate()) {
    body["modelCustomPromptTemplate"] = request.modelCustomPromptTemplate();
  }

  if (!!request.hasModelCustomPromptTemplateId()) {
    body["modelCustomPromptTemplateId"] = request.modelCustomPromptTemplateId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasSnapshotInterval()) {
    body["snapshotInterval"] = request.snapshotInterval();
  }

  if (!!request.hasSplitInterval()) {
    body["splitInterval"] = request.splitInterval();
  }

  if (!!request.hasTextProcessTasksShrink()) {
    body["textProcessTasks"] = request.textProcessTasksShrink();
  }

  if (!!request.hasVideoCaptionInfoShrink()) {
    body["videoCaptionInfo"] = request.videoCaptionInfoShrink();
  }

  if (!!request.hasVideoExtraInfo()) {
    body["videoExtraInfo"] = request.videoExtraInfo();
  }

  if (!!request.hasVideoModelCustomPromptTemplate()) {
    body["videoModelCustomPromptTemplate"] = request.videoModelCustomPromptTemplate();
  }

  if (!!request.hasVideoModelId()) {
    body["videoModelId"] = request.videoModelId();
  }

  if (!!request.hasVideoRolesShrink()) {
    body["videoRoles"] = request.videoRolesShrink();
  }

  if (!!request.hasVideoShotFaceIdentityCount()) {
    body["videoShotFaceIdentityCount"] = request.videoShotFaceIdentityCount();
  }

  if (!!request.hasVideoUrl()) {
    body["videoUrl"] = request.videoUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitVideoAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/videoAnalysis/submitVideoAnalysisTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoAnalysisTaskResponse>();
}

/**
 * @summary 轻应用-提交视频理解任务
 *
 * @param request SubmitVideoAnalysisTaskRequest
 * @return SubmitVideoAnalysisTaskResponse
 */
SubmitVideoAnalysisTaskResponse Client::submitVideoAnalysisTask(const string &workspaceId, const SubmitVideoAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 视频理解-更新配置
 *
 * @param request UpdateVideoAnalysisConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoAnalysisConfigResponse
 */
UpdateVideoAnalysisConfigResponse Client::updateVideoAnalysisConfigWithOptions(const string &workspaceId, const UpdateVideoAnalysisConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsyncConcurrency()) {
    body["asyncConcurrency"] = request.asyncConcurrency();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVideoAnalysisConfig"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/videoAnalysis/updateVideoAnalysisConfig")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoAnalysisConfigResponse>();
}

/**
 * @summary 视频理解-更新配置
 *
 * @param request UpdateVideoAnalysisConfigRequest
 * @return UpdateVideoAnalysisConfigResponse
 */
UpdateVideoAnalysisConfigResponse Client::updateVideoAnalysisConfig(const string &workspaceId, const UpdateVideoAnalysisConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVideoAnalysisConfigWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 视频理解-修改任务状态
 *
 * @param request UpdateVideoAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoAnalysisTaskResponse
 */
UpdateVideoAnalysisTaskResponse Client::updateVideoAnalysisTaskWithOptions(const string &workspaceId, const UpdateVideoAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasTaskStatus()) {
    body["taskStatus"] = request.taskStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVideoAnalysisTask"},
    {"version" , "2024-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Http::URL::percentEncode(workspaceId) , "/quanmiao/lightapp/videoAnalysis/updateVideoAnalysisTask")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoAnalysisTaskResponse>();
}

/**
 * @summary 视频理解-修改任务状态
 *
 * @param request UpdateVideoAnalysisTaskRequest
 * @return UpdateVideoAnalysisTaskResponse
 */
UpdateVideoAnalysisTaskResponse Client::updateVideoAnalysisTask(const string &workspaceId, const UpdateVideoAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801