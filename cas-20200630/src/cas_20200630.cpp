// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cas_20200630.hpp>
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

using namespace Alibabacloud_Cas20200630;

Alibabacloud_Cas20200630::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "cas.aliyuncs.com"},
    {"ap-northeast-2-pop", "cas.aliyuncs.com"},
    {"ap-southeast-3", "cas.aliyuncs.com"},
    {"ap-southeast-5", "cas.aliyuncs.com"},
    {"cn-beijing", "cas.aliyuncs.com"},
    {"cn-beijing-finance-1", "cas.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cas.aliyuncs.com"},
    {"cn-beijing-gov-1", "cas.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cas.aliyuncs.com"},
    {"cn-chengdu", "cas.aliyuncs.com"},
    {"cn-edge-1", "cas.aliyuncs.com"},
    {"cn-fujian", "cas.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cas.aliyuncs.com"},
    {"cn-hangzhou-finance", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cas.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cas.aliyuncs.com"},
    {"cn-hongkong", "cas.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cas.aliyuncs.com"},
    {"cn-huhehaote", "cas.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "cas.aliyuncs.com"},
    {"cn-north-2-gov-1", "cas.aliyuncs.com"},
    {"cn-qingdao", "cas.aliyuncs.com"},
    {"cn-qingdao-nebula", "cas.aliyuncs.com"},
    {"cn-shanghai", "cas.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cas.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cas.aliyuncs.com"},
    {"cn-shanghai-finance-1", "cas.aliyuncs.com"},
    {"cn-shanghai-inner", "cas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cas.aliyuncs.com"},
    {"cn-shenzhen", "cas.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "cas.aliyuncs.com"},
    {"cn-shenzhen-inner", "cas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "cas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "cas.aliyuncs.com"},
    {"cn-wuhan", "cas.aliyuncs.com"},
    {"cn-wulanchabu", "cas.aliyuncs.com"},
    {"cn-yushanfang", "cas.aliyuncs.com"},
    {"cn-zhangbei", "cas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "cas.aliyuncs.com"},
    {"cn-zhangjiakou", "cas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "cas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "cas.aliyuncs.com"},
    {"eu-west-1", "cas.aliyuncs.com"},
    {"eu-west-1-oxs", "cas.aliyuncs.com"},
    {"rus-west-1-pop", "cas.aliyuncs.com"},
    {"us-east-1", "cas.aliyuncs.com"},
    {"us-west-1", "cas.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cas20200630::Client::getEndpoint(shared_ptr<string> productId,
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

CreateClientCertificateResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithOptions(shared_ptr<CreateClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterTime)) {
    query->insert(pair<string, long>("AfterTime", *request->afterTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beforeTime)) {
    query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->days)) {
    query->insert(pair<string, long>("Days", *request->days));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableCrl)) {
    query->insert(pair<string, long>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->months)) {
    query->insert(pair<string, long>("Months", *request->months));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sanType)) {
    query->insert(pair<string, long>("SanType", *request->sanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sanValue)) {
    query->insert(pair<string, string>("SanValue", *request->sanValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateClientCertificateResponse(execute(params, req, runtime));
  }
}

CreateClientCertificateResponse Alibabacloud_Cas20200630::Client::createClientCertificate(shared_ptr<CreateClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientCertificateWithOptions(request, runtime);
}

CreateClientCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithCsrWithOptions(shared_ptr<CreateClientCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterTime)) {
    query->insert(pair<string, long>("AfterTime", *request->afterTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beforeTime)) {
    query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->days)) {
    query->insert(pair<string, long>("Days", *request->days));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableCrl)) {
    query->insert(pair<string, long>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->months)) {
    query->insert(pair<string, long>("Months", *request->months));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sanType)) {
    query->insert(pair<string, long>("SanType", *request->sanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sanValue)) {
    query->insert(pair<string, string>("SanValue", *request->sanValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientCertificateWithCsr"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateClientCertificateWithCsrResponse(callApi(params, req, runtime));
  }
  else {
    return CreateClientCertificateWithCsrResponse(execute(params, req, runtime));
  }
}

CreateClientCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithCsr(shared_ptr<CreateClientCertificateWithCsrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientCertificateWithCsrWithOptions(request, runtime);
}

CreateCustomCertificateResponse Alibabacloud_Cas20200630::Client::createCustomCertificateWithOptions(shared_ptr<CreateCustomCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateCustomCertificateRequestApiPassthrough>(request->apiPassthrough)) {
    query->insert(pair<string, CreateCustomCertificateRequestApiPassthrough>("ApiPassthrough", *request->apiPassthrough));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableCrl)) {
    query->insert(pair<string, long>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validity)) {
    query->insert(pair<string, string>("Validity", *request->validity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCustomCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCustomCertificateResponse(execute(params, req, runtime));
  }
}

CreateCustomCertificateResponse Alibabacloud_Cas20200630::Client::createCustomCertificate(shared_ptr<CreateCustomCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomCertificateWithOptions(request, runtime);
}

CreateRevokeClientCertificateResponse Alibabacloud_Cas20200630::Client::createRevokeClientCertificateWithOptions(shared_ptr<CreateRevokeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRevokeClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRevokeClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRevokeClientCertificateResponse(execute(params, req, runtime));
  }
}

CreateRevokeClientCertificateResponse Alibabacloud_Cas20200630::Client::createRevokeClientCertificate(shared_ptr<CreateRevokeClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRevokeClientCertificateWithOptions(request, runtime);
}

CreateRootCACertificateResponse Alibabacloud_Cas20200630::Client::createRootCACertificateWithOptions(shared_ptr<CreateRootCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryCode)) {
    query->insert(pair<string, string>("CountryCode", *request->countryCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRootCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRootCACertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRootCACertificateResponse(execute(params, req, runtime));
  }
}

CreateRootCACertificateResponse Alibabacloud_Cas20200630::Client::createRootCACertificate(shared_ptr<CreateRootCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRootCACertificateWithOptions(request, runtime);
}

CreateServerCertificateResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithOptions(shared_ptr<CreateServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterTime)) {
    query->insert(pair<string, long>("AfterTime", *request->afterTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beforeTime)) {
    query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->days)) {
    query->insert(pair<string, long>("Days", *request->days));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableCrl)) {
    query->insert(pair<string, long>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->months)) {
    query->insert(pair<string, long>("Months", *request->months));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServerCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServerCertificateResponse(execute(params, req, runtime));
  }
}

