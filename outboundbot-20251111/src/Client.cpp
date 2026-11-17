#include <darabonba/Core.hpp>
#include <alibabacloud/OutboundBot20251111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OutboundBot20251111::Models;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{

AlibabaCloud::OutboundBot20251111::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "OutboundBot";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
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
 * @summary Stops an outbound campaign.
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
 * @summary Stops an outbound campaign.
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
 * @summary Terminates outbound call cases.
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
 * @summary Terminates outbound call cases.
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
 * @summary Appends outbound call cases.
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
 * @summary Appends outbound call cases.
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
 * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
 *
 * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
 *
 * @param request BeginSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginSessionResponse
 */
FutureGenerator<BeginSessionResponse> Client::beginSessionWithSSE(const BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<BeginSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
 *
 * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
 *
 * @param request BeginSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSessionWithOptions(const BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BeginSessionResponse>();
}

/**
 * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
 *
 * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
 *
 * @param request BeginSessionRequest
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSession(const BeginSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginSessionWithOptions(request, runtime);
}

/**
 * @summary Initiates a trial session.
 *
 * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request BeginTrialSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginTrialSessionResponse
 */
FutureGenerator<BeginTrialSessionResponse> Client::beginTrialSessionWithSSE(const BeginTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginTrialSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<BeginTrialSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Initiates a trial session.
 *
 * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request BeginTrialSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginTrialSessionResponse
 */
BeginTrialSessionResponse Client::beginTrialSessionWithOptions(const BeginTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginTrialSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BeginTrialSessionResponse>();
}

/**
 * @summary Initiates a trial session.
 *
 * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request BeginTrialSessionRequest
 * @return BeginTrialSessionResponse
 */
BeginTrialSessionResponse Client::beginTrialSession(const BeginTrialSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginTrialSessionWithOptions(request, runtime);
}

/**
 * @summary Initiates a trial call.
 *
 * @description Initiates a trial web voice call for a specified scenario by using the VisitorToken of a trial link. The service verifies the token, the associated channel, and the validity period, and then delegates the web call service to bridge the web voice channel and the robot channel. The DeviceId must be consistent with the data channel device identifier of the trial client. After the call is initiated, use the returned ChannelId, ServerUrl, and Token to connect to the voice channel. If the data event channel of the trial client is required, you can call GetTrialDataChannelCredential with the same DeviceId. The web voice connection token and the data channel username and password are not the same set of credentials. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request BridgeTrialWebCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeTrialWebCallResponse
 */
BridgeTrialWebCallResponse Client::bridgeTrialWebCallWithOptions(const BridgeTrialWebCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSampleRate()) {
    query["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BridgeTrialWebCall"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BridgeTrialWebCallResponse>();
}

/**
 * @summary Initiates a trial call.
 *
 * @description Initiates a trial web voice call for a specified scenario by using the VisitorToken of a trial link. The service verifies the token, the associated channel, and the validity period, and then delegates the web call service to bridge the web voice channel and the robot channel. The DeviceId must be consistent with the data channel device identifier of the trial client. After the call is initiated, use the returned ChannelId, ServerUrl, and Token to connect to the voice channel. If the data event channel of the trial client is required, you can call GetTrialDataChannelCredential with the same DeviceId. The web voice connection token and the data channel username and password are not the same set of credentials. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request BridgeTrialWebCallRequest
 * @return BridgeTrialWebCallResponse
 */
BridgeTrialWebCallResponse Client::bridgeTrialWebCall(const BridgeTrialWebCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeTrialWebCallWithOptions(request, runtime);
}

/**
 * @summary Initiates a call.
 *
 * @description Initiates a web voice call for a specified instance and scenario by bridging the web voice channel and the robot SIP channel through an RTC gateway. Pass information such as DeviceId, audio sampling rate, and scenario version in the request. TimeoutSeconds specifies the timeout for unanswered calls, defaults to 60 seconds, and does not indicate the maximum duration of an answered call. Upon success, returns the connection context such as SessionId, ChannelId, ServerUrl, and Token. The client must use the returned address and valid credentials to establish the web voice connection. This operation initiates a web interactive voice response instead of dialing a real phone number specified by Number. Resource identity, numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values when you invoke the operation.
 *
 * @param request BridgeWebCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCallWithOptions(const BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSampleRate()) {
    query["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BridgeWebCall"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BridgeWebCallResponse>();
}

/**
 * @summary Initiates a call.
 *
 * @description Initiates a web voice call for a specified instance and scenario by bridging the web voice channel and the robot SIP channel through an RTC gateway. Pass information such as DeviceId, audio sampling rate, and scenario version in the request. TimeoutSeconds specifies the timeout for unanswered calls, defaults to 60 seconds, and does not indicate the maximum duration of an answered call. Upon success, returns the connection context such as SessionId, ChannelId, ServerUrl, and Token. The client must use the returned address and valid credentials to establish the web voice connection. This operation initiates a web interactive voice response instead of dialing a real phone number specified by Number. Resource identity, numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values when you invoke the operation.
 *
 * @param request BridgeWebCallRequest
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCall(const BridgeWebCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeWebCallWithOptions(request, runtime);
}

/**
 * @summary Creates an outbound campaign.
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
 * @summary Creates an outbound campaign.
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
 * @summary Creates a language model access configuration.
 *
 * @description Creates a language model access configuration for a specified instance.
 *
 * @param tmpReq CreateLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLlmAccessProfileResponse
 */
CreateLlmAccessProfileResponse Client::createLlmAccessProfileWithOptions(const CreateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLlmAccessProfileShrinkRequest request = CreateLlmAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLlmAccessProfileResponse>();
}

/**
 * @summary Creates a language model access configuration.
 *
 * @description Creates a language model access configuration for a specified instance.
 *
 * @param request CreateLlmAccessProfileRequest
 * @return CreateLlmAccessProfileResponse
 */
CreateLlmAccessProfileResponse Client::createLlmAccessProfile(const CreateLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLlmAccessProfileWithOptions(request, runtime);
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
 * @summary Creates a script configuration.
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
 * @summary Creates a script configuration.
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
 * @summary Deletes a tenant number.
 *
 * @description Deletes a tenant number.
 *
 * @param request DeleteCorpNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCorpNumberResponse
 */
DeleteCorpNumberResponse Client::deleteCorpNumberWithOptions(const DeleteCorpNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCorpNumber"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCorpNumberResponse>();
}

/**
 * @summary Deletes a tenant number.
 *
 * @description Deletes a tenant number.
 *
 * @param request DeleteCorpNumberRequest
 * @return DeleteCorpNumberResponse
 */
DeleteCorpNumberResponse Client::deleteCorpNumber(const DeleteCorpNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCorpNumberWithOptions(request, runtime);
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
 * @summary Deletes the language model access configuration.
 *
 * @description Deletes the language model access configuration for a specified instance.
 *
 * @param request DeleteLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLlmAccessProfileResponse
 */
DeleteLlmAccessProfileResponse Client::deleteLlmAccessProfileWithOptions(const DeleteLlmAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLlmAccessProfileResponse>();
}

/**
 * @summary Deletes the language model access configuration.
 *
 * @description Deletes the language model access configuration for a specified instance.
 *
 * @param request DeleteLlmAccessProfileRequest
 * @return DeleteLlmAccessProfileResponse
 */
DeleteLlmAccessProfileResponse Client::deleteLlmAccessProfile(const DeleteLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLlmAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Deletes the numbers of an instance.
 *
 * @description Deletes the numbers of a specified instance.
 *
 * @param tmpReq DeleteNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNumbersResponse
 */
DeleteNumbersResponse Client::deleteNumbersWithOptions(const DeleteNumbersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteNumbersShrinkRequest request = DeleteNumbersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasNumbersShrink()) {
    body["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteNumbers"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNumbersResponse>();
}

/**
 * @summary Deletes the numbers of an instance.
 *
 * @description Deletes the numbers of a specified instance.
 *
 * @param request DeleteNumbersRequest
 * @return DeleteNumbersResponse
 */
DeleteNumbersResponse Client::deleteNumbers(const DeleteNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNumbersWithOptions(request, runtime);
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
 * @summary Initiates a session.
 *
 * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
FutureGenerator<DialogueResponse> Client::dialogueWithSSE(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<DialogueResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Initiates a session.
 *
 * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
DialogueResponse Client::dialogueWithOptions(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DialogueResponse>();
}

/**
 * @summary Initiates a session.
 *
 * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request DialogueRequest
 * @return DialogueResponse
 */
DialogueResponse Client::dialogue(const DialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dialogueWithOptions(request, runtime);
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
 * @summary Ends a session.
 *
 * @description Ends a text session created by BeginSession, notifies the dialog engine to end the interaction, and clears the text session state. The InstanceId, ScriptId, and SessionId must match those used when the session was started. The Data field in the response returns the SessionId of the ended session. If the text session no longer exists due to prolonged inactivity or cache expiration, the current implementation still returns the SessionId without reporting a session not found error. This operation is used to conclude a text session and is not intended for hanging up web voice or actual phone calls. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values for real calls.
 *
 * @param request EndSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndSessionResponse
 */
EndSessionResponse Client::endSessionWithOptions(const EndSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndSessionResponse>();
}

/**
 * @summary Ends a session.
 *
 * @description Ends a text session created by BeginSession, notifies the dialog engine to end the interaction, and clears the text session state. The InstanceId, ScriptId, and SessionId must match those used when the session was started. The Data field in the response returns the SessionId of the ended session. If the text session no longer exists due to prolonged inactivity or cache expiration, the current implementation still returns the SessionId without reporting a session not found error. This operation is used to conclude a text session and is not intended for hanging up web voice or actual phone calls. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values for real calls.
 *
 * @param request EndSessionRequest
 * @return EndSessionResponse
 */
EndSessionResponse Client::endSession(const EndSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endSessionWithOptions(request, runtime);
}

/**
 * @summary Ends a trial session.
 *
 * @description Ends a trial text session created by BeginTrialSession by using a valid VisitorToken from a trial link. The service first validates the token and then delegates the request to the text session termination service. The InstanceId, ScriptId, and SessionId must maintain session persistence consistent with those of the trial session. The returned Data is the SessionId of the ended session. If the text session context has expired, the termination service can still return the SessionId, but the validation will be marked as failed if the trial token itself is invalid or expired. This operation is not used to hang up web voice calls. The resource identity, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values when you invoke the operation.
 *
 * @param request EndTrialSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndTrialSessionResponse
 */
EndTrialSessionResponse Client::endTrialSessionWithOptions(const EndTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndTrialSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndTrialSessionResponse>();
}

/**
 * @summary Ends a trial session.
 *
 * @description Ends a trial text session created by BeginTrialSession by using a valid VisitorToken from a trial link. The service first validates the token and then delegates the request to the text session termination service. The InstanceId, ScriptId, and SessionId must maintain session persistence consistent with those of the trial session. The returned Data is the SessionId of the ended session. If the text session context has expired, the termination service can still return the SessionId, but the validation will be marked as failed if the trial token itself is invalid or expired. This operation is not used to hang up web voice calls. The resource identity, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values when you invoke the operation.
 *
 * @param request EndTrialSessionRequest
 * @return EndTrialSessionResponse
 */
EndTrialSessionResponse Client::endTrialSession(const EndTrialSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endTrialSessionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the call details.
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
 * @summary Retrieves the call details.
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
 * @summary Retrieves voice conversation parameters.
 *
 * @description Retrieves temporary connection credentials for the client data channel of a specified InstanceId and DeviceId. Requests are verified based on the current POP authentication and instance permission configurations. DeviceId cannot be empty. Unlike GetTrialDataChannelCredential, this operation does not use the VisitorToken for trial links. The client must use the actual Topic, ClientId, Endpoint, UserName, and Password returned to connect to and subscribe to the data channel, and must not infer the address, topic, or authentication information. The same client must keep the DeviceId consistent when initiating BridgeWebCall or MakePilotCall. This operation only retrieves data channel credentials and does not create text sessions, initiate phone calls, or establish web voice channels. The username and password for the data channel are not the same set of credentials as the token returned for web calls. The protocol, the unit of ExpirationTime, and field mappings are subject to the actual RTC gateway deployment version and return conventions. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetDataChannelCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredentialWithOptions(const GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataChannelCredential"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataChannelCredentialResponse>();
}

/**
 * @summary Retrieves voice conversation parameters.
 *
 * @description Retrieves temporary connection credentials for the client data channel of a specified InstanceId and DeviceId. Requests are verified based on the current POP authentication and instance permission configurations. DeviceId cannot be empty. Unlike GetTrialDataChannelCredential, this operation does not use the VisitorToken for trial links. The client must use the actual Topic, ClientId, Endpoint, UserName, and Password returned to connect to and subscribe to the data channel, and must not infer the address, topic, or authentication information. The same client must keep the DeviceId consistent when initiating BridgeWebCall or MakePilotCall. This operation only retrieves data channel credentials and does not create text sessions, initiate phone calls, or establish web voice channels. The username and password for the data channel are not the same set of credentials as the token returned for web calls. The protocol, the unit of ExpirationTime, and field mappings are subject to the actual RTC gateway deployment version and return conventions. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetDataChannelCredentialRequest
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredential(const GetDataChannelCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataChannelCredentialWithOptions(request, runtime);
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
 * @summary Retrieves a call recording.
 *
 * @param request GetRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordingResponse
 */
GetRecordingResponse Client::getRecordingWithOptions(const GetRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRecording"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordingResponse>();
}

/**
 * @summary Retrieves a call recording.
 *
 * @param request GetRecordingRequest
 * @return GetRecordingResponse
 */
GetRecordingResponse Client::getRecording(const GetRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordingWithOptions(request, runtime);
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
 * @summary Retrieves the trial channel.
 *
 * @description Retrieves the corresponding trial access channel and the list of available trial scenarios based on the VisitorToken in a trial link. The service verifies whether the token exists, whether it can locate the channel, and whether it has expired. Upon success, it returns information such as the instance to which the channel belongs, the channel type, display configurations, validity period, and scenario configurations. This operation can be used as an initialization step for the trial page: first read the returned instance and scenarios, and then call the corresponding trial text or web voice operation. This operation does not create a text session or initiate a voice call. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetTrialAccessChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrialAccessChannelResponse
 */
GetTrialAccessChannelResponse Client::getTrialAccessChannelWithOptions(const GetTrialAccessChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrialAccessChannel"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrialAccessChannelResponse>();
}

/**
 * @summary Retrieves the trial channel.
 *
 * @description Retrieves the corresponding trial access channel and the list of available trial scenarios based on the VisitorToken in a trial link. The service verifies whether the token exists, whether it can locate the channel, and whether it has expired. Upon success, it returns information such as the instance to which the channel belongs, the channel type, display configurations, validity period, and scenario configurations. This operation can be used as an initialization step for the trial page: first read the returned instance and scenarios, and then call the corresponding trial text or web voice operation. This operation does not create a text session or initiate a voice call. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetTrialAccessChannelRequest
 * @return GetTrialAccessChannelResponse
 */
GetTrialAccessChannelResponse Client::getTrialAccessChannel(const GetTrialAccessChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTrialAccessChannelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the parameters for a trial voice conversation.
 *
 * @description Retrieves temporary connection credentials for the client data channel for a specified InstanceId and DeviceId by using a valid VisitorToken from a trial link. The response includes information such as Topic, ClientId, Endpoint, UserName, Password, and expiration time. The client must use the actual values returned by the service to connect to and subscribe to the data channel, and must not concatenate addresses, topics, or authentication information. The DeviceId must be consistent with the BridgeTrialWebCall request from the same client. This operation only retrieves data channel credentials and does not initiate text sessions or establish web voice calls. The credential protocol and expiration time unit are subject to the conventions returned by the actual RTC gateway. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetTrialDataChannelCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrialDataChannelCredentialResponse
 */
GetTrialDataChannelCredentialResponse Client::getTrialDataChannelCredentialWithOptions(const GetTrialDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrialDataChannelCredential"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrialDataChannelCredentialResponse>();
}

/**
 * @summary Retrieves the parameters for a trial voice conversation.
 *
 * @description Retrieves temporary connection credentials for the client data channel for a specified InstanceId and DeviceId by using a valid VisitorToken from a trial link. The response includes information such as Topic, ClientId, Endpoint, UserName, Password, and expiration time. The client must use the actual values returned by the service to connect to and subscribe to the data channel, and must not concatenate addresses, topics, or authentication information. The DeviceId must be consistent with the BridgeTrialWebCall request from the same client. This operation only retrieves data channel credentials and does not initiate text sessions or establish web voice calls. The credential protocol and expiration time unit are subject to the conventions returned by the actual RTC gateway. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request GetTrialDataChannelCredentialRequest
 * @return GetTrialDataChannelCredentialResponse
 */
GetTrialDataChannelCredentialResponse Client::getTrialDataChannelCredential(const GetTrialDataChannelCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTrialDataChannelCredentialWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of ASR models.
 *
 * @param request ListAsrModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsrModelsResponse
 */
ListAsrModelsResponse Client::listAsrModelsWithOptions(const ListAsrModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAsrModels"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsrModelsResponse>();
}

/**
 * @summary Retrieves the list of ASR models.
 *
 * @param request ListAsrModelsRequest
 * @return ListAsrModelsResponse
 */
ListAsrModelsResponse Client::listAsrModels(const ListAsrModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsrModelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of outbound campaigns.
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
 * @summary Queries a list of outbound campaigns.
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
 * @summary Queries the list of tenant numbers.
 *
 * @description Queries the list of tenant numbers.
 *
 * @param request ListCorpNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCorpNumbersResponse
 */
ListCorpNumbersResponse Client::listCorpNumbersWithOptions(const ListCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSipTrunkId()) {
    body["SipTrunkId"] = request.getSipTrunkId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCorpNumbers"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCorpNumbersResponse>();
}

/**
 * @summary Queries the list of tenant numbers.
 *
 * @description Queries the list of tenant numbers.
 *
 * @param request ListCorpNumbersRequest
 * @return ListCorpNumbersResponse
 */
ListCorpNumbersResponse Client::listCorpNumbers(const ListCorpNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCorpNumbersWithOptions(request, runtime);
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
 * @summary Queries the instances bound to a number.
 *
 * @description Queries the binding information between a number and instances.
 *
 * @param request ListInstanceBindingsOfNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceBindingsOfNumberResponse
 */
ListInstanceBindingsOfNumberResponse Client::listInstanceBindingsOfNumberWithOptions(const ListInstanceBindingsOfNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstanceBindingsOfNumber"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceBindingsOfNumberResponse>();
}

/**
 * @summary Queries the instances bound to a number.
 *
 * @description Queries the binding information between a number and instances.
 *
 * @param request ListInstanceBindingsOfNumberRequest
 * @return ListInstanceBindingsOfNumberResponse
 */
ListInstanceBindingsOfNumberResponse Client::listInstanceBindingsOfNumber(const ListInstanceBindingsOfNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceBindingsOfNumberWithOptions(request, runtime);
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
 * @summary Queries the language model access configurations.
 *
 * @description Queries the list of language model access configurations of a specified instance by paging.
 *
 * @param request ListLlmAccessProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLlmAccessProfilesResponse
 */
ListLlmAccessProfilesResponse Client::listLlmAccessProfilesWithOptions(const ListLlmAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListLlmAccessProfiles"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLlmAccessProfilesResponse>();
}

/**
 * @summary Queries the language model access configurations.
 *
 * @description Queries the list of language model access configurations of a specified instance by paging.
 *
 * @param request ListLlmAccessProfilesRequest
 * @return ListLlmAccessProfilesResponse
 */
ListLlmAccessProfilesResponse Client::listLlmAccessProfiles(const ListLlmAccessProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLlmAccessProfilesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of numbers bound to an instance.
 *
 * @description Queries the binding information between an instance and numbers.
 *
 * @param request ListNumberBindingsOfInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNumberBindingsOfInstanceResponse
 */
ListNumberBindingsOfInstanceResponse Client::listNumberBindingsOfInstanceWithOptions(const ListNumberBindingsOfInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNumberBindingsOfInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNumberBindingsOfInstanceResponse>();
}

/**
 * @summary Queries the list of numbers bound to an instance.
 *
 * @description Queries the binding information between an instance and numbers.
 *
 * @param request ListNumberBindingsOfInstanceRequest
 * @return ListNumberBindingsOfInstanceResponse
 */
ListNumberBindingsOfInstanceResponse Client::listNumberBindingsOfInstance(const ListNumberBindingsOfInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNumberBindingsOfInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the phone numbers of an instance.
 *
 * @description Queries the phone numbers of a specified instance.
 *
 * @param request ListNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNumbersResponse
 */
ListNumbersResponse Client::listNumbersWithOptions(const ListNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSipTrunkId()) {
    body["SipTrunkId"] = request.getSipTrunkId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNumbers"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNumbersResponse>();
}

/**
 * @summary Queries the phone numbers of an instance.
 *
 * @description Queries the phone numbers of a specified instance.
 *
 * @param request ListNumbersRequest
 * @return ListNumbersResponse
 */
ListNumbersResponse Client::listNumbers(const ListNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNumbersWithOptions(request, runtime);
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
  if (!!request.hasBuilderType()) {
    body["BuilderType"] = request.getBuilderType();
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
 * @summary Retrieves a list of scenarios based on the flow ID.
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
 * @summary Retrieves a list of scenarios based on the flow ID.
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
 * @summary Initiates an outbound call.
 *
 * @description Initiates an outbound call test to the real phone number corresponding to Number by using the specified instance and scenario. Before calling this operation, you must obtain an SMS verification code for the OutboundCallTest scenario for the called number and pass it in VerificationCode. The service verifies the code and initiates the call by using the outbound caller ID configured on the platform. DeviceId is used to bind the client data stream to the current call. CallVariables passes call variables in JSON object format, and Tags passes attached data. Upon success, a SessionId with the test- prefix is returned to associate with the current call. A successful API response does not indicate that the called party has answered or that the conversation has ended. Test only authorized numbers. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use real resources and service return values for actual calls.
 *
 * @param request MakePilotCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakePilotCallResponse
 */
MakePilotCallResponse Client::makePilotCallWithOptions(const MakePilotCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallVariables()) {
    query["CallVariables"] = request.getCallVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.getVerificationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MakePilotCall"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MakePilotCallResponse>();
}

/**
 * @summary Initiates an outbound call.
 *
 * @description Initiates an outbound call test to the real phone number corresponding to Number by using the specified instance and scenario. Before calling this operation, you must obtain an SMS verification code for the OutboundCallTest scenario for the called number and pass it in VerificationCode. The service verifies the code and initiates the call by using the outbound caller ID configured on the platform. DeviceId is used to bind the client data stream to the current call. CallVariables passes call variables in JSON object format, and Tags passes attached data. Upon success, a SessionId with the test- prefix is returned to associate with the current call. A successful API response does not indicate that the called party has answered or that the conversation has ended. Test only authorized numbers. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use real resources and service return values for actual calls.
 *
 * @param request MakePilotCallRequest
 * @return MakePilotCallResponse
 */
MakePilotCallResponse Client::makePilotCall(const MakePilotCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makePilotCallWithOptions(request, runtime);
}

/**
 * @summary Pauses an outbound campaign.
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
 * @summary Pauses an outbound campaign.
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
 * @summary Submits an outbound campaign.
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
 * @summary Submits an outbound campaign.
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
 * @summary Sends a user input to a trial text conversation.
 *
 * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request TrialDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrialDialogueResponse
 */
FutureGenerator<TrialDialogueResponse> Client::trialDialogueWithSSE(const TrialDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrialDialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<TrialDialogueResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a user input to a trial text conversation.
 *
 * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request TrialDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrialDialogueResponse
 */
TrialDialogueResponse Client::trialDialogueWithOptions(const TrialDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  if (!!request.hasVisitorToken()) {
    query["VisitorToken"] = request.getVisitorToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrialDialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrialDialogueResponse>();
}

/**
 * @summary Sends a user input to a trial text conversation.
 *
 * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
 *
 * @param request TrialDialogueRequest
 * @return TrialDialogueResponse
 */
TrialDialogueResponse Client::trialDialogue(const TrialDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return trialDialogueWithOptions(request, runtime);
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
 * @summary Updates the instances bound to a number.
 *
 * @description Updates the binding between a number and instances.
 *
 * @param tmpReq UpdateInstanceBindingsOfNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceBindingsOfNumberResponse
 */
UpdateInstanceBindingsOfNumberResponse Client::updateInstanceBindingsOfNumberWithOptions(const UpdateInstanceBindingsOfNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateInstanceBindingsOfNumberShrinkRequest request = UpdateInstanceBindingsOfNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json body = {};
  if (!!request.hasInstanceIdsShrink()) {
    body["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceBindingsOfNumber"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceBindingsOfNumberResponse>();
}

/**
 * @summary Updates the instances bound to a number.
 *
 * @description Updates the binding between a number and instances.
 *
 * @param request UpdateInstanceBindingsOfNumberRequest
 * @return UpdateInstanceBindingsOfNumberResponse
 */
UpdateInstanceBindingsOfNumberResponse Client::updateInstanceBindingsOfNumber(const UpdateInstanceBindingsOfNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceBindingsOfNumberWithOptions(request, runtime);
}

/**
 * @summary Updates the language model access configuration.
 *
 * @description Updates the language model access configuration for a specified instance.
 *
 * @param tmpReq UpdateLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLlmAccessProfileResponse
 */
UpdateLlmAccessProfileResponse Client::updateLlmAccessProfileWithOptions(const UpdateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLlmAccessProfileShrinkRequest request = UpdateLlmAccessProfileShrinkRequest();
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

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLlmAccessProfileResponse>();
}

/**
 * @summary Updates the language model access configuration.
 *
 * @description Updates the language model access configuration for a specified instance.
 *
 * @param request UpdateLlmAccessProfileRequest
 * @return UpdateLlmAccessProfileResponse
 */
UpdateLlmAccessProfileResponse Client::updateLlmAccessProfile(const UpdateLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLlmAccessProfileWithOptions(request, runtime);
}

/**
 * @summary Updates the phone numbers bound to an instance.
 *
 * @description Updates the binding relationship between an instance and phone numbers.
 *
 * @param tmpReq UpdateNumberBindingsOfInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNumberBindingsOfInstanceResponse
 */
UpdateNumberBindingsOfInstanceResponse Client::updateNumberBindingsOfInstanceWithOptions(const UpdateNumberBindingsOfInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNumberBindingsOfInstanceShrinkRequest request = UpdateNumberBindingsOfInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumbersShrink()) {
    body["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNumberBindingsOfInstance"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNumberBindingsOfInstanceResponse>();
}

/**
 * @summary Updates the phone numbers bound to an instance.
 *
 * @description Updates the binding relationship between an instance and phone numbers.
 *
 * @param request UpdateNumberBindingsOfInstanceRequest
 * @return UpdateNumberBindingsOfInstanceResponse
 */
UpdateNumberBindingsOfInstanceResponse Client::updateNumberBindingsOfInstance(const UpdateNumberBindingsOfInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNumberBindingsOfInstanceWithOptions(request, runtime);
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