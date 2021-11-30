// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cas_20200630.hpp>
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

using namespace Alibabacloud_Cas20200630;

Alibabacloud_Cas20200630::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "cas.aliyuncs.com"},
    {"ap-northeast-2-pop", "cas.aliyuncs.com"},
    {"ap-southeast-1", "cas.aliyuncs.com"},
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
    {"cn-yushanfang", "cas.aliyuncs.com"},
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

CreateCertificateWithExtensionResponse Alibabacloud_Cas20200630::Client::createCertificateWithExtensionWithOptions(shared_ptr<CreateCertificateWithExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AfterTime", *request->afterTime));
  query->insert(pair<string, long>("AlgorithmKeySize", *request->algorithmKeySize));
  query->insert(pair<string, string>("AliasName", *request->aliasName));
  query->insert(pair<string, bool>("AppendCrl", *request->appendCrl));
  query->insert(pair<string, bool>("BasicConstraintsCritical", *request->basicConstraintsCritical));
  query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  query->insert(pair<string, string>("CertType", *request->certType));
  query->insert(pair<string, string>("CommonName", *request->commonName));
  query->insert(pair<string, string>("CountryCode", *request->countryCode));
  query->insert(pair<string, string>("CsrPemString", *request->csrPemString));
  query->insert(pair<string, string>("Locality", *request->locality));
  query->insert(pair<string, string>("Organization", *request->organization));
  query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  query->insert(pair<string, string>("Sans", *request->sans));
  query->insert(pair<string, string>("State", *request->state));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateWithExtension"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateWithExtensionResponse(callApi(params, req, runtime));
}

CreateCertificateWithExtensionResponse Alibabacloud_Cas20200630::Client::createCertificateWithExtension(shared_ptr<CreateCertificateWithExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithExtensionWithOptions(request, runtime);
}

CreateClientCertificateResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithOptions(shared_ptr<CreateClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AfterTime", *request->afterTime));
  query->insert(pair<string, string>("Algorithm", *request->algorithm));
  query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  query->insert(pair<string, string>("CommonName", *request->commonName));
  query->insert(pair<string, long>("Days", *request->days));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  query->insert(pair<string, long>("SanType", *request->sanType));
  query->insert(pair<string, string>("SanValue", *request->sanValue));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClientCertificateResponse(callApi(params, req, runtime));
}

CreateClientCertificateResponse Alibabacloud_Cas20200630::Client::createClientCertificate(shared_ptr<CreateClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientCertificateWithOptions(request, runtime);
}

CreateClientCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithCsrWithOptions(shared_ptr<CreateClientCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AfterTime", *request->afterTime));
  query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  query->insert(pair<string, string>("Csr", *request->csr));
  query->insert(pair<string, long>("Days", *request->days));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  query->insert(pair<string, long>("SanType", *request->sanType));
  query->insert(pair<string, string>("SanValue", *request->sanValue));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientCertificateWithCsr"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClientCertificateWithCsrResponse(callApi(params, req, runtime));
}

CreateClientCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createClientCertificateWithCsr(shared_ptr<CreateClientCertificateWithCsrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientCertificateWithCsrWithOptions(request, runtime);
}

CreateRevokeClientCertificateResponse Alibabacloud_Cas20200630::Client::createRevokeClientCertificateWithOptions(shared_ptr<CreateRevokeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRevokeClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRevokeClientCertificateResponse(callApi(params, req, runtime));
}

CreateRevokeClientCertificateResponse Alibabacloud_Cas20200630::Client::createRevokeClientCertificate(shared_ptr<CreateRevokeClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRevokeClientCertificateWithOptions(request, runtime);
}

CreateRootCACertificateResponse Alibabacloud_Cas20200630::Client::createRootCACertificateWithOptions(shared_ptr<CreateRootCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Algorithm", *request->algorithm));
  query->insert(pair<string, string>("CommonName", *request->commonName));
  query->insert(pair<string, string>("CountryCode", *request->countryCode));
  query->insert(pair<string, string>("Locality", *request->locality));
  query->insert(pair<string, string>("Organization", *request->organization));
  query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  query->insert(pair<string, string>("State", *request->state));
  query->insert(pair<string, long>("Years", *request->years));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRootCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRootCACertificateResponse(callApi(params, req, runtime));
}

