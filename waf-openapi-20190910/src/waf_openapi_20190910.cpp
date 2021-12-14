// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20190910.hpp>
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

using namespace Alibabacloud_Waf-openapi20190910;

Alibabacloud_Waf-openapi20190910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-heyuan", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-wulanchabu", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"cn-shanghai-finance-1", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-north-2-gov-1", "wafopenapi.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("waf-openapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Waf-openapi20190910::Client::getEndpoint(shared_ptr<string> productId,
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

CreateCertificateResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateWithOptions(shared_ptr<CreateCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Certificate", *request->certificate));
  query->insert(pair<string, string>("CertificateName", *request->certificateName));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateResponse(callApi(params, req, runtime));
}

CreateCertificateResponse Alibabacloud_Waf-openapi20190910::Client::createCertificate(shared_ptr<CreateCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithOptions(request, runtime);
}

CreateCertificateByCertificateIdResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateByCertificateIdWithOptions(shared_ptr<CreateCertificateByCertificateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CertificateId", *request->certificateId));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateByCertificateId"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateByCertificateIdResponse(callApi(params, req, runtime));
}

CreateCertificateByCertificateIdResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateByCertificateId(shared_ptr<CreateCertificateByCertificateIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateByCertificateIdWithOptions(request, runtime);
}

CreateDomainResponse Alibabacloud_Waf-openapi20190910::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AccessHeaderMode", *request->accessHeaderMode));
  query->insert(pair<string, string>("AccessHeaders", *request->accessHeaders));
  query->insert(pair<string, string>("AccessType", *request->accessType));
  query->insert(pair<string, string>("CloudNativeInstances", *request->cloudNativeInstances));
  query->insert(pair<string, long>("ClusterType", *request->clusterType));
  query->insert(pair<string, long>("ConnectionTime", *request->connectionTime));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("Http2Port", *request->http2Port));
  query->insert(pair<string, string>("HttpPort", *request->httpPort));
  query->insert(pair<string, long>("HttpToUserIp", *request->httpToUserIp));
  query->insert(pair<string, string>("HttpsPort", *request->httpsPort));
  query->insert(pair<string, long>("HttpsRedirect", *request->httpsRedirect));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("IpFollowStatus", *request->ipFollowStatus));
  query->insert(pair<string, long>("IsAccessProduct", *request->isAccessProduct));
  query->insert(pair<string, long>("LoadBalancing", *request->loadBalancing));
  query->insert(pair<string, string>("LogHeaders", *request->logHeaders));
  query->insert(pair<string, long>("ReadTime", *request->readTime));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("SniHost", *request->sniHost));
  query->insert(pair<string, long>("SniStatus", *request->sniStatus));
  query->insert(pair<string, string>("SourceIps", *request->sourceIps));
  query->insert(pair<string, long>("WriteTime", *request->writeTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomain"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainResponse(callApi(params, req, runtime));
}

CreateDomainResponse Alibabacloud_Waf-openapi20190910::Client::createDomain(shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainWithOptions(request, runtime);
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::createProtectionModuleRuleWithOptions(shared_ptr<CreateProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("Rule", *request->rule));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProtectionModuleRule"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProtectionModuleRuleResponse(callApi(params, req, runtime));
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::createProtectionModuleRule(shared_ptr<CreateProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProtectionModuleRuleWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_Waf-openapi20190910::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainResponse(callApi(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_Waf-openapi20190910::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Waf-openapi20190910::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Waf-openapi20190910::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::deleteProtectionModuleRuleWithOptions(shared_ptr<DeleteProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("RuleId", *request->ruleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProtectionModuleRule"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProtectionModuleRuleResponse(callApi(params, req, runtime));
}

DeleteProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::deleteProtectionModuleRule(shared_ptr<DeleteProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProtectionModuleRuleWithOptions(request, runtime);
}

DescribeCertMatchStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeCertMatchStatusWithOptions(shared_ptr<DescribeCertMatchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Certificate", *request->certificate));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertMatchStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertMatchStatusResponse(callApi(params, req, runtime));
}

DescribeCertMatchStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeCertMatchStatus(shared_ptr<DescribeCertMatchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertMatchStatusWithOptions(request, runtime);
}

DescribeCertificatesResponse Alibabacloud_Waf-openapi20190910::Client::describeCertificatesWithOptions(shared_ptr<DescribeCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificates"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertificatesResponse(callApi(params, req, runtime));
}

DescribeCertificatesResponse Alibabacloud_Waf-openapi20190910::Client::describeCertificates(shared_ptr<DescribeCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificatesWithOptions(request, runtime);
}

DescribeDomainResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomain"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainResponse(callApi(params, req, runtime));
}

DescribeDomainResponse Alibabacloud_Waf-openapi20190910::Client::describeDomain(shared_ptr<DescribeDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithOptions(request, runtime);
}

DescribeDomainAdvanceConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainAdvanceConfigsWithOptions(shared_ptr<DescribeDomainAdvanceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainList", *request->domainList));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainAdvanceConfigs"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainAdvanceConfigsResponse(callApi(params, req, runtime));
}

DescribeDomainAdvanceConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainAdvanceConfigs(shared_ptr<DescribeDomainAdvanceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainAdvanceConfigsWithOptions(request, runtime);
}

DescribeDomainBasicConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainBasicConfigsWithOptions(shared_ptr<DescribeDomainBasicConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessType", *request->accessType));
  query->insert(pair<string, long>("CloudNativeProductId", *request->cloudNativeProductId));
  query->insert(pair<string, string>("DomainKey", *request->domainKey));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainBasicConfigs"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainBasicConfigsResponse(callApi(params, req, runtime));
}

DescribeDomainBasicConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainBasicConfigs(shared_ptr<DescribeDomainBasicConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainBasicConfigsWithOptions(request, runtime);
}

DescribeDomainListResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainListWithOptions(shared_ptr<DescribeDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, vector<string>>("DomainNames", *request->domainNames));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("IsSub", *request->isSub));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainList"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainListResponse(callApi(params, req, runtime));
}

DescribeDomainListResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainList(shared_ptr<DescribeDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainListWithOptions(request, runtime);
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainNames"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainNamesResponse(callApi(params, req, runtime));
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainNamesWithOptions(request, runtime);
}

DescribeDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainRuleGroupWithOptions(shared_ptr<DescribeDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainRuleGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainRuleGroupResponse(callApi(params, req, runtime));
}

DescribeDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainRuleGroup(shared_ptr<DescribeDomainRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainRuleGroupWithOptions(request, runtime);
}

DescribeInstanceInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfoWithOptions(shared_ptr<DescribeInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceInfo"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceInfoResponse(callApi(params, req, runtime));
}

DescribeInstanceInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfo(shared_ptr<DescribeInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceInfoWithOptions(request, runtime);
}

DescribeInstanceSpecInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceSpecInfoWithOptions(shared_ptr<DescribeInstanceSpecInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSpecInfo"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSpecInfoResponse(callApi(params, req, runtime));
}

DescribeInstanceSpecInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceSpecInfo(shared_ptr<DescribeInstanceSpecInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSpecInfoWithOptions(request, runtime);
}

DescribeLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeLogServiceStatusWithOptions(shared_ptr<DescribeLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("DomainNames", *request->domainNames));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Region", *request->region));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogServiceStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogServiceStatusResponse(callApi(params, req, runtime));
}

DescribeLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeLogServiceStatus(shared_ptr<DescribeLogServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogServiceStatusWithOptions(request, runtime);
}

DescribeProtectionModuleCodeConfigResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleCodeConfigWithOptions(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CodeType", *request->codeType));
  query->insert(pair<string, long>("CodeValue", *request->codeValue));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProtectionModuleCodeConfig"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProtectionModuleCodeConfigResponse(callApi(params, req, runtime));
}

DescribeProtectionModuleCodeConfigResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleCodeConfig(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleCodeConfigWithOptions(request, runtime);
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleRulesWithOptions(shared_ptr<DescribeProtectionModuleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("Lang", *request->lang));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Query", *request->query));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProtectionModuleRules"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProtectionModuleRulesResponse(callApi(params, req, runtime));
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleRules(shared_ptr<DescribeProtectionModuleRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleRulesWithOptions(request, runtime);
}

DescribeProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleStatusWithOptions(shared_ptr<DescribeProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProtectionModuleStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProtectionModuleStatusResponse(callApi(params, req, runtime));
}

DescribeProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleStatus(shared_ptr<DescribeProtectionModuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleStatusWithOptions(request, runtime);
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20190910::Client::describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWafSourceIpSegment"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWafSourceIpSegmentResponse(callApi(params, req, runtime));
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20190910::Client::describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWafSourceIpSegmentWithOptions(request, runtime);
}

ModifyDomainResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainWithOptions(shared_ptr<ModifyDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AccessHeaderMode", *request->accessHeaderMode));
  query->insert(pair<string, string>("AccessHeaders", *request->accessHeaders));
  query->insert(pair<string, string>("AccessType", *request->accessType));
  query->insert(pair<string, string>("CloudNativeInstances", *request->cloudNativeInstances));
  query->insert(pair<string, long>("ClusterType", *request->clusterType));
  query->insert(pair<string, long>("ConnectionTime", *request->connectionTime));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("Http2Port", *request->http2Port));
  query->insert(pair<string, string>("HttpPort", *request->httpPort));
  query->insert(pair<string, long>("HttpToUserIp", *request->httpToUserIp));
  query->insert(pair<string, string>("HttpsPort", *request->httpsPort));
  query->insert(pair<string, long>("HttpsRedirect", *request->httpsRedirect));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("IpFollowStatus", *request->ipFollowStatus));
  query->insert(pair<string, long>("IsAccessProduct", *request->isAccessProduct));
  query->insert(pair<string, long>("LoadBalancing", *request->loadBalancing));
  query->insert(pair<string, string>("LogHeaders", *request->logHeaders));
  query->insert(pair<string, long>("ReadTime", *request->readTime));
  query->insert(pair<string, string>("SniHost", *request->sniHost));
  query->insert(pair<string, long>("SniStatus", *request->sniStatus));
  query->insert(pair<string, string>("SourceIps", *request->sourceIps));
  query->insert(pair<string, long>("WriteTime", *request->writeTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDomain"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDomainResponse(callApi(params, req, runtime));
}

ModifyDomainResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomain(shared_ptr<ModifyDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainWithOptions(request, runtime);
}

ModifyDomainIpv6StatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainIpv6StatusWithOptions(shared_ptr<ModifyDomainIpv6StatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("Enabled", *request->enabled));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDomainIpv6Status"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDomainIpv6StatusResponse(callApi(params, req, runtime));
}

ModifyDomainIpv6StatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainIpv6Status(shared_ptr<ModifyDomainIpv6StatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainIpv6StatusWithOptions(request, runtime);
}

ModifyLogRetrievalStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogRetrievalStatusWithOptions(shared_ptr<ModifyLogRetrievalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, long>("Enabled", *request->enabled));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLogRetrievalStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLogRetrievalStatusResponse(callApi(params, req, runtime));
}

ModifyLogRetrievalStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogRetrievalStatus(shared_ptr<ModifyLogRetrievalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogRetrievalStatusWithOptions(request, runtime);
}

ModifyLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogServiceStatusWithOptions(shared_ptr<ModifyLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, long>("Enabled", *request->enabled));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLogServiceStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLogServiceStatusResponse(callApi(params, req, runtime));
}

ModifyLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogServiceStatus(shared_ptr<ModifyLogServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogServiceStatusWithOptions(request, runtime);
}

ModifyProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleModeWithOptions(shared_ptr<ModifyProtectionModuleModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("Mode", *request->mode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyProtectionModuleMode"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyProtectionModuleModeResponse(callApi(params, req, runtime));
}

ModifyProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleMode(shared_ptr<ModifyProtectionModuleModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleModeWithOptions(request, runtime);
}

ModifyProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleRuleWithOptions(shared_ptr<ModifyProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("LockVersion", *request->lockVersion));
  query->insert(pair<string, string>("Rule", *request->rule));
  query->insert(pair<string, long>("RuleId", *request->ruleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyProtectionModuleRule"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyProtectionModuleRuleResponse(callApi(params, req, runtime));
}

ModifyProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleRule(shared_ptr<ModifyProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleRuleWithOptions(request, runtime);
}

ModifyProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleStatusWithOptions(shared_ptr<ModifyProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("ModuleStatus", *request->moduleStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyProtectionModuleStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyProtectionModuleStatusResponse(callApi(params, req, runtime));
}

ModifyProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleStatus(shared_ptr<ModifyProtectionModuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleStatusWithOptions(request, runtime);
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleCacheStatusWithOptions(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("RuleId", *request->ruleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyProtectionRuleCacheStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyProtectionRuleCacheStatusResponse(callApi(params, req, runtime));
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleCacheStatus(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleCacheStatusWithOptions(request, runtime);
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleStatusWithOptions(shared_ptr<ModifyProtectionRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DefenseType", *request->defenseType));
  query->insert(pair<string, string>("Domain", *request->domain));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("LockVersion", *request->lockVersion));
  query->insert(pair<string, long>("RuleId", *request->ruleId));
  query->insert(pair<string, long>("RuleStatus", *request->ruleStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyProtectionRuleStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyProtectionRuleStatusResponse(callApi(params, req, runtime));
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleStatus(shared_ptr<ModifyProtectionRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleStatusWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Waf-openapi20190910::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Waf-openapi20190910::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

SetDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::setDomainRuleGroupWithOptions(shared_ptr<SetDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Domains", *request->domains));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, long>("RuleGroupId", *request->ruleGroupId));
  query->insert(pair<string, long>("WafVersion", *request->wafVersion));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainRuleGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainRuleGroupResponse(callApi(params, req, runtime));
}

SetDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::setDomainRuleGroup(shared_ptr<SetDomainRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainRuleGroupWithOptions(request, runtime);
}

