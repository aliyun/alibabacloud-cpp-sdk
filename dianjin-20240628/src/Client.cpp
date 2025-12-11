#include <darabonba/Core.hpp>
#include <alibabacloud/DianJin20240628.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DianJin20240628::Models;
namespace AlibabaCloud
{
namespace DianJin20240628
{

AlibabaCloud::DianJin20240628::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dianjin", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建按年文档总结任务
 *
 * @param request CreateAnnualDocSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnnualDocSummaryTaskResponse
 */
CreateAnnualDocSummaryTaskResponse Client::createAnnualDocSummaryTaskWithOptions(const string &workspaceId, const CreateAnnualDocSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnaYears()) {
    body["anaYears"] = request.anaYears();
  }

  if (!!request.hasDocInfos()) {
    body["docInfos"] = request.docInfos();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.enableTable();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.instruction();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAnnualDocSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/doc/annual")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnnualDocSummaryTaskResponse>();
}

/**
 * @summary 创建按年文档总结任务
 *
 * @param request CreateAnnualDocSummaryTaskRequest
 * @return CreateAnnualDocSummaryTaskResponse
 */
CreateAnnualDocSummaryTaskResponse Client::createAnnualDocSummaryTask(const string &workspaceId, const CreateAnnualDocSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAnnualDocSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建外呼会话
 *
 * @param request CreateDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogResponse
 */
CreateDialogResponse Client::createDialogWithOptions(const string &workspaceId, const CreateDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["channel"] = request.channel();
  }

  if (!!request.hasEnableLibrary()) {
    body["enableLibrary"] = request.enableLibrary();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasPlayCode()) {
    body["playCode"] = request.playCode();
  }

  if (!!request.hasQaLibraryList()) {
    body["qaLibraryList"] = request.qaLibraryList();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  if (!!request.hasSelfDirected()) {
    body["selfDirected"] = request.selfDirected();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDialogResponse>();
}

/**
 * @summary 创建外呼会话
 *
 * @param request CreateDialogRequest
 * @return CreateDialogResponse
 */
CreateDialogResponse Client::createDialog(const string &workspaceId, const CreateDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建会话分析任务
 *
 * @param request CreateDialogAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogAnalysisTaskResponse
 */
CreateDialogAnalysisTaskResponse Client::createDialogAnalysisTaskWithOptions(const string &workspaceId, const CreateDialogAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysisNodes()) {
    body["analysisNodes"] = request.analysisNodes();
  }

  if (!!request.hasConversationList()) {
    body["conversationList"] = request.conversationList();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasPlayCode()) {
    body["playCode"] = request.playCode();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDialogAnalysisTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/analysis/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDialogAnalysisTaskResponse>();
}

/**
 * @summary 创建会话分析任务
 *
 * @param request CreateDialogAnalysisTaskRequest
 * @return CreateDialogAnalysisTaskResponse
 */
CreateDialogAnalysisTaskResponse Client::createDialogAnalysisTask(const string &workspaceId, const CreateDialogAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDialogAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建财报总结任务
 *
 * @param request CreateDocsSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocsSummaryTaskResponse
 */
CreateDocsSummaryTaskResponse Client::createDocsSummaryTaskWithOptions(const string &workspaceId, const CreateDocsSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocInfos()) {
    body["docInfos"] = request.docInfos();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.enableTable();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.instruction();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDocsSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/docs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocsSummaryTaskResponse>();
}

/**
 * @summary 创建财报总结任务
 *
 * @param request CreateDocsSummaryTaskRequest
 * @return CreateDocsSummaryTaskResponse
 */
CreateDocsSummaryTaskResponse Client::createDocsSummaryTask(const string &workspaceId, const CreateDocsSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDocsSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建财报总结任务
 *
 * @param request CreateFinReportSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFinReportSummaryTaskResponse
 */
CreateFinReportSummaryTaskResponse Client::createFinReportSummaryTaskWithOptions(const string &workspaceId, const CreateFinReportSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.enableTable();
  }

  if (!!request.hasEndPage()) {
    body["endPage"] = request.endPage();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.instruction();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasStartPage()) {
    body["startPage"] = request.startPage();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFinReportSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFinReportSummaryTaskResponse>();
}

/**
 * @summary 创建财报总结任务
 *
 * @param request CreateFinReportSummaryTaskRequest
 * @return CreateFinReportSummaryTaskResponse
 */
CreateFinReportSummaryTaskResponse Client::createFinReportSummaryTask(const string &workspaceId, const CreateFinReportSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFinReportSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建文档库
 *
 * @param request CreateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibraryWithOptions(const string &workspaceId, const CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasIndexSetting()) {
    body["indexSetting"] = request.indexSetting();
  }

  if (!!request.hasLibraryName()) {
    body["libraryName"] = request.libraryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibraryResponse>();
}

/**
 * @summary 创建文档库
 *
 * @param request CreateLibraryRequest
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibrary(const string &workspaceId, const CreateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建PDF翻译任务
 *
 * @param request CreatePdfTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdfTranslateTaskResponse
 */
CreatePdfTranslateTaskResponse Client::createPdfTranslateTaskWithOptions(const string &workspaceId, const CreatePdfTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasKnowledge()) {
    body["knowledge"] = request.knowledge();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasTranslateTo()) {
    body["translateTo"] = request.translateTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePdfTranslateTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/pdfTranslate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdfTranslateTaskResponse>();
}

/**
 * @summary 创建PDF翻译任务
 *
 * @param request CreatePdfTranslateTaskRequest
 * @return CreatePdfTranslateTaskResponse
 */
CreatePdfTranslateTaskResponse Client::createPdfTranslateTask(const string &workspaceId, const CreatePdfTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdfTranslateTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建预定义文档
 *
 * @param request CreatePredefinedDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePredefinedDocumentResponse
 */
CreatePredefinedDocumentResponse Client::createPredefinedDocumentWithOptions(const string &workspaceId, const CreatePredefinedDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunks()) {
    body["chunks"] = request.chunks();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.metadata();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePredefinedDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/createPredefinedDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePredefinedDocumentResponse>();
}

/**
 * @summary 创建预定义文档
 *
 * @param request CreatePredefinedDocumentRequest
 * @return CreatePredefinedDocumentResponse
 */
CreatePredefinedDocumentResponse Client::createPredefinedDocument(const string &workspaceId, const CreatePredefinedDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPredefinedDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建财报总结的任务
 *
 * @param request CreateQualityCheckTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityCheckTaskResponse
 */
CreateQualityCheckTaskResponse Client::createQualityCheckTaskWithOptions(const string &workspaceId, const CreateQualityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationList()) {
    body["conversationList"] = request.conversationList();
  }

  if (!!request.hasGmtService()) {
    body["gmtService"] = request.gmtService();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasQualityGroup()) {
    body["qualityGroup"] = request.qualityGroup();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  if (!!request.hasSceneCode()) {
    body["sceneCode"] = request.sceneCode();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateQualityCheckTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/qualitycheck/task/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityCheckTaskResponse>();
}

/**
 * @summary 创建财报总结的任务
 *
 * @param request CreateQualityCheckTaskRequest
 * @return CreateQualityCheckTaskResponse
 */
CreateQualityCheckTaskResponse Client::createQualityCheckTask(const string &workspaceId, const CreateQualityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQualityCheckTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 删除文档
 *
 * @param request DeleteDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const string &workspaceId, const DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIds()) {
    body["docIds"] = request.docIds();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @summary 删除文档
 *
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const string &workspaceId, const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 删除文档库
 *
 * @param request DeleteLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibraryWithOptions(const string &workspaceId, const DeleteLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.libraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLibraryResponse>();
}

/**
 * @summary 删除文档库
 *
 * @param request DeleteLibraryRequest
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibrary(const string &workspaceId, const DeleteLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 端到端实时对话
 *
 * @param request EndToEndRealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndToEndRealTimeDialogResponse
 */
EndToEndRealTimeDialogResponse Client::endToEndRealTimeDialogWithOptions(const string &workspaceId, const EndToEndRealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["asrModelId"] = request.asrModelId();
  }

  if (!!request.hasInputFormat()) {
    query["inputFormat"] = request.inputFormat();
  }

  if (!!request.hasOutputFormat()) {
    query["outputFormat"] = request.outputFormat();
  }

  if (!!request.hasPitchRate()) {
    query["pitchRate"] = request.pitchRate();
  }

  if (!!request.hasSampleRate()) {
    query["sampleRate"] = request.sampleRate();
  }

  if (!!request.hasSpeechRate()) {
    query["speechRate"] = request.speechRate();
  }

  if (!!request.hasTtsModelId()) {
    query["ttsModelId"] = request.ttsModelId();
  }

  if (!!request.hasVoiceCode()) {
    query["voiceCode"] = request.voiceCode();
  }

  if (!!request.hasVolume()) {
    query["volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndToEndRealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ws/realtime/dialog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndToEndRealTimeDialogResponse>();
}

/**
 * @summary 端到端实时对话
 *
 * @param request EndToEndRealTimeDialogRequest
 * @return EndToEndRealTimeDialogResponse
 */
EndToEndRealTimeDialogResponse Client::endToEndRealTimeDialog(const string &workspaceId, const EndToEndRealTimeDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return endToEndRealTimeDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 中断任务
 *
 * @param request EvictTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvictTaskResponse
 */
EvictTaskResponse Client::evictTaskWithOptions(const string &workspaceId, const EvictTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "EvictTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/evict")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvictTaskResponse>();
}

/**
 * @summary 中断任务
 *
 * @param request EvictTaskRequest
 * @return EvictTaskResponse
 */
EvictTaskResponse Client::evictTask(const string &workspaceId, const EvictTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return evictTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 根据文档解析问答QA
 *
 * @param request GenDocQaResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenDocQaResultResponse
 */
GenDocQaResultResponse Client::genDocQaResultWithOptions(const string &workspaceId, const GenDocQaResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenDocQaResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/qa/parse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenDocQaResultResponse>();
}

/**
 * @summary 根据文档解析问答QA
 *
 * @param request GenDocQaResultRequest
 * @return GenDocQaResultResponse
 */
GenDocQaResultResponse Client::genDocQaResult(const string &workspaceId, const GenDocQaResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return genDocQaResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取app配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppConfigResponse
 */
GetAppConfigResponse Client::getAppConfigWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppConfig"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/app/config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppConfigResponse>();
}

/**
 * @summary 获取app配置
 *
 * @return GetAppConfigResponse
 */
GetAppConfigResponse Client::getAppConfig(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAppConfigWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary 获取问答结果
 *
 * @param request GetChatQuestionRespRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatQuestionRespResponse
 */
GetChatQuestionRespResponse Client::getChatQuestionRespWithOptions(const string &workspaceId, const GetChatQuestionRespRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBatchId()) {
    body["batchId"] = request.batchId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetChatQuestionResp"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/chat/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatQuestionRespResponse>();
}

/**
 * @summary 获取问答结果
 *
 * @param request GetChatQuestionRespRequest
 * @return GetChatQuestionRespResponse
 */
GetChatQuestionRespResponse Client::getChatQuestionResp(const string &workspaceId, const GetChatQuestionRespRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatQuestionRespWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取外呼会话分析结果
 *
 * @param request GetDialogAnalysisResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogAnalysisResultResponse
 */
GetDialogAnalysisResultResponse Client::getDialogAnalysisResultWithOptions(const string &workspaceId, const GetDialogAnalysisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["asc"] = request.asc();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasSessionIds()) {
    body["sessionIds"] = request.sessionIds();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  if (!!request.hasUseUrl()) {
    body["useUrl"] = request.useUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDialogAnalysisResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogAnalysisResultResponse>();
}

/**
 * @summary 获取外呼会话分析结果
 *
 * @param request GetDialogAnalysisResultRequest
 * @return GetDialogAnalysisResultResponse
 */
GetDialogAnalysisResultResponse Client::getDialogAnalysisResult(const string &workspaceId, const GetDialogAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogAnalysisResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取异步任务的结果
 *
 * @param request GetDialogDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogDetailResponse
 */
GetDialogDetailResponse Client::getDialogDetailWithOptions(const string &workspaceId, const GetDialogDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDialogDetail"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogDetailResponse>();
}

/**
 * @summary 获取异步任务的结果
 *
 * @param request GetDialogDetailRequest
 * @return GetDialogDetailResponse
 */
GetDialogDetailResponse Client::getDialogDetail(const string &workspaceId, const GetDialogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogDetailWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 查询会话日志
 *
 * @param request GetDialogLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogLogResponse
 */
GetDialogLogResponse Client::getDialogLogWithOptions(const string &workspaceId, const GetDialogLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDialogLog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/dialog/log")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogLogResponse>();
}

/**
 * @summary 查询会话日志
 *
 * @param request GetDialogLogRequest
 * @return GetDialogLogResponse
 */
GetDialogLogResponse Client::getDialogLog(const string &workspaceId, const GetDialogLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogLogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取文档的chunk列表
 *
 * @param request GetDocumentChunkListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentChunkListResponse
 */
GetDocumentChunkListResponse Client::getDocumentChunkListWithOptions(const string &workspaceId, const GetDocumentChunkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunkIdList()) {
    body["chunkIdList"] = request.chunkIdList();
  }

  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasOrderBy()) {
    body["orderBy"] = request.orderBy();
  }

  if (!!request.hasPage()) {
    body["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasSearchQuery()) {
    body["searchQuery"] = request.searchQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocumentChunkList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/getDocumentChunk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentChunkListResponse>();
}

/**
 * @summary 获取文档的chunk列表
 *
 * @param request GetDocumentChunkListRequest
 * @return GetDocumentChunkListResponse
 */
GetDocumentChunkListResponse Client::getDocumentChunkList(const string &workspaceId, const GetDocumentChunkListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentChunkListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 分页查询文档库的文档列表
 *
 * @param request GetDocumentListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentListResponse
 */
GetDocumentListResponse Client::getDocumentListWithOptions(const string &workspaceId, const GetDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.libraryId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/listDocument")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentListResponse>();
}

/**
 * @summary 分页查询文档库的文档列表
 *
 * @param request GetDocumentListRequest
 * @return GetDocumentListResponse
 */
GetDocumentListResponse Client::getDocumentList(const string &workspaceId, const GetDocumentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取文档URL
 *
 * @param request GetDocumentUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentUrlResponse
 */
GetDocumentUrlResponse Client::getDocumentUrlWithOptions(const string &workspaceId, const GetDocumentUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.documentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentUrl"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentUrlResponse>();
}

/**
 * @summary 获取文档URL
 *
 * @param request GetDocumentUrlRequest
 * @return GetDocumentUrlResponse
 */
GetDocumentUrlResponse Client::getDocumentUrl(const string &workspaceId, const GetDocumentUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 带条件的分页查询文档库的文档列表
 *
 * @param request GetFilterDocumentListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFilterDocumentListResponse
 */
GetFilterDocumentListResponse Client::getFilterDocumentListWithOptions(const string &workspaceId, const GetFilterDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnd()) {
    body["and"] = request._and();
  }

  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.docIdList();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasOr()) {
    body["or"] = request._or();
  }

  if (!!request.hasPage()) {
    body["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFilterDocumentList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/filterDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFilterDocumentListResponse>();
}

/**
 * @summary 带条件的分页查询文档库的文档列表
 *
 * @param request GetFilterDocumentListRequest
 * @return GetFilterDocumentListResponse
 */
GetFilterDocumentListResponse Client::getFilterDocumentList(const string &workspaceId, const GetFilterDocumentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFilterDocumentListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 分页查询文档库列表
 *
 * @param request GetHistoryListByBizTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoryListByBizTypeResponse
 */
GetHistoryListByBizTypeResponse Client::getHistoryListByBizTypeWithOptions(const string &workspaceId, const GetHistoryListByBizTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["bizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.bizType();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoryListByBizType"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/history/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoryListByBizTypeResponse>();
}

/**
 * @summary 分页查询文档库列表
 *
 * @param request GetHistoryListByBizTypeRequest
 * @return GetHistoryListByBizTypeResponse
 */
GetHistoryListByBizTypeResponse Client::getHistoryListByBizType(const string &workspaceId, const GetHistoryListByBizTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHistoryListByBizTypeWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取文档库配置详情
 *
 * @param request GetLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibraryWithOptions(const string &workspaceId, const GetLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.libraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryResponse>();
}

/**
 * @summary 获取文档库配置详情
 *
 * @param request GetLibraryRequest
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibrary(const string &workspaceId, const GetLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 分页查询文档库列表
 *
 * @param request GetLibraryListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryListResponse
 */
GetLibraryListResponse Client::getLibraryListWithOptions(const string &workspaceId, const GetLibraryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryListResponse>();
}

/**
 * @summary 分页查询文档库列表
 *
 * @param request GetLibraryListRequest
 * @return GetLibraryListResponse
 */
GetLibraryListResponse Client::getLibraryList(const string &workspaceId, const GetLibraryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取解析结果
 *
 * @param request GetParseResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParseResultResponse
 */
GetParseResultResponse Client::getParseResultWithOptions(const string &workspaceId, const GetParseResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasUseUrlResult()) {
    body["useUrlResult"] = request.useUrlResult();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetParseResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/getParseResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParseResultResponse>();
}

/**
 * @summary 获取解析结果
 *
 * @param request GetParseResultRequest
 * @return GetParseResultResponse
 */
GetParseResultResponse Client::getParseResult(const string &workspaceId, const GetParseResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getParseResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取异步任务的结果
 *
 * @param request GetQualityCheckTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityCheckTaskResultResponse
 */
GetQualityCheckTaskResultResponse Client::getQualityCheckTaskResultWithOptions(const string &workspaceId, const GetQualityCheckTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetQualityCheckTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/qualitycheck/task/query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityCheckTaskResultResponse>();
}

/**
 * @summary 获取异步任务的结果
 *
 * @param request GetQualityCheckTaskResultRequest
 * @return GetQualityCheckTaskResultResponse
 */
GetQualityCheckTaskResultResponse Client::getQualityCheckTaskResult(const string &workspaceId, const GetQualityCheckTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQualityCheckTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取财报总结任务结果
 *
 * @param request GetSummaryTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryTaskResultResponse
 */
GetSummaryTaskResultResponse Client::getSummaryTaskResultWithOptions(const string &workspaceId, const GetSummaryTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetSummaryTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSummaryTaskResultResponse>();
}

/**
 * @summary 获取财报总结任务结果
 *
 * @param request GetSummaryTaskResultRequest
 * @return GetSummaryTaskResultResponse
 */
GetSummaryTaskResultResponse Client::getSummaryTaskResult(const string &workspaceId, const GetSummaryTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSummaryTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取异步任务结果
 *
 * @param request GetTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResultWithOptions(const string &workspaceId, const GetTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResultResponse>();
}

/**
 * @summary 获取异步任务结果
 *
 * @param request GetTaskResultRequest
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResult(const string &workspaceId, const GetTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取财报总结任务结果
 *
 * @param request GetTaskStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatusWithOptions(const string &workspaceId, const GetTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetTaskStatus"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusResponse>();
}

/**
 * @summary 获取财报总结任务结果
 *
 * @param request GetTaskStatusRequest
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatus(const string &workspaceId, const GetTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskStatusWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 插件调试接口
 *
 * @param request InvokePluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokePluginResponse
 */
InvokePluginResponse Client::invokePluginWithOptions(const string &workspaceId, const InvokePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  if (!!request.hasPluginId()) {
    body["pluginId"] = request.pluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokePlugin"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/plugin/invoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokePluginResponse>();
}

/**
 * @summary 插件调试接口
 *
 * @param request InvokePluginRequest
 * @return InvokePluginResponse
 */
InvokePluginResponse Client::invokePlugin(const string &workspaceId, const InvokePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return invokePluginWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取文档预览
 *
 * @param request PreviewDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewDocumentResponse
 */
PreviewDocumentResponse Client::previewDocumentWithOptions(const string &workspaceId, const PreviewDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.documentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/preview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewDocumentResponse>();
}

/**
 * @summary 获取文档预览
 *
 * @param request PreviewDocumentRequest
 * @return PreviewDocumentResponse
 */
PreviewDocumentResponse Client::previewDocument(const string &workspaceId, const PreviewDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 重新索引
 *
 * @param request ReIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReIndexResponse
 */
ReIndexResponse Client::reIndexWithOptions(const string &workspaceId, const ReIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.documentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReIndex"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/reIndex")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReIndexResponse>();
}

/**
 * @summary 重新索引
 *
 * @param request ReIndexRequest
 * @return ReIndexResponse
 */
ReIndexResponse Client::reIndex(const string &workspaceId, const ReIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reIndexWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 实时对话
 *
 * @param request RealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealTimeDialogResponse
 */
FutrueGenerator<RealTimeDialogResponse> Client::realTimeDialogWithSSE(const string &workspaceId, const RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.analysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.bizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.conversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.dialogMemoryTurns();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.opType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.recommend();
  }

  if (!!request.hasScriptContentPlayed()) {
    body["scriptContentPlayed"] = request.scriptContentPlayed();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasUserVad()) {
    body["userVad"] = request.userVad();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
    })).get<RealTimeDialogResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 实时对话
 *
 * @param request RealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealTimeDialogResponse
 */
RealTimeDialogResponse Client::realTimeDialogWithOptions(const string &workspaceId, const RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.analysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.bizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.conversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.dialogMemoryTurns();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.opType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.recommend();
  }

  if (!!request.hasScriptContentPlayed()) {
    body["scriptContentPlayed"] = request.scriptContentPlayed();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasUserVad()) {
    body["userVad"] = request.userVad();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RealTimeDialogResponse>();
}

/**
 * @summary 实时对话
 *
 * @param request RealTimeDialogRequest
 * @return RealTimeDialogResponse
 */
RealTimeDialogResponse Client::realTimeDialog(const string &workspaceId, const RealTimeDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return realTimeDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 实时会话辅助
 *
 * @param request RealtimeDialogAssistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealtimeDialogAssistResponse
 */
RealtimeDialogAssistResponse Client::realtimeDialogAssistWithOptions(const string &workspaceId, const RealtimeDialogAssistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.analysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.bizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.conversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.dialogMemoryTurns();
  }

  if (!!request.hasHangUpDialog()) {
    body["hangUpDialog"] = request.hangUpDialog();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.metaData();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealtimeDialogAssist"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/assist")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RealtimeDialogAssistResponse>();
}

/**
 * @summary 实时会话辅助
 *
 * @param request RealtimeDialogAssistRequest
 * @return RealtimeDialogAssistResponse
 */
RealtimeDialogAssistResponse Client::realtimeDialogAssist(const string &workspaceId, const RealtimeDialogAssistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return realtimeDialogAssistWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 重建任务
 *
 * @param request RebuildTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildTaskResponse
 */
RebuildTaskResponse Client::rebuildTaskWithOptions(const string &workspaceId, const RebuildTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskIds()) {
    body["taskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RebuildTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/rebuild")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildTaskResponse>();
}

/**
 * @summary 重建任务
 *
 * @param request RebuildTaskRequest
 * @return RebuildTaskResponse
 */
RebuildTaskResponse Client::rebuildTask(const string &workspaceId, const RebuildTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rebuildTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 文档召回。
 *
 * @param request RecallDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecallDocumentResponse
 */
RecallDocumentResponse Client::recallDocumentWithOptions(const string &workspaceId, const RecallDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilters()) {
    body["filters"] = request.filters();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasRearrangement()) {
    body["rearrangement"] = request.rearrangement();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.topK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecallDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/recallDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecallDocumentResponse>();
}

/**
 * @summary 文档召回。
 *
 * @param request RecallDocumentRequest
 * @return RecallDocumentResponse
 */
RecallDocumentResponse Client::recallDocument(const string &workspaceId, const RecallDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recallDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 意图识别
 *
 * @param request RecognizeIntentionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeIntentionResponse
 */
RecognizeIntentionResponse Client::recognizeIntentionWithOptions(const string &workspaceId, const RecognizeIntentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.analysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.bizType();
  }

  if (!!request.hasConversation()) {
    body["conversation"] = request.conversation();
  }

  if (!!request.hasGlobalIntentionList()) {
    body["globalIntentionList"] = request.globalIntentionList();
  }

  if (!!request.hasHierarchicalIntentionList()) {
    body["hierarchicalIntentionList"] = request.hierarchicalIntentionList();
  }

  if (!!request.hasIntentionDomainCode()) {
    body["intentionDomainCode"] = request.intentionDomainCode();
  }

  if (!!request.hasIntentionList()) {
    body["intentionList"] = request.intentionList();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.opType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.recommend();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecognizeIntention"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/recog/intent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeIntentionResponse>();
}

/**
 * @summary 意图识别
 *
 * @param request RecognizeIntentionRequest
 * @return RecognizeIntentionResponse
 */
RecognizeIntentionResponse Client::recognizeIntention(const string &workspaceId, const RecognizeIntentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recognizeIntentionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 运行智能体
 *
 * @param request RunAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAgentResponse
 */
FutrueGenerator<RunAgentResponse> Client::runAgentWithSSE(const string &workspaceId, const RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["botId"] = request.botId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  if (!!request.hasUseDraft()) {
    body["useDraft"] = request.useDraft();
  }

  if (!!request.hasUserContent()) {
    body["userContent"] = request.userContent();
  }

  if (!!request.hasUserInputs()) {
    body["userInputs"] = request.userInputs();
  }

  if (!!request.hasVersionId()) {
    body["versionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunAgent"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/bot/thread/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
    })).get<RunAgentResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 运行智能体
 *
 * @param request RunAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAgentResponse
 */
RunAgentResponse Client::runAgentWithOptions(const string &workspaceId, const RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["botId"] = request.botId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  if (!!request.hasUseDraft()) {
    body["useDraft"] = request.useDraft();
  }

  if (!!request.hasUserContent()) {
    body["userContent"] = request.userContent();
  }

  if (!!request.hasUserInputs()) {
    body["userInputs"] = request.userInputs();
  }

  if (!!request.hasVersionId()) {
    body["versionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunAgent"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/bot/thread/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunAgentResponse>();
}

/**
 * @summary 运行智能体
 *
 * @param request RunAgentRequest
 * @return RunAgentResponse
 */
RunAgentResponse Client::runAgent(const string &workspaceId, const RunAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runAgentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunChatResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunChatResultGenerationResponse
 */
FutrueGenerator<RunChatResultGenerationResponse> Client::runChatResultGenerationWithSSE(const string &workspaceId, const RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInferenceParameters()) {
    body["inferenceParameters"] = request.inferenceParameters();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.tools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunChatResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
    })).get<RunChatResultGenerationResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunChatResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunChatResultGenerationResponse
 */
RunChatResultGenerationResponse Client::runChatResultGenerationWithOptions(const string &workspaceId, const RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInferenceParameters()) {
    body["inferenceParameters"] = request.inferenceParameters();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.modelId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.tools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunChatResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunChatResultGenerationResponse>();
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunChatResultGenerationRequest
 * @return RunChatResultGenerationResponse
 */
RunChatResultGenerationResponse Client::runChatResultGeneration(const string &workspaceId, const RunChatResultGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runChatResultGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 流式获取外呼会话分析结果
 *
 * @param request RunDialogAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDialogAnalysisResponse
 */
FutrueGenerator<RunDialogAnalysisResponse> Client::runDialogAnalysisWithSSE(const string &workspaceId, const RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunDialogAnalysis"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/stream/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
    })).get<RunDialogAnalysisResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式获取外呼会话分析结果
 *
 * @param request RunDialogAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDialogAnalysisResponse
 */
RunDialogAnalysisResponse Client::runDialogAnalysisWithOptions(const string &workspaceId, const RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunDialogAnalysis"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/stream/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDialogAnalysisResponse>();
}

/**
 * @summary 流式获取外呼会话分析结果
 *
 * @param request RunDialogAnalysisRequest
 * @return RunDialogAnalysisResponse
 */
RunDialogAnalysisResponse Client::runDialogAnalysis(const string &workspaceId, const RunDialogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runDialogAnalysisWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunLibraryChatGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLibraryChatGenerationResponse
 */
FutrueGenerator<RunLibraryChatGenerationResponse> Client::runLibraryChatGenerationWithSSE(const string &workspaceId, const RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.docIdList();
  }

  if (!!request.hasEnableFollowUp()) {
    body["enableFollowUp"] = request.enableFollowUp();
  }

  if (!!request.hasEnableMultiQuery()) {
    body["enableMultiQuery"] = request.enableMultiQuery();
  }

  if (!!request.hasEnableOpenQa()) {
    body["enableOpenQa"] = request.enableOpenQa();
  }

  if (!!request.hasFollowUpLlm()) {
    body["followUpLlm"] = request.followUpLlm();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasLlmType()) {
    body["llmType"] = request.llmType();
  }

  if (!!request.hasMultiQueryLlm()) {
    body["multiQueryLlm"] = request.multiQueryLlm();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasQueryCriteria()) {
    body["queryCriteria"] = request.queryCriteria();
  }

  if (!!request.hasRerankType()) {
    body["rerankType"] = request.rerankType();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasSubQueryList()) {
    body["subQueryList"] = request.subQueryList();
  }

  if (!!request.hasTextSearchParameter()) {
    body["textSearchParameter"] = request.textSearchParameter();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.topK();
  }

  if (!!request.hasVectorSearchParameter()) {
    body["vectorSearchParameter"] = request.vectorSearchParameter();
  }

  if (!!request.hasWithDocumentReference()) {
    body["withDocumentReference"] = request.withDocumentReference();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLibraryChatGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/library/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
    })).get<RunLibraryChatGenerationResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunLibraryChatGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLibraryChatGenerationResponse
 */
RunLibraryChatGenerationResponse Client::runLibraryChatGenerationWithOptions(const string &workspaceId, const RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.docIdList();
  }

  if (!!request.hasEnableFollowUp()) {
    body["enableFollowUp"] = request.enableFollowUp();
  }

  if (!!request.hasEnableMultiQuery()) {
    body["enableMultiQuery"] = request.enableMultiQuery();
  }

  if (!!request.hasEnableOpenQa()) {
    body["enableOpenQa"] = request.enableOpenQa();
  }

  if (!!request.hasFollowUpLlm()) {
    body["followUpLlm"] = request.followUpLlm();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasLlmType()) {
    body["llmType"] = request.llmType();
  }

  if (!!request.hasMultiQueryLlm()) {
    body["multiQueryLlm"] = request.multiQueryLlm();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasQueryCriteria()) {
    body["queryCriteria"] = request.queryCriteria();
  }

  if (!!request.hasRerankType()) {
    body["rerankType"] = request.rerankType();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasSubQueryList()) {
    body["subQueryList"] = request.subQueryList();
  }

  if (!!request.hasTextSearchParameter()) {
    body["textSearchParameter"] = request.textSearchParameter();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.topK();
  }

  if (!!request.hasVectorSearchParameter()) {
    body["vectorSearchParameter"] = request.vectorSearchParameter();
  }

  if (!!request.hasWithDocumentReference()) {
    body["withDocumentReference"] = request.withDocumentReference();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLibraryChatGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/library/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunLibraryChatGenerationResponse>();
}

/**
 * @summary 获取生成式对话结果
 *
 * @param request RunLibraryChatGenerationRequest
 * @return RunLibraryChatGenerationResponse
 */
RunLibraryChatGenerationResponse Client::runLibraryChatGeneration(const string &workspaceId, const RunLibraryChatGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runLibraryChatGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 提交问题列表
 *
 * @param request SubmitChatQuestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitChatQuestionResponse
 */
SubmitChatQuestionResponse Client::submitChatQuestionWithOptions(const string &workspaceId, const SubmitChatQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGmtService()) {
    body["gmtService"] = request.gmtService();
  }

  if (!!request.hasLiveScriptContent()) {
    body["liveScriptContent"] = request.liveScriptContent();
  }

  if (!!request.hasOpenSmallTalk()) {
    body["openSmallTalk"] = request.openSmallTalk();
  }

  if (!!request.hasQuestionList()) {
    body["questionList"] = request.questionList();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitChatQuestion"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/chat/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitChatQuestionResponse>();
}

/**
 * @summary 提交问题列表
 *
 * @param request SubmitChatQuestionRequest
 * @return SubmitChatQuestionResponse
 */
SubmitChatQuestionResponse Client::submitChatQuestion(const string &workspaceId, const SubmitChatQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitChatQuestionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 更新文档
 *
 * @param request UpdateDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocumentWithOptions(const string &workspaceId, const UpdateDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.docId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasMeta()) {
    body["meta"] = request.meta();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/updateDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocumentResponse>();
}

/**
 * @summary 更新文档
 *
 * @param request UpdateDocumentRequest
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocument(const string &workspaceId, const UpdateDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 更新文档的chunk
 *
 * @param request UpdateDocumentChunkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocumentChunkResponse
 */
UpdateDocumentChunkResponse Client::updateDocumentChunkWithOptions(const string &workspaceId, const UpdateDocumentChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunks()) {
    body["chunks"] = request.chunks();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDocumentChunk"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/updateDocumentChunk")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocumentChunkResponse>();
}

/**
 * @summary 更新文档的chunk
 *
 * @param request UpdateDocumentChunkRequest
 * @return UpdateDocumentChunkResponse
 */
UpdateDocumentChunkResponse Client::updateDocumentChunk(const string &workspaceId, const UpdateDocumentChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDocumentChunkWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 更新文档库配置
 *
 * @param request UpdateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibraryWithOptions(const string &workspaceId, const UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasIndexSetting()) {
    body["indexSetting"] = request.indexSetting();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  if (!!request.hasLibraryName()) {
    body["libraryName"] = request.libraryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLibraryResponse>();
}

/**
 * @summary 更新文档库配置
 *
 * @param request UpdateLibraryRequest
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibrary(const string &workspaceId, const UpdateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 更新QA问答库
 *
 * @param request UpdateQaLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQaLibraryResponse
 */
UpdateQaLibraryResponse Client::updateQaLibraryWithOptions(const string &workspaceId, const UpdateQaLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParseQaResults()) {
    body["parseQaResults"] = request.parseQaResults();
  }

  if (!!request.hasQaLibraryId()) {
    body["qaLibraryId"] = request.qaLibraryId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateQaLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/qa/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQaLibraryResponse>();
}

/**
 * @summary 更新QA问答库
 *
 * @param request UpdateQaLibraryRequest
 * @return UpdateQaLibraryResponse
 */
UpdateQaLibraryResponse Client::updateQaLibrary(const string &workspaceId, const UpdateQaLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQaLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 上传文档到文档库
 *
 * @param request UploadDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocumentWithOptions(const string &workspaceId, const UploadDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.data();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.fileUrl();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.libraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDocumentResponse>();
}

/**
 * @summary 上传文档到文档库
 *
 * @param request UploadDocumentRequest
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocument(const string &workspaceId, const UploadDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadDocumentWithOptions(workspaceId, request, headers, runtime);
}

UploadDocumentResponse Client::uploadDocumentAdvance(const string &workspaceId, const UploadDocumentAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "DianJin"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadDocumentRequest uploadDocumentReq = UploadDocumentRequest();
  Utils::Utils::convert(request, uploadDocumentReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadDocumentReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadDocumentResponse uploadDocumentResp = uploadDocumentWithOptions(workspaceId, uploadDocumentReq, headers, runtime);
  return uploadDocumentResp;
}
} // namespace AlibabaCloud
} // namespace DianJin20240628