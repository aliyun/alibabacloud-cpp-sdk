// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20211001.hpp>
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

using namespace Alibabacloud_Waf-openapi20211001;

Alibabacloud_Waf-openapi20211001::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Waf-openapi20211001::Client::getEndpoint(shared_ptr<string> productId,
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

ClearMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::clearMajorProtectionBlackIpWithOptions(shared_ptr<ClearMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearMajorProtectionBlackIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearMajorProtectionBlackIpResponse(callApi(params, req, runtime));
}

ClearMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::clearMajorProtectionBlackIp(shared_ptr<ClearMajorProtectionBlackIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearMajorProtectionBlackIpWithOptions(request, runtime);
}

CreateDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseResourceGroupWithOptions(shared_ptr<CreateDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addList)) {
    query->insert(pair<string, string>("AddList", *request->addList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDefenseResourceGroup"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDefenseResourceGroupResponse(callApi(params, req, runtime));
}

CreateDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseResourceGroup(shared_ptr<CreateDefenseResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDefenseResourceGroupWithOptions(request, runtime);
}

CreateDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseRuleWithOptions(shared_ptr<CreateDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    query->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    query->insert(pair<string, string>("Rules", *request->rules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDefenseRule"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDefenseRuleResponse(callApi(params, req, runtime));
}

CreateDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseRule(shared_ptr<CreateDefenseRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDefenseRuleWithOptions(request, runtime);
}

CreateDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseTemplateWithOptions(shared_ptr<CreateDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    query->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateOrigin)) {
    query->insert(pair<string, string>("TemplateOrigin", *request->templateOrigin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateStatus)) {
    query->insert(pair<string, long>("TemplateStatus", *request->templateStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDefenseTemplate"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDefenseTemplateResponse(callApi(params, req, runtime));
}

CreateDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::createDefenseTemplate(shared_ptr<CreateDefenseTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDefenseTemplateWithOptions(request, runtime);
}

CreateDomainResponse Alibabacloud_Waf-openapi20211001::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDomainShrinkRequest> request = make_shared<CreateDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDomainRequestListen>(tmpReq->listen)) {
    request->listenShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listen, make_shared<string>("Listen"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDomainRequestRedirect>(tmpReq->redirect)) {
    request->redirectShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->redirect, make_shared<string>("Redirect"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenShrink)) {
    query->insert(pair<string, string>("Listen", *request->listenShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectShrink)) {
    query->insert(pair<string, string>("Redirect", *request->redirectShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomain"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainResponse(callApi(params, req, runtime));
}

CreateDomainResponse Alibabacloud_Waf-openapi20211001::Client::createDomain(shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainWithOptions(request, runtime);
}

CreateMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::createMajorProtectionBlackIpWithOptions(shared_ptr<CreateMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredTime)) {
    query->insert(pair<string, long>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipList)) {
    query->insert(pair<string, string>("IpList", *request->ipList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMajorProtectionBlackIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMajorProtectionBlackIpResponse(callApi(params, req, runtime));
}

CreateMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::createMajorProtectionBlackIp(shared_ptr<CreateMajorProtectionBlackIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMajorProtectionBlackIpWithOptions(request, runtime);
}

CreateMemberAccountsResponse Alibabacloud_Waf-openapi20211001::Client::createMemberAccountsWithOptions(shared_ptr<CreateMemberAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->memberAccountIds)) {
    query->insert(pair<string, vector<string>>("MemberAccountIds", *request->memberAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMemberAccounts"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemberAccountsResponse(callApi(params, req, runtime));
}

CreateMemberAccountsResponse Alibabacloud_Waf-openapi20211001::Client::createMemberAccounts(shared_ptr<CreateMemberAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMemberAccountsWithOptions(request, runtime);
}

DeleteDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseResourceGroupWithOptions(shared_ptr<DeleteDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDefenseResourceGroup"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDefenseResourceGroupResponse(callApi(params, req, runtime));
}

DeleteDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseResourceGroup(shared_ptr<DeleteDefenseResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDefenseResourceGroupWithOptions(request, runtime);
}

DeleteDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseRuleWithOptions(shared_ptr<DeleteDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleIds)) {
    query->insert(pair<string, string>("RuleIds", *request->ruleIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDefenseRule"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDefenseRuleResponse(callApi(params, req, runtime));
}

DeleteDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseRule(shared_ptr<DeleteDefenseRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDefenseRuleWithOptions(request, runtime);
}

DeleteDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseTemplateWithOptions(shared_ptr<DeleteDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDefenseTemplate"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDefenseTemplateResponse(callApi(params, req, runtime));
}

DeleteDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::deleteDefenseTemplate(shared_ptr<DeleteDefenseTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDefenseTemplateWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_Waf-openapi20211001::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainId)) {
    query->insert(pair<string, string>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainResponse(callApi(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_Waf-openapi20211001::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DeleteMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::deleteMajorProtectionBlackIpWithOptions(shared_ptr<DeleteMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipList)) {
    query->insert(pair<string, string>("IpList", *request->ipList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMajorProtectionBlackIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMajorProtectionBlackIpResponse(callApi(params, req, runtime));
}

DeleteMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::deleteMajorProtectionBlackIp(shared_ptr<DeleteMajorProtectionBlackIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMajorProtectionBlackIpWithOptions(request, runtime);
}

DeleteMemberAccountResponse Alibabacloud_Waf-openapi20211001::Client::deleteMemberAccountWithOptions(shared_ptr<DeleteMemberAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberAccountId)) {
    query->insert(pair<string, string>("MemberAccountId", *request->memberAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMemberAccount"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMemberAccountResponse(callApi(params, req, runtime));
}

DeleteMemberAccountResponse Alibabacloud_Waf-openapi20211001::Client::deleteMemberAccount(shared_ptr<DeleteMemberAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMemberAccountWithOptions(request, runtime);
}

DescribeAccountDelegatedStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeAccountDelegatedStatusWithOptions(shared_ptr<DescribeAccountDelegatedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountDelegatedStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountDelegatedStatusResponse(callApi(params, req, runtime));
}

DescribeAccountDelegatedStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeAccountDelegatedStatus(shared_ptr<DescribeAccountDelegatedStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountDelegatedStatusWithOptions(request, runtime);
}

DescribeCertsResponse Alibabacloud_Waf-openapi20211001::Client::describeCertsWithOptions(shared_ptr<DescribeCertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCerts"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertsResponse(callApi(params, req, runtime));
}

DescribeCertsResponse Alibabacloud_Waf-openapi20211001::Client::describeCerts(shared_ptr<DescribeCertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertsWithOptions(request, runtime);
}

DescribeDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResourceGroupWithOptions(shared_ptr<DescribeDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseResourceGroup"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseResourceGroupResponse(callApi(params, req, runtime));
}

DescribeDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResourceGroup(shared_ptr<DescribeDefenseResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseResourceGroupWithOptions(request, runtime);
}

DescribeDefenseResourceTemplatesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResourceTemplatesWithOptions(shared_ptr<DescribeDefenseResourceTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseResourceTemplates"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseResourceTemplatesResponse(callApi(params, req, runtime));
}

DescribeDefenseResourceTemplatesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResourceTemplates(shared_ptr<DescribeDefenseResourceTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseResourceTemplatesWithOptions(request, runtime);
}

DescribeDefenseResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResourcesWithOptions(shared_ptr<DescribeDefenseResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDefenseResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDefenseResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseResources"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseResourcesResponse(callApi(params, req, runtime));
}

DescribeDefenseResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseResources(shared_ptr<DescribeDefenseResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseResourcesWithOptions(request, runtime);
}

DescribeDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseRuleWithOptions(shared_ptr<DescribeDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseRule"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseRuleResponse(callApi(params, req, runtime));
}

DescribeDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseRule(shared_ptr<DescribeDefenseRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseRuleWithOptions(request, runtime);
}

DescribeDefenseRulesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseRulesWithOptions(shared_ptr<DescribeDefenseRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseRules"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseRulesResponse(callApi(params, req, runtime));
}

DescribeDefenseRulesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseRules(shared_ptr<DescribeDefenseRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseRulesWithOptions(request, runtime);
}

DescribeDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseTemplateWithOptions(shared_ptr<DescribeDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseTemplate"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseTemplateResponse(callApi(params, req, runtime));
}

DescribeDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseTemplate(shared_ptr<DescribeDefenseTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseTemplateWithOptions(request, runtime);
}

DescribeDefenseTemplatesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseTemplatesWithOptions(shared_ptr<DescribeDefenseTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    query->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseSubScene)) {
    query->insert(pair<string, string>("DefenseSubScene", *request->defenseSubScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefenseTemplates"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefenseTemplatesResponse(callApi(params, req, runtime));
}

DescribeDefenseTemplatesResponse Alibabacloud_Waf-openapi20211001::Client::describeDefenseTemplates(shared_ptr<DescribeDefenseTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefenseTemplatesWithOptions(request, runtime);
}

DescribeDomainDNSRecordResponse Alibabacloud_Waf-openapi20211001::Client::describeDomainDNSRecordWithOptions(shared_ptr<DescribeDomainDNSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainDNSRecord"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainDNSRecordResponse(callApi(params, req, runtime));
}

DescribeDomainDNSRecordResponse Alibabacloud_Waf-openapi20211001::Client::describeDomainDNSRecord(shared_ptr<DescribeDomainDNSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainDNSRecordWithOptions(request, runtime);
}

DescribeDomainDetailResponse Alibabacloud_Waf-openapi20211001::Client::describeDomainDetailWithOptions(shared_ptr<DescribeDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainDetail"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainDetailResponse(callApi(params, req, runtime));
}

DescribeDomainDetailResponse Alibabacloud_Waf-openapi20211001::Client::describeDomainDetail(shared_ptr<DescribeDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainDetailWithOptions(request, runtime);
}

DescribeDomainsResponse Alibabacloud_Waf-openapi20211001::Client::describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backend)) {
    query->insert(pair<string, string>("Backend", *request->backend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDomainsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDomainsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomains"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainsResponse(callApi(params, req, runtime));
}

DescribeDomainsResponse Alibabacloud_Waf-openapi20211001::Client::describeDomains(shared_ptr<DescribeDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainsWithOptions(request, runtime);
}

DescribeFlowChartResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowChartWithOptions(shared_ptr<DescribeFlowChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowChart"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowChartResponse(callApi(params, req, runtime));
}

DescribeFlowChartResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowChart(shared_ptr<DescribeFlowChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowChartWithOptions(request, runtime);
}

DescribeFlowTopResourceResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowTopResourceWithOptions(shared_ptr<DescribeFlowTopResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowTopResource"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowTopResourceResponse(callApi(params, req, runtime));
}

DescribeFlowTopResourceResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowTopResource(shared_ptr<DescribeFlowTopResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowTopResourceWithOptions(request, runtime);
}

DescribeFlowTopUrlResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowTopUrlWithOptions(shared_ptr<DescribeFlowTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowTopUrl"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowTopUrlResponse(callApi(params, req, runtime));
}

DescribeFlowTopUrlResponse Alibabacloud_Waf-openapi20211001::Client::describeFlowTopUrl(shared_ptr<DescribeFlowTopUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowTopUrlWithOptions(request, runtime);
}

DescribeHybridCloudGroupsResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudGroupsWithOptions(shared_ptr<DescribeHybridCloudGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clusterId)) {
    query->insert(pair<string, long>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterProxyType)) {
    query->insert(pair<string, string>("ClusterProxyType", *request->clusterProxyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupName)) {
    query->insert(pair<string, long>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHybridCloudGroups"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHybridCloudGroupsResponse(callApi(params, req, runtime));
}

DescribeHybridCloudGroupsResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudGroups(shared_ptr<DescribeHybridCloudGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHybridCloudGroupsWithOptions(request, runtime);
}

DescribeHybridCloudResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudResourcesWithOptions(shared_ptr<DescribeHybridCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backend)) {
    query->insert(pair<string, string>("Backend", *request->backend));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cnameEnabled)) {
    query->insert(pair<string, bool>("CnameEnabled", *request->cnameEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHybridCloudResources"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHybridCloudResourcesResponse(callApi(params, req, runtime));
}

DescribeHybridCloudResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudResources(shared_ptr<DescribeHybridCloudResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHybridCloudResourcesWithOptions(request, runtime);
}

DescribeHybridCloudUserResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudUserWithOptions(shared_ptr<DescribeHybridCloudUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHybridCloudUser"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHybridCloudUserResponse(callApi(params, req, runtime));
}

DescribeHybridCloudUserResponse Alibabacloud_Waf-openapi20211001::Client::describeHybridCloudUser(shared_ptr<DescribeHybridCloudUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHybridCloudUserWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceResponse(callApi(params, req, runtime));
}

DescribeInstanceResponse Alibabacloud_Waf-openapi20211001::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeMajorProtectionBlackIpsResponse Alibabacloud_Waf-openapi20211001::Client::describeMajorProtectionBlackIpsWithOptions(shared_ptr<DescribeMajorProtectionBlackIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipLike)) {
    query->insert(pair<string, string>("IpLike", *request->ipLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMajorProtectionBlackIps"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMajorProtectionBlackIpsResponse(callApi(params, req, runtime));
}

DescribeMajorProtectionBlackIpsResponse Alibabacloud_Waf-openapi20211001::Client::describeMajorProtectionBlackIps(shared_ptr<DescribeMajorProtectionBlackIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMajorProtectionBlackIpsWithOptions(request, runtime);
}

DescribeMemberAccountsResponse Alibabacloud_Waf-openapi20211001::Client::describeMemberAccountsWithOptions(shared_ptr<DescribeMemberAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountStatus)) {
    query->insert(pair<string, string>("AccountStatus", *request->accountStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMemberAccounts"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMemberAccountsResponse(callApi(params, req, runtime));
}

DescribeMemberAccountsResponse Alibabacloud_Waf-openapi20211001::Client::describeMemberAccounts(shared_ptr<DescribeMemberAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMemberAccountsWithOptions(request, runtime);
}

DescribePeakTrendResponse Alibabacloud_Waf-openapi20211001::Client::describePeakTrendWithOptions(shared_ptr<DescribePeakTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePeakTrend"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePeakTrendResponse(callApi(params, req, runtime));
}

DescribePeakTrendResponse Alibabacloud_Waf-openapi20211001::Client::describePeakTrend(shared_ptr<DescribePeakTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePeakTrendWithOptions(request, runtime);
}

DescribeResourceInstanceCertsResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceInstanceCertsWithOptions(shared_ptr<DescribeResourceInstanceCertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInstanceId)) {
    query->insert(pair<string, string>("ResourceInstanceId", *request->resourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceInstanceCerts"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceInstanceCertsResponse(callApi(params, req, runtime));
}

DescribeResourceInstanceCertsResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceInstanceCerts(shared_ptr<DescribeResourceInstanceCertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceInstanceCertsWithOptions(request, runtime);
}

DescribeResourceLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceLogStatusWithOptions(shared_ptr<DescribeResourceLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resources)) {
    query->insert(pair<string, string>("Resources", *request->resources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceLogStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceLogStatusResponse(callApi(params, req, runtime));
}

DescribeResourceLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceLogStatus(shared_ptr<DescribeResourceLogStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceLogStatusWithOptions(request, runtime);
}

DescribeResourcePortResponse Alibabacloud_Waf-openapi20211001::Client::describeResourcePortWithOptions(shared_ptr<DescribeResourcePortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInstanceId)) {
    query->insert(pair<string, string>("ResourceInstanceId", *request->resourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourcePort"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourcePortResponse(callApi(params, req, runtime));
}

DescribeResourcePortResponse Alibabacloud_Waf-openapi20211001::Client::describeResourcePort(shared_ptr<DescribeResourcePortRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourcePortWithOptions(request, runtime);
}

DescribeResourceRegionIdResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceRegionIdWithOptions(shared_ptr<DescribeResourceRegionIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceRegionId"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceRegionIdResponse(callApi(params, req, runtime));
}

DescribeResourceRegionIdResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceRegionId(shared_ptr<DescribeResourceRegionIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceRegionIdWithOptions(request, runtime);
}

DescribeResourceSupportRegionsResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceSupportRegionsWithOptions(shared_ptr<DescribeResourceSupportRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceSupportRegions"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceSupportRegionsResponse(callApi(params, req, runtime));
}

DescribeResourceSupportRegionsResponse Alibabacloud_Waf-openapi20211001::Client::describeResourceSupportRegions(shared_ptr<DescribeResourceSupportRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceSupportRegionsWithOptions(request, runtime);
}

DescribeResponseCodeTrendGraphResponse Alibabacloud_Waf-openapi20211001::Client::describeResponseCodeTrendGraphWithOptions(shared_ptr<DescribeResponseCodeTrendGraphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResponseCodeTrendGraph"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResponseCodeTrendGraphResponse(callApi(params, req, runtime));
}

DescribeResponseCodeTrendGraphResponse Alibabacloud_Waf-openapi20211001::Client::describeResponseCodeTrendGraph(shared_ptr<DescribeResponseCodeTrendGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResponseCodeTrendGraphWithOptions(request, runtime);
}

DescribeRuleGroupsResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleGroupsWithOptions(shared_ptr<DescribeRuleGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("SearchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleGroups"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleGroupsResponse(callApi(params, req, runtime));
}

DescribeRuleGroupsResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleGroups(shared_ptr<DescribeRuleGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleGroupsWithOptions(request, runtime);
}

DescribeRuleHitsTopClientIpResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopClientIpWithOptions(shared_ptr<DescribeRuleHitsTopClientIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopClientIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopClientIpResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopClientIpResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopClientIp(shared_ptr<DescribeRuleHitsTopClientIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopClientIpWithOptions(request, runtime);
}

DescribeRuleHitsTopResourceResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopResourceWithOptions(shared_ptr<DescribeRuleHitsTopResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopResource"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopResourceResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopResourceResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopResource(shared_ptr<DescribeRuleHitsTopResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopResourceWithOptions(request, runtime);
}

DescribeRuleHitsTopRuleIdResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopRuleIdWithOptions(shared_ptr<DescribeRuleHitsTopRuleIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isGroupResource)) {
    query->insert(pair<string, string>("IsGroupResource", *request->isGroupResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopRuleId"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopRuleIdResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopRuleIdResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopRuleId(shared_ptr<DescribeRuleHitsTopRuleIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopRuleIdWithOptions(request, runtime);
}

DescribeRuleHitsTopTuleTypeResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopTuleTypeWithOptions(shared_ptr<DescribeRuleHitsTopTuleTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopTuleType"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopTuleTypeResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopTuleTypeResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopTuleType(shared_ptr<DescribeRuleHitsTopTuleTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopTuleTypeWithOptions(request, runtime);
}

DescribeRuleHitsTopUaResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopUaWithOptions(shared_ptr<DescribeRuleHitsTopUaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopUa"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopUaResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopUaResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopUa(shared_ptr<DescribeRuleHitsTopUaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopUaWithOptions(request, runtime);
}

DescribeRuleHitsTopUrlResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopUrlWithOptions(shared_ptr<DescribeRuleHitsTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHitsTopUrl"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitsTopUrlResponse(callApi(params, req, runtime));
}

DescribeRuleHitsTopUrlResponse Alibabacloud_Waf-openapi20211001::Client::describeRuleHitsTopUrl(shared_ptr<DescribeRuleHitsTopUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitsTopUrlWithOptions(request, runtime);
}

DescribeSlsAuthStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsAuthStatusWithOptions(shared_ptr<DescribeSlsAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlsAuthStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlsAuthStatusResponse(callApi(params, req, runtime));
}

DescribeSlsAuthStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsAuthStatus(shared_ptr<DescribeSlsAuthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

DescribeSlsLogStoreResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsLogStoreWithOptions(shared_ptr<DescribeSlsLogStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlsLogStore"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlsLogStoreResponse(callApi(params, req, runtime));
}

DescribeSlsLogStoreResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsLogStore(shared_ptr<DescribeSlsLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlsLogStoreWithOptions(request, runtime);
}

DescribeSlsLogStoreStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsLogStoreStatusWithOptions(shared_ptr<DescribeSlsLogStoreStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlsLogStoreStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlsLogStoreStatusResponse(callApi(params, req, runtime));
}

DescribeSlsLogStoreStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeSlsLogStoreStatus(shared_ptr<DescribeSlsLogStoreStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlsLogStoreStatusWithOptions(request, runtime);
}

DescribeTemplateResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeTemplateResourcesWithOptions(shared_ptr<DescribeTemplateResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateResources"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateResourcesResponse(callApi(params, req, runtime));
}

DescribeTemplateResourcesResponse Alibabacloud_Waf-openapi20211001::Client::describeTemplateResources(shared_ptr<DescribeTemplateResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateResourcesWithOptions(request, runtime);
}

DescribeUserSlsLogRegionsResponse Alibabacloud_Waf-openapi20211001::Client::describeUserSlsLogRegionsWithOptions(shared_ptr<DescribeUserSlsLogRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserSlsLogRegions"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserSlsLogRegionsResponse(callApi(params, req, runtime));
}

DescribeUserSlsLogRegionsResponse Alibabacloud_Waf-openapi20211001::Client::describeUserSlsLogRegions(shared_ptr<DescribeUserSlsLogRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserSlsLogRegionsWithOptions(request, runtime);
}

DescribeUserWafLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeUserWafLogStatusWithOptions(shared_ptr<DescribeUserWafLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserWafLogStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserWafLogStatusResponse(callApi(params, req, runtime));
}

DescribeUserWafLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::describeUserWafLogStatus(shared_ptr<DescribeUserWafLogStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserWafLogStatusWithOptions(request, runtime);
}

DescribeVisitTopIpResponse Alibabacloud_Waf-openapi20211001::Client::describeVisitTopIpWithOptions(shared_ptr<DescribeVisitTopIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVisitTopIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVisitTopIpResponse(callApi(params, req, runtime));
}

DescribeVisitTopIpResponse Alibabacloud_Waf-openapi20211001::Client::describeVisitTopIp(shared_ptr<DescribeVisitTopIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVisitTopIpWithOptions(request, runtime);
}

DescribeVisitUasResponse Alibabacloud_Waf-openapi20211001::Client::describeVisitUasWithOptions(shared_ptr<DescribeVisitUasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVisitUas"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVisitUasResponse(callApi(params, req, runtime));
}

DescribeVisitUasResponse Alibabacloud_Waf-openapi20211001::Client::describeVisitUas(shared_ptr<DescribeVisitUasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVisitUasWithOptions(request, runtime);
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20211001::Client::describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWafSourceIpSegment"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWafSourceIpSegmentResponse(callApi(params, req, runtime));
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20211001::Client::describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWafSourceIpSegmentWithOptions(request, runtime);
}

ModifyDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseResourceGroupWithOptions(shared_ptr<ModifyDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addList)) {
    query->insert(pair<string, string>("AddList", *request->addList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteList)) {
    query->insert(pair<string, string>("DeleteList", *request->deleteList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseResourceGroup"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseResourceGroupResponse(callApi(params, req, runtime));
}

ModifyDefenseResourceGroupResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseResourceGroup(shared_ptr<ModifyDefenseResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseResourceGroupWithOptions(request, runtime);
}

ModifyDefenseResourceXffResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseResourceXffWithOptions(shared_ptr<ModifyDefenseResourceXffRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->acwCookieStatus)) {
    query->insert(pair<string, long>("AcwCookieStatus", *request->acwCookieStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->acwSecureStatus)) {
    query->insert(pair<string, long>("AcwSecureStatus", *request->acwSecureStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->acwV3SecureStatus)) {
    query->insert(pair<string, long>("AcwV3SecureStatus", *request->acwV3SecureStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->customHeaders)) {
    query->insert(pair<string, vector<string>>("CustomHeaders", *request->customHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->xffStatus)) {
    query->insert(pair<string, long>("XffStatus", *request->xffStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseResourceXff"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseResourceXffResponse(callApi(params, req, runtime));
}

ModifyDefenseResourceXffResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseResourceXff(shared_ptr<ModifyDefenseResourceXffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseResourceXffWithOptions(request, runtime);
}

ModifyDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRuleWithOptions(shared_ptr<ModifyDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defenseScene)) {
    query->insert(pair<string, string>("DefenseScene", *request->defenseScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    query->insert(pair<string, string>("Rules", *request->rules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseRule"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseRuleResponse(callApi(params, req, runtime));
}

ModifyDefenseRuleResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRule(shared_ptr<ModifyDefenseRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseRuleWithOptions(request, runtime);
}

ModifyDefenseRuleCacheResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRuleCacheWithOptions(shared_ptr<ModifyDefenseRuleCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseRuleCache"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseRuleCacheResponse(callApi(params, req, runtime));
}

ModifyDefenseRuleCacheResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRuleCache(shared_ptr<ModifyDefenseRuleCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseRuleCacheWithOptions(request, runtime);
}

ModifyDefenseRuleStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRuleStatusWithOptions(shared_ptr<ModifyDefenseRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleStatus)) {
    query->insert(pair<string, long>("RuleStatus", *request->ruleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseRuleStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseRuleStatusResponse(callApi(params, req, runtime));
}

ModifyDefenseRuleStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseRuleStatus(shared_ptr<ModifyDefenseRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseRuleStatusWithOptions(request, runtime);
}

ModifyDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseTemplateWithOptions(shared_ptr<ModifyDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseTemplate"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseTemplateResponse(callApi(params, req, runtime));
}

ModifyDefenseTemplateResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseTemplate(shared_ptr<ModifyDefenseTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseTemplateWithOptions(request, runtime);
}

ModifyDefenseTemplateStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseTemplateStatusWithOptions(shared_ptr<ModifyDefenseTemplateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateStatus)) {
    query->insert(pair<string, long>("TemplateStatus", *request->templateStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseTemplateStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefenseTemplateStatusResponse(callApi(params, req, runtime));
}

ModifyDefenseTemplateStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyDefenseTemplateStatus(shared_ptr<ModifyDefenseTemplateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseTemplateStatusWithOptions(request, runtime);
}

ModifyDomainResponse Alibabacloud_Waf-openapi20211001::Client::modifyDomainWithOptions(shared_ptr<ModifyDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyDomainShrinkRequest> request = make_shared<ModifyDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyDomainRequestListen>(tmpReq->listen)) {
    request->listenShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listen, make_shared<string>("Listen"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyDomainRequestRedirect>(tmpReq->redirect)) {
    request->redirectShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->redirect, make_shared<string>("Redirect"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenShrink)) {
    query->insert(pair<string, string>("Listen", *request->listenShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectShrink)) {
    query->insert(pair<string, string>("Redirect", *request->redirectShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDomain"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDomainResponse(callApi(params, req, runtime));
}

ModifyDomainResponse Alibabacloud_Waf-openapi20211001::Client::modifyDomain(shared_ptr<ModifyDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainWithOptions(request, runtime);
}

ModifyHybridCloudClusterBypassStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyHybridCloudClusterBypassStatusWithOptions(shared_ptr<ModifyHybridCloudClusterBypassStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterResourceId)) {
    query->insert(pair<string, string>("ClusterResourceId", *request->clusterResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("RuleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyHybridCloudClusterBypassStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyHybridCloudClusterBypassStatusResponse(callApi(params, req, runtime));
}

ModifyHybridCloudClusterBypassStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyHybridCloudClusterBypassStatus(shared_ptr<ModifyHybridCloudClusterBypassStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHybridCloudClusterBypassStatusWithOptions(request, runtime);
}

ModifyMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::modifyMajorProtectionBlackIpWithOptions(shared_ptr<ModifyMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredTime)) {
    query->insert(pair<string, long>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipList)) {
    query->insert(pair<string, string>("IpList", *request->ipList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMajorProtectionBlackIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMajorProtectionBlackIpResponse(callApi(params, req, runtime));
}

ModifyMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::modifyMajorProtectionBlackIp(shared_ptr<ModifyMajorProtectionBlackIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMajorProtectionBlackIpWithOptions(request, runtime);
}

ModifyMemberAccountResponse Alibabacloud_Waf-openapi20211001::Client::modifyMemberAccountWithOptions(shared_ptr<ModifyMemberAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberAccountId)) {
    query->insert(pair<string, string>("MemberAccountId", *request->memberAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMemberAccount"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMemberAccountResponse(callApi(params, req, runtime));
}

ModifyMemberAccountResponse Alibabacloud_Waf-openapi20211001::Client::modifyMemberAccount(shared_ptr<ModifyMemberAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMemberAccountWithOptions(request, runtime);
}

ModifyResourceLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyResourceLogStatusWithOptions(shared_ptr<ModifyResourceLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyResourceLogStatus"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyResourceLogStatusResponse(callApi(params, req, runtime));
}

ModifyResourceLogStatusResponse Alibabacloud_Waf-openapi20211001::Client::modifyResourceLogStatus(shared_ptr<ModifyResourceLogStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyResourceLogStatusWithOptions(request, runtime);
}

ModifyTemplateResourcesResponse Alibabacloud_Waf-openapi20211001::Client::modifyTemplateResourcesWithOptions(shared_ptr<ModifyTemplateResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bindResourceGroups)) {
    query->insert(pair<string, vector<string>>("BindResourceGroups", *request->bindResourceGroups));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bindResources)) {
    query->insert(pair<string, vector<string>>("BindResources", *request->bindResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unbindResourceGroups)) {
    query->insert(pair<string, vector<string>>("UnbindResourceGroups", *request->unbindResourceGroups));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unbindResources)) {
    query->insert(pair<string, vector<string>>("UnbindResources", *request->unbindResources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTemplateResources"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTemplateResourcesResponse(callApi(params, req, runtime));
}

ModifyTemplateResourcesResponse Alibabacloud_Waf-openapi20211001::Client::modifyTemplateResources(shared_ptr<ModifyTemplateResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTemplateResourcesWithOptions(request, runtime);
}