CreateServerCertificateResponse Alibabacloud_Cas20200630::Client::createServerCertificate(shared_ptr<CreateServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerCertificateWithOptions(request, runtime);
}

CreateServerCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithCsrWithOptions(shared_ptr<CreateServerCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterTime)) {
    query->insert(pair<string, long>("AfterTime", *request->afterTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beforeTime)) {
    query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->days)) {
    query->insert(pair<string, long>("Days", *request->days));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableCrl)) {
    query->insert(pair<string, long>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->months)) {
    query->insert(pair<string, long>("Months", *request->months));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerCertificateWithCsr"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServerCertificateWithCsrResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServerCertificateWithCsrResponse(execute(params, req, runtime));
  }
}

CreateServerCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithCsr(shared_ptr<CreateServerCertificateWithCsrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerCertificateWithCsrWithOptions(request, runtime);
}

CreateSubCACertificateResponse Alibabacloud_Cas20200630::Client::createSubCACertificateWithOptions(shared_ptr<CreateSubCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryCode)) {
    query->insert(pair<string, string>("CountryCode", *request->countryCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crlDay)) {
    query->insert(pair<string, long>("CrlDay", *request->crlDay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCrl)) {
    query->insert(pair<string, bool>("EnableCrl", *request->enableCrl));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->extendedKeyUsages)) {
    query->insert(pair<string, vector<string>>("ExtendedKeyUsages", *request->extendedKeyUsages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pathLenConstraint)) {
    query->insert(pair<string, long>("PathLenConstraint", *request->pathLenConstraint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSubCACertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSubCACertificateResponse(execute(params, req, runtime));
  }
}

CreateSubCACertificateResponse Alibabacloud_Cas20200630::Client::createSubCACertificate(shared_ptr<CreateSubCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubCACertificateWithOptions(request, runtime);
}

DeleteClientCertificateResponse Alibabacloud_Cas20200630::Client::deleteClientCertificateWithOptions(shared_ptr<DeleteClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteClientCertificateResponse(execute(params, req, runtime));
  }
}

DeleteClientCertificateResponse Alibabacloud_Cas20200630::Client::deleteClientCertificate(shared_ptr<DeleteClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientCertificateWithOptions(request, runtime);
}

DescribeCACertificateResponse Alibabacloud_Cas20200630::Client::describeCACertificateWithOptions(shared_ptr<DescribeCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCACertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCACertificateResponse(execute(params, req, runtime));
  }
}

DescribeCACertificateResponse Alibabacloud_Cas20200630::Client::describeCACertificate(shared_ptr<DescribeCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificateWithOptions(request, runtime);
}

DescribeCACertificateCountResponse Alibabacloud_Cas20200630::Client::describeCACertificateCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificateCount"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCACertificateCountResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCACertificateCountResponse(execute(params, req, runtime));
  }
}

