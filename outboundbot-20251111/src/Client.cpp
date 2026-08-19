#include <darabonba/Core.hpp>
#include <alibabacloud/OutboundBot20251111.hpp>
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
using namespace AlibabaCloud::OutboundBot20251111::Models;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{

AlibabaCloud::OutboundBot20251111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "outboundbot.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("outboundbot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Stops an outbound call campaign.
 *
 * @description ****
 *
 * @param request AbortCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaignWithOptions(const AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortCampaignResponse>();
}

/**
 * @summary Stops an outbound call campaign.
 *
 * @description ****
 *
 * @param request AbortCampaignRequest
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaign(const AbortCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCampaignWithOptions(request, runtime);
}

/**
 * @summary Stops an outbound call case.
 *
 * @description ****
 *
 * @param tmpReq AbortCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortCasesResponse
 */
AbortCasesResponse Client::abortCasesWithOptions(const AbortCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AbortCasesShrinkRequest request = AbortCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.getPhoneNumbersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortCases"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortCasesResponse>();
}

/**
 * @summary Stops an outbound call case.
 *
 * @description ****
 *
 * @param request AbortCasesRequest
 * @return AbortCasesResponse
 */
AbortCasesResponse Client::abortCases(const AbortCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCasesWithOptions(request, runtime);
}

/**
 * @summary Appends contacts to an outbound call campaign.
 *
 * @description ****
 *
 * @param tmpReq AppendCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppendCasesResponse
 */
AppendCasesResponse Client::appendCasesWithOptions(const AppendCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AppendCasesShrinkRequest request = AppendCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCases()) {
    request.setCasesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCases(), "Cases", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasCasesShrink()) {
    body["Cases"] = request.getCasesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AppendCases"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppendCasesResponse>();
}

/**
 * @summary Appends contacts to an outbound call campaign.
 *
 * @description ****
 *
 * @param request AppendCasesRequest
 * @return AppendCasesResponse
 */
AppendCasesResponse Client::appendCases(const AppendCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return appendCasesWithOptions(request, runtime);
}

/**
 * @summary Creates an outbound call task.
 *
 * @description ****
 *
 * @param tmpReq CreateCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCampaignResponse
 */
CreateCampaignResponse Client::createCampaignWithOptions(const CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCampaignShrinkRequest request = CreateCampaignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCases()) {
    request.setCasesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCases(), "Cases", "json"));
  }

  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasAttemptOrder()) {
    query["AttemptOrder"] = request.getAttemptOrder();
  }

  if (!!request.hasCallableTime()) {
    query["CallableTime"] = request.getCallableTime();
  }

  if (!!request.hasCaseFileKey()) {
    query["CaseFileKey"] = request.getCaseFileKey();
  }

  if (!!request.hasDialingTimeoutSeconds()) {
    query["DialingTimeoutSeconds"] = request.getDialingTimeoutSeconds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFixedQuota()) {
    query["FixedQuota"] = request.getFixedQuota();
  }

  if (!!request.hasFlashSmsParameters()) {
    query["FlashSmsParameters"] = request.getFlashSmsParameters();
  }

  if (!!request.hasHolidayRestricted()) {
    query["HolidayRestricted"] = request.getHolidayRestricted();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxAttemptCount()) {
    query["MaxAttemptCount"] = request.getMaxAttemptCount();
  }

  if (!!request.hasMinAttemptInterval()) {
    query["MinAttemptInterval"] = request.getMinAttemptInterval();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasRedialRestrictions()) {
    query["RedialRestrictions"] = request.getRedialRestrictions();
  }

  if (!!request.hasRunUntilEndTime()) {
    query["RunUntilEndTime"] = request.getRunUntilEndTime();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  json body = {};
  if (!!request.hasCasesShrink()) {
    body["Cases"] = request.getCasesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCampaignResponse>();
}

/**
 * @summary Creates an outbound call task.
 *
 * @description ****
 *
 * @param request CreateCampaignRequest
 * @return CreateCampaignResponse
 */
CreateCampaignResponse Client::createCampaign(const CreateCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCampaignWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoiceWithOptions(const CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloneVoiceResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateCloneVoiceRequest
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoice(const CreateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary Creates a flash message configuration.
 *
 * @param tmpReq CreateFlashSmsAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlashSmsAccessProfileResponse
 */
CreateFlashSmsAccessProfileResponse Client::createFlashSmsAccessProfileWithOptions(const CreateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFlashSmsAccessProfileShrinkRequest request = CreateFlashSmsAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessProfile()) {
    request.setAccessProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessProfile(), "AccessProfile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileShrink()) {
    body["AccessProfile"] = request.getAccessProfileShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFlashSmsAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlashSmsAccessProfileResponse>();
}

/**
 * @summary Creates a flash message configuration.
 *
 * @param request CreateFlashSmsAccessProfileRequest
 * @return CreateFlashSmsAccessProfileResponse
 */
CreateFlashSmsAccessProfileResponse Client::createFlashSmsAccessProfile(const CreateFlashSmsAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlashSmsAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasServiceMode()) {
    body["ServiceMode"] = request.getServiceMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param tmpReq CreateOutboundCallRestrictionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOutboundCallRestrictionResponse
 */
CreateOutboundCallRestrictionResponse Client::createOutboundCallRestrictionWithOptions(const CreateOutboundCallRestrictionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOutboundCallRestrictionShrinkRequest request = CreateOutboundCallRestrictionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutboundCallRestriction()) {
    request.setOutboundCallRestrictionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutboundCallRestriction(), "OutboundCallRestriction", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundCallRestrictionShrink()) {
    body["OutboundCallRestriction"] = request.getOutboundCallRestrictionShrink();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOutboundCallRestriction"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOutboundCallRestrictionResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateOutboundCallRestrictionRequest
 * @return CreateOutboundCallRestrictionResponse
 */
CreateOutboundCallRestrictionResponse Client::createOutboundCallRestriction(const CreateOutboundCallRestrictionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOutboundCallRestrictionWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNluEngine()) {
    body["NluEngine"] = request.getNluEngine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @summary Creates a scenario configuration.
 *
 * @param tmpReq CreateScriptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptVersionResponse
 */
CreateScriptVersionResponse Client::createScriptVersionWithOptions(const CreateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScriptVersionShrinkRequest request = CreateScriptVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractionConfig()) {
    request.setInteractionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractionConfig(), "InteractionConfig", "json"));
  }

  if (!!tmpReq.hasLabelConfigs()) {
    request.setLabelConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelConfigs(), "LabelConfigs", "json"));
  }

  if (!!tmpReq.hasScriptProfile()) {
    request.setScriptProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptProfile(), "ScriptProfile", "json"));
  }

  if (!!tmpReq.hasSynthesizerConfig()) {
    request.setSynthesizerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynthesizerConfig(), "SynthesizerConfig", "json"));
  }

  if (!!tmpReq.hasTranscriberConfig()) {
    request.setTranscriberConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscriberConfig(), "TranscriberConfig", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInteractionConfigShrink()) {
    body["InteractionConfig"] = request.getInteractionConfigShrink();
  }

  if (!!request.hasLabelConfigsShrink()) {
    body["LabelConfigs"] = request.getLabelConfigsShrink();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptProfileShrink()) {
    body["ScriptProfile"] = request.getScriptProfileShrink();
  }

  if (!!request.hasSourceVersionId()) {
    body["SourceVersionId"] = request.getSourceVersionId();
  }

  if (!!request.hasSynthesizerConfigShrink()) {
    body["SynthesizerConfig"] = request.getSynthesizerConfigShrink();
  }

  if (!!request.hasTranscriberConfigShrink()) {
    body["TranscriberConfig"] = request.getTranscriberConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateScriptVersion"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptVersionResponse>();
}

