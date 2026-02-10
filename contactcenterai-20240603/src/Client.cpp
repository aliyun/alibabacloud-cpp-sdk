#include <darabonba/Core.hpp>
#include <alibabacloud/ContactCenterAI20240603.hpp>
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
using namespace AlibabaCloud::ContactCenterAI20240603::Models;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{

AlibabaCloud::ContactCenterAI20240603::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("contactcenterai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 语音文件分析任务极速版
 *
 * @param request AnalyzeAudioSyncRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeAudioSyncResponse
 */
FutureGenerator<AnalyzeAudioSyncResponse> Client::analyzeAudioSyncWithSSE(const string &workspaceId, const string &appId, const AnalyzeAudioSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryTags()) {
    body["categoryTags"] = request.getCategoryTags();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasFields()) {
    body["fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["modelCode"] = request.getModelCode();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasServiceInspection()) {
    body["serviceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["templateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTranscription()) {
    body["transcription"] = request.getTranscription();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeAudioSync"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyzeAudioSync")},
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
      })).get<AnalyzeAudioSyncResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 语音文件分析任务极速版
 *
 * @param request AnalyzeAudioSyncRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeAudioSyncResponse
 */
AnalyzeAudioSyncResponse Client::analyzeAudioSyncWithOptions(const string &workspaceId, const string &appId, const AnalyzeAudioSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryTags()) {
    body["categoryTags"] = request.getCategoryTags();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasFields()) {
    body["fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["modelCode"] = request.getModelCode();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasServiceInspection()) {
    body["serviceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["templateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTranscription()) {
    body["transcription"] = request.getTranscription();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeAudioSync"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyzeAudioSync")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeAudioSyncResponse>();
}

/**
 * @summary 语音文件分析任务极速版
 *
 * @param request AnalyzeAudioSyncRequest
 * @return AnalyzeAudioSyncResponse
 */
AnalyzeAudioSyncResponse Client::analyzeAudioSync(const string &workspaceId, const string &appId, const AnalyzeAudioSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return analyzeAudioSyncWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 根据类型调用大模型
 *
 * @param request AnalyzeConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeConversationResponse
 */
FutureGenerator<AnalyzeConversationResponse> Client::analyzeConversationWithSSE(const string &workspaceId, const string &appId, const AnalyzeConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryTags()) {
    body["categoryTags"] = request.getCategoryTags();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasDialogue()) {
    body["dialogue"] = request.getDialogue();
  }

  if (!!request.hasExamples()) {
    body["examples"] = request.getExamples();
  }

  if (!!request.hasFields()) {
    body["fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["modelCode"] = request.getModelCode();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasSceneName()) {
    body["sceneName"] = request.getSceneName();
  }

  if (!!request.hasServiceInspection()) {
    body["serviceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasSourceCallerUid()) {
    body["sourceCallerUid"] = request.getSourceCallerUid();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTimeConstraintList()) {
    body["timeConstraintList"] = request.getTimeConstraintList();
  }

  if (!!request.hasUserProfiles()) {
    body["userProfiles"] = request.getUserProfiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeConversation"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyze_conversation")},
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
      })).get<AnalyzeConversationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 根据类型调用大模型
 *
 * @param request AnalyzeConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversationWithOptions(const string &workspaceId, const string &appId, const AnalyzeConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryTags()) {
    body["categoryTags"] = request.getCategoryTags();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasDialogue()) {
    body["dialogue"] = request.getDialogue();
  }

  if (!!request.hasExamples()) {
    body["examples"] = request.getExamples();
  }

  if (!!request.hasFields()) {
    body["fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["modelCode"] = request.getModelCode();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasSceneName()) {
    body["sceneName"] = request.getSceneName();
  }

  if (!!request.hasServiceInspection()) {
    body["serviceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasSourceCallerUid()) {
    body["sourceCallerUid"] = request.getSourceCallerUid();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTimeConstraintList()) {
    body["timeConstraintList"] = request.getTimeConstraintList();
  }

  if (!!request.hasUserProfiles()) {
    body["userProfiles"] = request.getUserProfiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeConversation"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyze_conversation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeConversationResponse>();
}

/**
 * @summary 根据类型调用大模型
 *
 * @param request AnalyzeConversationRequest
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversation(const string &workspaceId, const string &appId, const AnalyzeConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return analyzeConversationWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 图片分析
 *
 * @param request AnalyzeImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeImageResponse
 */
FutureGenerator<AnalyzeImageResponse> Client::analyzeImageWithSSE(const string &workspaceId, const string &appId, const AnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageUrls()) {
    body["imageUrls"] = request.getImageUrls();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeImage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyzeImage")},
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
      })).get<AnalyzeImageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 图片分析
 *
 * @param request AnalyzeImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeImageResponse
 */
