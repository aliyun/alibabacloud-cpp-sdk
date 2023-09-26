// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ettraffic_isp_20230830.hpp>
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

using namespace Alibabacloud_EttrafficIsp20230830;

Alibabacloud_EttrafficIsp20230830::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ettrafficisp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EttrafficIsp20230830::Client::getEndpoint(shared_ptr<string> productId,
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

AkDisableResponse Alibabacloud_EttrafficIsp20230830::Client::akDisableWithOptions(shared_ptr<AkDisableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyId)) {
    body->insert(pair<string, string>("accessKeyId", *request->accessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyName)) {
    body->insert(pair<string, string>("accessKeyName", *request->accessKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissions)) {
    body->insert(pair<string, vector<string>>("permissions", *request->permissions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AkDisable"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/ak/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AkDisableResponse(callApi(params, req, runtime));
}

AkDisableResponse Alibabacloud_EttrafficIsp20230830::Client::akDisable(shared_ptr<AkDisableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return akDisableWithOptions(request, headers, runtime);
}

AkEnableResponse Alibabacloud_EttrafficIsp20230830::Client::akEnableWithOptions(shared_ptr<AkEnableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyId)) {
    body->insert(pair<string, string>("accessKeyId", *request->accessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyName)) {
    body->insert(pair<string, string>("accessKeyName", *request->accessKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissions)) {
    body->insert(pair<string, vector<string>>("permissions", *request->permissions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AkEnable"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/ak/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AkEnableResponse(callApi(params, req, runtime));
}

AkEnableResponse Alibabacloud_EttrafficIsp20230830::Client::akEnable(shared_ptr<AkEnableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return akEnableWithOptions(request, headers, runtime);
}

AkGenerateResponse Alibabacloud_EttrafficIsp20230830::Client::akGenerateWithOptions(shared_ptr<AkGenerateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyName)) {
    body->insert(pair<string, string>("accessKeyName", *request->accessKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissions)) {
    body->insert(pair<string, vector<string>>("permissions", *request->permissions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AkGenerate"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/ak/generate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AkGenerateResponse(callApi(params, req, runtime));
}

AkGenerateResponse Alibabacloud_EttrafficIsp20230830::Client::akGenerate(shared_ptr<AkGenerateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return akGenerateWithOptions(request, headers, runtime);
}

AkListPageResponse Alibabacloud_EttrafficIsp20230830::Client::akListPageWithOptions(shared_ptr<AkListPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AkListPage"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/ak/listPage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AkListPageResponse(callApi(params, req, runtime));
}

AkListPageResponse Alibabacloud_EttrafficIsp20230830::Client::akListPage(shared_ptr<AkListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return akListPageWithOptions(request, headers, runtime);
}

AkUpdateResponse Alibabacloud_EttrafficIsp20230830::Client::akUpdateWithOptions(shared_ptr<AkUpdateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyId)) {
    body->insert(pair<string, string>("accessKeyId", *request->accessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyName)) {
    body->insert(pair<string, string>("accessKeyName", *request->accessKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissions)) {
    body->insert(pair<string, vector<string>>("permissions", *request->permissions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AkUpdate"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/ak/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AkUpdateResponse(callApi(params, req, runtime));
}

AkUpdateResponse Alibabacloud_EttrafficIsp20230830::Client::akUpdate(shared_ptr<AkUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return akUpdateWithOptions(request, headers, runtime);
}

DimGroupResponse Alibabacloud_EttrafficIsp20230830::Client::dimGroupWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DimGroup"))},
    {"version", boost::any(string("2023-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/console/dim/group"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DimGroupResponse(callApi(params, req, runtime));
}

DimGroupResponse Alibabacloud_EttrafficIsp20230830::Client::dimGroup() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return dimGroupWithOptions(headers, runtime);
}

