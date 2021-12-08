// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dyplsapi_20170525.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dyplsapi20170525;

Alibabacloud_Dyplsapi20170525::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SubsId", *request->subsId));
  query->insert(pair<string, string>("trackNo", *request->trackNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAxnTrackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAxnTrackNoResponse(callApi(params, req, runtime));
}

AddAxnTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::addAxnTrackNo(shared_ptr<AddAxnTrackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAxnTrackNoWithOptions(request, runtime);
}

AddSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::addSecretBlacklistWithOptions(shared_ptr<AddSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BlackNo", *request->blackNo));
  query->insert(pair<string, string>("BlackType", *request->blackType));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("Remark", *request->remark));
  query->insert(pair<string, string>("WayControl", *request->wayControl));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSecretBlacklist"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSecretBlacklistResponse(callApi(params, req, runtime));
}

AddSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::addSecretBlacklist(shared_ptr<AddSecretBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSecretBlacklistWithOptions(request, runtime);
}

BindAxbResponse Alibabacloud_Dyplsapi20170525::Client::bindAxbWithOptions(shared_ptr<BindAxbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  query->insert(pair<string, long>("CallTimeout", *request->callTimeout));
  query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  query->insert(pair<string, string>("Expiration", *request->expiration));
  query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  query->insert(pair<string, string>("OutId", *request->outId));
  query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxb"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAxbResponse(callApi(params, req, runtime));
}

BindAxbResponse Alibabacloud_Dyplsapi20170525::Client::bindAxb(shared_ptr<BindAxbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxbWithOptions(request, runtime);
}

BindAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindAxgWithOptions(shared_ptr<BindAxgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  query->insert(pair<string, string>("Expiration", *request->expiration));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  query->insert(pair<string, string>("OutId", *request->outId));
  query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxg"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAxgResponse(callApi(params, req, runtime));
}

BindAxgResponse Alibabacloud_Dyplsapi20170525::Client::bindAxg(shared_ptr<BindAxgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxgWithOptions(request, runtime);
}

BindAxnResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnWithOptions(shared_ptr<BindAxnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  query->insert(pair<string, long>("CallTimeout", *request->callTimeout));
  query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  query->insert(pair<string, string>("Expiration", *request->expiration));
  query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  query->insert(pair<string, string>("NoType", *request->noType));
  query->insert(pair<string, string>("OutId", *request->outId));
  query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxn"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAxnResponse(callApi(params, req, runtime));
}

BindAxnResponse Alibabacloud_Dyplsapi20170525::Client::bindAxn(shared_ptr<BindAxnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxnWithOptions(request, runtime);
}

BindAxnExtensionResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnExtensionWithOptions(shared_ptr<BindAxnExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  query->insert(pair<string, string>("ExpectCity", *request->expectCity));
  query->insert(pair<string, string>("Expiration", *request->expiration));
  query->insert(pair<string, string>("Extension", *request->extension));
  query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  query->insert(pair<string, string>("OutId", *request->outId));
  query->insert(pair<string, string>("OutOrderId", *request->outOrderId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAxnExtension"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAxnExtensionResponse(callApi(params, req, runtime));
}

BindAxnExtensionResponse Alibabacloud_Dyplsapi20170525::Client::bindAxnExtension(shared_ptr<BindAxnExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAxnExtensionWithOptions(request, runtime);
}

BuySecretNoResponse Alibabacloud_Dyplsapi20170525::Client::buySecretNoWithOptions(shared_ptr<BuySecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("City", *request->city));
  query->insert(pair<string, bool>("DisplayPool", *request->displayPool));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SpecId", *request->specId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuySecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BuySecretNoResponse(callApi(params, req, runtime));
}

BuySecretNoResponse Alibabacloud_Dyplsapi20170525::Client::buySecretNo(shared_ptr<BuySecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return buySecretNoWithOptions(request, runtime);
}

CancelPickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::cancelPickUpWaybillWithOptions(shared_ptr<CancelPickUpWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CancelDesc", *request->cancelDesc));
  query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelPickUpWaybill"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelPickUpWaybillResponse(callApi(params, req, runtime));
}

CancelPickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::cancelPickUpWaybill(shared_ptr<CancelPickUpWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPickUpWaybillWithOptions(request, runtime);
}

ConfirmSendSmsResponse Alibabacloud_Dyplsapi20170525::Client::confirmSendSmsWithOptions(shared_ptr<ConfirmSendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallId", *request->callId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmSendSms"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmSendSmsResponse(callApi(params, req, runtime));
}

ConfirmSendSmsResponse Alibabacloud_Dyplsapi20170525::Client::confirmSendSms(shared_ptr<ConfirmSendSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmSendSmsWithOptions(request, runtime);
}

CreateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::createAxgGroupWithOptions(shared_ptr<CreateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("Numbers", *request->numbers));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("Remark", *request->remark));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAxgGroup"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAxgGroupResponse(callApi(params, req, runtime));
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
    request->consigneeAddressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->consigneeAddress->toMap()), make_shared<string>("ConsigneeAddress"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePickUpWaybillRequestGoodsInfos>>(tmpReq->goodsInfos)) {
    request->goodsInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->goodsInfos, make_shared<string>("GoodsInfos"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePickUpWaybillRequestSendAddress>(tmpReq->sendAddress)) {
    request->sendAddressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->sendAddress->toMap()), make_shared<string>("SendAddress"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConsigneeAddress", *request->consigneeAddressShrink));
  query->insert(pair<string, string>("ConsigneeMobile", *request->consigneeMobile));
  query->insert(pair<string, string>("ConsigneeName", *request->consigneeName));
  query->insert(pair<string, string>("ConsigneePhone", *request->consigneePhone));
  query->insert(pair<string, string>("CpCode", *request->cpCode));
  query->insert(pair<string, string>("GoodsInfos", *request->goodsInfosShrink));
  query->insert(pair<string, string>("OrderChannels", *request->orderChannels));
  query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
  query->insert(pair<string, string>("Remark", *request->remark));
  query->insert(pair<string, string>("SendAddress", *request->sendAddressShrink));
  query->insert(pair<string, string>("SendMobile", *request->sendMobile));
  query->insert(pair<string, string>("SendName", *request->sendName));
  query->insert(pair<string, string>("SendPhone", *request->sendPhone));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePickUpWaybill"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePickUpWaybillResponse(callApi(params, req, runtime));
}

CreatePickUpWaybillResponse Alibabacloud_Dyplsapi20170525::Client::createPickUpWaybill(shared_ptr<CreatePickUpWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPickUpWaybillWithOptions(request, runtime);
}

CreateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::createSubscriptionWithOptions(shared_ptr<CreateSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BindToken", *request->bindToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscription"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscriptionResponse(callApi(params, req, runtime));
}

CreateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::createSubscription(shared_ptr<CreateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscriptionWithOptions(request, runtime);
}

DeleteSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::deleteSecretBlacklistWithOptions(shared_ptr<DeleteSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BlackNo", *request->blackNo));
  query->insert(pair<string, string>("BlackType", *request->blackType));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("Remark", *request->remark));
  query->insert(pair<string, string>("WayControl", *request->wayControl));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecretBlacklist"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecretBlacklistResponse(callApi(params, req, runtime));
}

DeleteSecretBlacklistResponse Alibabacloud_Dyplsapi20170525::Client::deleteSecretBlacklist(shared_ptr<DeleteSecretBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecretBlacklistWithOptions(request, runtime);
}

GetFaceVerifyResponse Alibabacloud_Dyplsapi20170525::Client::getFaceVerifyWithOptions(shared_ptr<GetFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VerifyToken", *request->verifyToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFaceVerify"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFaceVerifyResponse(callApi(params, req, runtime));
}

GetFaceVerifyResponse Alibabacloud_Dyplsapi20170525::Client::getFaceVerify(shared_ptr<GetFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFaceVerifyWithOptions(request, runtime);
}

GetSecretAsrDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSecretAsrDetailWithOptions(shared_ptr<GetSecretAsrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallId", *request->callId));
  query->insert(pair<string, string>("CallTime", *request->callTime));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecretAsrDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSecretAsrDetailResponse(callApi(params, req, runtime));
}

GetSecretAsrDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSecretAsrDetail(shared_ptr<GetSecretAsrDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecretAsrDetailWithOptions(request, runtime);
}

GetSubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSubscriptionDetailWithOptions(shared_ptr<GetSubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscriptionDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscriptionDetailResponse(callApi(params, req, runtime));
}

GetSubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::getSubscriptionDetail(shared_ptr<GetSubscriptionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubscriptionDetailWithOptions(request, runtime);
}

GetTotalPublicUrlResponse Alibabacloud_Dyplsapi20170525::Client::getTotalPublicUrlWithOptions(shared_ptr<GetTotalPublicUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallId", *request->callId));
  query->insert(pair<string, string>("CallTime", *request->callTime));
  query->insert(pair<string, bool>("CheckSubs", *request->checkSubs));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PartnerKey", *request->partnerKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTotalPublicUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTotalPublicUrlResponse(callApi(params, req, runtime));
}

