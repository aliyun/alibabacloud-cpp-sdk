#include <darabonba/Core.hpp>
#include <alibabacloud/EnergyExpertExternal20220923.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::EnergyExpertExternal20220923::Models;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{

AlibabaCloud::EnergyExpertExternal20220923::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("energyexpertexternal", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加AISearch项目中的结构化元素
 *
 * @param request AISearchResourceAddRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchResourceAddResponse
 */
AISearchResourceAddResponse Client::aISearchResourceAddWithOptions(const AISearchResourceAddRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AISearchResourceAdd"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/resource/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AISearchResourceAddResponse>();
}

/**
 * @summary 添加AISearch项目中的结构化元素
 *
 * @param request AISearchResourceAddRequest
 * @return AISearchResourceAddResponse
 */
AISearchResourceAddResponse Client::aISearchResourceAdd(const AISearchResourceAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aISearchResourceAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除AISearch项目中的结构化元素
 *
 * @param request AISearchResourceDeleteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchResourceDeleteResponse
 */
AISearchResourceDeleteResponse Client::aISearchResourceDeleteWithOptions(const AISearchResourceDeleteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AISearchResourceDelete"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/resource/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AISearchResourceDeleteResponse>();
}

/**
 * @summary 删除AISearch项目中的结构化元素
 *
 * @param request AISearchResourceDeleteRequest
 * @return AISearchResourceDeleteResponse
 */
AISearchResourceDeleteResponse Client::aISearchResourceDelete(const AISearchResourceDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aISearchResourceDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 查找AISearch资源
 *
 * @param tmpReq AISearchResourceGetListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchResourceGetListResponse
 */
AISearchResourceGetListResponse Client::aISearchResourceGetListWithOptions(const AISearchResourceGetListRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AISearchResourceGetListShrinkRequest request = AISearchResourceGetListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "resourceIds", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["resourceIds"] = request.getResourceIdsShrink();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AISearchResourceGetList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/resource/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AISearchResourceGetListResponse>();
}

/**
 * @summary 查找AISearch资源
 *
 * @param request AISearchResourceGetListRequest
 * @return AISearchResourceGetListResponse
 */
AISearchResourceGetListResponse Client::aISearchResourceGetList(const AISearchResourceGetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aISearchResourceGetListWithOptions(request, headers, runtime);
}

/**
 * @summary 修改AISearch项目中的结构化元素
 *
 * @param request AISearchResourceUpdateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchResourceUpdateResponse
 */
AISearchResourceUpdateResponse Client::aISearchResourceUpdateWithOptions(const AISearchResourceUpdateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AISearchResourceUpdate"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/resource/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AISearchResourceUpdateResponse>();
}

/**
 * @summary 修改AISearch项目中的结构化元素
 *
 * @param request AISearchResourceUpdateRequest
 * @return AISearchResourceUpdateResponse
 */
AISearchResourceUpdateResponse Client::aISearchResourceUpdate(const AISearchResourceUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aISearchResourceUpdateWithOptions(request, headers, runtime);
}

/**
 * @summary aisearch问答接口
 *
 * @param request AISearchStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchStreamResponse
 */
FutureGenerator<AISearchStreamResponse> Client::aISearchStreamWithSSE(const AISearchStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["folderId"] = request.getFolderId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.getQuestion();
  }

  if (!!request.hasResourceTypeNeeded()) {
    body["resourceTypeNeeded"] = request.getResourceTypeNeeded();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AISearchStream"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/searchStream")},
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
      })).get<AISearchStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary aisearch问答接口
 *
 * @param request AISearchStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AISearchStreamResponse
 */
AISearchStreamResponse Client::aISearchStreamWithOptions(const AISearchStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["folderId"] = request.getFolderId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.getQuestion();
  }

  if (!!request.hasResourceTypeNeeded()) {
    body["resourceTypeNeeded"] = request.getResourceTypeNeeded();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AISearchStream"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiSearch/searchStream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AISearchStreamResponse>();
}

/**
 * @summary aisearch问答接口
 *
 * @param request AISearchStreamRequest
 * @return AISearchStreamResponse
 */
AISearchStreamResponse Client::aISearchStream(const AISearchStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aISearchStreamWithOptions(request, headers, runtime);
}

/**
 * @summary 创建文件夹
 *
 * @param request AddFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFolderResponse
 */
AddFolderResponse Client::addFolderWithOptions(const AddFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderName()) {
    body["folderName"] = request.getFolderName();
  }

  if (!!request.hasParentFolderId()) {
    body["parentFolderId"] = request.getParentFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddFolder"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/folder/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFolderResponse>();
}

/**
 * @summary 创建文件夹
 *
 * @param request AddFolderRequest
 * @return AddFolderResponse
 */
