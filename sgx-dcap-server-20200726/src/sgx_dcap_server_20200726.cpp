// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sgx_dcap_server_20200726.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Sgx-dcap-server20200726;

Alibabacloud_Sgx-dcap-server20200726::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sgx-dcap-server"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sgx-dcap-server20200726::Client::getEndpoint(shared_ptr<string> productId,
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

GetQeIdentityResponse Alibabacloud_Sgx-dcap-server20200726::Client::getQeIdentityWithOptions(shared_ptr<GetQeIdentityRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQeIdentity"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/qe/identity"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return GetQeIdentityResponse(callApi(params, req, runtime));
}

GetQeIdentityResponse Alibabacloud_Sgx-dcap-server20200726::Client::getQeIdentity(shared_ptr<GetQeIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQeIdentityWithOptions(request, headers, runtime);
}

GetQveIdentityResponse Alibabacloud_Sgx-dcap-server20200726::Client::getQveIdentityWithOptions(shared_ptr<GetQveIdentityRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQveIdentity"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/qve/identity"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return GetQveIdentityResponse(callApi(params, req, runtime));
}

GetQveIdentityResponse Alibabacloud_Sgx-dcap-server20200726::Client::getQveIdentity(shared_ptr<GetQveIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQveIdentityWithOptions(request, headers, runtime);
}

GetTcbInfoResponse Alibabacloud_Sgx-dcap-server20200726::Client::getTcbInfoWithOptions(shared_ptr<GetTcbInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fmspc)) {
    query->insert(pair<string, string>("fmspc", *request->fmspc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTcbInfo"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/tcb"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return GetTcbInfoResponse(callApi(params, req, runtime));
}

GetTcbInfoResponse Alibabacloud_Sgx-dcap-server20200726::Client::getTcbInfo(shared_ptr<GetTcbInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTcbInfoWithOptions(request, headers, runtime);
}

PckCrlResponse Alibabacloud_Sgx-dcap-server20200726::Client::pckCrlWithOptions(shared_ptr<PckCrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ca)) {
    query->insert(pair<string, string>("ca", *request->ca));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PckCrl"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/pckcrl"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return PckCrlResponse(callApi(params, req, runtime));
}

PckCrlResponse Alibabacloud_Sgx-dcap-server20200726::Client::pckCrl(shared_ptr<PckCrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pckCrlWithOptions(request, headers, runtime);
}

RootCaCrlResponse Alibabacloud_Sgx-dcap-server20200726::Client::rootCaCrlWithOptions(shared_ptr<RootCaCrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RootCaCrl"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/rootcacrl"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return RootCaCrlResponse(callApi(params, req, runtime));
}

RootCaCrlResponse Alibabacloud_Sgx-dcap-server20200726::Client::rootCaCrl(shared_ptr<RootCaCrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rootCaCrlWithOptions(request, headers, runtime);
}

SimplePackagePckCertResponse Alibabacloud_Sgx-dcap-server20200726::Client::simplePackagePckCertWithOptions(shared_ptr<SimplePackagePckCertRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acsHost)) {
    query->insert(pair<string, string>("AcsHost", *request->acsHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVpcId)) {
    query->insert(pair<string, string>("ClientVpcId", *request->clientVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpusvn)) {
    query->insert(pair<string, string>("cpusvn", *request->cpusvn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedPpid)) {
    query->insert(pair<string, string>("encrypted_ppid", *request->encryptedPpid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pceid)) {
    query->insert(pair<string, string>("pceid", *request->pceid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pcesvn)) {
    query->insert(pair<string, string>("pcesvn", *request->pcesvn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qeid)) {
    query->insert(pair<string, string>("qeid", *request->qeid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SimplePackagePckCert"))},
    {"version", boost::any(string("2020-07-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sgx/certification/v3/pckcert"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return SimplePackagePckCertResponse(callApi(params, req, runtime));
}

SimplePackagePckCertResponse Alibabacloud_Sgx-dcap-server20200726::Client::simplePackagePckCert(shared_ptr<SimplePackagePckCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return simplePackagePckCertWithOptions(request, headers, runtime);
}

