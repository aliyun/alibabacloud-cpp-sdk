#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20240313.hpp>
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
using namespace AlibabaCloud::IntelligentCreation20240313::Models;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{

AlibabaCloud::IntelligentCreation20240313::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 添加文案反馈
 *
 * @param request AddTextFeedbackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTextFeedbackResponse
 */
AddTextFeedbackResponse Client::addTextFeedbackWithOptions(const AddTextFeedbackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasQuality()) {
    body["quality"] = request.getQuality();
  }

  if (!!request.hasTextId()) {
    body["textId"] = request.getTextId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTextFeedback"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/addTextFeedback")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTextFeedbackResponse>();
}

/**
 * @summary 添加文案反馈
 *
 * @param request AddTextFeedbackRequest
 * @return AddTextFeedbackResponse
 */
AddTextFeedbackResponse Client::addTextFeedback(const AddTextFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addTextFeedbackWithOptions(request, headers, runtime);
}

/**
 * @summary 批量添加知识文档
 *
 * @param request BatchAddDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAddDocumentResponse
 */
BatchAddDocumentResponse Client::batchAddDocumentWithOptions(const string &knowledgeBaseId, const BatchAddDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddDocumentInfos()) {
    body["addDocumentInfos"] = request.getAddDocumentInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchAddDocument"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/knowledge-base/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseId) , "/documents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAddDocumentResponse>();
}

/**
 * @summary 批量添加知识文档
 *
 * @param request BatchAddDocumentRequest
 * @return BatchAddDocumentResponse
 */
BatchAddDocumentResponse Client::batchAddDocument(const string &knowledgeBaseId, const BatchAddDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchAddDocumentWithOptions(knowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 批量发布剧本任务
 *
 * @param request BatchCreateAICoachTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateAICoachTaskResponse
 */
BatchCreateAICoachTaskResponse Client::batchCreateAICoachTaskWithOptions(const BatchCreateAICoachTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasScriptRecordId()) {
    body["scriptRecordId"] = request.getScriptRecordId();
  }

  if (!!request.hasStudentIds()) {
    body["studentIds"] = request.getStudentIds();
  }

  if (!!request.hasStudentList()) {
    body["studentList"] = request.getStudentList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateAICoachTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/batchCreateTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateAICoachTaskResponse>();
}

/**
 * @summary 批量发布剧本任务
 *
 * @param request BatchCreateAICoachTaskRequest
 * @return BatchCreateAICoachTaskResponse
 */
BatchCreateAICoachTaskResponse Client::batchCreateAICoachTask(const BatchCreateAICoachTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchCreateAICoachTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询项目信息
 *
 * @param tmpReq BatchGetProjectTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetProjectTaskResponse
 */
BatchGetProjectTaskResponse Client::batchGetProjectTaskWithOptions(const BatchGetProjectTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetProjectTaskShrinkRequest request = BatchGetProjectTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIdList()) {
    request.setTaskIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIdList(), "taskIdList", "simple"));
  }

  json query = {};
  if (!!request.hasTaskIdListShrink()) {
    query["taskIdList"] = request.getTaskIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetProjectTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/project/batchGetProjectTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetProjectTaskResponse>();
}

/**
 * @summary 批量查询项目信息
 *
 * @param request BatchGetProjectTaskRequest
 * @return BatchGetProjectTaskResponse
 */
BatchGetProjectTaskResponse Client::batchGetProjectTask(const BatchGetProjectTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetProjectTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询声音复刻任务
 *
 * @param tmpReq BatchGetTrainTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetTrainTaskResponse
 */
BatchGetTrainTaskResponse Client::batchGetTrainTaskWithOptions(const BatchGetTrainTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetTrainTaskShrinkRequest request = BatchGetTrainTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIdList()) {
    request.setTaskIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIdList(), "taskIdList", "simple"));
  }

  json query = {};
  if (!!request.hasAliyunMainId()) {
    query["aliyunMainId"] = request.getAliyunMainId();
  }

  if (!!request.hasTaskIdListShrink()) {
    query["taskIdList"] = request.getTaskIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetTrainTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/train/task/batchGetTrainTaskInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetTrainTaskResponse>();
}

/**
 * @summary 批量查询声音复刻任务
 *
 * @param request BatchGetTrainTaskRequest
 * @return BatchGetTrainTaskResponse
 */
BatchGetTrainTaskResponse Client::batchGetTrainTask(const BatchGetTrainTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetTrainTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询视频切片任务信息
 *
 * @param tmpReq BatchGetVideoClipTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetVideoClipTaskResponse
 */
BatchGetVideoClipTaskResponse Client::batchGetVideoClipTaskWithOptions(const BatchGetVideoClipTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetVideoClipTaskShrinkRequest request = BatchGetVideoClipTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIdList()) {
    request.setTaskIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIdList(), "taskIdList", "simple"));
  }

  json query = {};
  if (!!request.hasTaskIdListShrink()) {
    query["taskIdList"] = request.getTaskIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetVideoClipTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/video/clip/batchGetVideoClipTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetVideoClipTaskResponse>();
}

/**
 * @summary 批量查询视频切片任务信息
 *
 * @param request BatchGetVideoClipTaskRequest
 * @return BatchGetVideoClipTaskResponse
 */
BatchGetVideoClipTaskResponse Client::batchGetVideoClipTask(const BatchGetVideoClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetVideoClipTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询文案
 *
 * @param tmpReq BatchQueryIndividuationTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryIndividuationTextResponse
 */
BatchQueryIndividuationTextResponse Client::batchQueryIndividuationTextWithOptions(const BatchQueryIndividuationTextRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchQueryIndividuationTextShrinkRequest request = BatchQueryIndividuationTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTextIdList()) {
    request.setTextIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTextIdList(), "textIdList", "simple"));
  }

  json query = {};
  if (!!request.hasTextIdListShrink()) {
    query["textIdList"] = request.getTextIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryIndividuationText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/batchQueryText")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryIndividuationTextResponse>();
}

/**
 * @summary 批量查询文案
 *
 * @param request BatchQueryIndividuationTextRequest
 * @return BatchQueryIndividuationTextResponse
 */
BatchQueryIndividuationTextResponse Client::batchQueryIndividuationText(const BatchQueryIndividuationTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchQueryIndividuationTextWithOptions(request, headers, runtime);
}

/**
 * @summary 快速发布剧本
 *
 * @param request BuildAICoachScriptRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuildAICoachScriptRecordResponse
 */
BuildAICoachScriptRecordResponse Client::buildAICoachScriptRecordWithOptions(const BuildAICoachScriptRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScriptJsonUrl()) {
    body["scriptJsonUrl"] = request.getScriptJsonUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BuildAICoachScriptRecord"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/buildScriptRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuildAICoachScriptRecordResponse>();
}

/**
 * @summary 快速发布剧本
 *
 * @param request BuildAICoachScriptRecordRequest
 * @return BuildAICoachScriptRecordResponse
 */