AddFolderResponse Client::addFolder(const AddFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addFolderWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the real-time parsing result of the Qwen VL model.
 *
 * @description You need to upload a document URL to obtain the real-time parsing result of the Qwen VL model.
 *
 * @param request AnalyzeVlRealtimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeVlRealtimeResponse
 */
AnalyzeVlRealtimeResponse Client::analyzeVlRealtimeWithOptions(const AnalyzeVlRealtimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnalyzeVlRealtime"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/analyzeVlRealtime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeVlRealtimeResponse>();
}

/**
 * @summary Obtains the real-time parsing result of the Qwen VL model.
 *
 * @description You need to upload a document URL to obtain the real-time parsing result of the Qwen VL model.
 *
 * @param request AnalyzeVlRealtimeRequest
 * @return AnalyzeVlRealtimeResponse
 */
AnalyzeVlRealtimeResponse Client::analyzeVlRealtime(const AnalyzeVlRealtimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return analyzeVlRealtimeWithOptions(request, headers, runtime);
}

AnalyzeVlRealtimeResponse Client::analyzeVlRealtimeAdvance(const AnalyzeVlRealtimeAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
    {"Product" , "energyExpertExternal"},
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
  AnalyzeVlRealtimeRequest analyzeVlRealtimeReq = AnalyzeVlRealtimeRequest();
  Utils::Utils::convert(request, analyzeVlRealtimeReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
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
    analyzeVlRealtimeReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  AnalyzeVlRealtimeResponse analyzeVlRealtimeResp = analyzeVlRealtimeWithOptions(analyzeVlRealtimeReq, headers, runtime);
  return analyzeVlRealtimeResp;
}

/**
 * @summary 策略执行状态反馈
 *
 * @param request BatchSaveInstructionStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSaveInstructionStatusResponse
 */
BatchSaveInstructionStatusResponse Client::batchSaveInstructionStatusWithOptions(const BatchSaveInstructionStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFactoryId()) {
    body["factoryId"] = request.getFactoryId();
  }

  if (!!request.hasPKey()) {
    body["pKey"] = request.getPKey();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.getStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchSaveInstructionStatus"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/hvac/batchSaveInstructionStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSaveInstructionStatusResponse>();
}

/**
 * @summary 策略执行状态反馈
 *
 * @param request BatchSaveInstructionStatusRequest
 * @return BatchSaveInstructionStatusResponse
 */
BatchSaveInstructionStatusResponse Client::batchSaveInstructionStatus(const BatchSaveInstructionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchSaveInstructionStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 批量设置空调站点运行计划
 *
 * @param request BatchUpdateSystemRunningPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateSystemRunningPlanResponse
 */
BatchUpdateSystemRunningPlanResponse Client::batchUpdateSystemRunningPlanWithOptions(const BatchUpdateSystemRunningPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasControlType()) {
    body["controlType"] = request.getControlType();
  }

  if (!!request.hasDateType()) {
    body["dateType"] = request.getDateType();
  }

  if (!!request.hasEarliestStartupTime()) {
    body["earliestStartupTime"] = request.getEarliestStartupTime();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasFactoryId()) {
    body["factoryId"] = request.getFactoryId();
  }

  if (!!request.hasLatestShutdownTime()) {
    body["latestShutdownTime"] = request.getLatestShutdownTime();
  }

  if (!!request.hasMaxCarbonDioxide()) {
    body["maxCarbonDioxide"] = request.getMaxCarbonDioxide();
  }

  if (!!request.hasMaxTem()) {
    body["maxTem"] = request.getMaxTem();
  }

  if (!!request.hasMinTem()) {
    body["minTem"] = request.getMinTem();
  }

  if (!!request.hasSeasonMode()) {
    body["seasonMode"] = request.getSeasonMode();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasSystemId()) {
    body["systemId"] = request.getSystemId();
  }

  if (!!request.hasWorkingEndTime()) {
    body["workingEndTime"] = request.getWorkingEndTime();
  }

  if (!!request.hasWorkingStartTime()) {
    body["workingStartTime"] = request.getWorkingStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateSystemRunningPlan"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/hvac/batchUpdateSystemRunningPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateSystemRunningPlanResponse>();
}

/**
 * @summary 批量设置空调站点运行计划
 *
 * @param request BatchUpdateSystemRunningPlanRequest
 * @return BatchUpdateSystemRunningPlanResponse
 */
BatchUpdateSystemRunningPlanResponse Client::batchUpdateSystemRunningPlan(const BatchUpdateSystemRunningPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchUpdateSystemRunningPlanWithOptions(request, headers, runtime);
}

/**
 * @summary Knowledge Base Q\\&A
 *
 * @description - The interface provides Q&A services within the scope of the selected directory in the session.
 * - The sessionId information is obtained through GetChatSessionList.
 * - You can also create a new session via the CreateChatSession interface.
 *
 * @param request ChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentIds()) {
    body["documentIds"] = request.getDocumentIds();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.getQuestion();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatResponse>();
}

/**
 * @summary Knowledge Base Q\\&A
 *
 * @description - The interface provides Q&A services within the scope of the selected directory in the session.
 * - The sessionId information is obtained through GetChatSessionList.
 * - You can also create a new session via the CreateChatSession interface.
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return chatWithOptions(request, headers, runtime);
}

/**
 * @summary Knowledge Base Q\\&A
 *
 * @description - The interface provides Q&A services within the scope of the selected directory in the session.
 * - The sessionId information is obtained through GetChatSessionList.
 * - You can also create a new session via the CreateChatSession interface.
 *
 * @param request ChatStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatStreamResponse
 */
FutureGenerator<ChatStreamResponse> Client::chatStreamWithSSE(const ChatStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentIds()) {
    body["documentIds"] = request.getDocumentIds();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.getQuestion();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatStream"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/stream")},
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
      })).get<ChatStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Knowledge Base Q\\&A
 *
 * @description - The interface provides Q&A services within the scope of the selected directory in the session.
 * - The sessionId information is obtained through GetChatSessionList.
 * - You can also create a new session via the CreateChatSession interface.
 *
 * @param request ChatStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatStreamResponse
 */
ChatStreamResponse Client::chatStreamWithOptions(const ChatStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentIds()) {
    body["documentIds"] = request.getDocumentIds();
  }

  if (!!request.hasQuestion()) {
    body["question"] = request.getQuestion();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatStream"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatStreamResponse>();
}

/**
 * @summary Knowledge Base Q\\&A
 *
 * @description - The interface provides Q&A services within the scope of the selected directory in the session.
 * - The sessionId information is obtained through GetChatSessionList.
 * - You can also create a new session via the CreateChatSession interface.
 *
 * @param request ChatStreamRequest
 * @return ChatStreamResponse
 */
ChatStreamResponse Client::chatStream(const ChatStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return chatStreamWithOptions(request, headers, runtime);
}

/**
 * @summary Create Q\\&A Window
 *
 * @param request CreateChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSessionWithOptions(const CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["folderId"] = request.getFolderId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChatSession"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/session/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatSessionResponse>();
}

/**
 * @summary Create Q\\&A Window
 *
 * @param request CreateChatSessionRequest
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSession(const CreateChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatSessionWithOptions(request, headers, runtime);
}

/**
 * @summary 删除解析过的文件
 *
 * @param request DeleteDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteDocument"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @summary 删除解析过的文件
 *
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDocumentWithOptions(request, headers, runtime);
}

/**
 * @summary 删除文件夹
 *
 * @param request DeleteFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const DeleteFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["folderId"] = request.getFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/folder/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFolderResponse>();
}

/**
 * @summary 删除文件夹
 *
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFolderWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文档detail
 *
 * @param request DetailDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailDocumentResponse
 */
DetailDocumentResponse Client::detailDocumentWithOptions(const DetailDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DetailDocument"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailDocumentResponse>();
}

/**
 * @summary 获取文档detail
 *
 * @param request DetailDocumentRequest
 * @return DetailDocumentResponse
 */
DetailDocumentResponse Client::detailDocument(const DetailDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return detailDocumentWithOptions(request, headers, runtime);
}

/**
 * @summary 编辑禁用设备
 *
 * @param request EditProhibitedDevicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditProhibitedDevicesResponse
 */
EditProhibitedDevicesResponse Client::editProhibitedDevicesWithOptions(const EditProhibitedDevicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFactoryId()) {
    body["factoryId"] = request.getFactoryId();
  }

  if (!!request.hasHvacDeviceConfigVOList()) {
    body["hvacDeviceConfigVOList"] = request.getHvacDeviceConfigVOList();
  }

  if (!!request.hasSystemId()) {
    body["systemId"] = request.getSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EditProhibitedDevices"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/hvac/editProhibitedDevices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditProhibitedDevicesResponse>();
}

/**
 * @summary 编辑禁用设备
 *
 * @param request EditProhibitedDevicesRequest
 * @return EditProhibitedDevicesResponse
 */
EditProhibitedDevicesResponse Client::editProhibitedDevices(const EditProhibitedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return editProhibitedDevicesWithOptions(request, headers, runtime);
}

/**
 * @summary 编辑不利区设备
 *
 * @param request EditUnfavorableAreaDevicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditUnfavorableAreaDevicesResponse
 */
EditUnfavorableAreaDevicesResponse Client::editUnfavorableAreaDevicesWithOptions(const EditUnfavorableAreaDevicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFactoryId()) {
    body["factoryId"] = request.getFactoryId();
  }

  if (!!request.hasHvacDeviceConfigVOList()) {
    body["hvacDeviceConfigVOList"] = request.getHvacDeviceConfigVOList();
  }

  if (!!request.hasSystemId()) {
    body["systemId"] = request.getSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EditUnfavorableAreaDevices"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/hvac/editUnfavorableAreaDevices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditUnfavorableAreaDevicesResponse>();
}