CreateRootCACertificateResponse Alibabacloud_Cas20200630::Client::createRootCACertificate(shared_ptr<CreateRootCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRootCACertificateWithOptions(request, runtime);
}

CreateServerCertificateResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithOptions(shared_ptr<CreateServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AfterTime", *request->afterTime));
  query->insert(pair<string, string>("Algorithm", *request->algorithm));
  query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  query->insert(pair<string, string>("CommonName", *request->commonName));
  query->insert(pair<string, long>("Days", *request->days));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServerCertificateResponse(callApi(params, req, runtime));
}

CreateServerCertificateResponse Alibabacloud_Cas20200630::Client::createServerCertificate(shared_ptr<CreateServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerCertificateWithOptions(request, runtime);
}

CreateServerCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithCsrWithOptions(shared_ptr<CreateServerCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AfterTime", *request->afterTime));
  query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  query->insert(pair<string, string>("Csr", *request->csr));
  query->insert(pair<string, long>("Days", *request->days));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerCertificateWithCsr"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServerCertificateWithCsrResponse(callApi(params, req, runtime));
}

CreateServerCertificateWithCsrResponse Alibabacloud_Cas20200630::Client::createServerCertificateWithCsr(shared_ptr<CreateServerCertificateWithCsrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerCertificateWithCsrWithOptions(request, runtime);
}

CreateSubCACertificateResponse Alibabacloud_Cas20200630::Client::createSubCACertificateWithOptions(shared_ptr<CreateSubCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Algorithm", *request->algorithm));
  query->insert(pair<string, string>("CommonName", *request->commonName));
  query->insert(pair<string, string>("CountryCode", *request->countryCode));
  query->insert(pair<string, string>("Locality", *request->locality));
  query->insert(pair<string, string>("Organization", *request->organization));
  query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  query->insert(pair<string, string>("State", *request->state));
  query->insert(pair<string, long>("Years", *request->years));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubCACertificateResponse(callApi(params, req, runtime));
}

CreateSubCACertificateResponse Alibabacloud_Cas20200630::Client::createSubCACertificate(shared_ptr<CreateSubCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubCACertificateWithOptions(request, runtime);
}

DeleteClientCertificateResponse Alibabacloud_Cas20200630::Client::deleteClientCertificateWithOptions(shared_ptr<DeleteClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClientCertificateResponse(callApi(params, req, runtime));
}

DeleteClientCertificateResponse Alibabacloud_Cas20200630::Client::deleteClientCertificate(shared_ptr<DeleteClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientCertificateWithOptions(request, runtime);
}

DescribeCACertificateResponse Alibabacloud_Cas20200630::Client::describeCACertificateWithOptions(shared_ptr<DescribeCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCACertificateResponse(callApi(params, req, runtime));
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
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCACertificateCountResponse(callApi(params, req, runtime));
}

DescribeCACertificateCountResponse Alibabacloud_Cas20200630::Client::describeCACertificateCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificateCountWithOptions(runtime);
}

