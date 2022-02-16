// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cas_20200619.hpp>
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

using namespace Alibabacloud_Cas20200619;

Alibabacloud_Cas20200619::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Cas20200619::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSSLCertificateResponse Alibabacloud_Cas20200619::Client::createSSLCertificateWithOptions(shared_ptr<CreateSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    query->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSSLCertificate"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSSLCertificateResponse(callApi(params, req, runtime));
}

CreateSSLCertificateResponse Alibabacloud_Cas20200619::Client::createSSLCertificate(shared_ptr<CreateSSLCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSSLCertificateWithOptions(request, runtime);
}

CreateSSLCertificateWithNameResponse Alibabacloud_Cas20200619::Client::createSSLCertificateWithNameWithOptions(shared_ptr<CreateSSLCertificateWithNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    query->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSSLCertificateWithName"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSSLCertificateWithNameResponse(callApi(params, req, runtime));
}

CreateSSLCertificateWithNameResponse Alibabacloud_Cas20200619::Client::createSSLCertificateWithName(shared_ptr<CreateSSLCertificateWithNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSSLCertificateWithNameWithOptions(request, runtime);
}

DeleteSSLCertificateResponse Alibabacloud_Cas20200619::Client::deleteSSLCertificateWithOptions(shared_ptr<DeleteSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSSLCertificate"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSSLCertificateResponse(callApi(params, req, runtime));
}

DeleteSSLCertificateResponse Alibabacloud_Cas20200619::Client::deleteSSLCertificate(shared_ptr<DeleteSSLCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSSLCertificateWithOptions(request, runtime);
}

DescribeSSLCertificateCountResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateCountWithOptions(shared_ptr<DescribeSSLCertificateCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSSLCertificateCount"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSSLCertificateCountResponse(callApi(params, req, runtime));
}

DescribeSSLCertificateCountResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateCount(shared_ptr<DescribeSSLCertificateCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSSLCertificateCountWithOptions(request, runtime);
}

DescribeSSLCertificateListResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateListWithOptions(shared_ptr<DescribeSSLCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSSLCertificateList"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSSLCertificateListResponse(callApi(params, req, runtime));
}

DescribeSSLCertificateListResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateList(shared_ptr<DescribeSSLCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSSLCertificateListWithOptions(request, runtime);
}

DescribeSSLCertificateMatchDomainListResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateMatchDomainListWithOptions(shared_ptr<DescribeSSLCertificateMatchDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSSLCertificateMatchDomainList"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSSLCertificateMatchDomainListResponse(callApi(params, req, runtime));
}

DescribeSSLCertificateMatchDomainListResponse Alibabacloud_Cas20200619::Client::describeSSLCertificateMatchDomainList(shared_ptr<DescribeSSLCertificateMatchDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSSLCertificateMatchDomainListWithOptions(request, runtime);
}

DescribeSSLCertificatePrivateKeyResponse Alibabacloud_Cas20200619::Client::describeSSLCertificatePrivateKeyWithOptions(shared_ptr<DescribeSSLCertificatePrivateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedCode)) {
    query->insert(pair<string, string>("EncryptedCode", *request->encryptedCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSSLCertificatePrivateKey"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSSLCertificatePrivateKeyResponse(callApi(params, req, runtime));
}

DescribeSSLCertificatePrivateKeyResponse Alibabacloud_Cas20200619::Client::describeSSLCertificatePrivateKey(shared_ptr<DescribeSSLCertificatePrivateKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSSLCertificatePrivateKeyWithOptions(request, runtime);
}

DescribeSSLCertificatePublicKeyDetailResponse Alibabacloud_Cas20200619::Client::describeSSLCertificatePublicKeyDetailWithOptions(shared_ptr<DescribeSSLCertificatePublicKeyDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSSLCertificatePublicKeyDetail"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSSLCertificatePublicKeyDetailResponse(callApi(params, req, runtime));
}

DescribeSSLCertificatePublicKeyDetailResponse Alibabacloud_Cas20200619::Client::describeSSLCertificatePublicKeyDetail(shared_ptr<DescribeSSLCertificatePublicKeyDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSSLCertificatePublicKeyDetailWithOptions(request, runtime);
}

UploadSSLCertificateResponse Alibabacloud_Cas20200619::Client::uploadSSLCertificateWithOptions(shared_ptr<UploadSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    query->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptCertificate)) {
    query->insert(pair<string, string>("EncryptCertificate", *request->encryptCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptPrivateKey)) {
    query->insert(pair<string, string>("EncryptPrivateKey", *request->encryptPrivateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signCertificate)) {
    query->insert(pair<string, string>("SignCertificate", *request->signCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signPrivateKey)) {
    query->insert(pair<string, string>("SignPrivateKey", *request->signPrivateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadSSLCertificate"))},
    {"version", boost::any(string("2020-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadSSLCertificateResponse(callApi(params, req, runtime));
}

UploadSSLCertificateResponse Alibabacloud_Cas20200619::Client::uploadSSLCertificate(shared_ptr<UploadSSLCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadSSLCertificateWithOptions(request, runtime);
}

