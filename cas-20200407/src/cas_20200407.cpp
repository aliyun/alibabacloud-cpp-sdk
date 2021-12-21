// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cas_20200407.hpp>
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

using namespace Alibabacloud_Cas20200407;

Alibabacloud_Cas20200407::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Cas20200407::Client::getEndpoint(shared_ptr<string> productId,
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

CancelCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::cancelCertificateForPackageRequestWithOptions(shared_ptr<CancelCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCertificateForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCertificateForPackageRequestResponse(callApi(params, req, runtime));
}

CancelCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::cancelCertificateForPackageRequest(shared_ptr<CancelCertificateForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCertificateForPackageRequestWithOptions(request, runtime);
}

CancelOrderRequestResponse Alibabacloud_Cas20200407::Client::cancelOrderRequestWithOptions(shared_ptr<CancelOrderRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrderRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOrderRequestResponse(callApi(params, req, runtime));
}

CancelOrderRequestResponse Alibabacloud_Cas20200407::Client::cancelOrderRequest(shared_ptr<CancelOrderRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderRequestWithOptions(request, runtime);
}

CreateCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::createCertificateForPackageRequestWithOptions(shared_ptr<CreateCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CompanyName", *request->companyName));
  query->insert(pair<string, string>("Csr", *request->csr));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("Email", *request->email));
  query->insert(pair<string, string>("Phone", *request->phone));
  query->insert(pair<string, string>("ProductCode", *request->productCode));
  query->insert(pair<string, string>("Username", *request->username));
  query->insert(pair<string, string>("ValidateType", *request->validateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateForPackageRequestResponse(callApi(params, req, runtime));
}

CreateCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::createCertificateForPackageRequest(shared_ptr<CreateCertificateForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateForPackageRequestWithOptions(request, runtime);
}

CreateCertificateRequestResponse Alibabacloud_Cas20200407::Client::createCertificateRequestWithOptions(shared_ptr<CreateCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("Email", *request->email));
  query->insert(pair<string, string>("Phone", *request->phone));
  query->insert(pair<string, string>("ProductCode", *request->productCode));
  query->insert(pair<string, string>("Username", *request->username));
  query->insert(pair<string, string>("ValidateType", *request->validateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateRequestResponse(callApi(params, req, runtime));
}

CreateCertificateRequestResponse Alibabacloud_Cas20200407::Client::createCertificateRequest(shared_ptr<CreateCertificateRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateRequestWithOptions(request, runtime);
}

CreateCertificateWithCsrRequestResponse Alibabacloud_Cas20200407::Client::createCertificateWithCsrRequestWithOptions(shared_ptr<CreateCertificateWithCsrRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Csr", *request->csr));
  query->insert(pair<string, string>("Email", *request->email));
  query->insert(pair<string, string>("Phone", *request->phone));
  query->insert(pair<string, string>("ProductCode", *request->productCode));
  query->insert(pair<string, string>("Username", *request->username));
  query->insert(pair<string, string>("ValidateType", *request->validateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateWithCsrRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateWithCsrRequestResponse(callApi(params, req, runtime));
}

CreateCertificateWithCsrRequestResponse Alibabacloud_Cas20200407::Client::createCertificateWithCsrRequest(shared_ptr<CreateCertificateWithCsrRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithCsrRequestWithOptions(request, runtime);
}

DeleteCertificateRequestResponse Alibabacloud_Cas20200407::Client::deleteCertificateRequestWithOptions(shared_ptr<DeleteCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertificateRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCertificateRequestResponse(callApi(params, req, runtime));
}

DeleteCertificateRequestResponse Alibabacloud_Cas20200407::Client::deleteCertificateRequest(shared_ptr<DeleteCertificateRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateRequestWithOptions(request, runtime);
}

DescribeCertificateStateResponse Alibabacloud_Cas20200407::Client::describeCertificateStateWithOptions(shared_ptr<DescribeCertificateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificateState"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertificateStateResponse(callApi(params, req, runtime));
}

DescribeCertificateStateResponse Alibabacloud_Cas20200407::Client::describeCertificateState(shared_ptr<DescribeCertificateStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificateStateWithOptions(request, runtime);
}

DescribePackageStateResponse Alibabacloud_Cas20200407::Client::describePackageStateWithOptions(shared_ptr<DescribePackageStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProductCode", *request->productCode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePackageState"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePackageStateResponse(callApi(params, req, runtime));
}

DescribePackageStateResponse Alibabacloud_Cas20200407::Client::describePackageState(shared_ptr<DescribePackageStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePackageStateWithOptions(request, runtime);
}

RenewCertificateOrderForPackageRequestResponse Alibabacloud_Cas20200407::Client::renewCertificateOrderForPackageRequestWithOptions(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Csr", *request->csr));
  query->insert(pair<string, long>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewCertificateOrderForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewCertificateOrderForPackageRequestResponse(callApi(params, req, runtime));
}

RenewCertificateOrderForPackageRequestResponse Alibabacloud_Cas20200407::Client::renewCertificateOrderForPackageRequest(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewCertificateOrderForPackageRequestWithOptions(request, runtime);
}