DescribeCACertificateListResponse Alibabacloud_Cas20200630::Client::describeCACertificateListWithOptions(shared_ptr<DescribeCACertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, long>("ShowSize", *request->showSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificateList"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCACertificateListResponse(callApi(params, req, runtime));
}

DescribeCACertificateListResponse Alibabacloud_Cas20200630::Client::describeCACertificateList(shared_ptr<DescribeCACertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificateListWithOptions(request, runtime);
}

DescribeCertificatePrivateKeyResponse Alibabacloud_Cas20200630::Client::describeCertificatePrivateKeyWithOptions(shared_ptr<DescribeCertificatePrivateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EncryptedCode", *request->encryptedCode));
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificatePrivateKey"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertificatePrivateKeyResponse(callApi(params, req, runtime));
}

DescribeCertificatePrivateKeyResponse Alibabacloud_Cas20200630::Client::describeCertificatePrivateKey(shared_ptr<DescribeCertificatePrivateKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificatePrivateKeyWithOptions(request, runtime);
}

DescribeClientCertificateResponse Alibabacloud_Cas20200630::Client::describeClientCertificateWithOptions(shared_ptr<DescribeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientCertificateResponse(callApi(params, req, runtime));
}

DescribeClientCertificateResponse Alibabacloud_Cas20200630::Client::describeClientCertificate(shared_ptr<DescribeClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateWithOptions(request, runtime);
}

DescribeClientCertificateForSerialNumberResponse Alibabacloud_Cas20200630::Client::describeClientCertificateForSerialNumberWithOptions(shared_ptr<DescribeClientCertificateForSerialNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificateForSerialNumber"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientCertificateForSerialNumberResponse(callApi(params, req, runtime));
}

DescribeClientCertificateForSerialNumberResponse Alibabacloud_Cas20200630::Client::describeClientCertificateForSerialNumber(shared_ptr<DescribeClientCertificateForSerialNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateForSerialNumberWithOptions(request, runtime);
}

DescribeClientCertificateStatusResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatusWithOptions(shared_ptr<DescribeClientCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificateStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientCertificateStatusResponse(callApi(params, req, runtime));
}

DescribeClientCertificateStatusResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatus(shared_ptr<DescribeClientCertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateStatusWithOptions(request, runtime);
}

DescribeClientCertificateStatusForSerialNumberResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatusForSerialNumberWithOptions(shared_ptr<DescribeClientCertificateStatusForSerialNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientCertificateStatusForSerialNumber"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientCertificateStatusForSerialNumberResponse(callApi(params, req, runtime));
}

DescribeClientCertificateStatusForSerialNumberResponse Alibabacloud_Cas20200630::Client::describeClientCertificateStatusForSerialNumber(shared_ptr<DescribeClientCertificateStatusForSerialNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientCertificateStatusForSerialNumberWithOptions(request, runtime);
}

GetCAInstanceStatusResponse Alibabacloud_Cas20200630::Client::getCAInstanceStatusWithOptions(shared_ptr<GetCAInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCAInstanceStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCAInstanceStatusResponse(callApi(params, req, runtime));
}

GetCAInstanceStatusResponse Alibabacloud_Cas20200630::Client::getCAInstanceStatus(shared_ptr<GetCAInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCAInstanceStatusWithOptions(request, runtime);
}

ListCACertificateLogResponse Alibabacloud_Cas20200630::Client::listCACertificateLogWithOptions(shared_ptr<ListCACertificateLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCACertificateLog"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCACertificateLogResponse(callApi(params, req, runtime));
}

ListCACertificateLogResponse Alibabacloud_Cas20200630::Client::listCACertificateLog(shared_ptr<ListCACertificateLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCACertificateLogWithOptions(request, runtime);
}

ListClientCertificateResponse Alibabacloud_Cas20200630::Client::listClientCertificateWithOptions(shared_ptr<ListClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, long>("ShowSize", *request->showSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClientCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClientCertificateResponse(callApi(params, req, runtime));
}

ListClientCertificateResponse Alibabacloud_Cas20200630::Client::listClientCertificate(shared_ptr<ListClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientCertificateWithOptions(request, runtime);
}

ListRevokeCertificateResponse Alibabacloud_Cas20200630::Client::listRevokeCertificateWithOptions(shared_ptr<ListRevokeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, long>("ShowSize", *request->showSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRevokeCertificate"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRevokeCertificateResponse(callApi(params, req, runtime));
}

ListRevokeCertificateResponse Alibabacloud_Cas20200630::Client::listRevokeCertificate(shared_ptr<ListRevokeCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRevokeCertificateWithOptions(request, runtime);
}

UpdateCACertificateStatusResponse Alibabacloud_Cas20200630::Client::updateCACertificateStatusWithOptions(shared_ptr<UpdateCACertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Identifier", *request->identifier));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCACertificateStatus"))},
    {"version", boost::any(string("2020-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCACertificateStatusResponse(callApi(params, req, runtime));
}

UpdateCACertificateStatusResponse Alibabacloud_Cas20200630::Client::updateCACertificateStatus(shared_ptr<UpdateCACertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCACertificateStatusWithOptions(request, runtime);
}

