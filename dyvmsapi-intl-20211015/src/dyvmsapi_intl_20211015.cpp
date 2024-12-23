// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dyvmsapi_intl_20211015.hpp>
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

using namespace Alibabacloud_Dyvmsapi-intl20211015;

Alibabacloud_Dyvmsapi-intl20211015::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dyvmsapi-intl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dyvmsapi-intl20211015::Client::getEndpoint(shared_ptr<string> productId,
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

BackendCallGroupResponse Alibabacloud_Dyvmsapi-intl20211015::Client::backendCallGroupWithOptions(shared_ptr<BackendCallGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BackendCallGroupShrinkRequest> request = make_shared<BackendCallGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->calledNumber)) {
    request->calledNumberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->calledNumber, make_shared<string>("CalledNumber"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumberShrink)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumberShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendType)) {
    query->insert(pair<string, long>("SendType", *request->sendType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingStart)) {
    query->insert(pair<string, string>("TimingStart", *request->timingStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BackendCallGroup"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BackendCallGroupResponse(callApi(params, req, runtime));
}

BackendCallGroupResponse Alibabacloud_Dyvmsapi-intl20211015::Client::backendCallGroup(shared_ptr<BackendCallGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return backendCallGroupWithOptions(request, runtime);
}

BackendCallSignalResponse Alibabacloud_Dyvmsapi-intl20211015::Client::backendCallSignalWithOptions(shared_ptr<BackendCallSignalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsParam)) {
    query->insert(pair<string, string>("TtsParam", *request->ttsParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BackendCallSignal"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BackendCallSignalResponse(callApi(params, req, runtime));
}

BackendCallSignalResponse Alibabacloud_Dyvmsapi-intl20211015::Client::backendCallSignal(shared_ptr<BackendCallSignalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return backendCallSignalWithOptions(request, runtime);
}

GroupCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::groupCallWithOptions(shared_ptr<GroupCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GroupCallShrinkRequest> request = make_shared<GroupCallShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->calledNumber)) {
    request->calledNumberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->calledNumber, make_shared<string>("CalledNumber"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumberShrink)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumberShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendType)) {
    query->insert(pair<string, long>("SendType", *request->sendType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("Signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureNonce)) {
    query->insert(pair<string, string>("SignatureNonce", *request->signatureNonce));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("Timestamp", *request->timestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingStart)) {
    query->insert(pair<string, string>("TimingStart", *request->timingStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsParam)) {
    query->insert(pair<string, string>("TtsParam", *request->ttsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupCall"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupCallResponse(callApi(params, req, runtime));
}

GroupCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::groupCall(shared_ptr<GroupCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return groupCallWithOptions(request, runtime);
}

SignalCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::signalCallWithOptions(shared_ptr<SignalCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendType)) {
    query->insert(pair<string, long>("SendType", *request->sendType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("Signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureNonce)) {
    query->insert(pair<string, string>("SignatureNonce", *request->signatureNonce));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("Timestamp", *request->timestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingStart)) {
    query->insert(pair<string, string>("TimingStart", *request->timingStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsParam)) {
    query->insert(pair<string, string>("TtsParam", *request->ttsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SignalCall"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SignalCallResponse(callApi(params, req, runtime));
}

SignalCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::signalCall(shared_ptr<SignalCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signalCallWithOptions(request, runtime);
}

VoiceGroupCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::voiceGroupCallWithOptions(shared_ptr<VoiceGroupCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<VoiceGroupCallShrinkRequest> request = make_shared<VoiceGroupCallShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->calledNumber)) {
    request->calledNumberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->calledNumber, make_shared<string>("CalledNumber"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumberShrink)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumberShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendType)) {
    query->insert(pair<string, long>("SendType", *request->sendType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingStart)) {
    query->insert(pair<string, string>("TimingStart", *request->timingStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsParam)) {
    query->insert(pair<string, string>("TtsParam", *request->ttsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceGroupCall"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceGroupCallResponse(callApi(params, req, runtime));
}

VoiceGroupCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::voiceGroupCall(shared_ptr<VoiceGroupCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceGroupCallWithOptions(request, runtime);
}

VoiceSingleCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::voiceSingleCallWithOptions(shared_ptr<VoiceSingleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerIdNumber)) {
    query->insert(pair<string, string>("CallerIdNumber", *request->callerIdNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryId)) {
    query->insert(pair<string, string>("CountryId", *request->countryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playTimes)) {
    query->insert(pair<string, long>("PlayTimes", *request->playTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendType)) {
    query->insert(pair<string, long>("SendType", *request->sendType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speed)) {
    query->insert(pair<string, long>("Speed", *request->speed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingStart)) {
    query->insert(pair<string, string>("TimingStart", *request->timingStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsCode)) {
    query->insert(pair<string, string>("TtsCode", *request->ttsCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsParam)) {
    query->insert(pair<string, string>("TtsParam", *request->ttsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceCode)) {
    query->insert(pair<string, string>("VoiceCode", *request->voiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceSingleCall"))},
    {"version", boost::any(string("2021-10-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceSingleCallResponse(callApi(params, req, runtime));
}

VoiceSingleCallResponse Alibabacloud_Dyvmsapi-intl20211015::Client::voiceSingleCall(shared_ptr<VoiceSingleCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceSingleCallWithOptions(request, runtime);
}