GetTotalPublicUrlResponse Alibabacloud_Dyplsapi20170525::Client::getTotalPublicUrl(shared_ptr<GetTotalPublicUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTotalPublicUrlWithOptions(request, runtime);
}

InitFaceVerifyResponse Alibabacloud_Dyplsapi20170525::Client::initFaceVerifyWithOptions(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MetaInfo", *request->metaInfo));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitFaceVerify"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitFaceVerifyResponse(callApi(params, req, runtime));
}

InitFaceVerifyResponse Alibabacloud_Dyplsapi20170525::Client::initFaceVerify(shared_ptr<InitFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initFaceVerifyWithOptions(request, runtime);
}

LockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::lockSecretNoWithOptions(shared_ptr<LockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockSecretNoResponse(callApi(params, req, runtime));
}

LockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::lockSecretNo(shared_ptr<LockSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockSecretNoWithOptions(request, runtime);
}

OperateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::operateAxgGroupWithOptions(shared_ptr<OperateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("GroupId", *request->groupId));
  query->insert(pair<string, string>("Numbers", *request->numbers));
  query->insert(pair<string, string>("OperateType", *request->operateType));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateAxgGroup"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateAxgGroupResponse(callApi(params, req, runtime));
}

OperateAxgGroupResponse Alibabacloud_Dyplsapi20170525::Client::operateAxgGroup(shared_ptr<OperateAxgGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateAxgGroupWithOptions(request, runtime);
}

OperateBlackNoResponse Alibabacloud_Dyplsapi20170525::Client::operateBlackNoWithOptions(shared_ptr<OperateBlackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BlackNo", *request->blackNo));
  query->insert(pair<string, string>("OperateType", *request->operateType));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Tips", *request->tips));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateBlackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateBlackNoResponse(callApi(params, req, runtime));
}

OperateBlackNoResponse Alibabacloud_Dyplsapi20170525::Client::operateBlackNo(shared_ptr<OperateBlackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateBlackNoWithOptions(request, runtime);
}

QueryCallStatusResponse Alibabacloud_Dyplsapi20170525::Client::queryCallStatusWithOptions(shared_ptr<QueryCallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallNo", *request->callNo));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCallStatus"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCallStatusResponse(callApi(params, req, runtime));
}

QueryCallStatusResponse Alibabacloud_Dyplsapi20170525::Client::queryCallStatus(shared_ptr<QueryCallStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallStatusWithOptions(request, runtime);
}

QueryPhoneNoAByTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::queryPhoneNoAByTrackNoWithOptions(shared_ptr<QueryPhoneNoAByTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CabinetNo", *request->cabinetNo));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("trackNo", *request->trackNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPhoneNoAByTrackNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPhoneNoAByTrackNoResponse(callApi(params, req, runtime));
}

QueryPhoneNoAByTrackNoResponse Alibabacloud_Dyplsapi20170525::Client::queryPhoneNoAByTrackNo(shared_ptr<QueryPhoneNoAByTrackNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPhoneNoAByTrackNoWithOptions(request, runtime);
}

