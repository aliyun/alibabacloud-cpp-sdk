// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/umeng_verify_agent_20240131.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Umeng-verify-agent20240131;

Alibabacloud_Umeng-verify-agent20240131::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("umeng-verify-agent"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Umeng-verify-agent20240131::Client::getEndpoint(shared_ptr<string> productId,
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

CreateResponse Alibabacloud_Umeng-verify-agent20240131::Client::createWithOptions(shared_ptr<CreateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("appName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    body->insert(pair<string, string>("bundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packName)) {
    body->insert(pair<string, string>("packName", *request->packName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemeName)) {
    body->insert(pair<string, string>("schemeName", *request->schemeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    body->insert(pair<string, string>("signName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Create"))},
    {"version", boost::any(string("2024-01-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/Create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResponse(callApi(params, req, runtime));
}

CreateResponse Alibabacloud_Umeng-verify-agent20240131::Client::create(shared_ptr<CreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWithOptions(request, headers, runtime);
}

GetMobileWithTokenResponse Alibabacloud_Umeng-verify-agent20240131::Client::getMobileWithTokenWithOptions(shared_ptr<GetMobileWithTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiCode)) {
    body->insert(pair<string, long>("apiCode", *request->apiCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operatorId)) {
    body->insert(pair<string, long>("operatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    body->insert(pair<string, string>("osType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemeCode)) {
    body->insert(pair<string, string>("schemeCode", *request->schemeCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMobileWithToken"))},
    {"version", boost::any(string("2024-01-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/GetMobileWithToken"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMobileWithTokenResponse(callApi(params, req, runtime));
}

GetMobileWithTokenResponse Alibabacloud_Umeng-verify-agent20240131::Client::getMobileWithToken(shared_ptr<GetMobileWithTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMobileWithTokenWithOptions(request, headers, runtime);
}

QueryAppInfoBySchemeResponse Alibabacloud_Umeng-verify-agent20240131::Client::queryAppInfoBySchemeWithOptions(shared_ptr<QueryAppInfoBySchemeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->schemeCode)) {
    body->insert(pair<string, string>("schemeCode", *request->schemeCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAppInfoByScheme"))},
    {"version", boost::any(string("2024-01-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/QueryAppInfoByScheme"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAppInfoBySchemeResponse(callApi(params, req, runtime));
}

QueryAppInfoBySchemeResponse Alibabacloud_Umeng-verify-agent20240131::Client::queryAppInfoByScheme(shared_ptr<QueryAppInfoBySchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryAppInfoBySchemeWithOptions(request, headers, runtime);
}

