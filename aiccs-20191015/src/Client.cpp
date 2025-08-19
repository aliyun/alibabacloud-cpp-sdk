#include <darabonba/Core.hpp>
#include <alibabacloud/Aiccs20191015.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Aiccs20191015::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Aiccs20191015
{

AlibabaCloud::Aiccs20191015::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("aiccs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 新增热线号码
 *
 * @param tmpReq AddHotlineNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHotlineNumberResponse
 */
AddHotlineNumberResponse Client::addHotlineNumberWithOptions(const AddHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddHotlineNumberShrinkRequest request = AddHotlineNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutboundRangeList()) {
    request.setOutboundRangeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outboundRangeList(), "OutboundRangeList", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnableInbound()) {
    body["EnableInbound"] = request.enableInbound();
  }

  if (!!request.hasEnableInboundEvaluation()) {
    body["EnableInboundEvaluation"] = request.enableInboundEvaluation();
  }

  if (!!request.hasEnableOutbound()) {
    body["EnableOutbound"] = request.enableOutbound();
  }

  if (!!request.hasEnableOutboundEvaluation()) {
    body["EnableOutboundEvaluation"] = request.enableOutboundEvaluation();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.evaluationLevel();
  }

  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.hotlineNumber();
  }

  if (!!request.hasInboundFlowId()) {
    body["InboundFlowId"] = request.inboundFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundAllDepart()) {
    body["OutboundAllDepart"] = request.outboundAllDepart();
  }

  if (!!request.hasOutboundRangeListShrink()) {
    body["OutboundRangeList"] = request.outboundRangeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddHotlineNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHotlineNumberResponse>();
}

/**
 * @summary 新增热线号码
 *
 * @param request AddHotlineNumberRequest
 * @return AddHotlineNumberResponse
 */
AddHotlineNumberResponse Client::addHotlineNumber(const AddHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHotlineNumberWithOptions(request, runtime);
}

/**
 * @param request AddOuterAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOuterAccountResponse
 */
AddOuterAccountResponse Client::addOuterAccountWithOptions(const AddOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddOuterAccount"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOuterAccountResponse>();
}

/**
 * @param request AddOuterAccountRequest
 * @return AddOuterAccountResponse
 */
AddOuterAccountResponse Client::addOuterAccount(const AddOuterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addOuterAccountWithOptions(request, runtime);
}

/**
 * @param request AddSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSkillGroupResponse
 */
AddSkillGroupResponse Client::addSkillGroupWithOptions(const AddSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSkillGroupResponse>();
}

/**
 * @param request AddSkillGroupRequest
 * @return AddSkillGroupResponse
 */
AddSkillGroupResponse Client::addSkillGroup(const AddSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSkillGroupWithOptions(request, runtime);
}

/**
 * @param request AiccsSmartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiccsSmartCallResponse
 */
AiccsSmartCallResponse Client::aiccsSmartCallWithOptions(const AiccsSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionCodeBreak()) {
    query["ActionCodeBreak"] = request.actionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.actionCodeTimeBreak();
  }

  if (!!request.hasAsrAlsAmId()) {
    query["AsrAlsAmId"] = request.asrAlsAmId();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.asrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasAsrVocabularyId()) {
    query["AsrVocabularyId"] = request.asrVocabularyId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.backgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.backgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.backgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.dynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.earlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.enableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.muteTime();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.pauseTime();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.recordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.sessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.ttsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.ttsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.ttsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.ttsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.voiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.voiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AiccsSmartCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AiccsSmartCallResponse>();
}

/**
 * @param request AiccsSmartCallRequest
 * @return AiccsSmartCallResponse
 */
AiccsSmartCallResponse Client::aiccsSmartCall(const AiccsSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aiccsSmartCallWithOptions(request, runtime);
}

/**
 * @param request AiccsSmartCallOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiccsSmartCallOperateResponse
 */
AiccsSmartCallOperateResponse Client::aiccsSmartCallOperateWithOptions(const AiccsSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AiccsSmartCallOperate"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AiccsSmartCallOperateResponse>();
}

/**
 * @param request AiccsSmartCallOperateRequest
 * @return AiccsSmartCallOperateResponse
 */
AiccsSmartCallOperateResponse Client::aiccsSmartCallOperate(const AiccsSmartCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aiccsSmartCallOperateWithOptions(request, runtime);
}

/**
 * @param request AnswerCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCallWithOptions(const AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AnswerCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnswerCallResponse>();
}

/**
 * @param request AnswerCallRequest
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCall(const AnswerCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return answerCallWithOptions(request, runtime);
}

/**
 * @summary 追加任务明细
 *
 * @param request AttachTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachTaskResponse
 */
AttachTaskResponse Client::attachTaskWithOptions(const AttachTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallString()) {
    query["CallString"] = request.callString();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachTaskResponse>();
}

/**
 * @summary 追加任务明细
 *
 * @param request AttachTaskRequest
 * @return AttachTaskResponse
 */
AttachTaskResponse Client::attachTask(const AttachTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachTaskWithOptions(request, runtime);
}

/**
 * @param request BatchCreateQualityProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateQualityProjectsResponse
 */
BatchCreateQualityProjectsResponse Client::batchCreateQualityProjectsWithOptions(const BatchCreateQualityProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisIds()) {
    query["AnalysisIds"] = request.analysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    query["ChannelTouchType"] = request.channelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    query["CheckFreqType"] = request.checkFreqType();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.timeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.timeRangeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCreateQualityProjects"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateQualityProjectsResponse>();
}

/**
 * @param request BatchCreateQualityProjectsRequest
 * @return BatchCreateQualityProjectsResponse
 */
BatchCreateQualityProjectsResponse Client::batchCreateQualityProjects(const BatchCreateQualityProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateQualityProjectsWithOptions(request, runtime);
}

/**
 * @summary 批量取消大模型解决方案Ai外呼明细任务
 *
 * @param tmpReq CancelAiCallDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAiCallDetailsResponse
 */
CancelAiCallDetailsResponse Client::cancelAiCallDetailsWithOptions(const CancelAiCallDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CancelAiCallDetailsShrinkRequest request = CancelAiCallDetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetailIdList()) {
    request.setDetailIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.detailIdList(), "DetailIdList", "json"));
  }

  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.batchId();
  }

  if (!!request.hasDetailIdListShrink()) {
    query["DetailIdList"] = request.detailIdListShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.phoneNumbersShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAiCallDetails"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAiCallDetailsResponse>();
}

/**
 * @summary 批量取消大模型解决方案Ai外呼明细任务
 *
 * @param request CancelAiCallDetailsRequest
 * @return CancelAiCallDetailsResponse
 */
CancelAiCallDetailsResponse Client::cancelAiCallDetails(const CancelAiCallDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAiCallDetailsWithOptions(request, runtime);
}

/**
 * @summary 删除智能外呼任务
 *
 * @param request CancelTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary 删除智能外呼任务
 *
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelTaskWithOptions(request, runtime);
}

/**
 * @summary 修改在线客服状态
 *
 * @param request ChangeChatAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeChatAgentStatusResponse
 */
ChangeChatAgentStatusResponse Client::changeChatAgentStatusWithOptions(const ChangeChatAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMethod()) {
    body["Method"] = request.method();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeChatAgentStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeChatAgentStatusResponse>();
}

/**
 * @summary 修改在线客服状态
 *
 * @param request ChangeChatAgentStatusRequest
 * @return ChangeChatAgentStatusResponse
 */
ChangeChatAgentStatusResponse Client::changeChatAgentStatus(const ChangeChatAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeChatAgentStatusWithOptions(request, runtime);
}

/**
 * @param request ChangeQualityProjectStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeQualityProjectStatusResponse
 */
ChangeQualityProjectStatusResponse Client::changeQualityProjectStatusWithOptions(const ChangeQualityProjectStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeQualityProjectStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeQualityProjectStatusResponse>();
}

/**
 * @param request ChangeQualityProjectStatusRequest
 * @return ChangeQualityProjectStatusResponse
 */
ChangeQualityProjectStatusResponse Client::changeQualityProjectStatus(const ChangeQualityProjectStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeQualityProjectStatusWithOptions(request, runtime);
}

/**
 * @param request CreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  json bodyFlat = {};
  if (!!request.hasSkillGroupId()) {
    bodyFlat["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasSkillGroupIdList()) {
    bodyFlat["SkillGroupIdList"] = request.skillGroupIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResponse>();
}

/**
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentWithOptions(request, runtime);
}

/**
 * @summary 创建任务
 *
 * @param tmpReq CreateAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAiCallTaskResponse
 */
CreateAiCallTaskResponse Client::createAiCallTaskWithOptions(const CreateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAiCallTaskShrinkRequest request = CreateAiCallTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallDay()) {
    request.setCallDayShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callDay(), "CallDay", "json"));
  }

  if (!!tmpReq.hasCallRetryReason()) {
    request.setCallRetryReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callRetryReason(), "CallRetryReason", "json"));
  }

  if (!!tmpReq.hasCallTime()) {
    request.setCallTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callTime(), "CallTime", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasCallDayShrink()) {
    query["CallDay"] = request.callDayShrink();
  }

  if (!!request.hasCallRetryInterval()) {
    query["CallRetryInterval"] = request.callRetryInterval();
  }

  if (!!request.hasCallRetryReasonShrink()) {
    query["CallRetryReason"] = request.callRetryReasonShrink();
  }

  if (!!request.hasCallRetryTimes()) {
    query["CallRetryTimes"] = request.callRetryTimes();
  }

  if (!!request.hasCallTimeShrink()) {
    query["CallTime"] = request.callTimeShrink();
  }

  if (!!request.hasMissCallRetry()) {
    query["MissCallRetry"] = request.missCallRetry();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartType()) {
    query["StartType"] = request.startType();
  }

  if (!!request.hasTaskCps()) {
    query["TaskCps"] = request.taskCps();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskStartTime()) {
    query["TaskStartTime"] = request.taskStartTime();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.virtualNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAiCallTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAiCallTaskResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request CreateAiCallTaskRequest
 * @return CreateAiCallTaskResponse
 */
CreateAiCallTaskResponse Client::createAiCallTask(const CreateAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary 创建智能外呼任务（预测式外呼、自动外呼）
 *
 * @param tmpReq CreateAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAiOutboundTaskResponse
 */
CreateAiOutboundTaskResponse Client::createAiOutboundTaskWithOptions(const CreateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAiOutboundTaskShrinkRequest request = CreateAiOutboundTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutboundNums()) {
    request.setOutboundNumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outboundNums(), "OutboundNums", "json"));
  }

  if (!!tmpReq.hasRecallRule()) {
    request.setRecallRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recallRule(), "RecallRule", "json"));
  }

  json query = {};
  if (!!request.hasConcurrentRate()) {
    query["ConcurrentRate"] = request.concurrentRate();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionTime()) {
    query["ExecutionTime"] = request.executionTime();
  }

  if (!!request.hasForecastCallRate()) {
    query["ForecastCallRate"] = request.forecastCallRate();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNumRepeated()) {
    query["NumRepeated"] = request.numRepeated();
  }

  if (!!request.hasOutboundNumsShrink()) {
    query["OutboundNums"] = request.outboundNumsShrink();
  }

  if (!!request.hasRecallRuleShrink()) {
    query["RecallRule"] = request.recallRuleShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAiOutboundTaskResponse>();
}

/**
 * @summary 创建智能外呼任务（预测式外呼、自动外呼）
 *
 * @param request CreateAiOutboundTaskRequest
 * @return CreateAiOutboundTaskResponse
 */