QueryRecordFileDownloadUrlResponse Alibabacloud_Dyplsapi20170525::Client::queryRecordFileDownloadUrlWithOptions(shared_ptr<QueryRecordFileDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallId", *request->callId));
  query->insert(pair<string, string>("CallTime", *request->callTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordFileDownloadUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordFileDownloadUrlResponse(callApi(params, req, runtime));
}

QueryRecordFileDownloadUrlResponse Alibabacloud_Dyplsapi20170525::Client::queryRecordFileDownloadUrl(shared_ptr<QueryRecordFileDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordFileDownloadUrlWithOptions(request, runtime);
}

QuerySecretNoDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoDetailWithOptions(shared_ptr<QuerySecretNoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySecretNoDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySecretNoDetailResponse(callApi(params, req, runtime));
}

QuerySecretNoDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoDetail(shared_ptr<QuerySecretNoDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySecretNoDetailWithOptions(request, runtime);
}

QuerySecretNoRemainResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoRemainWithOptions(shared_ptr<QuerySecretNoRemainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("City", *request->city));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SpecId", *request->specId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySecretNoRemain"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySecretNoRemainResponse(callApi(params, req, runtime));
}

QuerySecretNoRemainResponse Alibabacloud_Dyplsapi20170525::Client::querySecretNoRemain(shared_ptr<QuerySecretNoRemainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySecretNoRemainWithOptions(request, runtime);
}

QuerySubsIdResponse Alibabacloud_Dyplsapi20170525::Client::querySubsIdWithOptions(shared_ptr<QuerySubsIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySubsId"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySubsIdResponse(callApi(params, req, runtime));
}

QuerySubsIdResponse Alibabacloud_Dyplsapi20170525::Client::querySubsId(shared_ptr<QuerySubsIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubsIdWithOptions(request, runtime);
}

QuerySubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySubscriptionDetailWithOptions(shared_ptr<QuerySubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySubscriptionDetail"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySubscriptionDetailResponse(callApi(params, req, runtime));
}

QuerySubscriptionDetailResponse Alibabacloud_Dyplsapi20170525::Client::querySubscriptionDetail(shared_ptr<QuerySubscriptionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubscriptionDetailWithOptions(request, runtime);
}

ReleaseSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::releaseSecretNoWithOptions(shared_ptr<ReleaseSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseSecretNoResponse(callApi(params, req, runtime));
}

ReleaseSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::releaseSecretNo(shared_ptr<ReleaseSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseSecretNoWithOptions(request, runtime);
}

UnbindSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::unbindSubscriptionWithOptions(shared_ptr<UnbindSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, string>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindSubscription"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindSubscriptionResponse(callApi(params, req, runtime));
}

UnbindSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::unbindSubscription(shared_ptr<UnbindSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSubscriptionWithOptions(request, runtime);
}

UnlockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::unlockSecretNoWithOptions(shared_ptr<UnlockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockSecretNo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockSecretNoResponse(callApi(params, req, runtime));
}

UnlockSecretNoResponse Alibabacloud_Dyplsapi20170525::Client::unlockSecretNo(shared_ptr<UnlockSecretNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockSecretNoWithOptions(request, runtime);
}

UpdateDefaultBResponse Alibabacloud_Dyplsapi20170525::Client::updateDefaultBWithOptions(shared_ptr<UpdateDefaultBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDefaultB"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDefaultBResponse(callApi(params, req, runtime));
}

UpdateDefaultBResponse Alibabacloud_Dyplsapi20170525::Client::updateDefaultB(shared_ptr<UpdateDefaultBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDefaultBWithOptions(request, runtime);
}

UpdatePhoneNumberResponse Alibabacloud_Dyplsapi20170525::Client::updatePhoneNumberWithOptions(shared_ptr<UpdatePhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BindToken", *request->bindToken));
  query->insert(pair<string, string>("NewPhoneNo", *request->newPhoneNo));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePhoneNumber"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePhoneNumberResponse(callApi(params, req, runtime));
}

UpdatePhoneNumberResponse Alibabacloud_Dyplsapi20170525::Client::updatePhoneNumber(shared_ptr<UpdatePhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePhoneNumberWithOptions(request, runtime);
}

UpdatePhoneSwitchResponse Alibabacloud_Dyplsapi20170525::Client::updatePhoneSwitchWithOptions(shared_ptr<UpdatePhoneSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecretNo", *request->secretNo));
  query->insert(pair<string, long>("SubsId", *request->subsId));
  query->insert(pair<string, long>("SwitchStatus", *request->switchStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePhoneSwitch"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePhoneSwitchResponse(callApi(params, req, runtime));
}

UpdatePhoneSwitchResponse Alibabacloud_Dyplsapi20170525::Client::updatePhoneSwitch(shared_ptr<UpdatePhoneSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePhoneSwitchWithOptions(request, runtime);
}

UpdateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ASRModelId", *request->ASRModelId));
  query->insert(pair<string, bool>("ASRStatus", *request->ASRStatus));
  query->insert(pair<string, long>("CallDisplayType", *request->callDisplayType));
  query->insert(pair<string, string>("CallRestrict", *request->callRestrict));
  query->insert(pair<string, string>("Expiration", *request->expiration));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, bool>("IsRecordingEnabled", *request->isRecordingEnabled));
  query->insert(pair<string, string>("OperateType", *request->operateType));
  query->insert(pair<string, string>("OutId", *request->outId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  query->insert(pair<string, string>("PhoneNoX", *request->phoneNoX));
  query->insert(pair<string, string>("PoolKey", *request->poolKey));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RingConfig", *request->ringConfig));
  query->insert(pair<string, string>("SubsId", *request->subsId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubscription"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubscriptionResponse(callApi(params, req, runtime));
}

UpdateSubscriptionResponse Alibabacloud_Dyplsapi20170525::Client::updateSubscription(shared_ptr<UpdateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubscriptionWithOptions(request, runtime);
}

