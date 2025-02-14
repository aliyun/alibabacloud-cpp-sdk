// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dyplsapi_20170525.hpp>
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

using namespace Alibabacloud_Dyplsapi20170525;

Alibabacloud_Dyplsapi20170525::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dyplsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dyplsapi20170525::Client::getEndpoint(shared_ptr<string> productId,
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

AddAxnTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::addAxnTrackNoWithOptions(shared_ptr<AddAxnTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subsId)) {
    query->insert(pair<string, string>("SubsId", *request->subsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trackNo)) {
    query->insert(pair<string, string>("trackNo", *request->trackNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAxnTrackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddAxnTrackNoResponse(callApi(params, req, runtime));
  }
  else {
    return AddAxnTrackNoResponse(execute(params, req, runtime));
  }
}

AddAxnTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::addAxnTrackNo(shared_ptr<AddAxnTrackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAxnTrackNoWithOptions(request, runtime);
}

AddSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::addSecretBlacklistWithOptions(shared_ptr<AddSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackNo)) {
    query->insert(pair<string, string>("BlackNo", *request->blackNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wayControl)) {
    query->insert(pair<string, string>("WayControl", *request->wayControl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSecretBlacklist"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddSecretBlacklistResponse(callApi(params, req, runtime));
  }
  else {
    return AddSecretBlacklistResponse(execute(params, req, runtime));
  }
}

AddSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::addSecretBlacklist(shared_ptr<AddSecretBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSecretBlacklistWithOptions(request, runtime);
}

BindAXBCallResponse Alibabacloud_Dyplsapi20170525::Client::bindAXBCallWithOptions(shared_ptr<BindAXBCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authId)) {
    query->insert(pair<string, string>("AuthId", *request->authId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiration)) {
    query->insert(pair<string, long>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telA)) {
    query->insert(pair<string, string>("TelA", *request->telA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAXBCall"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindAXBCallResponse(callApi(params, req, runtime));
  }
  else {
    return BindAXBCallResponse(execute(params, req, runtime));
  }
}

BindAXBCallResponse Alibabacloud_Dyplsapi20170525::Client::bindAXBCall(shared_ptr<BindAXBCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAXBCallWithOptions(request, runtime);
}

BindAxbResponse Alibabacloud_Dyplsapi20170525::Client::bindAxbWithOptions(shared_ptr<BindAxbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASRModelId)) {
    query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASRStatus)) {
    query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callDisplayType)) {
    query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callRestrict)) {
    query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callTimeout)) {
    query->insert(pair<string, long>("CallTimeout", *request->callTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtmfConfig)) {
    query->insert(pair<string, string>("DtmfConfig", *request->dtmfConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectCity)) {
    query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecordingEnabled)) {
    query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringConfig)) {
    query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxb"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindAxbResponse(callApi(params, req, runtime));
  }
  else {
    return BindAxbResponse(execute(params, req, runtime));
  }
}

BindAxbResponse Alibabacloud_Dyplsapi20170525::Client::bindAxb(shared_ptr<BindAxbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxbWithOptions(request, runtime);
}

BindAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindAxgWithOptions(shared_ptr<BindAxgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASRModelId)) {
    query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASRStatus)) {
    query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callDisplayType)) {
    query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callRestrict)) {
    query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectCity)) {
    query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecordingEnabled)) {
    query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringConfig)) {
    query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxg"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindAxgResponse(callApi(params, req, runtime));
  }
  else {
    return BindAxgResponse(execute(params, req, runtime));
  }
}

BindAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindAxg(shared_ptr<BindAxgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxgWithOptions(request, runtime);
}

BindAxnResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnWithOptions(shared_ptr<BindAxnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASRModelId)) {
    query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASRStatus)) {
    query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callDisplayType)) {
    query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callRestrict)) {
    query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callTimeout)) {
    query->insert(pair<string, long>("CallTimeout", *request->callTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectCity)) {
    query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecordingEnabled)) {
    query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noType)) {
    query->insert(pair<string, string>("NoType", *request->noType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringConfig)) {
    query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxn"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindAxnResponse(callApi(params, req, runtime));
  }
  else {
    return BindAxnResponse(execute(params, req, runtime));
  }
}

BindAxnResponse Alibabacloud_Dyplsapi20170525::Client::bindAxn(shared_ptr<BindAxnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxnWithOptions(request, runtime);
}

BindAxnExtensionResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnExtensionWithOptions(shared_ptr<BindAxnExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASRModelId)) {
    query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASRStatus)) {
    query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callDisplayType)) {
    query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callRestrict)) {
    query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectCity)) {
    query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extension)) {
    query->insert(pair<string, string>("Extension", *request->extension));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecordingEnabled)) {
    query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringConfig)) {
    query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxnExtension"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindAxnExtensionResponse(callApi(params, req, runtime));
  }
  else {
    return BindAxnExtensionResponse(execute(params, req, runtime));
  }
}

BindAxnExtensionResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnExtension(shared_ptr<BindAxnExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxnExtensionWithOptions(request, runtime);
}

BindBatchAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindBatchAxgWithOptions(shared_ptr<BindBatchAxgRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BindBatchAxgShrinkRequest> request = make_shared<BindBatchAxgShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BindBatchAxgRequestAxgBindList>>(tmpReq->axgBindList)) {
    request->axgBindListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->axgBindList, make_shared<string>("AxgBindList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->axgBindListShrink)) {
    query->insert(pair<string, string>("AxgBindList", *request->axgBindListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
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
    {"action", boost::any(string("BindBatchAxg"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindBatchAxgResponse(callApi(params, req, runtime));
  }
  else {
    return BindBatchAxgResponse(execute(params, req, runtime));
  }
}

BindBatchAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindBatchAxg(shared_ptr<BindBatchAxgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindBatchAxgWithOptions(request, runtime);
}

BindXBResponse Alibabacloud_Dyplsapi20170525::Client::bindXBWithOptions(shared_ptr<BindXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telB)) {
    query->insert(pair<string, string>("TelB", *request->telB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telX)) {
    query->insert(pair<string, string>("TelX", *request->telX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindXB"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindXBResponse(callApi(params, req, runtime));
  }
  else {
    return BindXBResponse(execute(params, req, runtime));
  }
}

BindXBResponse Alibabacloud_Dyplsapi20170525::Client::bindXB(shared_ptr<BindXBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindXBWithOptions(request, runtime);
}

BuySecretNoResponse Alibabacloud_Dyplsapi20170525::Client::buySecretNoWithOptions(shared_ptr<BuySecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->displayPool)) {
    query->insert(pair<string, bool>("DisplayPool", *request->displayPool));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuySecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BuySecretNoResponse(callApi(params, req, runtime));
  }
  else {
    return BuySecretNoResponse(execute(params, req, runtime));
  }
}

BuySecretNoResponse Alibabacloud_Dyplsapi20170525::Client::buySecretNo(shared_ptr<BuySecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return buySecretNoWithOptions(request, runtime);
}

CancelPickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::cancelPickUpWaybillWithOptions(shared_ptr<CancelPickUpWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cancelDesc)) {
    query->insert(pair<string, string>("CancelDesc", *request->cancelDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderCode)) {
    query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
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
    {"action", boost::any(string("CancelPickUpWaybill"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelPickUpWaybillResponse(callApi(params, req, runtime));
  }
  else {
    return CancelPickUpWaybillResponse(execute(params, req, runtime));
  }
}

CancelPickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::cancelPickUpWaybill(shared_ptr<CancelPickUpWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPickUpWaybillWithOptions(request, runtime);
}

ConfigXResponse Alibabacloud_Dyplsapi20170525::Client::configXWithOptions(shared_ptr<ConfigXRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ConfigXShrinkRequest> request = make_shared<ConfigXShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ConfigXRequestSequenceCalls>>(tmpReq->sequenceCalls)) {
    request->sequenceCallsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sequenceCalls, make_shared<string>("SequenceCalls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callAbility)) {
    query->insert(pair<string, string>("CallAbility", *request->callAbility));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->GNFlag)) {
    query->insert(pair<string, string>("GNFlag", *request->GNFlag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceCallsShrink)) {
    query->insert(pair<string, string>("SequenceCalls", *request->sequenceCallsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceMode)) {
    query->insert(pair<string, string>("SequenceMode", *request->sequenceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsAbility)) {
    query->insert(pair<string, string>("SmsAbility", *request->smsAbility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsSignMode)) {
    query->insert(pair<string, string>("SmsSignMode", *request->smsSignMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telX)) {
    query->insert(pair<string, string>("TelX", *request->telX));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigX"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ConfigXResponse(callApi(params, req, runtime));
  }
  else {
    return ConfigXResponse(execute(params, req, runtime));
  }
}

ConfigXResponse Alibabacloud_Dyplsapi20170525::Client::configX(shared_ptr<ConfigXRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configXWithOptions(request, runtime);
}

CreateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::createAxgGroupWithOptions(shared_ptr<CreateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numbers)) {
    query->insert(pair<string, string>("Numbers", *request->numbers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
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
    {"action", boost::any(string("CreateAxgGroup"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAxgGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAxgGroupResponse(execute(params, req, runtime));
  }
}

CreateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::createAxgGroup(shared_ptr<CreateAxgGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAxgGroupWithOptions(request, runtime);
}

CreatePickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::createPickUpWaybillWithOptions(shared_ptr<CreatePickUpWaybillRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePickUpWaybillShrinkRequest> request = make_shared<CreatePickUpWaybillShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePickUpWaybillRequestConsigneeAddress>(tmpReq->consigneeAddress)) {
    request->consigneeAddressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->consigneeAddress, make_shared<string>("ConsigneeAddress"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePickUpWaybillRequestGoodsInfos>>(tmpReq->goodsInfos)) {
    request->goodsInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->goodsInfos, make_shared<string>("GoodsInfos"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePickUpWaybillRequestSendAddress>(tmpReq->sendAddress)) {
    request->sendAddressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sendAddress, make_shared<string>("SendAddress"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appointGotEndTime)) {
    query->insert(pair<string, string>("AppointGotEndTime", *request->appointGotEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appointGotStartTime)) {
    query->insert(pair<string, string>("AppointGotStartTime", *request->appointGotStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizType)) {
    query->insert(pair<string, long>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consigneeAddressShrink)) {
    query->insert(pair<string, string>("ConsigneeAddress", *request->consigneeAddressShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consigneeMobile)) {
    query->insert(pair<string, string>("ConsigneeMobile", *request->consigneeMobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consigneeName)) {
    query->insert(pair<string, string>("ConsigneeName", *request->consigneeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consigneePhone)) {
    query->insert(pair<string, string>("ConsigneePhone", *request->consigneePhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpCode)) {
    query->insert(pair<string, string>("CpCode", *request->cpCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->goodsInfosShrink)) {
    query->insert(pair<string, string>("GoodsInfos", *request->goodsInfosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderChannels)) {
    query->insert(pair<string, string>("OrderChannels", *request->orderChannels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderCode)) {
    query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendAddressShrink)) {
    query->insert(pair<string, string>("SendAddress", *request->sendAddressShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendMobile)) {
    query->insert(pair<string, string>("SendMobile", *request->sendMobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendName)) {
    query->insert(pair<string, string>("SendName", *request->sendName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendPhone)) {
    query->insert(pair<string, string>("SendPhone", *request->sendPhone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePickUpWaybill"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePickUpWaybillResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePickUpWaybillResponse(execute(params, req, runtime));
  }
}

CreatePickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::createPickUpWaybill(shared_ptr<CreatePickUpWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPickUpWaybillWithOptions(request, runtime);
}

CreatePickUpWaybillPreQueryResponse Alibabacloud_Dyplsapi20170525::Client::createPickUpWaybillPreQueryWithOptions(shared_ptr<CreatePickUpWaybillPreQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePickUpWaybillPreQueryShrinkRequest> request = make_shared<CreatePickUpWaybillPreQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePickUpWaybillPreQueryRequestConsigneeInfo>(tmpReq->consigneeInfo)) {
    request->consigneeInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->consigneeInfo, make_shared<string>("ConsigneeInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePickUpWaybillPreQueryRequestSenderInfo>(tmpReq->senderInfo)) {
    request->senderInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->senderInfo, make_shared<string>("SenderInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consigneeInfoShrink)) {
    query->insert(pair<string, string>("ConsigneeInfo", *request->consigneeInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpCode)) {
    query->insert(pair<string, string>("CpCode", *request->cpCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderChannels)) {
    query->insert(pair<string, string>("OrderChannels", *request->orderChannels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderCode)) {
    query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preWeight)) {
    query->insert(pair<string, string>("PreWeight", *request->preWeight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderInfoShrink)) {
    query->insert(pair<string, string>("SenderInfo", *request->senderInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePickUpWaybillPreQuery"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePickUpWaybillPreQueryResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePickUpWaybillPreQueryResponse(execute(params, req, runtime));
  }
}

CreatePickUpWaybillPreQueryResponse Alibabacloud_Dyplsapi20170525::Client::createPickUpWaybillPreQuery(shared_ptr<CreatePickUpWaybillPreQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPickUpWaybillPreQueryWithOptions(request, runtime);
}

CreateSmsSignResponse Alibabacloud_Dyplsapi20170525::Client::createSmsSignWithOptions(shared_ptr<CreateSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNo)) {
    query->insert(pair<string, string>("CalledNo", *request->calledNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNo)) {
    query->insert(pair<string, string>("CallingNo", *request->callingNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
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
    {"action", boost::any(string("CreateSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSmsSignResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSmsSignResponse(execute(params, req, runtime));
  }
}

CreateSmsSignResponse Alibabacloud_Dyplsapi20170525::Client::createSmsSign(shared_ptr<CreateSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmsSignWithOptions(request, runtime);
}

DeleteAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::deleteAxgGroupWithOptions(shared_ptr<DeleteAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
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
    {"action", boost::any(string("DeleteAxgGroup"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAxgGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAxgGroupResponse(execute(params, req, runtime));
  }
}

DeleteAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::deleteAxgGroup(shared_ptr<DeleteAxgGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAxgGroupWithOptions(request, runtime);
}

DeleteSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::deleteSecretBlacklistWithOptions(shared_ptr<DeleteSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackNo)) {
    query->insert(pair<string, string>("BlackNo", *request->blackNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wayControl)) {
    query->insert(pair<string, string>("WayControl", *request->wayControl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecretBlacklist"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSecretBlacklistResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSecretBlacklistResponse(execute(params, req, runtime));
  }
}

DeleteSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::deleteSecretBlacklist(shared_ptr<DeleteSecretBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecretBlacklistWithOptions(request, runtime);
}

GetSecretAsrDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSecretAsrDetailWithOptions(shared_ptr<GetSecretAsrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callTime)) {
    query->insert(pair<string, string>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecretAsrDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSecretAsrDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetSecretAsrDetailResponse(execute(params, req, runtime));
  }
}

GetSecretAsrDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSecretAsrDetail(shared_ptr<GetSecretAsrDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecretAsrDetailWithOptions(request, runtime);
}

GetTotalPublicUrlResponse Alibabacloud_Dyplsapi20170525::Client::getTotalPublicUrlWithOptions(shared_ptr<GetTotalPublicUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callTime)) {
    query->insert(pair<string, string>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkSubs)) {
    query->insert(pair<string, bool>("CheckSubs", *request->checkSubs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partnerKey)) {
    query->insert(pair<string, string>("PartnerKey", *request->partnerKey));
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
    {"action", boost::any(string("GetTotalPublicUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTotalPublicUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetTotalPublicUrlResponse(execute(params, req, runtime));
  }
}

GetTotalPublicUrlResponse Alibabacloud_Dyplsapi20170525::Client::getTotalPublicUrl(shared_ptr<GetTotalPublicUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTotalPublicUrlWithOptions(request, runtime);
}

GetXConfigResponse Alibabacloud_Dyplsapi20170525::Client::getXConfigWithOptions(shared_ptr<GetXConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telX)) {
    query->insert(pair<string, string>("TelX", *request->telX));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetXConfig"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetXConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetXConfigResponse(execute(params, req, runtime));
  }
}

GetXConfigResponse Alibabacloud_Dyplsapi20170525::Client::getXConfig(shared_ptr<GetXConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getXConfigWithOptions(request, runtime);
}

GetXDefaultConfigResponse Alibabacloud_Dyplsapi20170525::Client::getXDefaultConfigWithOptions(shared_ptr<GetXDefaultConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telX)) {
    query->insert(pair<string, string>("TelX", *request->telX));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetXDefaultConfig"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetXDefaultConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetXDefaultConfigResponse(execute(params, req, runtime));
  }
}

GetXDefaultConfigResponse Alibabacloud_Dyplsapi20170525::Client::getXDefaultConfig(shared_ptr<GetXDefaultConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getXDefaultConfigWithOptions(request, runtime);
}

ListXTelephonesResponse Alibabacloud_Dyplsapi20170525::Client::listXTelephonesWithOptions(shared_ptr<ListXTelephonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
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
    {"action", boost::any(string("ListXTelephones"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListXTelephonesResponse(callApi(params, req, runtime));
  }
  else {
    return ListXTelephonesResponse(execute(params, req, runtime));
  }
}

ListXTelephonesResponse Alibabacloud_Dyplsapi20170525::Client::listXTelephones(shared_ptr<ListXTelephonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listXTelephonesWithOptions(request, runtime);
}

LockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::lockSecretNoWithOptions(shared_ptr<LockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LockSecretNoResponse(callApi(params, req, runtime));
  }
  else {
    return LockSecretNoResponse(execute(params, req, runtime));
  }
}

LockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::lockSecretNo(shared_ptr<LockSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockSecretNoWithOptions(request, runtime);
}

OperateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::operateAxgGroupWithOptions(shared_ptr<OperateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numbers)) {
    query->insert(pair<string, string>("Numbers", *request->numbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
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
    {"action", boost::any(string("OperateAxgGroup"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return OperateAxgGroupResponse(callApi(params, req, runtime));
  }
  else {
    return OperateAxgGroupResponse(execute(params, req, runtime));
  }
}

OperateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::operateAxgGroup(shared_ptr<OperateAxgGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateAxgGroupWithOptions(request, runtime);
}

OperateBlackNoResponse Alibabacloud_Dyplsapi20170525::Client::operateBlackNoWithOptions(shared_ptr<OperateBlackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackNo)) {
    query->insert(pair<string, string>("BlackNo", *request->blackNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tips)) {
    query->insert(pair<string, string>("Tips", *request->tips));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateBlackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return OperateBlackNoResponse(callApi(params, req, runtime));
  }
  else {
    return OperateBlackNoResponse(execute(params, req, runtime));
  }
}

OperateBlackNoResponse Alibabacloud_Dyplsapi20170525::Client::operateBlackNo(shared_ptr<OperateBlackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateBlackNoWithOptions(request, runtime);
}

QueryPhoneNoAByTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::queryPhoneNoAByTrackNoWithOptions(shared_ptr<QueryPhoneNoAByTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinetNo)) {
    query->insert(pair<string, string>("CabinetNo", *request->cabinetNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trackNo)) {
    query->insert(pair<string, string>("trackNo", *request->trackNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPhoneNoAByTrackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryPhoneNoAByTrackNoResponse(callApi(params, req, runtime));
  }
  else {
    return QueryPhoneNoAByTrackNoResponse(execute(params, req, runtime));
  }
}

QueryPhoneNoAByTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::queryPhoneNoAByTrackNo(shared_ptr<QueryPhoneNoAByTrackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPhoneNoAByTrackNoWithOptions(request, runtime);
}

QueryRecordFileDownloadUrlResponse Alibabacloud_Dyplsapi20170525::Client::queryRecordFileDownloadUrlWithOptions(shared_ptr<QueryRecordFileDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callTime)) {
    query->insert(pair<string, string>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
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
    {"action", boost::any(string("QueryRecordFileDownloadUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryRecordFileDownloadUrlResponse(callApi(params, req, runtime));
  }
  else {
    return QueryRecordFileDownloadUrlResponse(execute(params, req, runtime));
  }
}

QueryRecordFileDownloadUrlResponse Alibabacloud_Dyplsapi20170525::Client::queryRecordFileDownloadUrl(shared_ptr<QueryRecordFileDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordFileDownloadUrlWithOptions(request, runtime);
}

QuerySecretNoDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoDetailWithOptions(shared_ptr<QuerySecretNoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySecretNoDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySecretNoDetailResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySecretNoDetailResponse(execute(params, req, runtime));
  }
}

QuerySecretNoDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoDetail(shared_ptr<QuerySecretNoDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySecretNoDetailWithOptions(request, runtime);
}

QuerySecretNoRemainResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoRemainWithOptions(shared_ptr<QuerySecretNoRemainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySecretNoRemain"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySecretNoRemainResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySecretNoRemainResponse(execute(params, req, runtime));
  }
}

QuerySecretNoRemainResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoRemain(shared_ptr<QuerySecretNoRemainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySecretNoRemainWithOptions(request, runtime);
}

QuerySoundRecordResponse Alibabacloud_Dyplsapi20170525::Client::querySoundRecordWithOptions(shared_ptr<QuerySoundRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
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
    {"action", boost::any(string("QuerySoundRecord"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySoundRecordResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySoundRecordResponse(execute(params, req, runtime));
  }
}

QuerySoundRecordResponse Alibabacloud_Dyplsapi20170525::Client::querySoundRecord(shared_ptr<QuerySoundRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundRecordWithOptions(request, runtime);
}

QuerySubsIdResponse Alibabacloud_Dyplsapi20170525::Client::querySubsIdWithOptions(shared_ptr<QuerySubsIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
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
    {"action", boost::any(string("QuerySubsId"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySubsIdResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySubsIdResponse(execute(params, req, runtime));
  }
}

QuerySubsIdResponse Alibabacloud_Dyplsapi20170525::Client::querySubsId(shared_ptr<QuerySubsIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubsIdWithOptions(request, runtime);
}

QuerySubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySubscriptionDetailWithOptions(shared_ptr<QuerySubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subsId)) {
    query->insert(pair<string, string>("SubsId", *request->subsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySubscriptionDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySubscriptionDetailResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySubscriptionDetailResponse(execute(params, req, runtime));
  }
}

QuerySubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySubscriptionDetail(shared_ptr<QuerySubscriptionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubscriptionDetailWithOptions(request, runtime);
}

ReleaseSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::releaseSecretNoWithOptions(shared_ptr<ReleaseSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseSecretNoResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseSecretNoResponse(execute(params, req, runtime));
  }
}

ReleaseSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::releaseSecretNo(shared_ptr<ReleaseSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseSecretNoWithOptions(request, runtime);
}

UnBindAXBResponse Alibabacloud_Dyplsapi20170525::Client::unBindAXBWithOptions(shared_ptr<UnBindAXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bindId)) {
    query->insert(pair<string, string>("BindId", *request->bindId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
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
    {"action", boost::any(string("UnBindAXB"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnBindAXBResponse(callApi(params, req, runtime));
  }
  else {
    return UnBindAXBResponse(execute(params, req, runtime));
  }
}

UnBindAXBResponse Alibabacloud_Dyplsapi20170525::Client::unBindAXB(shared_ptr<UnBindAXBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unBindAXBWithOptions(request, runtime);
}

UnBindXBResponse Alibabacloud_Dyplsapi20170525::Client::unBindXBWithOptions(shared_ptr<UnBindXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authId)) {
    query->insert(pair<string, string>("AuthId", *request->authId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerPoolKey)) {
    query->insert(pair<string, string>("CustomerPoolKey", *request->customerPoolKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telX)) {
    query->insert(pair<string, string>("TelX", *request->telX));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnBindXB"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnBindXBResponse(callApi(params, req, runtime));
  }
  else {
    return UnBindXBResponse(execute(params, req, runtime));
  }
}

UnBindXBResponse Alibabacloud_Dyplsapi20170525::Client::unBindXB(shared_ptr<UnBindXBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unBindXBWithOptions(request, runtime);
}

UnbindSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::unbindSubscriptionWithOptions(shared_ptr<UnbindSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subsId)) {
    query->insert(pair<string, string>("SubsId", *request->subsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindSubscription"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnbindSubscriptionResponse(callApi(params, req, runtime));
  }
  else {
    return UnbindSubscriptionResponse(execute(params, req, runtime));
  }
}

UnbindSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::unbindSubscription(shared_ptr<UnbindSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSubscriptionWithOptions(request, runtime);
}

UnlockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::unlockSecretNoWithOptions(shared_ptr<UnlockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnlockSecretNoResponse(callApi(params, req, runtime));
  }
  else {
    return UnlockSecretNoResponse(execute(params, req, runtime));
  }
}

UnlockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::unlockSecretNo(shared_ptr<UnlockSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockSecretNoWithOptions(request, runtime);
}

UpdateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASRModelId)) {
    query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASRStatus)) {
    query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callDisplayType)) {
    query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callRestrict)) {
    query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecordingEnabled)) {
    query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoX)) {
    query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringConfig)) {
    query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subsId)) {
    query->insert(pair<string, string>("SubsId", *request->subsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubscription"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSubscriptionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSubscriptionResponse(execute(params, req, runtime));
  }
}

UpdateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::updateSubscription(shared_ptr<UpdateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubscriptionWithOptions(request, runtime);
}

