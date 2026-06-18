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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "aiccs.aliyuncs.com"},
    {"us-east-1" , "aiccs.aliyuncs.com"},
    {"me-east-1" , "aiccs.aliyuncs.com"},
    {"eu-west-1" , "aiccs.aliyuncs.com"},
    {"eu-central-1" , "aiccs.aliyuncs.com"},
    {"cn-zhangjiakou" , "aiccs.aliyuncs.com"},
    {"cn-wulanchabu" , "aiccs.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "aiccs.aliyuncs.com"},
    {"cn-shenzhen" , "aiccs.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "aiccs.aliyuncs.com"},
    {"cn-shanghai" , "aiccs.aliyuncs.com"},
    {"cn-qingdao" , "aiccs.aliyuncs.com"},
    {"cn-north-2-gov-1" , "aiccs.aliyuncs.com"},
    {"cn-huhehaote" , "aiccs.aliyuncs.com"},
    {"cn-hongkong" , "aiccs.aliyuncs.com"},
    {"cn-hangzhou-finance" , "aiccs.aliyuncs.com"},
    {"cn-hangzhou" , "aiccs.aliyuncs.com"},
    {"cn-chengdu" , "aiccs.aliyuncs.com"},
    {"cn-beijing-finance-1" , "aiccs.aliyuncs.com"},
    {"cn-beijing" , "aiccs.aliyuncs.com"},
    {"ap-southeast-5" , "aiccs.aliyuncs.com"},
    {"ap-southeast-3" , "aiccs.aliyuncs.com"},
    {"ap-southeast-1" , "aiccs.aliyuncs.com"},
    {"ap-northeast-1" , "aiccs.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Invoke the AddHotlineNumber API to add a hotline number.
 *
 * @description > Hotline numbers are for inbound and outbound calls only.
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
    request.setOutboundRangeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutboundRangeList(), "OutboundRangeList", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableInbound()) {
    body["EnableInbound"] = request.getEnableInbound();
  }

  if (!!request.hasEnableInboundEvaluation()) {
    body["EnableInboundEvaluation"] = request.getEnableInboundEvaluation();
  }

  if (!!request.hasEnableOutbound()) {
    body["EnableOutbound"] = request.getEnableOutbound();
  }

  if (!!request.hasEnableOutboundEvaluation()) {
    body["EnableOutboundEvaluation"] = request.getEnableOutboundEvaluation();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.getEvaluationLevel();
  }

  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.getHotlineNumber();
  }

  if (!!request.hasInboundFlowId()) {
    body["InboundFlowId"] = request.getInboundFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundAllDepart()) {
    body["OutboundAllDepart"] = request.getOutboundAllDepart();
  }

  if (!!request.hasOutboundRangeListShrink()) {
    body["OutboundRangeList"] = request.getOutboundRangeListShrink();
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
 * @summary Invoke the AddHotlineNumber API to add a hotline number.
 *
 * @description > Hotline numbers are for inbound and outbound calls only.
 *
 * @param request AddHotlineNumberRequest
 * @return AddHotlineNumberResponse
 */
AddHotlineNumberResponse Client::addHotlineNumber(const AddHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHotlineNumberWithOptions(request, runtime);
}

/**
 * @summary Adds one or more inbound numbers.
 *
 * @param tmpReq AddInboundNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInboundNumberResponse
 */
AddInboundNumberResponse Client::addInboundNumberWithOptions(const AddInboundNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddInboundNumberShrinkRequest request = AddInboundNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInboundNumbers()) {
    request.setInboundNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInboundNumbers(), "InboundNumbers", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasInboundNumbersShrink()) {
    query["InboundNumbers"] = request.getInboundNumbersShrink();
  }

  if (!!request.hasInboundType()) {
    query["InboundType"] = request.getInboundType();
  }

  if (!!request.hasLineCode()) {
    query["LineCode"] = request.getLineCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddInboundNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInboundNumberResponse>();
}

/**
 * @summary Adds one or more inbound numbers.
 *
 * @param request AddInboundNumberRequest
 * @return AddInboundNumberResponse
 */
AddInboundNumberResponse Client::addInboundNumber(const AddInboundNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInboundNumberWithOptions(request, runtime);
}

/**
 * @summary Adds a large language model.
 *
 * @param tmpReq AddLargeModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLargeModelResponse
 */
AddLargeModelResponse Client::addLargeModelWithOptions(const AddLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddLargeModelShrinkRequest request = AddLargeModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBaseModel()) {
    request.setBaseModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBaseModel(), "BaseModel", "json"));
  }

  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasBaseModelShrink()) {
    query["BaseModel"] = request.getBaseModelShrink();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelUrl()) {
    query["ModelUrl"] = request.getModelUrl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemperature()) {
    query["Temperature"] = request.getTemperature();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasTopP()) {
    query["TopP"] = request.getTopP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddLargeModel"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddLargeModelResponse>();
}

/**
 * @summary Adds a large language model.
 *
 * @param request AddLargeModelRequest
 * @return AddLargeModelResponse
 */
AddLargeModelResponse Client::addLargeModel(const AddLargeModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addLargeModelWithOptions(request, runtime);
}

/**
 * @summary Add a model application
 *
 * @param tmpReq AddModelApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddModelApplicationResponse
 */
AddModelApplicationResponse Client::addModelApplicationWithOptions(const AddModelApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddModelApplicationShrinkRequest request = AddModelApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTtsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCps()) {
    query["ApplicationCps"] = request.getApplicationCps();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasCallConnectedTriggerModel()) {
    query["CallConnectedTriggerModel"] = request.getCallConnectedTriggerModel();
  }

  if (!!request.hasDyvmsSceneName()) {
    query["DyvmsSceneName"] = request.getDyvmsSceneName();
  }

  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasModelVersion()) {
    query["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasMuteActive()) {
    query["MuteActive"] = request.getMuteActive();
  }

  if (!!request.hasMuteDuration()) {
    query["MuteDuration"] = request.getMuteDuration();
  }

  if (!!request.hasMuteHangupNum()) {
    query["MuteHangupNum"] = request.getMuteHangupNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasQualificationName()) {
    query["QualificationName"] = request.getQualificationName();
  }

  if (!!request.hasRecordingFile()) {
    query["RecordingFile"] = request.getRecordingFile();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSpeechContent()) {
    query["SpeechContent"] = request.getSpeechContent();
  }

  if (!!request.hasSpeechId()) {
    query["SpeechId"] = request.getSpeechId();
  }

  if (!!request.hasStartWord()) {
    query["StartWord"] = request.getStartWord();
  }

  if (!!request.hasStartWordType()) {
    query["StartWordType"] = request.getStartWordType();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.getTtsConfigShrink();
  }

  if (!!request.hasUsageDesc()) {
    query["UsageDesc"] = request.getUsageDesc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddModelApplication"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddModelApplicationResponse>();
}

/**
 * @summary Add a model application
 *
 * @param request AddModelApplicationRequest
 * @return AddModelApplicationResponse
 */
AddModelApplicationResponse Client::addModelApplication(const AddModelApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addModelApplicationWithOptions(request, runtime);
}

/**
 * @summary Invoke AddOuterAccount to add an external account.
 *
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
 * @summary Invoke AddOuterAccount to add an external account.
 *
 * @param request AddOuterAccountRequest
 * @return AddOuterAccountResponse
 */
AddOuterAccountResponse Client::addOuterAccount(const AddOuterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addOuterAccountWithOptions(request, runtime);
}

/**
 * @summary Invoke AddSkillGroup to create an external skill group.
 *
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
 * @summary Invoke AddSkillGroup to create an external skill group.
 *
 * @param request AddSkillGroupRequest
 * @return AddSkillGroupResponse
 */
AddSkillGroupResponse Client::addSkillGroup(const AddSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the AiccsSmartCall API to initiate an Intelligent Speech Interaction call.
 *
 * @param request AiccsSmartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiccsSmartCallResponse
 */
AiccsSmartCallResponse Client::aiccsSmartCallWithOptions(const AiccsSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionCodeBreak()) {
    query["ActionCodeBreak"] = request.getActionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.getActionCodeTimeBreak();
  }

  if (!!request.hasAsrAlsAmId()) {
    query["AsrAlsAmId"] = request.getAsrAlsAmId();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.getAsrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasAsrVocabularyId()) {
    query["AsrVocabularyId"] = request.getAsrVocabularyId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.getBackgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.getBackgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.getBackgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.getDynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.getEarlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.getEnableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.getMuteTime();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.getPauseTime();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.getRecordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.getTtsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.getTtsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.getTtsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.getTtsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.getVoiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
 * @summary Invoke the AiccsSmartCall API to initiate an Intelligent Speech Interaction call.
 *
 * @param request AiccsSmartCallRequest
 * @return AiccsSmartCallResponse
 */
AiccsSmartCallResponse Client::aiccsSmartCall(const AiccsSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aiccsSmartCallWithOptions(request, runtime);
}

/**
 * @summary Invoke the AiccsSmartCallOperate API to initiate a specified action during an Intelligent outbound call. This API is only used for scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
 *
 * @param request AiccsSmartCallOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiccsSmartCallOperateResponse
 */
AiccsSmartCallOperateResponse Client::aiccsSmartCallOperateWithOptions(const AiccsSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Invoke the AiccsSmartCallOperate API to initiate a specified action during an Intelligent outbound call. This API is only used for scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
 *
 * @param request AiccsSmartCallOperateRequest
 * @return AiccsSmartCallOperateResponse
 */
AiccsSmartCallOperateResponse Client::aiccsSmartCallOperate(const AiccsSmartCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aiccsSmartCallOperateWithOptions(request, runtime);
}

/**
 * @summary Invoke AnswerCall to answer an incoming call.
 *
 * @param request AnswerCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCallWithOptions(const AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Invoke AnswerCall to answer an incoming call.
 *
 * @param request AnswerCallRequest
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCall(const AnswerCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return answerCallWithOptions(request, runtime);
}

/**
 * @summary Append job details.
 *
 * @description - After creating an Intelligent Contact Robot calling job, you can invoke this API to append job details.
 * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
 * - If you do not have a successfully created Intelligent Contact Robot calling job, you can click **Create Job** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request AttachTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachTaskResponse
 */
AttachTaskResponse Client::attachTaskWithOptions(const AttachTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallString()) {
    query["CallString"] = request.getCallString();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Append job details.
 *
 * @description - After creating an Intelligent Contact Robot calling job, you can invoke this API to append job details.
 * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
 * - If you do not have a successfully created Intelligent Contact Robot calling job, you can click **Create Job** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    query["AnalysisIds"] = request.getAnalysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    query["ChannelTouchType"] = request.getChannelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    query["CheckFreqType"] = request.getCheckFreqType();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.getInstanceList();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.getTimeRangeStart();
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
 * @summary This operation cancels calls from a call task. You cannot cancel a call if its detail record is already in the pending call queue or is in progress.
 *
 * @description - Use this operation to cancel calls. Alternatively, you can manually cancel calls in the console by navigating to **Call Task Management** > **Manage** > **Execution Records** > **Pending**.
 * - Before calling this operation, ensure you have created a call task and imported callee data.
 * - If you have not created a call task, you can create one and import callee data on the **Call Task Management** page. You can also call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926815.html) and [ImportTaskNumberDatas]() operations.
 * - Canceling a call task may affect your business. Please proceed with caution.
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
    request.setDetailIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetailIdList(), "DetailIdList", "json"));
  }

  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasDetailIdListShrink()) {
    query["DetailIdList"] = request.getDetailIdListShrink();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.getEncryptionType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.getPhoneNumbersShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary This operation cancels calls from a call task. You cannot cancel a call if its detail record is already in the pending call queue or is in progress.
 *
 * @description - Use this operation to cancel calls. Alternatively, you can manually cancel calls in the console by navigating to **Call Task Management** > **Manage** > **Execution Records** > **Pending**.
 * - Before calling this operation, ensure you have created a call task and imported callee data.
 * - If you have not created a call task, you can create one and import callee data on the **Call Task Management** page. You can also call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926815.html) and [ImportTaskNumberDatas]() operations.
 * - Canceling a call task may affect your business. Please proceed with caution.
 *
 * @param request CancelAiCallDetailsRequest
 * @return CancelAiCallDetailsResponse
 */
CancelAiCallDetailsResponse Client::cancelAiCallDetails(const CancelAiCallDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAiCallDetailsWithOptions(request, runtime);
}

/**
 * @summary Cancel an Intelligent Contact Robot calling job.
 *
 * @description - You can invoke this API to cancel an Intelligent Contact Robot calling job, or manually cancel the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - After an Intelligent Contact Robot calling job is canceled, it cannot be started again. Proceed with caution.
 * - If you want to pause a job and restart it later, you can manually pause the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or pause it by using the [StopTask](https://help.aliyun.com/document_detail/2718006.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CancelTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Cancel an Intelligent Contact Robot calling job.
 *
 * @description - You can invoke this API to cancel an Intelligent Contact Robot calling job, or manually cancel the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - After an Intelligent Contact Robot calling job is canceled, it cannot be started again. Proceed with caution.
 * - If you want to pause a job and restart it later, you can manually pause the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or pause it by using the [StopTask](https://help.aliyun.com/document_detail/2718006.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelTaskWithOptions(request, runtime);
}

/**
 * @summary Invoke ChangeChatAgentStatus to modify the Live Support status.
 *
 * @description > Currently, only changing the Live Support status to offline is supported.
 *
 * @param request ChangeChatAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeChatAgentStatusResponse
 */
