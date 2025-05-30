// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aiccs_20191015.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Aiccs20191015;

Alibabacloud_Aiccs20191015::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aiccs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aiccs20191015::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::addHotlineNumberWithOptions(shared_ptr<AddHotlineNumberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddHotlineNumberShrinkRequest> request = make_shared<AddHotlineNumberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddHotlineNumberRequestOutboundRangeList>>(tmpReq->outboundRangeList)) {
    request->outboundRangeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outboundRangeList, make_shared<string>("OutboundRangeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInbound)) {
    body->insert(pair<string, bool>("EnableInbound", *request->enableInbound));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInboundEvaluation)) {
    body->insert(pair<string, bool>("EnableInboundEvaluation", *request->enableInboundEvaluation));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOutbound)) {
    body->insert(pair<string, bool>("EnableOutbound", *request->enableOutbound));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOutboundEvaluation)) {
    body->insert(pair<string, bool>("EnableOutboundEvaluation", *request->enableOutboundEvaluation));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->evaluationLevel)) {
    body->insert(pair<string, long>("EvaluationLevel", *request->evaluationLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotlineNumber)) {
    body->insert(pair<string, string>("HotlineNumber", *request->hotlineNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inboundFlowId)) {
    body->insert(pair<string, long>("InboundFlowId", *request->inboundFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outboundAllDepart)) {
    body->insert(pair<string, bool>("OutboundAllDepart", *request->outboundAllDepart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundRangeListShrink)) {
    body->insert(pair<string, string>("OutboundRangeList", *request->outboundRangeListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddHotlineNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddHotlineNumberResponse(callApi(params, req, runtime));
}

AddHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::addHotlineNumber(shared_ptr<AddHotlineNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addHotlineNumberWithOptions(request, runtime);
}

AddOuterAccountResponse Alibabacloud_Aiccs20191015::Client::addOuterAccountWithOptions(shared_ptr<AddOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddOuterAccount"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddOuterAccountResponse(callApi(params, req, runtime));
}

AddOuterAccountResponse Alibabacloud_Aiccs20191015::Client::addOuterAccount(shared_ptr<AddOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addOuterAccountWithOptions(request, runtime);
}

AddSkillGroupResponse Alibabacloud_Aiccs20191015::Client::addSkillGroupWithOptions(shared_ptr<AddSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSkillGroupResponse(callApi(params, req, runtime));
}

AddSkillGroupResponse Alibabacloud_Aiccs20191015::Client::addSkillGroup(shared_ptr<AddSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSkillGroupWithOptions(request, runtime);
}

AiccsSmartCallResponse Alibabacloud_Aiccs20191015::Client::aiccsSmartCallWithOptions(shared_ptr<AiccsSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->actionCodeBreak)) {
    query->insert(pair<string, bool>("ActionCodeBreak", *request->actionCodeBreak));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->actionCodeTimeBreak)) {
    query->insert(pair<string, long>("ActionCodeTimeBreak", *request->actionCodeTimeBreak));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrAlsAmId)) {
    query->insert(pair<string, string>("AsrAlsAmId", *request->asrAlsAmId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrBaseId)) {
    query->insert(pair<string, string>("AsrBaseId", *request->asrBaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrModelId)) {
    query->insert(pair<string, string>("AsrModelId", *request->asrModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrVocabularyId)) {
    query->insert(pair<string, string>("AsrVocabularyId", *request->asrVocabularyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundFileCode)) {
    query->insert(pair<string, string>("BackgroundFileCode", *request->backgroundFileCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundSpeed)) {
    query->insert(pair<string, long>("BackgroundSpeed", *request->backgroundSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundVolume)) {
    query->insert(pair<string, long>("BackgroundVolume", *request->backgroundVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledShowNumber)) {
    query->insert(pair<string, string>("CalledShowNumber", *request->calledShowNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicId)) {
    query->insert(pair<string, string>("DynamicId", *request->dynamicId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->earlyMediaAsr)) {
    query->insert(pair<string, bool>("EarlyMediaAsr", *request->earlyMediaAsr));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableITN)) {
    query->insert(pair<string, bool>("EnableITN", *request->enableITN));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->muteTime)) {
    query->insert(pair<string, long>("MuteTime", *request->muteTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pauseTime)) {
    query->insert(pair<string, long>("PauseTime", *request->pauseTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recordFlag)) {
    query->insert(pair<string, bool>("RecordFlag", *request->recordFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    query->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ttsConf)) {
    query->insert(pair<string, bool>("TtsConf", *request->ttsConf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsSpeed)) {
    query->insert(pair<string, long>("TtsSpeed", *request->ttsSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsStyle)) {
    query->insert(pair<string, string>("TtsStyle", *request->ttsStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsVolume)) {
    query->insert(pair<string, long>("TtsVolume", *request->ttsVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCodeParam)) {
    query->insert(pair<string, string>("VoiceCodeParam", *request->voiceCodeParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AiccsSmartCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AiccsSmartCallResponse(callApi(params, req, runtime));
}

AiccsSmartCallResponse Alibabacloud_Aiccs20191015::Client::aiccsSmartCall(shared_ptr<AiccsSmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aiccsSmartCallWithOptions(request, runtime);
}

AiccsSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::aiccsSmartCallOperateWithOptions(shared_ptr<AiccsSmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AiccsSmartCallOperate"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AiccsSmartCallOperateResponse(callApi(params, req, runtime));
}

AiccsSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::aiccsSmartCallOperate(shared_ptr<AiccsSmartCallOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aiccsSmartCallOperateWithOptions(request, runtime);
}

AnswerCallResponse Alibabacloud_Aiccs20191015::Client::answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnswerCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnswerCallResponse(callApi(params, req, runtime));
}

AnswerCallResponse Alibabacloud_Aiccs20191015::Client::answerCall(shared_ptr<AnswerCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return answerCallWithOptions(request, runtime);
}

AttachTaskResponse Alibabacloud_Aiccs20191015::Client::attachTaskWithOptions(shared_ptr<AttachTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callString)) {
    query->insert(pair<string, string>("CallString", *request->callString));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachTaskResponse(callApi(params, req, runtime));
}

AttachTaskResponse Alibabacloud_Aiccs20191015::Client::attachTask(shared_ptr<AttachTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachTaskWithOptions(request, runtime);
}

BatchCreateQualityProjectsResponse Alibabacloud_Aiccs20191015::Client::batchCreateQualityProjectsWithOptions(shared_ptr<BatchCreateQualityProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->analysisIds)) {
    query->insert(pair<string, vector<long>>("AnalysisIds", *request->analysisIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->channelTouchType)) {
    query->insert(pair<string, vector<long>>("ChannelTouchType", *request->channelTouchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkFreqType)) {
    query->insert(pair<string, long>("CheckFreqType", *request->checkFreqType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceList)) {
    query->insert(pair<string, vector<string>>("InstanceList", *request->instanceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeEnd)) {
    query->insert(pair<string, string>("TimeRangeEnd", *request->timeRangeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeStart)) {
    query->insert(pair<string, string>("TimeRangeStart", *request->timeRangeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateQualityProjects"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCreateQualityProjectsResponse(callApi(params, req, runtime));
}

BatchCreateQualityProjectsResponse Alibabacloud_Aiccs20191015::Client::batchCreateQualityProjects(shared_ptr<BatchCreateQualityProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateQualityProjectsWithOptions(request, runtime);
}

CancelTaskResponse Alibabacloud_Aiccs20191015::Client::cancelTaskWithOptions(shared_ptr<CancelTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelTaskResponse(callApi(params, req, runtime));
}

CancelTaskResponse Alibabacloud_Aiccs20191015::Client::cancelTask(shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelTaskWithOptions(request, runtime);
}

ChangeChatAgentStatusResponse Alibabacloud_Aiccs20191015::Client::changeChatAgentStatusWithOptions(shared_ptr<ChangeChatAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    body->insert(pair<string, string>("Method", *request->method));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeChatAgentStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeChatAgentStatusResponse(callApi(params, req, runtime));
}

ChangeChatAgentStatusResponse Alibabacloud_Aiccs20191015::Client::changeChatAgentStatus(shared_ptr<ChangeChatAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeChatAgentStatusWithOptions(request, runtime);
}

ChangeQualityProjectStatusResponse Alibabacloud_Aiccs20191015::Client::changeQualityProjectStatusWithOptions(shared_ptr<ChangeQualityProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeQualityProjectStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeQualityProjectStatusResponse(callApi(params, req, runtime));
}

ChangeQualityProjectStatusResponse Alibabacloud_Aiccs20191015::Client::changeQualityProjectStatus(shared_ptr<ChangeQualityProjectStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeQualityProjectStatusWithOptions(request, runtime);
}

CreateAgentResponse Alibabacloud_Aiccs20191015::Client::createAgentWithOptions(shared_ptr<CreateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->skillGroupId)) {
    bodyFlat->insert(pair<string, vector<long>>("SkillGroupId", *request->skillGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->skillGroupIdList)) {
    bodyFlat->insert(pair<string, vector<long>>("SkillGroupIdList", *request->skillGroupIdList));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAgent"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAgentResponse(callApi(params, req, runtime));
}

CreateAgentResponse Alibabacloud_Aiccs20191015::Client::createAgent(shared_ptr<CreateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgentWithOptions(request, runtime);
}

CreateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createAiOutboundTaskWithOptions(shared_ptr<CreateAiOutboundTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAiOutboundTaskShrinkRequest> request = make_shared<CreateAiOutboundTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->outboundNums)) {
    request->outboundNumsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outboundNums, make_shared<string>("OutboundNums"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAiOutboundTaskRequestRecallRule>(tmpReq->recallRule)) {
    request->recallRuleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recallRule, make_shared<string>("RecallRule"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrentRate)) {
    query->insert(pair<string, long>("ConcurrentRate", *request->concurrentRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionTime)) {
    query->insert(pair<string, string>("ExecutionTime", *request->executionTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->forecastCallRate)) {
    query->insert(pair<string, double>("ForecastCallRate", *request->forecastCallRate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numRepeated)) {
    query->insert(pair<string, long>("NumRepeated", *request->numRepeated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundNumsShrink)) {
    query->insert(pair<string, string>("OutboundNums", *request->outboundNumsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallRuleShrink)) {
    query->insert(pair<string, string>("RecallRule", *request->recallRuleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAiOutboundTaskResponse(callApi(params, req, runtime));
}

CreateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createAiOutboundTask(shared_ptr<CreateAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAiOutboundTaskWithOptions(request, runtime);
}

CreateAiOutboundTaskBatchResponse Alibabacloud_Aiccs20191015::Client::createAiOutboundTaskBatchWithOptions(shared_ptr<CreateAiOutboundTaskBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAiOutboundTaskBatch"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAiOutboundTaskBatchResponse(callApi(params, req, runtime));
}

CreateAiOutboundTaskBatchResponse Alibabacloud_Aiccs20191015::Client::createAiOutboundTaskBatch(shared_ptr<CreateAiOutboundTaskBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAiOutboundTaskBatchWithOptions(request, runtime);
}

CreateDepartmentResponse Alibabacloud_Aiccs20191015::Client::createDepartmentWithOptions(shared_ptr<CreateDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentName)) {
    query->insert(pair<string, string>("DepartmentName", *request->departmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDepartment"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDepartmentResponse(callApi(params, req, runtime));
}

CreateDepartmentResponse Alibabacloud_Aiccs20191015::Client::createDepartment(shared_ptr<CreateDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDepartmentWithOptions(request, runtime);
}

CreateOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createOutboundTaskWithOptions(shared_ptr<CreateOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ani)) {
    query->insert(pair<string, string>("Ani", *request->ani));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callInfos)) {
    query->insert(pair<string, string>("CallInfos", *request->callInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->departmentId)) {
    query->insert(pair<string, long>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttrs)) {
    query->insert(pair<string, string>("ExtAttrs", *request->extAttrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->model)) {
    query->insert(pair<string, long>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryInterval)) {
    query->insert(pair<string, long>("RetryInterval", *request->retryInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryTime)) {
    query->insert(pair<string, long>("RetryTime", *request->retryTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skillGroup)) {
    query->insert(pair<string, long>("SkillGroup", *request->skillGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOutboundTaskResponse(callApi(params, req, runtime));
}

CreateOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createOutboundTask(shared_ptr<CreateOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOutboundTaskWithOptions(request, runtime);
}

CreateQualityProjectResponse Alibabacloud_Aiccs20191015::Client::createQualityProjectWithOptions(shared_ptr<CreateQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->analysisIds)) {
    body->insert(pair<string, vector<long>>("AnalysisIds", *request->analysisIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->channelTouchType)) {
    body->insert(pair<string, vector<long>>("ChannelTouchType", *request->channelTouchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkFreqType)) {
    body->insert(pair<string, long>("CheckFreqType", *request->checkFreqType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->depList)) {
    body->insert(pair<string, vector<long>>("DepList", *request->depList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupList)) {
    body->insert(pair<string, vector<long>>("GroupList", *request->groupList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scopeType)) {
    body->insert(pair<string, long>("ScopeType", *request->scopeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->servicerList)) {
    body->insert(pair<string, vector<string>>("ServicerList", *request->servicerList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeEnd)) {
    body->insert(pair<string, string>("TimeRangeEnd", *request->timeRangeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeStart)) {
    body->insert(pair<string, string>("TimeRangeStart", *request->timeRangeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityProject"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityProjectResponse(callApi(params, req, runtime));
}

CreateQualityProjectResponse Alibabacloud_Aiccs20191015::Client::createQualityProject(shared_ptr<CreateQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityProjectWithOptions(request, runtime);
}

CreateQualityRuleResponse Alibabacloud_Aiccs20191015::Client::createQualityRuleWithOptions(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyWords)) {
    body->insert(pair<string, vector<string>>("KeyWords", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchType)) {
    body->insert(pair<string, long>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleTag)) {
    body->insert(pair<string, long>("RuleTag", *request->ruleTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityRule"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityRuleResponse(callApi(params, req, runtime));
}

CreateQualityRuleResponse Alibabacloud_Aiccs20191015::Client::createQualityRule(shared_ptr<CreateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRuleWithOptions(request, runtime);
}

CreateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->channelType)) {
    body->insert(pair<string, long>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->departmentId)) {
    body->insert(pair<string, long>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroupName)) {
    body->insert(pair<string, string>("SkillGroupName", *request->skillGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSkillGroupResponse(callApi(params, req, runtime));
}

CreateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::createSkillGroup(shared_ptr<CreateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupWithOptions(request, runtime);
}

CreateTaskResponse Alibabacloud_Aiccs20191015::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callString)) {
    query->insert(pair<string, string>("CallString", *request->callString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callStringType)) {
    query->insert(pair<string, string>("CallStringType", *request->callStringType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryCount)) {
    query->insert(pair<string, long>("RetryCount", *request->retryCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryFlag)) {
    query->insert(pair<string, long>("RetryFlag", *request->retryFlag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryInterval)) {
    query->insert(pair<string, long>("RetryInterval", *request->retryInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retryStatusCode)) {
    query->insert(pair<string, string>("RetryStatusCode", *request->retryStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotId)) {
    query->insert(pair<string, string>("RobotId", *request->robotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seatCount)) {
    query->insert(pair<string, string>("SeatCount", *request->seatCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->startNow)) {
    query->insert(pair<string, bool>("StartNow", *request->startNow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workDay)) {
    query->insert(pair<string, string>("WorkDay", *request->workDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workTimeList)) {
    query->insert(pair<string, string>("WorkTimeList", *request->workTimeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_Aiccs20191015::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskWithOptions(request, runtime);
}

CreateThirdSsoAgentResponse Alibabacloud_Aiccs20191015::Client::createThirdSsoAgentWithOptions(shared_ptr<CreateThirdSsoAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->roleIds)) {
    bodyFlat->insert(pair<string, vector<long>>("RoleIds", *request->roleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->skillGroupIds)) {
    bodyFlat->insert(pair<string, vector<long>>("SkillGroupIds", *request->skillGroupIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateThirdSsoAgent"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateThirdSsoAgentResponse(callApi(params, req, runtime));
}

CreateThirdSsoAgentResponse Alibabacloud_Aiccs20191015::Client::createThirdSsoAgent(shared_ptr<CreateThirdSsoAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThirdSsoAgentWithOptions(request, runtime);
}

DeleteAgentResponse Alibabacloud_Aiccs20191015::Client::deleteAgentWithOptions(shared_ptr<DeleteAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAgent"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAgentResponse(callApi(params, req, runtime));
}

DeleteAgentResponse Alibabacloud_Aiccs20191015::Client::deleteAgent(shared_ptr<DeleteAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAgentWithOptions(request, runtime);
}

DeleteAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteAiOutboundTaskWithOptions(shared_ptr<DeleteAiOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAiOutboundTaskResponse(callApi(params, req, runtime));
}

DeleteAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteAiOutboundTask(shared_ptr<DeleteAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAiOutboundTaskWithOptions(request, runtime);
}

DeleteDepartmentResponse Alibabacloud_Aiccs20191015::Client::deleteDepartmentWithOptions(shared_ptr<DeleteDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->departmentId)) {
    query->insert(pair<string, long>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDepartment"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDepartmentResponse(callApi(params, req, runtime));
}

DeleteDepartmentResponse Alibabacloud_Aiccs20191015::Client::deleteDepartment(shared_ptr<DeleteDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDepartmentWithOptions(request, runtime);
}

DeleteHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::deleteHotlineNumberWithOptions(shared_ptr<DeleteHotlineNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotlineNumber)) {
    body->insert(pair<string, string>("HotlineNumber", *request->hotlineNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHotlineNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHotlineNumberResponse(callApi(params, req, runtime));
}

DeleteHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::deleteHotlineNumber(shared_ptr<DeleteHotlineNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHotlineNumberWithOptions(request, runtime);
}

DeleteOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteOutboundTaskWithOptions(shared_ptr<DeleteOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outboundTaskId)) {
    query->insert(pair<string, long>("OutboundTaskId", *request->outboundTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOutboundTaskResponse(callApi(params, req, runtime));
}

DeleteOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteOutboundTask(shared_ptr<DeleteOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOutboundTaskWithOptions(request, runtime);
}

DeleteOuterAccountResponse Alibabacloud_Aiccs20191015::Client::deleteOuterAccountWithOptions(shared_ptr<DeleteOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOuterAccount"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOuterAccountResponse(callApi(params, req, runtime));
}

DeleteOuterAccountResponse Alibabacloud_Aiccs20191015::Client::deleteOuterAccount(shared_ptr<DeleteOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOuterAccountWithOptions(request, runtime);
}

DeleteQualityProjectResponse Alibabacloud_Aiccs20191015::Client::deleteQualityProjectWithOptions(shared_ptr<DeleteQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityProject"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityProjectResponse(callApi(params, req, runtime));
}

DeleteQualityProjectResponse Alibabacloud_Aiccs20191015::Client::deleteQualityProject(shared_ptr<DeleteQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityProjectWithOptions(request, runtime);
}

DeleteQualityRuleResponse Alibabacloud_Aiccs20191015::Client::deleteQualityRuleWithOptions(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityRule"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityRuleResponse(callApi(params, req, runtime));
}

DeleteQualityRuleResponse Alibabacloud_Aiccs20191015::Client::deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRuleWithOptions(request, runtime);
}

DeleteSkillGroupResponse Alibabacloud_Aiccs20191015::Client::deleteSkillGroupWithOptions(shared_ptr<DeleteSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSkillGroupResponse(callApi(params, req, runtime));
}

DeleteSkillGroupResponse Alibabacloud_Aiccs20191015::Client::deleteSkillGroup(shared_ptr<DeleteSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupWithOptions(request, runtime);
}

DescribeRecordDataResponse Alibabacloud_Aiccs20191015::Client::describeRecordDataWithOptions(shared_ptr<DescribeRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acid)) {
    query->insert(pair<string, string>("Acid", *request->acid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secLevel)) {
    query->insert(pair<string, long>("SecLevel", *request->secLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecordData"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecordDataResponse(callApi(params, req, runtime));
}

DescribeRecordDataResponse Alibabacloud_Aiccs20191015::Client::describeRecordData(shared_ptr<DescribeRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordDataWithOptions(request, runtime);
}

EditQualityProjectResponse Alibabacloud_Aiccs20191015::Client::editQualityProjectWithOptions(shared_ptr<EditQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->analysisIds)) {
    query->insert(pair<string, vector<long>>("AnalysisIds", *request->analysisIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->channelTouchType)) {
    query->insert(pair<string, vector<long>>("ChannelTouchType", *request->channelTouchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkFreqType)) {
    query->insert(pair<string, long>("CheckFreqType", *request->checkFreqType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->depList)) {
    query->insert(pair<string, vector<long>>("DepList", *request->depList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupList)) {
    query->insert(pair<string, vector<long>>("GroupList", *request->groupList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectVersion)) {
    query->insert(pair<string, long>("ProjectVersion", *request->projectVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scopeType)) {
    query->insert(pair<string, long>("ScopeType", *request->scopeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->servicerList)) {
    query->insert(pair<string, vector<string>>("ServicerList", *request->servicerList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeEnd)) {
    query->insert(pair<string, string>("TimeRangeEnd", *request->timeRangeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeStart)) {
    query->insert(pair<string, string>("TimeRangeStart", *request->timeRangeStart));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditQualityProject"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditQualityProjectResponse(callApi(params, req, runtime));
}

EditQualityProjectResponse Alibabacloud_Aiccs20191015::Client::editQualityProject(shared_ptr<EditQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityProjectWithOptions(request, runtime);
}

EditQualityRuleResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleWithOptions(shared_ptr<EditQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyWords)) {
    body->insert(pair<string, vector<string>>("KeyWords", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchType)) {
    body->insert(pair<string, long>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualityRuleId)) {
    body->insert(pair<string, long>("QualityRuleId", *request->qualityRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleTag)) {
    body->insert(pair<string, long>("RuleTag", *request->ruleTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditQualityRule"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditQualityRuleResponse(callApi(params, req, runtime));
}

EditQualityRuleResponse Alibabacloud_Aiccs20191015::Client::editQualityRule(shared_ptr<EditQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityRuleWithOptions(request, runtime);
}

EditQualityRuleTagResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleTagWithOptions(shared_ptr<EditQualityRuleTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<EditQualityRuleTagRequestAnalysisTypes>>(request->analysisTypes)) {
    query->insert(pair<string, vector<EditQualityRuleTagRequestAnalysisTypes>>("AnalysisTypes", *request->analysisTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditQualityRuleTag"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditQualityRuleTagResponse(callApi(params, req, runtime));
}

EditQualityRuleTagResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleTag(shared_ptr<EditQualityRuleTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityRuleTagWithOptions(request, runtime);
}

EncryptPhoneNumResponse Alibabacloud_Aiccs20191015::Client::encryptPhoneNumWithOptions(shared_ptr<EncryptPhoneNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EncryptPhoneNum"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EncryptPhoneNumResponse(callApi(params, req, runtime));
}

EncryptPhoneNumResponse Alibabacloud_Aiccs20191015::Client::encryptPhoneNum(shared_ptr<EncryptPhoneNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptPhoneNumWithOptions(request, runtime);
}

FetchCallResponse Alibabacloud_Aiccs20191015::Client::fetchCallWithOptions(shared_ptr<FetchCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->holdConnectionId)) {
    body->insert(pair<string, string>("HoldConnectionId", *request->holdConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FetchCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FetchCallResponse(callApi(params, req, runtime));
}

FetchCallResponse Alibabacloud_Aiccs20191015::Client::fetchCall(shared_ptr<FetchCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchCallWithOptions(request, runtime);
}

FinishHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::finishHotlineServiceWithOptions(shared_ptr<FinishHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FinishHotlineService"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FinishHotlineServiceResponse(callApi(params, req, runtime));
}

FinishHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::finishHotlineService(shared_ptr<FinishHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return finishHotlineServiceWithOptions(request, runtime);
}

GenerateWebSocketSignResponse Alibabacloud_Aiccs20191015::Client::generateWebSocketSignWithOptions(shared_ptr<GenerateWebSocketSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateWebSocketSign"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateWebSocketSignResponse(callApi(params, req, runtime));
}

GenerateWebSocketSignResponse Alibabacloud_Aiccs20191015::Client::generateWebSocketSign(shared_ptr<GenerateWebSocketSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateWebSocketSignWithOptions(request, runtime);
}

GetAgentResponse Alibabacloud_Aiccs20191015::Client::getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgent"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentResponse(callApi(params, req, runtime));
}

GetAgentResponse Alibabacloud_Aiccs20191015::Client::getAgent(shared_ptr<GetAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentWithOptions(request, runtime);
}

GetAgentBasisStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentBasisStatusWithOptions(shared_ptr<GetAgentBasisStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentBasisStatusShrinkRequest> request = make_shared<GetAgentBasisStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentBasisStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentBasisStatusResponse(callApi(params, req, runtime));
}

GetAgentBasisStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentBasisStatus(shared_ptr<GetAgentBasisStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentBasisStatusWithOptions(request, runtime);
}

GetAgentByIdResponse Alibabacloud_Aiccs20191015::Client::getAgentByIdWithOptions(shared_ptr<GetAgentByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->agentId)) {
    body->insert(pair<string, long>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentById"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentByIdResponse(callApi(params, req, runtime));
}

GetAgentByIdResponse Alibabacloud_Aiccs20191015::Client::getAgentById(shared_ptr<GetAgentByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentByIdWithOptions(request, runtime);
}

GetAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getAgentDetailReportWithOptions(shared_ptr<GetAgentDetailReportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentDetailReportShrinkRequest> request = make_shared<GetAgentDetailReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentDetailReport"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentDetailReportResponse(callApi(params, req, runtime));
}

GetAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getAgentDetailReport(shared_ptr<GetAgentDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentDetailReportWithOptions(request, runtime);
}

GetAgentIndexRealTimeResponse Alibabacloud_Aiccs20191015::Client::getAgentIndexRealTimeWithOptions(shared_ptr<GetAgentIndexRealTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->depIds)) {
    query->insert(pair<string, vector<long>>("DepIds", *request->depIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupIds)) {
    query->insert(pair<string, vector<long>>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentIndexRealTime"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentIndexRealTimeResponse(callApi(params, req, runtime));
}

GetAgentIndexRealTimeResponse Alibabacloud_Aiccs20191015::Client::getAgentIndexRealTime(shared_ptr<GetAgentIndexRealTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentIndexRealTimeWithOptions(request, runtime);
}

GetAgentServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentServiceStatusWithOptions(shared_ptr<GetAgentServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentServiceStatusShrinkRequest> request = make_shared<GetAgentServiceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentServiceStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentServiceStatusResponse(callApi(params, req, runtime));
}

GetAgentServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentServiceStatus(shared_ptr<GetAgentServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentServiceStatusWithOptions(request, runtime);
}

GetAgentStatisticsResponse Alibabacloud_Aiccs20191015::Client::getAgentStatisticsWithOptions(shared_ptr<GetAgentStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentStatisticsShrinkRequest> request = make_shared<GetAgentStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentStatistics"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentStatisticsResponse(callApi(params, req, runtime));
}

GetAgentStatisticsResponse Alibabacloud_Aiccs20191015::Client::getAgentStatistics(shared_ptr<GetAgentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentStatisticsWithOptions(request, runtime);
}

GetAiOutboundTaskBizDataResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskBizDataWithOptions(shared_ptr<GetAiOutboundTaskBizDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiOutboundTaskBizData"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiOutboundTaskBizDataResponse(callApi(params, req, runtime));
}

GetAiOutboundTaskBizDataResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskBizData(shared_ptr<GetAiOutboundTaskBizDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiOutboundTaskBizDataWithOptions(request, runtime);
}

GetAiOutboundTaskDetailResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskDetailWithOptions(shared_ptr<GetAiOutboundTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiOutboundTaskDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiOutboundTaskDetailResponse(callApi(params, req, runtime));
}

GetAiOutboundTaskDetailResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskDetail(shared_ptr<GetAiOutboundTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiOutboundTaskDetailWithOptions(request, runtime);
}

GetAiOutboundTaskExecDetailResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskExecDetailWithOptions(shared_ptr<GetAiOutboundTaskExecDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiOutboundTaskExecDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiOutboundTaskExecDetailResponse(callApi(params, req, runtime));
}

GetAiOutboundTaskExecDetailResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskExecDetail(shared_ptr<GetAiOutboundTaskExecDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiOutboundTaskExecDetailWithOptions(request, runtime);
}

GetAiOutboundTaskListResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskListWithOptions(shared_ptr<GetAiOutboundTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiOutboundTaskList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiOutboundTaskListResponse(callApi(params, req, runtime));
}

GetAiOutboundTaskListResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskList(shared_ptr<GetAiOutboundTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiOutboundTaskListWithOptions(request, runtime);
}

GetAiOutboundTaskProgressResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskProgressWithOptions(shared_ptr<GetAiOutboundTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiOutboundTaskProgress"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiOutboundTaskProgressResponse(callApi(params, req, runtime));
}

GetAiOutboundTaskProgressResponse Alibabacloud_Aiccs20191015::Client::getAiOutboundTaskProgress(shared_ptr<GetAiOutboundTaskProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiOutboundTaskProgressWithOptions(request, runtime);
}

GetAllDepartmentResponse Alibabacloud_Aiccs20191015::Client::getAllDepartmentWithOptions(shared_ptr<GetAllDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAllDepartment"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAllDepartmentResponse(callApi(params, req, runtime));
}

GetAllDepartmentResponse Alibabacloud_Aiccs20191015::Client::getAllDepartment(shared_ptr<GetAllDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAllDepartmentWithOptions(request, runtime);
}

GetCallSoundRecordResponse Alibabacloud_Aiccs20191015::Client::getCallSoundRecordWithOptions(shared_ptr<GetCallSoundRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCallSoundRecord"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCallSoundRecordResponse(callApi(params, req, runtime));
}

GetCallSoundRecordResponse Alibabacloud_Aiccs20191015::Client::getCallSoundRecord(shared_ptr<GetCallSoundRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallSoundRecordWithOptions(request, runtime);
}

GetConfigNumListResponse Alibabacloud_Aiccs20191015::Client::getConfigNumListWithOptions(shared_ptr<GetConfigNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigNumList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigNumListResponse(callApi(params, req, runtime));
}

GetConfigNumListResponse Alibabacloud_Aiccs20191015::Client::getConfigNumList(shared_ptr<GetConfigNumListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigNumListWithOptions(request, runtime);
}

GetCustomerInfoResponse Alibabacloud_Aiccs20191015::Client::getCustomerInfoWithOptions(shared_ptr<GetCustomerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomerInfo"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomerInfoResponse(callApi(params, req, runtime));
}

GetCustomerInfoResponse Alibabacloud_Aiccs20191015::Client::getCustomerInfo(shared_ptr<GetCustomerInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerInfoWithOptions(request, runtime);
}

GetDepGroupTreeDataResponse Alibabacloud_Aiccs20191015::Client::getDepGroupTreeDataWithOptions(shared_ptr<GetDepGroupTreeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDepGroupTreeData"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDepGroupTreeDataResponse(callApi(params, req, runtime));
}

GetDepGroupTreeDataResponse Alibabacloud_Aiccs20191015::Client::getDepGroupTreeData(shared_ptr<GetDepGroupTreeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDepGroupTreeDataWithOptions(request, runtime);
}

GetDepartmentalLatitudeAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getDepartmentalLatitudeAgentStatusWithOptions(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDepartmentalLatitudeAgentStatusShrinkRequest> request = make_shared<GetDepartmentalLatitudeAgentStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDepartmentalLatitudeAgentStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDepartmentalLatitudeAgentStatusResponse(callApi(params, req, runtime));
}

GetDepartmentalLatitudeAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getDepartmentalLatitudeAgentStatus(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDepartmentalLatitudeAgentStatusWithOptions(request, runtime);
}

GetHotlineAgentDetailResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailWithOptions(shared_ptr<GetHotlineAgentDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineAgentDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineAgentDetailResponse(callApi(params, req, runtime));
}

GetHotlineAgentDetailResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetail(shared_ptr<GetHotlineAgentDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailWithOptions(request, runtime);
}

GetHotlineAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailReportWithOptions(shared_ptr<GetHotlineAgentDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->depIds)) {
    query->insert(pair<string, vector<long>>("DepIds", *request->depIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupIds)) {
    query->insert(pair<string, vector<long>>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineAgentDetailReport"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineAgentDetailReportResponse(callApi(params, req, runtime));
}

GetHotlineAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailReport(shared_ptr<GetHotlineAgentDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailReportWithOptions(request, runtime);
}

GetHotlineAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentStatusWithOptions(shared_ptr<GetHotlineAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineAgentStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineAgentStatusResponse(callApi(params, req, runtime));
}

GetHotlineAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentStatus(shared_ptr<GetHotlineAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentStatusWithOptions(request, runtime);
}

GetHotlineCallActionResponse Alibabacloud_Aiccs20191015::Client::getHotlineCallActionWithOptions(shared_ptr<GetHotlineCallActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acc)) {
    body->insert(pair<string, string>("Acc", *request->acc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->act)) {
    body->insert(pair<string, long>("Act", *request->act));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->biz)) {
    body->insert(pair<string, string>("Biz", *request->biz));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromSource)) {
    body->insert(pair<string, string>("FromSource", *request->fromSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineCallAction"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineCallActionResponse(callApi(params, req, runtime));
}

GetHotlineCallActionResponse Alibabacloud_Aiccs20191015::Client::getHotlineCallAction(shared_ptr<GetHotlineCallActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineCallActionWithOptions(request, runtime);
}

GetHotlineGroupDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineGroupDetailReportWithOptions(shared_ptr<GetHotlineGroupDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->depIds)) {
    query->insert(pair<string, vector<long>>("DepIds", *request->depIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupIds)) {
    query->insert(pair<string, vector<long>>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineGroupDetailReport"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineGroupDetailReportResponse(callApi(params, req, runtime));
}

GetHotlineGroupDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineGroupDetailReport(shared_ptr<GetHotlineGroupDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineGroupDetailReportWithOptions(request, runtime);
}

GetHotlineMessageLogResponse Alibabacloud_Aiccs20191015::Client::getHotlineMessageLogWithOptions(shared_ptr<GetHotlineMessageLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineMessageLog"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineMessageLogResponse(callApi(params, req, runtime));
}

GetHotlineMessageLogResponse Alibabacloud_Aiccs20191015::Client::getHotlineMessageLog(shared_ptr<GetHotlineMessageLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineMessageLogWithOptions(request, runtime);
}

GetHotlineRuntimeInfoResponse Alibabacloud_Aiccs20191015::Client::getHotlineRuntimeInfoWithOptions(shared_ptr<GetHotlineRuntimeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineRuntimeInfo"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineRuntimeInfoResponse(callApi(params, req, runtime));
}

GetHotlineRuntimeInfoResponse Alibabacloud_Aiccs20191015::Client::getHotlineRuntimeInfo(shared_ptr<GetHotlineRuntimeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineRuntimeInfoWithOptions(request, runtime);
}

GetHotlineServiceStatisticsResponse Alibabacloud_Aiccs20191015::Client::getHotlineServiceStatisticsWithOptions(shared_ptr<GetHotlineServiceStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotlineServiceStatisticsShrinkRequest> request = make_shared<GetHotlineServiceStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineServiceStatistics"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineServiceStatisticsResponse(callApi(params, req, runtime));
}

GetHotlineServiceStatisticsResponse Alibabacloud_Aiccs20191015::Client::getHotlineServiceStatistics(shared_ptr<GetHotlineServiceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineServiceStatisticsWithOptions(request, runtime);
}

GetHotlineWaitingNumberResponse Alibabacloud_Aiccs20191015::Client::getHotlineWaitingNumberWithOptions(shared_ptr<GetHotlineWaitingNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotlineWaitingNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotlineWaitingNumberResponse(callApi(params, req, runtime));
}

GetHotlineWaitingNumberResponse Alibabacloud_Aiccs20191015::Client::getHotlineWaitingNumber(shared_ptr<GetHotlineWaitingNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineWaitingNumberWithOptions(request, runtime);
}

GetIndexCurrentValueResponse Alibabacloud_Aiccs20191015::Client::getIndexCurrentValueWithOptions(shared_ptr<GetIndexCurrentValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->depIds)) {
    query->insert(pair<string, string>("DepIds", *request->depIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIds)) {
    query->insert(pair<string, string>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexCurrentValue"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexCurrentValueResponse(callApi(params, req, runtime));
}

GetIndexCurrentValueResponse Alibabacloud_Aiccs20191015::Client::getIndexCurrentValue(shared_ptr<GetIndexCurrentValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIndexCurrentValueWithOptions(request, runtime);
}

GetInstanceListResponse Alibabacloud_Aiccs20191015::Client::getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceListResponse(callApi(params, req, runtime));
}

GetInstanceListResponse Alibabacloud_Aiccs20191015::Client::getInstanceList(shared_ptr<GetInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceListWithOptions(request, runtime);
}

GetMcuLvsIpResponse Alibabacloud_Aiccs20191015::Client::getMcuLvsIpWithOptions(shared_ptr<GetMcuLvsIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcuLvsIp"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcuLvsIpResponse(callApi(params, req, runtime));
}

GetMcuLvsIpResponse Alibabacloud_Aiccs20191015::Client::getMcuLvsIp(shared_ptr<GetMcuLvsIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcuLvsIpWithOptions(request, runtime);
}

GetNumLocationResponse Alibabacloud_Aiccs20191015::Client::getNumLocationWithOptions(shared_ptr<GetNumLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNumLocation"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNumLocationResponse(callApi(params, req, runtime));
}

GetNumLocationResponse Alibabacloud_Aiccs20191015::Client::getNumLocation(shared_ptr<GetNumLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumLocationWithOptions(request, runtime);
}

GetOnlineSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getOnlineSeatInformationWithOptions(shared_ptr<GetOnlineSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetOnlineSeatInformationShrinkRequest> request = make_shared<GetOnlineSeatInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOnlineSeatInformation"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOnlineSeatInformationResponse(callApi(params, req, runtime));
}

GetOnlineSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getOnlineSeatInformation(shared_ptr<GetOnlineSeatInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnlineSeatInformationWithOptions(request, runtime);
}

GetOnlineServiceVolumeResponse Alibabacloud_Aiccs20191015::Client::getOnlineServiceVolumeWithOptions(shared_ptr<GetOnlineServiceVolumeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetOnlineServiceVolumeShrinkRequest> request = make_shared<GetOnlineServiceVolumeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOnlineServiceVolume"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOnlineServiceVolumeResponse(callApi(params, req, runtime));
}

GetOnlineServiceVolumeResponse Alibabacloud_Aiccs20191015::Client::getOnlineServiceVolume(shared_ptr<GetOnlineServiceVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnlineServiceVolumeWithOptions(request, runtime);
}

GetOutbounNumListResponse Alibabacloud_Aiccs20191015::Client::getOutbounNumListWithOptions(shared_ptr<GetOutbounNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOutbounNumList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOutbounNumListResponse(callApi(params, req, runtime));
}

GetOutbounNumListResponse Alibabacloud_Aiccs20191015::Client::getOutbounNumList(shared_ptr<GetOutbounNumListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOutbounNumListWithOptions(request, runtime);
}

GetQualityProjectDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectDetailWithOptions(shared_ptr<GetQualityProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityProjectDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityProjectDetailResponse(callApi(params, req, runtime));
}

GetQualityProjectDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectDetail(shared_ptr<GetQualityProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectDetailWithOptions(request, runtime);
}

GetQualityProjectListResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectListWithOptions(shared_ptr<GetQualityProjectListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkFreqType)) {
    query->insert(pair<string, long>("checkFreqType", *request->checkFreqType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityProjectList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityProjectListResponse(callApi(params, req, runtime));
}

GetQualityProjectListResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectList(shared_ptr<GetQualityProjectListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectListWithOptions(request, runtime);
}

GetQualityProjectLogResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectLogWithOptions(shared_ptr<GetQualityProjectLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityProjectLog"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityProjectLogResponse(callApi(params, req, runtime));
}

GetQualityProjectLogResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectLog(shared_ptr<GetQualityProjectLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectLogWithOptions(request, runtime);
}

GetQualityResultResponse Alibabacloud_Aiccs20191015::Client::getQualityResultWithOptions(shared_ptr<GetQualityResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelType)) {
    query->insert(pair<string, string>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupIds)) {
    query->insert(pair<string, vector<long>>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hitStatus)) {
    query->insert(pair<string, long>("HitStatus", *request->hitStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->projectIds)) {
    query->insert(pair<string, vector<long>>("ProjectIds", *request->projectIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->qualityRuleIds)) {
    query->insert(pair<string, vector<long>>("QualityRuleIds", *request->qualityRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->touchEndTime)) {
    query->insert(pair<string, string>("TouchEndTime", *request->touchEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->touchStartTime)) {
    query->insert(pair<string, string>("TouchStartTime", *request->touchStartTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityResult"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityResultResponse(callApi(params, req, runtime));
}

GetQualityResultResponse Alibabacloud_Aiccs20191015::Client::getQualityResult(shared_ptr<GetQualityResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityResultWithOptions(request, runtime);
}

GetQualityRuleDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleDetailWithOptions(shared_ptr<GetQualityRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualityRuleId)) {
    query->insert(pair<string, long>("QualityRuleId", *request->qualityRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityRuleDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityRuleDetailResponse(callApi(params, req, runtime));
}

GetQualityRuleDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleDetail(shared_ptr<GetQualityRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleDetailWithOptions(request, runtime);
}

GetQualityRuleListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleListWithOptions(shared_ptr<GetQualityRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityRuleList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityRuleListResponse(callApi(params, req, runtime));
}

GetQualityRuleListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleList(shared_ptr<GetQualityRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleListWithOptions(request, runtime);
}

GetQualityRuleTagListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleTagListWithOptions(shared_ptr<GetQualityRuleTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityRuleTagList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityRuleTagListResponse(callApi(params, req, runtime));
}

GetQualityRuleTagListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleTagList(shared_ptr<GetQualityRuleTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleTagListWithOptions(request, runtime);
}

GetQueueInformationResponse Alibabacloud_Aiccs20191015::Client::getQueueInformationWithOptions(shared_ptr<GetQueueInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetQueueInformationShrinkRequest> request = make_shared<GetQueueInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueueInformation"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueueInformationResponse(callApi(params, req, runtime));
}

GetQueueInformationResponse Alibabacloud_Aiccs20191015::Client::getQueueInformation(shared_ptr<GetQueueInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueInformationWithOptions(request, runtime);
}

GetRecordDataResponse Alibabacloud_Aiccs20191015::Client::getRecordDataWithOptions(shared_ptr<GetRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acid)) {
    query->insert(pair<string, string>("Acid", *request->acid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRecordData"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRecordDataResponse(callApi(params, req, runtime));
}

GetRecordDataResponse Alibabacloud_Aiccs20191015::Client::getRecordData(shared_ptr<GetRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordDataWithOptions(request, runtime);
}

GetRecordUrlResponse Alibabacloud_Aiccs20191015::Client::getRecordUrlWithOptions(shared_ptr<GetRecordUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRecordUrl"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRecordUrlResponse(callApi(params, req, runtime));
}

GetRecordUrlResponse Alibabacloud_Aiccs20191015::Client::getRecordUrl(shared_ptr<GetRecordUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordUrlWithOptions(request, runtime);
}

GetRtcTokenResponse Alibabacloud_Aiccs20191015::Client::getRtcTokenWithOptions(shared_ptr<GetRtcTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRtcToken"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRtcTokenResponse(callApi(params, req, runtime));
}

GetRtcTokenResponse Alibabacloud_Aiccs20191015::Client::getRtcToken(shared_ptr<GetRtcTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRtcTokenWithOptions(request, runtime);
}

GetSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getSeatInformationWithOptions(shared_ptr<GetSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSeatInformationShrinkRequest> request = make_shared<GetSeatInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("depIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSeatInformation"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSeatInformationResponse(callApi(params, req, runtime));
}

GetSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getSeatInformation(shared_ptr<GetSeatInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSeatInformationWithOptions(request, runtime);
}

GetSkillGroupAgentStatusDetailsResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAgentStatusDetailsWithOptions(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupAgentStatusDetailsShrinkRequest> request = make_shared<GetSkillGroupAgentStatusDetailsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupAgentStatusDetails"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupAgentStatusDetailsResponse(callApi(params, req, runtime));
}

GetSkillGroupAgentStatusDetailsResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAgentStatusDetails(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupAgentStatusDetailsWithOptions(request, runtime);
}

GetSkillGroupAndAgentStatusSummaryResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAndAgentStatusSummaryWithOptions(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupAndAgentStatusSummaryShrinkRequest> request = make_shared<GetSkillGroupAndAgentStatusSummaryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupAndAgentStatusSummary"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupAndAgentStatusSummaryResponse(callApi(params, req, runtime));
}

GetSkillGroupAndAgentStatusSummaryResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAndAgentStatusSummary(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupAndAgentStatusSummaryWithOptions(request, runtime);
}

GetSkillGroupLatitudeStateResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupLatitudeStateWithOptions(shared_ptr<GetSkillGroupLatitudeStateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupLatitudeStateShrinkRequest> request = make_shared<GetSkillGroupLatitudeStateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupLatitudeState"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupLatitudeStateResponse(callApi(params, req, runtime));
}

GetSkillGroupLatitudeStateResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupLatitudeState(shared_ptr<GetSkillGroupLatitudeStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupLatitudeStateWithOptions(request, runtime);
}

GetSkillGroupServiceCapabilityResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceCapabilityWithOptions(shared_ptr<GetSkillGroupServiceCapabilityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupServiceCapabilityShrinkRequest> request = make_shared<GetSkillGroupServiceCapabilityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupServiceCapability"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupServiceCapabilityResponse(callApi(params, req, runtime));
}

GetSkillGroupServiceCapabilityResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceCapability(shared_ptr<GetSkillGroupServiceCapabilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupServiceCapabilityWithOptions(request, runtime);
}

GetSkillGroupServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceStatusWithOptions(shared_ptr<GetSkillGroupServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupServiceStatusShrinkRequest> request = make_shared<GetSkillGroupServiceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupServiceStatus"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupServiceStatusResponse(callApi(params, req, runtime));
}

GetSkillGroupServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceStatus(shared_ptr<GetSkillGroupServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupServiceStatusWithOptions(request, runtime);
}

GetSkillGroupStatusTotalResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupStatusTotalWithOptions(shared_ptr<GetSkillGroupStatusTotalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupStatusTotalShrinkRequest> request = make_shared<GetSkillGroupStatusTotalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupStatusTotal"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSkillGroupStatusTotalResponse(callApi(params, req, runtime));
}

GetSkillGroupStatusTotalResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupStatusTotal(shared_ptr<GetSkillGroupStatusTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupStatusTotalWithOptions(request, runtime);
}

HangUpDoubleCallResponse Alibabacloud_Aiccs20191015::Client::hangUpDoubleCallWithOptions(shared_ptr<HangUpDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acid)) {
    query->insert(pair<string, string>("Acid", *request->acid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HangUpDoubleCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HangUpDoubleCallResponse(callApi(params, req, runtime));
}

HangUpDoubleCallResponse Alibabacloud_Aiccs20191015::Client::hangUpDoubleCall(shared_ptr<HangUpDoubleCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangUpDoubleCallWithOptions(request, runtime);
}

HangupCallResponse Alibabacloud_Aiccs20191015::Client::hangupCallWithOptions(shared_ptr<HangupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HangupCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HangupCallResponse(callApi(params, req, runtime));
}

HangupCallResponse Alibabacloud_Aiccs20191015::Client::hangupCall(shared_ptr<HangupCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupCallWithOptions(request, runtime);
}

HangupOperateResponse Alibabacloud_Aiccs20191015::Client::hangupOperateWithOptions(shared_ptr<HangupOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->immediateHangup)) {
    query->insert(pair<string, bool>("ImmediateHangup", *request->immediateHangup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HangupOperate"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HangupOperateResponse(callApi(params, req, runtime));
}

HangupOperateResponse Alibabacloud_Aiccs20191015::Client::hangupOperate(shared_ptr<HangupOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupOperateWithOptions(request, runtime);
}

HangupThirdCallResponse Alibabacloud_Aiccs20191015::Client::hangupThirdCallWithOptions(shared_ptr<HangupThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HangupThirdCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HangupThirdCallResponse(callApi(params, req, runtime));
}

HangupThirdCallResponse Alibabacloud_Aiccs20191015::Client::hangupThirdCall(shared_ptr<HangupThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupThirdCallWithOptions(request, runtime);
}

HoldCallResponse Alibabacloud_Aiccs20191015::Client::holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HoldCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HoldCallResponse(callApi(params, req, runtime));
}

HoldCallResponse Alibabacloud_Aiccs20191015::Client::holdCall(shared_ptr<HoldCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return holdCallWithOptions(request, runtime);
}

HotlineSessionQueryResponse Alibabacloud_Aiccs20191015::Client::hotlineSessionQueryWithOptions(shared_ptr<HotlineSessionQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acid)) {
    query->insert(pair<string, string>("Acid", *request->acid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->acidList)) {
    query->insert(pair<string, vector<string>>("AcidList", *request->acidList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callResult)) {
    query->insert(pair<string, string>("CallResult", *request->callResult));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callResultList)) {
    query->insert(pair<string, vector<string>>("CallResultList", *request->callResultList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callType)) {
    query->insert(pair<string, long>("CallType", *request->callType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->callTypeList)) {
    query->insert(pair<string, vector<long>>("CallTypeList", *request->callTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->calledNumberList)) {
    query->insert(pair<string, vector<string>>("CalledNumberList", *request->calledNumberList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNumber)) {
    query->insert(pair<string, string>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumberList)) {
    query->insert(pair<string, vector<string>>("CallingNumberList", *request->callingNumberList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->groupIdList)) {
    query->insert(pair<string, vector<long>>("GroupIdList", *request->groupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->memberIdList)) {
    query->insert(pair<string, vector<string>>("MemberIdList", *request->memberIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberName)) {
    query->insert(pair<string, string>("MemberName", *request->memberName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryEndTime)) {
    query->insert(pair<string, long>("QueryEndTime", *request->queryEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryStartTime)) {
    query->insert(pair<string, long>("QueryStartTime", *request->queryStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicerId)) {
    query->insert(pair<string, string>("ServicerId", *request->servicerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->servicerIdList)) {
    query->insert(pair<string, vector<string>>("ServicerIdList", *request->servicerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicerName)) {
    query->insert(pair<string, string>("ServicerName", *request->servicerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotlineSessionQuery"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotlineSessionQueryResponse(callApi(params, req, runtime));
}

HotlineSessionQueryResponse Alibabacloud_Aiccs20191015::Client::hotlineSessionQuery(shared_ptr<HotlineSessionQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hotlineSessionQueryWithOptions(request, runtime);
}

InsertAiOutboundPhoneNumsResponse Alibabacloud_Aiccs20191015::Client::insertAiOutboundPhoneNumsWithOptions(shared_ptr<InsertAiOutboundPhoneNumsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertAiOutboundPhoneNumsShrinkRequest> request = make_shared<InsertAiOutboundPhoneNumsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InsertAiOutboundPhoneNumsRequestDetails>>(tmpReq->details)) {
    request->detailsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->details, make_shared<string>("Details"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->batchVersion)) {
    query->insert(pair<string, long>("BatchVersion", *request->batchVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailsShrink)) {
    query->insert(pair<string, string>("Details", *request->detailsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertAiOutboundPhoneNums"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertAiOutboundPhoneNumsResponse(callApi(params, req, runtime));
}

InsertAiOutboundPhoneNumsResponse Alibabacloud_Aiccs20191015::Client::insertAiOutboundPhoneNums(shared_ptr<InsertAiOutboundPhoneNumsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertAiOutboundPhoneNumsWithOptions(request, runtime);
}

InsertTaskDetailResponse Alibabacloud_Aiccs20191015::Client::insertTaskDetailWithOptions(shared_ptr<InsertTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callInfos)) {
    query->insert(pair<string, string>("CallInfos", *request->callInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outboundTaskId)) {
    query->insert(pair<string, long>("OutboundTaskId", *request->outboundTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertTaskDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertTaskDetailResponse(callApi(params, req, runtime));
}

InsertTaskDetailResponse Alibabacloud_Aiccs20191015::Client::insertTaskDetail(shared_ptr<InsertTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertTaskDetailWithOptions(request, runtime);
}

JoinThirdCallResponse Alibabacloud_Aiccs20191015::Client::joinThirdCallWithOptions(shared_ptr<JoinThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->holdConnectionId)) {
    body->insert(pair<string, string>("HoldConnectionId", *request->holdConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinThirdCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return JoinThirdCallResponse(callApi(params, req, runtime));
}

JoinThirdCallResponse Alibabacloud_Aiccs20191015::Client::joinThirdCall(shared_ptr<JoinThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinThirdCallWithOptions(request, runtime);
}

ListAgentBySkillGroupIdResponse Alibabacloud_Aiccs20191015::Client::listAgentBySkillGroupIdWithOptions(shared_ptr<ListAgentBySkillGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAgentBySkillGroupId"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAgentBySkillGroupIdResponse(callApi(params, req, runtime));
}

ListAgentBySkillGroupIdResponse Alibabacloud_Aiccs20191015::Client::listAgentBySkillGroupId(shared_ptr<ListAgentBySkillGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentBySkillGroupIdWithOptions(request, runtime);
}

ListAiccsRobotResponse Alibabacloud_Aiccs20191015::Client::listAiccsRobotWithOptions(shared_ptr<ListAiccsRobotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotName)) {
    query->insert(pair<string, string>("RobotName", *request->robotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAiccsRobot"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAiccsRobotResponse(callApi(params, req, runtime));
}

ListAiccsRobotResponse Alibabacloud_Aiccs20191015::Client::listAiccsRobot(shared_ptr<ListAiccsRobotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAiccsRobotWithOptions(request, runtime);
}

ListChatRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listChatRecordDetailWithOptions(shared_ptr<ListChatRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChatRecordDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChatRecordDetailResponse(callApi(params, req, runtime));
}

ListChatRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listChatRecordDetail(shared_ptr<ListChatRecordDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChatRecordDetailWithOptions(request, runtime);
}

ListDialogResponse Alibabacloud_Aiccs20191015::Client::listDialogWithOptions(shared_ptr<ListDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->called)) {
    query->insert(pair<string, string>("Called", *request->called));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDialog"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDialogResponse(callApi(params, req, runtime));
}

ListDialogResponse Alibabacloud_Aiccs20191015::Client::listDialog(shared_ptr<ListDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDialogWithOptions(request, runtime);
}

ListHotlineRecordResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordWithOptions(shared_ptr<ListHotlineRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotlineRecord"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotlineRecordResponse(callApi(params, req, runtime));
}

ListHotlineRecordResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecord(shared_ptr<ListHotlineRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineRecordWithOptions(request, runtime);
}

ListHotlineRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordDetailWithOptions(shared_ptr<ListHotlineRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotlineRecordDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotlineRecordDetailResponse(callApi(params, req, runtime));
}

ListHotlineRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordDetail(shared_ptr<ListHotlineRecordDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineRecordDetailWithOptions(request, runtime);
}

ListOutboundPhoneNumberResponse Alibabacloud_Aiccs20191015::Client::listOutboundPhoneNumberWithOptions(shared_ptr<ListOutboundPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOutboundPhoneNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOutboundPhoneNumberResponse(callApi(params, req, runtime));
}

ListOutboundPhoneNumberResponse Alibabacloud_Aiccs20191015::Client::listOutboundPhoneNumber(shared_ptr<ListOutboundPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundPhoneNumberWithOptions(request, runtime);
}

ListRobotCallDialogResponse Alibabacloud_Aiccs20191015::Client::listRobotCallDialogWithOptions(shared_ptr<ListRobotCallDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRobotCallDialog"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRobotCallDialogResponse(callApi(params, req, runtime));
}

ListRobotCallDialogResponse Alibabacloud_Aiccs20191015::Client::listRobotCallDialog(shared_ptr<ListRobotCallDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRobotCallDialogWithOptions(request, runtime);
}

ListRobotNodeResponse Alibabacloud_Aiccs20191015::Client::listRobotNodeWithOptions(shared_ptr<ListRobotNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->robotId)) {
    query->insert(pair<string, long>("RobotId", *request->robotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRobotNode"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRobotNodeResponse(callApi(params, req, runtime));
}

ListRobotNodeResponse Alibabacloud_Aiccs20191015::Client::listRobotNode(shared_ptr<ListRobotNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRobotNodeWithOptions(request, runtime);
}

ListRobotParamsResponse Alibabacloud_Aiccs20191015::Client::listRobotParamsWithOptions(shared_ptr<ListRobotParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->robotId)) {
    query->insert(pair<string, long>("RobotId", *request->robotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRobotParams"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRobotParamsResponse(callApi(params, req, runtime));
}

ListRobotParamsResponse Alibabacloud_Aiccs20191015::Client::listRobotParams(shared_ptr<ListRobotParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRobotParamsWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_Aiccs20191015::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRoles"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRolesResponse(callApi(params, req, runtime));
}

ListRolesResponse Alibabacloud_Aiccs20191015::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

ListSkillGroupResponse Alibabacloud_Aiccs20191015::Client::listSkillGroupWithOptions(shared_ptr<ListSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSkillGroupResponse(callApi(params, req, runtime));
}

ListSkillGroupResponse Alibabacloud_Aiccs20191015::Client::listSkillGroup(shared_ptr<ListSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupWithOptions(request, runtime);
}

ListTaskResponse Alibabacloud_Aiccs20191015::Client::listTaskWithOptions(shared_ptr<ListTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotName)) {
    query->insert(pair<string, string>("RobotName", *request->robotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskResponse(callApi(params, req, runtime));
}

ListTaskResponse Alibabacloud_Aiccs20191015::Client::listTask(shared_ptr<ListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskWithOptions(request, runtime);
}

ListTaskDetailResponse Alibabacloud_Aiccs20191015::Client::listTaskDetailWithOptions(shared_ptr<ListTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->called)) {
    query->insert(pair<string, string>("Called", *request->called));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskDetailResponse(callApi(params, req, runtime));
}

ListTaskDetailResponse Alibabacloud_Aiccs20191015::Client::listTaskDetail(shared_ptr<ListTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskDetailWithOptions(request, runtime);
}

LlmSmartCallResponse Alibabacloud_Aiccs20191015::Client::llmSmartCallWithOptions(shared_ptr<LlmSmartCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<LlmSmartCallShrinkRequest> request = make_shared<LlmSmartCallShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->bizParam)) {
    request->bizParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bizParam, make_shared<string>("BizParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->promptParam)) {
    request->promptParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->promptParam, make_shared<string>("PromptParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->startWordParam)) {
    request->startWordParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startWordParam, make_shared<string>("StartWordParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationCode)) {
    query->insert(pair<string, string>("ApplicationCode", *request->applicationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizParamShrink)) {
    query->insert(pair<string, string>("BizParam", *request->bizParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerNumber)) {
    query->insert(pair<string, string>("CallerNumber", *request->callerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extension)) {
    query->insert(pair<string, string>("Extension", *request->extension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptParamShrink)) {
    query->insert(pair<string, string>("PromptParam", *request->promptParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    query->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startWordParamShrink)) {
    query->insert(pair<string, string>("StartWordParam", *request->startWordParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsSpeed)) {
    query->insert(pair<string, long>("TtsSpeed", *request->ttsSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsVoiceCode)) {
    query->insert(pair<string, string>("TtsVoiceCode", *request->ttsVoiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsVolume)) {
    query->insert(pair<string, long>("TtsVolume", *request->ttsVolume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LlmSmartCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LlmSmartCallResponse(callApi(params, req, runtime));
}

LlmSmartCallResponse Alibabacloud_Aiccs20191015::Client::llmSmartCall(shared_ptr<LlmSmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return llmSmartCallWithOptions(request, runtime);
}

LlmSmartCallEncryptResponse Alibabacloud_Aiccs20191015::Client::llmSmartCallEncryptWithOptions(shared_ptr<LlmSmartCallEncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<LlmSmartCallEncryptShrinkRequest> request = make_shared<LlmSmartCallEncryptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->promptParam)) {
    request->promptParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->promptParam, make_shared<string>("PromptParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->startWordParam)) {
    request->startWordParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startWordParam, make_shared<string>("StartWordParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationCode)) {
    query->insert(pair<string, string>("ApplicationCode", *request->applicationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerNumber)) {
    query->insert(pair<string, string>("CallerNumber", *request->callerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptCalledNumber)) {
    query->insert(pair<string, string>("EncryptCalledNumber", *request->encryptCalledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptParamShrink)) {
    query->insert(pair<string, string>("PromptParam", *request->promptParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startWordParamShrink)) {
    query->insert(pair<string, string>("StartWordParam", *request->startWordParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LlmSmartCallEncrypt"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LlmSmartCallEncryptResponse(callApi(params, req, runtime));
}

LlmSmartCallEncryptResponse Alibabacloud_Aiccs20191015::Client::llmSmartCallEncrypt(shared_ptr<LlmSmartCallEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return llmSmartCallEncryptWithOptions(request, runtime);
}

MakeCallResponse Alibabacloud_Aiccs20191015::Client::makeCallWithOptions(shared_ptr<MakeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNumber)) {
    query->insert(pair<string, string>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandCode)) {
    query->insert(pair<string, string>("CommandCode", *request->commandCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerAccountId)) {
    query->insert(pair<string, string>("OuterAccountId", *request->outerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerAccountType)) {
    query->insert(pair<string, string>("OuterAccountType", *request->outerAccountType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MakeCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MakeCallResponse(callApi(params, req, runtime));
}

MakeCallResponse Alibabacloud_Aiccs20191015::Client::makeCall(shared_ptr<MakeCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeCallWithOptions(request, runtime);
}

MakeDoubleCallResponse Alibabacloud_Aiccs20191015::Client::makeDoubleCallWithOptions(shared_ptr<MakeDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizData)) {
    query->insert(pair<string, string>("BizData", *request->bizData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberPhone)) {
    query->insert(pair<string, string>("MemberPhone", *request->memberPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundCallNumber)) {
    query->insert(pair<string, string>("OutboundCallNumber", *request->outboundCallNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicerPhone)) {
    query->insert(pair<string, string>("ServicerPhone", *request->servicerPhone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MakeDoubleCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MakeDoubleCallResponse(callApi(params, req, runtime));
}

MakeDoubleCallResponse Alibabacloud_Aiccs20191015::Client::makeDoubleCall(shared_ptr<MakeDoubleCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeDoubleCallWithOptions(request, runtime);
}

QueryHotlineInQueueResponse Alibabacloud_Aiccs20191015::Client::queryHotlineInQueueWithOptions(shared_ptr<QueryHotlineInQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHotlineInQueue"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHotlineInQueueResponse(callApi(params, req, runtime));
}

QueryHotlineInQueueResponse Alibabacloud_Aiccs20191015::Client::queryHotlineInQueue(shared_ptr<QueryHotlineInQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotlineInQueueWithOptions(request, runtime);
}

QueryHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::queryHotlineNumberWithOptions(shared_ptr<QueryHotlineNumberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryHotlineNumberShrinkRequest> request = make_shared<QueryHotlineNumberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHotlineNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHotlineNumberResponse(callApi(params, req, runtime));
}

QueryHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::queryHotlineNumber(shared_ptr<QueryHotlineNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotlineNumberWithOptions(request, runtime);
}

QueryOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::queryOutboundTaskWithOptions(shared_ptr<QueryOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ani)) {
    query->insert(pair<string, string>("Ani", *request->ani));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    query->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skillGroup)) {
    query->insert(pair<string, long>("SkillGroup", *request->skillGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOutboundTaskResponse(callApi(params, req, runtime));
}

QueryOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::queryOutboundTask(shared_ptr<QueryOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOutboundTaskWithOptions(request, runtime);
}

QuerySkillGroupsResponse Alibabacloud_Aiccs20191015::Client::querySkillGroupsWithOptions(shared_ptr<QuerySkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->channelType)) {
    query->insert(pair<string, long>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->departmentId)) {
    query->insert(pair<string, long>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySkillGroups"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySkillGroupsResponse(callApi(params, req, runtime));
}

QuerySkillGroupsResponse Alibabacloud_Aiccs20191015::Client::querySkillGroups(shared_ptr<QuerySkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySkillGroupsWithOptions(request, runtime);
}

QueryTaskDetailResponse Alibabacloud_Aiccs20191015::Client::queryTaskDetailWithOptions(shared_ptr<QueryTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ani)) {
    query->insert(pair<string, string>("Ani", *request->ani));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentIdList)) {
    query->insert(pair<string, string>("DepartmentIdList", *request->departmentIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnis)) {
    query->insert(pair<string, string>("Dnis", *request->dnis));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endReasonList)) {
    query->insert(pair<string, string>("EndReasonList", *request->endReasonList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundTaskId)) {
    query->insert(pair<string, string>("OutboundTaskId", *request->outboundTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priorityList)) {
    query->insert(pair<string, string>("PriorityList", *request->priorityList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicerId)) {
    query->insert(pair<string, string>("ServicerId", *request->servicerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicerName)) {
    query->insert(pair<string, string>("ServicerName", *request->servicerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroup)) {
    query->insert(pair<string, string>("SkillGroup", *request->skillGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusList)) {
    query->insert(pair<string, string>("StatusList", *request->statusList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskDetail"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskDetailResponse(callApi(params, req, runtime));
}

QueryTaskDetailResponse Alibabacloud_Aiccs20191015::Client::queryTaskDetail(shared_ptr<QueryTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailWithOptions(request, runtime);
}

QueryTicketsResponse Alibabacloud_Aiccs20191015::Client::queryTicketsWithOptions(shared_ptr<QueryTicketsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryTicketsShrinkRequest> request = make_shared<QueryTicketsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("Extra"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->caseId)) {
    body->insert(pair<string, long>("CaseId", *request->caseId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->caseStatus)) {
    body->insert(pair<string, long>("CaseStatus", *request->caseStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->caseType)) {
    body->insert(pair<string, long>("CaseType", *request->caseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->channelType)) {
    body->insert(pair<string, long>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dealId)) {
    body->insert(pair<string, long>("DealId", *request->dealId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("Extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srType)) {
    body->insert(pair<string, long>("SrType", *request->srType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    body->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->touchId)) {
    body->insert(pair<string, long>("TouchId", *request->touchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTickets"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTicketsResponse(callApi(params, req, runtime));
}

QueryTicketsResponse Alibabacloud_Aiccs20191015::Client::queryTickets(shared_ptr<QueryTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketsWithOptions(request, runtime);
}

QueryTouchListResponse Alibabacloud_Aiccs20191015::Client::queryTouchListWithOptions(shared_ptr<QueryTouchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelId)) {
    body->insert(pair<string, vector<string>>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->channelType)) {
    body->insert(pair<string, vector<long>>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->closeTimeEnd)) {
    body->insert(pair<string, long>("CloseTimeEnd", *request->closeTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->closeTimeStart)) {
    body->insert(pair<string, long>("CloseTimeStart", *request->closeTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->evaluationLevel)) {
    body->insert(pair<string, vector<long>>("EvaluationLevel", *request->evaluationLevel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->evaluationScore)) {
    body->insert(pair<string, vector<long>>("EvaluationScore", *request->evaluationScore));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->evaluationStatus)) {
    body->insert(pair<string, vector<long>>("EvaluationStatus", *request->evaluationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->firstTimeEnd)) {
    body->insert(pair<string, long>("FirstTimeEnd", *request->firstTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->firstTimeStart)) {
    body->insert(pair<string, long>("FirstTimeStart", *request->firstTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->memberId)) {
    body->insert(pair<string, vector<long>>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->memberName)) {
    body->insert(pair<string, vector<string>>("MemberName", *request->memberName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->queueId)) {
    body->insert(pair<string, vector<long>>("QueueId", *request->queueId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->servicerId)) {
    body->insert(pair<string, vector<long>>("ServicerId", *request->servicerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->servicerName)) {
    body->insert(pair<string, vector<string>>("ServicerName", *request->servicerName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->touchId)) {
    body->insert(pair<string, vector<long>>("TouchId", *request->touchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->touchType)) {
    body->insert(pair<string, vector<long>>("TouchType", *request->touchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTouchList"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTouchListResponse(callApi(params, req, runtime));
}

QueryTouchListResponse Alibabacloud_Aiccs20191015::Client::queryTouchList(shared_ptr<QueryTouchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTouchListWithOptions(request, runtime);
}

RemoveAgentFromSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeAgentFromSkillGroupWithOptions(shared_ptr<RemoveAgentFromSkillGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveAgentFromSkillGroupShrinkRequest> request = make_shared<RemoveAgentFromSkillGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentIdsShrink)) {
    query->insert(pair<string, string>("AgentIds", *request->agentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skillGroupId)) {
    query->insert(pair<string, long>("SkillGroupId", *request->skillGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAgentFromSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAgentFromSkillGroupResponse(callApi(params, req, runtime));
}

RemoveAgentFromSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeAgentFromSkillGroup(shared_ptr<RemoveAgentFromSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAgentFromSkillGroupWithOptions(request, runtime);
}

RemoveSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeSkillGroupWithOptions(shared_ptr<RemoveSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroupId)) {
    body->insert(pair<string, string>("SkillGroupId", *request->skillGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSkillGroupResponse(callApi(params, req, runtime));
}

RemoveSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeSkillGroup(shared_ptr<RemoveSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSkillGroupWithOptions(request, runtime);
}

ResetHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::resetHotlineNumberWithOptions(shared_ptr<ResetHotlineNumberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ResetHotlineNumberShrinkRequest> request = make_shared<ResetHotlineNumberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ResetHotlineNumberRequestOutboundRangeList>>(tmpReq->outboundRangeList)) {
    request->outboundRangeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outboundRangeList, make_shared<string>("OutboundRangeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInbound)) {
    body->insert(pair<string, bool>("EnableInbound", *request->enableInbound));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInboundEvaluation)) {
    body->insert(pair<string, bool>("EnableInboundEvaluation", *request->enableInboundEvaluation));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOutbound)) {
    body->insert(pair<string, bool>("EnableOutbound", *request->enableOutbound));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOutboundEvaluation)) {
    body->insert(pair<string, bool>("EnableOutboundEvaluation", *request->enableOutboundEvaluation));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->evaluationLevel)) {
    body->insert(pair<string, long>("EvaluationLevel", *request->evaluationLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotlineNumber)) {
    body->insert(pair<string, string>("HotlineNumber", *request->hotlineNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inboundFlowId)) {
    body->insert(pair<string, long>("InboundFlowId", *request->inboundFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outboundAllDepart)) {
    body->insert(pair<string, bool>("OutboundAllDepart", *request->outboundAllDepart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundRangeListShrink)) {
    body->insert(pair<string, string>("OutboundRangeList", *request->outboundRangeListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetHotlineNumber"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetHotlineNumberResponse(callApi(params, req, runtime));
}

ResetHotlineNumberResponse Alibabacloud_Aiccs20191015::Client::resetHotlineNumber(shared_ptr<ResetHotlineNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetHotlineNumberWithOptions(request, runtime);
}

RestartOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::restartOutboundTaskWithOptions(shared_ptr<RestartOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outboundTaskId)) {
    query->insert(pair<string, long>("OutboundTaskId", *request->outboundTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartOutboundTaskResponse(callApi(params, req, runtime));
}

RestartOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::restartOutboundTask(shared_ptr<RestartOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartOutboundTaskWithOptions(request, runtime);
}

RobotCallResponse Alibabacloud_Aiccs20191015::Client::robotCallWithOptions(shared_ptr<RobotCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledShowNumber)) {
    query->insert(pair<string, string>("CalledShowNumber", *request->calledShowNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->earlyMediaAsr)) {
    query->insert(pair<string, bool>("EarlyMediaAsr", *request->earlyMediaAsr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recordFlag)) {
    query->insert(pair<string, bool>("RecordFlag", *request->recordFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->robotId)) {
    query->insert(pair<string, long>("RobotId", *request->robotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RobotCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RobotCallResponse(callApi(params, req, runtime));
}

RobotCallResponse Alibabacloud_Aiccs20191015::Client::robotCall(shared_ptr<RobotCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return robotCallWithOptions(request, runtime);
}

SendCcoSmartCallResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallWithOptions(shared_ptr<SendCcoSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->actionCodeBreak)) {
    query->insert(pair<string, bool>("ActionCodeBreak", *request->actionCodeBreak));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->actionCodeTimeBreak)) {
    query->insert(pair<string, long>("ActionCodeTimeBreak", *request->actionCodeTimeBreak));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrAlsAmId)) {
    query->insert(pair<string, string>("AsrAlsAmId", *request->asrAlsAmId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrBaseId)) {
    query->insert(pair<string, string>("AsrBaseId", *request->asrBaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrModelId)) {
    query->insert(pair<string, string>("AsrModelId", *request->asrModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrVocabularyId)) {
    query->insert(pair<string, string>("AsrVocabularyId", *request->asrVocabularyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundFileCode)) {
    query->insert(pair<string, string>("BackgroundFileCode", *request->backgroundFileCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundSpeed)) {
    query->insert(pair<string, long>("BackgroundSpeed", *request->backgroundSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundVolume)) {
    query->insert(pair<string, long>("BackgroundVolume", *request->backgroundVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledShowNumber)) {
    query->insert(pair<string, string>("CalledShowNumber", *request->calledShowNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicId)) {
    query->insert(pair<string, string>("DynamicId", *request->dynamicId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->earlyMediaAsr)) {
    query->insert(pair<string, bool>("EarlyMediaAsr", *request->earlyMediaAsr));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableITN)) {
    query->insert(pair<string, bool>("EnableITN", *request->enableITN));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->muteTime)) {
    query->insert(pair<string, long>("MuteTime", *request->muteTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pauseTime)) {
    query->insert(pair<string, long>("PauseTime", *request->pauseTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recordFlag)) {
    query->insert(pair<string, bool>("RecordFlag", *request->recordFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    query->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ttsConf)) {
    query->insert(pair<string, bool>("TtsConf", *request->ttsConf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsSpeed)) {
    query->insert(pair<string, long>("TtsSpeed", *request->ttsSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsStyle)) {
    query->insert(pair<string, string>("TtsStyle", *request->ttsStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttsVolume)) {
    query->insert(pair<string, long>("TtsVolume", *request->ttsVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCodeParam)) {
    query->insert(pair<string, string>("VoiceCodeParam", *request->voiceCodeParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCcoSmartCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCcoSmartCallResponse(callApi(params, req, runtime));
}

SendCcoSmartCallResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCall(shared_ptr<SendCcoSmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCcoSmartCallWithOptions(request, runtime);
}

SendCcoSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallOperateWithOptions(shared_ptr<SendCcoSmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCcoSmartCallOperate"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCcoSmartCallOperateResponse(callApi(params, req, runtime));
}

SendCcoSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallOperate(shared_ptr<SendCcoSmartCallOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCcoSmartCallOperateWithOptions(request, runtime);
}

SendHotlineHeartBeatResponse Alibabacloud_Aiccs20191015::Client::sendHotlineHeartBeatWithOptions(shared_ptr<SendHotlineHeartBeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendHotlineHeartBeat"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendHotlineHeartBeatResponse(callApi(params, req, runtime));
}

SendHotlineHeartBeatResponse Alibabacloud_Aiccs20191015::Client::sendHotlineHeartBeat(shared_ptr<SendHotlineHeartBeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendHotlineHeartBeatWithOptions(request, runtime);
}

StartAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::startAiOutboundTaskWithOptions(shared_ptr<StartAiOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAiOutboundTaskResponse(callApi(params, req, runtime));
}

StartAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::startAiOutboundTask(shared_ptr<StartAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAiOutboundTaskWithOptions(request, runtime);
}

StartCallResponse Alibabacloud_Aiccs20191015::Client::startCallWithOptions(shared_ptr<StartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callee)) {
    body->insert(pair<string, string>("Callee", *request->callee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    body->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCall"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCallResponse(callApi(params, req, runtime));
}

StartCallResponse Alibabacloud_Aiccs20191015::Client::startCall(shared_ptr<StartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallWithOptions(request, runtime);
}

StartCallV2Response Alibabacloud_Aiccs20191015::Client::startCallV2WithOptions(shared_ptr<StartCallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callee)) {
    body->insert(pair<string, string>("Callee", *request->callee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    body->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerType)) {
    body->insert(pair<string, long>("CallerType", *request->callerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCallV2"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCallV2Response(callApi(params, req, runtime));
}

StartCallV2Response Alibabacloud_Aiccs20191015::Client::startCallV2(shared_ptr<StartCallV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallV2WithOptions(request, runtime);
}

StartChatWorkResponse Alibabacloud_Aiccs20191015::Client::startChatWorkWithOptions(shared_ptr<StartChatWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartChatWork"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartChatWorkResponse(callApi(params, req, runtime));
}

StartChatWorkResponse Alibabacloud_Aiccs20191015::Client::startChatWork(shared_ptr<StartChatWorkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startChatWorkWithOptions(request, runtime);
}

StartHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::startHotlineServiceWithOptions(shared_ptr<StartHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartHotlineService"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartHotlineServiceResponse(callApi(params, req, runtime));
}

StartHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::startHotlineService(shared_ptr<StartHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startHotlineServiceWithOptions(request, runtime);
}

StartMicroOutboundResponse Alibabacloud_Aiccs20191015::Client::startMicroOutboundWithOptions(shared_ptr<StartMicroOutboundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNumber)) {
    query->insert(pair<string, string>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandCode)) {
    query->insert(pair<string, string>("CommandCode", *request->commandCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMicroOutbound"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMicroOutboundResponse(callApi(params, req, runtime));
}

StartMicroOutboundResponse Alibabacloud_Aiccs20191015::Client::startMicroOutbound(shared_ptr<StartMicroOutboundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMicroOutboundWithOptions(request, runtime);
}

StartTaskResponse Alibabacloud_Aiccs20191015::Client::startTaskWithOptions(shared_ptr<StartTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->startNow)) {
    query->insert(pair<string, bool>("StartNow", *request->startNow));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTaskResponse(callApi(params, req, runtime));
}

StartTaskResponse Alibabacloud_Aiccs20191015::Client::startTask(shared_ptr<StartTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTaskWithOptions(request, runtime);
}

StopAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::stopAiOutboundTaskWithOptions(shared_ptr<StopAiOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAiOutboundTaskResponse(callApi(params, req, runtime));
}

StopAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::stopAiOutboundTask(shared_ptr<StopAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAiOutboundTaskWithOptions(request, runtime);
}

StopTaskResponse Alibabacloud_Aiccs20191015::Client::stopTaskWithOptions(shared_ptr<StopTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTaskResponse(callApi(params, req, runtime));
}

StopTaskResponse Alibabacloud_Aiccs20191015::Client::stopTask(shared_ptr<StopTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTaskWithOptions(request, runtime);
}

SuspendHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::suspendHotlineServiceWithOptions(shared_ptr<SuspendHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendHotlineService"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendHotlineServiceResponse(callApi(params, req, runtime));
}

SuspendHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::suspendHotlineService(shared_ptr<SuspendHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendHotlineServiceWithOptions(request, runtime);
}

SuspendOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::suspendOutboundTaskWithOptions(shared_ptr<SuspendOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outboundTaskId)) {
    query->insert(pair<string, long>("OutboundTaskId", *request->outboundTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendOutboundTaskResponse(callApi(params, req, runtime));
}

SuspendOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::suspendOutboundTask(shared_ptr<SuspendOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendOutboundTaskWithOptions(request, runtime);
}

TerminateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::terminateAiOutboundTaskWithOptions(shared_ptr<TerminateAiOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateAiOutboundTaskResponse(callApi(params, req, runtime));
}

TerminateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::terminateAiOutboundTask(shared_ptr<TerminateAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateAiOutboundTaskWithOptions(request, runtime);
}

TransferCallToSkillGroupResponse Alibabacloud_Aiccs20191015::Client::transferCallToSkillGroupWithOptions(shared_ptr<TransferCallToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    body->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionId)) {
    body->insert(pair<string, string>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->holdConnectionId)) {
    body->insert(pair<string, string>("HoldConnectionId", *request->holdConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSingleTransfer)) {
    body->insert(pair<string, bool>("IsSingleTransfer", *request->isSingleTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skillGroupId)) {
    body->insert(pair<string, long>("SkillGroupId", *request->skillGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferCallToSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferCallToSkillGroupResponse(callApi(params, req, runtime));
}

TransferCallToSkillGroupResponse Alibabacloud_Aiccs20191015::Client::transferCallToSkillGroup(shared_ptr<TransferCallToSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCallToSkillGroupWithOptions(request, runtime);
}

UpdateAgentResponse Alibabacloud_Aiccs20191015::Client::updateAgentWithOptions(shared_ptr<UpdateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->skillGroupId)) {
    body->insert(pair<string, vector<long>>("SkillGroupId", *request->skillGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->skillGroupIdList)) {
    body->insert(pair<string, vector<long>>("SkillGroupIdList", *request->skillGroupIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAgent"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAgentResponse(callApi(params, req, runtime));
}

UpdateAgentResponse Alibabacloud_Aiccs20191015::Client::updateAgent(shared_ptr<UpdateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAgentWithOptions(request, runtime);
}

UpdateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::updateAiOutboundTaskWithOptions(shared_ptr<UpdateAiOutboundTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAiOutboundTaskShrinkRequest> request = make_shared<UpdateAiOutboundTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->outboundNums)) {
    request->outboundNumsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outboundNums, make_shared<string>("OutboundNums"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAiOutboundTaskRequestRecallRule>(tmpReq->recallRule)) {
    request->recallRuleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recallRule, make_shared<string>("RecallRule"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrentRate)) {
    query->insert(pair<string, long>("ConcurrentRate", *request->concurrentRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionTime)) {
    query->insert(pair<string, string>("ExecutionTime", *request->executionTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->forecastCallRate)) {
    query->insert(pair<string, double>("ForecastCallRate", *request->forecastCallRate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numRepeated)) {
    query->insert(pair<string, long>("NumRepeated", *request->numRepeated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundNumsShrink)) {
    query->insert(pair<string, string>("OutboundNums", *request->outboundNumsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallRuleShrink)) {
    query->insert(pair<string, string>("RecallRule", *request->recallRuleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAiOutboundTask"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAiOutboundTaskResponse(callApi(params, req, runtime));
}

UpdateAiOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::updateAiOutboundTask(shared_ptr<UpdateAiOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAiOutboundTaskWithOptions(request, runtime);
}

UpdateDepartmentResponse Alibabacloud_Aiccs20191015::Client::updateDepartmentWithOptions(shared_ptr<UpdateDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->departmentId)) {
    query->insert(pair<string, long>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentName)) {
    query->insert(pair<string, string>("DepartmentName", *request->departmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDepartment"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDepartmentResponse(callApi(params, req, runtime));
}

UpdateDepartmentResponse Alibabacloud_Aiccs20191015::Client::updateDepartment(shared_ptr<UpdateDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDepartmentWithOptions(request, runtime);
}

UpdateOuterAccountResponse Alibabacloud_Aiccs20191015::Client::updateOuterAccountWithOptions(shared_ptr<UpdateOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOuterAccount"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOuterAccountResponse(callApi(params, req, runtime));
}

UpdateOuterAccountResponse Alibabacloud_Aiccs20191015::Client::updateOuterAccount(shared_ptr<UpdateOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOuterAccountWithOptions(request, runtime);
}

UpdateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::updateSkillGroupWithOptions(shared_ptr<UpdateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skillGroupId)) {
    query->insert(pair<string, long>("SkillGroupId", *request->skillGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroupName)) {
    query->insert(pair<string, string>("SkillGroupName", *request->skillGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSkillGroup"))},
    {"version", boost::any(string("2019-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSkillGroupResponse(callApi(params, req, runtime));
}

UpdateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::updateSkillGroup(shared_ptr<UpdateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSkillGroupWithOptions(request, runtime);
}