BuildAICoachScriptRecordResponse Client::buildAICoachScriptRecord(const BuildAICoachScriptRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return buildAICoachScriptRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 检查会话状态
 *
 * @param request CheckSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSessionResponse
 */
CheckSessionResponse Client::checkSessionWithOptions(const CheckSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/checkSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSessionResponse>();
}

/**
 * @summary 检查会话状态
 *
 * @param request CheckSessionRequest
 * @return CheckSessionResponse
 */
CheckSessionResponse Client::checkSession(const CheckSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 学员关闭会话
 *
 * @param request CloseAICoachTaskSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseAICoachTaskSessionResponse
 */
CloseAICoachTaskSessionResponse Client::closeAICoachTaskSessionWithOptions(const CloseAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    body["uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseAICoachTaskSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/closeSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseAICoachTaskSessionResponse>();
}

/**
 * @summary 学员关闭会话
 *
 * @param request CloseAICoachTaskSessionRequest
 * @return CloseAICoachTaskSessionResponse
 */
CloseAICoachTaskSessionResponse Client::closeAICoachTaskSession(const CloseAICoachTaskSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeAICoachTaskSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 文本数量统计
 *
 * @param request CountTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountTextResponse
 */
CountTextResponse Client::countTextWithOptions(const CountTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGenerationSource()) {
    query["generationSource"] = request.getGenerationSource();
  }

  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasPublishStatus()) {
    query["publishStatus"] = request.getPublishStatus();
  }

  if (!!request.hasStyle()) {
    query["style"] = request.getStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CountText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/countText")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountTextResponse>();
}

/**
 * @summary 文本数量统计
 *
 * @param request CountTextRequest
 * @return CountTextResponse
 */
CountTextResponse Client::countText(const CountTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return countTextWithOptions(request, headers, runtime);
}

/**
 * @summary 查询剧本列表
 *
 * @param request CreateAICoachTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAICoachTaskResponse
 */
CreateAICoachTaskResponse Client::createAICoachTaskWithOptions(const CreateAICoachTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasScriptRecordId()) {
    body["scriptRecordId"] = request.getScriptRecordId();
  }

  if (!!request.hasStudentAudioUrl()) {
    body["studentAudioUrl"] = request.getStudentAudioUrl();
  }

  if (!!request.hasStudentId()) {
    body["studentId"] = request.getStudentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAICoachTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/createTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAICoachTaskResponse>();
}

/**
 * @summary 查询剧本列表
 *
 * @param request CreateAICoachTaskRequest
 * @return CreateAICoachTaskResponse
 */
CreateAICoachTaskResponse Client::createAICoachTask(const CreateAICoachTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAICoachTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 学员开启对练会话
 *
 * @param request CreateAICoachTaskSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAICoachTaskSessionResponse
 */
CreateAICoachTaskSessionResponse Client::createAICoachTaskSessionWithOptions(const CreateAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  if (!!request.hasUid()) {
    body["uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAICoachTaskSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/startSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAICoachTaskSessionResponse>();
}

/**
 * @summary 学员开启对练会话
 *
 * @param request CreateAICoachTaskSessionRequest
 * @return CreateAICoachTaskSessionResponse
 */
CreateAICoachTaskSessionResponse Client::createAICoachTaskSession(const CreateAICoachTaskSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAICoachTaskSessionWithOptions(request, headers, runtime);
}

/**
 * @summary CreateAgent
 *
 * @param request CreateAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentIconUrl()) {
    body["agentIconUrl"] = request.getAgentIconUrl();
  }

  if (!!request.hasAgentName()) {
    body["agentName"] = request.getAgentName();
  }

  if (!!request.hasAgentScene()) {
    body["agentScene"] = request.getAgentScene();
  }

  if (!!request.hasCharacterAgeStage()) {
    body["characterAgeStage"] = request.getCharacterAgeStage();
  }

  if (!!request.hasCharacterGender()) {
    body["characterGender"] = request.getCharacterGender();
  }

  if (!!request.hasCharacterName()) {
    body["characterName"] = request.getCharacterName();
  }

  if (!!request.hasExtraDescription()) {
    body["extraDescription"] = request.getExtraDescription();
  }

  if (!!request.hasIndustry()) {
    body["industry"] = request.getIndustry();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgent"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/agent/createAgent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResponse>();
}

/**
 * @summary CreateAgent
 *
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 创建照片数字人
 *
 * @param request CreateAnchorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnchorResponse
 */
CreateAnchorResponse Client::createAnchorWithOptions(const CreateAnchorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnchorCategory()) {
    body["anchorCategory"] = request.getAnchorCategory();
  }

  if (!!request.hasAnchorMaterialName()) {
    body["anchorMaterialName"] = request.getAnchorMaterialName();
  }

  if (!!request.hasCoverUrl()) {
    body["coverUrl"] = request.getCoverUrl();
  }

  if (!!request.hasDigitalHumanType()) {
    body["digitalHumanType"] = request.getDigitalHumanType();
  }

  if (!!request.hasGender()) {
    body["gender"] = request.getGender();
  }

  if (!!request.hasUseScene()) {
    body["useScene"] = request.getUseScene();
  }

  if (!!request.hasVideoOssKey()) {
    body["videoOssKey"] = request.getVideoOssKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAnchor"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/anchorOpen/createAnchor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnchorResponse>();
}

/**
 * @summary 创建照片数字人
 *
 * @param request CreateAnchorRequest
 * @return CreateAnchorResponse
 */
CreateAnchorResponse Client::createAnchor(const CreateAnchorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAnchorWithOptions(request, headers, runtime);
}

/**
 * @summary 创建配图生成任务
 *
 * @param request CreateIllustrationTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIllustrationTaskResponse
 */
CreateIllustrationTaskResponse Client::createIllustrationTaskWithOptions(const string &textId, const CreateIllustrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateIllustrationTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts/" , Darabonba::Encode::Encoder::percentEncode(textId) , "/illustrationTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIllustrationTaskResponse>();
}

/**
 * @summary 创建配图生成任务
 *
 * @param request CreateIllustrationTaskRequest
 * @return CreateIllustrationTaskResponse
 */
CreateIllustrationTaskResponse Client::createIllustrationTask(const string &textId, const CreateIllustrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIllustrationTaskWithOptions(textId, request, headers, runtime);
}

/**
 * @summary 创建个性化文案项目
 *
 * @param request CreateIndividuationProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIndividuationProjectResponse
 */
CreateIndividuationProjectResponse Client::createIndividuationProjectWithOptions(const CreateIndividuationProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectInfo()) {
    body["projectInfo"] = request.getProjectInfo();
  }

  if (!!request.hasProjectName()) {
    body["projectName"] = request.getProjectName();
  }

  if (!!request.hasPurpose()) {
    body["purpose"] = request.getPurpose();
  }

  if (!!request.hasSceneId()) {
    body["sceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIndividuationProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/createProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndividuationProjectResponse>();
}

/**
 * @summary 创建个性化文案项目
 *
 * @param request CreateIndividuationProjectRequest
 * @return CreateIndividuationProjectResponse
 */
CreateIndividuationProjectResponse Client::createIndividuationProject(const CreateIndividuationProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndividuationProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 创建个性化文案任务
 *
 * @param request CreateIndividuationTextTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIndividuationTextTaskResponse
 */
CreateIndividuationTextTaskResponse Client::createIndividuationTextTaskWithOptions(const CreateIndividuationTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCrowdPack()) {
    body["crowdPack"] = request.getCrowdPack();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasTaskName()) {
    body["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIndividuationTextTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/createTextTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndividuationTextTaskResponse>();
}

/**
 * @summary 创建个性化文案任务
 *
 * @param request CreateIndividuationTextTaskRequest
 * @return CreateIndividuationTextTaskResponse
 */
CreateIndividuationTextTaskResponse Client::createIndividuationTextTask(const CreateIndividuationTextTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndividuationTextTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建产品图
 *
 * @param request CreateProductImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductImageResponse
 */
CreateProductImageResponse Client::createProductImageWithOptions(const CreateProductImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackgroundDescription()) {
    body["backgroundDescription"] = request.getBackgroundDescription();
  }

  if (!!request.hasBackgroundPriority()) {
    body["backgroundPriority"] = request.getBackgroundPriority();
  }

  if (!!request.hasBackgroundUrl()) {
    body["backgroundUrl"] = request.getBackgroundUrl();
  }

  if (!!request.hasHighlightText()) {
    body["highlightText"] = request.getHighlightText();
  }

  if (!!request.hasImageCount()) {
    body["imageCount"] = request.getImageCount();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasSubTitle()) {
    body["subTitle"] = request.getSubTitle();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProductImage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/images/products")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductImageResponse>();
}

/**
 * @summary 创建产品图
 *
 * @param request CreateProductImageRequest
 * @return CreateProductImageResponse
 */
CreateProductImageResponse Client::createProductImage(const CreateProductImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProductImageWithOptions(request, headers, runtime);
}

/**
 * @summary 写实人像创作
 *
 * @param request CreateRealisticPortraitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRealisticPortraitResponse
 */
CreateRealisticPortraitResponse Client::createRealisticPortraitWithOptions(const CreateRealisticPortraitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAges()) {
    body["ages"] = request.getAges();
  }

  if (!!request.hasCloth()) {
    body["cloth"] = request.getCloth();
  }

  if (!!request.hasColor()) {
    body["color"] = request.getColor();
  }

  if (!!request.hasCustom()) {
    body["custom"] = request.getCustom();
  }

  if (!!request.hasFace()) {
    body["face"] = request.getFace();
  }

  if (!!request.hasFigure()) {
    body["figure"] = request.getFigure();
  }

  if (!!request.hasGender()) {
    body["gender"] = request.getGender();
  }

  if (!!request.hasHairColor()) {
    body["hairColor"] = request.getHairColor();
  }

  if (!!request.hasHairstyle()) {
    body["hairstyle"] = request.getHairstyle();
  }

  if (!!request.hasHeight()) {
    body["height"] = request.getHeight();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasNumbers()) {
    body["numbers"] = request.getNumbers();
  }

  if (!!request.hasRatio()) {
    body["ratio"] = request.getRatio();
  }

  if (!!request.hasWidth()) {
    body["width"] = request.getWidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRealisticPortrait"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/images/portrait/realistic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRealisticPortraitResponse>();
}

/**
 * @summary 写实人像创作
 *
 * @param request CreateRealisticPortraitRequest
 * @return CreateRealisticPortraitResponse
 */
CreateRealisticPortraitResponse Client::createRealisticPortrait(const CreateRealisticPortraitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRealisticPortraitWithOptions(request, headers, runtime);
}

/**
 * @summary 创建文案生成任务
 *
 * @param request CreateTextTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTextTaskResponse
 */
CreateTextTaskResponse Client::createTextTaskWithOptions(const CreateTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTextTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/textTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTextTaskResponse>();
}

/**
 * @summary 创建文案生成任务
 *
 * @param request CreateTextTaskRequest
 * @return CreateTextTaskResponse
 */
CreateTextTaskResponse Client::createTextTask(const CreateTextTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTextTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 提交声音复刻任务
 *
 * @param request CreateTrainTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrainTaskResponse
 */
CreateTrainTaskResponse Client::createTrainTaskWithOptions(const CreateTrainTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunMainId()) {
    body["aliyunMainId"] = request.getAliyunMainId();
  }

  if (!!request.hasResSpecType()) {
    body["resSpecType"] = request.getResSpecType();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
  }

  if (!!request.hasUseScene()) {
    body["useScene"] = request.getUseScene();
  }

  if (!!request.hasVoiceGender()) {
    body["voiceGender"] = request.getVoiceGender();
  }

  if (!!request.hasVoiceLanguage()) {
    body["voiceLanguage"] = request.getVoiceLanguage();
  }

  if (!!request.hasVoiceName()) {
    body["voiceName"] = request.getVoiceName();
  }

  if (!!request.hasVoicePath()) {
    body["voicePath"] = request.getVoicePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrainTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/train/task/createTrainTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrainTaskResponse>();
}

/**
 * @summary 提交声音复刻任务
 *
 * @param request CreateTrainTaskRequest
 * @return CreateTrainTaskResponse
 */
CreateTrainTaskResponse Client::createTrainTask(const CreateTrainTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrainTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 提交视频切片任务
 *
 * @param request CreateVideoClipTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoClipTaskResponse
 */
CreateVideoClipTaskResponse Client::createVideoClipTaskWithOptions(const CreateVideoClipTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunMainId()) {
    body["aliyunMainId"] = request.getAliyunMainId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasOssKeys()) {
    body["ossKeys"] = request.getOssKeys();
  }

  if (!!request.hasRequirement()) {
    body["requirement"] = request.getRequirement();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVideoClipTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/video/clip/createVideoClipTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoClipTaskResponse>();
}

/**
 * @summary 提交视频切片任务
 *
 * @param request CreateVideoClipTaskRequest
 * @return CreateVideoClipTaskResponse
 */
CreateVideoClipTaskResponse Client::createVideoClipTask(const CreateVideoClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVideoClipTaskWithOptions(request, headers, runtime);
}

/**
 * @summary DeleteAICoachScript
 *
 * @param request DeleteAICoachScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAICoachScriptResponse
 */
DeleteAICoachScriptResponse Client::deleteAICoachScriptWithOptions(const DeleteAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScriptId()) {
    body["scriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAICoachScript"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/deleteAICoachScript")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAICoachScriptResponse>();
}

/**
 * @summary DeleteAICoachScript
 *
 * @param request DeleteAICoachScriptRequest
 * @return DeleteAICoachScriptResponse
 */
DeleteAICoachScriptResponse Client::deleteAICoachScript(const DeleteAICoachScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAICoachScriptWithOptions(request, headers, runtime);
}

/**
 * @summary DeleteAgent
 *
 * @param request DeleteAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/agent/deleteAgent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary DeleteAgent
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 删除个性化文案项目
 *
 * @param request DeleteIndividuationProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndividuationProjectResponse
 */
DeleteIndividuationProjectResponse Client::deleteIndividuationProjectWithOptions(const DeleteIndividuationProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteIndividuationProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/deleteProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndividuationProjectResponse>();
}

/**
 * @summary 删除个性化文案项目
 *
 * @param request DeleteIndividuationProjectRequest
 * @return DeleteIndividuationProjectResponse
 */
DeleteIndividuationProjectResponse Client::deleteIndividuationProject(const DeleteIndividuationProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndividuationProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 删除个性化文案
 *
 * @param request DeleteIndividuationTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndividuationTextResponse
 */
DeleteIndividuationTextResponse Client::deleteIndividuationTextWithOptions(const DeleteIndividuationTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTextIdList()) {
    body["textIdList"] = request.getTextIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteIndividuationText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/deleteText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndividuationTextResponse>();
}

/**
 * @summary 删除个性化文案
 *
 * @param request DeleteIndividuationTextRequest
 * @return DeleteIndividuationTextResponse
 */
DeleteIndividuationTextResponse Client::deleteIndividuationText(const DeleteIndividuationTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndividuationTextWithOptions(request, headers, runtime);
}

/**
 * @summary 查询文档信息与状态
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocumentWithOptions(const string &knowledgeBaseId, const string &documentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocument"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/knowledge-base/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseId) , "/documents/" , Darabonba::Encode::Encoder::percentEncode(documentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocumentResponse>();
}

/**
 * @summary 查询文档信息与状态
 *
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocument(const string &knowledgeBaseId, const string &documentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDocumentWithOptions(knowledgeBaseId, documentId, headers, runtime);
}

/**
 * @summary 学员完成会话
 *
 * @param request FinishAICoachTaskSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishAICoachTaskSessionResponse
 */
FinishAICoachTaskSessionResponse Client::finishAICoachTaskSessionWithOptions(const FinishAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    body["uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FinishAICoachTaskSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/finishSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishAICoachTaskSessionResponse>();
}

/**
 * @summary 学员完成会话
 *
 * @param request FinishAICoachTaskSessionRequest
 * @return FinishAICoachTaskSessionResponse
 */
FinishAICoachTaskSessionResponse Client::finishAICoachTaskSession(const FinishAICoachTaskSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return finishAICoachTaskSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 获取考核点详情
 *
 * @param request GetAICoachAssessmentPointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachAssessmentPointResponse
 */
GetAICoachAssessmentPointResponse Client::getAICoachAssessmentPointWithOptions(const GetAICoachAssessmentPointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPointId()) {
    query["pointId"] = request.getPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachAssessmentPoint"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/getAssessmentPoint")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachAssessmentPointResponse>();
}

/**
 * @summary 获取考核点详情
 *
 * @param request GetAICoachAssessmentPointRequest
 * @return GetAICoachAssessmentPointResponse
 */
GetAICoachAssessmentPointResponse Client::getAICoachAssessmentPoint(const GetAICoachAssessmentPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachAssessmentPointWithOptions(request, headers, runtime);
}

/**
 * @summary 查询作弊检测详情
 *
 * @param request GetAICoachCheatDetectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachCheatDetectionResponse
 */
GetAICoachCheatDetectionResponse Client::getAICoachCheatDetectionWithOptions(const GetAICoachCheatDetectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachCheatDetection"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/getCheatDetection")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachCheatDetectionResponse>();
}

/**
 * @summary 查询作弊检测详情
 *
 * @param request GetAICoachCheatDetectionRequest
 * @return GetAICoachCheatDetectionResponse
 */
GetAICoachCheatDetectionResponse Client::getAICoachCheatDetection(const GetAICoachCheatDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachCheatDetectionWithOptions(request, headers, runtime);
}

/**
 * @summary 查询剧本详情
 *
 * @param request GetAICoachScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachScriptResponse
 */
GetAICoachScriptResponse Client::getAICoachScriptWithOptions(const GetAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScriptRecordId()) {
    query["scriptRecordId"] = request.getScriptRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachScript"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/getScript")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachScriptResponse>();
}

/**
 * @summary 查询剧本详情
 *
 * @param request GetAICoachScriptRequest
 * @return GetAICoachScriptResponse
 */
GetAICoachScriptResponse Client::getAICoachScript(const GetAICoachScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachScriptWithOptions(request, headers, runtime);
}

/**
 * @summary 学员查询会话历史
 *
 * @param request GetAICoachTaskSessionHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachTaskSessionHistoryResponse
 */
GetAICoachTaskSessionHistoryResponse Client::getAICoachTaskSessionHistoryWithOptions(const GetAICoachTaskSessionHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    query["uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachTaskSessionHistory"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/querySessionHistory")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachTaskSessionHistoryResponse>();
}

/**
 * @summary 学员查询会话历史
 *
 * @param request GetAICoachTaskSessionHistoryRequest
 * @return GetAICoachTaskSessionHistoryResponse
 */
GetAICoachTaskSessionHistoryResponse Client::getAICoachTaskSessionHistory(const GetAICoachTaskSessionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachTaskSessionHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary 学员查询会话评测报告
 *
 * @param request GetAICoachTaskSessionReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachTaskSessionReportResponse
 */
GetAICoachTaskSessionReportResponse Client::getAICoachTaskSessionReportWithOptions(const GetAICoachTaskSessionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    query["uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachTaskSessionReport"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/queryTaskSessionReport")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachTaskSessionReportResponse>();
}

/**
 * @summary 学员查询会话评测报告
 *
 * @param request GetAICoachTaskSessionReportRequest
 * @return GetAICoachTaskSessionReportResponse
 */
GetAICoachTaskSessionReportResponse Client::getAICoachTaskSessionReport(const GetAICoachTaskSessionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachTaskSessionReportWithOptions(request, headers, runtime);
}

/**
 * @summary 获取对练会话资源使用情况
 *
 * @param request GetAICoachTaskSessionResourceUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAICoachTaskSessionResourceUsageResponse
 */
GetAICoachTaskSessionResourceUsageResponse Client::getAICoachTaskSessionResourceUsageWithOptions(const GetAICoachTaskSessionResourceUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAICoachTaskSessionResourceUsage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/getSessionResourceUsage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAICoachTaskSessionResourceUsageResponse>();
}

/**
 * @summary 获取对练会话资源使用情况
 *
 * @param request GetAICoachTaskSessionResourceUsageRequest
 * @return GetAICoachTaskSessionResourceUsageResponse
 */
GetAICoachTaskSessionResourceUsageResponse Client::getAICoachTaskSessionResourceUsage(const GetAICoachTaskSessionResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAICoachTaskSessionResourceUsageWithOptions(request, headers, runtime);
}

/**
 * @summary 查询配图
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIllustrationResponse
 */
GetIllustrationResponse Client::getIllustrationWithOptions(const string &textId, const string &illustrationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIllustration"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts/" , Darabonba::Encode::Encoder::percentEncode(textId) , "/illustrations/" , Darabonba::Encode::Encoder::percentEncode(illustrationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIllustrationResponse>();
}

/**
 * @summary 查询配图
 *
 * @return GetIllustrationResponse
 */
GetIllustrationResponse Client::getIllustration(const string &textId, const string &illustrationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIllustrationWithOptions(textId, illustrationId, headers, runtime);
}

/**
 * @summary 查询配图任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIllustrationTaskResponse
 */
GetIllustrationTaskResponse Client::getIllustrationTaskWithOptions(const string &textId, const string &illustrationTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIllustrationTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts/" , Darabonba::Encode::Encoder::percentEncode(textId) , "/illustrationTasks/" , Darabonba::Encode::Encoder::percentEncode(illustrationTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIllustrationTaskResponse>();
}

/**
 * @summary 查询配图任务
 *
 * @return GetIllustrationTaskResponse
 */
GetIllustrationTaskResponse Client::getIllustrationTask(const string &textId, const string &illustrationTaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIllustrationTaskWithOptions(textId, illustrationTaskId, headers, runtime);
}

/**
 * @summary 获取图片上传oss token
 *
 * @param request GetOssUploadTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssUploadTokenResponse
 */
GetOssUploadTokenResponse Client::getOssUploadTokenWithOptions(const GetOssUploadTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    query["fileType"] = request.getFileType();
  }

  if (!!request.hasUploadType()) {
    query["uploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssUploadToken"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/uploadToken")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssUploadTokenResponse>();
}

/**
 * @summary 获取图片上传oss token
 *
 * @param request GetOssUploadTokenRequest
 * @return GetOssUploadTokenResponse
 */
GetOssUploadTokenResponse Client::getOssUploadToken(const GetOssUploadTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOssUploadTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据人合成信息
 *
 * @param request GetProjectTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectTaskResponse
 */
GetProjectTaskResponse Client::getProjectTaskWithOptions(const GetProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdempotentId()) {
    query["IdempotentId"] = request.getIdempotentId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/project/getProjectTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectTaskResponse>();
}

/**
 * @summary 获取数据人合成信息
 *
 * @param request GetProjectTaskRequest
 * @return GetProjectTaskResponse
 */
GetProjectTaskResponse Client::getProjectTask(const GetProjectTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 查询文案
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTextResponse
 */
GetTextResponse Client::getTextWithOptions(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts/" , Darabonba::Encode::Encoder::percentEncode(textId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTextResponse>();
}

/**
 * @summary 查询文案
 *
 * @return GetTextResponse
 */
GetTextResponse Client::getText(const string &textId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTextWithOptions(textId, headers, runtime);
}

/**
 * @summary 查询文案任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTextTaskResponse
 */
GetTextTaskResponse Client::getTextTaskWithOptions(const string &textTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTextTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/textTasks/" , Darabonba::Encode::Encoder::percentEncode(textTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTextTaskResponse>();
}

/**
 * @summary 查询文案任务
 *
 * @return GetTextTaskResponse
 */
GetTextTaskResponse Client::getTextTask(const string &textTaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTextTaskWithOptions(textTaskId, headers, runtime);
}

/**
 * @summary 查询表单配置
 *
 * @param request GetTextTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTextTemplateResponse
 */
GetTextTemplateResponse Client::getTextTemplateWithOptions(const GetTextTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTextTemplate"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts/commands/getTextTemplate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTextTemplateResponse>();
}

/**
 * @summary 查询表单配置
 *
 * @param request GetTextTemplateRequest
 * @return GetTextTemplateResponse
 */
GetTextTemplateResponse Client::getTextTemplate(const GetTextTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTextTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 营销文案互动问答
 *
 * @param request InteractTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InteractTextResponse
 */
FutureGenerator<InteractTextResponse> Client::interactTextWithSSE(const InteractTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InteractText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/stream/interactText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<InteractTextResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 营销文案互动问答
 *
 * @param request InteractTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InteractTextResponse
 */
InteractTextResponse Client::interactTextWithOptions(const InteractTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InteractText"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/stream/interactText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InteractTextResponse>();
}

/**
 * @summary 营销文案互动问答
 *
 * @param request InteractTextRequest
 * @return InteractTextResponse
 */
InteractTextResponse Client::interactText(const InteractTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return interactTextWithOptions(request, headers, runtime);
}

/**
 * @summary 查询剧本列表
 *
 * @param request ListAICoachScriptPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAICoachScriptPageResponse
 */
ListAICoachScriptPageResponse Client::listAICoachScriptPageWithOptions(const ListAICoachScriptPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAICoachScriptPage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/pageScript")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAICoachScriptPageResponse>();
}

/**
 * @summary 查询剧本列表
 *
 * @param request ListAICoachScriptPageRequest
 * @return ListAICoachScriptPageResponse
 */
ListAICoachScriptPageResponse Client::listAICoachScriptPage(const ListAICoachScriptPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAICoachScriptPageWithOptions(request, headers, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request ListAICoachTaskPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAICoachTaskPageResponse
 */
ListAICoachTaskPageResponse Client::listAICoachTaskPageWithOptions(const ListAICoachTaskPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasStudentId()) {
    query["studentId"] = request.getStudentId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAICoachTaskPage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/listTaskPage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAICoachTaskPageResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request ListAICoachTaskPageRequest
 * @return ListAICoachTaskPageResponse
 */
ListAICoachTaskPageResponse Client::listAICoachTaskPage(const ListAICoachTaskPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAICoachTaskPageWithOptions(request, headers, runtime);
}

/**
 * @summary 分页查询智能体
 *
 * @param request ListAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasAgentScene()) {
    query["agentScene"] = request.getAgentScene();
  }

  if (!!request.hasOwner()) {
    query["owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
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
    {"action" , "ListAgents"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/agent/listAgents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

/**
 * @summary 分页查询智能体
 *
 * @param request ListAgentsRequest
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数字人模特列表
 *
 * @param request ListAnchorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnchorResponse
 */
ListAnchorResponse Client::listAnchorWithOptions(const ListAnchorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnchorCategory()) {
    query["anchorCategory"] = request.getAnchorCategory();
  }

  if (!!request.hasAnchorId()) {
    query["anchorId"] = request.getAnchorId();
  }

  if (!!request.hasAnchorType()) {
    query["anchorType"] = request.getAnchorType();
  }

  if (!!request.hasCoverRate()) {
    query["coverRate"] = request.getCoverRate();
  }

  if (!!request.hasDigitalHumanType()) {
    query["digitalHumanType"] = request.getDigitalHumanType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResSpecType()) {
    query["resSpecType"] = request.getResSpecType();
  }

  if (!!request.hasUseScene()) {
    query["useScene"] = request.getUseScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnchor"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/anchorOpen/listAnchor")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnchorResponse>();
}

/**
 * @summary 获取数字人模特列表
 *
 * @param request ListAnchorRequest
 * @return ListAnchorResponse
 */
ListAnchorResponse Client::listAnchor(const ListAnchorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAnchorWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询数字人项目启动结果
 *
 * @param tmpReq ListAvatarProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvatarProjectResponse
 */
ListAvatarProjectResponse Client::listAvatarProjectWithOptions(const ListAvatarProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAvatarProjectShrinkRequest request = ListAvatarProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProjectIdList()) {
    request.setProjectIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProjectIdList(), "projectIdList", "simple"));
  }

  json query = {};
  if (!!request.hasProjectIdListShrink()) {
    query["projectIdList"] = request.getProjectIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvatarProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/listAvatarProject")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvatarProjectResponse>();
}

/**
 * @summary 批量查询数字人项目启动结果
 *
 * @param request ListAvatarProjectRequest
 * @return ListAvatarProjectResponse
 */
ListAvatarProjectResponse Client::listAvatarProject(const ListAvatarProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvatarProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 查询知识库
 *
 * @param request ListKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseResponse
 */
ListKnowledgeBaseResponse Client::listKnowledgeBaseWithOptions(const ListKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKnowledgeBaseId()) {
    query["knowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBase"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/knowledge-base")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseResponse>();
}

/**
 * @summary 查询知识库
 *
 * @param request ListKnowledgeBaseRequest
 * @return ListKnowledgeBaseResponse
 */
ListKnowledgeBaseResponse Client::listKnowledgeBase(const ListKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseWithOptions(request, headers, runtime);
}

/**
 * @summary 查询文案主题列表
 *
 * @param request ListTextThemesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextThemesResponse
 */
ListTextThemesResponse Client::listTextThemesWithOptions(const ListTextThemesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTextThemes"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/textThemes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextThemesResponse>();
}

/**
 * @summary 查询文案主题列表
 *
 * @param request ListTextThemesRequest
 * @return ListTextThemesResponse
 */
ListTextThemesResponse Client::listTextThemes(const ListTextThemesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextThemesWithOptions(request, headers, runtime);
}

/**
 * @summary 列举文案
 *
 * @param request ListTextsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextsResponse
 */
ListTextsResponse Client::listTextsWithOptions(const ListTextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGenerationSource()) {
    query["generationSource"] = request.getGenerationSource();
  }

  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPublishStatus()) {
    query["publishStatus"] = request.getPublishStatus();
  }

  if (!!request.hasTextStyleType()) {
    query["textStyleType"] = request.getTextStyleType();
  }

  if (!!request.hasTextTheme()) {
    query["textTheme"] = request.getTextTheme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTexts"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/texts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextsResponse>();
}

/**
 * @summary 列举文案
 *
 * @param request ListTextsRequest
 * @return ListTextsResponse
 */
ListTextsResponse Client::listTexts(const ListTextsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取声音模版列表
 *
 * @param request ListVoiceModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceModelsResponse
 */
ListVoiceModelsResponse Client::listVoiceModelsWithOptions(const ListVoiceModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResSpecType()) {
    query["resSpecType"] = request.getResSpecType();
  }

  if (!!request.hasUseScene()) {
    query["useScene"] = request.getUseScene();
  }

  if (!!request.hasVoiceLanguage()) {
    query["voiceLanguage"] = request.getVoiceLanguage();
  }

  if (!!request.hasVoiceType()) {
    query["voiceType"] = request.getVoiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVoiceModels"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/voiceOpen/listVoiceModels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceModelsResponse>();
}

/**
 * @summary 获取声音模版列表
 *
 * @param request ListVoiceModelsRequest
 * @return ListVoiceModelsResponse
 */
ListVoiceModelsResponse Client::listVoiceModels(const ListVoiceModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVoiceModelsWithOptions(request, headers, runtime);
}

/**
 * @summary 下线剧本
 *
 * @param request OfflineAICoachScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineAICoachScriptResponse
 */
OfflineAICoachScriptResponse Client::offlineAICoachScriptWithOptions(const OfflineAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScriptId()) {
    body["scriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineAICoachScript"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/aicoach/offlineAICoachScript")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineAICoachScriptResponse>();
}

/**
 * @summary 下线剧本
 *
 * @param request OfflineAICoachScriptRequest
 * @return OfflineAICoachScriptResponse
 */
OfflineAICoachScriptResponse Client::offlineAICoachScript(const OfflineAICoachScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineAICoachScriptWithOptions(request, headers, runtime);
}

/**
 * @summary 操作实时数字人项目
 *
 * @param request OperateAvatarProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAvatarProjectResponse
 */
OperateAvatarProjectResponse Client::operateAvatarProjectWithOptions(const OperateAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperateType()) {
    body["operateType"] = request.getOperateType();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasResChannelNumber()) {
    body["resChannelNumber"] = request.getResChannelNumber();
  }

  if (!!request.hasResType()) {
    body["resType"] = request.getResType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OperateAvatarProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/operateProjectAvatar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAvatarProjectResponse>();
}

/**
 * @summary 操作实时数字人项目
 *
 * @param request OperateAvatarProjectRequest
 * @return OperateAvatarProjectResponse
 */
OperateAvatarProjectResponse Client::operateAvatarProject(const OperateAvatarProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return operateAvatarProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 查询数字人项目信息
 *
 * @param request QueryAvatarProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvatarProjectResponse
 */
QueryAvatarProjectResponse Client::queryAvatarProjectWithOptions(const QueryAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryAvatarProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/queryAvatarProject")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvatarProjectResponse>();
}

/**
 * @summary 查询数字人项目信息
 *
 * @param request QueryAvatarProjectRequest
 * @return QueryAvatarProjectResponse
 */
QueryAvatarProjectResponse Client::queryAvatarProject(const QueryAvatarProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryAvatarProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 查找资源
 *
 * @param request QueryAvatarResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvatarResourceResponse
 */
QueryAvatarResourceResponse Client::queryAvatarResourceWithOptions(const QueryAvatarResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdempotentId()) {
    query["idempotentId"] = request.getIdempotentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvatarResource"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/queryResource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvatarResourceResponse>();
}

/**
 * @summary 查找资源
 *
 * @param request QueryAvatarResourceRequest
 * @return QueryAvatarResourceResponse
 */
QueryAvatarResourceResponse Client::queryAvatarResource(const QueryAvatarResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryAvatarResourceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询图片转视频任务
 *
 * @param request QueryImageToVideoTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryImageToVideoTaskResponse
 */
QueryImageToVideoTaskResponse Client::queryImageToVideoTaskWithOptions(const QueryImageToVideoTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryImageToVideoTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/video/imageToVideo/task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryImageToVideoTaskResponse>();
}

/**
 * @summary 查询图片转视频任务
 *
 * @param request QueryImageToVideoTaskRequest
 * @return QueryImageToVideoTaskResponse
 */
QueryImageToVideoTaskResponse Client::queryImageToVideoTask(const QueryImageToVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryImageToVideoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 查询个性化文案任务
 *
 * @param request QueryIndividuationTextTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIndividuationTextTaskResponse
 */
QueryIndividuationTextTaskResponse Client::queryIndividuationTextTaskWithOptions(const QueryIndividuationTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryIndividuationTextTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/individuationText/queryTextTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryIndividuationTextTaskResponse>();
}

/**
 * @summary 查询个性化文案任务
 *
 * @param request QueryIndividuationTextTaskRequest
 * @return QueryIndividuationTextTaskResponse
 */
QueryIndividuationTextTaskResponse Client::queryIndividuationTextTask(const QueryIndividuationTextTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryIndividuationTextTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会话信息
 *
 * @param tmpReq QuerySessionInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySessionInfoResponse
 */
QuerySessionInfoResponse Client::querySessionInfoWithOptions(const QuerySessionInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySessionInfoShrinkRequest request = QuerySessionInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "statusList", "simple"));
  }

  json query = {};
  if (!!request.hasPageNo()) {
    query["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.getProjectId();
  }

  if (!!request.hasStatusListShrink()) {
    query["statusList"] = request.getStatusListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySessionInfo"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/querySessionInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySessionInfoResponse>();
}

/**
 * @summary 查询会话信息
 *
 * @param request QuerySessionInfoRequest
 * @return QuerySessionInfoResponse
 */
QuerySessionInfoResponse Client::querySessionInfo(const QuerySessionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySessionInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 流式输出文案
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTextStreamResponse
 */
FutureGenerator<QueryTextStreamResponse> Client::queryTextStreamWithSSE(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTextStream"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/stream/queryTextStream/" , Darabonba::Encode::Encoder::percentEncode(textId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<QueryTextStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式输出文案
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTextStreamResponse
 */
QueryTextStreamResponse Client::queryTextStreamWithOptions(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTextStream"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/stream/queryTextStream/" , Darabonba::Encode::Encoder::percentEncode(textId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTextStreamResponse>();
}

/**
 * @summary 流式输出文案
 *
 * @return QueryTextStreamResponse
 */
QueryTextStreamResponse Client::queryTextStream(const string &textId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTextStreamWithOptions(textId, headers, runtime);
}

/**
 * @summary ReleaseAgent
 *
 * @param request ReleaseAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseAgentResponse
 */
ReleaseAgentResponse Client::releaseAgentWithOptions(const ReleaseAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReleaseAgent"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/agent/releaseAgent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseAgentResponse>();
}

/**
 * @summary ReleaseAgent
 *
 * @param request ReleaseAgentRequest
 * @return ReleaseAgentResponse
 */
ReleaseAgentResponse Client::releaseAgent(const ReleaseAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 保存实时数字人项目
 *
 * @param request SaveAvatarProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAvatarProjectResponse
 */
SaveAvatarProjectResponse Client::saveAvatarProjectWithOptions(const SaveAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasBitRate()) {
    body["bitRate"] = request.getBitRate();
  }

  if (!!request.hasFrameRate()) {
    body["frameRate"] = request.getFrameRate();
  }

  if (!!request.hasFrames()) {
    body["frames"] = request.getFrames();
  }

  if (!!request.hasOperateType()) {
    body["operateType"] = request.getOperateType();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    body["projectName"] = request.getProjectName();
  }

  if (!!request.hasResSpecType()) {
    body["resSpecType"] = request.getResSpecType();
  }

  if (!!request.hasResolution()) {
    body["resolution"] = request.getResolution();
  }

  if (!!request.hasScaleType()) {
    body["scaleType"] = request.getScaleType();
  }

  if (!!request.hasScriptModelTag()) {
    body["scriptModelTag"] = request.getScriptModelTag();
  }

  if (!!request.hasSynchronizedDisplay()) {
    body["synchronizedDisplay"] = request.getSynchronizedDisplay();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveAvatarProject"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/saveAvatarProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAvatarProjectResponse>();
}

/**
 * @summary 保存实时数字人项目
 *
 * @param request SaveAvatarProjectRequest
 * @return SaveAvatarProjectResponse
 */
SaveAvatarProjectResponse Client::saveAvatarProject(const SaveAvatarProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveAvatarProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 查询图片任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectImageTaskResponse
 */
SelectImageTaskResponse Client::selectImageTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SelectImageTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/images/portrait/select/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectImageTaskResponse>();
}

/**
 * @summary 查询图片任务
 *
 * @return SelectImageTaskResponse
 */
SelectImageTaskResponse Client::selectImageTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectImageTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary 查询离线数字人剩余资源
 *
 * @param request SelectResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectResourceResponse
 */
SelectResourceResponse Client::selectResourceWithOptions(const SelectResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdempotentId()) {
    query["idempotentId"] = request.getIdempotentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SelectResource"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/project/commands/overview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectResourceResponse>();
}

/**
 * @summary 查询离线数字人剩余资源
 *
 * @param request SelectResourceRequest
 * @return SelectResourceResponse
 */
SelectResourceResponse Client::selectResource(const SelectResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectResourceWithOptions(request, headers, runtime);
}

/**
 * @summary 发送sdk消息
 *
 * @param request SendSdkMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSdkMessageResponse
 */
SendSdkMessageResponse Client::sendSdkMessageWithOptions(const SendSdkMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasHeader()) {
    body["header"] = request.getHeader();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.getModuleName();
  }

  if (!!request.hasOperationName()) {
    body["operationName"] = request.getOperationName();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendSdkMessage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/sdk/sendMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSdkMessageResponse>();
}

/**
 * @summary 发送sdk消息
 *
 * @param request SendSdkMessageRequest
 * @return SendSdkMessageResponse
 */
SendSdkMessageResponse Client::sendSdkMessage(const SendSdkMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendSdkMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 发送sdk流式消息
 *
 * @param request SendSdkStreamMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSdkStreamMessageResponse
 */
FutureGenerator<SendSdkStreamMessageResponse> Client::sendSdkStreamMessageWithSSE(const SendSdkStreamMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasHeader()) {
    body["header"] = request.getHeader();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.getModuleName();
  }

  if (!!request.hasOperationName()) {
    body["operationName"] = request.getOperationName();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendSdkStreamMessage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/sdk/stream/sendMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<SendSdkStreamMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 发送sdk流式消息
 *
 * @param request SendSdkStreamMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSdkStreamMessageResponse
 */
SendSdkStreamMessageResponse Client::sendSdkStreamMessageWithOptions(const SendSdkStreamMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasHeader()) {
    body["header"] = request.getHeader();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.getModuleName();
  }

  if (!!request.hasOperationName()) {
    body["operationName"] = request.getOperationName();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendSdkStreamMessage"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/sdk/stream/sendMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSdkStreamMessageResponse>();
}

/**
 * @summary 发送sdk流式消息
 *
 * @param request SendSdkStreamMessageRequest
 * @return SendSdkStreamMessageResponse
 */
SendSdkStreamMessageResponse Client::sendSdkStreamMessage(const SendSdkStreamMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendSdkStreamMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 发送文本消息
 *
 * @param request SendTextMsgRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTextMsgResponse
 */
SendTextMsgResponse Client::sendTextMsgWithOptions(const SendTextMsgRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasText()) {
    body["text"] = request.getText();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendTextMsg"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/sendTextMsg")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendTextMsgResponse>();
}

/**
 * @summary 发送文本消息
 *
 * @param request SendTextMsgRequest
 * @return SendTextMsgResponse
 */
SendTextMsgResponse Client::sendTextMsg(const SendTextMsgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendTextMsgWithOptions(request, headers, runtime);
}

/**
 * @summary 启动会话
 *
 * @param request StartAvatarSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAvatarSessionResponse
 */
StartAvatarSessionResponse Client::startAvatarSessionWithOptions(const StartAvatarSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelToken()) {
    body["channelToken"] = request.getChannelToken();
  }

  if (!!request.hasCustomPushUrl()) {
    body["customPushUrl"] = request.getCustomPushUrl();
  }

  if (!!request.hasCustomUserId()) {
    body["customUserId"] = request.getCustomUserId();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartAvatarSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/startAvatarSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAvatarSessionResponse>();
}

/**
 * @summary 启动会话
 *
 * @param request StartAvatarSessionRequest
 * @return StartAvatarSessionResponse
 */
StartAvatarSessionResponse Client::startAvatarSession(const StartAvatarSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startAvatarSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 停止会话
 *
 * @param request StopAvatarSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAvatarSessionResponse
 */
StopAvatarSessionResponse Client::stopAvatarSessionWithOptions(const StopAvatarSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopAvatarSession"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/avatar/project/stopAvatarSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAvatarSessionResponse>();
}

/**
 * @summary 停止会话
 *
 * @param request StopAvatarSessionRequest
 * @return StopAvatarSessionResponse
 */
StopAvatarSessionResponse Client::stopAvatarSession(const StopAvatarSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopAvatarSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 视频合成任务停止
 *
 * @param request StopProjectTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopProjectTaskResponse
 */
StopProjectTaskResponse Client::stopProjectTaskWithOptions(const StopProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StopProjectTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/project/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopProjectTaskResponse>();
}

/**
 * @summary 视频合成任务停止
 *
 * @param request StopProjectTaskRequest
 * @return StopProjectTaskResponse
 */
StopProjectTaskResponse Client::stopProjectTask(const StopProjectTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopProjectTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 提交图片转视频任务
 *
 * @param request SubmitImageToVideoTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImageToVideoTaskResponse
 */
SubmitImageToVideoTaskResponse Client::submitImageToVideoTaskWithOptions(const SubmitImageToVideoTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasPosPrompt()) {
    body["posPrompt"] = request.getPosPrompt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitImageToVideoTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/video/imageToVideo/task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImageToVideoTaskResponse>();
}

/**
 * @summary 提交图片转视频任务
 *
 * @param request SubmitImageToVideoTaskRequest
 * @return SubmitImageToVideoTaskResponse
 */
SubmitImageToVideoTaskResponse Client::submitImageToVideoTask(const SubmitImageToVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitImageToVideoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 提交离线数字人合成任务
 *
 * @param request SubmitProjectTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitProjectTaskResponse
 */
SubmitProjectTaskResponse Client::submitProjectTaskWithOptions(const SubmitProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFrames()) {
    body["frames"] = request.getFrames();
  }

  if (!!request.hasScaleType()) {
    body["scaleType"] = request.getScaleType();
  }

  if (!!request.hasSubtitleTag()) {
    body["subtitleTag"] = request.getSubtitleTag();
  }

  if (!!request.hasTransparentBackground()) {
    body["transparentBackground"] = request.getTransparentBackground();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitProjectTask"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/digitalHuman/project/submitProjectTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitProjectTaskResponse>();
}

/**
 * @summary 提交离线数字人合成任务
 *
 * @param request SubmitProjectTaskRequest
 * @return SubmitProjectTaskResponse
 */
SubmitProjectTaskResponse Client::submitProjectTask(const SubmitProjectTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitProjectTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 人像风格变化
 *
 * @param request TransferPortraitStyleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferPortraitStyleResponse
 */
TransferPortraitStyleResponse Client::transferPortraitStyleWithOptions(const TransferPortraitStyleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHeight()) {
    body["height"] = request.getHeight();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasNumbers()) {
    body["numbers"] = request.getNumbers();
  }

  if (!!request.hasRedrawAmplitude()) {
    body["redrawAmplitude"] = request.getRedrawAmplitude();
  }

  if (!!request.hasStyle()) {
    body["style"] = request.getStyle();
  }

  if (!!request.hasWidth()) {
    body["width"] = request.getWidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TransferPortraitStyle"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/images/portrait/transferPortraitStyle")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferPortraitStyleResponse>();
}

/**
 * @summary 人像风格变化
 *
 * @param request TransferPortraitStyleRequest
 * @return TransferPortraitStyleResponse
 */
TransferPortraitStyleResponse Client::transferPortraitStyle(const TransferPortraitStyleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transferPortraitStyleWithOptions(request, headers, runtime);
}

/**
 * @summary UpdateAgent
 *
 * @param request UpdateAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentIconUrl()) {
    body["agentIconUrl"] = request.getAgentIconUrl();
  }

  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasAgentName()) {
    body["agentName"] = request.getAgentName();
  }

  if (!!request.hasCharacterAgeStage()) {
    body["characterAgeStage"] = request.getCharacterAgeStage();
  }

  if (!!request.hasCharacterGender()) {
    body["characterGender"] = request.getCharacterGender();
  }

  if (!!request.hasCharacterName()) {
    body["characterName"] = request.getCharacterName();
  }

  if (!!request.hasExtraDescription()) {
    body["extraDescription"] = request.getExtraDescription();
  }

  if (!!request.hasIndustry()) {
    body["industry"] = request.getIndustry();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgent"},
    {"version" , "2024-03-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/yic-console/openService/v1/agent/updateAgent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentResponse>();
}

/**
 * @summary UpdateAgent
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313