ChangeChatAgentStatusResponse Client::changeChatAgentStatusWithOptions(const ChangeChatAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMethod()) {
    body["Method"] = request.getMethod();
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
 * @summary Invoke ChangeChatAgentStatus to modify the Live Support status.
 *
 * @description > Currently, only changing the Live Support status to offline is supported.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Create an agent account in the Cloud Customer Service System and return the agent ID.
 *
 * @description - Before calling this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify skill group information, refer to the guidance in [Request Parameters](#api-detail-35).  
 * - You can manage agents by calling [DeleteAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-deleteagent) to delete an agent or [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update agent data.  
 * ### QPS Limit
 * - Per-user call frequency: No rate limiting.  
 * - API call frequency: 100 queries per second (QPS).  
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  json bodyFlat = {};
  if (!!request.hasSkillGroupId()) {
    bodyFlat["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasSkillGroupIdList()) {
    bodyFlat["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary Create an agent account in the Cloud Customer Service System and return the agent ID.
 *
 * @description - Before calling this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify skill group information, refer to the guidance in [Request Parameters](#api-detail-35).  
 * - You can manage agents by calling [DeleteAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-deleteagent) to delete an agent or [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update agent data.  
 * ### QPS Limit
 * - Per-user call frequency: No rate limiting.  
 * - API call frequency: 100 queries per second (QPS).  
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a call task.
 *
 * @description Before creating a call task, make a test call with an agent to ensure the results meet your requirements.
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
    request.setCallDayShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallDay(), "CallDay", "json"));
  }

  if (!!tmpReq.hasCallRetryReason()) {
    request.setCallRetryReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallRetryReason(), "CallRetryReason", "json"));
  }

  if (!!tmpReq.hasCallTime()) {
    request.setCallTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallTime(), "CallTime", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasCallDayShrink()) {
    query["CallDay"] = request.getCallDayShrink();
  }

  if (!!request.hasCallRetryInterval()) {
    query["CallRetryInterval"] = request.getCallRetryInterval();
  }

  if (!!request.hasCallRetryReasonShrink()) {
    query["CallRetryReason"] = request.getCallRetryReasonShrink();
  }

  if (!!request.hasCallRetryTimes()) {
    query["CallRetryTimes"] = request.getCallRetryTimes();
  }

  if (!!request.hasCallTimeShrink()) {
    query["CallTime"] = request.getCallTimeShrink();
  }

  if (!!request.hasLineEncoding()) {
    query["LineEncoding"] = request.getLineEncoding();
  }

  if (!!request.hasLinePhoneNum()) {
    query["LinePhoneNum"] = request.getLinePhoneNum();
  }

  if (!!request.hasMissCallRetry()) {
    query["MissCallRetry"] = request.getMissCallRetry();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneType()) {
    query["PhoneType"] = request.getPhoneType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStartType()) {
    query["StartType"] = request.getStartType();
  }

  if (!!request.hasTaskCps()) {
    query["TaskCps"] = request.getTaskCps();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStartTime()) {
    query["TaskStartTime"] = request.getTaskStartTime();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.getVirtualNumber();
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
 * @summary Creates a call task.
 *
 * @description Before creating a call task, make a test call with an agent to ensure the results meet your requirements.
 *
 * @param request CreateAiCallTaskRequest
 * @return CreateAiCallTaskResponse
 */
CreateAiCallTaskResponse Client::createAiCallTask(const CreateAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary Create an Intelligent Outbound Call Job. You can configure the Task Type, job name, outbound caller ID, callee number deduplication policy, and other settings when creating the job.
 *
 * @description - The **Data** field in the response parameters of this API is the job ID.  
 * - After creating an Intelligent Outbound Call Job, if you need to make updates, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API to update the outbound call job.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 20 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    request.setOutboundNumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutboundNums(), "OutboundNums", "json"));
  }

  if (!!tmpReq.hasRecallRule()) {
    request.setRecallRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecallRule(), "RecallRule", "json"));
  }

  json query = {};
  if (!!request.hasConcurrentRate()) {
    query["ConcurrentRate"] = request.getConcurrentRate();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExecutionTime()) {
    query["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasForecastCallRate()) {
    query["ForecastCallRate"] = request.getForecastCallRate();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.getHandlerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumRepeated()) {
    query["NumRepeated"] = request.getNumRepeated();
  }

  if (!!request.hasOutboundNumsShrink()) {
    query["OutboundNums"] = request.getOutboundNumsShrink();
  }

  if (!!request.hasRecallRuleShrink()) {
    query["RecallRule"] = request.getRecallRuleShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Create an Intelligent Outbound Call Job. You can configure the Task Type, job name, outbound caller ID, callee number deduplication policy, and other settings when creating the job.
 *
 * @description - The **Data** field in the response parameters of this API is the job ID.  
 * - After creating an Intelligent Outbound Call Job, if you need to make updates, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API to update the outbound call job.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 20 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateAiOutboundTaskRequest
 * @return CreateAiOutboundTaskResponse
 */
CreateAiOutboundTaskResponse Client::createAiOutboundTask(const CreateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a batch for an Intelligent Outbound Calling job based on the instance ID and job ID, enabling data under the job to be queried by batch.
 *
 * @description Before invoking this API, we recommend that you confirm the instance ID and job ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
 * ### QPS limit
 * - Per-user invocation frequency: 20 queries per second (QPS).
 * - API-wide invocation frequency: 20 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request CreateAiOutboundTaskBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAiOutboundTaskBatchResponse
 */
CreateAiOutboundTaskBatchResponse Client::createAiOutboundTaskBatchWithOptions(const CreateAiOutboundTaskBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Creates a batch for an Intelligent Outbound Calling job based on the instance ID and job ID, enabling data under the job to be queried by batch.
 *
 * @description Before invoking this API, we recommend that you confirm the instance ID and job ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
 * ### QPS limit
 * - Per-user invocation frequency: 20 queries per second (QPS).
 * - API-wide invocation frequency: 20 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request CreateAiOutboundTaskBatchRequest
 * @return CreateAiOutboundTaskBatchResponse
 */
CreateAiOutboundTaskBatchResponse Client::createAiOutboundTaskBatch(const CreateAiOutboundTaskBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAiOutboundTaskBatchWithOptions(request, runtime);
}

/**
 * @summary Creates department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department name. Upon successful creation, the department ID is returned.
 *
 * @description - If you need to update department information, you can invoke the [UpdateDepartment](https://help.aliyun.com/document_detail/2717977.html) API.
 * - After successfully creating department information by invoking this API, the **Data** field in the response contains the department ID. If you need to query the department ID later, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request CreateDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDepartmentResponse
 */
CreateDepartmentResponse Client::createDepartmentWithOptions(const CreateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.getDepartmentName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Creates department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department name. Upon successful creation, the department ID is returned.
 *
 * @description - If you need to update department information, you can invoke the [UpdateDepartment](https://help.aliyun.com/document_detail/2717977.html) API.
 * - After successfully creating department information by invoking this API, the **Data** field in the response contains the department ID. If you need to query the department ID later, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
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
    query["Ani"] = request.getAni();
  }

  if (!!request.hasCallInfos()) {
    query["CallInfos"] = request.getCallInfos();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExtAttrs()) {
    query["ExtAttrs"] = request.getExtAttrs();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.getRetryInterval();
  }

  if (!!request.hasRetryTime()) {
    query["RetryTime"] = request.getRetryTime();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.getSkillGroup();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
    body["AnalysisIds"] = request.getAnalysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    body["ChannelTouchType"] = request.getChannelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    body["CheckFreqType"] = request.getCheckFreqType();
  }

  if (!!request.hasDepList()) {
    body["DepList"] = request.getDepList();
  }

  if (!!request.hasGroupList()) {
    body["GroupList"] = request.getGroupList();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasScopeType()) {
    body["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasServicerList()) {
    body["ServicerList"] = request.getServicerList();
  }

  if (!!request.hasTimeRangeEnd()) {
    body["TimeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    body["TimeRangeStart"] = request.getTimeRangeStart();
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyWords()) {
    body["KeyWords"] = request.getKeyWords();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.getMatchType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuleTag()) {
    body["RuleTag"] = request.getRuleTag();
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
 * @summary Create a skill group based on the skill group name and channel type.
 *
 * @description - This API allows you to define information such as the external display name and description of the skill group. For details, see [Request Parameters](#api-detail-35).
 * - The **Data** parameter returned by this API is the ID of the successfully created skill group.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroupWithOptions(const CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDepartmentId()) {
    body["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupName()) {
    body["SkillGroupName"] = request.getSkillGroupName();
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
 * @summary Create a skill group based on the skill group name and channel type.
 *
 * @description - This API allows you to define information such as the external display name and description of the skill group. For details, see [Request Parameters](#api-detail-35).
 * - The **Data** parameter returned by this API is the ID of the successfully created skill group.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateSkillGroupRequest
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroup(const CreateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Create an Artificial Intelligence Cloud Call Service robot outbound calling job.
 *
 * @description - You can invoke this API to create a job, or create one in the **Artificial Intelligence Cloud Call Service console** > **Outbound Robot (Standard Edition)** > [Task Management](https://aiccs.console.aliyun.com/job/list) by clicking **Create Job**.  
 * - After invoking this API, the **Data** field in the response contains the unique job ID of the robot outbound calling task.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallString()) {
    query["CallString"] = request.getCallString();
  }

  if (!!request.hasCallStringType()) {
    query["CallStringType"] = request.getCallStringType();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetryCount()) {
    query["RetryCount"] = request.getRetryCount();
  }

  if (!!request.hasRetryFlag()) {
    query["RetryFlag"] = request.getRetryFlag();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.getRetryInterval();
  }

  if (!!request.hasRetryStatusCode()) {
    query["RetryStatusCode"] = request.getRetryStatusCode();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.getRobotId();
  }

  if (!!request.hasSeatCount()) {
    query["SeatCount"] = request.getSeatCount();
  }

  if (!!request.hasStartNow()) {
    query["StartNow"] = request.getStartNow();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasWorkDay()) {
    query["WorkDay"] = request.getWorkDay();
  }

  if (!!request.hasWorkTimeList()) {
    query["WorkTimeList"] = request.getWorkTimeList();
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
 * @summary Create an Artificial Intelligence Cloud Call Service robot outbound calling job.
 *
 * @description - You can invoke this API to create a job, or create one in the **Artificial Intelligence Cloud Call Service console** > **Outbound Robot (Standard Edition)** > [Task Management](https://aiccs.console.aliyun.com/job/list) by clicking **Create Job**.  
 * - After invoking this API, the **Data** field in the response contains the unique job ID of the robot outbound calling task.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskWithOptions(request, runtime);
}

/**
 * @summary Create an agent that enables password-free login to the Cloud Customer Service System based on a User Account.
 *
 * @param request CreateThirdSsoAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateThirdSsoAgentResponse
 */
CreateThirdSsoAgentResponse Client::createThirdSsoAgentWithOptions(const CreateThirdSsoAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.getAccountId();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  json bodyFlat = {};
  if (!!request.hasRoleIds()) {
    bodyFlat["RoleIds"] = request.getRoleIds();
  }

  if (!!request.hasSkillGroupIds()) {
    bodyFlat["SkillGroupIds"] = request.getSkillGroupIds();
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
 * @summary Create an agent that enables password-free login to the Cloud Customer Service System based on a User Account.
 *
 * @param request CreateThirdSsoAgentRequest
 * @return CreateThirdSsoAgentResponse
 */
CreateThirdSsoAgentResponse Client::createThirdSsoAgent(const CreateThirdSsoAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createThirdSsoAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes an agent account in the Cloud Customer Service System based on the instance ID and agent account name.
 *
 * @description - Before deletion, we recommend that you confirm the agent account name and instance ID to be deleted. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
 * - If an agent is accidentally deleted, you can invoke the [CreateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createagent) API to recreate the agent.
 * > If an account is re-added after deletion, the agent ID remains unchanged.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request DeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Deletes an agent account in the Cloud Customer Service System based on the instance ID and agent account name.
 *
 * @description - Before deletion, we recommend that you confirm the agent account name and instance ID to be deleted. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
 * - If an agent is accidentally deleted, you can invoke the [CreateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createagent) API to recreate the agent.
 * > If an account is re-added after deletion, the agent ID remains unchanged.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes an Intelligent Outbound Calling job by instance ID and job ID. After deletion, the job will no longer appear in the outbound calling job list.
 *
 * @description >Notice: Deletion is a sensitive operation. Proceed with caution.
 * - Before deletion, we recommend that you confirm the job ID and related information. You can call the [GetAiOutboundTaskList](https://help.aliyun.com/document_detail/2718026.html) API to view the outbound calling job list and verify the task name, description, and corresponding job ID.
 * - If you need to recreate an Intelligent Outbound Calling job, you can call the [CreateAiOutboundTask](https://help.aliyun.com/document_detail/312260.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request DeleteAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAiOutboundTaskResponse
 */
DeleteAiOutboundTaskResponse Client::deleteAiOutboundTaskWithOptions(const DeleteAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Deletes an Intelligent Outbound Calling job by instance ID and job ID. After deletion, the job will no longer appear in the outbound calling job list.
 *
 * @description >Notice: Deletion is a sensitive operation. Proceed with caution.
 * - Before deletion, we recommend that you confirm the job ID and related information. You can call the [GetAiOutboundTaskList](https://help.aliyun.com/document_detail/2718026.html) API to view the outbound calling job list and verify the task name, description, and corresponding job ID.
 * - If you need to recreate an Intelligent Outbound Calling job, you can call the [CreateAiOutboundTask](https://help.aliyun.com/document_detail/312260.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request DeleteAiOutboundTaskRequest
 * @return DeleteAiOutboundTaskResponse
 */
DeleteAiOutboundTaskResponse Client::deleteAiOutboundTask(const DeleteAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
 *
 * @description - Deletion is a sensitive operation. Proceed with caution.
 * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
 * - If you accidentally delete department information, you can call the [CreateDepartment](https://help.aliyun.com/document_detail/2717974.html) API to recreate it.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request DeleteDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartmentWithOptions(const DeleteDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Deletes department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
 *
 * @description - Deletion is a sensitive operation. Proceed with caution.
 * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
 * - If you accidentally delete department information, you can call the [CreateDepartment](https://help.aliyun.com/document_detail/2717974.html) API to recreate it.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request DeleteDepartmentRequest
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartment(const DeleteDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDepartmentWithOptions(request, runtime);
}

/**
 * @summary Invoke the DeleteHotlineNumber API to delete a configured hotline number.
 *
 * @param request DeleteHotlineNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotlineNumberResponse
 */
DeleteHotlineNumberResponse Client::deleteHotlineNumberWithOptions(const DeleteHotlineNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.getHotlineNumber();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke the DeleteHotlineNumber API to delete a configured hotline number.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.getOutboundTaskId();
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
 * @summary Invoke DeleteOuterAccount to delete an external account by its external Account ID.
 *
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
 * @summary Invoke DeleteOuterAccount to delete an external account by its external Account ID.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Deletes an external skill group based on the skill group ID and skill group channel type.
 *
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
 * @summary Deletes an external skill group based on the skill group ID and skill group channel type.
 *
 * @param request DeleteSkillGroupRequest
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroup(const DeleteSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the DescribeRecordData API to retrieve call information.
 *
 * @param request DescribeRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordDataResponse
 */
DescribeRecordDataResponse Client::describeRecordDataWithOptions(const DescribeRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasAcid()) {
    query["Acid"] = request.getAcid();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecLevel()) {
    query["SecLevel"] = request.getSecLevel();
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
 * @summary Invoke the DescribeRecordData API to retrieve call information.
 *
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
    query["AnalysisIds"] = request.getAnalysisIds();
  }

  if (!!request.hasChannelTouchType()) {
    query["ChannelTouchType"] = request.getChannelTouchType();
  }

  if (!!request.hasCheckFreqType()) {
    query["CheckFreqType"] = request.getCheckFreqType();
  }

  if (!!request.hasDepList()) {
    query["DepList"] = request.getDepList();
  }

  if (!!request.hasGroupList()) {
    query["GroupList"] = request.getGroupList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectVersion()) {
    query["ProjectVersion"] = request.getProjectVersion();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasServicerList()) {
    query["ServicerList"] = request.getServicerList();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.getTimeRangeStart();
  }

  json body = {};
  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyWords()) {
    body["KeyWords"] = request.getKeyWords();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.getMatchType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasQualityRuleId()) {
    body["QualityRuleId"] = request.getQualityRuleId();
  }

  if (!!request.hasRuleTag()) {
    body["RuleTag"] = request.getRuleTag();
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
    query["AnalysisTypes"] = request.getAnalysisTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke EncryptPhoneNum to encrypt the User\\"s Phone number.
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
 * @summary Invoke EncryptPhoneNum to encrypt the User\\"s Phone number.
 *
 * @param request EncryptPhoneNumRequest
 * @return EncryptPhoneNumResponse
 */
EncryptPhoneNumResponse Client::encryptPhoneNum(const EncryptPhoneNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return encryptPhoneNumWithOptions(request, runtime);
}

/**
 * @summary Retrieve or recover a call.
 *
 * @param request FetchCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchCallResponse
 */
FetchCallResponse Client::fetchCallWithOptions(const FetchCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.getHoldConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Retrieve or recover a call.
 *
 * @param request FetchCallRequest
 * @return FetchCallResponse
 */
FetchCallResponse Client::fetchCall(const FetchCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchCallWithOptions(request, runtime);
}

/**
 * @summary End the hotline service by instance ID and agent account name.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user API call frequency: No rate limiting.
 * - API frequency: 100 calls per second.
 * > If the total number of calls from multiple users exceeds the API frequency limit, throttling will be triggered.
 *
 * @param request FinishHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishHotlineServiceResponse
 */
FinishHotlineServiceResponse Client::finishHotlineServiceWithOptions(const FinishHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary End the hotline service by instance ID and agent account name.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user API call frequency: No rate limiting.
 * - API frequency: 100 calls per second.
 * > If the total number of calls from multiple users exceeds the API frequency limit, throttling will be triggered.
 *
 * @param request FinishHotlineServiceRequest
 * @return FinishHotlineServiceResponse
 */
FinishHotlineServiceResponse Client::finishHotlineService(const FinishHotlineServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishHotlineServiceWithOptions(request, runtime);
}

/**
 * @summary Generate a message channel access signature based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and agent account name.
 *
 * @description - You can invoke this API to generate a message channel access signature. The **Data** field in the response contains the MessageBox message channel signature code.
 * - Before invoking the API, we recommend that you confirm your AICCS instance ID. For instructions on how to obtain it, see the description of [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API-wide frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GenerateWebSocketSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWebSocketSignResponse
 */
GenerateWebSocketSignResponse Client::generateWebSocketSignWithOptions(const GenerateWebSocketSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Generate a message channel access signature based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and agent account name.
 *
 * @description - You can invoke this API to generate a message channel access signature. The **Data** field in the response contains the MessageBox message channel signature code.
 * - Before invoking the API, we recommend that you confirm your AICCS instance ID. For instructions on how to obtain it, see the description of [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API-wide frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GenerateWebSocketSignRequest
 * @return GenerateWebSocketSignResponse
 */
GenerateWebSocketSignResponse Client::generateWebSocketSign(const GenerateWebSocketSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateWebSocketSignWithOptions(request, runtime);
}

/**
 * @summary Query agent information in the Cloud Customer Service System by instance ID and agent account name, such as agent ID.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, refer to the instructions in [Request Parameters](#api-detail-35).
 * - Deleted agents can also be queried. Check the **Status** parameter in the response. If its value is 2, it indicates that the agent has been deleted.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Query agent information in the Cloud Customer Service System by instance ID and agent account name, such as agent ID.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, refer to the instructions in [Request Parameters](#api-detail-35).
 * - Deleted agents can also be queried. Check the **Status** parameter in the response. If its value is 2, it indicates that the agent has been deleted.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary Obtain the agent-level status metrics under hotline monitoring. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Obtain the agent-level status metrics under hotline monitoring. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    body["AgentId"] = request.getAgentId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieve the summary data of hotline agent details under hotline reports. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before you invoke this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Retrieve the summary data of hotline agent details under hotline reports. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before you invoke this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetAgentDetailReportRequest
 * @return GetAgentDetailReportResponse
 */
GetAgentDetailReportResponse Client::getAgentDetailReport(const GetAgentDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentDetailReportWithOptions(request, runtime);
}

/**
 * @summary Obtain real-time agent detail data grouped by instance, department, and skill group (real-time data).
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 10 requests per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAgentIndexRealTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentIndexRealTimeResponse
 */
GetAgentIndexRealTimeResponse Client::getAgentIndexRealTimeWithOptions(const GetAgentIndexRealTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.getDepIds();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Obtain real-time agent detail data grouped by instance, department, and skill group (real-time data).
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 10 requests per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAgentIndexRealTimeRequest
 * @return GetAgentIndexRealTimeResponse
 */
GetAgentIndexRealTimeResponse Client::getAgentIndexRealTime(const GetAgentIndexRealTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentIndexRealTimeWithOptions(request, runtime);
}

/**
 * @summary Obtain the agent service status metrics from online reports. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 queries per second.
 * - API-wide invocation frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Obtain the agent service status metrics from online reports. Supports queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 queries per second.
 * - API-wide invocation frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetAgentServiceStatusRequest
 * @return GetAgentServiceStatusResponse
 */
GetAgentServiceStatusResponse Client::getAgentServiceStatus(const GetAgentServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Obtain agent-level statistics under hotline monitoring. Supports querying by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Obtain agent-level statistics under hotline monitoring. Supports querying by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetAgentStatisticsRequest
 * @return GetAgentStatisticsResponse
 */
GetAgentStatisticsResponse Client::getAgentStatistics(const GetAgentStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentStatisticsWithOptions(request, runtime);
}

/**
 * @summary Query the business information associated with this call by instance ID and session ID.
 *
 * @description ### Queries per second (QPS) limits
 * - Call frequency per user: 100 times/second.
 * - API call frequency: 100 times/second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
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
 * @summary Query the business information associated with this call by instance ID and session ID.
 *
 * @description ### Queries per second (QPS) limits
 * - Call frequency per user: 100 times/second.
 * - API call frequency: 100 times/second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAiOutboundTaskBizDataRequest
 * @return GetAiOutboundTaskBizDataResponse
 */
GetAiOutboundTaskBizDataResponse Client::getAiOutboundTaskBizData(const GetAiOutboundTaskBizDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskBizDataWithOptions(request, runtime);
}

/**
 * @summary Obtain the outbound call job details by instance ID and job ID.
 *
 * @description The outbound call job details include the job ID, job status, task type, outbound caller number, callee number repetition policy, and other information. For more information, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times per second.  
 * - API invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
 * @summary Obtain the outbound call job details by instance ID and job ID.
 *
 * @description The outbound call job details include the job ID, job status, task type, outbound caller number, callee number repetition policy, and other information. For more information, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times per second.  
 * - API invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAiOutboundTaskDetailRequest
 * @return GetAiOutboundTaskDetailResponse
 */
GetAiOutboundTaskDetailResponse Client::getAiOutboundTaskDetail(const GetAiOutboundTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Obtain task execution details by instance ID and job ID.
 *
 * @description The task execution details include the total number of jobs, job batches, outbound call numbers, corresponding call counts, execution status, and other information.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
 * @summary Obtain task execution details by instance ID and job ID.
 *
 * @description The task execution details include the total number of jobs, job batches, outbound call numbers, corresponding call counts, execution status, and other information.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAiOutboundTaskExecDetailRequest
 * @return GetAiOutboundTaskExecDetailResponse
 */
GetAiOutboundTaskExecDetailResponse Client::getAiOutboundTaskExecDetail(const GetAiOutboundTaskExecDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskExecDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieve the outbound call job list by instance ID and Task Type.
 *
 * @description - The job list contains job information, including job ID, Task Status, Task Name, task completion rate, and more. For details, see [Response parameters](#api-detail-40).
 * - If you need to update job information, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
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
 * @summary Retrieve the outbound call job list by instance ID and Task Type.
 *
 * @description - The job list contains job information, including job ID, Task Status, Task Name, task completion rate, and more. For details, see [Response parameters](#api-detail-40).
 * - If you need to update job information, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.
 * - API invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetAiOutboundTaskListRequest
 * @return GetAiOutboundTaskListResponse
 */
GetAiOutboundTaskListResponse Client::getAiOutboundTaskList(const GetAiOutboundTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiOutboundTaskListWithOptions(request, runtime);
}

/**
 * @summary Obtain the outbound call job progress by instance ID and job ID.
 *
 * @description - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
 * - The outbound call job progress includes information such as job ID, Task Type, job completion rate, agent connection rate, and customer connection rate. For details, see [Response Parameters](#api-detail-40).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
 * @summary Obtain the outbound call job progress by instance ID and job ID.
 *
 * @description - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
 * - The outbound call job progress includes information such as job ID, Task Type, job completion rate, agent connection rate, and customer connection rate. For details, see [Response Parameters](#api-detail-40).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
 * @description - You can invoke this API to obtain department IDs for department group queries in certain data query APIs (such as [GetHotlineServiceStatistics](https://help.aliyun.com/document_detail/2717938.html)).  
 * - After creating, deleting, or updating department information, you can invoke this API to confirm whether the department information matches your expectations.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
 * @description - You can invoke this API to obtain department IDs for department group queries in certain data query APIs (such as [GetHotlineServiceStatistics](https://help.aliyun.com/document_detail/2717938.html)).  
 * - After creating, deleting, or updating department information, you can invoke this API to confirm whether the department information matches your expectations.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetAllDepartmentRequest
 * @return GetAllDepartmentResponse
 */
GetAllDepartmentResponse Client::getAllDepartment(const GetAllDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllDepartmentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the upload address for a voice memo recording.
 *
 * @param request GetAudioNoteUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioNoteUploadUrlResponse
 */
GetAudioNoteUploadUrlResponse Client::getAudioNoteUploadUrlWithOptions(const GetAudioNoteUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAudioNoteUploadUrl"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAudioNoteUploadUrlResponse>();
}

/**
 * @summary Retrieves the upload address for a voice memo recording.
 *
 * @param request GetAudioNoteUploadUrlRequest
 * @return GetAudioNoteUploadUrlResponse
 */
GetAudioNoteUploadUrlResponse Client::getAudioNoteUploadUrl(const GetAudioNoteUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioNoteUploadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the dialog content for a call by using its call ID. You can retrieve content for calls completed within the last 30 days.
 *
 * @param request GetCallDialogContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDialogContentResponse
 */
GetCallDialogContentResponse Client::getCallDialogContentWithOptions(const GetCallDialogContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallDate()) {
    query["CallDate"] = request.getCallDate();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the dialog content for a call by using its call ID. You can retrieve content for calls completed within the last 30 days.
 *
 * @param request GetCallDialogContentRequest
 * @return GetCallDialogContentResponse
 */
GetCallDialogContentResponse Client::getCallDialogContent(const GetCallDialogContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDialogContentWithOptions(request, runtime);
}

/**
 * @summary Obtain the URL of a call recording file based on the call creation time and the unique call ID, and then retrieve the call recording file using the URL.
 *
 * @description ### Prerequisites
 * Before invoking this API, ensure that call recording was enabled during the invocation of the [RobotCall](https://help.aliyun.com/document_detail/223270.html) API and that you successfully received the recording receipt, indicating that the recording file has been generated. Otherwise, an invalid URL will be returned.
 * ### How-To
 * This API serves as a supplementary method to the recording receipt. If the URL in the recording receipt message expires, you can use this API to obtain a new recording URL. By default, the validity period of the recording receipt URL is three days.
 * > We recommend that you directly download the recording content using the recording receipt URL and save it locally, rather than relying on the receipt URL, to avoid issues caused by expiration.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetCallSoundRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallSoundRecordResponse
 */
GetCallSoundRecordResponse Client::getCallSoundRecordWithOptions(const GetCallSoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.getCreateTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Obtain the URL of a call recording file based on the call creation time and the unique call ID, and then retrieve the call recording file using the URL.
 *
 * @description ### Prerequisites
 * Before invoking this API, ensure that call recording was enabled during the invocation of the [RobotCall](https://help.aliyun.com/document_detail/223270.html) API and that you successfully received the recording receipt, indicating that the recording file has been generated. Otherwise, an invalid URL will be returned.
 * ### How-To
 * This API serves as a supplementary method to the recording receipt. If the URL in the recording receipt message expires, you can use this API to obtain a new recording URL. By default, the validity period of the recording receipt URL is three days.
 * > We recommend that you directly download the recording content using the recording receipt URL and save it locally, rather than relying on the receipt URL, to avoid issues caused by expiration.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetCallSoundRecordRequest
 * @return GetCallSoundRecordResponse
 */
GetCallSoundRecordResponse Client::getCallSoundRecord(const GetCallSoundRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallSoundRecordWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetConfigNumList API to obtain the hotline settings number list.
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
 * @summary Invoke the GetConfigNumList API to obtain the hotline settings number list.
 *
 * @param request GetConfigNumListRequest
 * @return GetConfigNumListResponse
 */
GetConfigNumListResponse Client::getConfigNumList(const GetConfigNumListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigNumListWithOptions(request, runtime);
}

/**
 * @summary You can invoke the GetCustomerInfo API to obtain membership details by Workbench membership ID.
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
 * @summary You can invoke the GetCustomerInfo API to obtain membership details by Workbench membership ID.
 *
 * @param request GetCustomerInfoRequest
 * @return GetCustomerInfoResponse
 */
GetCustomerInfoResponse Client::getCustomerInfo(const GetCustomerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerInfoWithOptions(request, runtime);
}

/**
 * @summary Queries skill group categories and the skill group list by AICCS instance ID and agent ID.
 *
 * @description - The skill groups returned by this API are grouped by department ID, which can be specified when you [create a skill group](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup).
 * - To query detailed skill group information, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API.
 * - Before invoking this API, you should confirm the AICCS instance ID and agent ID. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 1000 queries per second.
 * - API-wide invocation frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
 * @summary Queries skill group categories and the skill group list by AICCS instance ID and agent ID.
 *
 * @description - The skill groups returned by this API are grouped by department ID, which can be specified when you [create a skill group](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup).
 * - To query detailed skill group information, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API.
 * - Before invoking this API, you should confirm the AICCS instance ID and agent ID. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 1000 queries per second.
 * - API-wide invocation frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetDepGroupTreeDataRequest
 * @return GetDepGroupTreeDataResponse
 */
GetDepGroupTreeDataResponse Client::getDepGroupTreeData(const GetDepGroupTreeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDepGroupTreeDataWithOptions(request, runtime);
}

/**
 * @summary Obtain department-level status metrics under hotline monitoring. Supports queries by instance, time range, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Obtain department-level status metrics under hotline monitoring. Supports queries by instance, time range, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetDepartmentalLatitudeAgentStatusRequest
 * @return GetDepartmentalLatitudeAgentStatusResponse
 */
GetDepartmentalLatitudeAgentStatusResponse Client::getDepartmentalLatitudeAgentStatus(const GetDepartmentalLatitudeAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDepartmentalLatitudeAgentStatusWithOptions(request, runtime);
}

/**
 * @summary Obtain the current service details of a hotline agent based on the instance ID and agent account name.
 *
 * @description The hotline agent details include information such as agent posture status, agent ID, and heartbeat signature. For more information, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limit  
 * - Per-user invocation frequency: Rate Limiting is not applied.  
 * - API frequency: 100 queries per second (QPS).  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Obtain the current service details of a hotline agent based on the instance ID and agent account name.
 *
 * @description The hotline agent details include information such as agent posture status, agent ID, and heartbeat signature. For more information, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limit  
 * - Per-user invocation frequency: Rate Limiting is not applied.  
 * - API frequency: 100 queries per second (QPS).  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineAgentDetailRequest
 * @return GetHotlineAgentDetailResponse
 */
GetHotlineAgentDetailResponse Client::getHotlineAgentDetail(const GetHotlineAgentDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentDetailWithOptions(request, runtime);
}

/**
 * @summary Obtain detailed data metrics by hotline agent dimension (T+1). Supports grouping queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * > Query logic priority:
 * > - If GroupIds is not empty, query data metrics under the specified skill groups.
 * > - Otherwise, if DepIds is not empty, query data metrics under the corresponding department groups.
 * > - Otherwise, query data metrics under the AICCS instance.
 * ### QPS Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 10 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineAgentDetailReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineAgentDetailReportResponse
 */
GetHotlineAgentDetailReportResponse Client::getHotlineAgentDetailReportWithOptions(const GetHotlineAgentDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.getDepIds();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Obtain detailed data metrics by hotline agent dimension (T+1). Supports grouping queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * > Query logic priority:
 * > - If GroupIds is not empty, query data metrics under the specified skill groups.
 * > - Otherwise, if DepIds is not empty, query data metrics under the corresponding department groups.
 * > - Otherwise, query data metrics under the AICCS instance.
 * ### QPS Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 10 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineAgentDetailReportRequest
 * @return GetHotlineAgentDetailReportResponse
 */
GetHotlineAgentDetailReportResponse Client::getHotlineAgentDetailReport(const GetHotlineAgentDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentDetailReportWithOptions(request, runtime);
}

/**
 * @summary Queries the hotline agent status in the Cloud Customer Service System by AICCS instance ID and agent account name.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, see the description in [Request Parameters](#api-detail-35).  
 * - To retrieve detailed information about a hotline agent, you can invoke the [GetHotlineAgentDetail](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-gethotlineagentdetail) API.  
 * ### Queries per second (QPS) Limit  
 * - Per-user invocation frequency: No rate limiting.  
 * - API-wide frequency: 200 queries per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineAgentStatusResponse
 */
GetHotlineAgentStatusResponse Client::getHotlineAgentStatusWithOptions(const GetHotlineAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the hotline agent status in the Cloud Customer Service System by AICCS instance ID and agent account name.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, see the description in [Request Parameters](#api-detail-35).  
 * - To retrieve detailed information about a hotline agent, you can invoke the [GetHotlineAgentDetail](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-gethotlineagentdetail) API.  
 * ### Queries per second (QPS) Limit  
 * - Per-user invocation frequency: No rate limiting.  
 * - API-wide frequency: 200 queries per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineAgentStatusRequest
 * @return GetHotlineAgentStatusResponse
 */
GetHotlineAgentStatusResponse Client::getHotlineAgentStatus(const GetHotlineAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineAgentStatusWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetHotlineCallAction API to query the result data of call actions.
 *
 * @description ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 50 times/second.  
 * - API invocation frequency: 100 times/second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineCallActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineCallActionResponse
 */
GetHotlineCallActionResponse Client::getHotlineCallActionWithOptions(const GetHotlineCallActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcc()) {
    body["Acc"] = request.getAcc();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAct()) {
    body["Act"] = request.getAct();
  }

  if (!!request.hasBiz()) {
    body["Biz"] = request.getBiz();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFromSource()) {
    body["FromSource"] = request.getFromSource();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke the GetHotlineCallAction API to query the result data of call actions.
 *
 * @description ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 50 times/second.  
 * - API invocation frequency: 100 times/second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetHotlineCallActionRequest
 * @return GetHotlineCallActionResponse
 */
GetHotlineCallActionResponse Client::getHotlineCallAction(const GetHotlineCallActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineCallActionWithOptions(request, runtime);
}

/**
 * @summary Retrieve detailed (T+1) data by hotline skill group dimension. Supports grouping by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No Rate Limiting.  
 * - API frequency: 10 queries per second.
 * > Throttle will be triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetHotlineGroupDetailReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotlineGroupDetailReportResponse
 */
GetHotlineGroupDetailReportResponse Client::getHotlineGroupDetailReportWithOptions(const GetHotlineGroupDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepIds()) {
    query["DepIds"] = request.getDepIds();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Retrieve detailed (T+1) data by hotline skill group dimension. Supports grouping by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No Rate Limiting.  
 * - API frequency: 10 queries per second.
 * > Throttle will be triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetHotlineGroupDetailReportRequest
 * @return GetHotlineGroupDetailReportResponse
 */
GetHotlineGroupDetailReportResponse Client::getHotlineGroupDetailReport(const GetHotlineGroupDetailReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineGroupDetailReportWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetHotlineMessageLog API to retrieve hotline message records.
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
 * @summary Invoke the GetHotlineMessageLog API to retrieve hotline message records.
 *
 * @param request GetHotlineMessageLogRequest
 * @return GetHotlineMessageLogResponse
 */
GetHotlineMessageLogResponse Client::getHotlineMessageLog(const GetHotlineMessageLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineMessageLogWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetHotlineRuntimeInfo API to query hotline runtime information.
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
 * @summary Invoke the GetHotlineRuntimeInfo API to query hotline runtime information.
 *
 * @param request GetHotlineRuntimeInfoRequest
 * @return GetHotlineRuntimeInfoResponse
 */
GetHotlineRuntimeInfoResponse Client::getHotlineRuntimeInfo(const GetHotlineRuntimeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineRuntimeInfoWithOptions(request, runtime);
}

/**
 * @summary Obtain service statistics under hotline monitoring. Supports grouped queries by instance, time dimension, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain service statistics under hotline monitoring. Supports grouped queries by instance, time dimension, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to provide agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetHotlineServiceStatisticsRequest
 * @return GetHotlineServiceStatisticsResponse
 */
GetHotlineServiceStatisticsResponse Client::getHotlineServiceStatistics(const GetHotlineServiceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineServiceStatisticsWithOptions(request, runtime);
}

/**
 * @summary Obtain the queue length of hotline members.
 *
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
 * @summary Obtain the queue length of hotline members.
 *
 * @param request GetHotlineWaitingNumberRequest
 * @return GetHotlineWaitingNumberResponse
 */
GetHotlineWaitingNumberResponse Client::getHotlineWaitingNumber(const GetHotlineWaitingNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineWaitingNumberWithOptions(request, runtime);
}

/**
 * @summary You can obtain the current statistical metrics (real-time data) and query them by instance ID, department, or skill group.
 *
 * @description - The current data statistics metrics include cumulative metrics for the day and real-time metrics.  
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * > Query logic priority:  
 * > - If GroupIds is not empty, query the data metrics for the specified skill groups.  
 * > - Otherwise, if DepIds is not empty, query the data metrics for the specified departments.  
 * > - Otherwise, query the data metrics for the Artificial Intelligence Cloud Call Service (AICCS) instance.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetIndexCurrentValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexCurrentValueResponse
 */
GetIndexCurrentValueResponse Client::getIndexCurrentValueWithOptions(const GetIndexCurrentValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepIds()) {
    query["DepIds"] = request.getDepIds();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can obtain the current statistical metrics (real-time data) and query them by instance ID, department, or skill group.
 *
 * @description - The current data statistics metrics include cumulative metrics for the day and real-time metrics.  
 * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * > Query logic priority:  
 * > - If GroupIds is not empty, query the data metrics for the specified skill groups.  
 * > - Otherwise, if DepIds is not empty, query the data metrics for the specified departments.  
 * > - Otherwise, query the data metrics for the Artificial Intelligence Cloud Call Service (AICCS) instance.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
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
 * @summary Invoke the GetMcuLvsIp API to query the hotline server IP address.
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
 * @summary Invoke the GetMcuLvsIp API to query the hotline server IP address.
 *
 * @param request GetMcuLvsIpRequest
 * @return GetMcuLvsIpResponse
 */
GetMcuLvsIpResponse Client::getMcuLvsIp(const GetMcuLvsIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcuLvsIpWithOptions(request, runtime);
}

/**
 * @summary Obtain the number\\"s归属地 information based on the instance ID and phone number.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Obtain the number\\"s归属地 information based on the instance ID and phone number.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetNumLocationRequest
 * @return GetNumLocationResponse
 */
GetNumLocationResponse Client::getNumLocation(const GetNumLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumLocationWithOptions(request, runtime);
}

/**
 * @summary Obtain online agent information data under real-time monitoring. Support queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
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
 * @summary Obtain online agent information data under real-time monitoring. Support queries by instance, time range, agent, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetOnlineSeatInformationRequest
 * @return GetOnlineSeatInformationResponse
 */
GetOnlineSeatInformationResponse Client::getOnlineSeatInformation(const GetOnlineSeatInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnlineSeatInformationWithOptions(request, runtime);
}

/**
 * @summary Obtain the volume of Online Services under online monitoring. Support grouped queries by instance, time range, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the volume of Online Services under online monitoring. Support grouped queries by instance, time range, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetOnlineServiceVolumeRequest
 * @return GetOnlineServiceVolumeResponse
 */
GetOnlineServiceVolumeResponse Client::getOnlineServiceVolume(const GetOnlineServiceVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnlineServiceVolumeWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of external hotline numbers.
 *
 * @param request GetOutbounNumListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOutbounNumListResponse
 */
GetOutbounNumListResponse Client::getOutbounNumListWithOptions(const GetOutbounNumListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieve the list of external hotline numbers.
 *
 * @param request GetOutbounNumListRequest
 * @return GetOutbounNumListResponse
 */
GetOutbounNumListResponse Client::getOutbounNumList(const GetOutbounNumListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOutbounNumListWithOptions(request, runtime);
}

/**
 * @summary Invoke GetQualityProjectDetail to obtain the quality inspection job details.
 *
 * @param request GetQualityProjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityProjectDetailResponse
 */
GetQualityProjectDetailResponse Client::getQualityProjectDetailWithOptions(const GetQualityProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Invoke GetQualityProjectDetail to obtain the quality inspection job details.
 *
 * @param request GetQualityProjectDetailRequest
 * @return GetQualityProjectDetailResponse
 */
GetQualityProjectDetailResponse Client::getQualityProjectDetail(const GetQualityProjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityProjectDetailWithOptions(request, runtime);
}

/**
 * @summary Invoke GetQualityProjectList to obtain the quality inspection job list.
 *
 * @param request GetQualityProjectListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityProjectListResponse
 */
GetQualityProjectListResponse Client::getQualityProjectListWithOptions(const GetQualityProjectListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasCheckFreqType()) {
    query["checkFreqType"] = request.getCheckFreqType();
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
 * @summary Invoke GetQualityProjectList to obtain the quality inspection job list.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasHitStatus()) {
    query["HitStatus"] = request.getHitStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasQualityRuleIds()) {
    query["QualityRuleIds"] = request.getQualityRuleIds();
  }

  if (!!request.hasTouchEndTime()) {
    query["TouchEndTime"] = request.getTouchEndTime();
  }

  if (!!request.hasTouchStartTime()) {
    query["TouchStartTime"] = request.getTouchStartTime();
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQualityRuleId()) {
    query["QualityRuleId"] = request.getQualityRuleId();
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Obtain queue information under the skill group dimension in online monitoring. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain queue information under the skill group dimension in online monitoring. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetQueueInformationRequest
 * @return GetQueueInformationResponse
 */
GetQueueInformationResponse Client::getQueueInformation(const GetQueueInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueInformationWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetRecordData API to obtain a recording file.
 *
 * @param request GetRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordDataResponse
 */
GetRecordDataResponse Client::getRecordDataWithOptions(const GetRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.getAcid();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke the GetRecordData API to obtain a recording file.
 *
 * @param request GetRecordDataRequest
 * @return GetRecordDataResponse
 */
GetRecordDataResponse Client::getRecordData(const GetRecordDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordDataWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetRecordUrl API to obtain the incoming and outgoing calls recording link.
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
 * @summary Invoke the GetRecordUrl API to obtain the incoming and outgoing calls recording link.
 *
 * @param request GetRecordUrlRequest
 * @return GetRecordUrlResponse
 */
GetRecordUrlResponse Client::getRecordUrl(const GetRecordUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordUrlWithOptions(request, runtime);
}

/**
 * @summary Invoke GetRtcToken to obtain the token for a shift agent.
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
 * @summary Invoke GetRtcToken to obtain the token for a shift agent.
 *
 * @param request GetRtcTokenRequest
 * @return GetRtcTokenResponse
 */
GetRtcTokenResponse Client::getRtcToken(const GetRtcTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRtcTokenWithOptions(request, runtime);
}

/**
 * @summary Obtain agent service capacity data under online monitoring. Supports queries by instance, time range, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "depIds", "simple"));
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
 * @summary Obtain agent service capacity data under online monitoring. Supports queries by instance, time range, and department group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetSeatInformationRequest
 * @return GetSeatInformationResponse
 */
GetSeatInformationResponse Client::getSeatInformation(const GetSeatInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSeatInformationWithOptions(request, runtime);
}

/**
 * @summary Obtain the service status metrics of skill groups. Support grouped queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the service status metrics of skill groups. Support grouped queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request GetSkillGroupAgentStatusDetailsRequest
 * @return GetSkillGroupAgentStatusDetailsResponse
 */
GetSkillGroupAgentStatusDetailsResponse Client::getSkillGroupAgentStatusDetails(const GetSkillGroupAgentStatusDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupAgentStatusDetailsWithOptions(request, runtime);
}

/**
 * @summary Obtain the aggregated agent status metrics for skill groups under hotline monitoring. Supports grouped queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the aggregated agent status metrics for skill groups under hotline monitoring. Supports grouped queries by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetSkillGroupAndAgentStatusSummaryRequest
 * @return GetSkillGroupAndAgentStatusSummaryResponse
 */
GetSkillGroupAndAgentStatusSummaryResponse Client::getSkillGroupAndAgentStatusSummary(const GetSkillGroupAndAgentStatusSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupAndAgentStatusSummaryWithOptions(request, runtime);
}

/**
 * @summary Obtain the hotline monitoring status metrics by skill group dimension. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the hotline monitoring status metrics by skill group dimension. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetSkillGroupLatitudeStateRequest
 * @return GetSkillGroupLatitudeStateResponse
 */
GetSkillGroupLatitudeStateResponse Client::getSkillGroupLatitudeState(const GetSkillGroupLatitudeStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupLatitudeStateWithOptions(request, runtime);
}

/**
 * @summary Retrieve skill group–level service capacity data under online monitoring. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Retrieve skill group–level service capacity data under online monitoring. Supports queries grouped by instance, time range, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request GetSkillGroupServiceCapabilityRequest
 * @return GetSkillGroupServiceCapabilityResponse
 */
GetSkillGroupServiceCapabilityResponse Client::getSkillGroupServiceCapability(const GetSkillGroupServiceCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupServiceCapabilityWithOptions(request, runtime);
}

/**
 * @summary Obtain the service status metrics of skill groups in online reports.
 *
 * @description ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times per second.  
 * - API invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the service status metrics of skill groups in online reports.
 *
 * @description ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 100 times per second.  
 * - API invocation frequency: 100 times per second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request GetSkillGroupServiceStatusRequest
 * @return GetSkillGroupServiceStatusResponse
 */
GetSkillGroupServiceStatusResponse Client::getSkillGroupServiceStatus(const GetSkillGroupServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Obtain the total status count of skill groups under hotline reports. Supports grouped queries by instance, time range, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "simple"));
  }

  if (!!tmpReq.hasDepIds()) {
    request.setDepIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepIds(), "DepIds", "simple"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "simple"));
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
 * @summary Obtain the total status count of skill groups under hotline reports. Supports grouped queries by instance, time range, agent, department, and skill group.
 *
 * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
 * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times per second.  
 * - API-wide invocation frequency: 100 times per second.  
 * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request GetSkillGroupStatusTotalRequest
 * @return GetSkillGroupStatusTotalResponse
 */
GetSkillGroupStatusTotalResponse Client::getSkillGroupStatusTotal(const GetSkillGroupStatusTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupStatusTotalWithOptions(request, runtime);
}

/**
 * @summary Cancel dual-call.
 *
 * @param request HangUpDoubleCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangUpDoubleCallResponse
 */
HangUpDoubleCallResponse Client::hangUpDoubleCallWithOptions(const HangUpDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.getAcid();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Cancel dual-call.
 *
 * @param request HangUpDoubleCallRequest
 * @return HangUpDoubleCallResponse
 */
HangUpDoubleCallResponse Client::hangUpDoubleCall(const HangUpDoubleCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangUpDoubleCallWithOptions(request, runtime);
}

/**
 * @summary Invoke HangupCall to execute the agent hang-up operation.
 *
 * @param request HangupCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupCallResponse
 */
HangupCallResponse Client::hangupCallWithOptions(const HangupCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Invoke HangupCall to execute the agent hang-up operation.
 *
 * @param request HangupCallRequest
 * @return HangupCallResponse
 */
HangupCallResponse Client::hangupCall(const HangupCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupCallWithOptions(request, runtime);
}

/**
 * @summary Hangs up a call in Communication Intelligence Engine.
 *
 * @description - Before you hang up a call in Communication Intelligence Engine, ensure that a call has been initiated by a large model.
 * - If a call has not been initiated, use the [LlmSmartCall](https://help.aliyun.com/document_detail/2862828.html) or [LlmSmartCallEncrypt](https://help.aliyun.com/document_detail/2881065.html) operation to do so.
 *
 * @param request HangupOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupOperateResponse
 */
HangupOperateResponse Client::hangupOperateWithOptions(const HangupOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasImmediateHangup()) {
    query["ImmediateHangup"] = request.getImmediateHangup();
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
 * @summary Hangs up a call in Communication Intelligence Engine.
 *
 * @description - Before you hang up a call in Communication Intelligence Engine, ensure that a call has been initiated by a large model.
 * - If a call has not been initiated, use the [LlmSmartCall](https://help.aliyun.com/document_detail/2862828.html) or [LlmSmartCallEncrypt](https://help.aliyun.com/document_detail/2881065.html) operation to do so.
 *
 * @param request HangupOperateRequest
 * @return HangupOperateResponse
 */
HangupOperateResponse Client::hangupOperate(const HangupOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupOperateWithOptions(request, runtime);
}

/**
 * @summary Hang up a third-party call.
 *
 * @param request HangupThirdCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HangupThirdCallResponse
 */
HangupThirdCallResponse Client::hangupThirdCallWithOptions(const HangupThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Hang up a third-party call.
 *
 * @param request HangupThirdCallRequest
 * @return HangupThirdCallResponse
 */
HangupThirdCallResponse Client::hangupThirdCall(const HangupThirdCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hangupThirdCallWithOptions(request, runtime);
}

/**
 * @summary Hold the call.
 *
 * @param request HoldCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCallWithOptions(const HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Hold the call.
 *
 * @param request HoldCallRequest
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCall(const HoldCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return holdCallWithOptions(request, runtime);
}

/**
 * @summary Query call details by instance ID.
 *
 * @description Call details include the total number of records, call result, agent name, call time, and other information.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 80 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency, throttling will be triggered.
 *
 * @param request HotlineSessionQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotlineSessionQueryResponse
 */
HotlineSessionQueryResponse Client::hotlineSessionQueryWithOptions(const HotlineSessionQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcid()) {
    query["Acid"] = request.getAcid();
  }

  if (!!request.hasAcidList()) {
    query["AcidList"] = request.getAcidList();
  }

  if (!!request.hasCallResult()) {
    query["CallResult"] = request.getCallResult();
  }

  if (!!request.hasCallResultList()) {
    query["CallResultList"] = request.getCallResultList();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasCallTypeList()) {
    query["CallTypeList"] = request.getCallTypeList();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledNumberList()) {
    query["CalledNumberList"] = request.getCalledNumberList();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasCallingNumberList()) {
    query["CallingNumberList"] = request.getCallingNumberList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupIdList()) {
    query["GroupIdList"] = request.getGroupIdList();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasMemberIdList()) {
    query["MemberIdList"] = request.getMemberIdList();
  }

  if (!!request.hasMemberName()) {
    query["MemberName"] = request.getMemberName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasQueryEndTime()) {
    query["QueryEndTime"] = request.getQueryEndTime();
  }

  if (!!request.hasQueryStartTime()) {
    query["QueryStartTime"] = request.getQueryStartTime();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasServicerId()) {
    query["ServicerId"] = request.getServicerId();
  }

  if (!!request.hasServicerIdList()) {
    query["ServicerIdList"] = request.getServicerIdList();
  }

  if (!!request.hasServicerName()) {
    query["ServicerName"] = request.getServicerName();
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
 * @summary Query call details by instance ID.
 *
 * @description Call details include the total number of records, call result, agent name, call time, and other information.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 80 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency, throttling will be triggered.
 *
 * @param request HotlineSessionQueryRequest
 * @return HotlineSessionQueryResponse
 */
HotlineSessionQueryResponse Client::hotlineSessionQuery(const HotlineSessionQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hotlineSessionQueryWithOptions(request, runtime);
}

/**
 * @summary Imports a single phone number to a task.
 *
 * @param tmpReq ImportOneTaskPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportOneTaskPhoneNumberResponse
 */
ImportOneTaskPhoneNumberResponse Client::importOneTaskPhoneNumberWithOptions(const ImportOneTaskPhoneNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportOneTaskPhoneNumberShrinkRequest request = ImportOneTaskPhoneNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVariables(), "Variables", "json"));
  }

  json query = {};
  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.getEncryptionType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasVariablesShrink()) {
    query["Variables"] = request.getVariablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportOneTaskPhoneNumber"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportOneTaskPhoneNumberResponse>();
}

/**
 * @summary Imports a single phone number to a task.
 *
 * @param request ImportOneTaskPhoneNumberRequest
 * @return ImportOneTaskPhoneNumberResponse
 */
ImportOneTaskPhoneNumberResponse Client::importOneTaskPhoneNumber(const ImportOneTaskPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importOneTaskPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary Imports callee data for a call task.
 *
 * @description - You can import callee data by calling this operation. Alternatively, go to the **call task management** page, click **Import Callee Data**, download the template, and then upload your file.
 * - This API operation currently supports only the JSON data type for importing callee data.
 * - Ensure that you have created a call task before you call this operation.
 * - To create a call task, go to the **call task management** page and click **Create Call Task**, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
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
    request.setPhoneNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumberList(), "PhoneNumberList", "json"));
  }

  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.getEncryptionType();
  }

  if (!!request.hasOssFileName()) {
    query["OssFileName"] = request.getOssFileName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  json body = {};
  if (!!request.hasPhoneNumberListShrink()) {
    body["PhoneNumberList"] = request.getPhoneNumberListShrink();
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
 * @summary Imports callee data for a call task.
 *
 * @description - You can import callee data by calling this operation. Alternatively, go to the **call task management** page, click **Import Callee Data**, download the template, and then upload your file.
 * - This API operation currently supports only the JSON data type for importing callee data.
 * - Ensure that you have created a call task before you call this operation.
 * - To create a call task, go to the **call task management** page and click **Create Call Task**, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
 *
 * @param request ImportTaskNumberDatasRequest
 * @return ImportTaskNumberDatasResponse
 */
ImportTaskNumberDatasResponse Client::importTaskNumberDatas(const ImportTaskNumberDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importTaskNumberDatasWithOptions(request, runtime);
}

/**
 * @summary Import outbound call callee numbers based on the instance ID and job ID.
 *
 * @description - After importing outbound call callee numbers, the outbound calling job can operate normally.  
 * - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 20 times/second.  
 * - API invocation frequency: 50 times/second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    request.setDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetails(), "Details", "json"));
  }

  json query = {};
  if (!!request.hasBatchVersion()) {
    query["BatchVersion"] = request.getBatchVersion();
  }

  if (!!request.hasDetailsShrink()) {
    query["Details"] = request.getDetailsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Import outbound call callee numbers based on the instance ID and job ID.
 *
 * @description - After importing outbound call callee numbers, the outbound calling job can operate normally.  
 * - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
 * ### Queries per second (QPS) limits  
 * - Per-user invocation frequency: 20 times/second.  
 * - API invocation frequency: 50 times/second.  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    query["CallInfos"] = request.getCallInfos();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.getOutboundTaskId();
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
 * @summary Add a third party to the call.
 *
 * @param request JoinThirdCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinThirdCallResponse
 */
JoinThirdCallResponse Client::joinThirdCallWithOptions(const JoinThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.getHoldConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
 * @summary Add a third party to the call.
 *
 * @param request JoinThirdCallRequest
 * @return JoinThirdCallResponse
 */
JoinThirdCallResponse Client::joinThirdCall(const JoinThirdCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinThirdCallWithOptions(request, runtime);
}

/**
 * @summary Query the agent list in the Cloud Customer Service System by AICCS instance ID and skill group ID.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and skill group information. For guidance on how to obtain these details, refer to the description of [Request Parameters](#api-detail-35).
 * - If an agent is not assigned to any skill group, you can invoke [GetAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-getagent) to query the agent information.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Query the agent list in the Cloud Customer Service System by AICCS instance ID and skill group ID.
 *
 * @description - Before invoking this API, confirm the AICCS instance information and skill group information. For guidance on how to obtain these details, refer to the description of [Request Parameters](#api-detail-35).
 * - If an agent is not assigned to any skill group, you can invoke [GetAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-getagent) to query the agent information.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListAgentBySkillGroupIdRequest
 * @return ListAgentBySkillGroupIdResponse
 */
ListAgentBySkillGroupIdResponse Client::listAgentBySkillGroupId(const ListAgentBySkillGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentBySkillGroupIdWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of robot scripts, including robot type, robot name, robot ID, associated business, and industry information.
 *
 * @description - Before invoking this API, ensure that you already have scripts that have passed the Review.
 * - If you do not have any scripts that have passed the Review, add a script and submit it for Review in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface first.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListAiccsRobotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAiccsRobotResponse
 */
ListAiccsRobotResponse Client::listAiccsRobotWithOptions(const ListAiccsRobotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRobotName()) {
    query["RobotName"] = request.getRobotName();
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
 * @summary Retrieve the list of robot scripts, including robot type, robot name, robot ID, associated business, and industry information.
 *
 * @description - Before invoking this API, ensure that you already have scripts that have passed the Review.
 * - If you do not have any scripts that have passed the Review, add a script and submit it for Review in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface first.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListAiccsRobotRequest
 * @return ListAiccsRobotResponse
 */
ListAiccsRobotResponse Client::listAiccsRobot(const ListAiccsRobotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAiccsRobotWithOptions(request, runtime);
}

/**
 * @summary Lists the system and custom TTS voices available for large model-based outbound calls.
 *
 * @description If you have not created and published any custom voices on the [Custom Voice](https://aiccs.console.aliyun.com/engine/voiceprint) page, the operation returns only system voices.
 *
 * @param request ListAvailableTtsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableTtsResponse
 */
ListAvailableTtsResponse Client::listAvailableTtsWithOptions(const ListAvailableTtsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTtsVoiceCode()) {
    query["TtsVoiceCode"] = request.getTtsVoiceCode();
  }

  if (!!request.hasVoiceType()) {
    query["VoiceType"] = request.getVoiceType();
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
 * @summary Lists the system and custom TTS voices available for large model-based outbound calls.
 *
 * @description If you have not created and published any custom voices on the [Custom Voice](https://aiccs.console.aliyun.com/engine/voiceprint) page, the operation returns only system voices.
 *
 * @param request ListAvailableTtsRequest
 * @return ListAvailableTtsResponse
 */
ListAvailableTtsResponse Client::listAvailableTts(const ListAvailableTtsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableTtsWithOptions(request, runtime);
}

/**
 * @summary Invoke ListChatRecordDetail to query online session details by time period.
 *
 * @description This API queries information about completed online sessions within a specified time range, including session content. The query rules are as follows:  
 * - The maximum time span for the query is 1 Day.  
 * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
 * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
 * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
 * - If both times are provided but the time span exceeds 1 Day, an abnormal response is returned.
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
 * @summary Invoke ListChatRecordDetail to query online session details by time period.
 *
 * @description This API queries information about completed online sessions within a specified time range, including session content. The query rules are as follows:  
 * - The maximum time span for the query is 1 Day.  
 * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
 * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
 * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
 * - If both times are provided but the time span exceeds 1 Day, an abnormal response is returned.
 *
 * @param request ListChatRecordDetailRequest
 * @return ListChatRecordDetailResponse
 */
ListChatRecordDetailResponse Client::listChatRecordDetail(const ListChatRecordDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatRecordDetailWithOptions(request, runtime);
}

/**
 * @summary Query Intelligent Contact Bot conversation records.
 *
 * @description - You can invoke this API to query Intelligent Contact Bot conversation records, or view them in the **Task Management** > **Details** > **View Conversation Records** interface.
 * - Before invoking this API, ensure that your created Intelligent Contact Bot calling job has successfully connected to at least one phone number.
 * - If you do not have an existing Intelligent Contact Bot calling job, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListDialogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialogResponse
 */
ListDialogResponse Client::listDialogWithOptions(const ListDialogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalled()) {
    query["Called"] = request.getCalled();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Query Intelligent Contact Bot conversation records.
 *
 * @description - You can invoke this API to query Intelligent Contact Bot conversation records, or view them in the **Task Management** > **Details** > **View Conversation Records** interface.
 * - Before invoking this API, ensure that your created Intelligent Contact Bot calling job has successfully connected to at least one phone number.
 * - If you do not have an existing Intelligent Contact Bot calling job, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListDialogRequest
 * @return ListDialogResponse
 */
ListDialogResponse Client::listDialog(const ListDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialogWithOptions(request, runtime);
}

/**
 * @summary Invoke ListHotlineRecord to query the hotline recording list by hotline session ID.
 *
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
 * @summary Invoke ListHotlineRecord to query the hotline recording list by hotline session ID.
 *
 * @param request ListHotlineRecordRequest
 * @return ListHotlineRecordResponse
 */
ListHotlineRecordResponse Client::listHotlineRecord(const ListHotlineRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotlineRecordWithOptions(request, runtime);
}

/**
 * @summary Query the list of hotline details by time period.
 *
 * @description This API queries detailed hotline information within a specified time range, including hotline call information. The query rules are as follows:  
 * - The maximum time span for the query is 1 Day.  
 * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
 * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
 * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
 * - If both times are provided but the time span exceeds 1 Day, an abnormal result is returned.
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
 * @summary Query the list of hotline details by time period.
 *
 * @description This API queries detailed hotline information within a specified time range, including hotline call information. The query rules are as follows:  
 * - The maximum time span for the query is 1 Day.  
 * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
 * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
 * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
 * - If both times are provided but the time span exceeds 1 Day, an abnormal result is returned.
 *
 * @param request ListHotlineRecordDetailRequest
 * @return ListHotlineRecordDetailResponse
 */
ListHotlineRecordDetailResponse Client::listHotlineRecordDetail(const ListHotlineRecordDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotlineRecordDetailWithOptions(request, runtime);
}

/**
 * @summary Obtain the outbound caller phone numbers for a specified agent based on the instance ID and agent account name.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user API call frequency: No rate limiting.
 * - API frequency: 100 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Obtain the outbound caller phone numbers for a specified agent based on the instance ID and agent account name.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user API call frequency: No rate limiting.
 * - API frequency: 100 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListOutboundPhoneNumberRequest
 * @return ListOutboundPhoneNumberResponse
 */
ListOutboundPhoneNumberResponse Client::listOutboundPhoneNumber(const ListOutboundPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary Query Intelligent Contact Robot call records.
 *
 * @description - Before invoking this API, ensure that you have already initiated an outbound job using the Intelligent Contact Robot.
 * - If you have not yet initiated an outbound job using the Intelligent Contact Robot, you can invoke the [RobotCall](https://help.aliyun.com/document_detail/2717996.html) API to start one.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListRobotCallDialogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotCallDialogResponse
 */
ListRobotCallDialogResponse Client::listRobotCallDialogWithOptions(const ListRobotCallDialogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.getCreateTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Query Intelligent Contact Robot call records.
 *
 * @description - Before invoking this API, ensure that you have already initiated an outbound job using the Intelligent Contact Robot.
 * - If you have not yet initiated an outbound job using the Intelligent Contact Robot, you can invoke the [RobotCall](https://help.aliyun.com/document_detail/2717996.html) API to start one.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListRobotCallDialogRequest
 * @return ListRobotCallDialogResponse
 */
ListRobotCallDialogResponse Client::listRobotCallDialog(const ListRobotCallDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotCallDialogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of robot node information based on the robot ID, which is the script ID.
 *
 * @description - Robot node information includes flow name, model name, node name, whether it is an output, and output ID.  
 * - Before invoking this API, you can confirm the robot ID (that is, the script ID) by following the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListRobotNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotNodeResponse
 */
ListRobotNodeResponse Client::listRobotNodeWithOptions(const ListRobotNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.getRobotId();
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
 * @summary Retrieves the list of robot node information based on the robot ID, which is the script ID.
 *
 * @description - Robot node information includes flow name, model name, node name, whether it is an output, and output ID.  
 * - Before invoking this API, you can confirm the robot ID (that is, the script ID) by following the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListRobotNodeRequest
 * @return ListRobotNodeResponse
 */
ListRobotNodeResponse Client::listRobotNode(const ListRobotNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotNodeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of robot parameters by robot ID, which is also the script ID.
 *
 * @description - Before invoking this API, ensure that you have already added input parameters for the robot.
 * - If your robot does not have any input parameters, go to the [**Script Management**](https://aiccs.console.aliyun.com/patter/list) > **Configuration** > **Input and Output Parameters** interface and click to add an input parameter.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListRobotParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRobotParamsResponse
 */
ListRobotParamsResponse Client::listRobotParamsWithOptions(const ListRobotParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.getRobotId();
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
 * @summary Queries the list of robot parameters by robot ID, which is also the script ID.
 *
 * @description - Before invoking this API, ensure that you have already added input parameters for the robot.
 * - If your robot does not have any input parameters, go to the [**Script Management**](https://aiccs.console.aliyun.com/patter/list) > **Configuration** > **Input and Output Parameters** interface and click to add an input parameter.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListRobotParamsRequest
 * @return ListRobotParamsResponse
 */
ListRobotParamsResponse Client::listRobotParams(const ListRobotParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRobotParamsWithOptions(request, runtime);
}

/**
 * @summary Invoke ListRoles to obtain the list of all roles under a tenant.
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
 * @summary Invoke ListRoles to obtain the list of all roles under a tenant.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary Query skill groups in the Cloud Customer Service System by instance ID and skill group channel type.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
 * @summary Query skill groups in the Cloud Customer Service System by instance ID and skill group channel type.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListSkillGroupRequest
 * @return ListSkillGroupResponse
 */
ListSkillGroupResponse Client::listSkillGroup(const ListSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Perform a paged query to retrieve the list of Intelligent Contact Robot call jobs. The response includes the total number of jobs and job details.
 *
 * @description - You can use this API to obtain the list of Intelligent Contact Robot call jobs, or retrieve the job list from the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - If you have not created any Intelligent Contact Robot call jobs, you can click **Create Job** in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by invoking the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * - The optional parameters of this API serve as Filter Conditions for the Intelligent Contact Robot call job list. If these parameters are not specified, the API queries all jobs.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 500 calls per second.
 * > If the combined invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskResponse
 */
ListTaskResponse Client::listTaskWithOptions(const ListTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRobotName()) {
    query["RobotName"] = request.getRobotName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
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
 * @summary Perform a paged query to retrieve the list of Intelligent Contact Robot call jobs. The response includes the total number of jobs and job details.
 *
 * @description - You can use this API to obtain the list of Intelligent Contact Robot call jobs, or retrieve the job list from the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - If you have not created any Intelligent Contact Robot call jobs, you can click **Create Job** in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by invoking the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * - The optional parameters of this API serve as Filter Conditions for the Intelligent Contact Robot call job list. If these parameters are not specified, the API queries all jobs.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No Rate Limiting.
 * - API frequency: 500 calls per second.
 * > If the combined invocations from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request ListTaskRequest
 * @return ListTaskResponse
 */
ListTaskResponse Client::listTask(const ListTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskWithOptions(request, runtime);
}

/**
 * @summary Obtain the detail information of Intelligent Contact Robot call jobs.
 *
 * @description - You can invoke this API to obtain the detail information of Intelligent Contact Robot call jobs. Alternatively, you can view this information in the **Detail** interface under [**Task Management**](https://aiccs.console.aliyun.com/job/list).
 * - Before invoking this API, ensure that you have created an Intelligent Contact Robot and successfully started a job.
 * - If you do not have any successfully created Intelligent Contact Robot call jobs, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
 * - The optional parameters in this API serve as filter conditions for the detail information of Intelligent Contact Robot call jobs. If these parameters are not specified, all job details will be queried.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskDetailResponse
 */
ListTaskDetailResponse Client::listTaskDetailWithOptions(const ListTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalled()) {
    query["Called"] = request.getCalled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.getStatusCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Obtain the detail information of Intelligent Contact Robot call jobs.
 *
 * @description - You can invoke this API to obtain the detail information of Intelligent Contact Robot call jobs. Alternatively, you can view this information in the **Detail** interface under [**Task Management**](https://aiccs.console.aliyun.com/job/list).
 * - Before invoking this API, ensure that you have created an Intelligent Contact Robot and successfully started a job.
 * - If you do not have any successfully created Intelligent Contact Robot call jobs, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
 * - The optional parameters in this API serve as filter conditions for the detail information of Intelligent Contact Robot call jobs. If these parameters are not specified, all job details will be queried.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request ListTaskDetailRequest
 * @return ListTaskDetailResponse
 */
ListTaskDetailResponse Client::listTaskDetail(const ListTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Performs full-duplex large language model operations.
 *
 * @description - This operation can be called only during an intelligent outbound call. When you call this operation, set the **CallId** request parameter to the unique receipt ID of the ongoing call.
 * - **CallId** is the **CallId** parameter returned by the [LlmSmartCallFullDuplex](https://help.aliyun.com/document_detail/2718012.html) operation.
 *
 * @param request LlmFullDuplexCallOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmFullDuplexCallOperateResponse
 */
LlmFullDuplexCallOperateResponse Client::llmFullDuplexCallOperateWithOptions(const LlmFullDuplexCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LlmFullDuplexCallOperate"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LlmFullDuplexCallOperateResponse>();
}

/**
 * @summary Performs full-duplex large language model operations.
 *
 * @description - This operation can be called only during an intelligent outbound call. When you call this operation, set the **CallId** request parameter to the unique receipt ID of the ongoing call.
 * - **CallId** is the **CallId** parameter returned by the [LlmSmartCallFullDuplex](https://help.aliyun.com/document_detail/2718012.html) operation.
 *
 * @param request LlmFullDuplexCallOperateRequest
 * @return LlmFullDuplexCallOperateResponse
 */
LlmFullDuplexCallOperateResponse Client::llmFullDuplexCallOperate(const LlmFullDuplexCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmFullDuplexCallOperateWithOptions(request, runtime);
}

/**
 * @summary Intelligent outbound call based on an LLM.
 *
 * @description - Each API invocation supports adding only one called number. If you have multiple called numbers, invoke the API multiple times.
 * - Before initiating an intelligent call based on an LLM, ensure that you have created an LLM application in the [Application Management](https://aiccs.console.aliyun.com/engine/llmApp) interface and have successfully requested a real number in the Voice Service [Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
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
    request.setBizParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizParam(), "BizParam", "json"));
  }

  if (!!tmpReq.hasPromptParam()) {
    request.setPromptParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPromptParam(), "PromptParam", "json"));
  }

  if (!!tmpReq.hasStartWordParam()) {
    request.setStartWordParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartWordParam(), "StartWordParam", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasBizParamShrink()) {
    query["BizParam"] = request.getBizParamShrink();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.getCallerNumber();
  }

  if (!!request.hasCustomerLineCode()) {
    query["CustomerLineCode"] = request.getCustomerLineCode();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.getExtension();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasPromptParamShrink()) {
    query["PromptParam"] = request.getPromptParamShrink();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasStartWordParamShrink()) {
    query["StartWordParam"] = request.getStartWordParamShrink();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.getTtsSpeed();
  }

  if (!!request.hasTtsVoiceCode()) {
    query["TtsVoiceCode"] = request.getTtsVoiceCode();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.getTtsVolume();
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
 * @summary Intelligent outbound call based on an LLM.
 *
 * @description - Each API invocation supports adding only one called number. If you have multiple called numbers, invoke the API multiple times.
 * - Before initiating an intelligent call based on an LLM, ensure that you have created an LLM application in the [Application Management](https://aiccs.console.aliyun.com/engine/llmApp) interface and have successfully requested a real number in the Voice Service [Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
 *
 * @param request LlmSmartCallRequest
 * @return LlmSmartCallResponse
 */
LlmSmartCallResponse Client::llmSmartCall(const LlmSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmSmartCallWithOptions(request, runtime);
}

/**
 * @summary Initiates a smart call to an encrypted number using a large language model.
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
    request.setPromptParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPromptParam(), "PromptParam", "json"));
  }

  if (!!tmpReq.hasStartWordParam()) {
    request.setStartWordParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartWordParam(), "StartWordParam", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.getCallerNumber();
  }

  if (!!request.hasEncryptCalledNumber()) {
    query["EncryptCalledNumber"] = request.getEncryptCalledNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPromptParamShrink()) {
    query["PromptParam"] = request.getPromptParamShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartWordParamShrink()) {
    query["StartWordParam"] = request.getStartWordParamShrink();
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
 * @summary Initiates a smart call to an encrypted number using a large language model.
 *
 * @param request LlmSmartCallEncryptRequest
 * @return LlmSmartCallEncryptResponse
 */
LlmSmartCallEncryptResponse Client::llmSmartCallEncrypt(const LlmSmartCallEncryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmSmartCallEncryptWithOptions(request, runtime);
}

/**
 * @summary Initiates a full-duplex Artificial Intelligence Cloud Call Service call with support for personalized configurations.
 *
 * @description ## Operation description
 * - Before calling this operation, make sure that you have configured the ASR callback URL.
 * - This operation is available only to users whose UIDs are added to the whitelist.
 * - The request rate limit for a single user is 100 QPS.
 * - `CalledNumber` and `CallerNumber` are required parameters that specify the called number and the calling number, respectively.
 * - Optional parameters such as `StartWordParam`, `TtsVoiceCode`, `TtsSpeed`, and `TtsVolume` allow you to customize the call experience. If these parameters are not specified, the default settings of the application are used.
 * - The `SessionTimeout` parameter specifies the maximum call duration in seconds. The call is automatically ended when the specified duration is exceeded. For the default value and valid range, refer to the relevant documentation.
 * - The `OutId` field can be used to track a unique identifier in an external system. The value must be 1 to 32 bytes in length.
 *
 * @param tmpReq LlmSmartCallFullDuplexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmSmartCallFullDuplexResponse
 */
LlmSmartCallFullDuplexResponse Client::llmSmartCallFullDuplexWithOptions(const LlmSmartCallFullDuplexRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LlmSmartCallFullDuplexShrinkRequest request = LlmSmartCallFullDuplexShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStartWordParam()) {
    request.setStartWordParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartWordParam(), "StartWordParam", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.getCallerNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasStartWordParamShrink()) {
    query["StartWordParam"] = request.getStartWordParamShrink();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.getTtsSpeed();
  }

  if (!!request.hasTtsVoiceCode()) {
    query["TtsVoiceCode"] = request.getTtsVoiceCode();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.getTtsVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LlmSmartCallFullDuplex"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LlmSmartCallFullDuplexResponse>();
}

/**
 * @summary Initiates a full-duplex Artificial Intelligence Cloud Call Service call with support for personalized configurations.
 *
 * @description ## Operation description
 * - Before calling this operation, make sure that you have configured the ASR callback URL.
 * - This operation is available only to users whose UIDs are added to the whitelist.
 * - The request rate limit for a single user is 100 QPS.
 * - `CalledNumber` and `CallerNumber` are required parameters that specify the called number and the calling number, respectively.
 * - Optional parameters such as `StartWordParam`, `TtsVoiceCode`, `TtsSpeed`, and `TtsVolume` allow you to customize the call experience. If these parameters are not specified, the default settings of the application are used.
 * - The `SessionTimeout` parameter specifies the maximum call duration in seconds. The call is automatically ended when the specified duration is exceeded. For the default value and valid range, refer to the relevant documentation.
 * - The `OutId` field can be used to track a unique identifier in an external system. The value must be 1 to 32 bytes in length.
 *
 * @param request LlmSmartCallFullDuplexRequest
 * @return LlmSmartCallFullDuplexResponse
 */
LlmSmartCallFullDuplexResponse Client::llmSmartCallFullDuplex(const LlmSmartCallFullDuplexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmSmartCallFullDuplexWithOptions(request, runtime);
}

/**
 * @summary Invoke MakeCall to initiate a call.
 *
 * @param request MakeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCallWithOptions(const MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasCommandCode()) {
    query["CommandCode"] = request.getCommandCode();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.getExtInfo();
  }

  if (!!request.hasOuterAccountId()) {
    query["OuterAccountId"] = request.getOuterAccountId();
  }

  if (!!request.hasOuterAccountType()) {
    query["OuterAccountType"] = request.getOuterAccountType();
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
 * @summary Invoke MakeCall to initiate a call.
 *
 * @param request MakeCallRequest
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCall(const MakeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke MakeDoubleCall to initiate a call by using the server-side software development kit (SDK).
 *
 * @param request MakeDoubleCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeDoubleCallResponse
 */
MakeDoubleCallResponse Client::makeDoubleCallWithOptions(const MakeDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasBizData()) {
    query["BizData"] = request.getBizData();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberPhone()) {
    query["MemberPhone"] = request.getMemberPhone();
  }

  if (!!request.hasOutboundCallNumber()) {
    query["OutboundCallNumber"] = request.getOutboundCallNumber();
  }

  if (!!request.hasServicerPhone()) {
    query["ServicerPhone"] = request.getServicerPhone();
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
 * @summary You can invoke MakeDoubleCall to initiate a call by using the server-side software development kit (SDK).
 *
 * @param request MakeDoubleCallRequest
 * @return MakeDoubleCallResponse
 */
MakeDoubleCallResponse Client::makeDoubleCall(const MakeDoubleCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeDoubleCallWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of agents.
 *
 * @param request PageQueryAgentListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageQueryAgentListResponse
 */
PageQueryAgentListResponse Client::pageQueryAgentListWithOptions(const PageQueryAgentListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PageQueryAgentList"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageQueryAgentListResponse>();
}

/**
 * @summary Returns a paginated list of agents.
 *
 * @param request PageQueryAgentListRequest
 * @return PageQueryAgentListResponse
 */
PageQueryAgentListResponse Client::pageQueryAgentList(const PageQueryAgentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageQueryAgentListWithOptions(request, runtime);
}

/**
 * @summary Retrieve a paginated list of agents (agency mode V2)
 *
 * @param request PageQueryAgentListNewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageQueryAgentListNewResponse
 */
PageQueryAgentListNewResponse Client::pageQueryAgentListNewWithOptions(const PageQueryAgentListNewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasIsAvailable()) {
    query["IsAvailable"] = request.getIsAvailable();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PageQueryAgentListNew"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageQueryAgentListNewResponse>();
}

/**
 * @summary Retrieve a paginated list of agents (agency mode V2)
 *
 * @param request PageQueryAgentListNewRequest
 * @return PageQueryAgentListNewResponse
 */
PageQueryAgentListNewResponse Client::pageQueryAgentListNew(const PageQueryAgentListNewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageQueryAgentListNewWithOptions(request, runtime);
}

/**
 * @summary Runs a paginated query for call task details.
 *
 * @description - You must create a call task before you can query its details.
 * - You can create a call task on the **call task management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) API.
 *
 * @param tmpReq QueryAiCallDetailPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallDetailPageResponse
 */
QueryAiCallDetailPageResponse Client::queryAiCallDetailPageWithOptions(const QueryAiCallDetailPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryAiCallDetailPageShrinkRequest request = QueryAiCallDetailPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetailIds()) {
    request.setDetailIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetailIds(), "DetailIds", "json"));
  }

  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasCallResult()) {
    query["CallResult"] = request.getCallResult();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasDetailIdsShrink()) {
    query["DetailIds"] = request.getDetailIdsShrink();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.getEncryptionType();
  }

  if (!!request.hasEndCallingTime()) {
    query["EndCallingTime"] = request.getEndCallingTime();
  }

  if (!!request.hasEndImportedTime()) {
    query["EndImportedTime"] = request.getEndImportedTime();
  }

  if (!!request.hasMajorIntent()) {
    query["MajorIntent"] = request.getMajorIntent();
  }

  if (!!request.hasMaxConversationDuration()) {
    query["MaxConversationDuration"] = request.getMaxConversationDuration();
  }

  if (!!request.hasMinConversationDuration()) {
    query["MinConversationDuration"] = request.getMinConversationDuration();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartCallingTime()) {
    query["StartCallingTime"] = request.getStartCallingTime();
  }

  if (!!request.hasStartImportedTime()) {
    query["StartImportedTime"] = request.getStartImportedTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Runs a paginated query for call task details.
 *
 * @description - You must create a call task before you can query its details.
 * - You can create a call task on the **call task management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) API.
 *
 * @param request QueryAiCallDetailPageRequest
 * @return QueryAiCallDetailPageResponse
 */
QueryAiCallDetailPageResponse Client::queryAiCallDetailPage(const QueryAiCallDetailPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallDetailPageWithOptions(request, runtime);
}

/**
 * @summary Gets basic information for a call task.
 *
 * @param request QueryAiCallTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallTaskDetailResponse
 */
QueryAiCallTaskDetailResponse Client::queryAiCallTaskDetailWithOptions(const QueryAiCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Gets basic information for a call task.
 *
 * @param request QueryAiCallTaskDetailRequest
 * @return QueryAiCallTaskDetailResponse
 */
QueryAiCallTaskDetailResponse Client::queryAiCallTaskDetail(const QueryAiCallTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of call tasks.
 *
 * @param request QueryAiCallTaskPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiCallTaskPageResponse
 */
QueryAiCallTaskPageResponse Client::queryAiCallTaskPageWithOptions(const QueryAiCallTaskPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
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
 * @summary Retrieves a list of call tasks.
 *
 * @param request QueryAiCallTaskPageRequest
 * @return QueryAiCallTaskPageResponse
 */
QueryAiCallTaskPageResponse Client::queryAiCallTaskPage(const QueryAiCallTaskPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiCallTaskPageWithOptions(request, runtime);
}

/**
 * @summary Retrieve the details of a communication agent.
 *
 * @param request QueryAiVoiceAgentDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiVoiceAgentDetailResponse
 */
QueryAiVoiceAgentDetailResponse Client::queryAiVoiceAgentDetailWithOptions(const QueryAiVoiceAgentDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAiVoiceAgentDetail"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAiVoiceAgentDetailResponse>();
}

/**
 * @summary Retrieve the details of a communication agent.
 *
 * @param request QueryAiVoiceAgentDetailRequest
 * @return QueryAiVoiceAgentDetailResponse
 */
QueryAiVoiceAgentDetailResponse Client::queryAiVoiceAgentDetail(const QueryAiVoiceAgentDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiVoiceAgentDetailWithOptions(request, runtime);
}

/**
 * @summary Gets details for a specified agent, including its basic, branch, and version information.
 *
 * @description ## Usage notes
 * - This API retrieves the details of a communication agent.
 * - If you do not specify `BranchId` and `VersionId`, the API returns the configuration for the latest published version on the effective branch. If the effective branch only contains a draft version, no configuration is returned.
 * - If you specify only `BranchId`, the API returns the configuration for the latest published version on the specified branch. If the specified branch only contains a draft version, no configuration is returned.
 * - If you specify both `BranchId` and `VersionId`, the API returns the configuration for the specified version.
 * - When `BranchDeployStatus` is `1` (branch deployed) and `VersionPublishStatus` is `1` (version published), imported outbound tasks use the configuration of this branch.
 *
 * @param request QueryAiVoiceAgentDetailNewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAiVoiceAgentDetailNewResponse
 */
QueryAiVoiceAgentDetailNewResponse Client::queryAiVoiceAgentDetailNewWithOptions(const QueryAiVoiceAgentDetailNewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasBranchId()) {
    query["BranchId"] = request.getBranchId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAiVoiceAgentDetailNew"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAiVoiceAgentDetailNewResponse>();
}

/**
 * @summary Gets details for a specified agent, including its basic, branch, and version information.
 *
 * @description ## Usage notes
 * - This API retrieves the details of a communication agent.
 * - If you do not specify `BranchId` and `VersionId`, the API returns the configuration for the latest published version on the effective branch. If the effective branch only contains a draft version, no configuration is returned.
 * - If you specify only `BranchId`, the API returns the configuration for the latest published version on the specified branch. If the specified branch only contains a draft version, no configuration is returned.
 * - If you specify both `BranchId` and `VersionId`, the API returns the configuration for the specified version.
 * - When `BranchDeployStatus` is `1` (branch deployed) and `VersionPublishStatus` is `1` (version published), imported outbound tasks use the configuration of this branch.
 *
 * @param request QueryAiVoiceAgentDetailNewRequest
 * @return QueryAiVoiceAgentDetailNewResponse
 */
QueryAiVoiceAgentDetailNewResponse Client::queryAiVoiceAgentDetailNew(const QueryAiVoiceAgentDetailNewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAiVoiceAgentDetailNewWithOptions(request, runtime);
}

/**
 * @summary Gets call details.
 *
 * @description - This API retrieves call details. You can also view these details on the **call task management** > **details** > **execution history** > **completed** > **call details** page.
 * - Before calling this API, make sure you have created a call task and imported called number data.
 * - You can create a call task and import called number data either on the **call task management** page or by using the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) APIs.
 *
 * @param request QueryConversationDetailInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConversationDetailInfoResponse
 */
QueryConversationDetailInfoResponse Client::queryConversationDetailInfoWithOptions(const QueryConversationDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasDetailId()) {
    query["DetailId"] = request.getDetailId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Gets call details.
 *
 * @description - This API retrieves call details. You can also view these details on the **call task management** > **details** > **execution history** > **completed** > **call details** page.
 * - Before calling this API, make sure you have created a call task and imported called number data.
 * - You can create a call task and import called number data either on the **call task management** page or by using the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) APIs.
 *
 * @param request QueryConversationDetailInfoRequest
 * @return QueryConversationDetailInfoResponse
 */
QueryConversationDetailInfoResponse Client::queryConversationDetailInfo(const QueryConversationDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConversationDetailInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a call task and call records.
 *
 * @description - You can call this operation to query call details. You can also view call details in the **Call Task Management** > **Details** > **Execution Records** > **Completed** > **Call Details** console.
 * - Before calling this operation, make sure that you have created a call task and imported callee data.
 * - If you do not have a created call task, create a call task and import callee data in the **Call Task Management** console, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) operations to create a call task and import callee data.
 *
 * @param request QueryConversationDetailInfoNewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConversationDetailInfoNewResponse
 */
QueryConversationDetailInfoNewResponse Client::queryConversationDetailInfoNewWithOptions(const QueryConversationDetailInfoNewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasDetailId()) {
    query["DetailId"] = request.getDetailId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryConversationDetailInfoNew"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConversationDetailInfoNewResponse>();
}

/**
 * @summary Queries the details of a call task and call records.
 *
 * @description - You can call this operation to query call details. You can also view call details in the **Call Task Management** > **Details** > **Execution Records** > **Completed** > **Call Details** console.
 * - Before calling this operation, make sure that you have created a call task and imported callee data.
 * - If you do not have a created call task, create a call task and import callee data in the **Call Task Management** console, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) operations to create a call task and import callee data.
 *
 * @param request QueryConversationDetailInfoNewRequest
 * @return QueryConversationDetailInfoNewResponse
 */
QueryConversationDetailInfoNewResponse Client::queryConversationDetailInfoNew(const QueryConversationDetailInfoNewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConversationDetailInfoNewWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryHotlineInQueue to obtain hotline agent data for a skill group by skill group ID.
 *
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
 * @summary Invoke QueryHotlineInQueue to obtain hotline agent data for a skill group by skill group ID.
 *
 * @param request QueryHotlineInQueueRequest
 * @return QueryHotlineInQueueResponse
 */
QueryHotlineInQueueResponse Client::queryHotlineInQueue(const QueryHotlineInQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHotlineInQueueWithOptions(request, runtime);
}

/**
 * @summary Query the hotline number configuration list by instance ID. Fuzzy query by hotline number is supported.
 *
 * @description The hotline number configuration includes information such as the hotline number, number location, carrier, and whether it is used for incoming calls. For details, see [Return Parameters](#api-detail-40).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.
 * - API invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
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
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "json"));
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
 * @summary Query the hotline number configuration list by instance ID. Fuzzy query by hotline number is supported.
 *
 * @description The hotline number configuration includes information such as the hotline number, number location, carrier, and whether it is used for incoming calls. For details, see [Return Parameters](#api-detail-40).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: 100 times per second.
 * - API invocation frequency: 100 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request QueryHotlineNumberRequest
 * @return QueryHotlineNumberResponse
 */
QueryHotlineNumberResponse Client::queryHotlineNumber(const QueryHotlineNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHotlineNumberWithOptions(request, runtime);
}

/**
 * @summary 查询呼入CallId
 *
 * @param request QueryInboundCallIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInboundCallIdResponse
 */
QueryInboundCallIdResponse Client::queryInboundCallIdWithOptions(const QueryInboundCallIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallDate()) {
    query["CallDate"] = request.getCallDate();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInboundCallId"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInboundCallIdResponse>();
}

/**
 * @summary 查询呼入CallId
 *
 * @param request QueryInboundCallIdRequest
 * @return QueryInboundCallIdResponse
 */
QueryInboundCallIdResponse Client::queryInboundCallId(const QueryInboundCallIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInboundCallIdWithOptions(request, runtime);
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
    query["Ani"] = request.getAni();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.getSkillGroup();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Queries the skill group list of the Cloud Customer Service System by instance ID.
 *
 * @description This API allows you to query information such as the display name, description, channel type, and ID of skill groups. For details, see [Response Parameters](#api-detail-40).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request QuerySkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySkillGroupsResponse
 */
QuerySkillGroupsResponse Client::querySkillGroupsWithOptions(const QuerySkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the skill group list of the Cloud Customer Service System by instance ID.
 *
 * @description This API allows you to query information such as the display name, description, channel type, and ID of skill groups. For details, see [Response Parameters](#api-detail-40).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
    query["Ani"] = request.getAni();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepartmentIdList()) {
    query["DepartmentIdList"] = request.getDepartmentIdList();
  }

  if (!!request.hasDnis()) {
    query["Dnis"] = request.getDnis();
  }

  if (!!request.hasEndReasonList()) {
    query["EndReasonList"] = request.getEndReasonList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.getOutboundTaskId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPriorityList()) {
    query["PriorityList"] = request.getPriorityList();
  }

  if (!!request.hasServicerId()) {
    query["ServicerId"] = request.getServicerId();
  }

  if (!!request.hasServicerName()) {
    query["ServicerName"] = request.getServicerName();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasSkillGroup()) {
    query["SkillGroup"] = request.getSkillGroup();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Invoke the QueryTickets API to query ticket information.
 *
 * @param tmpReq QueryTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTicketsResponse
 */
QueryTicketsResponse Client::queryTicketsWithOptions(const QueryTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryTicketsShrinkRequest request = QueryTicketsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  json body = {};
  if (!!request.hasCaseId()) {
    body["CaseId"] = request.getCaseId();
  }

  if (!!request.hasCaseStatus()) {
    body["CaseStatus"] = request.getCaseStatus();
  }

  if (!!request.hasCaseType()) {
    body["CaseType"] = request.getCaseType();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDealId()) {
    body["DealId"] = request.getDealId();
  }

  if (!!request.hasExtraShrink()) {
    body["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSrType()) {
    body["SrType"] = request.getSrType();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTouchId()) {
    body["TouchId"] = request.getTouchId();
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
 * @summary Invoke the QueryTickets API to query ticket information.
 *
 * @param request QueryTicketsRequest
 * @return QueryTicketsResponse
 */
QueryTicketsResponse Client::queryTickets(const QueryTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTicketsWithOptions(request, runtime);
}

/**
 * @summary Query contact data by instance, list of contact IDs, list of session IDs, and so on.
 *
 * @description This API allows you to query contact data such as contact status, session recipient, agent name, contact channel, satisfaction rating, and evaluation status. For details, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limit  
 * - Per-user invocation frequency: No Rate Limiting.  
 * - API frequency: 50 queries per second (QPS).  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request QueryTouchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTouchListResponse
 */
QueryTouchListResponse Client::queryTouchListWithOptions(const QueryTouchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasChannelType()) {
    body["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCloseTimeEnd()) {
    body["CloseTimeEnd"] = request.getCloseTimeEnd();
  }

  if (!!request.hasCloseTimeStart()) {
    body["CloseTimeStart"] = request.getCloseTimeStart();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.getEvaluationLevel();
  }

  if (!!request.hasEvaluationScore()) {
    body["EvaluationScore"] = request.getEvaluationScore();
  }

  if (!!request.hasEvaluationStatus()) {
    body["EvaluationStatus"] = request.getEvaluationStatus();
  }

  if (!!request.hasFirstTimeEnd()) {
    body["FirstTimeEnd"] = request.getFirstTimeEnd();
  }

  if (!!request.hasFirstTimeStart()) {
    body["FirstTimeStart"] = request.getFirstTimeStart();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    body["MemberId"] = request.getMemberId();
  }

  if (!!request.hasMemberName()) {
    body["MemberName"] = request.getMemberName();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueueId()) {
    body["QueueId"] = request.getQueueId();
  }

  if (!!request.hasServicerId()) {
    body["ServicerId"] = request.getServicerId();
  }

  if (!!request.hasServicerName()) {
    body["ServicerName"] = request.getServicerName();
  }

  if (!!request.hasTouchId()) {
    body["TouchId"] = request.getTouchId();
  }

  if (!!request.hasTouchType()) {
    body["TouchType"] = request.getTouchType();
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
 * @summary Query contact data by instance, list of contact IDs, list of session IDs, and so on.
 *
 * @description This API allows you to query contact data such as contact status, session recipient, agent name, contact channel, satisfaction rating, and evaluation status. For details, see [Response parameters](#api-detail-40).  
 * ### Queries per second (QPS) limit  
 * - Per-user invocation frequency: No Rate Limiting.  
 * - API frequency: 50 queries per second (QPS).  
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request QueryTouchListRequest
 * @return QueryTouchListResponse
 */
QueryTouchListResponse Client::queryTouchList(const QueryTouchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTouchListWithOptions(request, runtime);
}

/**
 * @summary Remove agent accounts from a skill group by specifying the skill group and agent IDs.
 *
 * @description - If you need to provide agent or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * - You can invoke [ListAgentBySkillGroupId](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-listagentbyskillgroupid) to retrieve agent information under a skill group and verify whether the removal aligns with your expectations.
 * - If you accidentally remove an agent, you can invoke [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update the agent data and reassign the skill group to the agent.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 50 times/second.
 * - API-wide invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
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
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentIdsShrink()) {
    query["AgentIds"] = request.getAgentIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary Remove agent accounts from a skill group by specifying the skill group and agent IDs.
 *
 * @description - If you need to provide agent or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * - You can invoke [ListAgentBySkillGroupId](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-listagentbyskillgroupid) to retrieve agent information under a skill group and verify whether the removal aligns with your expectations.
 * - If you accidentally remove an agent, you can invoke [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update the agent data and reassign the skill group to the agent.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 50 times/second.
 * - API-wide invocation frequency: 100 times/second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request RemoveAgentFromSkillGroupRequest
 * @return RemoveAgentFromSkillGroupResponse
 */
RemoveAgentFromSkillGroupResponse Client::removeAgentFromSkillGroup(const RemoveAgentFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAgentFromSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a skill group in the Cloud Customer Service System based on the AICCS instance ID and skill group ID.
 *
 * @description - Deletion is a sensitive operation. Proceed with caution.  
 * - Before deletion, confirm the AICCS instance ID and the skill group ID to be deleted. Refer to the guidance in [Request Parameters](#api-detail-35) for details on how to obtain them.  
 * - After deletion, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to verify the skill group status.  
 * - If you accidentally delete a skill group, you can recreate it by invoking the [CreateSkillGroup](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup) API.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request RemoveSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSkillGroupResponse
 */
RemoveSkillGroupResponse Client::removeSkillGroupWithOptions(const RemoveSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary Deletes a skill group in the Cloud Customer Service System based on the AICCS instance ID and skill group ID.
 *
 * @description - Deletion is a sensitive operation. Proceed with caution.  
 * - Before deletion, confirm the AICCS instance ID and the skill group ID to be deleted. Refer to the guidance in [Request Parameters](#api-detail-35) for details on how to obtain them.  
 * - After deletion, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to verify the skill group status.  
 * - If you accidentally delete a skill group, you can recreate it by invoking the [CreateSkillGroup](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup) API.
 * ### Queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 1000 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request RemoveSkillGroupRequest
 * @return RemoveSkillGroupResponse
 */
RemoveSkillGroupResponse Client::removeSkillGroup(const RemoveSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the ResetHotlineNumber API to reset the inbound (IVR flow) and outbound (effective scope) configuration information of a hotline number.
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
    request.setOutboundRangeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutboundRangeList(), "OutboundRangeList", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableInbound()) {
    body["EnableInbound"] = request.getEnableInbound();
  }

  if (!!request.hasEnableInboundEvaluation()) {
    body["EnableInboundEvaluation"] = request.getEnableInboundEvaluation();
  }

  if (!!request.hasEnableOutbound()) {
    body["EnableOutbound"] = request.getEnableOutbound();
  }

  if (!!request.hasEnableOutboundEvaluation()) {
    body["EnableOutboundEvaluation"] = request.getEnableOutboundEvaluation();
  }

  if (!!request.hasEvaluationLevel()) {
    body["EvaluationLevel"] = request.getEvaluationLevel();
  }

  if (!!request.hasHotlineNumber()) {
    body["HotlineNumber"] = request.getHotlineNumber();
  }

  if (!!request.hasInboundFlowId()) {
    body["InboundFlowId"] = request.getInboundFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundAllDepart()) {
    body["OutboundAllDepart"] = request.getOutboundAllDepart();
  }

  if (!!request.hasOutboundRangeListShrink()) {
    body["OutboundRangeList"] = request.getOutboundRangeListShrink();
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
 * @summary Invoke the ResetHotlineNumber API to reset the inbound (IVR flow) and outbound (effective scope) configuration information of a hotline number.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.getOutboundTaskId();
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
 * @summary Initiate an outbound call using the Intelligent Contact Robot.
 *
 * @description - Before initiating an outbound call using the Intelligent Contact Robot, ensure that you already have a reviewed and approved script in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface and an approved real number in the Voice Service [Real Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
 * - You can obtain the creation time of the call from the **date** parameter in the **Response Header** after invoking this API.  
 * > For example, if the **date** parameter is: `"date": "Mon, 24 Jun 2024 03:40:31 GMT"`, then the call creation time is: `"2024-06-24 03:40:31"`.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request RobotCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RobotCallResponse
 */
RobotCallResponse Client::robotCallWithOptions(const RobotCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.getEarlyMediaAsr();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.getRecordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.getRobotId();
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
 * @summary Initiate an outbound call using the Intelligent Contact Robot.
 *
 * @description - Before initiating an outbound call using the Intelligent Contact Robot, ensure that you already have a reviewed and approved script in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface and an approved real number in the Voice Service [Real Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
 * - You can obtain the creation time of the call from the **date** parameter in the **Response Header** after invoking this API.  
 * > For example, if the **date** parameter is: `"date": "Mon, 24 Jun 2024 03:40:31 GMT"`, then the call creation time is: `"2024-06-24 03:40:31"`.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 1000 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttle will be triggered.
 *
 * @param request RobotCallRequest
 * @return RobotCallResponse
 */
RobotCallResponse Client::robotCall(const RobotCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return robotCallWithOptions(request, runtime);
}

/**
 * @summary Initiate an Intelligent Speech Interaction call based on the callee\\"s caller ID, callee number, and intelligent outbound call audio file.
 *
 * @description - The following characters cannot appear in the Intelligent Speech Interaction SendCcoSmartCall callback: `@ = : "" $ { } ^ * ￥`.  
 * - After invoking this API, the **Data** field in the response contains the unique receipt ID for this call, which can be used when invoking the [SendCcoSmartCallOperate](https://help.aliyun.com/document_detail/2718013.html) API.
 * ### Queries Per Second (QPS) Limits
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request SendCcoSmartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCcoSmartCallResponse
 */
SendCcoSmartCallResponse Client::sendCcoSmartCallWithOptions(const SendCcoSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionCodeBreak()) {
    query["ActionCodeBreak"] = request.getActionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.getActionCodeTimeBreak();
  }

  if (!!request.hasAsrAlsAmId()) {
    query["AsrAlsAmId"] = request.getAsrAlsAmId();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.getAsrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasAsrVocabularyId()) {
    query["AsrVocabularyId"] = request.getAsrVocabularyId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.getBackgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.getBackgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.getBackgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.getDynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.getEarlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.getEnableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.getMuteTime();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.getPauseTime();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.getRecordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.getTtsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.getTtsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.getTtsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.getTtsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.getVoiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
 * @summary Initiate an Intelligent Speech Interaction call based on the callee\\"s caller ID, callee number, and intelligent outbound call audio file.
 *
 * @description - The following characters cannot appear in the Intelligent Speech Interaction SendCcoSmartCall callback: `@ = : "" $ { } ^ * ￥`.  
 * - After invoking this API, the **Data** field in the response contains the unique receipt ID for this call, which can be used when invoking the [SendCcoSmartCallOperate](https://help.aliyun.com/document_detail/2718013.html) API.
 * ### Queries Per Second (QPS) Limits
 * - Per-user invocation frequency: No rate limiting.  
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request SendCcoSmartCallRequest
 * @return SendCcoSmartCallResponse
 */
SendCcoSmartCallResponse Client::sendCcoSmartCall(const SendCcoSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCcoSmartCallWithOptions(request, runtime);
}

/**
 * @summary Initiates a specified action during an Intelligent Outbound Call, applicable only to scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
 *
 * @description - This API can be successfully invoked only during an ongoing Intelligent Outbound Call. When invoking it, note that the **CallId** in the request parameters must be set to the unique receipt ID of the active call.  
 * - The **CallId** is the **Data** parameter returned when you invoke the [SendCcoSmartCall](https://help.aliyun.com/document_detail/2718012.html) API.
 *
 * @param request SendCcoSmartCallOperateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCcoSmartCallOperateResponse
 */
SendCcoSmartCallOperateResponse Client::sendCcoSmartCallOperateWithOptions(const SendCcoSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Initiates a specified action during an Intelligent Outbound Call, applicable only to scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
 *
 * @description - This API can be successfully invoked only during an ongoing Intelligent Outbound Call. When invoking it, note that the **CallId** in the request parameters must be set to the unique receipt ID of the active call.  
 * - The **CallId** is the **Data** parameter returned when you invoke the [SendCcoSmartCall](https://help.aliyun.com/document_detail/2718012.html) API.
 *
 * @param request SendCcoSmartCallOperateRequest
 * @return SendCcoSmartCallOperateResponse
 */
SendCcoSmartCallOperateResponse Client::sendCcoSmartCallOperate(const SendCcoSmartCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCcoSmartCallOperateWithOptions(request, runtime);
}

/**
 * @summary Send a hotline heartbeat request based on the instance ID, agent account name, and heartbeat signature.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request SendHotlineHeartBeatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendHotlineHeartBeatResponse
 */
SendHotlineHeartBeatResponse Client::sendHotlineHeartBeatWithOptions(const SendHotlineHeartBeatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.getToken();
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
 * @summary Send a hotline heartbeat request based on the instance ID, agent account name, and heartbeat signature.
 *
 * @description ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request SendHotlineHeartBeatRequest
 * @return SendHotlineHeartBeatResponse
 */
SendHotlineHeartBeatResponse Client::sendHotlineHeartBeat(const SendHotlineHeartBeatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendHotlineHeartBeatWithOptions(request, runtime);
}

/**
 * @summary Starts a call task.
 *
 * @description - Before you start a call task, ensure its status is Stopped.
 * - If you do not have a call task, create one on the **Call Task Management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
 *
 * @param request StartAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAiCallTaskResponse
 */
StartAiCallTaskResponse Client::startAiCallTaskWithOptions(const StartAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Starts a call task.
 *
 * @description - Before you start a call task, ensure its status is Stopped.
 * - If you do not have a call task, create one on the **Call Task Management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
 *
 * @param request StartAiCallTaskRequest
 * @return StartAiCallTaskResponse
 */
StartAiCallTaskResponse Client::startAiCallTask(const StartAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary Start an outbound calling job by instance ID and job ID.
 *
 * @description - You can invoke this API to start an outbound calling job that is in the paused state.  
 * - An outbound calling job in the stopped state cannot be started again.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times per second.  
 * - API invocation frequency: 20 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAiOutboundTaskResponse
 */
StartAiOutboundTaskResponse Client::startAiOutboundTaskWithOptions(const StartAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Start an outbound calling job by instance ID and job ID.
 *
 * @description - You can invoke this API to start an outbound calling job that is in the paused state.  
 * - An outbound calling job in the stopped state cannot be started again.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times per second.  
 * - API invocation frequency: 20 times per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartAiOutboundTaskRequest
 * @return StartAiOutboundTaskResponse
 */
StartAiOutboundTaskResponse Client::startAiOutboundTask(const StartAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary Initiate an outbound call based on the instance ID, agent account name, hotline outbound caller number, and callee number.
 *
 * @description ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCallResponse
 */
StartCallResponse Client::startCallWithOptions(const StartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallee()) {
    body["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    body["Caller"] = request.getCaller();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Initiate an outbound call based on the instance ID, agent account name, hotline outbound caller number, and callee number.
 *
 * @description ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartCallRequest
 * @return StartCallResponse
 */
StartCallResponse Client::startCall(const StartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCallWithOptions(request, runtime);
}

/**
 * @summary Invoke StartCallV2 to initiate an outbound call V2.
 *
 * @param request StartCallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCallV2Response
 */
StartCallV2Response Client::startCallV2WithOptions(const StartCallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallee()) {
    body["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    body["Caller"] = request.getCaller();
  }

  if (!!request.hasCallerType()) {
    body["CallerType"] = request.getCallerType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke StartCallV2 to initiate an outbound call V2.
 *
 * @param request StartCallV2Request
 * @return StartCallV2Response
 */
StartCallV2Response Client::startCallV2(const StartCallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCallV2WithOptions(request, runtime);
}

/**
 * @summary Invoke StartChatWork to switch an online agent to the working status.
 *
 * @param request StartChatWorkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartChatWorkResponse
 */
StartChatWorkResponse Client::startChatWorkWithOptions(const StartChatWorkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke StartChatWork to switch an online agent to the working status.
 *
 * @param request StartChatWorkRequest
 * @return StartChatWorkResponse
 */
StartChatWorkResponse Client::startChatWork(const StartChatWorkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startChatWorkWithOptions(request, runtime);
}

/**
 * @summary Sign in a hotline agent by instance ID and agent account name to start the hotline service.
 *
 * @description - The **Data** parameter returned by this API is the token required to initiate a heartbeat.  
 * - If the agent takes a break, you can pause the hotline service by invoking the [SuspendHotlineService](https://help.aliyun.com/document_detail/2718046.html) API.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartHotlineServiceResponse
 */
StartHotlineServiceResponse Client::startHotlineServiceWithOptions(const StartHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Sign in a hotline agent by instance ID and agent account name to start the hotline service.
 *
 * @description - The **Data** parameter returned by this API is the token required to initiate a heartbeat.  
 * - If the agent takes a break, you can pause the hotline service by invoking the [SuspendHotlineService](https://help.aliyun.com/document_detail/2718046.html) API.
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartHotlineServiceRequest
 * @return StartHotlineServiceResponse
 */
StartHotlineServiceResponse Client::startHotlineService(const StartHotlineServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startHotlineServiceWithOptions(request, runtime);
}

/**
 * @summary Invoke the StartMicroOutbound API to initiate an outbound call request.
 *
 * @param request StartMicroOutboundRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMicroOutboundResponse
 */
StartMicroOutboundResponse Client::startMicroOutboundWithOptions(const StartMicroOutboundRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasCommandCode()) {
    query["CommandCode"] = request.getCommandCode();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.getExtInfo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Invoke the StartMicroOutbound API to initiate an outbound call request.
 *
 * @param request StartMicroOutboundRequest
 * @return StartMicroOutboundResponse
 */
StartMicroOutboundResponse Client::startMicroOutbound(const StartMicroOutboundRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMicroOutboundWithOptions(request, runtime);
}

/**
 * @summary Start a successfully created Intelligent Contact Robot calling job.
 *
 * @description - You can invoke this API to start a successfully created Intelligent Contact Robot calling job, or manually start the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page.
 * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
 * - If you do not have a successfully created Intelligent Contact Robot outbound calling job, you can click to create a job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page or create one by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTaskWithOptions(const StartTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartNow()) {
    query["StartNow"] = request.getStartNow();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Start a successfully created Intelligent Contact Robot calling job.
 *
 * @description - You can invoke this API to start a successfully created Intelligent Contact Robot calling job, or manually start the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page.
 * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
 * - If you do not have a successfully created Intelligent Contact Robot outbound calling job, you can click to create a job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page or create one by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
 * ### queries per second (QPS) Limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StartTaskRequest
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTask(const StartTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTaskWithOptions(request, runtime);
}

/**
 * @summary Stops an outbound call task.
 *
 * @description - Before you stop an outbound call task, ensure that the task has been created and its status is `running`.
 * - If you have not created an outbound call task, create one on the Outbound Task Management page or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
 *
 * @param request StopAiCallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAiCallTaskResponse
 */
StopAiCallTaskResponse Client::stopAiCallTaskWithOptions(const StopAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Stops an outbound call task.
 *
 * @description - Before you stop an outbound call task, ensure that the task has been created and its status is `running`.
 * - If you have not created an outbound call task, create one on the Outbound Task Management page or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
 *
 * @param request StopAiCallTaskRequest
 * @return StopAiCallTaskResponse
 */
StopAiCallTaskResponse Client::stopAiCallTask(const StopAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary Pause an outbound calling job by instance ID and job ID.
 *
 * @description After pausing an outbound calling job, you can invoke the [StartAiOutboundTask](https://help.aliyun.com/document_detail/2718027.html) API to restart it.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StopAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAiOutboundTaskResponse
 */
StopAiOutboundTaskResponse Client::stopAiOutboundTaskWithOptions(const StopAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Pause an outbound calling job by instance ID and job ID.
 *
 * @description After pausing an outbound calling job, you can invoke the [StartAiOutboundTask](https://help.aliyun.com/document_detail/2718027.html) API to restart it.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StopAiOutboundTaskRequest
 * @return StopAiOutboundTaskResponse
 */
StopAiOutboundTaskResponse Client::stopAiOutboundTask(const StopAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary Pause an Intelligent Contact Robot calling job that has been successfully started.
 *
 * @description - You can use this API to pause an Intelligent Contact Robot calling job that has been successfully started, or manually pause the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - Before invoking this API, ensure that you already have a successfully started Intelligent Contact Robot calling job.
 * - If you do not have a successfully started Intelligent Contact Robot calling job, click **Start** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or start a job by using the [StartTask](https://help.aliyun.com/document_detail/2718005.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StopTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTaskWithOptions(const StopTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Pause an Intelligent Contact Robot calling job that has been successfully started.
 *
 * @description - You can use this API to pause an Intelligent Contact Robot calling job that has been successfully started, or manually pause the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
 * - Before invoking this API, ensure that you already have a successfully started Intelligent Contact Robot calling job.
 * - If you do not have a successfully started Intelligent Contact Robot calling job, click **Start** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or start a job by using the [StartTask](https://help.aliyun.com/document_detail/2718005.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 500 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request StopTaskRequest
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTask(const StopTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a recording notes task.
 *
 * @param request SubmitAudioNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAudioNoteResponse
 */
SubmitAudioNoteResponse Client::submitAudioNoteWithOptions(const SubmitAudioNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasLlmModelId()) {
    query["LlmModelId"] = request.getLlmModelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAudioNote"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAudioNoteResponse>();
}

/**
 * @summary Submits a recording notes task.
 *
 * @param request SubmitAudioNoteRequest
 * @return SubmitAudioNoteResponse
 */
SubmitAudioNoteResponse Client::submitAudioNote(const SubmitAudioNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAudioNoteWithOptions(request, runtime);
}

/**
 * @summary Pause hotline service when an agent takes a short break.
 *
 * @description If the break ends and you need to resume hotline service, you can invoke the [StartHotlineService](https://help.aliyun.com/document_detail/2718045.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request SuspendHotlineServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendHotlineServiceResponse
 */
SuspendHotlineServiceResponse Client::suspendHotlineServiceWithOptions(const SuspendHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Pause hotline service when an agent takes a short break.
 *
 * @description If the break ends and you need to resume hotline service, you can invoke the [StartHotlineService](https://help.aliyun.com/document_detail/2718045.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 100 queries per second (QPS).
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundTaskId()) {
    query["OutboundTaskId"] = request.getOutboundTaskId();
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
 * @summary Terminate an outbound call job by instance ID and job ID.
 *
 * @description - This API supports terminating an outbound call job. Once terminated, the job cannot be restarted.
 * - To temporarily stop an outbound call job, you can invoke the [StopAiOutboundTask](https://help.aliyun.com/document_detail/2718024.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API-wide invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request TerminateAiOutboundTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateAiOutboundTaskResponse
 */
TerminateAiOutboundTaskResponse Client::terminateAiOutboundTaskWithOptions(const TerminateAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Terminate an outbound call job by instance ID and job ID.
 *
 * @description - This API supports terminating an outbound call job. Once terminated, the job cannot be restarted.
 * - To temporarily stop an outbound call job, you can invoke the [StopAiOutboundTask](https://help.aliyun.com/document_detail/2718024.html) API.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 20 times/second.
 * - API-wide invocation frequency: 20 times/second.
 * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request TerminateAiOutboundTaskRequest
 * @return TerminateAiOutboundTaskResponse
 */
TerminateAiOutboundTaskResponse Client::terminateAiOutboundTask(const TerminateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary TestLargeModel
 *
 * @param tmpReq TestLargeModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestLargeModelResponse
 */
TestLargeModelResponse Client::testLargeModelWithOptions(const TestLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TestLargeModelShrinkRequest request = TestLargeModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBaseModel()) {
    request.setBaseModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBaseModel(), "BaseModel", "json"));
  }

  json query = {};
  if (!!request.hasBaseModelShrink()) {
    query["BaseModel"] = request.getBaseModelShrink();
  }

  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUserDialogContent()) {
    query["UserDialogContent"] = request.getUserDialogContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestLargeModel"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestLargeModelResponse>();
}

/**
 * @summary TestLargeModel
 *
 * @param request TestLargeModelRequest
 * @return TestLargeModelResponse
 */
TestLargeModelResponse Client::testLargeModel(const TestLargeModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testLargeModelWithOptions(request, runtime);
}

/**
 * @summary Invoke the TransferCallToSkillGroup API to execute a single-step or two-step transfer to a skill group.
 *
 * @param request TransferCallToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferCallToSkillGroupResponse
 */
TransferCallToSkillGroupResponse Client::transferCallToSkillGroupWithOptions(const TransferCallToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallId()) {
    body["CallId"] = request.getCallId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    body["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasHoldConnectionId()) {
    body["HoldConnectionId"] = request.getHoldConnectionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSingleTransfer()) {
    body["IsSingleTransfer"] = request.getIsSingleTransfer();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Invoke the TransferCallToSkillGroup API to execute a single-step or two-step transfer to a skill group.
 *
 * @param request TransferCallToSkillGroupRequest
 * @return TransferCallToSkillGroupResponse
 */
TransferCallToSkillGroupResponse Client::transferCallToSkillGroup(const TransferCallToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferCallToSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Modify agent information in the Cloud Customer Service System based on the instance ID and agent account name. You can modify the agent\\"s display name and the skill groups to which the agent belongs.
 *
 * @description - Before invoking this API, we recommend that you confirm your Artificial Intelligence Cloud Call Service (AICCS) instance ID. For guidance on how to obtain it, see the description of [Request Parameters](#api-detail-35).
 * - After the update, you can invoke the [GetAgent](https://help.aliyun.com/document_detail/2717961.html) API to confirm whether the update meets your expectations.
 * > Currently, only the display name and assigned skill groups can be modified.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API-wide invocation frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request UpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    body["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary Modify agent information in the Cloud Customer Service System based on the instance ID and agent account name. You can modify the agent\\"s display name and the skill groups to which the agent belongs.
 *
 * @description - Before invoking this API, we recommend that you confirm your Artificial Intelligence Cloud Call Service (AICCS) instance ID. For guidance on how to obtain it, see the description of [Request Parameters](#api-detail-35).
 * - After the update, you can invoke the [GetAgent](https://help.aliyun.com/document_detail/2717961.html) API to confirm whether the update meets your expectations.
 * > Currently, only the display name and assigned skill groups can be modified.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: No rate limiting.
 * - API-wide invocation frequency: 100 queries per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @summary Updates a call task configuration.
 *
 * @description Ensure the call task is stopped before you update its configuration.
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
    request.setCallDayShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallDay(), "CallDay", "json"));
  }

  if (!!tmpReq.hasCallRetryReason()) {
    request.setCallRetryReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallRetryReason(), "CallRetryReason", "json"));
  }

  if (!!tmpReq.hasCallTime()) {
    request.setCallTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallTime(), "CallTime", "json"));
  }

  json query = {};
  if (!!request.hasCallDayShrink()) {
    query["CallDay"] = request.getCallDayShrink();
  }

  if (!!request.hasCallRetryInterval()) {
    query["CallRetryInterval"] = request.getCallRetryInterval();
  }

  if (!!request.hasCallRetryReasonShrink()) {
    query["CallRetryReason"] = request.getCallRetryReasonShrink();
  }

  if (!!request.hasCallRetryTimes()) {
    query["CallRetryTimes"] = request.getCallRetryTimes();
  }

  if (!!request.hasCallTimeShrink()) {
    query["CallTime"] = request.getCallTimeShrink();
  }

  if (!!request.hasLineEncoding()) {
    query["LineEncoding"] = request.getLineEncoding();
  }

  if (!!request.hasLinePhoneNum()) {
    query["LinePhoneNum"] = request.getLinePhoneNum();
  }

  if (!!request.hasMissCallRetry()) {
    query["MissCallRetry"] = request.getMissCallRetry();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneType()) {
    query["PhoneType"] = request.getPhoneType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStartType()) {
    query["StartType"] = request.getStartType();
  }

  if (!!request.hasTaskCps()) {
    query["TaskCps"] = request.getTaskCps();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStartTime()) {
    query["TaskStartTime"] = request.getTaskStartTime();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.getVirtualNumber();
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
 * @summary Updates a call task configuration.
 *
 * @description Ensure the call task is stopped before you update its configuration.
 *
 * @param request UpdateAiCallTaskRequest
 * @return UpdateAiCallTaskResponse
 */
UpdateAiCallTaskResponse Client::updateAiCallTask(const UpdateAiCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAiCallTaskWithOptions(request, runtime);
}

/**
 * @summary Update an outbound call job by instance ID and job ID.
 *
 * @description This API supports updating information such as the task name, task description, outbound caller number, and skill group ID. For details, see [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 20 times per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
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
    request.setOutboundNumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutboundNums(), "OutboundNums", "json"));
  }

  if (!!tmpReq.hasRecallRule()) {
    request.setRecallRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecallRule(), "RecallRule", "json"));
  }

  json query = {};
  if (!!request.hasConcurrentRate()) {
    query["ConcurrentRate"] = request.getConcurrentRate();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExecutionTime()) {
    query["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasForecastCallRate()) {
    query["ForecastCallRate"] = request.getForecastCallRate();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.getHandlerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumRepeated()) {
    query["NumRepeated"] = request.getNumRepeated();
  }

  if (!!request.hasOutboundNumsShrink()) {
    query["OutboundNums"] = request.getOutboundNumsShrink();
  }

  if (!!request.hasRecallRuleShrink()) {
    query["RecallRule"] = request.getRecallRuleShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Update an outbound call job by instance ID and job ID.
 *
 * @description This API supports updating information such as the task name, task description, outbound caller number, and skill group ID. For details, see [Request Parameters](#api-detail-35).
 * ### Queries per second (QPS) limit
 * - Per-user invocation frequency: No rate limiting.
 * - API frequency: 20 times per second.
 * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
 *
 * @param request UpdateAiOutboundTaskRequest
 * @return UpdateAiOutboundTaskResponse
 */
UpdateAiOutboundTaskResponse Client::updateAiOutboundTask(const UpdateAiOutboundTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAiOutboundTaskWithOptions(request, runtime);
}

/**
 * @summary Update the department name based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
 *
 * @description - This API supports updating only the department name and does not support updating the department ID.  
 * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).  
 * - After the update is complete, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API to confirm whether the department information matches your expectations.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request UpdateDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartmentWithOptions(const UpdateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.getDepartmentName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Update the department name based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
 *
 * @description - This API supports updating only the department name and does not support updating the department ID.  
 * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).  
 * - After the update is complete, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API to confirm whether the department information matches your expectations.
 * ### Queries per second (QPS) limits
 * - Per-user invocation frequency: 100 times/second.  
 * - API-wide invocation frequency: 100 times/second.
 * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
 *
 * @param request UpdateDepartmentRequest
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartment(const UpdateDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDepartmentWithOptions(request, runtime);
}

/**
 * @summary Updates a large language model.
 *
 * @param tmpReq UpdateLargeModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLargeModelResponse
 */
UpdateLargeModelResponse Client::updateLargeModelWithOptions(const UpdateLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLargeModelShrinkRequest request = UpdateLargeModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBaseModel()) {
    request.setBaseModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBaseModel(), "BaseModel", "json"));
  }

  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasBaseModelShrink()) {
    query["BaseModel"] = request.getBaseModelShrink();
  }

  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelUrl()) {
    query["ModelUrl"] = request.getModelUrl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemperature()) {
    query["Temperature"] = request.getTemperature();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasTopP()) {
    query["TopP"] = request.getTopP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLargeModel"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLargeModelResponse>();
}

/**
 * @summary Updates a large language model.
 *
 * @param request UpdateLargeModelRequest
 * @return UpdateLargeModelResponse
 */
UpdateLargeModelResponse Client::updateLargeModel(const UpdateLargeModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLargeModelWithOptions(request, runtime);
}

/**
 * @summary Edit Model Application
 *
 * @param tmpReq UpdateModelApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelApplicationResponse
 */
UpdateModelApplicationResponse Client::updateModelApplicationWithOptions(const UpdateModelApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateModelApplicationShrinkRequest request = UpdateModelApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInterruptConfig()) {
    request.setInterruptConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInterruptConfig(), "InterruptConfig", "json"));
  }

  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTtsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCode()) {
    query["ApplicationCode"] = request.getApplicationCode();
  }

  if (!!request.hasApplicationCps()) {
    query["ApplicationCps"] = request.getApplicationCps();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasCallAssistantHangup()) {
    query["CallAssistantHangup"] = request.getCallAssistantHangup();
  }

  if (!!request.hasCallAssistantRecognize()) {
    query["CallAssistantRecognize"] = request.getCallAssistantRecognize();
  }

  if (!!request.hasCallConnectedTriggerModel()) {
    query["CallConnectedTriggerModel"] = request.getCallConnectedTriggerModel();
  }

  if (!!request.hasDtmfAllowedDigits()) {
    query["DtmfAllowedDigits"] = request.getDtmfAllowedDigits();
  }

  if (!!request.hasDtmfAutoValidateEnable()) {
    query["DtmfAutoValidateEnable"] = request.getDtmfAutoValidateEnable();
  }

  if (!!request.hasDtmfDigitCount()) {
    query["DtmfDigitCount"] = request.getDtmfDigitCount();
  }

  if (!!request.hasDtmfInputTimeout()) {
    query["DtmfInputTimeout"] = request.getDtmfInputTimeout();
  }

  if (!!request.hasDtmfOutOfRangeAction()) {
    query["DtmfOutOfRangeAction"] = request.getDtmfOutOfRangeAction();
  }

  if (!!request.hasDtmfRetryPlayTimes()) {
    query["DtmfRetryPlayTimes"] = request.getDtmfRetryPlayTimes();
  }

  if (!!request.hasDtmfRetryPromptText()) {
    query["DtmfRetryPromptText"] = request.getDtmfRetryPromptText();
  }

  if (!!request.hasDtmfSendMaxCount()) {
    query["DtmfSendMaxCount"] = request.getDtmfSendMaxCount();
  }

  if (!!request.hasDtmfSendWaitTimeout()) {
    query["DtmfSendWaitTimeout"] = request.getDtmfSendWaitTimeout();
  }

  if (!!request.hasDyvmsSceneName()) {
    query["DyvmsSceneName"] = request.getDyvmsSceneName();
  }

  if (!!request.hasEnableDtmfReceive()) {
    query["EnableDtmfReceive"] = request.getEnableDtmfReceive();
  }

  if (!!request.hasEnableDtmfSend()) {
    query["EnableDtmfSend"] = request.getEnableDtmfSend();
  }

  if (!!request.hasEnableMorse()) {
    query["EnableMorse"] = request.getEnableMorse();
  }

  if (!!request.hasInterruptConfigShrink()) {
    query["InterruptConfig"] = request.getInterruptConfigShrink();
  }

  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasModelVersion()) {
    query["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasMuteActive()) {
    query["MuteActive"] = request.getMuteActive();
  }

  if (!!request.hasMuteDuration()) {
    query["MuteDuration"] = request.getMuteDuration();
  }

  if (!!request.hasMuteHangupNum()) {
    query["MuteHangupNum"] = request.getMuteHangupNum();
  }

  if (!!request.hasMutePushMode()) {
    query["MutePushMode"] = request.getMutePushMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasQualificationName()) {
    query["QualificationName"] = request.getQualificationName();
  }

  if (!!request.hasRecordingFile()) {
    query["RecordingFile"] = request.getRecordingFile();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSpeechContent()) {
    query["SpeechContent"] = request.getSpeechContent();
  }

  if (!!request.hasSpeechId()) {
    query["SpeechId"] = request.getSpeechId();
  }

  if (!!request.hasStartWord()) {
    query["StartWord"] = request.getStartWord();
  }

  if (!!request.hasStartWordType()) {
    query["StartWordType"] = request.getStartWordType();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.getTtsConfigShrink();
  }

  if (!!request.hasUsageDesc()) {
    query["UsageDesc"] = request.getUsageDesc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateModelApplication"},
    {"version" , "2019-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelApplicationResponse>();
}

/**
 * @summary Edit Model Application
 *
 * @param request UpdateModelApplicationRequest
 * @return UpdateModelApplicationResponse
 */
UpdateModelApplicationResponse Client::updateModelApplication(const UpdateModelApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelApplicationWithOptions(request, runtime);
}

/**
 * @summary Invoke UpdateOuterAccount to update an external account based on the external account ID.
 *
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
 * @summary Invoke UpdateOuterAccount to update an external account based on the external account ID.
 *
 * @param request UpdateOuterAccountRequest
 * @return UpdateOuterAccountResponse
 */
UpdateOuterAccountResponse Client::updateOuterAccount(const UpdateOuterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOuterAccountWithOptions(request, runtime);
}

/**
 * @summary Update the skill group information in the Cloud Customer Service System based on the AICCS instance ID and skill group ID. This API supports updating the skill group description and display name.
 *
 * @description - This API does not support updating the skill group ID or skill group name.  
 * - After the update, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to query the skill group information.  
 * - If you need to provide the AICCS instance ID and skill group ID, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limit
 * - Per-user call frequency: No rate limiting.
 * - API call frequency: 1000 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request UpdateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillGroupResponse
 */
UpdateSkillGroupResponse Client::updateSkillGroupWithOptions(const UpdateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasSkillGroupName()) {
    query["SkillGroupName"] = request.getSkillGroupName();
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
 * @summary Update the skill group information in the Cloud Customer Service System based on the AICCS instance ID and skill group ID. This API supports updating the skill group description and display name.
 *
 * @description - This API does not support updating the skill group ID or skill group name.  
 * - After the update, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to query the skill group information.  
 * - If you need to provide the AICCS instance ID and skill group ID, refer to the instructions in the [Request Parameters](#api-detail-35) section.
 * ### Queries per second (QPS) limit
 * - Per-user call frequency: No rate limiting.
 * - API call frequency: 1000 calls per second.
 * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
 *
 * @param request UpdateSkillGroupRequest
 * @return UpdateSkillGroupResponse
 */
UpdateSkillGroupResponse Client::updateSkillGroup(const UpdateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Aiccs20191015