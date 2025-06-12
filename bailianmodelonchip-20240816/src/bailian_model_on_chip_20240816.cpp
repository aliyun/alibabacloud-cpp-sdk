// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bailian_model_on_chip_20240816.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_BailianModelOnChip20240816;

Alibabacloud_BailianModelOnChip20240816::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bailianmodelonchip"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BailianModelOnChip20240816::Client::getEndpoint(shared_ptr<string> productId,
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

DeviceRegisterResponse Alibabacloud_BailianModelOnChip20240816::Client::deviceRegisterWithOptions(shared_ptr<DeviceRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nonce)) {
    body->insert(pair<string, string>("nonce", *request->nonce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestTime)) {
    body->insert(pair<string, string>("requestTime", *request->requestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    body->insert(pair<string, string>("signature", *request->signature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeviceRegister"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/register"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeviceRegisterResponse(callApi(params, req, runtime));
}

DeviceRegisterResponse Alibabacloud_BailianModelOnChip20240816::Client::deviceRegister(shared_ptr<DeviceRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deviceRegisterWithOptions(request, headers, runtime);
}

GetTokenResponse Alibabacloud_BailianModelOnChip20240816::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nonce)) {
    body->insert(pair<string, string>("nonce", *request->nonce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestTime)) {
    body->insert(pair<string, string>("requestTime", *request->requestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    body->insert(pair<string, string>("signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenKey)) {
    body->insert(pair<string, string>("tokenKey", *request->tokenKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenType)) {
    body->insert(pair<string, string>("tokenType", *request->tokenType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/auth/v1/token/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTokenResponse(callApi(params, req, runtime));
}

GetTokenResponse Alibabacloud_BailianModelOnChip20240816::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