AnalyzeImageResponse Client::analyzeImageWithOptions(const string &workspaceId, const string &appId, const AnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageUrls()) {
    body["imageUrls"] = request.getImageUrls();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnalyzeImage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/analyzeImage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeImageResponse>();
}

/**
 * @summary 图片分析
 *
 * @param request AnalyzeImageRequest
 * @return AnalyzeImageResponse
 */
AnalyzeImageResponse Client::analyzeImage(const string &workspaceId, const string &appId, const AnalyzeImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return analyzeImageWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 创建语音文件调用llm任务
 *
 * @param request CreateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const string &workspaceId, const string &appId, const CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallBackUrl()) {
    body["callBackUrl"] = request.getCallBackUrl();
  }

  if (!!request.hasCategoryTags()) {
    body["categoryTags"] = request.getCategoryTags();
  }

  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasDialogue()) {
    body["dialogue"] = request.getDialogue();
  }

  if (!!request.hasExamples()) {
    body["examples"] = request.getExamples();
  }

  if (!!request.hasFields()) {
    body["fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["modelCode"] = request.getModelCode();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasResultTypes()) {
    body["resultTypes"] = request.getResultTypes();
  }

  if (!!request.hasServiceInspection()) {
    body["serviceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
  }

  if (!!request.hasTemplateIds()) {
    body["templateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTranscription()) {
    body["transcription"] = request.getTranscription();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/createTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建语音文件调用llm任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const string &workspaceId, const string &appId, const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTaskWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 创建热词
 *
 * @param request CreateVocabRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVocabResponse
 */
CreateVocabResponse Client::createVocabWithOptions(const CreateVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAudioModelCode()) {
    body["audioModelCode"] = request.getAudioModelCode();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasWordWeightList()) {
    body["wordWeightList"] = request.getWordWeightList();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVocab"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vocab/createVocab")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVocabResponse>();
}

/**
 * @summary 创建热词
 *
 * @param request CreateVocabRequest
 * @return CreateVocabResponse
 */
CreateVocabResponse Client::createVocab(const CreateVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVocabWithOptions(request, headers, runtime);
}

/**
 * @summary 删删除热词
 *
 * @param request DeleteVocabRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVocabResponse
 */
DeleteVocabResponse Client::deleteVocabWithOptions(const DeleteVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVocabularyId()) {
    body["vocabularyId"] = request.getVocabularyId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteVocab"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vocab/deleteVocab")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVocabResponse>();
}

/**
 * @summary 删删除热词
 *
 * @param request DeleteVocabRequest
 * @return DeleteVocabResponse
 */
DeleteVocabResponse Client::deleteVocab(const DeleteVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVocabWithOptions(request, headers, runtime);
}

/**
 * @summary 通用图片分析
 *
 * @param request GeneralAnalyzeImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GeneralAnalyzeImageResponse
 */
FutureGenerator<GeneralAnalyzeImageResponse> Client::generalAnalyzeImageWithSSE(const string &workspaceId, const string &appId, const GeneralAnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasImageUrls()) {
    body["imageUrls"] = request.getImageUrls();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["templateIds"] = request.getTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GeneralAnalyzeImage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/generalanalyzeImage")},
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
      })).get<GeneralAnalyzeImageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 通用图片分析
 *
 * @param request GeneralAnalyzeImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GeneralAnalyzeImageResponse
 */
GeneralAnalyzeImageResponse Client::generalAnalyzeImageWithOptions(const string &workspaceId, const string &appId, const GeneralAnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasImageUrls()) {
    body["imageUrls"] = request.getImageUrls();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["templateIds"] = request.getTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GeneralAnalyzeImage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/generalanalyzeImage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GeneralAnalyzeImageResponse>();
}

/**
 * @summary 通用图片分析
 *
 * @param request GeneralAnalyzeImageRequest
 * @return GeneralAnalyzeImageResponse
 */