CreateAiOutboundTaskResponse Client::createAiOutboundTask(const CreateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary 创建智能外呼任务批次
 *
 * @param request CreateAiOutboundTaskBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAiOutboundTaskBatchResponse
 */
CreateAiOutboundTaskBatchResponse Client::createAiOutboundTaskBatchWithOptions(const CreateAiOutboundTaskBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAiOutboundTaskBatch"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAiOutboundTaskBatchResponse>();
}

/**
 * @summary 创建智能外呼任务批次
 *
 * @param request CreateAiOutboundTaskBatchRequest
 * @return CreateAiOutboundTaskBatchResponse
 */
CreateAiOutboundTaskBatchResponse Client::createAiOutboundTaskBatch(const CreateAiOutboundTaskBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiOutboundTaskBatchWithOptions(request, runtime);
}

/**
 * @summary 创建部门信息
 *
 * @param request CreateDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDepartmentResponse
 */
CreateDepartmentResponse Client::createDepartmentWithOptions(const CreateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.departmentName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDepartment"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDepartmentResponse>();
}

/**
 * @summary 创建部门信息
 *
 * @param request CreateDepartmentRequest
 * @return CreateDepartmentResponse
 */
CreateDepartmentResponse Client::createDepartment(const CreateDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDepartmentWithOptions(request, runtime);
}

/**
 * @param request CreateOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOutboundTaskResponse
 */
CreateOutboundTaskResponse Client::createOutboundTaskWithOptions(const CreateOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAni()) {
    query["Ani"] = request.ani();
  }

  if (!!request.hasCallInfos()) {
    query["CallInfos"] = request.callInfos();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExtAttrs()) {
    query["ExtAttrs"] = request.extAttrs();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.retryInterval();
  }

  if (!!request.hasRetryTime()) {
    query["RetryTime"] = request.retryTime();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.skillGroup();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOutboundTaskResponse>();
}

/**
 * @param request CreateOutboundTaskRequest
 * @return CreateOutboundTaskResponse
 */
CreateOutboundTaskResponse Client::createOutboundTask(const CreateOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request CreateQualityProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityProjectResponse
 */
CreateQualityProjectResponse Client::createQualityProjectWithOptions(const CreateQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysisIds()) {
    body["AnalysisIds"] = request.analysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    body["ChannelTouchType"] = request.channelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    body["CheckFreqType"] = request.checkFreqType();
  }

  if (!!request.hasDepList()) {
    body["DepList"] = request.depList();
  }

  if (!!request.hasGroupList()) {
    body["GroupList"] = request.groupList();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasScopeType()) {
    body["ScopeType"] = request.scopeType();
  }

  if (!!request.hasServicerList()) {
    body["ServicerList"] = request.servicerList();
  }

  if (!!request.hasTimeRangeEnd()) {
    body["TimeRangeEnd"] = request.timeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    body["TimeRangeStart"] = request.timeRangeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityProject"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityProjectResponse>();
}

/**
 * @param request CreateQualityProjectRequest
 * @return CreateQualityProjectResponse
 */
CreateQualityProjectResponse Client::createQualityProject(const CreateQualityProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityProjectWithOptions(request, runtime);
}

/**
 * @param request CreateQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityRuleResponse
 */
CreateQualityRuleResponse Client::createQualityRuleWithOptions(const CreateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyWords()) {
    body["KeyWords"] = request.keyWords();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.matchType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRuleTag()) {
    body["RuleTag"] = request.ruleTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityRule"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityRuleResponse>();
}

/**
 * @param request CreateQualityRuleRequest
 * @return CreateQualityRuleResponse
 */
CreateQualityRuleResponse Client::createQualityRule(const CreateQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityRuleWithOptions(request, runtime);
}

/**
 * @param request CreateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroupWithOptions(const CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.channelType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDepartmentId()) {
    body["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupName()) {
    body["SkillGroupName"] = request.skillGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillGroupResponse>();
}

/**
 * @param request CreateSkillGroupRequest
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroup(const CreateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupWithOptions(request, runtime);
}

/**
 * @summary 创建外呼任务
 *
 * @param request CreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallString()) {
    query["CallString"] = request.callString();
  }

  if (!!request.hasCallStringType()) {
    query["CallStringType"] = request.callStringType();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRetryCount()) {
    query["RetryCount"] = request.retryCount();
  }

  if (!!request.hasRetryFlag()) {
    query["RetryFlag"] = request.retryFlag();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.retryInterval();
  }

  if (!!request.hasRetryStatusCode()) {
    query["RetryStatusCode"] = request.retryStatusCode();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  if (!!request.hasSeatCount()) {
    query["SeatCount"] = request.seatCount();
  }

  if (!!request.hasStartNow()) {
    query["StartNow"] = request.startNow();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasWorkDay()) {
    query["WorkDay"] = request.workDay();
  }

  if (!!request.hasWorkTimeList()) {
    query["WorkTimeList"] = request.workTimeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建外呼任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskWithOptions(request, runtime);
}

/**
 * @summary 创建坐席并开通sso登录能力
 *
 * @param request CreateThirdSsoAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateThirdSsoAgentResponse
 */
CreateThirdSsoAgentResponse Client::createThirdSsoAgentWithOptions(const CreateThirdSsoAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  json bodyFlat = {};
  if (!!request.hasRoleIds()) {
    bodyFlat["RoleIds"] = request.roleIds();
  }

  if (!!request.hasSkillGroupIds()) {
    bodyFlat["SkillGroupIds"] = request.skillGroupIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateThirdSsoAgent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateThirdSsoAgentResponse>();
}

/**
 * @summary 创建坐席并开通sso登录能力
 *
 * @param request CreateThirdSsoAgentRequest
 * @return CreateThirdSsoAgentResponse
 */
CreateThirdSsoAgentResponse Client::createThirdSsoAgent(const CreateThirdSsoAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createThirdSsoAgentWithOptions(request, runtime);
}

/**
 * @summary 删除坐席账号
 *
 * @param request DeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary 删除坐席账号
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentWithOptions(request, runtime);
}

/**
 * @summary 删除智能外呼任务
 *
 * @param request DeleteAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAiOutboundTaskResponse
 */
DeleteAiOutboundTaskResponse Client::deleteAiOutboundTaskWithOptions(const DeleteAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAiOutboundTaskResponse>();
}

/**
 * @summary 删除智能外呼任务
 *
 * @param request DeleteAiOutboundTaskRequest
 * @return DeleteAiOutboundTaskResponse
 */
DeleteAiOutboundTaskResponse Client::deleteAiOutboundTask(const DeleteAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary 删除部门信息
 *
 * @param request DeleteDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartmentWithOptions(const DeleteDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDepartment"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDepartmentResponse>();
}

/**
 * @summary 删除部门信息
 *
 * @param request DeleteDepartmentRequest
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartment(const DeleteDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDepartmentWithOptions(request, runtime);
}

/**
 * @summary 删除热线号码
 *
 * @param request DeleteHotlineNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotlineNumberResponse
 */
DeleteHotlineNumberResponse Client::deleteHotlineNumberWithOptions(const DeleteHotlineNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.hotlineNumber();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteHotlineNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHotlineNumberResponse>();
}

/**
 * @summary 删除热线号码
 *
 * @param request DeleteHotlineNumberRequest
 * @return DeleteHotlineNumberResponse
 */
DeleteHotlineNumberResponse Client::deleteHotlineNumber(const DeleteHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHotlineNumberWithOptions(request, runtime);
}

/**
 * @param request DeleteOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOutboundTaskResponse
 */
DeleteOutboundTaskResponse Client::deleteOutboundTaskWithOptions(const DeleteOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.outboundTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOutboundTaskResponse>();
}

/**
 * @param request DeleteOutboundTaskRequest
 * @return DeleteOutboundTaskResponse
 */
DeleteOutboundTaskResponse Client::deleteOutboundTask(const DeleteOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request DeleteOuterAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOuterAccountResponse
 */
DeleteOuterAccountResponse Client::deleteOuterAccountWithOptions(const DeleteOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOuterAccount"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOuterAccountResponse>();
}

/**
 * @param request DeleteOuterAccountRequest
 * @return DeleteOuterAccountResponse
 */
DeleteOuterAccountResponse Client::deleteOuterAccount(const DeleteOuterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOuterAccountWithOptions(request, runtime);
}

/**
 * @param request DeleteQualityProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityProjectResponse
 */
DeleteQualityProjectResponse Client::deleteQualityProjectWithOptions(const DeleteQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQualityProject"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityProjectResponse>();
}

/**
 * @param request DeleteQualityProjectRequest
 * @return DeleteQualityProjectResponse
 */
DeleteQualityProjectResponse Client::deleteQualityProject(const DeleteQualityProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityProjectWithOptions(request, runtime);
}

/**
 * @param request DeleteQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityRuleResponse
 */
DeleteQualityRuleResponse Client::deleteQualityRuleWithOptions(const DeleteQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQualityRule"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityRuleResponse>();
}

/**
 * @param request DeleteQualityRuleRequest
 * @return DeleteQualityRuleResponse
 */
DeleteQualityRuleResponse Client::deleteQualityRule(const DeleteQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroupWithOptions(const DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillGroupResponse>();
}

/**
 * @param request DeleteSkillGroupRequest
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroup(const DeleteSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupWithOptions(request, runtime);
}

/**
 * @param request DescribeRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordDataResponse
 */
DescribeRecordDataResponse Client::describeRecordDataWithOptions(const DescribeRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasAcid()) {
    query["Acid"] = request.acid();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecLevel()) {
    query["SecLevel"] = request.secLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordData"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordDataResponse>();
}

/**
 * @param request DescribeRecordDataRequest
 * @return DescribeRecordDataResponse
 */
DescribeRecordDataResponse Client::describeRecordData(const DescribeRecordDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordDataWithOptions(request, runtime);
}

/**
 * @param request EditQualityProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditQualityProjectResponse
 */
EditQualityProjectResponse Client::editQualityProjectWithOptions(const EditQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisIds()) {
    query["AnalysisIds"] = request.analysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    query["ChannelTouchType"] = request.channelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    query["CheckFreqType"] = request.checkFreqType();
  }

  if (!!request.hasDepList()) {
    query["DepList"] = request.depList();
  }

  if (!!request.hasGroupList()) {
    query["GroupList"] = request.groupList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectVersion()) {
    query["ProjectVersion"] = request.projectVersion();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.scopeType();
  }

  if (!!request.hasServicerList()) {
    query["ServicerList"] = request.servicerList();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.timeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.timeRangeStart();
  }

  json body = {};
  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EditQualityProject"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditQualityProjectResponse>();
}

/**
 * @param request EditQualityProjectRequest
 * @return EditQualityProjectResponse
 */
EditQualityProjectResponse Client::editQualityProject(const EditQualityProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editQualityProjectWithOptions(request, runtime);
}

/**
 * @param request EditQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditQualityRuleResponse
 */
EditQualityRuleResponse Client::editQualityRuleWithOptions(const EditQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyWords()) {
    body["KeyWords"] = request.keyWords();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.matchType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasQualityRuleId()) {
    body["QualityRuleId"] = request.qualityRuleId();
  }

  if (!!request.hasRuleTag()) {
    body["RuleTag"] = request.ruleTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EditQualityRule"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditQualityRuleResponse>();
}

/**
 * @param request EditQualityRuleRequest
 * @return EditQualityRuleResponse
 */
EditQualityRuleResponse Client::editQualityRule(const EditQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editQualityRuleWithOptions(request, runtime);
}

/**
 * @param request EditQualityRuleTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditQualityRuleTagResponse
 */
EditQualityRuleTagResponse Client::editQualityRuleTagWithOptions(const EditQualityRuleTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisTypes()) {
    query["AnalysisTypes"] = request.analysisTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditQualityRuleTag"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditQualityRuleTagResponse>();
}

/**
 * @param request EditQualityRuleTagRequest
 * @return EditQualityRuleTagResponse
 */
EditQualityRuleTagResponse Client::editQualityRuleTag(const EditQualityRuleTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editQualityRuleTagWithOptions(request, runtime);
}

/**
 * @summary 热线号码加密
 *
 * @param request EncryptPhoneNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EncryptPhoneNumResponse
 */
EncryptPhoneNumResponse Client::encryptPhoneNumWithOptions(const EncryptPhoneNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EncryptPhoneNum"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EncryptPhoneNumResponse>();
}

/**
 * @summary 热线号码加密
 *
 * @param request EncryptPhoneNumRequest
 * @return EncryptPhoneNumResponse
 */
EncryptPhoneNumResponse Client::encryptPhoneNum(const EncryptPhoneNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return encryptPhoneNumWithOptions(request, runtime);
}

/**
 * @param request FetchCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchCallResponse
 */
FetchCallResponse Client::fetchCallWithOptions(const FetchCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.holdConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FetchCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchCallResponse>();
}

/**
 * @param request FetchCallRequest
 * @return FetchCallResponse
 */
FetchCallResponse Client::fetchCall(const FetchCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchCallWithOptions(request, runtime);
}

/**
 * @param request FinishHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishHotlineServiceResponse
 */
FinishHotlineServiceResponse Client::finishHotlineServiceWithOptions(const FinishHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FinishHotlineService"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishHotlineServiceResponse>();
}

/**
 * @param request FinishHotlineServiceRequest
 * @return FinishHotlineServiceResponse
 */
FinishHotlineServiceResponse Client::finishHotlineService(const FinishHotlineServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishHotlineServiceWithOptions(request, runtime);
}

/**
 * @param request GenerateWebSocketSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWebSocketSignResponse
 */
GenerateWebSocketSignResponse Client::generateWebSocketSignWithOptions(const GenerateWebSocketSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateWebSocketSign"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateWebSocketSignResponse>();
}

/**
 * @param request GenerateWebSocketSignRequest
 * @return GenerateWebSocketSignResponse
 */
GenerateWebSocketSignResponse Client::generateWebSocketSign(const GenerateWebSocketSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateWebSocketSignWithOptions(request, runtime);
}

/**
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary 坐席纬度基础状态量
 *
 * @param tmpReq GetAgentBasisStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentBasisStatusResponse
 */
GetAgentBasisStatusResponse Client::getAgentBasisStatusWithOptions(const GetAgentBasisStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentBasisStatusShrinkRequest request = GetAgentBasisStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentBasisStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentBasisStatusResponse>();
}

/**
 * @summary 坐席纬度基础状态量
 *
 * @param request GetAgentBasisStatusRequest
 * @return GetAgentBasisStatusResponse
 */
GetAgentBasisStatusResponse Client::getAgentBasisStatus(const GetAgentBasisStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentBasisStatusWithOptions(request, runtime);
}

/**
 * @param request GetAgentByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentByIdResponse
 */
GetAgentByIdResponse Client::getAgentByIdWithOptions(const GetAgentByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["AgentId"] = request.agentId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentById"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentByIdResponse>();
}

/**
 * @param request GetAgentByIdRequest
 * @return GetAgentByIdResponse
 */
GetAgentByIdResponse Client::getAgentById(const GetAgentByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentByIdWithOptions(request, runtime);
}

/**
 * @summary 热线坐席纬度详情汇总
 *
 * @param tmpReq GetAgentDetailReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentDetailReportResponse
 */
GetAgentDetailReportResponse Client::getAgentDetailReportWithOptions(const GetAgentDetailReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentDetailReportShrinkRequest request = GetAgentDetailReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentDetailReport"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentDetailReportResponse>();
}

/**
 * @summary 热线坐席纬度详情汇总
 *
 * @param request GetAgentDetailReportRequest
 * @return GetAgentDetailReportResponse
 */
GetAgentDetailReportResponse Client::getAgentDetailReport(const GetAgentDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentDetailReportWithOptions(request, runtime);
}

/**
 * @param request GetAgentIndexRealTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentIndexRealTimeResponse
 */
GetAgentIndexRealTimeResponse Client::getAgentIndexRealTimeWithOptions(const GetAgentIndexRealTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.depIds();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentIndexRealTime"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentIndexRealTimeResponse>();
}

/**
 * @param request GetAgentIndexRealTimeRequest
 * @return GetAgentIndexRealTimeResponse
 */
GetAgentIndexRealTimeResponse Client::getAgentIndexRealTime(const GetAgentIndexRealTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentIndexRealTimeWithOptions(request, runtime);
}

/**
 * @summary 坐席服务状态量
 *
 * @param tmpReq GetAgentServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentServiceStatusResponse
 */
GetAgentServiceStatusResponse Client::getAgentServiceStatusWithOptions(const GetAgentServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentServiceStatusShrinkRequest request = GetAgentServiceStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentServiceStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentServiceStatusResponse>();
}

/**
 * @summary 坐席服务状态量
 *
 * @param request GetAgentServiceStatusRequest
 * @return GetAgentServiceStatusResponse
 */
GetAgentServiceStatusResponse Client::getAgentServiceStatus(const GetAgentServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 坐席纬度统计量
 *
 * @param tmpReq GetAgentStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentStatisticsResponse
 */
GetAgentStatisticsResponse Client::getAgentStatisticsWithOptions(const GetAgentStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentStatisticsShrinkRequest request = GetAgentStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentStatistics"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentStatisticsResponse>();
}

/**
 * @summary 坐席纬度统计量
 *
 * @param request GetAgentStatisticsRequest
 * @return GetAgentStatisticsResponse
 */
GetAgentStatisticsResponse Client::getAgentStatistics(const GetAgentStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentStatisticsWithOptions(request, runtime);
}

/**
 * @summary 获取智能外呼任务业务自定义信息
 *
 * @param request GetAiOutboundTaskBizDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiOutboundTaskBizDataResponse
 */
GetAiOutboundTaskBizDataResponse Client::getAiOutboundTaskBizDataWithOptions(const GetAiOutboundTaskBizDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiOutboundTaskBizData"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiOutboundTaskBizDataResponse>();
}

/**
 * @summary 获取智能外呼任务业务自定义信息
 *
 * @param request GetAiOutboundTaskBizDataRequest
 * @return GetAiOutboundTaskBizDataResponse
 */
GetAiOutboundTaskBizDataResponse Client::getAiOutboundTaskBizData(const GetAiOutboundTaskBizDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskBizDataWithOptions(request, runtime);
}

/**
 * @summary 智能外呼任务配置详情查询
 *
 * @param request GetAiOutboundTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiOutboundTaskDetailResponse
 */
GetAiOutboundTaskDetailResponse Client::getAiOutboundTaskDetailWithOptions(const GetAiOutboundTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiOutboundTaskDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiOutboundTaskDetailResponse>();
}

/**
 * @summary 智能外呼任务配置详情查询
 *
 * @param request GetAiOutboundTaskDetailRequest
 * @return GetAiOutboundTaskDetailResponse
 */
GetAiOutboundTaskDetailResponse Client::getAiOutboundTaskDetail(const GetAiOutboundTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskDetailWithOptions(request, runtime);
}

/**
 * @summary 智能外呼任务执行详情
 *
 * @param request GetAiOutboundTaskExecDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiOutboundTaskExecDetailResponse
 */
GetAiOutboundTaskExecDetailResponse Client::getAiOutboundTaskExecDetailWithOptions(const GetAiOutboundTaskExecDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiOutboundTaskExecDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiOutboundTaskExecDetailResponse>();
}

/**
 * @summary 智能外呼任务执行详情
 *
 * @param request GetAiOutboundTaskExecDetailRequest
 * @return GetAiOutboundTaskExecDetailResponse
 */
GetAiOutboundTaskExecDetailResponse Client::getAiOutboundTaskExecDetail(const GetAiOutboundTaskExecDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskExecDetailWithOptions(request, runtime);
}

/**
 * @summary 智能外呼任务列表查询
 *
 * @param request GetAiOutboundTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiOutboundTaskListResponse
 */
GetAiOutboundTaskListResponse Client::getAiOutboundTaskListWithOptions(const GetAiOutboundTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiOutboundTaskList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiOutboundTaskListResponse>();
}

/**
 * @summary 智能外呼任务列表查询
 *
 * @param request GetAiOutboundTaskListRequest
 * @return GetAiOutboundTaskListResponse
 */
GetAiOutboundTaskListResponse Client::getAiOutboundTaskList(const GetAiOutboundTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskListWithOptions(request, runtime);
}

/**
 * @summary 智能外呼任务执行进度
 *
 * @param request GetAiOutboundTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiOutboundTaskProgressResponse
 */
GetAiOutboundTaskProgressResponse Client::getAiOutboundTaskProgressWithOptions(const GetAiOutboundTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiOutboundTaskProgress"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiOutboundTaskProgressResponse>();
}

/**
 * @summary 智能外呼任务执行进度
 *
 * @param request GetAiOutboundTaskProgressRequest
 * @return GetAiOutboundTaskProgressResponse
 */
GetAiOutboundTaskProgressResponse Client::getAiOutboundTaskProgress(const GetAiOutboundTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskProgressWithOptions(request, runtime);
}

/**
 * @summary getAllDepartment
 *
 * @param request GetAllDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllDepartmentResponse
 */
GetAllDepartmentResponse Client::getAllDepartmentWithOptions(const GetAllDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAllDepartment"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllDepartmentResponse>();
}

/**
 * @summary getAllDepartment
 *
 * @param request GetAllDepartmentRequest
 * @return GetAllDepartmentResponse
 */
GetAllDepartmentResponse Client::getAllDepartment(const GetAllDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllDepartmentWithOptions(request, runtime);
}

/**
 * @summary 查询对话内容
 *
 * @param request GetCallDialogContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDialogContentResponse
 */
GetCallDialogContentResponse Client::getCallDialogContentWithOptions(const GetCallDialogContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallDate()) {
    query["CallDate"] = request.callDate();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallDialogContent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallDialogContentResponse>();
}

/**
 * @summary 查询对话内容
 *
 * @param request GetCallDialogContentRequest
 * @return GetCallDialogContentResponse
 */
GetCallDialogContentResponse Client::getCallDialogContent(const GetCallDialogContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDialogContentWithOptions(request, runtime);
}

/**
 * @summary 获取通话录音文件
 *
 * @param request GetCallSoundRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallSoundRecordResponse
 */
GetCallSoundRecordResponse Client::getCallSoundRecordWithOptions(const GetCallSoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallSoundRecord"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallSoundRecordResponse>();
}

/**
 * @summary 获取通话录音文件
 *
 * @param request GetCallSoundRecordRequest
 * @return GetCallSoundRecordResponse
 */
GetCallSoundRecordResponse Client::getCallSoundRecord(const GetCallSoundRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallSoundRecordWithOptions(request, runtime);
}

/**
 * @summary 获取热线配置号码列表
 *
 * @param request GetConfigNumListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigNumListResponse
 */
GetConfigNumListResponse Client::getConfigNumListWithOptions(const GetConfigNumListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigNumList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigNumListResponse>();
}

/**
 * @summary 获取热线配置号码列表
 *
 * @param request GetConfigNumListRequest
 * @return GetConfigNumListResponse
 */
GetConfigNumListResponse Client::getConfigNumList(const GetConfigNumListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigNumListWithOptions(request, runtime);
}

/**
 * @summary 获取会员信息
 *
 * @param request GetCustomerInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerInfoResponse
 */
GetCustomerInfoResponse Client::getCustomerInfoWithOptions(const GetCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerInfo"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerInfoResponse>();
}

/**
 * @summary 获取会员信息
 *
 * @param request GetCustomerInfoRequest
 * @return GetCustomerInfoResponse
 */
GetCustomerInfoResponse Client::getCustomerInfo(const GetCustomerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerInfoWithOptions(request, runtime);
}

/**
 * @summary 获取技能组分组
 *
 * @param request GetDepGroupTreeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDepGroupTreeDataResponse
 */
GetDepGroupTreeDataResponse Client::getDepGroupTreeDataWithOptions(const GetDepGroupTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDepGroupTreeData"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDepGroupTreeDataResponse>();
}

/**
 * @summary 获取技能组分组
 *
 * @param request GetDepGroupTreeDataRequest
 * @return GetDepGroupTreeDataResponse
 */
GetDepGroupTreeDataResponse Client::getDepGroupTreeData(const GetDepGroupTreeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDepGroupTreeDataWithOptions(request, runtime);
}

/**
 * @summary 部门纬度坐席状态量
 *
 * @param tmpReq GetDepartmentalLatitudeAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDepartmentalLatitudeAgentStatusResponse
 */
GetDepartmentalLatitudeAgentStatusResponse Client::getDepartmentalLatitudeAgentStatusWithOptions(const GetDepartmentalLatitudeAgentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDepartmentalLatitudeAgentStatusShrinkRequest request = GetDepartmentalLatitudeAgentStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDepartmentalLatitudeAgentStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDepartmentalLatitudeAgentStatusResponse>();
}

/**
 * @summary 部门纬度坐席状态量
 *
 * @param request GetDepartmentalLatitudeAgentStatusRequest
 * @return GetDepartmentalLatitudeAgentStatusResponse
 */
GetDepartmentalLatitudeAgentStatusResponse Client::getDepartmentalLatitudeAgentStatus(const GetDepartmentalLatitudeAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDepartmentalLatitudeAgentStatusWithOptions(request, runtime);
}

/**
 * @param request GetHotlineAgentDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineAgentDetailResponse
 */
GetHotlineAgentDetailResponse Client::getHotlineAgentDetailWithOptions(const GetHotlineAgentDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineAgentDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineAgentDetailResponse>();
}

/**
 * @param request GetHotlineAgentDetailRequest
 * @return GetHotlineAgentDetailResponse
 */
GetHotlineAgentDetailResponse Client::getHotlineAgentDetail(const GetHotlineAgentDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentDetailWithOptions(request, runtime);
}

/**
 * @param request GetHotlineAgentDetailReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineAgentDetailReportResponse
 */
GetHotlineAgentDetailReportResponse Client::getHotlineAgentDetailReportWithOptions(const GetHotlineAgentDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.depIds();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineAgentDetailReport"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineAgentDetailReportResponse>();
}

/**
 * @param request GetHotlineAgentDetailReportRequest
 * @return GetHotlineAgentDetailReportResponse
 */
GetHotlineAgentDetailReportResponse Client::getHotlineAgentDetailReport(const GetHotlineAgentDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentDetailReportWithOptions(request, runtime);
}

/**
 * @param request GetHotlineAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineAgentStatusResponse
 */
GetHotlineAgentStatusResponse Client::getHotlineAgentStatusWithOptions(const GetHotlineAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetHotlineAgentStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineAgentStatusResponse>();
}

/**
 * @param request GetHotlineAgentStatusRequest
 * @return GetHotlineAgentStatusResponse
 */
GetHotlineAgentStatusResponse Client::getHotlineAgentStatus(const GetHotlineAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentStatusWithOptions(request, runtime);
}

/**
 * @summary 查询话务动作结果数据
 *
 * @param request GetHotlineCallActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineCallActionResponse
 */
GetHotlineCallActionResponse Client::getHotlineCallActionWithOptions(const GetHotlineCallActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcc()) {
    body["Acc"] = request.acc();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasAct()) {
    body["Act"] = request.act();
  }

  if (!!request.hasBiz()) {
    body["Biz"] = request.biz();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFromSource()) {
    body["FromSource"] = request.fromSource();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetHotlineCallAction"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineCallActionResponse>();
}

/**
 * @summary 查询话务动作结果数据
 *
 * @param request GetHotlineCallActionRequest
 * @return GetHotlineCallActionResponse
 */
GetHotlineCallActionResponse Client::getHotlineCallAction(const GetHotlineCallActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineCallActionWithOptions(request, runtime);
}

/**
 * @param request GetHotlineGroupDetailReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineGroupDetailReportResponse
 */
GetHotlineGroupDetailReportResponse Client::getHotlineGroupDetailReportWithOptions(const GetHotlineGroupDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.depIds();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineGroupDetailReport"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineGroupDetailReportResponse>();
}

/**
 * @param request GetHotlineGroupDetailReportRequest
 * @return GetHotlineGroupDetailReportResponse
 */
GetHotlineGroupDetailReportResponse Client::getHotlineGroupDetailReport(const GetHotlineGroupDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineGroupDetailReportWithOptions(request, runtime);
}

/**
 * @summary 获取热线聊天记录
 *
 * @param request GetHotlineMessageLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineMessageLogResponse
 */
GetHotlineMessageLogResponse Client::getHotlineMessageLogWithOptions(const GetHotlineMessageLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineMessageLog"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineMessageLogResponse>();
}

/**
 * @summary 获取热线聊天记录
 *
 * @param request GetHotlineMessageLogRequest
 * @return GetHotlineMessageLogResponse
 */
GetHotlineMessageLogResponse Client::getHotlineMessageLog(const GetHotlineMessageLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineMessageLogWithOptions(request, runtime);
}

/**
 * @summary 获取热线当前信息
 *
 * @param request GetHotlineRuntimeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineRuntimeInfoResponse
 */
GetHotlineRuntimeInfoResponse Client::getHotlineRuntimeInfoWithOptions(const GetHotlineRuntimeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineRuntimeInfo"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineRuntimeInfoResponse>();
}

/**
 * @summary 获取热线当前信息
 *
 * @param request GetHotlineRuntimeInfoRequest
 * @return GetHotlineRuntimeInfoResponse
 */
GetHotlineRuntimeInfoResponse Client::getHotlineRuntimeInfo(const GetHotlineRuntimeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineRuntimeInfoWithOptions(request, runtime);
}

/**
 * @summary 服务统计量数据
 *
 * @param tmpReq GetHotlineServiceStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineServiceStatisticsResponse
 */
GetHotlineServiceStatisticsResponse Client::getHotlineServiceStatisticsWithOptions(const GetHotlineServiceStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotlineServiceStatisticsShrinkRequest request = GetHotlineServiceStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineServiceStatistics"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineServiceStatisticsResponse>();
}

/**
 * @summary 服务统计量数据
 *
 * @param request GetHotlineServiceStatisticsRequest
 * @return GetHotlineServiceStatisticsResponse
 */
GetHotlineServiceStatisticsResponse Client::getHotlineServiceStatistics(const GetHotlineServiceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineServiceStatisticsWithOptions(request, runtime);
}

/**
 * @param request GetHotlineWaitingNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineWaitingNumberResponse
 */
GetHotlineWaitingNumberResponse Client::getHotlineWaitingNumberWithOptions(const GetHotlineWaitingNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineWaitingNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineWaitingNumberResponse>();
}

/**
 * @param request GetHotlineWaitingNumberRequest
 * @return GetHotlineWaitingNumberResponse
 */
GetHotlineWaitingNumberResponse Client::getHotlineWaitingNumber(const GetHotlineWaitingNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineWaitingNumberWithOptions(request, runtime);
}

/**
 * @param request GetIndexCurrentValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexCurrentValueResponse
 */
GetIndexCurrentValueResponse Client::getIndexCurrentValueWithOptions(const GetIndexCurrentValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepIds()) {
    query["DepIds"] = request.depIds();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndexCurrentValue"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexCurrentValueResponse>();
}

/**
 * @param request GetIndexCurrentValueRequest
 * @return GetIndexCurrentValueResponse
 */
GetIndexCurrentValueResponse Client::getIndexCurrentValue(const GetIndexCurrentValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIndexCurrentValueWithOptions(request, runtime);
}

/**
 * @param request GetInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceListWithOptions(const GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceListResponse>();
}

/**
 * @param request GetInstanceListRequest
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceList(const GetInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceListWithOptions(request, runtime);
}

/**
 * @summary 热线检测获取mcu ip地址
 *
 * @param request GetMcuLvsIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcuLvsIpResponse
 */
GetMcuLvsIpResponse Client::getMcuLvsIpWithOptions(const GetMcuLvsIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMcuLvsIp"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcuLvsIpResponse>();
}

/**
 * @summary 热线检测获取mcu ip地址
 *
 * @param request GetMcuLvsIpRequest
 * @return GetMcuLvsIpResponse
 */
GetMcuLvsIpResponse Client::getMcuLvsIp(const GetMcuLvsIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcuLvsIpWithOptions(request, runtime);
}

/**
 * @param request GetNumLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNumLocationResponse
 */
GetNumLocationResponse Client::getNumLocationWithOptions(const GetNumLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNumLocation"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNumLocationResponse>();
}

/**
 * @param request GetNumLocationRequest
 * @return GetNumLocationResponse
 */
GetNumLocationResponse Client::getNumLocation(const GetNumLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumLocationWithOptions(request, runtime);
}

/**
 * @summary 在线坐席信息
 *
 * @param tmpReq GetOnlineSeatInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOnlineSeatInformationResponse
 */
GetOnlineSeatInformationResponse Client::getOnlineSeatInformationWithOptions(const GetOnlineSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOnlineSeatInformationShrinkRequest request = GetOnlineSeatInformationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOnlineSeatInformation"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOnlineSeatInformationResponse>();
}

/**
 * @summary 在线坐席信息
 *
 * @param request GetOnlineSeatInformationRequest
 * @return GetOnlineSeatInformationResponse
 */
GetOnlineSeatInformationResponse Client::getOnlineSeatInformation(const GetOnlineSeatInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnlineSeatInformationWithOptions(request, runtime);
}

/**
 * @summary 在线服务总量
 *
 * @param tmpReq GetOnlineServiceVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOnlineServiceVolumeResponse
 */
GetOnlineServiceVolumeResponse Client::getOnlineServiceVolumeWithOptions(const GetOnlineServiceVolumeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOnlineServiceVolumeShrinkRequest request = GetOnlineServiceVolumeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOnlineServiceVolume"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOnlineServiceVolumeResponse>();
}

/**
 * @summary 在线服务总量
 *
 * @param request GetOnlineServiceVolumeRequest
 * @return GetOnlineServiceVolumeResponse
 */
GetOnlineServiceVolumeResponse Client::getOnlineServiceVolume(const GetOnlineServiceVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnlineServiceVolumeWithOptions(request, runtime);
}

/**
 * @param request GetOutbounNumListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOutbounNumListResponse
 */
GetOutbounNumListResponse Client::getOutbounNumListWithOptions(const GetOutbounNumListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOutbounNumList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOutbounNumListResponse>();
}

/**
 * @param request GetOutbounNumListRequest
 * @return GetOutbounNumListResponse
 */
GetOutbounNumListResponse Client::getOutbounNumList(const GetOutbounNumListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOutbounNumListWithOptions(request, runtime);
}

/**
 * @param request GetQualityProjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityProjectDetailResponse
 */
GetQualityProjectDetailResponse Client::getQualityProjectDetailWithOptions(const GetQualityProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityProjectDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityProjectDetailResponse>();
}

/**
 * @param request GetQualityProjectDetailRequest
 * @return GetQualityProjectDetailResponse
 */
GetQualityProjectDetailResponse Client::getQualityProjectDetail(const GetQualityProjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityProjectDetailWithOptions(request, runtime);
}

/**
 * @param request GetQualityProjectListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityProjectListResponse
 */
GetQualityProjectListResponse Client::getQualityProjectListWithOptions(const GetQualityProjectListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasCheckFreqType()) {
    query["checkFreqType"] = request.checkFreqType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityProjectList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityProjectListResponse>();
}

/**
 * @param request GetQualityProjectListRequest
 * @return GetQualityProjectListResponse
 */
GetQualityProjectListResponse Client::getQualityProjectList(const GetQualityProjectListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityProjectListWithOptions(request, runtime);
}

/**
 * @param request GetQualityProjectLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityProjectLogResponse
 */
GetQualityProjectLogResponse Client::getQualityProjectLogWithOptions(const GetQualityProjectLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityProjectLog"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityProjectLogResponse>();
}

/**
 * @param request GetQualityProjectLogRequest
 * @return GetQualityProjectLogResponse
 */
GetQualityProjectLogResponse Client::getQualityProjectLog(const GetQualityProjectLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityProjectLogWithOptions(request, runtime);
}

/**
 * @param request GetQualityResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityResultResponse
 */
GetQualityResultResponse Client::getQualityResultWithOptions(const GetQualityResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.channelType();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasHitStatus()) {
    query["HitStatus"] = request.hitStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.projectIds();
  }

  if (!!request.hasQualityRuleIds()) {
    query["QualityRuleIds"] = request.qualityRuleIds();
  }

  if (!!request.hasTouchEndTime()) {
    query["TouchEndTime"] = request.touchEndTime();
  }

  if (!!request.hasTouchStartTime()) {
    query["TouchStartTime"] = request.touchStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityResult"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityResultResponse>();
}

/**
 * @param request GetQualityResultRequest
 * @return GetQualityResultResponse
 */
GetQualityResultResponse Client::getQualityResult(const GetQualityResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityResultWithOptions(request, runtime);
}

/**
 * @param request GetQualityRuleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleDetailResponse
 */
GetQualityRuleDetailResponse Client::getQualityRuleDetailWithOptions(const GetQualityRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQualityRuleId()) {
    query["QualityRuleId"] = request.qualityRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRuleDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleDetailResponse>();
}

/**
 * @param request GetQualityRuleDetailRequest
 * @return GetQualityRuleDetailResponse
 */
GetQualityRuleDetailResponse Client::getQualityRuleDetail(const GetQualityRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleDetailWithOptions(request, runtime);
}

/**
 * @param request GetQualityRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleListResponse
 */
GetQualityRuleListResponse Client::getQualityRuleListWithOptions(const GetQualityRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRuleList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleListResponse>();
}

/**
 * @param request GetQualityRuleListRequest
 * @return GetQualityRuleListResponse
 */
GetQualityRuleListResponse Client::getQualityRuleList(const GetQualityRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleListWithOptions(request, runtime);
}

/**
 * @param request GetQualityRuleTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleTagListResponse
 */
GetQualityRuleTagListResponse Client::getQualityRuleTagListWithOptions(const GetQualityRuleTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRuleTagList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleTagListResponse>();
}

/**
 * @param request GetQualityRuleTagListRequest
 * @return GetQualityRuleTagListResponse
 */
GetQualityRuleTagListResponse Client::getQualityRuleTagList(const GetQualityRuleTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleTagListWithOptions(request, runtime);
}

/**
 * @summary 技能组纬度队列信息
 *
 * @param tmpReq GetQueueInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueInformationResponse
 */
GetQueueInformationResponse Client::getQueueInformationWithOptions(const GetQueueInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetQueueInformationShrinkRequest request = GetQueueInformationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueInformation"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueInformationResponse>();
}

/**
 * @summary 技能组纬度队列信息
 *
 * @param request GetQueueInformationRequest
 * @return GetQueueInformationResponse
 */
GetQueueInformationResponse Client::getQueueInformation(const GetQueueInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueInformationWithOptions(request, runtime);
}

/**
 * @param request GetRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordDataResponse
 */
GetRecordDataResponse Client::getRecordDataWithOptions(const GetRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.acid();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecordData"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordDataResponse>();
}

/**
 * @param request GetRecordDataRequest
 * @return GetRecordDataResponse
 */
GetRecordDataResponse Client::getRecordData(const GetRecordDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordDataWithOptions(request, runtime);
}

/**
 * @summary 获取录音链接
 *
 * @param request GetRecordUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordUrlResponse
 */
GetRecordUrlResponse Client::getRecordUrlWithOptions(const GetRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecordUrl"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordUrlResponse>();
}

/**
 * @summary 获取录音链接
 *
 * @param request GetRecordUrlRequest
 * @return GetRecordUrlResponse
 */
GetRecordUrlResponse Client::getRecordUrl(const GetRecordUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordUrlWithOptions(request, runtime);
}

/**
 * @summary 获取RtcToken
 *
 * @param request GetRtcTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRtcTokenResponse
 */
GetRtcTokenResponse Client::getRtcTokenWithOptions(const GetRtcTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRtcToken"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRtcTokenResponse>();
}

/**
 * @summary 获取RtcToken
 *
 * @param request GetRtcTokenRequest
 * @return GetRtcTokenResponse
 */
GetRtcTokenResponse Client::getRtcToken(const GetRtcTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRtcTokenWithOptions(request, runtime);
}

/**
 * @summary 部门纬度坐席信息数据
 *
 * @param tmpReq GetSeatInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSeatInformationResponse
 */
GetSeatInformationResponse Client::getSeatInformationWithOptions(const GetSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSeatInformationShrinkRequest request = GetSeatInformationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "depIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSeatInformation"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSeatInformationResponse>();
}

/**
 * @summary 部门纬度坐席信息数据
 *
 * @param request GetSeatInformationRequest
 * @return GetSeatInformationResponse
 */
GetSeatInformationResponse Client::getSeatInformation(const GetSeatInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSeatInformationWithOptions(request, runtime);
}

/**
 * @summary 技能组坐席状态详情
 *
 * @param tmpReq GetSkillGroupAgentStatusDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupAgentStatusDetailsResponse
 */
GetSkillGroupAgentStatusDetailsResponse Client::getSkillGroupAgentStatusDetailsWithOptions(const GetSkillGroupAgentStatusDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupAgentStatusDetailsShrinkRequest request = GetSkillGroupAgentStatusDetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupAgentStatusDetails"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupAgentStatusDetailsResponse>();
}

/**
 * @summary 技能组坐席状态详情
 *
 * @param request GetSkillGroupAgentStatusDetailsRequest
 * @return GetSkillGroupAgentStatusDetailsResponse
 */
GetSkillGroupAgentStatusDetailsResponse Client::getSkillGroupAgentStatusDetails(const GetSkillGroupAgentStatusDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupAgentStatusDetailsWithOptions(request, runtime);
}

/**
 * @summary 技能组坐席汇总状态量
 *
 * @param tmpReq GetSkillGroupAndAgentStatusSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupAndAgentStatusSummaryResponse
 */
GetSkillGroupAndAgentStatusSummaryResponse Client::getSkillGroupAndAgentStatusSummaryWithOptions(const GetSkillGroupAndAgentStatusSummaryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupAndAgentStatusSummaryShrinkRequest request = GetSkillGroupAndAgentStatusSummaryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupAndAgentStatusSummary"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupAndAgentStatusSummaryResponse>();
}

/**
 * @summary 技能组坐席汇总状态量
 *
 * @param request GetSkillGroupAndAgentStatusSummaryRequest
 * @return GetSkillGroupAndAgentStatusSummaryResponse
 */
GetSkillGroupAndAgentStatusSummaryResponse Client::getSkillGroupAndAgentStatusSummary(const GetSkillGroupAndAgentStatusSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupAndAgentStatusSummaryWithOptions(request, runtime);
}

/**
 * @summary 技能组纬度状态量
 *
 * @param tmpReq GetSkillGroupLatitudeStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupLatitudeStateResponse
 */
GetSkillGroupLatitudeStateResponse Client::getSkillGroupLatitudeStateWithOptions(const GetSkillGroupLatitudeStateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupLatitudeStateShrinkRequest request = GetSkillGroupLatitudeStateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupLatitudeState"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupLatitudeStateResponse>();
}

/**
 * @summary 技能组纬度状态量
 *
 * @param request GetSkillGroupLatitudeStateRequest
 * @return GetSkillGroupLatitudeStateResponse
 */
GetSkillGroupLatitudeStateResponse Client::getSkillGroupLatitudeState(const GetSkillGroupLatitudeStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupLatitudeStateWithOptions(request, runtime);
}

/**
 * @summary 技能组纬度服务能力
 *
 * @param tmpReq GetSkillGroupServiceCapabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupServiceCapabilityResponse
 */
GetSkillGroupServiceCapabilityResponse Client::getSkillGroupServiceCapabilityWithOptions(const GetSkillGroupServiceCapabilityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupServiceCapabilityShrinkRequest request = GetSkillGroupServiceCapabilityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupServiceCapability"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupServiceCapabilityResponse>();
}

/**
 * @summary 技能组纬度服务能力
 *
 * @param request GetSkillGroupServiceCapabilityRequest
 * @return GetSkillGroupServiceCapabilityResponse
 */
GetSkillGroupServiceCapabilityResponse Client::getSkillGroupServiceCapability(const GetSkillGroupServiceCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupServiceCapabilityWithOptions(request, runtime);
}

/**
 * @summary 技能组服务状态量
 *
 * @param tmpReq GetSkillGroupServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupServiceStatusResponse
 */
GetSkillGroupServiceStatusResponse Client::getSkillGroupServiceStatusWithOptions(const GetSkillGroupServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupServiceStatusShrinkRequest request = GetSkillGroupServiceStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupServiceStatus"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupServiceStatusResponse>();
}

/**
 * @summary 技能组服务状态量
 *
 * @param request GetSkillGroupServiceStatusRequest
 * @return GetSkillGroupServiceStatusResponse
 */
GetSkillGroupServiceStatusResponse Client::getSkillGroupServiceStatus(const GetSkillGroupServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 技能组状态总量
 *
 * @param tmpReq GetSkillGroupStatusTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupStatusTotalResponse
 */
GetSkillGroupStatusTotalResponse Client::getSkillGroupStatusTotalWithOptions(const GetSkillGroupStatusTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSkillGroupStatusTotalShrinkRequest request = GetSkillGroupStatusTotalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupStatusTotal"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupStatusTotalResponse>();
}

/**
 * @summary 技能组状态总量
 *
 * @param request GetSkillGroupStatusTotalRequest
 * @return GetSkillGroupStatusTotalResponse
 */
GetSkillGroupStatusTotalResponse Client::getSkillGroupStatusTotal(const GetSkillGroupStatusTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupStatusTotalWithOptions(request, runtime);
}

/**
 * @summary 移动端呼叫挂断
 *
 * @param request HangUpDoubleCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangUpDoubleCallResponse
 */
HangUpDoubleCallResponse Client::hangUpDoubleCallWithOptions(const HangUpDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.acid();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HangUpDoubleCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HangUpDoubleCallResponse>();
}

/**
 * @summary 移动端呼叫挂断
 *
 * @param request HangUpDoubleCallRequest
 * @return HangUpDoubleCallResponse
 */
HangUpDoubleCallResponse Client::hangUpDoubleCall(const HangUpDoubleCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangUpDoubleCallWithOptions(request, runtime);
}

/**
 * @param request HangupCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupCallResponse
 */
HangupCallResponse Client::hangupCallWithOptions(const HangupCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "HangupCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HangupCallResponse>();
}

/**
 * @param request HangupCallRequest
 * @return HangupCallResponse
 */
HangupCallResponse Client::hangupCall(const HangupCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupCallWithOptions(request, runtime);
}

/**
 * @summary 通信智能引擎中主动挂断通话
 *
 * @param request HangupOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupOperateResponse
 */
HangupOperateResponse Client::hangupOperateWithOptions(const HangupOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasImmediateHangup()) {
    query["ImmediateHangup"] = request.immediateHangup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HangupOperate"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HangupOperateResponse>();
}

/**
 * @summary 通信智能引擎中主动挂断通话
 *
 * @param request HangupOperateRequest
 * @return HangupOperateResponse
 */
HangupOperateResponse Client::hangupOperate(const HangupOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupOperateWithOptions(request, runtime);
}

/**
 * @param request HangupThirdCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupThirdCallResponse
 */
HangupThirdCallResponse Client::hangupThirdCallWithOptions(const HangupThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "HangupThirdCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HangupThirdCallResponse>();
}

/**
 * @param request HangupThirdCallRequest
 * @return HangupThirdCallResponse
 */
HangupThirdCallResponse Client::hangupThirdCall(const HangupThirdCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupThirdCallWithOptions(request, runtime);
}

/**
 * @param request HoldCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCallWithOptions(const HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "HoldCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HoldCallResponse>();
}

/**
 * @param request HoldCallRequest
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCall(const HoldCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return holdCallWithOptions(request, runtime);
}

/**
 * @param request HotlineSessionQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotlineSessionQueryResponse
 */
HotlineSessionQueryResponse Client::hotlineSessionQueryWithOptions(const HotlineSessionQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.acid();
  }

  if (!!request.hasAcidList()) {
    query["AcidList"] = request.acidList();
  }

  if (!!request.hasCallResult()) {
    query["CallResult"] = request.callResult();
  }

  if (!!request.hasCallResultList()) {
    query["CallResultList"] = request.callResultList();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.callType();
  }

  if (!!request.hasCallTypeList()) {
    query["CallTypeList"] = request.callTypeList();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledNumberList()) {
    query["CalledNumberList"] = request.calledNumberList();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasCallingNumberList()) {
    query["CallingNumberList"] = request.callingNumberList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupIdList()) {
    query["GroupIdList"] = request.groupIdList();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasMemberIdList()) {
    query["MemberIdList"] = request.memberIdList();
  }

  if (!!request.hasMemberName()) {
    query["MemberName"] = request.memberName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasQueryEndTime()) {
    query["QueryEndTime"] = request.queryEndTime();
  }

  if (!!request.hasQueryStartTime()) {
    query["QueryStartTime"] = request.queryStartTime();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  if (!!request.hasServicerId()) {
    query["ServicerId"] = request.servicerId();
  }

  if (!!request.hasServicerIdList()) {
    query["ServicerIdList"] = request.servicerIdList();
  }

  if (!!request.hasServicerName()) {
    query["ServicerName"] = request.servicerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotlineSessionQuery"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotlineSessionQueryResponse>();
}

/**
 * @param request HotlineSessionQueryRequest
 * @return HotlineSessionQueryResponse
 */
HotlineSessionQueryResponse Client::hotlineSessionQuery(const HotlineSessionQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hotlineSessionQueryWithOptions(request, runtime);
}

/**
 * @summary 导入任务号码数据
 *
 * @param tmpReq ImportTaskNumberDatasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportTaskNumberDatasResponse
 */
ImportTaskNumberDatasResponse Client::importTaskNumberDatasWithOptions(const ImportTaskNumberDatasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportTaskNumberDatasShrinkRequest request = ImportTaskNumberDatasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumberList()) {
    request.setPhoneNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phoneNumberList(), "PhoneNumberList", "json"));
  }

  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasOssFileName()) {
    query["OssFileName"] = request.ossFileName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  json body = {};
  if (!!request.hasPhoneNumberListShrink()) {
    body["PhoneNumberList"] = request.phoneNumberListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportTaskNumberDatas"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportTaskNumberDatasResponse>();
}

/**
 * @summary 导入任务号码数据
 *
 * @param request ImportTaskNumberDatasRequest
 * @return ImportTaskNumberDatasResponse
 */
ImportTaskNumberDatasResponse Client::importTaskNumberDatas(const ImportTaskNumberDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importTaskNumberDatasWithOptions(request, runtime);
}

/**
 * @summary 智能外呼任务导入号码
 *
 * @param tmpReq InsertAiOutboundPhoneNumsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertAiOutboundPhoneNumsResponse
 */
InsertAiOutboundPhoneNumsResponse Client::insertAiOutboundPhoneNumsWithOptions(const InsertAiOutboundPhoneNumsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertAiOutboundPhoneNumsShrinkRequest request = InsertAiOutboundPhoneNumsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetails()) {
    request.setDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.details(), "Details", "json"));
  }

  json query = {};
  if (!!request.hasBatchVersion()) {
    query["BatchVersion"] = request.batchVersion();
  }

  if (!!request.hasDetailsShrink()) {
    query["Details"] = request.detailsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertAiOutboundPhoneNums"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertAiOutboundPhoneNumsResponse>();
}

/**
 * @summary 智能外呼任务导入号码
 *
 * @param request InsertAiOutboundPhoneNumsRequest
 * @return InsertAiOutboundPhoneNumsResponse
 */
InsertAiOutboundPhoneNumsResponse Client::insertAiOutboundPhoneNums(const InsertAiOutboundPhoneNumsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertAiOutboundPhoneNumsWithOptions(request, runtime);
}

/**
 * @param request InsertTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertTaskDetailResponse
 */
InsertTaskDetailResponse Client::insertTaskDetailWithOptions(const InsertTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallInfos()) {
    query["CallInfos"] = request.callInfos();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.outboundTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertTaskDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertTaskDetailResponse>();
}

/**
 * @param request InsertTaskDetailRequest
 * @return InsertTaskDetailResponse
 */
InsertTaskDetailResponse Client::insertTaskDetail(const InsertTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertTaskDetailWithOptions(request, runtime);
}

/**
 * @param request JoinThirdCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinThirdCallResponse
 */
JoinThirdCallResponse Client::joinThirdCallWithOptions(const JoinThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.holdConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "JoinThirdCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinThirdCallResponse>();
}

/**
 * @param request JoinThirdCallRequest
 * @return JoinThirdCallResponse
 */
JoinThirdCallResponse Client::joinThirdCall(const JoinThirdCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinThirdCallWithOptions(request, runtime);
}

/**
 * @param request ListAgentBySkillGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentBySkillGroupIdResponse
 */
ListAgentBySkillGroupIdResponse Client::listAgentBySkillGroupIdWithOptions(const ListAgentBySkillGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentBySkillGroupId"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentBySkillGroupIdResponse>();
}

/**
 * @param request ListAgentBySkillGroupIdRequest
 * @return ListAgentBySkillGroupIdResponse
 */
ListAgentBySkillGroupIdResponse Client::listAgentBySkillGroupId(const ListAgentBySkillGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentBySkillGroupIdWithOptions(request, runtime);
}

/**
 * @summary 查询所有机器人列表
 *
 * @param request ListAiccsRobotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAiccsRobotResponse
 */
ListAiccsRobotResponse Client::listAiccsRobotWithOptions(const ListAiccsRobotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRobotName()) {
    query["RobotName"] = request.robotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAiccsRobot"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAiccsRobotResponse>();
}

/**
 * @summary 查询所有机器人列表
 *
 * @param request ListAiccsRobotRequest
 * @return ListAiccsRobotResponse
 */
ListAiccsRobotResponse Client::listAiccsRobot(const ListAiccsRobotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAiccsRobotWithOptions(request, runtime);
}

/**
 * @summary 获取tts音色列表
 *
 * @param request ListAvailableTtsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableTtsResponse
 */
ListAvailableTtsResponse Client::listAvailableTtsWithOptions(const ListAvailableTtsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTtsVoiceCode()) {
    query["TtsVoiceCode"] = request.ttsVoiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableTts"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableTtsResponse>();
}

/**
 * @summary 获取tts音色列表
 *
 * @param request ListAvailableTtsRequest
 * @return ListAvailableTtsResponse
 */
ListAvailableTtsResponse Client::listAvailableTts(const ListAvailableTtsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableTtsWithOptions(request, runtime);
}

/**
 * @summary 根据时间段查询在线会话详情，包含会话内容，时间段范围最长不超过1天
 *
 * @param request ListChatRecordDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatRecordDetailResponse
 */
ListChatRecordDetailResponse Client::listChatRecordDetailWithOptions(const ListChatRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatRecordDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatRecordDetailResponse>();
}

/**
 * @summary 根据时间段查询在线会话详情，包含会话内容，时间段范围最长不超过1天
 *
 * @param request ListChatRecordDetailRequest
 * @return ListChatRecordDetailResponse
 */
ListChatRecordDetailResponse Client::listChatRecordDetail(const ListChatRecordDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatRecordDetailWithOptions(request, runtime);
}

/**
 * @summary 查看对话记录
 *
 * @param request ListDialogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialogResponse
 */
ListDialogResponse Client::listDialogWithOptions(const ListDialogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalled()) {
    query["Called"] = request.called();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDialog"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDialogResponse>();
}

/**
 * @summary 查看对话记录
 *
 * @param request ListDialogRequest
 * @return ListDialogResponse
 */
ListDialogResponse Client::listDialog(const ListDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialogWithOptions(request, runtime);
}

/**
 * @param request ListHotlineRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotlineRecordResponse
 */
ListHotlineRecordResponse Client::listHotlineRecordWithOptions(const ListHotlineRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotlineRecord"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotlineRecordResponse>();
}

/**
 * @param request ListHotlineRecordRequest
 * @return ListHotlineRecordResponse
 */
ListHotlineRecordResponse Client::listHotlineRecord(const ListHotlineRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotlineRecordWithOptions(request, runtime);
}

/**
 * @summary 根据时间段查询热线详情列表，包含热线通话信息，时间段范围最长不超过1天
 *
 * @param request ListHotlineRecordDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotlineRecordDetailResponse
 */
ListHotlineRecordDetailResponse Client::listHotlineRecordDetailWithOptions(const ListHotlineRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotlineRecordDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotlineRecordDetailResponse>();
}

/**
 * @summary 根据时间段查询热线详情列表，包含热线通话信息，时间段范围最长不超过1天
 *
 * @param request ListHotlineRecordDetailRequest
 * @return ListHotlineRecordDetailResponse
 */
ListHotlineRecordDetailResponse Client::listHotlineRecordDetail(const ListHotlineRecordDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotlineRecordDetailWithOptions(request, runtime);
}

/**
 * @param request ListOutboundPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundPhoneNumberResponse
 */
ListOutboundPhoneNumberResponse Client::listOutboundPhoneNumberWithOptions(const ListOutboundPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOutboundPhoneNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutboundPhoneNumberResponse>();
}

/**
 * @param request ListOutboundPhoneNumberRequest
 * @return ListOutboundPhoneNumberResponse
 */
ListOutboundPhoneNumberResponse Client::listOutboundPhoneNumber(const ListOutboundPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary 查看对话记录
 *
 * @param request ListRobotCallDialogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotCallDialogResponse
 */
ListRobotCallDialogResponse Client::listRobotCallDialogWithOptions(const ListRobotCallDialogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRobotCallDialog"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRobotCallDialogResponse>();
}

/**
 * @summary 查看对话记录
 *
 * @param request ListRobotCallDialogRequest
 * @return ListRobotCallDialogResponse
 */
ListRobotCallDialogResponse Client::listRobotCallDialog(const ListRobotCallDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotCallDialogWithOptions(request, runtime);
}

/**
 * @summary 查询机器人输出列表
 *
 * @param request ListRobotNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotNodeResponse
 */
ListRobotNodeResponse Client::listRobotNodeWithOptions(const ListRobotNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRobotNode"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRobotNodeResponse>();
}

/**
 * @summary 查询机器人输出列表
 *
 * @param request ListRobotNodeRequest
 * @return ListRobotNodeResponse
 */
ListRobotNodeResponse Client::listRobotNode(const ListRobotNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotNodeWithOptions(request, runtime);
}

/**
 * @summary 查询参数列表
 *
 * @param request ListRobotParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotParamsResponse
 */
ListRobotParamsResponse Client::listRobotParamsWithOptions(const ListRobotParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRobotParams"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRobotParamsResponse>();
}

/**
 * @summary 查询参数列表
 *
 * @param request ListRobotParamsRequest
 * @return ListRobotParamsResponse
 */
ListRobotParamsResponse Client::listRobotParams(const ListRobotParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotParamsWithOptions(request, runtime);
}

/**
 * @summary 获取租户下的所有角色
 *
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary 获取租户下的所有角色
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @param request ListSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupResponse
 */
ListSkillGroupResponse Client::listSkillGroupWithOptions(const ListSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillGroupResponse>();
}

/**
 * @param request ListSkillGroupRequest
 * @return ListSkillGroupResponse
 */
ListSkillGroupResponse Client::listSkillGroup(const ListSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request ListTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskResponse
 */
ListTaskResponse Client::listTaskWithOptions(const ListTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRobotName()) {
    query["RobotName"] = request.robotName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request ListTaskRequest
 * @return ListTaskResponse
 */
ListTaskResponse Client::listTask(const ListTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskWithOptions(request, runtime);
}

/**
 * @summary 任务详情查看通话列表
 *
 * @param request ListTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskDetailResponse
 */
ListTaskDetailResponse Client::listTaskDetailWithOptions(const ListTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalled()) {
    query["Called"] = request.called();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.statusCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskDetailResponse>();
}

/**
 * @summary 任务详情查看通话列表
 *
 * @param request ListTaskDetailRequest
 * @return ListTaskDetailResponse
 */
ListTaskDetailResponse Client::listTaskDetail(const ListTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskDetailWithOptions(request, runtime);
}

/**
 * @summary 基于大模型的智能外呼
 *
 * @param tmpReq LlmSmartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmSmartCallResponse
 */
LlmSmartCallResponse Client::llmSmartCallWithOptions(const LlmSmartCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LlmSmartCallShrinkRequest request = LlmSmartCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizParam()) {
    request.setBizParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bizParam(), "BizParam", "json"));
  }

  if (!!tmpReq.hasPromptParam()) {
    request.setPromptParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptParam(), "PromptParam", "json"));
  }

  if (!!tmpReq.hasStartWordParam()) {
    request.setStartWordParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.startWordParam(), "StartWordParam", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.applicationCode();
  }

  if (!!request.hasBizParamShrink()) {
    query["BizParam"] = request.bizParamShrink();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.callerNumber();
  }

  if (!!request.hasCustomerLineCode()) {
    query["CustomerLineCode"] = request.customerLineCode();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasPromptParamShrink()) {
    query["PromptParam"] = request.promptParamShrink();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.sessionTimeout();
  }

  if (!!request.hasStartWordParamShrink()) {
    query["StartWordParam"] = request.startWordParamShrink();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.ttsSpeed();
  }

  if (!!request.hasTtsVoiceCode()) {
    query["TtsVoiceCode"] = request.ttsVoiceCode();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.ttsVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LlmSmartCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LlmSmartCallResponse>();
}

/**
 * @summary 基于大模型的智能外呼
 *
 * @param request LlmSmartCallRequest
 * @return LlmSmartCallResponse
 */
LlmSmartCallResponse Client::llmSmartCall(const LlmSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmSmartCallWithOptions(request, runtime);
}

/**
 * @summary 大模型外呼加密号码接口
 *
 * @param tmpReq LlmSmartCallEncryptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmSmartCallEncryptResponse
 */
LlmSmartCallEncryptResponse Client::llmSmartCallEncryptWithOptions(const LlmSmartCallEncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LlmSmartCallEncryptShrinkRequest request = LlmSmartCallEncryptShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPromptParam()) {
    request.setPromptParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptParam(), "PromptParam", "json"));
  }

  if (!!tmpReq.hasStartWordParam()) {
    request.setStartWordParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.startWordParam(), "StartWordParam", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.applicationCode();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.callerNumber();
  }

  if (!!request.hasEncryptCalledNumber()) {
    query["EncryptCalledNumber"] = request.encryptCalledNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPromptParamShrink()) {
    query["PromptParam"] = request.promptParamShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartWordParamShrink()) {
    query["StartWordParam"] = request.startWordParamShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LlmSmartCallEncrypt"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LlmSmartCallEncryptResponse>();
}

/**
 * @summary 大模型外呼加密号码接口
 *
 * @param request LlmSmartCallEncryptRequest
 * @return LlmSmartCallEncryptResponse
 */
LlmSmartCallEncryptResponse Client::llmSmartCallEncrypt(const LlmSmartCallEncryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmSmartCallEncryptWithOptions(request, runtime);
}

/**
 * @param request MakeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCallWithOptions(const MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasCommandCode()) {
    query["CommandCode"] = request.commandCode();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  if (!!request.hasOuterAccountId()) {
    query["OuterAccountId"] = request.outerAccountId();
  }

  if (!!request.hasOuterAccountType()) {
    query["OuterAccountType"] = request.outerAccountType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MakeCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MakeCallResponse>();
}

/**
 * @param request MakeCallRequest
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCall(const MakeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeCallWithOptions(request, runtime);
}

/**
 * @summary 移动端发起呼叫
 *
 * @param request MakeDoubleCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeDoubleCallResponse
 */
MakeDoubleCallResponse Client::makeDoubleCallWithOptions(const MakeDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasBizData()) {
    query["BizData"] = request.bizData();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberPhone()) {
    query["MemberPhone"] = request.memberPhone();
  }

  if (!!request.hasOutboundCallNumber()) {
    query["OutboundCallNumber"] = request.outboundCallNumber();
  }

  if (!!request.hasServicerPhone()) {
    query["ServicerPhone"] = request.servicerPhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MakeDoubleCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MakeDoubleCallResponse>();
}

/**
 * @summary 移动端发起呼叫
 *
 * @param request MakeDoubleCallRequest
 * @return MakeDoubleCallResponse
 */
MakeDoubleCallResponse Client::makeDoubleCall(const MakeDoubleCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeDoubleCallWithOptions(request, runtime);
}

/**
 * @summary 查询明细记录
 *
 * @param request QueryAiCallDetailPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallDetailPageResponse
 */
QueryAiCallDetailPageResponse Client::queryAiCallDetailPageWithOptions(const QueryAiCallDetailPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.batchId();
  }

  if (!!request.hasCallResult()) {
    query["CallResult"] = request.callResult();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasEndCallingTime()) {
    query["EndCallingTime"] = request.endCallingTime();
  }

  if (!!request.hasEndImportedTime()) {
    query["EndImportedTime"] = request.endImportedTime();
  }

  if (!!request.hasMajorIntent()) {
    query["MajorIntent"] = request.majorIntent();
  }

  if (!!request.hasMaxConversationDuration()) {
    query["MaxConversationDuration"] = request.maxConversationDuration();
  }

  if (!!request.hasMinConversationDuration()) {
    query["MinConversationDuration"] = request.minConversationDuration();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartCallingTime()) {
    query["StartCallingTime"] = request.startCallingTime();
  }

  if (!!request.hasStartImportedTime()) {
    query["StartImportedTime"] = request.startImportedTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAiCallDetailPage"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAiCallDetailPageResponse>();
}

/**
 * @summary 查询明细记录
 *
 * @param request QueryAiCallDetailPageRequest
 * @return QueryAiCallDetailPageResponse
 */
QueryAiCallDetailPageResponse Client::queryAiCallDetailPage(const QueryAiCallDetailPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallDetailPageWithOptions(request, runtime);
}

/**
 * @summary 查询任务详情
 *
 * @param request QueryAiCallTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallTaskDetailResponse
 */
QueryAiCallTaskDetailResponse Client::queryAiCallTaskDetailWithOptions(const QueryAiCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAiCallTaskDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAiCallTaskDetailResponse>();
}

/**
 * @summary 查询任务详情
 *
 * @param request QueryAiCallTaskDetailRequest
 * @return QueryAiCallTaskDetailResponse
 */
QueryAiCallTaskDetailResponse Client::queryAiCallTaskDetail(const QueryAiCallTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallTaskDetailWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request QueryAiCallTaskPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallTaskPageResponse
 */
QueryAiCallTaskPageResponse Client::queryAiCallTaskPageWithOptions(const QueryAiCallTaskPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.agentName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAiCallTaskPage"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAiCallTaskPageResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request QueryAiCallTaskPageRequest
 * @return QueryAiCallTaskPageResponse
 */
QueryAiCallTaskPageResponse Client::queryAiCallTaskPage(const QueryAiCallTaskPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallTaskPageWithOptions(request, runtime);
}

/**
 * @summary 查询通话详情信息
 *
 * @param request QueryConversationDetailInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConversationDetailInfoResponse
 */
QueryConversationDetailInfoResponse Client::queryConversationDetailInfoWithOptions(const QueryConversationDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.batchId();
  }

  if (!!request.hasDetailId()) {
    query["DetailId"] = request.detailId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryConversationDetailInfo"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConversationDetailInfoResponse>();
}

/**
 * @summary 查询通话详情信息
 *
 * @param request QueryConversationDetailInfoRequest
 * @return QueryConversationDetailInfoResponse
 */
QueryConversationDetailInfoResponse Client::queryConversationDetailInfo(const QueryConversationDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConversationDetailInfoWithOptions(request, runtime);
}

/**
 * @param request QueryHotlineInQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHotlineInQueueResponse
 */
QueryHotlineInQueueResponse Client::queryHotlineInQueueWithOptions(const QueryHotlineInQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHotlineInQueue"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHotlineInQueueResponse>();
}

/**
 * @param request QueryHotlineInQueueRequest
 * @return QueryHotlineInQueueResponse
 */
QueryHotlineInQueueResponse Client::queryHotlineInQueue(const QueryHotlineInQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHotlineInQueueWithOptions(request, runtime);
}

/**
 * @summary 查询热线号码配置
 *
 * @param tmpReq QueryHotlineNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHotlineNumberResponse
 */
QueryHotlineNumberResponse Client::queryHotlineNumberWithOptions(const QueryHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryHotlineNumberShrinkRequest request = QueryHotlineNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIds(), "GroupIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHotlineNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHotlineNumberResponse>();
}

/**
 * @summary 查询热线号码配置
 *
 * @param request QueryHotlineNumberRequest
 * @return QueryHotlineNumberResponse
 */
QueryHotlineNumberResponse Client::queryHotlineNumber(const QueryHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHotlineNumberWithOptions(request, runtime);
}

/**
 * @param request QueryOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOutboundTaskResponse
 */
QueryOutboundTaskResponse Client::queryOutboundTaskWithOptions(const QueryOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAni()) {
    query["Ani"] = request.ani();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.skillGroup();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOutboundTaskResponse>();
}

/**
 * @param request QueryOutboundTaskRequest
 * @return QueryOutboundTaskResponse
 */
QueryOutboundTaskResponse Client::queryOutboundTask(const QueryOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request QuerySkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySkillGroupsResponse
 */
QuerySkillGroupsResponse Client::querySkillGroupsWithOptions(const QuerySkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.channelType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySkillGroups"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySkillGroupsResponse>();
}

/**
 * @param request QuerySkillGroupsRequest
 * @return QuerySkillGroupsResponse
 */
QuerySkillGroupsResponse Client::querySkillGroups(const QuerySkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySkillGroupsWithOptions(request, runtime);
}

/**
 * @param request QueryTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskDetailResponse
 */
QueryTaskDetailResponse Client::queryTaskDetailWithOptions(const QueryTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAni()) {
    query["Ani"] = request.ani();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepartmentIdList()) {
    query["DepartmentIdList"] = request.departmentIdList();
  }

  if (!!request.hasDnis()) {
    query["Dnis"] = request.dnis();
  }

  if (!!request.hasEndReasonList()) {
    query["EndReasonList"] = request.endReasonList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.outboundTaskId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPriorityList()) {
    query["PriorityList"] = request.priorityList();
  }

  if (!!request.hasServicerId()) {
    query["ServicerId"] = request.servicerId();
  }

  if (!!request.hasServicerName()) {
    query["ServicerName"] = request.servicerName();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.sid();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.skillGroup();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.statusList();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskDetailResponse>();
}

/**
 * @param request QueryTaskDetailRequest
 * @return QueryTaskDetailResponse
 */
QueryTaskDetailResponse Client::queryTaskDetail(const QueryTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailWithOptions(request, runtime);
}

/**
 * @param tmpReq QueryTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTicketsResponse
 */
QueryTicketsResponse Client::queryTicketsWithOptions(const QueryTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryTicketsShrinkRequest request = QueryTicketsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  json body = {};
  if (!!request.hasCaseId()) {
    body["CaseId"] = request.caseId();
  }

  if (!!request.hasCaseStatus()) {
    body["CaseStatus"] = request.caseStatus();
  }

  if (!!request.hasCaseType()) {
    body["CaseType"] = request.caseType();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.channelType();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDealId()) {
    body["DealId"] = request.dealId();
  }

  if (!!request.hasExtraShrink()) {
    body["Extra"] = request.extraShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSrType()) {
    body["SrType"] = request.srType();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTouchId()) {
    body["TouchId"] = request.touchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryTickets"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTicketsResponse>();
}

/**
 * @param request QueryTicketsRequest
 * @return QueryTicketsResponse
 */
QueryTicketsResponse Client::queryTickets(const QueryTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTicketsWithOptions(request, runtime);
}

/**
 * @param request QueryTouchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTouchListResponse
 */
QueryTouchListResponse Client::queryTouchListWithOptions(const QueryTouchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.channelType();
  }

  if (!!request.hasCloseTimeEnd()) {
    body["CloseTimeEnd"] = request.closeTimeEnd();
  }

  if (!!request.hasCloseTimeStart()) {
    body["CloseTimeStart"] = request.closeTimeStart();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.evaluationLevel();
  }

  if (!!request.hasEvaluationScore()) {
    body["EvaluationScore"] = request.evaluationScore();
  }

  if (!!request.hasEvaluationStatus()) {
    body["EvaluationStatus"] = request.evaluationStatus();
  }

  if (!!request.hasFirstTimeEnd()) {
    body["FirstTimeEnd"] = request.firstTimeEnd();
  }

  if (!!request.hasFirstTimeStart()) {
    body["FirstTimeStart"] = request.firstTimeStart();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemberId()) {
    body["MemberId"] = request.memberId();
  }

  if (!!request.hasMemberName()) {
    body["MemberName"] = request.memberName();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueId()) {
    body["QueueId"] = request.queueId();
  }

  if (!!request.hasServicerId()) {
    body["ServicerId"] = request.servicerId();
  }

  if (!!request.hasServicerName()) {
    body["ServicerName"] = request.servicerName();
  }

  if (!!request.hasTouchId()) {
    body["TouchId"] = request.touchId();
  }

  if (!!request.hasTouchType()) {
    body["TouchType"] = request.touchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryTouchList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTouchListResponse>();
}

/**
 * @param request QueryTouchListRequest
 * @return QueryTouchListResponse
 */
QueryTouchListResponse Client::queryTouchList(const QueryTouchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTouchListWithOptions(request, runtime);
}

/**
 * @summary 从技能组中移除坐席
 *
 * @param tmpReq RemoveAgentFromSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAgentFromSkillGroupResponse
 */
RemoveAgentFromSkillGroupResponse Client::removeAgentFromSkillGroupWithOptions(const RemoveAgentFromSkillGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveAgentFromSkillGroupShrinkRequest request = RemoveAgentFromSkillGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentIds(), "AgentIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentIdsShrink()) {
    query["AgentIds"] = request.agentIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAgentFromSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAgentFromSkillGroupResponse>();
}

/**
 * @summary 从技能组中移除坐席
 *
 * @param request RemoveAgentFromSkillGroupRequest
 * @return RemoveAgentFromSkillGroupResponse
 */
RemoveAgentFromSkillGroupResponse Client::removeAgentFromSkillGroup(const RemoveAgentFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAgentFromSkillGroupWithOptions(request, runtime);
}

/**
 * @param request RemoveSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSkillGroupResponse
 */
RemoveSkillGroupResponse Client::removeSkillGroupWithOptions(const RemoveSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSkillGroupResponse>();
}

/**
 * @param request RemoveSkillGroupRequest
 * @return RemoveSkillGroupResponse
 */
RemoveSkillGroupResponse Client::removeSkillGroup(const RemoveSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSkillGroupWithOptions(request, runtime);
}

/**
 * @summary 重置热线号码
 *
 * @param tmpReq ResetHotlineNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetHotlineNumberResponse
 */
ResetHotlineNumberResponse Client::resetHotlineNumberWithOptions(const ResetHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResetHotlineNumberShrinkRequest request = ResetHotlineNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutboundRangeList()) {
    request.setOutboundRangeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outboundRangeList(), "OutboundRangeList", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnableInbound()) {
    body["EnableInbound"] = request.enableInbound();
  }

  if (!!request.hasEnableInboundEvaluation()) {
    body["EnableInboundEvaluation"] = request.enableInboundEvaluation();
  }

  if (!!request.hasEnableOutbound()) {
    body["EnableOutbound"] = request.enableOutbound();
  }

  if (!!request.hasEnableOutboundEvaluation()) {
    body["EnableOutboundEvaluation"] = request.enableOutboundEvaluation();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.evaluationLevel();
  }

  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.hotlineNumber();
  }

  if (!!request.hasInboundFlowId()) {
    body["InboundFlowId"] = request.inboundFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundAllDepart()) {
    body["OutboundAllDepart"] = request.outboundAllDepart();
  }

  if (!!request.hasOutboundRangeListShrink()) {
    body["OutboundRangeList"] = request.outboundRangeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetHotlineNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetHotlineNumberResponse>();
}

/**
 * @summary 重置热线号码
 *
 * @param request ResetHotlineNumberRequest
 * @return ResetHotlineNumberResponse
 */
ResetHotlineNumberResponse Client::resetHotlineNumber(const ResetHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetHotlineNumberWithOptions(request, runtime);
}

/**
 * @param request RestartOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartOutboundTaskResponse
 */
RestartOutboundTaskResponse Client::restartOutboundTaskWithOptions(const RestartOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.outboundTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartOutboundTaskResponse>();
}

/**
 * @param request RestartOutboundTaskRequest
 * @return RestartOutboundTaskResponse
 */
RestartOutboundTaskResponse Client::restartOutboundTask(const RestartOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request RobotCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RobotCallResponse
 */
RobotCallResponse Client::robotCallWithOptions(const RobotCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.earlyMediaAsr();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.recordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RobotCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RobotCallResponse>();
}

/**
 * @param request RobotCallRequest
 * @return RobotCallResponse
 */
RobotCallResponse Client::robotCall(const RobotCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return robotCallWithOptions(request, runtime);
}

/**
 * @param request SendCcoSmartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCcoSmartCallResponse
 */
SendCcoSmartCallResponse Client::sendCcoSmartCallWithOptions(const SendCcoSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionCodeBreak()) {
    query["ActionCodeBreak"] = request.actionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.actionCodeTimeBreak();
  }

  if (!!request.hasAsrAlsAmId()) {
    query["AsrAlsAmId"] = request.asrAlsAmId();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.asrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasAsrVocabularyId()) {
    query["AsrVocabularyId"] = request.asrVocabularyId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.backgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.backgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.backgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.dynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.earlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.enableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.muteTime();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.pauseTime();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.recordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.sessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.ttsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.ttsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.ttsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.ttsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.voiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.voiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendCcoSmartCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCcoSmartCallResponse>();
}

/**
 * @param request SendCcoSmartCallRequest
 * @return SendCcoSmartCallResponse
 */
SendCcoSmartCallResponse Client::sendCcoSmartCall(const SendCcoSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCcoSmartCallWithOptions(request, runtime);
}

/**
 * @param request SendCcoSmartCallOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCcoSmartCallOperateResponse
 */
SendCcoSmartCallOperateResponse Client::sendCcoSmartCallOperateWithOptions(const SendCcoSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendCcoSmartCallOperate"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCcoSmartCallOperateResponse>();
}

/**
 * @param request SendCcoSmartCallOperateRequest
 * @return SendCcoSmartCallOperateResponse
 */
SendCcoSmartCallOperateResponse Client::sendCcoSmartCallOperate(const SendCcoSmartCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCcoSmartCallOperateWithOptions(request, runtime);
}

/**
 * @param request SendHotlineHeartBeatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendHotlineHeartBeatResponse
 */
SendHotlineHeartBeatResponse Client::sendHotlineHeartBeatWithOptions(const SendHotlineHeartBeatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendHotlineHeartBeat"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendHotlineHeartBeatResponse>();
}

/**
 * @param request SendHotlineHeartBeatRequest
 * @return SendHotlineHeartBeatResponse
 */
SendHotlineHeartBeatResponse Client::sendHotlineHeartBeat(const SendHotlineHeartBeatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendHotlineHeartBeatWithOptions(request, runtime);
}

/**
 * @summary 启动任务
 *
 * @param request StartAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAiCallTaskResponse
 */
StartAiCallTaskResponse Client::startAiCallTaskWithOptions(const StartAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAiCallTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAiCallTaskResponse>();
}

/**
 * @summary 启动任务
 *
 * @param request StartAiCallTaskRequest
 * @return StartAiCallTaskResponse
 */
StartAiCallTaskResponse Client::startAiCallTask(const StartAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary 启动智能外呼任务
 *
 * @param request StartAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAiOutboundTaskResponse
 */
StartAiOutboundTaskResponse Client::startAiOutboundTaskWithOptions(const StartAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAiOutboundTaskResponse>();
}

/**
 * @summary 启动智能外呼任务
 *
 * @param request StartAiOutboundTaskRequest
 * @return StartAiOutboundTaskResponse
 */
StartAiOutboundTaskResponse Client::startAiOutboundTask(const StartAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request StartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCallResponse
 */
StartCallResponse Client::startCallWithOptions(const StartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallee()) {
    body["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    body["Caller"] = request.caller();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartCall"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCallResponse>();
}

/**
 * @param request StartCallRequest
 * @return StartCallResponse
 */
StartCallResponse Client::startCall(const StartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCallWithOptions(request, runtime);
}

/**
 * @param request StartCallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCallV2Response
 */
StartCallV2Response Client::startCallV2WithOptions(const StartCallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallee()) {
    body["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    body["Caller"] = request.caller();
  }

  if (!!request.hasCallerType()) {
    body["CallerType"] = request.callerType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartCallV2"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCallV2Response>();
}

/**
 * @param request StartCallV2Request
 * @return StartCallV2Response
 */
StartCallV2Response Client::startCallV2(const StartCallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCallV2WithOptions(request, runtime);
}

/**
 * @summary 修改在线客服为上班状态
 *
 * @param request StartChatWorkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartChatWorkResponse
 */
StartChatWorkResponse Client::startChatWorkWithOptions(const StartChatWorkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartChatWork"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartChatWorkResponse>();
}

/**
 * @summary 修改在线客服为上班状态
 *
 * @param request StartChatWorkRequest
 * @return StartChatWorkResponse
 */
StartChatWorkResponse Client::startChatWork(const StartChatWorkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startChatWorkWithOptions(request, runtime);
}

/**
 * @param request StartHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartHotlineServiceResponse
 */
StartHotlineServiceResponse Client::startHotlineServiceWithOptions(const StartHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartHotlineService"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartHotlineServiceResponse>();
}

/**
 * @param request StartHotlineServiceRequest
 * @return StartHotlineServiceResponse
 */
StartHotlineServiceResponse Client::startHotlineService(const StartHotlineServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startHotlineServiceWithOptions(request, runtime);
}

/**
 * @param request StartMicroOutboundRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMicroOutboundResponse
 */
StartMicroOutboundResponse Client::startMicroOutboundWithOptions(const StartMicroOutboundRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasCommandCode()) {
    query["CommandCode"] = request.commandCode();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartMicroOutbound"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMicroOutboundResponse>();
}

/**
 * @param request StartMicroOutboundRequest
 * @return StartMicroOutboundResponse
 */
StartMicroOutboundResponse Client::startMicroOutbound(const StartMicroOutboundRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMicroOutboundWithOptions(request, runtime);
}

/**
 * @summary 立即或定时启动智能外呼任务
 *
 * @param request StartTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTaskWithOptions(const StartTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartNow()) {
    query["StartNow"] = request.startNow();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTaskResponse>();
}

/**
 * @summary 立即或定时启动智能外呼任务
 *
 * @param request StartTaskRequest
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTask(const StartTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTaskWithOptions(request, runtime);
}

/**
 * @summary 停止任务
 *
 * @param request StopAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAiCallTaskResponse
 */
StopAiCallTaskResponse Client::stopAiCallTaskWithOptions(const StopAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAiCallTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAiCallTaskResponse>();
}

/**
 * @summary 停止任务
 *
 * @param request StopAiCallTaskRequest
 * @return StopAiCallTaskResponse
 */
StopAiCallTaskResponse Client::stopAiCallTask(const StopAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary 手动暂停智能外呼任务
 *
 * @param request StopAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAiOutboundTaskResponse
 */
StopAiOutboundTaskResponse Client::stopAiOutboundTaskWithOptions(const StopAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAiOutboundTaskResponse>();
}

/**
 * @summary 手动暂停智能外呼任务
 *
 * @param request StopAiOutboundTaskRequest
 * @return StopAiOutboundTaskResponse
 */
StopAiOutboundTaskResponse Client::stopAiOutboundTask(const StopAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary 暂停外呼任务
 *
 * @param request StopTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTaskWithOptions(const StopTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTaskResponse>();
}

/**
 * @summary 暂停外呼任务
 *
 * @param request StopTaskRequest
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTask(const StopTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTaskWithOptions(request, runtime);
}

/**
 * @param request SuspendHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendHotlineServiceResponse
 */
SuspendHotlineServiceResponse Client::suspendHotlineServiceWithOptions(const SuspendHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendHotlineService"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendHotlineServiceResponse>();
}

/**
 * @param request SuspendHotlineServiceRequest
 * @return SuspendHotlineServiceResponse
 */
SuspendHotlineServiceResponse Client::suspendHotlineService(const SuspendHotlineServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendHotlineServiceWithOptions(request, runtime);
}

/**
 * @param request SuspendOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendOutboundTaskResponse
 */
SuspendOutboundTaskResponse Client::suspendOutboundTaskWithOptions(const SuspendOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.outboundTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendOutboundTaskResponse>();
}

/**
 * @param request SuspendOutboundTaskRequest
 * @return SuspendOutboundTaskResponse
 */
SuspendOutboundTaskResponse Client::suspendOutboundTask(const SuspendOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary 终止智能外呼任务
 *
 * @param request TerminateAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateAiOutboundTaskResponse
 */
TerminateAiOutboundTaskResponse Client::terminateAiOutboundTaskWithOptions(const TerminateAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TerminateAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateAiOutboundTaskResponse>();
}

/**
 * @summary 终止智能外呼任务
 *
 * @param request TerminateAiOutboundTaskRequest
 * @return TerminateAiOutboundTaskResponse
 */
TerminateAiOutboundTaskResponse Client::terminateAiOutboundTask(const TerminateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @param request TransferCallToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferCallToSkillGroupResponse
 */
TransferCallToSkillGroupResponse Client::transferCallToSkillGroupWithOptions(const TransferCallToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.callId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.holdConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsSingleTransfer()) {
    body["IsSingleTransfer"] = request.isSingleTransfer();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TransferCallToSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferCallToSkillGroupResponse>();
}

/**
 * @param request TransferCallToSkillGroupRequest
 * @return TransferCallToSkillGroupResponse
 */
TransferCallToSkillGroupResponse Client::transferCallToSkillGroup(const TransferCallToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferCallToSkillGroupWithOptions(request, runtime);
}

/**
 * @param request UpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAgent"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentResponse>();
}

/**
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @summary 更新AI外呼任务配置
 *
 * @param tmpReq UpdateAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAiCallTaskResponse
 */
UpdateAiCallTaskResponse Client::updateAiCallTaskWithOptions(const UpdateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAiCallTaskShrinkRequest request = UpdateAiCallTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallDay()) {
    request.setCallDayShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callDay(), "CallDay", "json"));
  }

  if (!!tmpReq.hasCallRetryReason()) {
    request.setCallRetryReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callRetryReason(), "CallRetryReason", "json"));
  }

  if (!!tmpReq.hasCallTime()) {
    request.setCallTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callTime(), "CallTime", "json"));
  }

  json query = {};
  if (!!request.hasCallDayShrink()) {
    query["CallDay"] = request.callDayShrink();
  }

  if (!!request.hasCallRetryInterval()) {
    query["CallRetryInterval"] = request.callRetryInterval();
  }

  if (!!request.hasCallRetryReasonShrink()) {
    query["CallRetryReason"] = request.callRetryReasonShrink();
  }

  if (!!request.hasCallRetryTimes()) {
    query["CallRetryTimes"] = request.callRetryTimes();
  }

  if (!!request.hasCallTimeShrink()) {
    query["CallTime"] = request.callTimeShrink();
  }

  if (!!request.hasMissCallRetry()) {
    query["MissCallRetry"] = request.missCallRetry();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartType()) {
    query["StartType"] = request.startType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskStartTime()) {
    query["TaskStartTime"] = request.taskStartTime();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.virtualNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAiCallTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAiCallTaskResponse>();
}

/**
 * @summary 更新AI外呼任务配置
 *
 * @param request UpdateAiCallTaskRequest
 * @return UpdateAiCallTaskResponse
 */
UpdateAiCallTaskResponse Client::updateAiCallTask(const UpdateAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary 更新智能外呼任务（预测式外呼、自动外呼）
 *
 * @param tmpReq UpdateAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAiOutboundTaskResponse
 */
UpdateAiOutboundTaskResponse Client::updateAiOutboundTaskWithOptions(const UpdateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAiOutboundTaskShrinkRequest request = UpdateAiOutboundTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutboundNums()) {
    request.setOutboundNumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outboundNums(), "OutboundNums", "json"));
  }

  if (!!tmpReq.hasRecallRule()) {
    request.setRecallRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recallRule(), "RecallRule", "json"));
  }

  json query = {};
  if (!!request.hasConcurrentRate()) {
    query["ConcurrentRate"] = request.concurrentRate();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionTime()) {
    query["ExecutionTime"] = request.executionTime();
  }

  if (!!request.hasForecastCallRate()) {
    query["ForecastCallRate"] = request.forecastCallRate();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNumRepeated()) {
    query["NumRepeated"] = request.numRepeated();
  }

  if (!!request.hasOutboundNumsShrink()) {
    query["OutboundNums"] = request.outboundNumsShrink();
  }

  if (!!request.hasRecallRuleShrink()) {
    query["RecallRule"] = request.recallRuleShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAiOutboundTask"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAiOutboundTaskResponse>();
}

/**
 * @summary 更新智能外呼任务（预测式外呼、自动外呼）
 *
 * @param request UpdateAiOutboundTaskRequest
 * @return UpdateAiOutboundTaskResponse
 */
UpdateAiOutboundTaskResponse Client::updateAiOutboundTask(const UpdateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary 更新部门信息
 *
 * @param request UpdateDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartmentWithOptions(const UpdateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.departmentName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDepartment"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDepartmentResponse>();
}

/**
 * @summary 更新部门信息
 *
 * @param request UpdateDepartmentRequest
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartment(const UpdateDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDepartmentWithOptions(request, runtime);
}

/**
 * @param request UpdateOuterAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOuterAccountResponse
 */
UpdateOuterAccountResponse Client::updateOuterAccountWithOptions(const UpdateOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOuterAccount"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOuterAccountResponse>();
}

/**
 * @param request UpdateOuterAccountRequest
 * @return UpdateOuterAccountResponse
 */
UpdateOuterAccountResponse Client::updateOuterAccount(const UpdateOuterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOuterAccountWithOptions(request, runtime);
}

/**
 * @param request UpdateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillGroupResponse
 */
UpdateSkillGroupResponse Client::updateSkillGroupWithOptions(const UpdateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasSkillGroupName()) {
    query["SkillGroupName"] = request.skillGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillGroup"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillGroupResponse>();
}

/**
 * @param request UpdateSkillGroupRequest
 * @return UpdateSkillGroupResponse
 */
UpdateSkillGroupResponse Client::updateSkillGroup(const UpdateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Aiccs20191015