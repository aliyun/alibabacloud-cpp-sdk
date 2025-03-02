// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dytnsapi_20230101.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Dytnsapi20230101;

Alibabacloud_Dytnsapi20230101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dytnsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dytnsapi20230101::Client::getEndpoint(shared_ptr<string> productId,
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

GetPhoneNumberIdentificationResultResponse Alibabacloud_Dytnsapi20230101::Client::getPhoneNumberIdentificationResultWithOptions(shared_ptr<GetPhoneNumberIdentificationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPayload)) {
    query->insert(pair<string, string>("SessionPayload", *request->sessionPayload));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhoneNumberIdentificationResult"))},
    {"version", boost::any(string("2023-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPhoneNumberIdentificationResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetPhoneNumberIdentificationResultResponse(execute(params, req, runtime));
  }
}

GetPhoneNumberIdentificationResultResponse Alibabacloud_Dytnsapi20230101::Client::getPhoneNumberIdentificationResult(shared_ptr<GetPhoneNumberIdentificationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhoneNumberIdentificationResultWithOptions(request, runtime);
}

GetPhoneNumberIdentificationUrlResponse Alibabacloud_Dytnsapi20230101::Client::getPhoneNumberIdentificationUrlWithOptions(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->rememberPhoneNumber)) {
    query->insert(pair<string, bool>("RememberPhoneNumber", *request->rememberPhoneNumber));
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
    {"action", boost::any(string("GetPhoneNumberIdentificationUrl"))},
    {"version", boost::any(string("2023-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPhoneNumberIdentificationUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetPhoneNumberIdentificationUrlResponse(execute(params, req, runtime));
  }
}

GetPhoneNumberIdentificationUrlResponse Alibabacloud_Dytnsapi20230101::Client::getPhoneNumberIdentificationUrl(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhoneNumberIdentificationUrlWithOptions(request, runtime);
}