GeneralAnalyzeImageResponse Client::generalAnalyzeImage(const string &workspaceId, const string &appId, const GeneralAnalyzeImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generalAnalyzeImageWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 语音文件调用大模型获取结果
 *
 * @param tmpReq GetTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResultWithOptions(const GetTaskResultRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTaskResultShrinkRequest request = GetTaskResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequiredFieldList()) {
    request.setRequiredFieldListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequiredFieldList(), "requiredFieldList", "simple"));
  }

  json query = {};
  if (!!request.hasRequiredFieldListShrink()) {
    query["requiredFieldList"] = request.getRequiredFieldListShrink();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskResult"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ccai/app/getTaskResult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResultResponse>();
}

/**
 * @summary 语音文件调用大模型获取结果
 *
 * @param request GetTaskResultRequest
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResult(const GetTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskResultWithOptions(request, headers, runtime);
}

/**
 * @summary 获取热词
 *
 * @param request GetVocabRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVocabResponse
 */
GetVocabResponse Client::getVocabWithOptions(const GetVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVocabularyId()) {
    body["vocabularyId"] = request.getVocabularyId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetVocab"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vocab/getVocab")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVocabResponse>();
}

/**
 * @summary 获取热词
 *
 * @param request GetVocabRequest
 * @return GetVocabResponse
 */
GetVocabResponse Client::getVocab(const GetVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVocabWithOptions(request, headers, runtime);
}

/**
 * @summary 热词列表
 *
 * @param request ListVocabRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVocabResponse
 */
ListVocabResponse Client::listVocabWithOptions(const ListVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVocab"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vocab/listVocab")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVocabResponse>();
}

/**
 * @summary 热词列表
 *
 * @param request ListVocabRequest
 * @return ListVocabResponse
 */
ListVocabResponse Client::listVocab(const ListVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVocabWithOptions(request, headers, runtime);
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionResponse
 */
FutureGenerator<RunCompletionResponse> Client::runCompletionWithSSE(const string &workspaceId, const string &appId, const RunCompletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDialogue()) {
    body["Dialogue"] = request.getDialogue();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasServiceInspection()) {
    body["ServiceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunCompletion"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/completion")},
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
      })).get<RunCompletionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionResponse
 */
RunCompletionResponse Client::runCompletionWithOptions(const string &workspaceId, const string &appId, const RunCompletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDialogue()) {
    body["Dialogue"] = request.getDialogue();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasServiceInspection()) {
    body["ServiceInspection"] = request.getServiceInspection();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasTemplateIds()) {
    body["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunCompletion"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/completion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCompletionResponse>();
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionRequest
 * @return RunCompletionResponse
 */
RunCompletionResponse Client::runCompletion(const string &workspaceId, const string &appId, const RunCompletionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runCompletionWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionMessageResponse
 */
FutureGenerator<RunCompletionMessageResponse> Client::runCompletionMessageWithSSE(const string &workspaceId, const string &appId, const RunCompletionMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunCompletionMessage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/completion_message")},
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
      })).get<RunCompletionMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionMessageResponse
 */
RunCompletionMessageResponse Client::runCompletionMessageWithOptions(const string &workspaceId, const string &appId, const RunCompletionMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasResponseFormatType()) {
    body["responseFormatType"] = request.getResponseFormatType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunCompletionMessage"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ccai/app/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/completion_message")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCompletionMessageResponse>();
}

/**
 * @summary CCAI服务面API
 *
 * @param request RunCompletionMessageRequest
 * @return RunCompletionMessageResponse
 */
RunCompletionMessageResponse Client::runCompletionMessage(const string &workspaceId, const string &appId, const RunCompletionMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runCompletionMessageWithOptions(workspaceId, appId, request, headers, runtime);
}

/**
 * @summary 修改热词
 *
 * @param request UpdateVocabRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVocabResponse
 */
UpdateVocabResponse Client::updateVocabWithOptions(const UpdateVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasVocabularyId()) {
    body["vocabularyId"] = request.getVocabularyId();
  }

  if (!!request.hasWordWeightList()) {
    body["wordWeightList"] = request.getWordWeightList();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVocab"},
    {"version" , "2024-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vocab/updateVocab")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVocabResponse>();
}

/**
 * @summary 修改热词
 *
 * @param request UpdateVocabRequest
 * @return UpdateVocabResponse
 */
UpdateVocabResponse Client::updateVocab(const UpdateVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVocabWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603