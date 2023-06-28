// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dcdn_20180115.hpp>
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

using namespace Alibabacloud_Dcdn20180115;

Alibabacloud_Dcdn20180115::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "dcdn.aliyuncs.com"},
    {"ap-northeast-2-pop", "dcdn.aliyuncs.com"},
    {"ap-south-1", "dcdn.aliyuncs.com"},
    {"ap-southeast-1", "dcdn.aliyuncs.com"},
    {"ap-southeast-2", "dcdn.aliyuncs.com"},
    {"ap-southeast-3", "dcdn.aliyuncs.com"},
    {"ap-southeast-5", "dcdn.aliyuncs.com"},
    {"cn-beijing", "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-1", "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dcdn.aliyuncs.com"},
    {"cn-beijing-gov-1", "dcdn.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dcdn.aliyuncs.com"},
    {"cn-chengdu", "dcdn.aliyuncs.com"},
    {"cn-edge-1", "dcdn.aliyuncs.com"},
    {"cn-fujian", "dcdn.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dcdn.aliyuncs.com"},
    {"cn-hangzhou", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-finance", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dcdn.aliyuncs.com"},
    {"cn-hongkong", "dcdn.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dcdn.aliyuncs.com"},
    {"cn-huhehaote", "dcdn.aliyuncs.com"},
    {"cn-north-2-gov-1", "dcdn.aliyuncs.com"},
    {"cn-qingdao", "dcdn.aliyuncs.com"},
    {"cn-qingdao-nebula", "dcdn.aliyuncs.com"},
    {"cn-shanghai", "dcdn.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dcdn.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dcdn.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dcdn.aliyuncs.com"},
    {"cn-shanghai-inner", "dcdn.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dcdn.aliyuncs.com"},
    {"cn-shenzhen", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-inner", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dcdn.aliyuncs.com"},
    {"cn-wuhan", "dcdn.aliyuncs.com"},
    {"cn-yushanfang", "dcdn.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou", "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dcdn.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dcdn.aliyuncs.com"},
    {"eu-central-1", "dcdn.aliyuncs.com"},
    {"eu-west-1", "dcdn.aliyuncs.com"},
    {"eu-west-1-oxs", "dcdn.aliyuncs.com"},
    {"me-east-1", "dcdn.aliyuncs.com"},
    {"rus-west-1-pop", "dcdn.aliyuncs.com"},
    {"us-east-1", "dcdn.aliyuncs.com"},
    {"us-west-1", "dcdn.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dcdn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dcdn20180115::Client::getEndpoint(shared_ptr<string> productId,
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

AddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnDomainWithOptions(shared_ptr<AddDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkUrl)) {
    query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddDcdnDomainRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<AddDcdnDomainRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDcdnDomainResponse(callApi(params, req, runtime));
}

AddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnDomain(shared_ptr<AddDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDcdnDomainWithOptions(request, runtime);
}

AddDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnIpaDomainWithOptions(shared_ptr<AddDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkUrl)) {
    query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDcdnIpaDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDcdnIpaDomainResponse(callApi(params, req, runtime));
}

AddDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnIpaDomain(shared_ptr<AddDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDcdnIpaDomainWithOptions(request, runtime);
}

BatchAddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchAddDcdnDomainWithOptions(shared_ptr<BatchAddDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkUrl)) {
    query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddDcdnDomainResponse(callApi(params, req, runtime));
}

BatchAddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchAddDcdnDomain(shared_ptr<BatchAddDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDcdnDomainWithOptions(request, runtime);
}

BatchCreateDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchCreateDcdnWafRulesWithOptions(shared_ptr<BatchCreateDcdnWafRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    body->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleConfigs)) {
    body->insert(pair<string, string>("RuleConfigs", *request->ruleConfigs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateDcdnWafRules"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCreateDcdnWafRulesResponse(callApi(params, req, runtime));
}

BatchCreateDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchCreateDcdnWafRules(shared_ptr<BatchCreateDcdnWafRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateDcdnWafRulesWithOptions(request, runtime);
}

BatchDeleteDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnDomainConfigsWithOptions(shared_ptr<BatchDeleteDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteDcdnDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteDcdnDomainConfigsResponse(callApi(params, req, runtime));
}

BatchDeleteDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnDomainConfigs(shared_ptr<BatchDeleteDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDcdnDomainConfigsWithOptions(request, runtime);
}

BatchDeleteDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnWafRulesWithOptions(shared_ptr<BatchDeleteDcdnWafRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleIds)) {
    body->insert(pair<string, string>("RuleIds", *request->ruleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteDcdnWafRules"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteDcdnWafRulesResponse(callApi(params, req, runtime));
}

BatchDeleteDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnWafRules(shared_ptr<BatchDeleteDcdnWafRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDcdnWafRulesWithOptions(request, runtime);
}

BatchModifyDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchModifyDcdnWafRulesWithOptions(shared_ptr<BatchModifyDcdnWafRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    body->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleConfigs)) {
    body->insert(pair<string, string>("RuleConfigs", *request->ruleConfigs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchModifyDcdnWafRules"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchModifyDcdnWafRulesResponse(callApi(params, req, runtime));
}

BatchModifyDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::batchModifyDcdnWafRules(shared_ptr<BatchModifyDcdnWafRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchModifyDcdnWafRulesWithOptions(request, runtime);
}

BatchSetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainCertificateWithOptions(shared_ptr<BatchSetDcdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    query->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPri)) {
    query->insert(pair<string, string>("SSLPri", *request->SSLPri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLProtocol)) {
    query->insert(pair<string, string>("SSLProtocol", *request->SSLProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPub)) {
    query->insert(pair<string, string>("SSLPub", *request->SSLPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetDcdnDomainCertificate"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetDcdnDomainCertificateResponse(callApi(params, req, runtime));
}

BatchSetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainCertificate(shared_ptr<BatchSetDcdnDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnDomainCertificateWithOptions(request, runtime);
}

BatchSetDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainConfigsWithOptions(shared_ptr<BatchSetDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functions)) {
    query->insert(pair<string, string>("Functions", *request->functions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetDcdnDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetDcdnDomainConfigsResponse(callApi(params, req, runtime));
}

BatchSetDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainConfigs(shared_ptr<BatchSetDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnDomainConfigsWithOptions(request, runtime);
}

BatchSetDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnIpaDomainConfigsWithOptions(shared_ptr<BatchSetDcdnIpaDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functions)) {
    query->insert(pair<string, string>("Functions", *request->functions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetDcdnIpaDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetDcdnIpaDomainConfigsResponse(callApi(params, req, runtime));
}

BatchSetDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnIpaDomainConfigs(shared_ptr<BatchSetDcdnIpaDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnIpaDomainConfigsWithOptions(request, runtime);
}

BatchSetDcdnWafDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnWafDomainConfigsWithOptions(shared_ptr<BatchSetDcdnWafDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIpTag)) {
    body->insert(pair<string, string>("ClientIpTag", *request->clientIpTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseStatus)) {
    body->insert(pair<string, string>("DefenseStatus", *request->defenseStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    body->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetDcdnWafDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetDcdnWafDomainConfigsResponse(callApi(params, req, runtime));
}

BatchSetDcdnWafDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnWafDomainConfigs(shared_ptr<BatchSetDcdnWafDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnWafDomainConfigsWithOptions(request, runtime);
}

CheckDcdnProjectExistResponse Alibabacloud_Dcdn20180115::Client::checkDcdnProjectExistWithOptions(shared_ptr<CheckDcdnProjectExistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDcdnProjectExist"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDcdnProjectExistResponse(callApi(params, req, runtime));
}

CheckDcdnProjectExistResponse Alibabacloud_Dcdn20180115::Client::checkDcdnProjectExist(shared_ptr<CheckDcdnProjectExistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDcdnProjectExistWithOptions(request, runtime);
}

CommitStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::commitStagingRoutineCodeWithOptions(shared_ptr<CommitStagingRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeDescription)) {
    body->insert(pair<string, string>("CodeDescription", *request->codeDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitStagingRoutineCode"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommitStagingRoutineCodeResponse(callApi(params, req, runtime));
}

CommitStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::commitStagingRoutineCode(shared_ptr<CommitStagingRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitStagingRoutineCodeWithOptions(request, runtime);
}

CreateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnDeliverTaskWithOptions(shared_ptr<CreateDcdnDeliverTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliver)) {
    body->insert(pair<string, string>("Deliver", *request->deliver));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reports)) {
    body->insert(pair<string, string>("Reports", *request->reports));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    body->insert(pair<string, string>("Schedule", *request->schedule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDcdnDeliverTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDcdnDeliverTaskResponse(callApi(params, req, runtime));
}

CreateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnDeliverTask(shared_ptr<CreateDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnDeliverTaskWithOptions(request, runtime);
}

CreateDcdnSLSRealTimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::createDcdnSLSRealTimeLogDeliveryWithOptions(shared_ptr<CreateDcdnSLSRealTimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCenter)) {
    body->insert(pair<string, string>("DataCenter", *request->dataCenter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSLogStore)) {
    body->insert(pair<string, string>("SLSLogStore", *request->SLSLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSProject)) {
    body->insert(pair<string, string>("SLSProject", *request->SLSProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSRegion)) {
    body->insert(pair<string, string>("SLSRegion", *request->SLSRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingRate)) {
    body->insert(pair<string, string>("SamplingRate", *request->samplingRate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDcdnSLSRealTimeLogDelivery"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDcdnSLSRealTimeLogDeliveryResponse(callApi(params, req, runtime));
}

CreateDcdnSLSRealTimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::createDcdnSLSRealTimeLogDelivery(shared_ptr<CreateDcdnSLSRealTimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnSLSRealTimeLogDeliveryWithOptions(request, runtime);
}

CreateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnSubTaskWithOptions(shared_ptr<CreateDcdnSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportIds)) {
    body->insert(pair<string, string>("ReportIds", *request->reportIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDcdnSubTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDcdnSubTaskResponse(callApi(params, req, runtime));
}

CreateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnSubTask(shared_ptr<CreateDcdnSubTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnSubTaskWithOptions(request, runtime);
}

CreateDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::createDcdnWafPolicyWithOptions(shared_ptr<CreateDcdnWafPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    body->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyStatus)) {
    body->insert(pair<string, string>("PolicyStatus", *request->policyStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDcdnWafPolicy"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDcdnWafPolicyResponse(callApi(params, req, runtime));
}

CreateDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::createDcdnWafPolicy(shared_ptr<CreateDcdnWafPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnWafPolicyWithOptions(request, runtime);
}

CreateRoutineResponse Alibabacloud_Dcdn20180115::Client::createRoutineWithOptions(shared_ptr<CreateRoutineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRoutineShrinkRequest> request = make_shared<CreateRoutineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envConf)) {
    request->envConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envConf, make_shared<string>("EnvConf"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envConfShrink)) {
    body->insert(pair<string, string>("EnvConf", *request->envConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRoutine"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRoutineResponse(callApi(params, req, runtime));
}

CreateRoutineResponse Alibabacloud_Dcdn20180115::Client::createRoutine(shared_ptr<CreateRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoutineWithOptions(request, runtime);
}

CreateSlrAndSlsProjectResponse Alibabacloud_Dcdn20180115::Client::createSlrAndSlsProjectWithOptions(shared_ptr<CreateSlrAndSlsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSlrAndSlsProject"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSlrAndSlsProjectResponse(callApi(params, req, runtime));
}

CreateSlrAndSlsProjectResponse Alibabacloud_Dcdn20180115::Client::createSlrAndSlsProject(shared_ptr<CreateSlrAndSlsProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSlrAndSlsProjectWithOptions(request, runtime);
}

DeleteDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDeliverTaskWithOptions(shared_ptr<DeleteDcdnDeliverTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->deliverId)) {
    query->insert(pair<string, long>("DeliverId", *request->deliverId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnDeliverTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnDeliverTaskResponse(callApi(params, req, runtime));
}

DeleteDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDeliverTask(shared_ptr<DeleteDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnDeliverTaskWithOptions(request, runtime);
}

DeleteDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDomainWithOptions(shared_ptr<DeleteDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnDomainResponse(callApi(params, req, runtime));
}

DeleteDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDomain(shared_ptr<DeleteDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnDomainWithOptions(request, runtime);
}

DeleteDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaDomainWithOptions(shared_ptr<DeleteDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnIpaDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnIpaDomainResponse(callApi(params, req, runtime));
}

DeleteDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaDomain(shared_ptr<DeleteDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnIpaDomainWithOptions(request, runtime);
}

DeleteDcdnIpaSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaSpecificConfigWithOptions(shared_ptr<DeleteDcdnIpaSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    query->insert(pair<string, string>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnIpaSpecificConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnIpaSpecificConfigResponse(callApi(params, req, runtime));
}

DeleteDcdnIpaSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaSpecificConfig(shared_ptr<DeleteDcdnIpaSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnIpaSpecificConfigWithOptions(request, runtime);
}

DeleteDcdnKvResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnKvWithOptions(shared_ptr<DeleteDcdnKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnKv"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnKvResponse(callApi(params, req, runtime));
}

DeleteDcdnKvResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnKv(shared_ptr<DeleteDcdnKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnKvWithOptions(request, runtime);
}

DeleteDcdnRealTimeLogProjectResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnRealTimeLogProjectWithOptions(shared_ptr<DeleteDcdnRealTimeLogProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnRealTimeLogProject"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnRealTimeLogProjectResponse(callApi(params, req, runtime));
}

DeleteDcdnRealTimeLogProjectResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnRealTimeLogProject(shared_ptr<DeleteDcdnRealTimeLogProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnRealTimeLogProjectWithOptions(request, runtime);
}

DeleteDcdnSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificConfigWithOptions(shared_ptr<DeleteDcdnSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    query->insert(pair<string, string>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnSpecificConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnSpecificConfigResponse(callApi(params, req, runtime));
}

DeleteDcdnSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificConfig(shared_ptr<DeleteDcdnSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSpecificConfigWithOptions(request, runtime);
}

DeleteDcdnSpecificStagingConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificStagingConfigWithOptions(shared_ptr<DeleteDcdnSpecificStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    query->insert(pair<string, string>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnSpecificStagingConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnSpecificStagingConfigResponse(callApi(params, req, runtime));
}

DeleteDcdnSpecificStagingConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificStagingConfig(shared_ptr<DeleteDcdnSpecificStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSpecificStagingConfigWithOptions(request, runtime);
}

DeleteDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSubTaskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnSubTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnSubTaskResponse(callApi(params, req, runtime));
}

DeleteDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSubTask() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSubTaskWithOptions(runtime);
}

DeleteDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnWafPolicyWithOptions(shared_ptr<DeleteDcdnWafPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    body->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDcdnWafPolicy"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDcdnWafPolicyResponse(callApi(params, req, runtime));
}

DeleteDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnWafPolicy(shared_ptr<DeleteDcdnWafPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnWafPolicyWithOptions(request, runtime);
}

DeleteRoutineResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineWithOptions(shared_ptr<DeleteRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutine"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRoutineResponse(callApi(params, req, runtime));
}

DeleteRoutineResponse Alibabacloud_Dcdn20180115::Client::deleteRoutine(shared_ptr<DeleteRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineWithOptions(request, runtime);
}

DeleteRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineCodeRevisionWithOptions(shared_ptr<DeleteRoutineCodeRevisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectCodeRevision)) {
    body->insert(pair<string, string>("SelectCodeRevision", *request->selectCodeRevision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutineCodeRevision"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRoutineCodeRevisionResponse(callApi(params, req, runtime));
}

DeleteRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineCodeRevision(shared_ptr<DeleteRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineCodeRevisionWithOptions(request, runtime);
}

DeleteRoutineConfEnvsResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineConfEnvsWithOptions(shared_ptr<DeleteRoutineConfEnvsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteRoutineConfEnvsShrinkRequest> request = make_shared<DeleteRoutineConfEnvsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envs)) {
    request->envsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envs, make_shared<string>("Envs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envsShrink)) {
    body->insert(pair<string, string>("Envs", *request->envsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutineConfEnvs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRoutineConfEnvsResponse(callApi(params, req, runtime));
}

DeleteRoutineConfEnvsResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineConfEnvs(shared_ptr<DeleteRoutineConfEnvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineConfEnvsWithOptions(request, runtime);
}

DescribeDcdnAclFieldsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnAclFieldsWithOptions(shared_ptr<DescribeDcdnAclFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnAclFields"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnAclFieldsResponse(callApi(params, req, runtime));
}

DescribeDcdnAclFieldsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnAclFields(shared_ptr<DescribeDcdnAclFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnAclFieldsWithOptions(request, runtime);
}

DescribeDcdnBgpBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpBpsDataWithOptions(shared_ptr<DescribeDcdnBgpBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePort)) {
    query->insert(pair<string, string>("DevicePort", *request->devicePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnBgpBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnBgpBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnBgpBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpBpsData(shared_ptr<DescribeDcdnBgpBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBgpBpsDataWithOptions(request, runtime);
}

DescribeDcdnBgpTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpTrafficDataWithOptions(shared_ptr<DescribeDcdnBgpTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnBgpTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnBgpTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnBgpTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpTrafficData(shared_ptr<DescribeDcdnBgpTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBgpTrafficDataWithOptions(request, runtime);
}

DescribeDcdnBlockedRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBlockedRegionsWithOptions(shared_ptr<DescribeDcdnBlockedRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnBlockedRegions"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnBlockedRegionsResponse(callApi(params, req, runtime));
}

DescribeDcdnBlockedRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBlockedRegions(shared_ptr<DescribeDcdnBlockedRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBlockedRegionsWithOptions(request, runtime);
}

DescribeDcdnCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateDetailWithOptions(shared_ptr<DescribeDcdnCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnCertificateDetail"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnCertificateDetailResponse(callApi(params, req, runtime));
}

DescribeDcdnCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateDetail(shared_ptr<DescribeDcdnCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnCertificateDetailWithOptions(request, runtime);
}

DescribeDcdnCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateListWithOptions(shared_ptr<DescribeDcdnCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnCertificateList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnCertificateListResponse(callApi(params, req, runtime));
}

DescribeDcdnCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateList(shared_ptr<DescribeDcdnCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnCertificateListWithOptions(request, runtime);
}

DescribeDcdnDeletedDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeletedDomainsWithOptions(shared_ptr<DescribeDcdnDeletedDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDeletedDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDeletedDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnDeletedDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeletedDomains(shared_ptr<DescribeDcdnDeletedDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDeletedDomainsWithOptions(request, runtime);
}

DescribeDcdnDeliverListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeliverListWithOptions(shared_ptr<DescribeDcdnDeliverListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->deliverId)) {
    query->insert(pair<string, long>("DeliverId", *request->deliverId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDeliverList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDeliverListResponse(callApi(params, req, runtime));
}

DescribeDcdnDeliverListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeliverList(shared_ptr<DescribeDcdnDeliverListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDeliverListWithOptions(request, runtime);
}

DescribeDcdnDomainBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsDataWithOptions(shared_ptr<DescribeDcdnDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsData(shared_ptr<DescribeDcdnDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainBpsDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsDataByLayerWithOptions(shared_ptr<DescribeDcdnDomainBpsDataByLayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    query->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainBpsDataByLayer"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainBpsDataByLayerResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainBpsDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsDataByLayer(shared_ptr<DescribeDcdnDomainBpsDataByLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainBpsDataByLayerWithOptions(request, runtime);
}

DescribeDcdnDomainByCertificateResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainByCertificateWithOptions(shared_ptr<DescribeDcdnDomainByCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPub)) {
    query->insert(pair<string, string>("SSLPub", *request->SSLPub));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->SSLStatus)) {
    query->insert(pair<string, bool>("SSLStatus", *request->SSLStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainByCertificate"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainByCertificateResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainByCertificateResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainByCertificate(shared_ptr<DescribeDcdnDomainByCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainByCertificateWithOptions(request, runtime);
}

DescribeDcdnDomainCcActivityLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCcActivityLogWithOptions(shared_ptr<DescribeDcdnDomainCcActivityLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerObject)) {
    query->insert(pair<string, string>("TriggerObject", *request->triggerObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainCcActivityLog"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainCcActivityLogResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainCcActivityLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCcActivityLog(shared_ptr<DescribeDcdnDomainCcActivityLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainCcActivityLogWithOptions(request, runtime);
}

DescribeDcdnDomainCertificateInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCertificateInfoWithOptions(shared_ptr<DescribeDcdnDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainCertificateInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainCertificateInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainCertificateInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCertificateInfo(shared_ptr<DescribeDcdnDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainCertificateInfoWithOptions(request, runtime);
}

DescribeDcdnDomainCnameResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCnameWithOptions(shared_ptr<DescribeDcdnDomainCnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainCname"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainCnameResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainCnameResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCname(shared_ptr<DescribeDcdnDomainCnameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainCnameWithOptions(request, runtime);
}

DescribeDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainConfigsWithOptions(shared_ptr<DescribeDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    query->insert(pair<string, string>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainConfigsResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainConfigs(shared_ptr<DescribeDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainConfigsWithOptions(request, runtime);
}

DescribeDcdnDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainDetailWithOptions(shared_ptr<DescribeDcdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainDetail"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainDetailResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainDetail(shared_ptr<DescribeDcdnDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainDetailWithOptions(request, runtime);
}

DescribeDcdnDomainHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainHitRateData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainHitRateDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHitRateData(shared_ptr<DescribeDcdnDomainHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainHttpCodeData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeData(shared_ptr<DescribeDcdnDomainHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainHttpCodeDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeDataByLayerWithOptions(shared_ptr<DescribeDcdnDomainHttpCodeDataByLayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    query->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainHttpCodeDataByLayer"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainHttpCodeDataByLayerResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainHttpCodeDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeDataByLayer(shared_ptr<DescribeDcdnDomainHttpCodeDataByLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainHttpCodeDataByLayerWithOptions(request, runtime);
}

DescribeDcdnDomainIpaBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaBpsDataWithOptions(shared_ptr<DescribeDcdnDomainIpaBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fixTimeGap)) {
    query->insert(pair<string, string>("FixTimeGap", *request->fixTimeGap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainIpaBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainIpaBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainIpaBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaBpsData(shared_ptr<DescribeDcdnDomainIpaBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIpaBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainIpaConnDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaConnDataWithOptions(shared_ptr<DescribeDcdnDomainIpaConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainIpaConnData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainIpaConnDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainIpaConnDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaConnData(shared_ptr<DescribeDcdnDomainIpaConnDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIpaConnDataWithOptions(request, runtime);
}

DescribeDcdnDomainIpaTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainIpaTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fixTimeGap)) {
    query->insert(pair<string, string>("FixTimeGap", *request->fixTimeGap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainIpaTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainIpaTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainIpaTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaTrafficData(shared_ptr<DescribeDcdnDomainIpaTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIpaTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainIspDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIspDataWithOptions(shared_ptr<DescribeDcdnDomainIspDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainIspData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainIspDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainIspDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIspData(shared_ptr<DescribeDcdnDomainIspDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIspDataWithOptions(request, runtime);
}

DescribeDcdnDomainLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainLogWithOptions(shared_ptr<DescribeDcdnDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainLog"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainLogResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainLog(shared_ptr<DescribeDcdnDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainLogWithOptions(request, runtime);
}

DescribeDcdnDomainMultiUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainMultiUsageDataWithOptions(shared_ptr<DescribeDcdnDomainMultiUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainMultiUsageData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainMultiUsageDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainMultiUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainMultiUsageData(shared_ptr<DescribeDcdnDomainMultiUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainMultiUsageDataWithOptions(request, runtime);
}

DescribeDcdnDomainOriginBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginBpsDataWithOptions(shared_ptr<DescribeDcdnDomainOriginBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainOriginBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainOriginBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainOriginBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginBpsData(shared_ptr<DescribeDcdnDomainOriginBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainOriginBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainOriginTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainOriginTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainOriginTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainOriginTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainOriginTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginTrafficData(shared_ptr<DescribeDcdnDomainOriginTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainOriginTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainPropertyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPropertyWithOptions(shared_ptr<DescribeDcdnDomainPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainProperty"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainPropertyResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainPropertyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainProperty(shared_ptr<DescribeDcdnDomainPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainPropertyWithOptions(request, runtime);
}

DescribeDcdnDomainPvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPvDataWithOptions(shared_ptr<DescribeDcdnDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainPvData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainPvDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainPvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPvData(shared_ptr<DescribeDcdnDomainPvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainPvDataWithOptions(request, runtime);
}

DescribeDcdnDomainQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsDataWithOptions(shared_ptr<DescribeDcdnDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainQpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainQpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsData(shared_ptr<DescribeDcdnDomainQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainQpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainQpsDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsDataByLayerWithOptions(shared_ptr<DescribeDcdnDomainQpsDataByLayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    query->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainQpsDataByLayer"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainQpsDataByLayerResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainQpsDataByLayerResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsDataByLayer(shared_ptr<DescribeDcdnDomainQpsDataByLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainQpsDataByLayerWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeBpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeBpsData(shared_ptr<DescribeDcdnDomainRealTimeBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeByteHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeByteHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeByteHitRateData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeByteHitRateDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeByteHitRateData(shared_ptr<DescribeDcdnDomainRealTimeByteHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeDetailDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeDetailDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeDetailDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeDetailData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeDetailDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeDetailDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeDetailData(shared_ptr<DescribeDcdnDomainRealTimeDetailDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeDetailDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeHttpCodeData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeHttpCodeData(shared_ptr<DescribeDcdnDomainRealTimeHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeQpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeQpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeQpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeQpsData(shared_ptr<DescribeDcdnDomainRealTimeQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeQpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeReqHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeReqHitRateData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeReqHitRateDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeReqHitRateData(shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcBpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeSrcBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeSrcBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcBpsData(shared_ptr<DescribeDcdnDomainRealTimeSrcBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeSrcHttpCodeData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcHttpCodeData(shared_ptr<DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeSrcTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeSrcTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcTrafficData(shared_ptr<DescribeDcdnDomainRealTimeSrcTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRealTimeTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRealTimeTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRealTimeTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeTrafficData(shared_ptr<DescribeDcdnDomainRealTimeTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainRegionDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRegionDataWithOptions(shared_ptr<DescribeDcdnDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainRegionData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainRegionDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainRegionDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRegionData(shared_ptr<DescribeDcdnDomainRegionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRegionDataWithOptions(request, runtime);
}

DescribeDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainStagingConfigWithOptions(shared_ptr<DescribeDcdnDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainStagingConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainStagingConfigResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainStagingConfig(shared_ptr<DescribeDcdnDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainStagingConfigWithOptions(request, runtime);
}

DescribeDcdnDomainTopReferVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopReferVisitWithOptions(shared_ptr<DescribeDcdnDomainTopReferVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainTopReferVisit"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainTopReferVisitResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainTopReferVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopReferVisit(shared_ptr<DescribeDcdnDomainTopReferVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTopReferVisitWithOptions(request, runtime);
}

DescribeDcdnDomainTopUrlVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopUrlVisitWithOptions(shared_ptr<DescribeDcdnDomainTopUrlVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainTopUrlVisit"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainTopUrlVisitResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainTopUrlVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopUrlVisit(shared_ptr<DescribeDcdnDomainTopUrlVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTopUrlVisitWithOptions(request, runtime);
}

DescribeDcdnDomainTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTrafficData(shared_ptr<DescribeDcdnDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUsageDataWithOptions(shared_ptr<DescribeDcdnDomainUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataProtocol)) {
    query->insert(pair<string, string>("DataProtocol", *request->dataProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->field)) {
    query->insert(pair<string, string>("Field", *request->field));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainUsageData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainUsageDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUsageData(shared_ptr<DescribeDcdnDomainUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainUsageDataWithOptions(request, runtime);
}

DescribeDcdnDomainUvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUvDataWithOptions(shared_ptr<DescribeDcdnDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainUvData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainUvDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainUvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUvData(shared_ptr<DescribeDcdnDomainUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainUvDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketBpsDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainWebsocketBpsData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainWebsocketBpsDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainWebsocketBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketBpsData(shared_ptr<DescribeDcdnDomainWebsocketBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainWebsocketHttpCodeData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainWebsocketHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainWebsocketHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketHttpCodeData(shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnDomainWebsocketTrafficData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnDomainWebsocketTrafficDataResponse(callApi(params, req, runtime));
}

DescribeDcdnDomainWebsocketTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketTrafficData(shared_ptr<DescribeDcdnDomainWebsocketTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketTrafficDataWithOptions(request, runtime);
}

DescribeDcdnErUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnErUsageDataWithOptions(shared_ptr<DescribeDcdnErUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routineID)) {
    query->insert(pair<string, string>("RoutineID", *request->routineID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnErUsageData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnErUsageDataResponse(callApi(params, req, runtime));
}

DescribeDcdnErUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnErUsageData(shared_ptr<DescribeDcdnErUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnErUsageDataWithOptions(request, runtime);
}

DescribeDcdnFullDomainsBlockIPConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnFullDomainsBlockIPConfigWithOptions(shared_ptr<DescribeDcdnFullDomainsBlockIPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnFullDomainsBlockIPConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnFullDomainsBlockIPConfigResponse(callApi(params, req, runtime));
}

DescribeDcdnFullDomainsBlockIPConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnFullDomainsBlockIPConfig(shared_ptr<DescribeDcdnFullDomainsBlockIPConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnFullDomainsBlockIPConfigWithOptions(request, runtime);
}

DescribeDcdnFullDomainsBlockIPHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnFullDomainsBlockIPHistoryWithOptions(shared_ptr<DescribeDcdnFullDomainsBlockIPHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->IPList)) {
    body->insert(pair<string, string>("IPList", *request->IPList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnFullDomainsBlockIPHistory"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnFullDomainsBlockIPHistoryResponse(callApi(params, req, runtime));
}

DescribeDcdnFullDomainsBlockIPHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnFullDomainsBlockIPHistory(shared_ptr<DescribeDcdnFullDomainsBlockIPHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnFullDomainsBlockIPHistoryWithOptions(request, runtime);
}

DescribeDcdnHttpsDomainListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnHttpsDomainListWithOptions(shared_ptr<DescribeDcdnHttpsDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnHttpsDomainList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnHttpsDomainListResponse(callApi(params, req, runtime));
}

DescribeDcdnHttpsDomainListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnHttpsDomainList(shared_ptr<DescribeDcdnHttpsDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnHttpsDomainListWithOptions(request, runtime);
}

DescribeDcdnIpInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpInfoWithOptions(shared_ptr<DescribeDcdnIpInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->IP)) {
    query->insert(pair<string, string>("IP", *request->IP));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnIpInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnIpInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnIpInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpInfo(shared_ptr<DescribeDcdnIpInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpInfoWithOptions(request, runtime);
}

DescribeDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainConfigsWithOptions(shared_ptr<DescribeDcdnIpaDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnIpaDomainConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnIpaDomainConfigsResponse(callApi(params, req, runtime));
}

DescribeDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainConfigs(shared_ptr<DescribeDcdnIpaDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaDomainConfigsWithOptions(request, runtime);
}

DescribeDcdnIpaDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainDetailWithOptions(shared_ptr<DescribeDcdnIpaDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnIpaDomainDetail"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnIpaDomainDetailResponse(callApi(params, req, runtime));
}

DescribeDcdnIpaDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainDetail(shared_ptr<DescribeDcdnIpaDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaDomainDetailWithOptions(request, runtime);
}

DescribeDcdnIpaServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaServiceWithOptions(shared_ptr<DescribeDcdnIpaServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnIpaService"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnIpaServiceResponse(callApi(params, req, runtime));
}

DescribeDcdnIpaServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaService(shared_ptr<DescribeDcdnIpaServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaServiceWithOptions(request, runtime);
}

DescribeDcdnIpaUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaUserDomainsWithOptions(shared_ptr<DescribeDcdnIpaUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkDomainShow)) {
    query->insert(pair<string, bool>("CheckDomainShow", *request->checkDomainShow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSearchType)) {
    query->insert(pair<string, string>("DomainSearchType", *request->domainSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainStatus)) {
    query->insert(pair<string, string>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->funcFilter)) {
    query->insert(pair<string, string>("FuncFilter", *request->funcFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->funcId)) {
    query->insert(pair<string, string>("FuncId", *request->funcId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDcdnIpaUserDomainsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDcdnIpaUserDomainsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnIpaUserDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnIpaUserDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnIpaUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaUserDomains(shared_ptr<DescribeDcdnIpaUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaUserDomainsWithOptions(request, runtime);
}

DescribeDcdnL2VipsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnL2VipsWithOptions(shared_ptr<DescribeDcdnL2VipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnL2Vips"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnL2VipsResponse(callApi(params, req, runtime));
}

DescribeDcdnL2VipsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnL2Vips(shared_ptr<DescribeDcdnL2VipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnL2VipsWithOptions(request, runtime);
}

DescribeDcdnRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRealTimeDeliveryFieldWithOptions(shared_ptr<DescribeDcdnRealTimeDeliveryFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnRealTimeDeliveryField"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnRealTimeDeliveryFieldResponse(callApi(params, req, runtime));
}

DescribeDcdnRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRealTimeDeliveryField(shared_ptr<DescribeDcdnRealTimeDeliveryFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRealTimeDeliveryFieldWithOptions(request, runtime);
}

DescribeDcdnRefreshQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshQuotaWithOptions(shared_ptr<DescribeDcdnRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnRefreshQuota"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnRefreshQuotaResponse(callApi(params, req, runtime));
}

DescribeDcdnRefreshQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshQuota(shared_ptr<DescribeDcdnRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshQuotaWithOptions(request, runtime);
}

DescribeDcdnRefreshTaskByIdResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTaskByIdWithOptions(shared_ptr<DescribeDcdnRefreshTaskByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnRefreshTaskById"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnRefreshTaskByIdResponse(callApi(params, req, runtime));
}

DescribeDcdnRefreshTaskByIdResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTaskById(shared_ptr<DescribeDcdnRefreshTaskByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshTaskByIdWithOptions(request, runtime);
}

DescribeDcdnRefreshTasksResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTasksWithOptions(shared_ptr<DescribeDcdnRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectPath)) {
    query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnRefreshTasks"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnRefreshTasksResponse(callApi(params, req, runtime));
}

DescribeDcdnRefreshTasksResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTasks(shared_ptr<DescribeDcdnRefreshTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshTasksWithOptions(request, runtime);
}

DescribeDcdnRegionAndIspResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRegionAndIspWithOptions(shared_ptr<DescribeDcdnRegionAndIspRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnRegionAndIsp"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnRegionAndIspResponse(callApi(params, req, runtime));
}

DescribeDcdnRegionAndIspResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRegionAndIsp(shared_ptr<DescribeDcdnRegionAndIspRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRegionAndIspWithOptions(request, runtime);
}

DescribeDcdnReportResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportWithOptions(shared_ptr<DescribeDcdnReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpCode)) {
    query->insert(pair<string, string>("HttpCode", *request->httpCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isOverseas)) {
    query->insert(pair<string, string>("IsOverseas", *request->isOverseas));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reportId)) {
    query->insert(pair<string, long>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnReport"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnReportResponse(callApi(params, req, runtime));
}

DescribeDcdnReportResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReport(shared_ptr<DescribeDcdnReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnReportWithOptions(request, runtime);
}

DescribeDcdnReportListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportListWithOptions(shared_ptr<DescribeDcdnReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->reportId)) {
    query->insert(pair<string, long>("ReportId", *request->reportId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnReportList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnReportListResponse(callApi(params, req, runtime));
}

DescribeDcdnReportListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportList(shared_ptr<DescribeDcdnReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnReportListWithOptions(request, runtime);
}

DescribeDcdnSLSRealtimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSLSRealtimeLogDeliveryWithOptions(shared_ptr<DescribeDcdnSLSRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSLSRealtimeLogDelivery"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSLSRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DescribeDcdnSLSRealtimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSLSRealtimeLogDelivery(shared_ptr<DescribeDcdnSLSRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSLSRealtimeLogDeliveryWithOptions(request, runtime);
}

DescribeDcdnSMCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSMCertificateDetailWithOptions(shared_ptr<DescribeDcdnSMCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSMCertificateDetail"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSMCertificateDetailResponse(callApi(params, req, runtime));
}

DescribeDcdnSMCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSMCertificateDetail(shared_ptr<DescribeDcdnSMCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSMCertificateDetailWithOptions(request, runtime);
}

DescribeDcdnSMCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSMCertificateListWithOptions(shared_ptr<DescribeDcdnSMCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSMCertificateList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSMCertificateListResponse(callApi(params, req, runtime));
}

DescribeDcdnSMCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSMCertificateList(shared_ptr<DescribeDcdnSMCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSMCertificateListWithOptions(request, runtime);
}

DescribeDcdnSecFuncInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecFuncInfoWithOptions(shared_ptr<DescribeDcdnSecFuncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secFuncType)) {
    query->insert(pair<string, string>("SecFuncType", *request->secFuncType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSecFuncInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSecFuncInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnSecFuncInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecFuncInfo(shared_ptr<DescribeDcdnSecFuncInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSecFuncInfoWithOptions(request, runtime);
}

DescribeDcdnSecSpecInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecSpecInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSecSpecInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSecSpecInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnSecSpecInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecSpecInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSecSpecInfoWithOptions(runtime);
}

DescribeDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnServiceWithOptions(shared_ptr<DescribeDcdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnService"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnServiceResponse(callApi(params, req, runtime));
}

DescribeDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnService(shared_ptr<DescribeDcdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnServiceWithOptions(request, runtime);
}

DescribeDcdnStagingIpResponse Alibabacloud_Dcdn20180115::Client::describeDcdnStagingIpWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnStagingIp"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnStagingIpResponse(callApi(params, req, runtime));
}

DescribeDcdnStagingIpResponse Alibabacloud_Dcdn20180115::Client::describeDcdnStagingIp() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnStagingIpWithOptions(runtime);
}

DescribeDcdnSubListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSubListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnSubList"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnSubListResponse(callApi(params, req, runtime));
}

DescribeDcdnSubListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSubList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSubListWithOptions(runtime);
}

DescribeDcdnTagResourcesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTagResourcesWithOptions(shared_ptr<DescribeDcdnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDcdnTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDcdnTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnTagResources"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnTagResourcesResponse(callApi(params, req, runtime));
}

DescribeDcdnTagResourcesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTagResources(shared_ptr<DescribeDcdnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnTagResourcesWithOptions(request, runtime);
}

DescribeDcdnTopDomainsByFlowResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTopDomainsByFlowWithOptions(shared_ptr<DescribeDcdnTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnTopDomainsByFlow"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnTopDomainsByFlowResponse(callApi(params, req, runtime));
}

DescribeDcdnTopDomainsByFlowResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTopDomainsByFlow(shared_ptr<DescribeDcdnTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnTopDomainsByFlowWithOptions(request, runtime);
}

DescribeDcdnUserBillHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillHistoryWithOptions(shared_ptr<DescribeDcdnUserBillHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserBillHistory"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserBillHistoryResponse(callApi(params, req, runtime));
}

DescribeDcdnUserBillHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillHistory(shared_ptr<DescribeDcdnUserBillHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserBillHistoryWithOptions(request, runtime);
}

DescribeDcdnUserBillTypeResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillTypeWithOptions(shared_ptr<DescribeDcdnUserBillTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserBillType"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserBillTypeResponse(callApi(params, req, runtime));
}

DescribeDcdnUserBillTypeResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillType(shared_ptr<DescribeDcdnUserBillTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserBillTypeWithOptions(request, runtime);
}

DescribeDcdnUserCertificateExpireCountResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserCertificateExpireCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserCertificateExpireCount"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserCertificateExpireCountResponse(callApi(params, req, runtime));
}

DescribeDcdnUserCertificateExpireCountResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserCertificateExpireCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserCertificateExpireCountWithOptions(runtime);
}

DescribeDcdnUserConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserConfigsWithOptions(shared_ptr<DescribeDcdnUserConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserConfigs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserConfigsResponse(callApi(params, req, runtime));
}

DescribeDcdnUserConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserConfigs(shared_ptr<DescribeDcdnUserConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserConfigsWithOptions(request, runtime);
}

DescribeDcdnUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsWithOptions(shared_ptr<DescribeDcdnUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeEndTime)) {
    query->insert(pair<string, string>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeStartTime)) {
    query->insert(pair<string, string>("ChangeStartTime", *request->changeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkDomainShow)) {
    query->insert(pair<string, bool>("CheckDomainShow", *request->checkDomainShow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverage)) {
    query->insert(pair<string, string>("Coverage", *request->coverage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSearchType)) {
    query->insert(pair<string, string>("DomainSearchType", *request->domainSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainStatus)) {
    query->insert(pair<string, string>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDcdnUserDomainsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDcdnUserDomainsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomains(shared_ptr<DescribeDcdnUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserDomainsWithOptions(request, runtime);
}

DescribeDcdnUserDomainsByFuncResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsByFuncWithOptions(shared_ptr<DescribeDcdnUserDomainsByFuncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->funcFilter)) {
    query->insert(pair<string, string>("FuncFilter", *request->funcFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->funcId)) {
    query->insert(pair<string, long>("FuncId", *request->funcId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserDomainsByFunc"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserDomainsByFuncResponse(callApi(params, req, runtime));
}

DescribeDcdnUserDomainsByFuncResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsByFunc(shared_ptr<DescribeDcdnUserDomainsByFuncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserDomainsByFuncWithOptions(request, runtime);
}

DescribeDcdnUserQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserQuotaWithOptions(shared_ptr<DescribeDcdnUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserQuota"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserQuotaResponse(callApi(params, req, runtime));
}

DescribeDcdnUserQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserQuota(shared_ptr<DescribeDcdnUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserQuotaWithOptions(request, runtime);
}

DescribeDcdnUserRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserRealTimeDeliveryFieldWithOptions(shared_ptr<DescribeDcdnUserRealTimeDeliveryFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserRealTimeDeliveryField"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserRealTimeDeliveryFieldResponse(callApi(params, req, runtime));
}

DescribeDcdnUserRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserRealTimeDeliveryField(shared_ptr<DescribeDcdnUserRealTimeDeliveryFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserRealTimeDeliveryFieldWithOptions(request, runtime);
}

DescribeDcdnUserResourcePackageResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserResourcePackageWithOptions(shared_ptr<DescribeDcdnUserResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserResourcePackage"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserResourcePackageResponse(callApi(params, req, runtime));
}

DescribeDcdnUserResourcePackageResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserResourcePackage(shared_ptr<DescribeDcdnUserResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserResourcePackageWithOptions(request, runtime);
}

DescribeDcdnUserSecDropResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropWithOptions(shared_ptr<DescribeDcdnUserSecDropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    query->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secFunc)) {
    query->insert(pair<string, string>("SecFunc", *request->secFunc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserSecDrop"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserSecDropResponse(callApi(params, req, runtime));
}

DescribeDcdnUserSecDropResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDrop(shared_ptr<DescribeDcdnUserSecDropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserSecDropWithOptions(request, runtime);
}

DescribeDcdnUserSecDropByMinuteResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropByMinuteWithOptions(shared_ptr<DescribeDcdnUserSecDropByMinuteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->object)) {
    query->insert(pair<string, string>("Object", *request->object));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secFunc)) {
    query->insert(pair<string, string>("SecFunc", *request->secFunc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserSecDropByMinute"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserSecDropByMinuteResponse(callApi(params, req, runtime));
}

DescribeDcdnUserSecDropByMinuteResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropByMinute(shared_ptr<DescribeDcdnUserSecDropByMinuteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserSecDropByMinuteWithOptions(request, runtime);
}

DescribeDcdnUserTagsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserTagsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnUserTags"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnUserTagsResponse(callApi(params, req, runtime));
}

DescribeDcdnUserTagsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserTags() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserTagsWithOptions(runtime);
}

DescribeDcdnVerifyContentResponse Alibabacloud_Dcdn20180115::Client::describeDcdnVerifyContentWithOptions(shared_ptr<DescribeDcdnVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnVerifyContent"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnVerifyContentResponse(callApi(params, req, runtime));
}

DescribeDcdnVerifyContentResponse Alibabacloud_Dcdn20180115::Client::describeDcdnVerifyContent(shared_ptr<DescribeDcdnVerifyContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnVerifyContentWithOptions(request, runtime);
}

DescribeDcdnWafDomainResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomainWithOptions(shared_ptr<DescribeDcdnWafDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafDomainResponse(callApi(params, req, runtime));
}

DescribeDcdnWafDomainResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomain(shared_ptr<DescribeDcdnWafDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafDomainWithOptions(request, runtime);
}

DescribeDcdnWafDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomainDetailWithOptions(shared_ptr<DescribeDcdnWafDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafDomainDetail"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafDomainDetailResponse(callApi(params, req, runtime));
}

DescribeDcdnWafDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomainDetail(shared_ptr<DescribeDcdnWafDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafDomainDetailWithOptions(request, runtime);
}

DescribeDcdnWafDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomainsWithOptions(shared_ptr<DescribeDcdnWafDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgs)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnWafDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomains(shared_ptr<DescribeDcdnWafDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafDomainsWithOptions(request, runtime);
}

DescribeDcdnWafFilterInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafFilterInfoWithOptions(shared_ptr<DescribeDcdnWafFilterInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScenes)) {
    query->insert(pair<string, string>("DefenseScenes", *request->defenseScenes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafFilterInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafFilterInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnWafFilterInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafFilterInfo(shared_ptr<DescribeDcdnWafFilterInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafFilterInfoWithOptions(request, runtime);
}

DescribeDcdnWafGeoInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafGeoInfoWithOptions(shared_ptr<DescribeDcdnWafGeoInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafGeoInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafGeoInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnWafGeoInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafGeoInfo(shared_ptr<DescribeDcdnWafGeoInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafGeoInfoWithOptions(request, runtime);
}

DescribeDcdnWafLogsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafLogsWithOptions(shared_ptr<DescribeDcdnWafLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafLogs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafLogsResponse(callApi(params, req, runtime));
}

DescribeDcdnWafLogsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafLogs(shared_ptr<DescribeDcdnWafLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafLogsWithOptions(request, runtime);
}

DescribeDcdnWafPoliciesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPoliciesWithOptions(shared_ptr<DescribeDcdnWafPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgs)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafPolicies"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafPoliciesResponse(callApi(params, req, runtime));
}

DescribeDcdnWafPoliciesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicies(shared_ptr<DescribeDcdnWafPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafPoliciesWithOptions(request, runtime);
}

DescribeDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicyWithOptions(shared_ptr<DescribeDcdnWafPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafPolicy"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafPolicyResponse(callApi(params, req, runtime));
}

DescribeDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicy(shared_ptr<DescribeDcdnWafPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafPolicyWithOptions(request, runtime);
}

DescribeDcdnWafPolicyDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicyDomainsWithOptions(shared_ptr<DescribeDcdnWafPolicyDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafPolicyDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafPolicyDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnWafPolicyDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicyDomains(shared_ptr<DescribeDcdnWafPolicyDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafPolicyDomainsWithOptions(request, runtime);
}

DescribeDcdnWafPolicyValidDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicyValidDomainsWithOptions(shared_ptr<DescribeDcdnWafPolicyValidDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    query->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameLike)) {
    query->insert(pair<string, string>("DomainNameLike", *request->domainNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafPolicyValidDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafPolicyValidDomainsResponse(callApi(params, req, runtime));
}

DescribeDcdnWafPolicyValidDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafPolicyValidDomains(shared_ptr<DescribeDcdnWafPolicyValidDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafPolicyValidDomainsWithOptions(request, runtime);
}

DescribeDcdnWafRuleResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafRuleWithOptions(shared_ptr<DescribeDcdnWafRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafRule"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafRuleResponse(callApi(params, req, runtime));
}

DescribeDcdnWafRuleResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafRule(shared_ptr<DescribeDcdnWafRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafRuleWithOptions(request, runtime);
}

DescribeDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafRulesWithOptions(shared_ptr<DescribeDcdnWafRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgs)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafRules"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafRulesResponse(callApi(params, req, runtime));
}

DescribeDcdnWafRulesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafRules(shared_ptr<DescribeDcdnWafRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafRulesWithOptions(request, runtime);
}

DescribeDcdnWafScenesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafScenesWithOptions(shared_ptr<DescribeDcdnWafScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScenes)) {
    query->insert(pair<string, string>("DefenseScenes", *request->defenseScenes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafScenes"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafScenesResponse(callApi(params, req, runtime));
}

DescribeDcdnWafScenesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafScenes(shared_ptr<DescribeDcdnWafScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafScenesWithOptions(request, runtime);
}

DescribeDcdnWafServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafServiceWithOptions(shared_ptr<DescribeDcdnWafServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafService"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafServiceResponse(callApi(params, req, runtime));
}

DescribeDcdnWafServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafService(shared_ptr<DescribeDcdnWafServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafServiceWithOptions(request, runtime);
}

DescribeDcdnWafSpecInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafSpecInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafSpecInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafSpecInfoResponse(callApi(params, req, runtime));
}

DescribeDcdnWafSpecInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafSpecInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafSpecInfoWithOptions(runtime);
}

DescribeDcdnWafUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafUsageDataWithOptions(shared_ptr<DescribeDcdnWafUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnWafUsageData"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnWafUsageDataResponse(callApi(params, req, runtime));
}

DescribeDcdnWafUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafUsageData(shared_ptr<DescribeDcdnWafUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafUsageDataWithOptions(request, runtime);
}

DescribeDcdnsecServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnsecServiceWithOptions(shared_ptr<DescribeDcdnsecServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDcdnsecService"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDcdnsecServiceResponse(callApi(params, req, runtime));
}

DescribeDcdnsecServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnsecService(shared_ptr<DescribeDcdnsecServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnsecServiceWithOptions(request, runtime);
}

DescribeRDDomainConfigResponse Alibabacloud_Dcdn20180115::Client::describeRDDomainConfigWithOptions(shared_ptr<DescribeRDDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRDDomainConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRDDomainConfigResponse(callApi(params, req, runtime));
}

DescribeRDDomainConfigResponse Alibabacloud_Dcdn20180115::Client::describeRDDomainConfig(shared_ptr<DescribeRDDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRDDomainConfigWithOptions(request, runtime);
}

DescribeRDDomainsResponse Alibabacloud_Dcdn20180115::Client::describeRDDomainsWithOptions(shared_ptr<DescribeRDDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRDDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRDDomainsResponse(callApi(params, req, runtime));
}

DescribeRDDomainsResponse Alibabacloud_Dcdn20180115::Client::describeRDDomains(shared_ptr<DescribeRDDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRDDomainsWithOptions(request, runtime);
}

DescribeRoutineResponse Alibabacloud_Dcdn20180115::Client::describeRoutineWithOptions(shared_ptr<DescribeRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoutine"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoutineResponse(callApi(params, req, runtime));
}

DescribeRoutineResponse Alibabacloud_Dcdn20180115::Client::describeRoutine(shared_ptr<DescribeRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineWithOptions(request, runtime);
}

DescribeRoutineCanaryEnvsResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCanaryEnvsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoutineCanaryEnvs"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoutineCanaryEnvsResponse(callApi(params, req, runtime));
}

DescribeRoutineCanaryEnvsResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCanaryEnvs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineCanaryEnvsWithOptions(runtime);
}

DescribeRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCodeRevisionWithOptions(shared_ptr<DescribeRoutineCodeRevisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectCodeRevision)) {
    body->insert(pair<string, string>("SelectCodeRevision", *request->selectCodeRevision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoutineCodeRevision"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoutineCodeRevisionResponse(callApi(params, req, runtime));
}

DescribeRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCodeRevision(shared_ptr<DescribeRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineCodeRevisionWithOptions(request, runtime);
}

DescribeRoutineSpecResponse Alibabacloud_Dcdn20180115::Client::describeRoutineSpecWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoutineSpec"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoutineSpecResponse(callApi(params, req, runtime));
}

DescribeRoutineSpecResponse Alibabacloud_Dcdn20180115::Client::describeRoutineSpec() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineSpecWithOptions(runtime);
}

DescribeRoutineUserInfoResponse Alibabacloud_Dcdn20180115::Client::describeRoutineUserInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoutineUserInfo"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoutineUserInfoResponse(callApi(params, req, runtime));
}

DescribeRoutineUserInfoResponse Alibabacloud_Dcdn20180115::Client::describeRoutineUserInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineUserInfoWithOptions(runtime);
}

DescribeUserDcdnIpaStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnIpaStatusWithOptions(shared_ptr<DescribeUserDcdnIpaStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserDcdnIpaStatus"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserDcdnIpaStatusResponse(callApi(params, req, runtime));
}

DescribeUserDcdnIpaStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnIpaStatus(shared_ptr<DescribeUserDcdnIpaStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDcdnIpaStatusWithOptions(request, runtime);
}

DescribeUserDcdnStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnStatusWithOptions(shared_ptr<DescribeUserDcdnStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserDcdnStatus"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserDcdnStatusResponse(callApi(params, req, runtime));
}

DescribeUserDcdnStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnStatus(shared_ptr<DescribeUserDcdnStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDcdnStatusWithOptions(request, runtime);
}

DescribeUserErStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserErStatusWithOptions(shared_ptr<DescribeUserErStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserErStatus"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserErStatusResponse(callApi(params, req, runtime));
}

DescribeUserErStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserErStatus(shared_ptr<DescribeUserErStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserErStatusWithOptions(request, runtime);
}

DescribeUserLogserviceStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserLogserviceStatusWithOptions(shared_ptr<DescribeUserLogserviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserLogserviceStatus"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserLogserviceStatusResponse(callApi(params, req, runtime));
}

DescribeUserLogserviceStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserLogserviceStatus(shared_ptr<DescribeUserLogserviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserLogserviceStatusWithOptions(request, runtime);
}

EditRoutineConfResponse Alibabacloud_Dcdn20180115::Client::editRoutineConfWithOptions(shared_ptr<EditRoutineConfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EditRoutineConfShrinkRequest> request = make_shared<EditRoutineConfShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envConf)) {
    request->envConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envConf, make_shared<string>("EnvConf"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envConfShrink)) {
    body->insert(pair<string, string>("EnvConf", *request->envConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditRoutineConf"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditRoutineConfResponse(callApi(params, req, runtime));
}

EditRoutineConfResponse Alibabacloud_Dcdn20180115::Client::editRoutineConf(shared_ptr<EditRoutineConfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editRoutineConfWithOptions(request, runtime);
}

GetDcdnKvResponse Alibabacloud_Dcdn20180115::Client::getDcdnKvWithOptions(shared_ptr<GetDcdnKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDcdnKv"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDcdnKvResponse(callApi(params, req, runtime));
}

GetDcdnKvResponse Alibabacloud_Dcdn20180115::Client::getDcdnKv(shared_ptr<GetDcdnKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDcdnKvWithOptions(request, runtime);
}

ListDcdnRealTimeDeliveryProjectResponse Alibabacloud_Dcdn20180115::Client::listDcdnRealTimeDeliveryProjectWithOptions(shared_ptr<ListDcdnRealTimeDeliveryProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDcdnRealTimeDeliveryProject"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDcdnRealTimeDeliveryProjectResponse(callApi(params, req, runtime));
}

ListDcdnRealTimeDeliveryProjectResponse Alibabacloud_Dcdn20180115::Client::listDcdnRealTimeDeliveryProject(shared_ptr<ListDcdnRealTimeDeliveryProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDcdnRealTimeDeliveryProjectWithOptions(request, runtime);
}

ModifyDCdnDomainSchdmByPropertyResponse Alibabacloud_Dcdn20180115::Client::modifyDCdnDomainSchdmByPropertyWithOptions(shared_ptr<ModifyDCdnDomainSchdmByPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->property)) {
    query->insert(pair<string, string>("Property", *request->property));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDCdnDomainSchdmByProperty"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDCdnDomainSchdmByPropertyResponse(callApi(params, req, runtime));
}

ModifyDCdnDomainSchdmByPropertyResponse Alibabacloud_Dcdn20180115::Client::modifyDCdnDomainSchdmByProperty(shared_ptr<ModifyDCdnDomainSchdmByPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDCdnDomainSchdmByPropertyWithOptions(request, runtime);
}

ModifyDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafPolicyWithOptions(shared_ptr<ModifyDcdnWafPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    body->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyStatus)) {
    body->insert(pair<string, string>("PolicyStatus", *request->policyStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDcdnWafPolicy"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDcdnWafPolicyResponse(callApi(params, req, runtime));
}

ModifyDcdnWafPolicyResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafPolicy(shared_ptr<ModifyDcdnWafPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDcdnWafPolicyWithOptions(request, runtime);
}

ModifyDcdnWafPolicyDomainsResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafPolicyDomainsWithOptions(shared_ptr<ModifyDcdnWafPolicyDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bindDomains)) {
    body->insert(pair<string, string>("BindDomains", *request->bindDomains));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->method)) {
    body->insert(pair<string, long>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    body->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unbindDomains)) {
    body->insert(pair<string, string>("UnbindDomains", *request->unbindDomains));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDcdnWafPolicyDomains"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDcdnWafPolicyDomainsResponse(callApi(params, req, runtime));
}

ModifyDcdnWafPolicyDomainsResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafPolicyDomains(shared_ptr<ModifyDcdnWafPolicyDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDcdnWafPolicyDomainsWithOptions(request, runtime);
}

ModifyDcdnWafRuleResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafRuleWithOptions(shared_ptr<ModifyDcdnWafRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleConfig)) {
    body->insert(pair<string, string>("RuleConfig", *request->ruleConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    body->insert(pair<string, string>("RuleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDcdnWafRule"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDcdnWafRuleResponse(callApi(params, req, runtime));
}

ModifyDcdnWafRuleResponse Alibabacloud_Dcdn20180115::Client::modifyDcdnWafRule(shared_ptr<ModifyDcdnWafRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDcdnWafRuleWithOptions(request, runtime);
}

OpenDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::openDcdnServiceWithOptions(shared_ptr<OpenDcdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billType)) {
    query->insert(pair<string, string>("BillType", *request->billType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->websocketBillType)) {
    query->insert(pair<string, string>("WebsocketBillType", *request->websocketBillType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenDcdnService"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenDcdnServiceResponse(callApi(params, req, runtime));
}

OpenDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::openDcdnService(shared_ptr<OpenDcdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openDcdnServiceWithOptions(request, runtime);
}

PreloadDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::preloadDcdnObjectCachesWithOptions(shared_ptr<PreloadDcdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->l2Preload)) {
    query->insert(pair<string, bool>("L2Preload", *request->l2Preload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectPath)) {
    query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withHeader)) {
    query->insert(pair<string, string>("WithHeader", *request->withHeader));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreloadDcdnObjectCaches"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreloadDcdnObjectCachesResponse(callApi(params, req, runtime));
}

PreloadDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::preloadDcdnObjectCaches(shared_ptr<PreloadDcdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadDcdnObjectCachesWithOptions(request, runtime);
}

PublishDcdnStagingConfigToProductionResponse Alibabacloud_Dcdn20180115::Client::publishDcdnStagingConfigToProductionWithOptions(shared_ptr<PublishDcdnStagingConfigToProductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishDcdnStagingConfigToProduction"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishDcdnStagingConfigToProductionResponse(callApi(params, req, runtime));
}

PublishDcdnStagingConfigToProductionResponse Alibabacloud_Dcdn20180115::Client::publishDcdnStagingConfigToProduction(shared_ptr<PublishDcdnStagingConfigToProductionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDcdnStagingConfigToProductionWithOptions(request, runtime);
}

PublishRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::publishRoutineCodeRevisionWithOptions(shared_ptr<PublishRoutineCodeRevisionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PublishRoutineCodeRevisionShrinkRequest> request = make_shared<PublishRoutineCodeRevisionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envs)) {
    request->envsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envs, make_shared<string>("Envs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envsShrink)) {
    body->insert(pair<string, string>("Envs", *request->envsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectCodeRevision)) {
    body->insert(pair<string, string>("SelectCodeRevision", *request->selectCodeRevision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishRoutineCodeRevision"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishRoutineCodeRevisionResponse(callApi(params, req, runtime));
}

PublishRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::publishRoutineCodeRevision(shared_ptr<PublishRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishRoutineCodeRevisionWithOptions(request, runtime);
}

PutDcdnKvResponse Alibabacloud_Dcdn20180115::Client::putDcdnKvWithOptions(shared_ptr<PutDcdnKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutDcdnKv"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutDcdnKvResponse(callApi(params, req, runtime));
}

PutDcdnKvResponse Alibabacloud_Dcdn20180115::Client::putDcdnKv(shared_ptr<PutDcdnKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDcdnKvWithOptions(request, runtime);
}

RefreshDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::refreshDcdnObjectCachesWithOptions(shared_ptr<RefreshDcdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectPath)) {
    query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshDcdnObjectCaches"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshDcdnObjectCachesResponse(callApi(params, req, runtime));
}

RefreshDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::refreshDcdnObjectCaches(shared_ptr<RefreshDcdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDcdnObjectCachesWithOptions(request, runtime);
}

RollbackDcdnStagingConfigResponse Alibabacloud_Dcdn20180115::Client::rollbackDcdnStagingConfigWithOptions(shared_ptr<RollbackDcdnStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackDcdnStagingConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackDcdnStagingConfigResponse(callApi(params, req, runtime));
}

RollbackDcdnStagingConfigResponse Alibabacloud_Dcdn20180115::Client::rollbackDcdnStagingConfig(shared_ptr<RollbackDcdnStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackDcdnStagingConfigWithOptions(request, runtime);
}

SetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCertificateWithOptions(shared_ptr<SetDcdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    query->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forceSet)) {
    query->insert(pair<string, string>("ForceSet", *request->forceSet));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPri)) {
    query->insert(pair<string, string>("SSLPri", *request->SSLPri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLProtocol)) {
    query->insert(pair<string, string>("SSLProtocol", *request->SSLProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPub)) {
    query->insert(pair<string, string>("SSLPub", *request->SSLPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDcdnDomainCertificate"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDcdnDomainCertificateResponse(callApi(params, req, runtime));
}

SetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCertificate(shared_ptr<SetDcdnDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainCertificateWithOptions(request, runtime);
}

SetDcdnDomainSMCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainSMCertificateWithOptions(shared_ptr<SetDcdnDomainSMCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLProtocol)) {
    query->insert(pair<string, string>("SSLProtocol", *request->SSLProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDcdnDomainSMCertificate"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDcdnDomainSMCertificateResponse(callApi(params, req, runtime));
}

SetDcdnDomainSMCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainSMCertificate(shared_ptr<SetDcdnDomainSMCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainSMCertificateWithOptions(request, runtime);
}

SetDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainStagingConfigWithOptions(shared_ptr<SetDcdnDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functions)) {
    query->insert(pair<string, string>("Functions", *request->functions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDcdnDomainStagingConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDcdnDomainStagingConfigResponse(callApi(params, req, runtime));
}

SetDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainStagingConfig(shared_ptr<SetDcdnDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainStagingConfigWithOptions(request, runtime);
}

SetDcdnFullDomainsBlockIPResponse Alibabacloud_Dcdn20180115::Client::setDcdnFullDomainsBlockIPWithOptions(shared_ptr<SetDcdnFullDomainsBlockIPRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->blockInterval)) {
    body->insert(pair<string, long>("BlockInterval", *request->blockInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->IPList)) {
    body->insert(pair<string, string>("IPList", *request->IPList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    body->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateType)) {
    body->insert(pair<string, string>("UpdateType", *request->updateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDcdnFullDomainsBlockIP"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDcdnFullDomainsBlockIPResponse(callApi(params, req, runtime));
}

SetDcdnFullDomainsBlockIPResponse Alibabacloud_Dcdn20180115::Client::setDcdnFullDomainsBlockIP(shared_ptr<SetDcdnFullDomainsBlockIPRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnFullDomainsBlockIPWithOptions(request, runtime);
}

SetDcdnUserConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnUserConfigWithOptions(shared_ptr<SetDcdnUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configs)) {
    query->insert(pair<string, string>("Configs", *request->configs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->functionId)) {
    query->insert(pair<string, long>("FunctionId", *request->functionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDcdnUserConfig"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDcdnUserConfigResponse(callApi(params, req, runtime));
}

SetDcdnUserConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnUserConfig(shared_ptr<SetDcdnUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnUserConfigWithOptions(request, runtime);
}

SetRoutineSubdomainResponse Alibabacloud_Dcdn20180115::Client::setRoutineSubdomainWithOptions(shared_ptr<SetRoutineSubdomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetRoutineSubdomainShrinkRequest> request = make_shared<SetRoutineSubdomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subdomains)) {
    request->subdomainsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subdomains, make_shared<string>("Subdomains"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subdomainsShrink)) {
    body->insert(pair<string, string>("Subdomains", *request->subdomainsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRoutineSubdomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRoutineSubdomainResponse(callApi(params, req, runtime));
}

SetRoutineSubdomainResponse Alibabacloud_Dcdn20180115::Client::setRoutineSubdomain(shared_ptr<SetRoutineSubdomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRoutineSubdomainWithOptions(request, runtime);
}

StartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnDomainWithOptions(shared_ptr<StartDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDcdnDomainResponse(callApi(params, req, runtime));
}

StartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnDomain(shared_ptr<StartDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDcdnDomainWithOptions(request, runtime);
}

StartDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnIpaDomainWithOptions(shared_ptr<StartDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDcdnIpaDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDcdnIpaDomainResponse(callApi(params, req, runtime));
}

StartDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnIpaDomain(shared_ptr<StartDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDcdnIpaDomainWithOptions(request, runtime);
}

StopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnDomainWithOptions(shared_ptr<StopDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDcdnDomainResponse(callApi(params, req, runtime));
}

StopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnDomain(shared_ptr<StopDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDcdnDomainWithOptions(request, runtime);
}

StopDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnIpaDomainWithOptions(shared_ptr<StopDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDcdnIpaDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDcdnIpaDomainResponse(callApi(params, req, runtime));
}

StopDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnIpaDomain(shared_ptr<StopDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDcdnIpaDomainWithOptions(request, runtime);
}

TagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::tagDcdnResourcesWithOptions(shared_ptr<TagDcdnResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagDcdnResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagDcdnResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagDcdnResources"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagDcdnResourcesResponse(callApi(params, req, runtime));
}

TagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::tagDcdnResources(shared_ptr<TagDcdnResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagDcdnResourcesWithOptions(request, runtime);
}

UntagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::untagDcdnResourcesWithOptions(shared_ptr<UntagDcdnResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagDcdnResources"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagDcdnResourcesResponse(callApi(params, req, runtime));
}

UntagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::untagDcdnResources(shared_ptr<UntagDcdnResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagDcdnResourcesWithOptions(request, runtime);
}

UpdateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDeliverTaskWithOptions(shared_ptr<UpdateDcdnDeliverTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliver)) {
    body->insert(pair<string, string>("Deliver", *request->deliver));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deliverId)) {
    body->insert(pair<string, long>("DeliverId", *request->deliverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reports)) {
    body->insert(pair<string, string>("Reports", *request->reports));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    body->insert(pair<string, string>("Schedule", *request->schedule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnDeliverTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnDeliverTaskResponse(callApi(params, req, runtime));
}

UpdateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDeliverTask(shared_ptr<UpdateDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnDeliverTaskWithOptions(request, runtime);
}

UpdateDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDomainWithOptions(shared_ptr<UpdateDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnDomainResponse(callApi(params, req, runtime));
}

UpdateDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDomain(shared_ptr<UpdateDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnDomainWithOptions(request, runtime);
}

UpdateDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnIpaDomainWithOptions(shared_ptr<UpdateDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnIpaDomain"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnIpaDomainResponse(callApi(params, req, runtime));
}

UpdateDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnIpaDomain(shared_ptr<UpdateDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnIpaDomainWithOptions(request, runtime);
}

UpdateDcdnSLSRealtimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSLSRealtimeLogDeliveryWithOptions(shared_ptr<UpdateDcdnSLSRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCenter)) {
    body->insert(pair<string, string>("DataCenter", *request->dataCenter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSLogStore)) {
    body->insert(pair<string, string>("SLSLogStore", *request->SLSLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSProject)) {
    body->insert(pair<string, string>("SLSProject", *request->SLSProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SLSRegion)) {
    body->insert(pair<string, string>("SLSRegion", *request->SLSRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingRate)) {
    body->insert(pair<string, string>("SamplingRate", *request->samplingRate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnSLSRealtimeLogDelivery"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnSLSRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

UpdateDcdnSLSRealtimeLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSLSRealtimeLogDelivery(shared_ptr<UpdateDcdnSLSRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnSLSRealtimeLogDeliveryWithOptions(request, runtime);
}

UpdateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSubTaskWithOptions(shared_ptr<UpdateDcdnSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportIds)) {
    body->insert(pair<string, string>("ReportIds", *request->reportIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnSubTask"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnSubTaskResponse(callApi(params, req, runtime));
}

UpdateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSubTask(shared_ptr<UpdateDcdnSubTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnSubTaskWithOptions(request, runtime);
}

UpdateDcdnUserRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::updateDcdnUserRealTimeDeliveryFieldWithOptions(shared_ptr<UpdateDcdnUserRealTimeDeliveryFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDcdnUserRealTimeDeliveryField"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDcdnUserRealTimeDeliveryFieldResponse(callApi(params, req, runtime));
}

UpdateDcdnUserRealTimeDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::updateDcdnUserRealTimeDeliveryField(shared_ptr<UpdateDcdnUserRealTimeDeliveryFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnUserRealTimeDeliveryFieldWithOptions(request, runtime);
}

UploadRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadRoutineCodeWithOptions(shared_ptr<UploadRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeDescription)) {
    body->insert(pair<string, string>("CodeDescription", *request->codeDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadRoutineCode"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadRoutineCodeResponse(callApi(params, req, runtime));
}

UploadRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadRoutineCode(shared_ptr<UploadRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadRoutineCodeWithOptions(request, runtime);
}

UploadStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadStagingRoutineCodeWithOptions(shared_ptr<UploadStagingRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeDescription)) {
    body->insert(pair<string, string>("CodeDescription", *request->codeDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadStagingRoutineCode"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadStagingRoutineCodeResponse(callApi(params, req, runtime));
}

UploadStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadStagingRoutineCode(shared_ptr<UploadStagingRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStagingRoutineCodeWithOptions(request, runtime);
}

VerifyDcdnDomainOwnerResponse Alibabacloud_Dcdn20180115::Client::verifyDcdnDomainOwnerWithOptions(shared_ptr<VerifyDcdnDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyType)) {
    query->insert(pair<string, string>("VerifyType", *request->verifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyDcdnDomainOwner"))},
    {"version", boost::any(string("2018-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyDcdnDomainOwnerResponse(callApi(params, req, runtime));
}

VerifyDcdnDomainOwnerResponse Alibabacloud_Dcdn20180115::Client::verifyDcdnDomainOwner(shared_ptr<VerifyDcdnDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyDcdnDomainOwnerWithOptions(request, runtime);
}