/**
 * @summary Creates a scenario configuration.
 *
 * @param request CreateScriptVersionRequest
 * @return CreateScriptVersionResponse
 */
CreateScriptVersionResponse Client::createScriptVersion(const CreateScriptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptVersionWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param tmpReq CreateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfileWithOptions(const CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVoiceAccessProfileShrinkRequest request = CreateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVoiceAccessProfileResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateVoiceAccessProfileRequest
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfile(const CreateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Deletes a scene.
 *
 * @param request DeleteCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoiceWithOptions(const DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloneVoiceResponse>();
}

/**
 * @summary Deletes a scene.
 *
 * @param request DeleteCloneVoiceRequest
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoice(const DeleteCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a flash message configuration.
 *
 * @param request DeleteFlashSmsAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlashSmsAccessProfileResponse
 */
DeleteFlashSmsAccessProfileResponse Client::deleteFlashSmsAccessProfileWithOptions(const DeleteFlashSmsAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFlashSmsAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlashSmsAccessProfileResponse>();
}

/**
 * @summary Deletes a flash message configuration.
 *
 * @param request DeleteFlashSmsAccessProfileRequest
 * @return DeleteFlashSmsAccessProfileResponse
 */
DeleteFlashSmsAccessProfileResponse Client::deleteFlashSmsAccessProfile(const DeleteFlashSmsAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlashSmsAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Retrieves instance details.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Retrieves instance details.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes blacklists and whitelists.
 *
 * @param tmpReq DeleteOutboundCallRestrictionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOutboundCallRestrictionResponse
 */
DeleteOutboundCallRestrictionResponse Client::deleteOutboundCallRestrictionWithOptions(const DeleteOutboundCallRestrictionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteOutboundCallRestrictionShrinkRequest request = DeleteOutboundCallRestrictionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRestrictionIdList()) {
    request.setRestrictionIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRestrictionIdList(), "RestrictionIdList", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRestrictionIdListShrink()) {
    body["RestrictionIdList"] = request.getRestrictionIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteOutboundCallRestriction"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOutboundCallRestrictionResponse>();
}

/**
 * @summary Deletes blacklists and whitelists.
 *
 * @param request DeleteOutboundCallRestrictionRequest
 * @return DeleteOutboundCallRestrictionResponse
 */
DeleteOutboundCallRestrictionResponse Client::deleteOutboundCallRestriction(const DeleteOutboundCallRestrictionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOutboundCallRestrictionWithOptions(request, runtime);
}

/**
 * @summary Deletes a scenario.
 *
 * @param request DeleteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScriptWithOptions(const DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptResponse>();
}

/**
 * @summary Deletes a scenario.
 *
 * @param request DeleteScriptRequest
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScript(const DeleteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWithOptions(request, runtime);
}

/**
 * @summary Deletes a third-party voice configuration.
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfileWithOptions(const DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVoiceAccessProfileResponse>();
}

/**
 * @summary Deletes a third-party voice configuration.
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfile(const DeleteVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Disables message subscription.
 *
 * @param request DisableSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscriptionWithOptions(const DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSubscriptionResponse>();
}

/**
 * @summary Disables message subscription.
 *
 * @param request DisableSubscriptionRequest
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscription(const DisableSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a call session.
 *
 * @description ****
 *
 * @param request GetCallDetailRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecordWithOptions(const GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallDetailRecord"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallDetailRecordResponse>();
}

/**
 * @summary Retrieves the details of a call session.
 *
 * @description ****
 *
 * @param request GetCallDetailRecordRequest
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecord(const GetCallDetailRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDetailRecordWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an outbound campaign.
 *
 * @param request GetCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaignWithOptions(const GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCampaignResponse>();
}

/**
 * @summary Retrieves the details of an outbound campaign.
 *
 * @param request GetCampaignRequest
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaign(const GetCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCampaignWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a case.
 *
 * @description ****
 *
 * @param request GetCaseDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaseDetailResponse
 */
GetCaseDetailResponse Client::getCaseDetailWithOptions(const GetCaseDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaseId()) {
    query["CaseId"] = request.getCaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCaseDetail"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCaseDetailResponse>();
}

/**
 * @summary Retrieves the details of a case.
 *
 * @description ****
 *
 * @param request GetCaseDetailRequest
 * @return GetCaseDetailResponse
 */
GetCaseDetailResponse Client::getCaseDetail(const GetCaseDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCaseDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Retrieves the details of an instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves a prompt scenario template.
 *
 * @param request GetScriptProfileTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScriptProfileTemplateResponse
 */
GetScriptProfileTemplateResponse Client::getScriptProfileTemplateWithOptions(const GetScriptProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetScriptProfileTemplate"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScriptProfileTemplateResponse>();
}

/**
 * @summary Retrieves a prompt scenario template.
 *
 * @param request GetScriptProfileTemplateRequest
 * @return GetScriptProfileTemplateResponse
 */
GetScriptProfileTemplateResponse Client::getScriptProfileTemplate(const GetScriptProfileTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScriptProfileTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the MQ configuration.
 *
 * @param request GetSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscriptionWithOptions(const GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionResponse>();
}

/**
 * @summary Retrieves the MQ configuration.
 *
 * @param request GetSubscriptionRequest
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscription(const GetSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of outbound call campaigns.
 *
 * @description ****
 *
 * @param request ListCampaignsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaignsWithOptions(const ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualStartTimeFrom()) {
    query["ActualStartTimeFrom"] = request.getActualStartTimeFrom();
  }

  if (!!request.hasActualStartTimeTo()) {
    query["ActualStartTimeTo"] = request.getActualStartTimeTo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlannedStartTimeFrom()) {
    query["PlannedStartTimeFrom"] = request.getPlannedStartTimeFrom();
  }

  if (!!request.hasPlannedStartTimeTo()) {
    query["PlannedStartTimeTo"] = request.getPlannedStartTimeTo();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCampaigns"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCampaignsResponse>();
}

/**
 * @summary Retrieves the list of outbound call campaigns.
 *
 * @description ****
 *
 * @param request ListCampaignsRequest
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaigns(const ListCampaignsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of cases.
 *
 * @description ****
 *
 * @param tmpReq ListCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCasesWithOptions(const ListCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCasesShrinkRequest request = ListCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCaseIds()) {
    request.setCaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCaseIds(), "CaseIds", "json"));
  }

  if (!!tmpReq.hasDispositionCodes()) {
    request.setDispositionCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDispositionCodes(), "DispositionCodes", "json"));
  }

  if (!!tmpReq.hasDispositionReasons()) {
    request.setDispositionReasonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDispositionReasons(), "DispositionReasons", "json"));
  }

  if (!!tmpReq.hasLabelSearch()) {
    request.setLabelSearchShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelSearch(), "LabelSearch", "json"));
  }

  if (!!tmpReq.hasStates()) {
    request.setStatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStates(), "States", "json"));
  }

  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasAccessChannelType()) {
    query["AccessChannelType"] = request.getAccessChannelType();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasCaseCompleted()) {
    query["CaseCompleted"] = request.getCaseCompleted();
  }

  if (!!request.hasCaseIdsShrink()) {
    query["CaseIds"] = request.getCaseIdsShrink();
  }

  if (!!request.hasDispositionCodesShrink()) {
    query["DispositionCodes"] = request.getDispositionCodesShrink();
  }

  if (!!request.hasDispositionReasonsShrink()) {
    query["DispositionReasons"] = request.getDispositionReasonsShrink();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLabelSearchShrink()) {
    query["LabelSearch"] = request.getLabelSearchShrink();
  }

  if (!!request.hasMaxRingingDuration()) {
    query["MaxRingingDuration"] = request.getMaxRingingDuration();
  }

  if (!!request.hasMaxTalkTime()) {
    query["MaxTalkTime"] = request.getMaxTalkTime();
  }

  if (!!request.hasMaxTalkTurns()) {
    query["MaxTalkTurns"] = request.getMaxTalkTurns();
  }

  if (!!request.hasMinRingingDuration()) {
    query["MinRingingDuration"] = request.getMinRingingDuration();
  }

  if (!!request.hasMinTalkTime()) {
    query["MinTalkTime"] = request.getMinTalkTime();
  }

  if (!!request.hasMinTalkTurns()) {
    query["MinTalkTurns"] = request.getMinTalkTurns();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatesShrink()) {
    query["States"] = request.getStatesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCases"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCasesResponse>();
}

/**
 * @summary Retrieves a list of cases.
 *
 * @description ****
 *
 * @param request ListCasesRequest
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCases(const ListCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCasesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of available models for voice cloning.
 *
 * @param request ListCloneVoiceModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModelsWithOptions(const ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
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
    {"action" , "ListCloneVoiceModels"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoiceModelsResponse>();
}

/**
 * @summary Retrieves the list of available models for voice cloning.
 *
 * @param request ListCloneVoiceModelsRequest
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModels(const ListCloneVoiceModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoiceModelsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of cloned voices.
 *
 * @param request ListCloneVoicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoicesResponse
 */
ListCloneVoicesResponse Client::listCloneVoicesWithOptions(const ListCloneVoicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloneVoices"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoicesResponse>();
}

/**
 * @summary Retrieves the list of cloned voices.
 *
 * @param request ListCloneVoicesRequest
 * @return ListCloneVoicesResponse
 */
ListCloneVoicesResponse Client::listCloneVoices(const ListCloneVoicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoicesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of flash SMS configurations.
 *
 * @param request ListFlashSmsAccessProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsAccessProfilesResponse
 */
ListFlashSmsAccessProfilesResponse Client::listFlashSmsAccessProfilesWithOptions(const ListFlashSmsAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListFlashSmsAccessProfiles"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsAccessProfilesResponse>();
}

/**
 * @summary Retrieves the list of flash SMS configurations.
 *
 * @param request ListFlashSmsAccessProfilesRequest
 * @return ListFlashSmsAccessProfilesResponse
 */
ListFlashSmsAccessProfilesResponse Client::listFlashSmsAccessProfiles(const ListFlashSmsAccessProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsAccessProfilesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of flash message providers.
 *
 * @param request ListFlashSmsProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsProvidersResponse
 */
ListFlashSmsProvidersResponse Client::listFlashSmsProvidersWithOptions(const ListFlashSmsProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsProviders"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsProvidersResponse>();
}

/**
 * @summary Retrieves the list of flash message providers.
 *
 * @param request ListFlashSmsProvidersRequest
 * @return ListFlashSmsProvidersResponse
 */
ListFlashSmsProvidersResponse Client::listFlashSmsProviders(const ListFlashSmsProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsProvidersWithOptions(request, runtime);
}

/**
 * @summary Retrieves flash SMS templates.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplatesWithOptions(const ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsTemplates"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsTemplatesResponse>();
}

/**
 * @summary Retrieves flash SMS templates.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplates(const ListFlashSmsTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves instance details.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListInstances"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Retrieves instance details.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the blacklists and whitelists.
 *
 * @param request ListOutboundCallRestrictionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundCallRestrictionsResponse
 */
ListOutboundCallRestrictionsResponse Client::listOutboundCallRestrictionsWithOptions(const ListOutboundCallRestrictionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListOutboundCallRestrictions"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutboundCallRestrictionsResponse>();
}

/**
 * @summary Retrieves the blacklists and whitelists.
 *
 * @param request ListOutboundCallRestrictionsRequest
 * @return ListOutboundCallRestrictionsResponse
 */
ListOutboundCallRestrictionsResponse Client::listOutboundCallRestrictions(const ListOutboundCallRestrictionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundCallRestrictionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of scenario configuration templates.
 *
 * @param request ListScriptProfileTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptProfileTemplatesResponse
 */
ListScriptProfileTemplatesResponse Client::listScriptProfileTemplatesWithOptions(const ListScriptProfileTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNluEngine()) {
    body["NluEngine"] = request.getNluEngine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListScriptProfileTemplates"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptProfileTemplatesResponse>();
}

/**
 * @summary Retrieves the list of scenario configuration templates.
 *
 * @param request ListScriptProfileTemplatesRequest
 * @return ListScriptProfileTemplatesResponse
 */
ListScriptProfileTemplatesResponse Client::listScriptProfileTemplates(const ListScriptProfileTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptProfileTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an instance.
 *
 * @param tmpReq ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScriptsShrinkRequest request = ListScriptsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScriptIds()) {
    request.setScriptIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptIds(), "ScriptIds", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPublishOnly()) {
    body["PublishOnly"] = request.getPublishOnly();
  }

  if (!!request.hasScriptIdsShrink()) {
    body["ScriptIds"] = request.getScriptIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListScripts"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptsResponse>();
}

/**
 * @summary Retrieves the details of an instance.
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of scenarios associated with a flow by flow ID.
 *
 * @param request ListScriptsByFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsByFlowResponse
 */
ListScriptsByFlowResponse Client::listScriptsByFlowWithOptions(const ListScriptsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowId()) {
    body["FlowId"] = request.getFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListScriptsByFlow"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptsByFlowResponse>();
}

/**
 * @summary Retrieves the list of scenarios associated with a flow by flow ID.
 *
 * @param request ListScriptsByFlowRequest
 * @return ListScriptsByFlowResponse
 */
ListScriptsByFlowResponse Client::listScriptsByFlow(const ListScriptsByFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsByFlowWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of system configurations.
 *
 * @param request ListSystemConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemConfigsResponse
 */
ListSystemConfigsResponse Client::listSystemConfigsWithOptions(const ListSystemConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    body["ObjectType"] = request.getObjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSystemConfigs"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemConfigsResponse>();
}

/**
 * @summary Retrieves the list of system configurations.
 *
 * @param request ListSystemConfigsRequest
 * @return ListSystemConfigsResponse
 */
ListSystemConfigsResponse Client::listSystemConfigs(const ListSystemConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of voice access configurations.
 *
 * @param request ListVoiceAccessProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceAccessProfilesResponse
 */
ListVoiceAccessProfilesResponse Client::listVoiceAccessProfilesWithOptions(const ListVoiceAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListVoiceAccessProfiles"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceAccessProfilesResponse>();
}

/**
 * @summary Retrieves the list of voice access configurations.
 *
 * @param request ListVoiceAccessProfilesRequest
 * @return ListVoiceAccessProfilesResponse
 */
ListVoiceAccessProfilesResponse Client::listVoiceAccessProfiles(const ListVoiceAccessProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoiceAccessProfilesWithOptions(request, runtime);
}

/**
 * @summary Pauses an outbound call campaign.
 *
 * @param request PauseCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaignWithOptions(const PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseCampaignResponse>();
}

/**
 * @summary Pauses an outbound call campaign.
 *
 * @param request PauseCampaignRequest
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaign(const PauseCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseCampaignWithOptions(request, runtime);
}

/**
 * @summary Updates an instance.
 *
 * @param request PublishScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScriptWithOptions(const PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVersionId()) {
    body["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishScriptResponse>();
}

/**
 * @summary Updates an instance.
 *
 * @param request PublishScriptRequest
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScript(const PublishScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptWithOptions(request, runtime);
}

/**
 * @summary Resumes an outbound campaign.
 *
 * @description ****
 *
 * @param request ResumeCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaignWithOptions(const ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeCampaignResponse>();
}

/**
 * @summary Resumes an outbound campaign.
 *
 * @description ****
 *
 * @param request ResumeCampaignRequest
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaign(const ResumeCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeCampaignWithOptions(request, runtime);
}

/**
 * @summary Submits an outbound call campaign.
 *
 * @description ****
 *
 * @param request SubmitCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaignWithOptions(const SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCampaign"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCampaignResponse>();
}

/**
 * @summary Submits an outbound call campaign.
 *
 * @description ****
 *
 * @param request SubmitCampaignRequest
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaign(const SubmitCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCampaignWithOptions(request, runtime);
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoiceWithOptions(const UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloneVoiceResponse>();
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateCloneVoiceRequest
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoice(const UpdateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary Updates the flash message configuration.
 *
 * @param tmpReq UpdateFlashSmsAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlashSmsAccessProfileResponse
 */
UpdateFlashSmsAccessProfileResponse Client::updateFlashSmsAccessProfileWithOptions(const UpdateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFlashSmsAccessProfileShrinkRequest request = UpdateFlashSmsAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessProfile()) {
    request.setAccessProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessProfile(), "AccessProfile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileShrink()) {
    body["AccessProfile"] = request.getAccessProfileShrink();
  }

  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFlashSmsAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlashSmsAccessProfileResponse>();
}

/**
 * @summary Updates the flash message configuration.
 *
 * @param request UpdateFlashSmsAccessProfileRequest
 * @return UpdateFlashSmsAccessProfileResponse
 */
UpdateFlashSmsAccessProfileResponse Client::updateFlashSmsAccessProfile(const UpdateFlashSmsAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlashSmsAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScriptWithOptions(const UpdateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScriptResponse>();
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateScriptRequest
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScript(const UpdateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScriptWithOptions(request, runtime);
}

/**
 * @summary Updates the scenario configuration.
 *
 * @description ****
 *
 * @param tmpReq UpdateScriptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScriptVersionResponse
 */
UpdateScriptVersionResponse Client::updateScriptVersionWithOptions(const UpdateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScriptVersionShrinkRequest request = UpdateScriptVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractionConfig()) {
    request.setInteractionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractionConfig(), "InteractionConfig", "json"));
  }

  if (!!tmpReq.hasLabelConfigs()) {
    request.setLabelConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelConfigs(), "LabelConfigs", "json"));
  }

  if (!!tmpReq.hasScriptProfile()) {
    request.setScriptProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptProfile(), "ScriptProfile", "json"));
  }

  if (!!tmpReq.hasSynthesizerConfig()) {
    request.setSynthesizerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynthesizerConfig(), "SynthesizerConfig", "json"));
  }

  if (!!tmpReq.hasTranscriberConfig()) {
    request.setTranscriberConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscriberConfig(), "TranscriberConfig", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInteractionConfigShrink()) {
    body["InteractionConfig"] = request.getInteractionConfigShrink();
  }

  if (!!request.hasLabelConfigsShrink()) {
    body["LabelConfigs"] = request.getLabelConfigsShrink();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptProfileShrink()) {
    body["ScriptProfile"] = request.getScriptProfileShrink();
  }

  if (!!request.hasSynthesizerConfigShrink()) {
    body["SynthesizerConfig"] = request.getSynthesizerConfigShrink();
  }

  if (!!request.hasTranscriberConfigShrink()) {
    body["TranscriberConfig"] = request.getTranscriberConfigShrink();
  }

  if (!!request.hasVersionId()) {
    body["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateScriptVersion"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScriptVersionResponse>();
}

/**
 * @summary Updates the scenario configuration.
 *
 * @description ****
 *
 * @param request UpdateScriptVersionRequest
 * @return UpdateScriptVersionResponse
 */
UpdateScriptVersionResponse Client::updateScriptVersion(const UpdateScriptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScriptVersionWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a message queue (MQ) configuration.
 *
 * @param tmpReq UpdateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubscriptionShrinkRequest request = UpdateSubscriptionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventSubscriptions()) {
    request.setEventSubscriptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventSubscriptions(), "EventSubscriptions", "json"));
  }

  json body = {};
  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasEventSubscriptionsShrink()) {
    body["EventSubscriptions"] = request.getEventSubscriptionsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqInstanceId()) {
    body["MqInstanceId"] = request.getMqInstanceId();
  }

  if (!!request.hasMqType()) {
    body["MqType"] = request.getMqType();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasProducerId()) {
    body["ProducerId"] = request.getProducerId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary Creates or updates a message queue (MQ) configuration.
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Updates system configurations.
 *
 * @param tmpReq UpdateSystemConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSystemConfigsResponse
 */
UpdateSystemConfigsResponse Client::updateSystemConfigsWithOptions(const UpdateSystemConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSystemConfigsShrinkRequest request = UpdateSystemConfigsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigs()) {
    request.setConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigs(), "Configs", "json"));
  }

  json body = {};
  if (!!request.hasConfigsShrink()) {
    body["Configs"] = request.getConfigsShrink();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    body["ObjectType"] = request.getObjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSystemConfigs"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSystemConfigsResponse>();
}

/**
 * @summary Updates system configurations.
 *
 * @param request UpdateSystemConfigsRequest
 * @return UpdateSystemConfigsResponse
 */
UpdateSystemConfigsResponse Client::updateSystemConfigs(const UpdateSystemConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSystemConfigsWithOptions(request, runtime);
}

/**
 * @summary Updates an instance.
 *
 * @param tmpReq UpdateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfileWithOptions(const UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVoiceAccessProfileShrinkRequest request = UpdateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVoiceAccessProfileResponse>();
}

/**
 * @summary Updates an instance.
 *
 * @param request UpdateVoiceAccessProfileRequest
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfile(const UpdateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVoiceAccessProfileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace OutboundBot20251111