/**
 * @summary 编辑不利区设备
 *
 * @param request EditUnfavorableAreaDevicesRequest
 * @return EditUnfavorableAreaDevicesResponse
 */
EditUnfavorableAreaDevicesResponse Client::editUnfavorableAreaDevices(const EditUnfavorableAreaDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return editUnfavorableAreaDevicesWithOptions(request, headers, runtime);
}

/**
 * @summary Generate a report of the specified carbon footprint.
 *
 * @description Given a product ID, this API initiates a task to calculate the carbon footprint result for the corresponding product. The task\\"s status can be checked using the `IsCompleted` API. Following the generation of results, other result inquiry APIs can be accessed for display content.
 *
 * @param request GenerateResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateResultResponse
 */
GenerateResultResponse Client::generateResultWithOptions(const GenerateResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateResult"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/generate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateResultResponse>();
}

/**
 * @summary Generate a report of the specified carbon footprint.
 *
 * @description Given a product ID, this API initiates a task to calculate the carbon footprint result for the corresponding product. The task\\"s status can be checked using the `IsCompleted` API. Following the generation of results, other result inquiry APIs can be accessed for display content.
 *
 * @param request GenerateResultRequest
 * @return GenerateResultResponse
 */
GenerateResultResponse Client::generateResult(const GenerateResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateResultWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to obtain electrical constitute analysis data.
 *
 * @param request GetAreaElecConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAreaElecConstituteResponse
 */
GetAreaElecConstituteResponse Client::getAreaElecConstituteWithOptions(const GetAreaElecConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAreaElecConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/elec/area")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAreaElecConstituteResponse>();
}

/**
 * @summary This interface is used to obtain electrical constitute analysis data.
 *
 * @param request GetAreaElecConstituteRequest
 * @return GetAreaElecConstituteResponse
 */
GetAreaElecConstituteResponse Client::getAreaElecConstitute(const GetAreaElecConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAreaElecConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary Get trends in carbon emissions.
 *
 * @param request GetCarbonEmissionTrendRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCarbonEmissionTrendResponse
 */
GetCarbonEmissionTrendResponse Client::getCarbonEmissionTrendWithOptions(const GetCarbonEmissionTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasModuleCode()) {
    body["moduleCode"] = request.getModuleCode();
  }

  if (!!request.hasModuleType()) {
    body["moduleType"] = request.getModuleType();
  }

  if (!!request.hasTrendType()) {
    body["trendType"] = request.getTrendType();
  }

  if (!!request.hasYearList()) {
    body["yearList"] = request.getYearList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCarbonEmissionTrend"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/trend")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCarbonEmissionTrendResponse>();
}

/**
 * @summary Get trends in carbon emissions.
 *
 * @param request GetCarbonEmissionTrendRequest
 * @return GetCarbonEmissionTrendResponse
 */
GetCarbonEmissionTrendResponse Client::getCarbonEmissionTrend(const GetCarbonEmissionTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCarbonEmissionTrendWithOptions(request, headers, runtime);
}

/**
 * @summary Get Q\\&A folder List
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatFolderListResponse
 */
GetChatFolderListResponse Client::getChatFolderListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatFolderList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/folder/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatFolderListResponse>();
}

/**
 * @summary Get Q\\&A folder List
 *
 * @return GetChatFolderListResponse
 */
GetChatFolderListResponse Client::getChatFolderList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatFolderListWithOptions(headers, runtime);
}

/**
 * @summary Retrieve the historical documents of a session
 *
 * @description - This API retrieves the list of historical documents within a session by passing in the session ID.
 * - The sessionId information is obtained through GetChatSessionList.
 * - A new session can also be created using the CreateChatSession interface.
 *
 * @param request GetChatListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatListResponse
 */
GetChatListResponse Client::getChatListWithOptions(const GetChatListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetChatList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatListResponse>();
}

/**
 * @summary Retrieve the historical documents of a session
 *
 * @description - This API retrieves the list of historical documents within a session by passing in the session ID.
 * - The sessionId information is obtained through GetChatSessionList.
 * - A new session can also be created using the CreateChatSession interface.
 *
 * @param request GetChatListRequest
 * @return GetChatListResponse
 */
GetChatListResponse Client::getChatList(const GetChatListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatListWithOptions(request, headers, runtime);
}

/**
 * @summary Get Q\\&A Session List
 *
 * @param request GetChatSessionListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatSessionListResponse
 */
GetChatSessionListResponse Client::getChatSessionListWithOptions(const GetChatSessionListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetChatSessionList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/chat/session/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatSessionListResponse>();
}

/**
 * @summary Get Q\\&A Session List
 *
 * @param request GetChatSessionListRequest
 * @return GetChatSessionListResponse
 */