DescribeCACertificateCountResponse Alibabacloud_Cas20200630::Client::describeCACertificateCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificateCountWithOptions(runtime);
}

DescribeCACertificateListResponse Alibabacloud_Cas20200630::Client::describeCACertificateListWithOptions(shared_ptr<DescribeCACertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificateList"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCACertificateListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCACertificateListResponse(execute(params, req, runtime));
  }
}

DescribeCACertificateListResponse Alibabacloud_Cas20200630::Client::describeCACertificateList(shared_ptr<DescribeCACertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificateListWithOptions(request, runtime);
}

DescribeCertificatePrivateKeyResponse Alibabacloud_Cas20200630::Client::describeCertificatePrivateKeyWithOptions(shared_ptr<DescribeCertificatePrivateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedCode)) {
    query->insert(pair<string, string>("EncryptedCode", *request->encryptedCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificatePrivateKey"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCertificatePrivateKeyResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCertificatePrivateKeyResponse(execute(params, req, runtime));
  }
}

DescribeCertificatePrivateKeyResponse Alibabacloud_Cas20200630::Client::describeCertificatePrivateKey(shared_ptr<DescribeCertificatePrivateKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificatePrivateKeyWithOptions(request, runtime);
}

DescribeClientCertificateResponse Alibabacloud_Cas20200630::Client::describeClientCertificateWithOptions(shared_ptr<DescribeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeClientCertificateResponse(execute(params, req, runtime));
  }
}

DescribeClientCertificateResponse Alibabacloud_Cas20200630::Client::describeClientCertificate(shared_ptr<DescribeClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateWithOptions(request, runtime);
}

DescribeClientCertificateStatusResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatusWithOptions(shared_ptr<DescribeClientCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificateStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeClientCertificateStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeClientCertificateStatusResponse(execute(params, req, runtime));
  }
}

DescribeClientCertificateStatusResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatus(shared_ptr<DescribeClientCertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateStatusWithOptions(request, runtime);
}

GetCAInstanceStatusResponse Alibabacloud_Cas20200630::Client::getCAInstanceStatusWithOptions(shared_ptr<GetCAInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCAInstanceStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCAInstanceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetCAInstanceStatusResponse(execute(params, req, runtime));
  }
}

GetCAInstanceStatusResponse Alibabacloud_Cas20200630::Client::getCAInstanceStatus(shared_ptr<GetCAInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCAInstanceStatusWithOptions(request, runtime);
}

ListClientCertificateResponse Alibabacloud_Cas20200630::Client::listClientCertificateWithOptions(shared_ptr<ListClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return ListClientCertificateResponse(execute(params, req, runtime));
  }
}

ListClientCertificateResponse Alibabacloud_Cas20200630::Client::listClientCertificate(shared_ptr<ListClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientCertificateWithOptions(request, runtime);
}

ListRevokeCertificateResponse Alibabacloud_Cas20200630::Client::listRevokeCertificateWithOptions(shared_ptr<ListRevokeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRevokeCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRevokeCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return ListRevokeCertificateResponse(execute(params, req, runtime));
  }
}

ListRevokeCertificateResponse Alibabacloud_Cas20200630::Client::listRevokeCertificate(shared_ptr<ListRevokeCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRevokeCertificateWithOptions(request, runtime);
}

UpdateCACertificateStatusResponse Alibabacloud_Cas20200630::Client::updateCACertificateStatusWithOptions(shared_ptr<UpdateCACertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCACertificateStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCACertificateStatusResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCACertificateStatusResponse(execute(params, req, runtime));
  }
}

UpdateCACertificateStatusResponse Alibabacloud_Cas20200630::Client::updateCACertificateStatus(shared_ptr<UpdateCACertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCACertificateStatusWithOptions(request, runtime);
}