GetChatSessionListResponse Client::getChatSessionList(const GetChatSessionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatSessionListWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to obtain the details category of a data item.
 *
 * @description - obtain data item detail list under the current enterprise.
 *
 * @param request GetDataItemListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataItemListResponse
 */
GetDataItemListResponse Client::getDataItemListWithOptions(const GetDataItemListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDataItemList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/data/item/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataItemListResponse>();
}

/**
 * @summary This interface is used to obtain the details category of a data item.
 *
 * @description - obtain data item detail list under the current enterprise.
 *
 * @param request GetDataItemListRequest
 * @return GetDataItemListResponse
 */
GetDataItemListResponse Client::getDataItemList(const GetDataItemListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDataItemListWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the data quality evaluation results DQR and DQI.
 *
 * @description This API returns the data quality evaluation results based on the user-provided product ID. It\\"s useful for understanding the data quality of the carbon emission factors for each inventory of the product.
 *
 * @param request GetDataQualityAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityAnalysisResponse
 */
GetDataQualityAnalysisResponse Client::getDataQualityAnalysisWithOptions(const GetDataQualityAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasDataQualityEvaluationType()) {
    body["dataQualityEvaluationType"] = request.getDataQualityEvaluationType();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDataQualityAnalysis"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/data/quality/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityAnalysisResponse>();
}

/**
 * @summary Obtain the data quality evaluation results DQR and DQI.
 *
 * @description This API returns the data quality evaluation results based on the user-provided product ID. It\\"s useful for understanding the data quality of the carbon emission factors for each inventory of the product.
 *
 * @param request GetDataQualityAnalysisRequest
 * @return GetDataQualityAnalysisResponse
 */
GetDataQualityAnalysisResponse Client::getDataQualityAnalysis(const GetDataQualityAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDataQualityAnalysisWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about a device at a site that is activated by using an Alibaba Cloud account.
 *
 * @description *   You can call this operation to query the parameters of a data collection device based on the device ID. If the verification is passed, the device parameters are returned. If the verification fails, a null value is returned.
 * *   You can query the parameters of a single device by day. If data of the device does not exist, a null value is returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @param request GetDeviceInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceInfoResponse
 */
GetDeviceInfoResponse Client::getDeviceInfoWithOptions(const GetDeviceInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["deviceId"] = request.getDeviceId();
  }

  if (!!request.hasDs()) {
    query["ds"] = request.getDs();
  }

  if (!!request.hasFactoryId()) {
    query["factoryId"] = request.getFactoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceInfo"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/external/getDeviceInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceInfoResponse>();
}

/**
 * @summary Queries the information about a device at a site that is activated by using an Alibaba Cloud account.
 *
 * @description *   You can call this operation to query the parameters of a data collection device based on the device ID. If the verification is passed, the device parameters are returned. If the verification fails, a null value is returned.
 * *   You can query the parameters of a single device by day. If data of the device does not exist, a null value is returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @param request GetDeviceInfoRequest
 * @return GetDeviceInfoResponse
 */
GetDeviceInfoResponse Client::getDeviceInfo(const GetDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeviceInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the devices of a site that is activated by using an Alibaba Cloud account.
 *
 * @description *   You can query the information about data collection devices of a site based on the ID of the site. If the verification is passed, the information about the devices of the site is returned. If the verification fails, a null value is returned.
 * *   Virtual meters at the site are not returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @param request GetDeviceListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceListResponse
 */
GetDeviceListResponse Client::getDeviceListWithOptions(const GetDeviceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFactoryId()) {
    query["factoryId"] = request.getFactoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/external/getDeviceList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceListResponse>();
}

/**
 * @summary Queries the devices of a site that is activated by using an Alibaba Cloud account.
 *
 * @description *   You can query the information about data collection devices of a site based on the ID of the site. If the verification is passed, the information about the devices of the site is returned. If the verification fails, a null value is returned.
 * *   Virtual meters at the site are not returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @param request GetDeviceListRequest
 * @return GetDeviceListResponse
 */
GetDeviceListResponse Client::getDeviceList(const GetDeviceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeviceListWithOptions(request, headers, runtime);
}

/**
 * @summary For Querying Information Extraction Result.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocExtractionTaskAdvance or SubmitDocExtractionTask.
 * The query results can reflect one of three statuses: processing, successfully completed, or failed.
 *
 * @param request GetDocExtractionResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocExtractionResultResponse
 */
GetDocExtractionResultResponse Client::getDocExtractionResultWithOptions(const GetDocExtractionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetDocExtractionResult"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/getDocExtractionResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocExtractionResultResponse>();
}

/**
 * @summary For Querying Information Extraction Result.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocExtractionTaskAdvance or SubmitDocExtractionTask.
 * The query results can reflect one of three statuses: processing, successfully completed, or failed.
 *
 * @param request GetDocExtractionResultRequest
 * @return GetDocExtractionResultResponse
 */
GetDocExtractionResultResponse Client::getDocExtractionResult(const GetDocExtractionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocExtractionResultWithOptions(request, headers, runtime);
}

/**
 * @summary For Querying Document Parsing Results.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocParsingTaskAdvance or SubmitDocParsingTask.
 * The query results can be one of three statuses: processing, successful, or failed.
 *
 * @param request GetDocParsingResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocParsingResultResponse
 */
GetDocParsingResultResponse Client::getDocParsingResultWithOptions(const GetDocParsingResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReturnFormat()) {
    body["returnFormat"] = request.getReturnFormat();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocParsingResult"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/getDocParsingResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocParsingResultResponse>();
}

/**
 * @summary For Querying Document Parsing Results.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocParsingTaskAdvance or SubmitDocParsingTask.
 * The query results can be one of three statuses: processing, successful, or failed.
 *
 * @param request GetDocParsingResultRequest
 * @return GetDocParsingResultResponse
 */
GetDocParsingResultResponse Client::getDocParsingResult(const GetDocParsingResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocParsingResultWithOptions(request, headers, runtime);
}

/**
 * @summary null null
 *
 * @param request GetDocumentAnalyzeResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentAnalyzeResultResponse
 */
GetDocumentAnalyzeResultResponse Client::getDocumentAnalyzeResultWithOptions(const GetDocumentAnalyzeResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["jobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocumentAnalyzeResult"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/getDocumentAnalyzeResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentAnalyzeResultResponse>();
}

/**
 * @summary null null
 *
 * @param request GetDocumentAnalyzeResultRequest
 * @return GetDocumentAnalyzeResultResponse
 */
GetDocumentAnalyzeResultResponse Client::getDocumentAnalyzeResult(const GetDocumentAnalyzeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentAnalyzeResultWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to obtain power composition analysis data.
 *
 * @param request GetElecConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetElecConstituteResponse
 */
GetElecConstituteResponse Client::getElecConstituteWithOptions(const GetElecConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetElecConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/elec/constitute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetElecConstituteResponse>();
}

/**
 * @summary This interface is used to obtain power composition analysis data.
 *
 * @param request GetElecConstituteRequest
 * @return GetElecConstituteResponse
 */
GetElecConstituteResponse Client::getElecConstitute(const GetElecConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getElecConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to obtain power trend analysis data.
 *
 * @param request GetElecTrendRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetElecTrendResponse
 */
GetElecTrendResponse Client::getElecTrendWithOptions(const GetElecTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasYearList()) {
    body["yearList"] = request.getYearList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetElecTrend"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/elec/trend")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetElecTrendResponse>();
}

/**
 * @summary This interface is used to obtain power trend analysis data.
 *
 * @param request GetElecTrendRequest
 * @return GetElecTrendResponse
 */
GetElecTrendResponse Client::getElecTrend(const GetElecTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getElecTrendWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the emission source composition.
 *
 * @param request GetEmissionSourceConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmissionSourceConstituteResponse
 */
GetEmissionSourceConstituteResponse Client::getEmissionSourceConstituteWithOptions(const GetEmissionSourceConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasModuleCode()) {
    body["moduleCode"] = request.getModuleCode();
  }

  if (!!request.hasModuleType()) {
    body["moduleType"] = request.getModuleType();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEmissionSourceConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/constitute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmissionSourceConstituteResponse>();
}

/**
 * @summary Obtain the emission source composition.
 *
 * @param request GetEmissionSourceConstituteRequest
 * @return GetEmissionSourceConstituteResponse
 */
GetEmissionSourceConstituteResponse Client::getEmissionSourceConstitute(const GetEmissionSourceConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmissionSourceConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary Get a summary of carbon emissions.
 *
 * @param request GetEmissionSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmissionSummaryResponse
 */
GetEmissionSummaryResponse Client::getEmissionSummaryWithOptions(const GetEmissionSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasModuleCode()) {
    body["moduleCode"] = request.getModuleCode();
  }

  if (!!request.hasModuleType()) {
    body["moduleType"] = request.getModuleType();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEmissionSummary"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmissionSummaryResponse>();
}

/**
 * @summary Get a summary of carbon emissions.
 *
 * @param request GetEmissionSummaryRequest
 * @return GetEmissionSummaryResponse
 */
GetEmissionSummaryResponse Client::getEmissionSummary(const GetEmissionSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmissionSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary Gets the result details of the environmental impact category.
 *
 * @description This API returns the emission amounts for various environmental impact categories at different levels for the given product ID. It helps understand the emission quantities for different environmental impact categories and inventories of the product.
 *
 * @param request GetEpdInventoryConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEpdInventoryConstituteResponse
 */
GetEpdInventoryConstituteResponse Client::getEpdInventoryConstituteWithOptions(const GetEpdInventoryConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEpdInventoryConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/epd/inventory/constitute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEpdInventoryConstituteResponse>();
}

/**
 * @summary Gets the result details of the environmental impact category.
 *
 * @description This API returns the emission amounts for various environmental impact categories at different levels for the given product ID. It helps understand the emission quantities for different environmental impact categories and inventories of the product.
 *
 * @param request GetEpdInventoryConstituteRequest
 * @return GetEpdInventoryConstituteResponse
 */
GetEpdInventoryConstituteResponse Client::getEpdInventoryConstitute(const GetEpdInventoryConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEpdInventoryConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the total amount of emissions for various environmental impacts.
 *
 * @description This API takes a product ID from the user and returns the summary of environmental impact generated for the product. This info helps understand the overall emissions for different environmental impact categories of the product.
 *
 * @param request GetEpdSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEpdSummaryResponse
 */
GetEpdSummaryResponse Client::getEpdSummaryWithOptions(const GetEpdSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEpdSummary"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/epd/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEpdSummaryResponse>();
}

/**
 * @summary Obtain the total amount of emissions for various environmental impacts.
 *
 * @description This API takes a product ID from the user and returns the summary of environmental impact generated for the product. This info helps understand the overall emissions for different environmental impact categories of the product.
 *
 * @param request GetEpdSummaryRequest
 * @return GetEpdSummaryResponse
 */
GetEpdSummaryResponse Client::getEpdSummary(const GetEpdSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEpdSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary Get the list of product carbon footprints.
 *
 * @description With user-specified parameters such as enterprise code, current page, and page size, this API returns a list of matching product carbon footprints (or supply chain carbon footprints), including product names and product IDs. The product ID can be used as input parameters in other APIs to get the corresponding product\\"s detailed information.
 *
 * @param request GetFootprintListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFootprintListResponse
 */
GetFootprintListResponse Client::getFootprintListWithOptions(const GetFootprintListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasCurrentPage()) {
    body["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFootprintList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/product/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFootprintListResponse>();
}

/**
 * @summary Get the list of product carbon footprints.
 *
 * @description With user-specified parameters such as enterprise code, current page, and page size, this API returns a list of matching product carbon footprints (or supply chain carbon footprints), including product names and product IDs. The product ID can be used as input parameters in other APIs to get the corresponding product\\"s detailed information.
 *
 * @param request GetFootprintListRequest
 * @return GetFootprintListResponse
 */
GetFootprintListResponse Client::getFootprintList(const GetFootprintListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFootprintListWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to obtain gas composition analysis.
 *
 * @param request GetGasConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGasConstituteResponse
 */
GetGasConstituteResponse Client::getGasConstituteWithOptions(const GetGasConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasModuleCode()) {
    body["moduleCode"] = request.getModuleCode();
  }

  if (!!request.hasModuleType()) {
    body["moduleType"] = request.getModuleType();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGasConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/gas/constitute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGasConstituteResponse>();
}

/**
 * @summary This interface is used to obtain gas composition analysis.
 *
 * @param request GetGasConstituteRequest
 * @return GetGasConstituteResponse
 */
GetGasConstituteResponse Client::getGasConstitute(const GetGasConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGasConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary obtain the active carbon reduction ranking list.
 *
 * @description This interface returns a list of proactive carbon reduction information given product ID. It\\"s used to understand the carbon reduction efforts at various levels of the product.
 *
 * @param request GetGwpBenchmarkListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGwpBenchmarkListResponse
 */
GetGwpBenchmarkListResponse Client::getGwpBenchmarkListWithOptions(const GetGwpBenchmarkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGwpBenchmarkList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/gwp/benchmark/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGwpBenchmarkListResponse>();
}

/**
 * @summary obtain the active carbon reduction ranking list.
 *
 * @description This interface returns a list of proactive carbon reduction information given product ID. It\\"s used to understand the carbon reduction efforts at various levels of the product.
 *
 * @param request GetGwpBenchmarkListRequest
 * @return GetGwpBenchmarkListResponse
 */
GetGwpBenchmarkListResponse Client::getGwpBenchmarkList(const GetGwpBenchmarkListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGwpBenchmarkListWithOptions(request, headers, runtime);
}

/**
 * @summary This API is to obtain the total amount of active carbon reduction.
 *
 * @description The API takes a product ID and returns data on the carbon emissions reduction along with a list of the top four contributors to carbon reduction. This info helps understand the total carbon reduction of the product and its main sources.
 *
 * @param request GetGwpBenchmarkSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGwpBenchmarkSummaryResponse
 */
GetGwpBenchmarkSummaryResponse Client::getGwpBenchmarkSummaryWithOptions(const GetGwpBenchmarkSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGwpBenchmarkSummary"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/gwp/benchmark/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGwpBenchmarkSummaryResponse>();
}

/**
 * @summary This API is to obtain the total amount of active carbon reduction.
 *
 * @description The API takes a product ID and returns data on the carbon emissions reduction along with a list of the top four contributors to carbon reduction. This info helps understand the total carbon reduction of the product and its main sources.
 *
 * @param request GetGwpBenchmarkSummaryRequest
 * @return GetGwpBenchmarkSummaryResponse
 */
GetGwpBenchmarkSummaryResponse Client::getGwpBenchmarkSummary(const GetGwpBenchmarkSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGwpBenchmarkSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
 *
 * @description Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
 *
 * @param request GetGwpInventoryConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGwpInventoryConstituteResponse
 */
GetGwpInventoryConstituteResponse Client::getGwpInventoryConstituteWithOptions(const GetGwpInventoryConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGwpInventoryConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/gwp/inventory/constitute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGwpInventoryConstituteResponse>();
}

/**
 * @summary Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
 *
 * @description Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
 *
 * @param request GetGwpInventoryConstituteRequest
 * @return GetGwpInventoryConstituteResponse
 */
GetGwpInventoryConstituteResponse Client::getGwpInventoryConstitute(const GetGwpInventoryConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGwpInventoryConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary This API is used to obtain the total carbon footprint of a product and the top four types of carbon footprint contribution.
 *
 * @description Returns the total carbon footprint data for the user-specified product ID, along with details on the top four contributors to the carbon footprint, helping to understand the overall carbon footprint and its main components.
 *
 * @param request GetGwpInventorySummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGwpInventorySummaryResponse
 */
GetGwpInventorySummaryResponse Client::getGwpInventorySummaryWithOptions(const GetGwpInventorySummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGwpInventorySummary"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/gwp/inventory/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGwpInventorySummaryResponse>();
}

/**
 * @summary This API is used to obtain the total carbon footprint of a product and the top four types of carbon footprint contribution.
 *
 * @description Returns the total carbon footprint data for the user-specified product ID, along with details on the top four contributors to the carbon footprint, helping to understand the overall carbon footprint and its main components.
 *
 * @param request GetGwpInventorySummaryRequest
 * @return GetGwpInventorySummaryResponse
 */
GetGwpInventorySummaryResponse Client::getGwpInventorySummary(const GetGwpInventorySummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGwpInventorySummaryWithOptions(request, headers, runtime);
}

/**
 * @summary Get the list of emissions in descending order under the specified environmental impact (methodType), specified aggregate level (group), and specified calculation mode (emissionType).
 *
 * @description This interface retrieves a descending order list of emissions for a specified product ID, environmental impact method, group level, and calculation method. It\\"s used to understand various environmental impact emission scenarios.
 *
 * @param request GetInventoryListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInventoryListResponse
 */
GetInventoryListResponse Client::getInventoryListWithOptions(const GetInventoryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasEmissionType()) {
    body["emissionType"] = request.getEmissionType();
  }

  if (!!request.hasGroup()) {
    body["group"] = request.getGroup();
  }

  if (!!request.hasMethodType()) {
    body["methodType"] = request.getMethodType();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInventoryList"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/inventory/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInventoryListResponse>();
}

/**
 * @summary Get the list of emissions in descending order under the specified environmental impact (methodType), specified aggregate level (group), and specified calculation mode (emissionType).
 *
 * @description This interface retrieves a descending order list of emissions for a specified product ID, environmental impact method, group level, and calculation method. It\\"s used to understand various environmental impact emission scenarios.
 *
 * @param request GetInventoryListRequest
 * @return GetInventoryListResponse
 */
GetInventoryListResponse Client::getInventoryList(const GetInventoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInventoryListWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the organizations and sites that are activated by using an Alibaba Cloud account. You cannot call this operation to query the organizations or sites that have not been activated in the console.
 *
 * @description *   If an activated site exists, the information about the site and the organization to which the site belongs is returned. If no activated site exists, null is returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrgAndFactoryResponse
 */
GetOrgAndFactoryResponse Client::getOrgAndFactoryWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrgAndFactory"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/external/getOrgAndFactory")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrgAndFactoryResponse>();
}

/**
 * @summary Queries the organizations and sites that are activated by using an Alibaba Cloud account. You cannot call this operation to query the organizations or sites that have not been activated in the console.
 *
 * @description *   If an activated site exists, the information about the site and the organization to which the site belongs is returned. If no activated site exists, null is returned.
 * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
 * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
 * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
 *
 * @return GetOrgAndFactoryResponse
 */
GetOrgAndFactoryResponse Client::getOrgAndFactory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrgAndFactoryWithOptions(headers, runtime);
}

/**
 * @summary This interface is used to obtain carbon inventory organization analysis data.
 *
 * @param request GetOrgConstituteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrgConstituteResponse
 */
GetOrgConstituteResponse Client::getOrgConstituteWithOptions(const GetOrgConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasModuleCode()) {
    body["moduleCode"] = request.getModuleCode();
  }

  if (!!request.hasModuleType()) {
    body["moduleType"] = request.getModuleType();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOrgConstitute"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/analysis/org")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrgConstituteResponse>();
}

/**
 * @summary This interface is used to obtain carbon inventory organization analysis data.
 *
 * @param request GetOrgConstituteRequest
 * @return GetOrgConstituteResponse
 */
GetOrgConstituteResponse Client::getOrgConstitute(const GetOrgConstituteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrgConstituteWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the oss address of the Product Carbon footprint Report.
 *
 * @description With the user-specified product ID, this interface retrieves detailed information and download links for previously generated PCR reports. To use it, two conditions must be met: 1) the result has already been generated; 2) the PCR report has been created.
 *
 * @param request GetPcrInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPcrInfoResponse
 */
GetPcrInfoResponse Client::getPcrInfoWithOptions(const GetPcrInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetPcrInfo"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/pcr/detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPcrInfoResponse>();
}

/**
 * @summary Obtains the oss address of the Product Carbon footprint Report.
 *
 * @description With the user-specified product ID, this interface retrieves detailed information and download links for previously generated PCR reports. To use it, two conditions must be met: 1) the result has already been generated; 2) the PCR report has been created.
 *
 * @param request GetPcrInfoRequest
 * @return GetPcrInfoResponse
 */
GetPcrInfoResponse Client::getPcrInfo(const GetPcrInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPcrInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Get carbon reduction recommendations.
 *
 * @description This API returns carbon reduction proposals based on the product ID. It\\"s useful for understanding optimization tips to reduce the carbon emissions associated with a product.
 *
 * @param request GetReductionProposalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReductionProposalResponse
 */
GetReductionProposalResponse Client::getReductionProposalWithOptions(const GetReductionProposalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasDataQualityEvaluationType()) {
    body["dataQualityEvaluationType"] = request.getDataQualityEvaluationType();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetReductionProposal"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/reduction/proposal")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReductionProposalResponse>();
}

/**
 * @summary Get carbon reduction recommendations.
 *
 * @description This API returns carbon reduction proposals based on the product ID. It\\"s useful for understanding optimization tips to reduce the carbon emissions associated with a product.
 *
 * @param request GetReductionProposalRequest
 * @return GetReductionProposalResponse
 */
GetReductionProposalResponse Client::getReductionProposal(const GetReductionProposalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReductionProposalWithOptions(request, headers, runtime);
}

/**
 * @summary For Querying Qwen-VL Model Information Extraction Results.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitVLExtractionTask or SubmitVLExtractionTaskAdvance.
 * The query results can be in one of three statuses: processing, successfully completed, or failed.
 *
 * @param request GetVLExtractionResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVLExtractionResultResponse
 */
GetVLExtractionResultResponse Client::getVLExtractionResultWithOptions(const GetVLExtractionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetVLExtractionResult"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/getVLExtractionResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVLExtractionResultResponse>();
}

/**
 * @summary For Querying Qwen-VL Model Information Extraction Results.
 * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitVLExtractionTask or SubmitVLExtractionTaskAdvance.
 * The query results can be in one of three statuses: processing, successfully completed, or failed.
 *
 * @param request GetVLExtractionResultRequest
 * @return GetVLExtractionResultResponse
 */
GetVLExtractionResultResponse Client::getVLExtractionResult(const GetVLExtractionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVLExtractionResultWithOptions(request, headers, runtime);
}

/**
 * @summary Check if the result generation is complete.
 *
 * @description This API checks the completion status of generating a report. It should be used before calling other result APIs, as they will only display content once the report generation is complete.
 *
 * @param request IsCompletedRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsCompletedResponse
 */
IsCompletedResponse Client::isCompletedWithOptions(const IsCompletedRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductType()) {
    body["productType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IsCompleted"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/footprint/result/completed")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IsCompletedResponse>();
}

/**
 * @summary Check if the result generation is complete.
 *
 * @description This API checks the completion status of generating a report. It should be used before calling other result APIs, as they will only display content once the report generation is complete.
 *
 * @param request IsCompletedRequest
 * @return IsCompletedResponse
 */
IsCompletedResponse Client::isCompleted(const IsCompletedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return isCompletedWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to push device measuring point data, such as power meter voltage and other data.
 *
 * @param request PushDeviceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushDeviceDataResponse
 */
PushDeviceDataResponse Client::pushDeviceDataWithOptions(const PushDeviceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeviceType()) {
    body["deviceType"] = request.getDeviceType();
  }

  if (!!request.hasDevices()) {
    body["devices"] = request.getDevices();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushDeviceData"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/data/increment/push")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushDeviceDataResponse>();
}

/**
 * @summary This interface is used to push device measuring point data, such as power meter voltage and other data.
 *
 * @param request PushDeviceDataRequest
 * @return PushDeviceDataResponse
 */
PushDeviceDataResponse Client::pushDeviceData(const PushDeviceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushDeviceDataWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to push data items.
 *
 * @description - This interface is used for individual data item data.
 * - Data items can link data to services such as carbon footprints and carbon inventories.
 * - Depending on the platform configuration, active data on a yearly and monthly basis is supported.
 *
 * @param request PushItemDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushItemDataResponse
 */
PushItemDataResponse Client::pushItemDataWithOptions(const PushItemDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasItems()) {
    body["items"] = request.getItems();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushItemData"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/data/item/push")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushItemDataResponse>();
}

/**
 * @summary This interface is used to push data items.
 *
 * @description - This interface is used for individual data item data.
 * - Data items can link data to services such as carbon footprints and carbon inventories.
 * - Depending on the platform configuration, active data on a yearly and monthly basis is supported.
 *
 * @param request PushItemDataRequest
 * @return PushItemDataResponse
 */
PushItemDataResponse Client::pushItemData(const PushItemDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushItemDataWithOptions(request, headers, runtime);
}

/**
 * @summary Recalculate carbon emissions.
 *
 * @description - After uploading the data items, you need to call this interface to recalculate the carbon inventory data.
 *
 * @param request RecalculateCarbonEmissionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecalculateCarbonEmissionResponse
 */
RecalculateCarbonEmissionResponse Client::recalculateCarbonEmissionWithOptions(const RecalculateCarbonEmissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasYear()) {
    body["year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecalculateCarbonEmission"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/emission/data/item/recalculate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecalculateCarbonEmissionResponse>();
}

/**
 * @summary Recalculate carbon emissions.
 *
 * @description - After uploading the data items, you need to call this interface to recalculate the carbon inventory data.
 *
 * @param request RecalculateCarbonEmissionRequest
 * @return RecalculateCarbonEmissionResponse
 */
RecalculateCarbonEmissionResponse Client::recalculateCarbonEmission(const RecalculateCarbonEmissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recalculateCarbonEmissionWithOptions(request, headers, runtime);
}

/**
 * @summary 支持多文件夹ID或文件ID检索的RAG结果获取接口，供客户端自行加工结果并嵌入业务逻辑。
 *
 * @param request RetrieveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveResponse
 */
RetrieveResponse Client::retrieveWithOptions(const RetrieveRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentIds()) {
    body["documentIds"] = request.getDocumentIds();
  }

  if (!!request.hasFolderIds()) {
    body["folderIds"] = request.getFolderIds();
  }

  if (!!request.hasPreRetrieveTopK()) {
    body["preRetrieveTopK"] = request.getPreRetrieveTopK();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRerankerThreshold()) {
    body["rerankerThreshold"] = request.getRerankerThreshold();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasUseReranker()) {
    body["useReranker"] = request.getUseReranker();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Retrieve"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/knowledgebase/retrieve")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveResponse>();
}

/**
 * @summary 支持多文件夹ID或文件ID检索的RAG结果获取接口，供客户端自行加工结果并嵌入业务逻辑。
 *
 * @param request RetrieveRequest
 * @return RetrieveResponse
 */
RetrieveResponse Client::retrieve(const RetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retrieveWithOptions(request, headers, runtime);
}

/**
 * @summary null null
 *
 * @param request SendDocumentAskQuestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendDocumentAskQuestionResponse
 */
SendDocumentAskQuestionResponse Client::sendDocumentAskQuestionWithOptions(const SendDocumentAskQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["folderId"] = request.getFolderId();
  }

  if (!!request.hasPrompt()) {
    body["prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendDocumentAskQuestion"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/sendDocumentAskQuestion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendDocumentAskQuestionResponse>();
}

/**
 * @summary null null
 *
 * @param request SendDocumentAskQuestionRequest
 * @return SendDocumentAskQuestionResponse
 */
SendDocumentAskQuestionResponse Client::sendDocumentAskQuestion(const SendDocumentAskQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendDocumentAskQuestionWithOptions(request, headers, runtime);
}

/**
 * @summary 设置运行计划
 *
 * @param request SetRunningPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRunningPlanResponse
 */
SetRunningPlanResponse Client::setRunningPlanWithOptions(const SetRunningPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasControlType()) {
    body["controlType"] = request.getControlType();
  }

  if (!!request.hasDateType()) {
    body["dateType"] = request.getDateType();
  }

  if (!!request.hasEarliestStartupTime()) {
    body["earliestStartupTime"] = request.getEarliestStartupTime();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasFactoryId()) {
    body["factoryId"] = request.getFactoryId();
  }

  if (!!request.hasLatestShutdownTime()) {
    body["latestShutdownTime"] = request.getLatestShutdownTime();
  }

  if (!!request.hasMaxCarbonDioxide()) {
    body["maxCarbonDioxide"] = request.getMaxCarbonDioxide();
  }

  if (!!request.hasMaxTem()) {
    body["maxTem"] = request.getMaxTem();
  }

  if (!!request.hasMinTem()) {
    body["minTem"] = request.getMinTem();
  }

  if (!!request.hasPKey()) {
    body["pKey"] = request.getPKey();
  }

  if (!!request.hasSeasonMode()) {
    body["seasonMode"] = request.getSeasonMode();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatisticsTime()) {
    body["statisticsTime"] = request.getStatisticsTime();
  }

  if (!!request.hasSystemId()) {
    body["systemId"] = request.getSystemId();
  }

  if (!!request.hasWorkingEndTime()) {
    body["workingEndTime"] = request.getWorkingEndTime();
  }

  if (!!request.hasWorkingStartTime()) {
    body["workingStartTime"] = request.getWorkingStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetRunningPlan"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/carbon/hvac/setRunningPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRunningPlanResponse>();
}

/**
 * @summary 设置运行计划
 *
 * @param request SetRunningPlanRequest
 * @return SetRunningPlanResponse
 */
SetRunningPlanResponse Client::setRunningPlan(const SetRunningPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setRunningPlanWithOptions(request, headers, runtime);
}

/**
 * @summary Extracts key information from documents using user-defined Key-Value or prompt templates. A taskId is returned upon successful execution for retrieving extraction results via GetDocExtractionResult.
 * Supports:
 * URL Upload: SubmitDocExtractionTask
 * Local File Upload: SubmitDocExtractionTask
 *
 * @param request SubmitDocExtractionTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocExtractionTaskResponse
 */
SubmitDocExtractionTaskResponse Client::submitDocExtractionTaskWithOptions(const SubmitDocExtractionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtractType()) {
    query["extractType"] = request.getExtractType();
  }

  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFolderId()) {
    query["folderId"] = request.getFolderId();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocExtractionTask"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/submitDocExtractionTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocExtractionTaskResponse>();
}

/**
 * @summary Extracts key information from documents using user-defined Key-Value or prompt templates. A taskId is returned upon successful execution for retrieving extraction results via GetDocExtractionResult.
 * Supports:
 * URL Upload: SubmitDocExtractionTask
 * Local File Upload: SubmitDocExtractionTask
 *
 * @param request SubmitDocExtractionTaskRequest
 * @return SubmitDocExtractionTaskResponse
 */
SubmitDocExtractionTaskResponse Client::submitDocExtractionTask(const SubmitDocExtractionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDocExtractionTaskWithOptions(request, headers, runtime);
}

SubmitDocExtractionTaskResponse Client::submitDocExtractionTaskAdvance(const SubmitDocExtractionTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
    {"Product" , "energyExpertExternal"},
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
  SubmitDocExtractionTaskRequest submitDocExtractionTaskReq = SubmitDocExtractionTaskRequest();
  Utils::Utils::convert(request, submitDocExtractionTaskReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
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
    submitDocExtractionTaskReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocExtractionTaskResponse submitDocExtractionTaskResp = submitDocExtractionTaskWithOptions(submitDocExtractionTaskReq, headers, runtime);
  return submitDocExtractionTaskResp;
}

/**
 * @summary Parses text, tables, images, and more from documents. After execution, a taskId is returned for retrieving document parsing results via GetDocParsingResult.
 * Supports:
 * URL Upload: SubmitDocParsingTask
 * Local File Upload: SubmitDocParsingTaskAdvance
 *
 * @param request SubmitDocParsingTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocParsingTaskResponse
 */
SubmitDocParsingTaskResponse Client::submitDocParsingTaskWithOptions(const SubmitDocParsingTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFolderId()) {
    query["folderId"] = request.getFolderId();
  }

  if (!!request.hasNeedAnalyzeImg()) {
    query["needAnalyzeImg"] = request.getNeedAnalyzeImg();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocParsingTask"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/submitDocParsingTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocParsingTaskResponse>();
}

/**
 * @summary Parses text, tables, images, and more from documents. After execution, a taskId is returned for retrieving document parsing results via GetDocParsingResult.
 * Supports:
 * URL Upload: SubmitDocParsingTask
 * Local File Upload: SubmitDocParsingTaskAdvance
 *
 * @param request SubmitDocParsingTaskRequest
 * @return SubmitDocParsingTaskResponse
 */
SubmitDocParsingTaskResponse Client::submitDocParsingTask(const SubmitDocParsingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDocParsingTaskWithOptions(request, headers, runtime);
}

SubmitDocParsingTaskResponse Client::submitDocParsingTaskAdvance(const SubmitDocParsingTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
    {"Product" , "energyExpertExternal"},
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
  SubmitDocParsingTaskRequest submitDocParsingTaskReq = SubmitDocParsingTaskRequest();
  Utils::Utils::convert(request, submitDocParsingTaskReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
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
    submitDocParsingTaskReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocParsingTaskResponse submitDocParsingTaskResp = submitDocParsingTaskWithOptions(submitDocParsingTaskReq, headers, runtime);
  return submitDocParsingTaskResp;
}

/**
 * @summary The document parsing operation is used to extract the key content of a document and extract the key-value information from the document based on the preset key-value template. The document parsing operation is an asynchronous operation. You need to call the asynchronous submission service for document parsing and then call the GetDocumentAnalyzeResult operation to perform result polling. The asynchronous submission service supports two methods: local files and URL files. Call the SubmitDocumentAnalyzeJob operation to upload URL files. Call the SubmitDocumentAnalyzeJobAdvance operation to upload local files.
 *
 * @param request SubmitDocumentAnalyzeJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocumentAnalyzeJobResponse
 */
SubmitDocumentAnalyzeJobResponse Client::submitDocumentAnalyzeJobWithOptions(const SubmitDocumentAnalyzeJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisType()) {
    query["analysisType"] = request.getAnalysisType();
  }

  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFolderId()) {
    query["folderId"] = request.getFolderId();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocumentAnalyzeJob"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aidoc/document/submitDocumentAnalyzeJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocumentAnalyzeJobResponse>();
}

/**
 * @summary The document parsing operation is used to extract the key content of a document and extract the key-value information from the document based on the preset key-value template. The document parsing operation is an asynchronous operation. You need to call the asynchronous submission service for document parsing and then call the GetDocumentAnalyzeResult operation to perform result polling. The asynchronous submission service supports two methods: local files and URL files. Call the SubmitDocumentAnalyzeJob operation to upload URL files. Call the SubmitDocumentAnalyzeJobAdvance operation to upload local files.
 *
 * @param request SubmitDocumentAnalyzeJobRequest
 * @return SubmitDocumentAnalyzeJobResponse
 */
SubmitDocumentAnalyzeJobResponse Client::submitDocumentAnalyzeJob(const SubmitDocumentAnalyzeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDocumentAnalyzeJobWithOptions(request, headers, runtime);
}

SubmitDocumentAnalyzeJobResponse Client::submitDocumentAnalyzeJobAdvance(const SubmitDocumentAnalyzeJobAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
    {"Product" , "energyExpertExternal"},
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
  SubmitDocumentAnalyzeJobRequest submitDocumentAnalyzeJobReq = SubmitDocumentAnalyzeJobRequest();
  Utils::Utils::convert(request, submitDocumentAnalyzeJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
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
    submitDocumentAnalyzeJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJobResp = submitDocumentAnalyzeJobWithOptions(submitDocumentAnalyzeJobReq, headers, runtime);
  return submitDocumentAnalyzeJobResp;
}

/**
 * @summary Extracts key information from documents using KV templates or prompts with the Qwen-VL model, ideal for image extraction. 
 * Supports:
 * URL Upload: SubmitVLExtractionTask.
 * Local File Upload: SubmitVLExtractionTaskAdvance
 *
 * @param request SubmitVLExtractionTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVLExtractionTaskResponse
 */
SubmitVLExtractionTaskResponse Client::submitVLExtractionTaskWithOptions(const SubmitVLExtractionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFolderId()) {
    query["folderId"] = request.getFolderId();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVLExtractionTask"},
    {"version" , "2022-09-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/aidoc/document/submitVLExtractionTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVLExtractionTaskResponse>();
}

/**
 * @summary Extracts key information from documents using KV templates or prompts with the Qwen-VL model, ideal for image extraction. 
 * Supports:
 * URL Upload: SubmitVLExtractionTask.
 * Local File Upload: SubmitVLExtractionTaskAdvance
 *
 * @param request SubmitVLExtractionTaskRequest
 * @return SubmitVLExtractionTaskResponse
 */
SubmitVLExtractionTaskResponse Client::submitVLExtractionTask(const SubmitVLExtractionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitVLExtractionTaskWithOptions(request, headers, runtime);
}

SubmitVLExtractionTaskResponse Client::submitVLExtractionTaskAdvance(const SubmitVLExtractionTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
    {"Product" , "energyExpertExternal"},
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
  SubmitVLExtractionTaskRequest submitVLExtractionTaskReq = SubmitVLExtractionTaskRequest();
  Utils::Utils::convert(request, submitVLExtractionTaskReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
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
    submitVLExtractionTaskReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitVLExtractionTaskResponse submitVLExtractionTaskResp = submitVLExtractionTaskWithOptions(submitVLExtractionTaskReq, headers, runtime);
  return submitVLExtractionTaskResp;
}
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923