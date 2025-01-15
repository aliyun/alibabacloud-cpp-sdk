// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/config_20200907.hpp>
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

using namespace Alibabacloud_Config20200907;

Alibabacloud_Config20200907::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-shanghai", "config.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1", "config.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("config"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Config20200907::Client::getEndpoint(shared_ptr<string> productId,
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

ActiveAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::activeAggregateConfigRulesWithOptions(shared_ptr<ActiveAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActiveAggregateConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActiveAggregateConfigRulesResponse(callApi(params, req, runtime));
}

ActiveAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::activeAggregateConfigRules(shared_ptr<ActiveAggregateConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeAggregateConfigRulesWithOptions(request, runtime);
}

ActiveConfigRulesResponse Alibabacloud_Config20200907::Client::activeConfigRulesWithOptions(shared_ptr<ActiveConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActiveConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActiveConfigRulesResponse(callApi(params, req, runtime));
}

ActiveConfigRulesResponse Alibabacloud_Config20200907::Client::activeConfigRules(shared_ptr<ActiveConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeConfigRulesWithOptions(request, runtime);
}

AttachAggregateConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::attachAggregateConfigRuleToCompliancePackWithOptions(shared_ptr<AttachAggregateConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachAggregateConfigRuleToCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachAggregateConfigRuleToCompliancePackResponse(callApi(params, req, runtime));
}

AttachAggregateConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::attachAggregateConfigRuleToCompliancePack(shared_ptr<AttachAggregateConfigRuleToCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

AttachConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::attachConfigRuleToCompliancePackWithOptions(shared_ptr<AttachConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachConfigRuleToCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachConfigRuleToCompliancePackResponse(callApi(params, req, runtime));
}

AttachConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::attachConfigRuleToCompliancePack(shared_ptr<AttachConfigRuleToCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachConfigRuleToCompliancePackWithOptions(request, runtime);
}

CopyCompliancePacksResponse Alibabacloud_Config20200907::Client::copyCompliancePacksWithOptions(shared_ptr<CopyCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desAggregatorIds)) {
    query->insert(pair<string, string>("DesAggregatorIds", *request->desAggregatorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcAggregatorId)) {
    query->insert(pair<string, string>("SrcAggregatorId", *request->srcAggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCompliancePackIds)) {
    query->insert(pair<string, string>("SrcCompliancePackIds", *request->srcCompliancePackIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyCompliancePacksResponse(callApi(params, req, runtime));
}

CopyCompliancePacksResponse Alibabacloud_Config20200907::Client::copyCompliancePacks(shared_ptr<CopyCompliancePacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyCompliancePacksWithOptions(request, runtime);
}

CopyConfigRulesResponse Alibabacloud_Config20200907::Client::copyConfigRulesWithOptions(shared_ptr<CopyConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desAggregatorIds)) {
    query->insert(pair<string, string>("DesAggregatorIds", *request->desAggregatorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcAggregatorId)) {
    query->insert(pair<string, string>("SrcAggregatorId", *request->srcAggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcConfigRuleIds)) {
    query->insert(pair<string, string>("SrcConfigRuleIds", *request->srcConfigRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyConfigRulesResponse(callApi(params, req, runtime));
}

CopyConfigRulesResponse Alibabacloud_Config20200907::Client::copyConfigRules(shared_ptr<CopyConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyConfigRulesWithOptions(request, runtime);
}

CreateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::createAdvancedSearchFileWithOptions(shared_ptr<CreateAdvancedSearchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("Sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAdvancedSearchFile"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAdvancedSearchFileResponse(callApi(params, req, runtime));
}

CreateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::createAdvancedSearchFile(shared_ptr<CreateAdvancedSearchFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAdvancedSearchFileWithOptions(request, runtime);
}

CreateAggregateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::createAggregateAdvancedSearchFileWithOptions(shared_ptr<CreateAggregateAdvancedSearchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("Sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregateAdvancedSearchFile"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregateAdvancedSearchFileResponse(callApi(params, req, runtime));
}

CreateAggregateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::createAggregateAdvancedSearchFile(shared_ptr<CreateAggregateAdvancedSearchFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregateAdvancedSearchFileWithOptions(request, runtime);
}

CreateAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::createAggregateCompliancePackWithOptions(shared_ptr<CreateAggregateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAggregateCompliancePackShrinkRequest> request = make_shared<CreateAggregateCompliancePackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregateCompliancePackRequestConfigRules>>(tmpReq->configRules)) {
    request->configRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configRules, make_shared<string>("ConfigRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackName)) {
    body->insert(pair<string, string>("CompliancePackName", *request->compliancePackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackTemplateId)) {
    body->insert(pair<string, string>("CompliancePackTemplateId", *request->compliancePackTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRulesShrink)) {
    body->insert(pair<string, string>("ConfigRules", *request->configRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultEnable)) {
    body->insert(pair<string, bool>("DefaultEnable", *request->defaultEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregateCompliancePackShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateAggregateCompliancePackShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregateCompliancePackShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateAggregateCompliancePackShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    body->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregateCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregateCompliancePackResponse(callApi(params, req, runtime));
}

CreateAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::createAggregateCompliancePack(shared_ptr<CreateAggregateCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregateCompliancePackWithOptions(request, runtime);
}

CreateAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::createAggregateConfigDeliveryChannelWithOptions(shared_ptr<CreateAggregateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compliantSnapshot)) {
    query->insert(pair<string, bool>("CompliantSnapshot", *request->compliantSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    query->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    query->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    query->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    query->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelType)) {
    query->insert(pair<string, string>("DeliveryChannelType", *request->deliveryChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverySnapshotTime)) {
    query->insert(pair<string, string>("DeliverySnapshotTime", *request->deliverySnapshotTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    query->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    query->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

CreateAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::createAggregateConfigDeliveryChannel(shared_ptr<CreateAggregateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

CreateAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::createAggregateConfigRuleWithOptions(shared_ptr<CreateAggregateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAggregateConfigRuleShrinkRequest> request = make_shared<CreateAggregateConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->inputParameters)) {
    request->inputParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputParameters, make_shared<string>("InputParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceTypesScope)) {
    request->resourceTypesScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceTypesScope, make_shared<string>("ResourceTypesScope"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsScope)) {
    body->insert(pair<string, string>("AccountIdsScope", *request->accountIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    body->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleTriggerTypes)) {
    body->insert(pair<string, string>("ConfigRuleTriggerTypes", *request->configRuleTriggerTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeAccountIdsScope)) {
    body->insert(pair<string, string>("ExcludeAccountIdsScope", *request->excludeAccountIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeFolderIdsScope)) {
    body->insert(pair<string, string>("ExcludeFolderIdsScope", *request->excludeFolderIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregateConfigRuleShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateAggregateConfigRuleShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendContent)) {
    body->insert(pair<string, string>("ExtendContent", *request->extendContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderIdsScope)) {
    body->insert(pair<string, string>("FolderIdsScope", *request->folderIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParametersShrink)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maximumExecutionFrequency)) {
    body->insert(pair<string, string>("MaximumExecutionFrequency", *request->maximumExecutionFrequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypesScopeShrink)) {
    body->insert(pair<string, string>("ResourceTypesScope", *request->resourceTypesScopeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIdentifier)) {
    body->insert(pair<string, string>("SourceIdentifier", *request->sourceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOwner)) {
    body->insert(pair<string, string>("SourceOwner", *request->sourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyLogicScope)) {
    body->insert(pair<string, string>("TagKeyLogicScope", *request->tagKeyLogicScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregateConfigRuleShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateAggregateConfigRuleShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregateConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregateConfigRuleResponse(callApi(params, req, runtime));
}

CreateAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::createAggregateConfigRule(shared_ptr<CreateAggregateConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregateConfigRuleWithOptions(request, runtime);
}

CreateAggregateRemediationResponse Alibabacloud_Config20200907::Client::createAggregateRemediationWithOptions(shared_ptr<CreateAggregateRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeType)) {
    body->insert(pair<string, string>("InvokeType", *request->invokeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationTemplateId)) {
    body->insert(pair<string, string>("RemediationTemplateId", *request->remediationTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    body->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregateRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregateRemediationResponse(callApi(params, req, runtime));
}

CreateAggregateRemediationResponse Alibabacloud_Config20200907::Client::createAggregateRemediation(shared_ptr<CreateAggregateRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregateRemediationWithOptions(request, runtime);
}

CreateAggregatorResponse Alibabacloud_Config20200907::Client::createAggregatorWithOptions(shared_ptr<CreateAggregatorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAggregatorShrinkRequest> request = make_shared<CreateAggregatorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAggregatorRequestAggregatorAccounts>>(tmpReq->aggregatorAccounts)) {
    request->aggregatorAccountsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aggregatorAccounts, make_shared<string>("AggregatorAccounts"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorAccountsShrink)) {
    body->insert(pair<string, string>("AggregatorAccounts", *request->aggregatorAccountsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorName)) {
    body->insert(pair<string, string>("AggregatorName", *request->aggregatorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorType)) {
    body->insert(pair<string, string>("AggregatorType", *request->aggregatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("FolderId", *request->folderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAggregator"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAggregatorResponse(callApi(params, req, runtime));
}

CreateAggregatorResponse Alibabacloud_Config20200907::Client::createAggregator(shared_ptr<CreateAggregatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAggregatorWithOptions(request, runtime);
}

CreateCompliancePackResponse Alibabacloud_Config20200907::Client::createCompliancePackWithOptions(shared_ptr<CreateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCompliancePackShrinkRequest> request = make_shared<CreateCompliancePackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateCompliancePackRequestConfigRules>>(tmpReq->configRules)) {
    request->configRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configRules, make_shared<string>("ConfigRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackName)) {
    body->insert(pair<string, string>("CompliancePackName", *request->compliancePackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackTemplateId)) {
    body->insert(pair<string, string>("CompliancePackTemplateId", *request->compliancePackTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRulesShrink)) {
    body->insert(pair<string, string>("ConfigRules", *request->configRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultEnable)) {
    body->insert(pair<string, bool>("DefaultEnable", *request->defaultEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateCompliancePackShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateCompliancePackShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCompliancePackShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateCompliancePackShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    body->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCompliancePackResponse(callApi(params, req, runtime));
}

CreateCompliancePackResponse Alibabacloud_Config20200907::Client::createCompliancePack(shared_ptr<CreateCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCompliancePackWithOptions(request, runtime);
}

CreateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::createConfigDeliveryChannelWithOptions(shared_ptr<CreateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compliantSnapshot)) {
    query->insert(pair<string, bool>("CompliantSnapshot", *request->compliantSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    query->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    query->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    query->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    query->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelType)) {
    query->insert(pair<string, string>("DeliveryChannelType", *request->deliveryChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverySnapshotTime)) {
    query->insert(pair<string, string>("DeliverySnapshotTime", *request->deliverySnapshotTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    query->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    query->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

CreateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::createConfigDeliveryChannel(shared_ptr<CreateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConfigDeliveryChannelWithOptions(request, runtime);
}

CreateConfigRuleResponse Alibabacloud_Config20200907::Client::createConfigRuleWithOptions(shared_ptr<CreateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateConfigRuleShrinkRequest> request = make_shared<CreateConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->inputParameters)) {
    request->inputParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputParameters, make_shared<string>("InputParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceTypesScope)) {
    request->resourceTypesScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceTypesScope, make_shared<string>("ResourceTypesScope"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateConfigRuleRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    body->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleTriggerTypes)) {
    body->insert(pair<string, string>("ConfigRuleTriggerTypes", *request->configRuleTriggerTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateConfigRuleShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateConfigRuleShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendContent)) {
    body->insert(pair<string, string>("ExtendContent", *request->extendContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParametersShrink)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maximumExecutionFrequency)) {
    body->insert(pair<string, string>("MaximumExecutionFrequency", *request->maximumExecutionFrequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypesScopeShrink)) {
    body->insert(pair<string, string>("ResourceTypesScope", *request->resourceTypesScopeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIdentifier)) {
    body->insert(pair<string, string>("SourceIdentifier", *request->sourceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOwner)) {
    body->insert(pair<string, string>("SourceOwner", *request->sourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyLogicScope)) {
    body->insert(pair<string, string>("TagKeyLogicScope", *request->tagKeyLogicScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateConfigRuleShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<CreateConfigRuleShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigRuleResponse(callApi(params, req, runtime));
}

CreateConfigRuleResponse Alibabacloud_Config20200907::Client::createConfigRule(shared_ptr<CreateConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConfigRuleWithOptions(request, runtime);
}

CreateDeliveryChannelResponse Alibabacloud_Config20200907::Client::createDeliveryChannelWithOptions(shared_ptr<CreateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    body->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    body->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelAssumeRoleArn)) {
    body->insert(pair<string, string>("DeliveryChannelAssumeRoleArn", *request->deliveryChannelAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    body->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    body->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    body->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelType)) {
    body->insert(pair<string, string>("DeliveryChannelType", *request->deliveryChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    body->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    body->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryChannelResponse(callApi(params, req, runtime));
}

CreateDeliveryChannelResponse Alibabacloud_Config20200907::Client::createDeliveryChannel(shared_ptr<CreateDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeliveryChannelWithOptions(request, runtime);
}

CreateRemediationResponse Alibabacloud_Config20200907::Client::createRemediationWithOptions(shared_ptr<CreateRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeType)) {
    body->insert(pair<string, string>("InvokeType", *request->invokeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationTemplateId)) {
    body->insert(pair<string, string>("RemediationTemplateId", *request->remediationTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    body->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRemediationResponse(callApi(params, req, runtime));
}

CreateRemediationResponse Alibabacloud_Config20200907::Client::createRemediation(shared_ptr<CreateRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRemediationWithOptions(request, runtime);
}

DeactiveAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::deactiveAggregateConfigRulesWithOptions(shared_ptr<DeactiveAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactiveAggregateConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeactiveAggregateConfigRulesResponse(callApi(params, req, runtime));
}

DeactiveAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::deactiveAggregateConfigRules(shared_ptr<DeactiveAggregateConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactiveAggregateConfigRulesWithOptions(request, runtime);
}

DeactiveConfigRulesResponse Alibabacloud_Config20200907::Client::deactiveConfigRulesWithOptions(shared_ptr<DeactiveConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactiveConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeactiveConfigRulesResponse(callApi(params, req, runtime));
}

DeactiveConfigRulesResponse Alibabacloud_Config20200907::Client::deactiveConfigRules(shared_ptr<DeactiveConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactiveConfigRulesWithOptions(request, runtime);
}

DeleteAggregateCompliancePacksResponse Alibabacloud_Config20200907::Client::deleteAggregateCompliancePacksWithOptions(shared_ptr<DeleteAggregateCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackIds)) {
    body->insert(pair<string, string>("CompliancePackIds", *request->compliancePackIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteRule)) {
    body->insert(pair<string, bool>("DeleteRule", *request->deleteRule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAggregateCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAggregateCompliancePacksResponse(callApi(params, req, runtime));
}

DeleteAggregateCompliancePacksResponse Alibabacloud_Config20200907::Client::deleteAggregateCompliancePacks(shared_ptr<DeleteAggregateCompliancePacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAggregateCompliancePacksWithOptions(request, runtime);
}

DeleteAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::deleteAggregateConfigDeliveryChannelWithOptions(shared_ptr<DeleteAggregateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAggregateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAggregateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

DeleteAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::deleteAggregateConfigDeliveryChannel(shared_ptr<DeleteAggregateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

DeleteAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::deleteAggregateConfigRulesWithOptions(shared_ptr<DeleteAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAggregateConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAggregateConfigRulesResponse(callApi(params, req, runtime));
}

DeleteAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::deleteAggregateConfigRules(shared_ptr<DeleteAggregateConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAggregateConfigRulesWithOptions(request, runtime);
}

DeleteAggregateRemediationsResponse Alibabacloud_Config20200907::Client::deleteAggregateRemediationsWithOptions(shared_ptr<DeleteAggregateRemediationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationIds)) {
    body->insert(pair<string, string>("RemediationIds", *request->remediationIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAggregateRemediations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAggregateRemediationsResponse(callApi(params, req, runtime));
}

DeleteAggregateRemediationsResponse Alibabacloud_Config20200907::Client::deleteAggregateRemediations(shared_ptr<DeleteAggregateRemediationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAggregateRemediationsWithOptions(request, runtime);
}

DeleteAggregatorsResponse Alibabacloud_Config20200907::Client::deleteAggregatorsWithOptions(shared_ptr<DeleteAggregatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorIds)) {
    body->insert(pair<string, string>("AggregatorIds", *request->aggregatorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAggregators"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAggregatorsResponse(callApi(params, req, runtime));
}

DeleteAggregatorsResponse Alibabacloud_Config20200907::Client::deleteAggregators(shared_ptr<DeleteAggregatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAggregatorsWithOptions(request, runtime);
}

DeleteCompliancePacksResponse Alibabacloud_Config20200907::Client::deleteCompliancePacksWithOptions(shared_ptr<DeleteCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackIds)) {
    body->insert(pair<string, string>("CompliancePackIds", *request->compliancePackIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteRule)) {
    body->insert(pair<string, bool>("DeleteRule", *request->deleteRule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCompliancePacksResponse(callApi(params, req, runtime));
}

DeleteCompliancePacksResponse Alibabacloud_Config20200907::Client::deleteCompliancePacks(shared_ptr<DeleteCompliancePacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCompliancePacksWithOptions(request, runtime);
}

DeleteConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::deleteConfigDeliveryChannelWithOptions(shared_ptr<DeleteConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

DeleteConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::deleteConfigDeliveryChannel(shared_ptr<DeleteConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigDeliveryChannelWithOptions(request, runtime);
}

DeleteConfigRulesResponse Alibabacloud_Config20200907::Client::deleteConfigRulesWithOptions(shared_ptr<DeleteConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigRulesResponse(callApi(params, req, runtime));
}

DeleteConfigRulesResponse Alibabacloud_Config20200907::Client::deleteConfigRules(shared_ptr<DeleteConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigRulesWithOptions(request, runtime);
}

DeleteRemediationsResponse Alibabacloud_Config20200907::Client::deleteRemediationsWithOptions(shared_ptr<DeleteRemediationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationIds)) {
    body->insert(pair<string, string>("RemediationIds", *request->remediationIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRemediations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRemediationsResponse(callApi(params, req, runtime));
}

DeleteRemediationsResponse Alibabacloud_Config20200907::Client::deleteRemediations(shared_ptr<DeleteRemediationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRemediationsWithOptions(request, runtime);
}

DescribeRemediationResponse Alibabacloud_Config20200907::Client::describeRemediationWithOptions(shared_ptr<DescribeRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRemediationResponse(callApi(params, req, runtime));
}

DescribeRemediationResponse Alibabacloud_Config20200907::Client::describeRemediation(shared_ptr<DescribeRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRemediationWithOptions(request, runtime);
}

DetachAggregateConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::detachAggregateConfigRuleToCompliancePackWithOptions(shared_ptr<DetachAggregateConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachAggregateConfigRuleToCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachAggregateConfigRuleToCompliancePackResponse(callApi(params, req, runtime));
}

DetachAggregateConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::detachAggregateConfigRuleToCompliancePack(shared_ptr<DetachAggregateConfigRuleToCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

DetachConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::detachConfigRuleToCompliancePackWithOptions(shared_ptr<DetachConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachConfigRuleToCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachConfigRuleToCompliancePackResponse(callApi(params, req, runtime));
}

DetachConfigRuleToCompliancePackResponse Alibabacloud_Config20200907::Client::detachConfigRuleToCompliancePack(shared_ptr<DetachConfigRuleToCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachConfigRuleToCompliancePackWithOptions(request, runtime);
}

EvaluatePreConfigRulesResponse Alibabacloud_Config20200907::Client::evaluatePreConfigRulesWithOptions(shared_ptr<EvaluatePreConfigRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EvaluatePreConfigRulesShrinkRequest> request = make_shared<EvaluatePreConfigRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EvaluatePreConfigRulesRequestResourceEvaluateItems>>(tmpReq->resourceEvaluateItems)) {
    request->resourceEvaluateItemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceEvaluateItems, make_shared<string>("ResourceEvaluateItems"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableManagedRules)) {
    body->insert(pair<string, bool>("EnableManagedRules", *request->enableManagedRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceEvaluateItemsShrink)) {
    body->insert(pair<string, string>("ResourceEvaluateItems", *request->resourceEvaluateItemsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EvaluatePreConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EvaluatePreConfigRulesResponse(callApi(params, req, runtime));
}

EvaluatePreConfigRulesResponse Alibabacloud_Config20200907::Client::evaluatePreConfigRules(shared_ptr<EvaluatePreConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return evaluatePreConfigRulesWithOptions(request, runtime);
}

GenerateAggregateCompliancePackReportResponse Alibabacloud_Config20200907::Client::generateAggregateCompliancePackReportWithOptions(shared_ptr<GenerateAggregateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    body->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAggregateCompliancePackReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateAggregateCompliancePackReportResponse(callApi(params, req, runtime));
}

GenerateAggregateCompliancePackReportResponse Alibabacloud_Config20200907::Client::generateAggregateCompliancePackReport(shared_ptr<GenerateAggregateCompliancePackReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAggregateCompliancePackReportWithOptions(request, runtime);
}

GenerateAggregateConfigRulesReportResponse Alibabacloud_Config20200907::Client::generateAggregateConfigRulesReportWithOptions(shared_ptr<GenerateAggregateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    body->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAggregateConfigRulesReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateAggregateConfigRulesReportResponse(callApi(params, req, runtime));
}

GenerateAggregateConfigRulesReportResponse Alibabacloud_Config20200907::Client::generateAggregateConfigRulesReport(shared_ptr<GenerateAggregateConfigRulesReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAggregateConfigRulesReportWithOptions(request, runtime);
}

GenerateAggregateResourceInventoryResponse Alibabacloud_Config20200907::Client::generateAggregateResourceInventoryWithOptions(shared_ptr<GenerateAggregateResourceInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIds)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAggregateResourceInventory"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateAggregateResourceInventoryResponse(callApi(params, req, runtime));
}

GenerateAggregateResourceInventoryResponse Alibabacloud_Config20200907::Client::generateAggregateResourceInventory(shared_ptr<GenerateAggregateResourceInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAggregateResourceInventoryWithOptions(request, runtime);
}

GenerateCompliancePackReportResponse Alibabacloud_Config20200907::Client::generateCompliancePackReportWithOptions(shared_ptr<GenerateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    body->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateCompliancePackReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateCompliancePackReportResponse(callApi(params, req, runtime));
}

GenerateCompliancePackReportResponse Alibabacloud_Config20200907::Client::generateCompliancePackReport(shared_ptr<GenerateCompliancePackReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateCompliancePackReportWithOptions(request, runtime);
}

GenerateConfigRulesReportResponse Alibabacloud_Config20200907::Client::generateConfigRulesReportWithOptions(shared_ptr<GenerateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    body->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateConfigRulesReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateConfigRulesReportResponse(callApi(params, req, runtime));
}

GenerateConfigRulesReportResponse Alibabacloud_Config20200907::Client::generateConfigRulesReport(shared_ptr<GenerateConfigRulesReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateConfigRulesReportWithOptions(request, runtime);
}

GenerateResourceInventoryResponse Alibabacloud_Config20200907::Client::generateResourceInventoryWithOptions(shared_ptr<GenerateResourceInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateResourceInventory"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateResourceInventoryResponse(callApi(params, req, runtime));
}

GenerateResourceInventoryResponse Alibabacloud_Config20200907::Client::generateResourceInventory(shared_ptr<GenerateResourceInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateResourceInventoryWithOptions(request, runtime);
}

GetAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::getAdvancedSearchFileWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdvancedSearchFile"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdvancedSearchFileResponse(callApi(params, req, runtime));
}

GetAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::getAdvancedSearchFile() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdvancedSearchFileWithOptions(runtime);
}

GetAggregateAccountComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateAccountComplianceByPackWithOptions(shared_ptr<GetAggregateAccountComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateAccountComplianceByPack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateAccountComplianceByPackResponse(callApi(params, req, runtime));
}

GetAggregateAccountComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateAccountComplianceByPack(shared_ptr<GetAggregateAccountComplianceByPackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateAccountComplianceByPackWithOptions(request, runtime);
}

GetAggregateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::getAggregateAdvancedSearchFileWithOptions(shared_ptr<GetAggregateAdvancedSearchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateAdvancedSearchFile"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateAdvancedSearchFileResponse(callApi(params, req, runtime));
}

GetAggregateAdvancedSearchFileResponse Alibabacloud_Config20200907::Client::getAggregateAdvancedSearchFile(shared_ptr<GetAggregateAdvancedSearchFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateAdvancedSearchFileWithOptions(request, runtime);
}

GetAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::getAggregateCompliancePackWithOptions(shared_ptr<GetAggregateCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateCompliancePackResponse(callApi(params, req, runtime));
}

GetAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::getAggregateCompliancePack(shared_ptr<GetAggregateCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateCompliancePackWithOptions(request, runtime);
}

GetAggregateCompliancePackReportResponse Alibabacloud_Config20200907::Client::getAggregateCompliancePackReportWithOptions(shared_ptr<GetAggregateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateCompliancePackReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateCompliancePackReportResponse(callApi(params, req, runtime));
}

GetAggregateCompliancePackReportResponse Alibabacloud_Config20200907::Client::getAggregateCompliancePackReport(shared_ptr<GetAggregateCompliancePackReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateCompliancePackReportWithOptions(request, runtime);
}

GetAggregateComplianceSummaryResponse Alibabacloud_Config20200907::Client::getAggregateComplianceSummaryWithOptions(shared_ptr<GetAggregateComplianceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateComplianceSummary"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateComplianceSummaryResponse(callApi(params, req, runtime));
}

GetAggregateComplianceSummaryResponse Alibabacloud_Config20200907::Client::getAggregateComplianceSummary(shared_ptr<GetAggregateComplianceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateComplianceSummaryWithOptions(request, runtime);
}

GetAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::getAggregateConfigDeliveryChannelWithOptions(shared_ptr<GetAggregateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

GetAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::getAggregateConfigDeliveryChannel(shared_ptr<GetAggregateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

GetAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleWithOptions(shared_ptr<GetAggregateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAggregateConfigRuleShrinkRequest> request = make_shared<GetAggregateConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetAggregateConfigRuleRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateConfigRuleResponse(callApi(params, req, runtime));
}

GetAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::getAggregateConfigRule(shared_ptr<GetAggregateConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateConfigRuleWithOptions(request, runtime);
}

GetAggregateConfigRuleComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleComplianceByPackWithOptions(shared_ptr<GetAggregateConfigRuleComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigRuleComplianceByPack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateConfigRuleComplianceByPackResponse(callApi(params, req, runtime));
}

GetAggregateConfigRuleComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleComplianceByPack(shared_ptr<GetAggregateConfigRuleComplianceByPackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateConfigRuleComplianceByPackWithOptions(request, runtime);
}

GetAggregateConfigRuleSummaryByRiskLevelResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleSummaryByRiskLevelWithOptions(shared_ptr<GetAggregateConfigRuleSummaryByRiskLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigRuleSummaryByRiskLevel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateConfigRuleSummaryByRiskLevelResponse(callApi(params, req, runtime));
}

GetAggregateConfigRuleSummaryByRiskLevelResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleSummaryByRiskLevel(shared_ptr<GetAggregateConfigRuleSummaryByRiskLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateConfigRuleSummaryByRiskLevelWithOptions(request, runtime);
}

GetAggregateConfigRulesReportResponse Alibabacloud_Config20200907::Client::getAggregateConfigRulesReportWithOptions(shared_ptr<GetAggregateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigRulesReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateConfigRulesReportResponse(callApi(params, req, runtime));
}

GetAggregateConfigRulesReportResponse Alibabacloud_Config20200907::Client::getAggregateConfigRulesReport(shared_ptr<GetAggregateConfigRulesReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateConfigRulesReportWithOptions(request, runtime);
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20200907::Client::getAggregateDiscoveredResourceWithOptions(shared_ptr<GetAggregateDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->complianceOption)) {
    query->insert(pair<string, long>("ComplianceOption", *request->complianceOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateDiscoveredResource"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateDiscoveredResourceResponse(callApi(params, req, runtime));
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20200907::Client::getAggregateDiscoveredResource(shared_ptr<GetAggregateDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateDiscoveredResourceWithOptions(request, runtime);
}

GetAggregateResourceComplianceByConfigRuleResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceByConfigRuleWithOptions(shared_ptr<GetAggregateResourceComplianceByConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceComplianceByConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceComplianceByConfigRuleResponse(callApi(params, req, runtime));
}

GetAggregateResourceComplianceByConfigRuleResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceByConfigRule(shared_ptr<GetAggregateResourceComplianceByConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceComplianceByConfigRuleWithOptions(request, runtime);
}

GetAggregateResourceComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceByPackWithOptions(shared_ptr<GetAggregateResourceComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceComplianceByPack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceComplianceByPackResponse(callApi(params, req, runtime));
}

GetAggregateResourceComplianceByPackResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceByPack(shared_ptr<GetAggregateResourceComplianceByPackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceComplianceByPackWithOptions(request, runtime);
}

GetAggregateResourceComplianceGroupByRegionResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceGroupByRegionWithOptions(shared_ptr<GetAggregateResourceComplianceGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceComplianceGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceComplianceGroupByRegionResponse(callApi(params, req, runtime));
}

GetAggregateResourceComplianceGroupByRegionResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceGroupByRegion(shared_ptr<GetAggregateResourceComplianceGroupByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceComplianceGroupByRegionWithOptions(request, runtime);
}

GetAggregateResourceComplianceGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceGroupByResourceTypeWithOptions(shared_ptr<GetAggregateResourceComplianceGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceComplianceGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceComplianceGroupByResourceTypeResponse(callApi(params, req, runtime));
}

GetAggregateResourceComplianceGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceGroupByResourceType(shared_ptr<GetAggregateResourceComplianceGroupByResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

GetAggregateResourceComplianceTimelineResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceTimelineWithOptions(shared_ptr<GetAggregateResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceComplianceTimeline"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceComplianceTimelineResponse(callApi(params, req, runtime));
}

GetAggregateResourceComplianceTimelineResponse Alibabacloud_Config20200907::Client::getAggregateResourceComplianceTimeline(shared_ptr<GetAggregateResourceComplianceTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceComplianceTimelineWithOptions(request, runtime);
}

GetAggregateResourceConfigurationTimelineResponse Alibabacloud_Config20200907::Client::getAggregateResourceConfigurationTimelineWithOptions(shared_ptr<GetAggregateResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceConfigurationTimeline"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceConfigurationTimelineResponse(callApi(params, req, runtime));
}

GetAggregateResourceConfigurationTimelineResponse Alibabacloud_Config20200907::Client::getAggregateResourceConfigurationTimeline(shared_ptr<GetAggregateResourceConfigurationTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceConfigurationTimelineWithOptions(request, runtime);
}

GetAggregateResourceCountsGroupByRegionResponse Alibabacloud_Config20200907::Client::getAggregateResourceCountsGroupByRegionWithOptions(shared_ptr<GetAggregateResourceCountsGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceCountsGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceCountsGroupByRegionResponse(callApi(params, req, runtime));
}

GetAggregateResourceCountsGroupByRegionResponse Alibabacloud_Config20200907::Client::getAggregateResourceCountsGroupByRegion(shared_ptr<GetAggregateResourceCountsGroupByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceCountsGroupByRegionWithOptions(request, runtime);
}

GetAggregateResourceCountsGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getAggregateResourceCountsGroupByResourceTypeWithOptions(shared_ptr<GetAggregateResourceCountsGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceCountsGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceCountsGroupByResourceTypeResponse(callApi(params, req, runtime));
}

GetAggregateResourceCountsGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getAggregateResourceCountsGroupByResourceType(shared_ptr<GetAggregateResourceCountsGroupByResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

GetAggregateResourceInventoryResponse Alibabacloud_Config20200907::Client::getAggregateResourceInventoryWithOptions(shared_ptr<GetAggregateResourceInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceInventory"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateResourceInventoryResponse(callApi(params, req, runtime));
}

GetAggregateResourceInventoryResponse Alibabacloud_Config20200907::Client::getAggregateResourceInventory(shared_ptr<GetAggregateResourceInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateResourceInventoryWithOptions(request, runtime);
}

GetAggregatorResponse Alibabacloud_Config20200907::Client::getAggregatorWithOptions(shared_ptr<GetAggregatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregator"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregatorResponse(callApi(params, req, runtime));
}

GetAggregatorResponse Alibabacloud_Config20200907::Client::getAggregator(shared_ptr<GetAggregatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregatorWithOptions(request, runtime);
}

GetCompliancePackResponse Alibabacloud_Config20200907::Client::getCompliancePackWithOptions(shared_ptr<GetCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCompliancePackResponse(callApi(params, req, runtime));
}

GetCompliancePackResponse Alibabacloud_Config20200907::Client::getCompliancePack(shared_ptr<GetCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCompliancePackWithOptions(request, runtime);
}

GetCompliancePackReportResponse Alibabacloud_Config20200907::Client::getCompliancePackReportWithOptions(shared_ptr<GetCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCompliancePackReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCompliancePackReportResponse(callApi(params, req, runtime));
}

GetCompliancePackReportResponse Alibabacloud_Config20200907::Client::getCompliancePackReport(shared_ptr<GetCompliancePackReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCompliancePackReportWithOptions(request, runtime);
}

GetComplianceSummaryResponse Alibabacloud_Config20200907::Client::getComplianceSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComplianceSummary"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComplianceSummaryResponse(callApi(params, req, runtime));
}

GetComplianceSummaryResponse Alibabacloud_Config20200907::Client::getComplianceSummary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getComplianceSummaryWithOptions(runtime);
}

GetConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::getConfigDeliveryChannelWithOptions(shared_ptr<GetConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

GetConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::getConfigDeliveryChannel(shared_ptr<GetConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigDeliveryChannelWithOptions(request, runtime);
}

GetConfigRuleResponse Alibabacloud_Config20200907::Client::getConfigRuleWithOptions(shared_ptr<GetConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetConfigRuleShrinkRequest> request = make_shared<GetConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetConfigRuleRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigRuleResponse(callApi(params, req, runtime));
}

GetConfigRuleResponse Alibabacloud_Config20200907::Client::getConfigRule(shared_ptr<GetConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigRuleWithOptions(request, runtime);
}

GetConfigRuleComplianceByPackResponse Alibabacloud_Config20200907::Client::getConfigRuleComplianceByPackWithOptions(shared_ptr<GetConfigRuleComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigRuleComplianceByPack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigRuleComplianceByPackResponse(callApi(params, req, runtime));
}

GetConfigRuleComplianceByPackResponse Alibabacloud_Config20200907::Client::getConfigRuleComplianceByPack(shared_ptr<GetConfigRuleComplianceByPackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigRuleComplianceByPackWithOptions(request, runtime);
}

GetConfigRuleSummaryByRiskLevelResponse Alibabacloud_Config20200907::Client::getConfigRuleSummaryByRiskLevelWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigRuleSummaryByRiskLevel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigRuleSummaryByRiskLevelResponse(callApi(params, req, runtime));
}

GetConfigRuleSummaryByRiskLevelResponse Alibabacloud_Config20200907::Client::getConfigRuleSummaryByRiskLevel() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigRuleSummaryByRiskLevelWithOptions(runtime);
}

GetConfigRulesReportResponse Alibabacloud_Config20200907::Client::getConfigRulesReportWithOptions(shared_ptr<GetConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigRulesReport"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigRulesReportResponse(callApi(params, req, runtime));
}

GetConfigRulesReportResponse Alibabacloud_Config20200907::Client::getConfigRulesReport(shared_ptr<GetConfigRulesReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigRulesReportWithOptions(request, runtime);
}

GetConfigurationRecorderResponse Alibabacloud_Config20200907::Client::getConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigurationRecorder"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigurationRecorderResponse(callApi(params, req, runtime));
}

GetConfigurationRecorderResponse Alibabacloud_Config20200907::Client::getConfigurationRecorder() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigurationRecorderWithOptions(runtime);
}

GetDiscoveredResourceResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceWithOptions(shared_ptr<GetDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->complianceOption)) {
    query->insert(pair<string, long>("ComplianceOption", *request->complianceOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResource"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiscoveredResourceResponse(callApi(params, req, runtime));
}

GetDiscoveredResourceResponse Alibabacloud_Config20200907::Client::getDiscoveredResource(shared_ptr<GetDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceWithOptions(request, runtime);
}

GetDiscoveredResourceCountsGroupByRegionResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceCountsGroupByRegionWithOptions(shared_ptr<GetDiscoveredResourceCountsGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceCountsGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiscoveredResourceCountsGroupByRegionResponse(callApi(params, req, runtime));
}

GetDiscoveredResourceCountsGroupByRegionResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceCountsGroupByRegion(shared_ptr<GetDiscoveredResourceCountsGroupByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceCountsGroupByRegionWithOptions(request, runtime);
}

GetDiscoveredResourceCountsGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceCountsGroupByResourceTypeWithOptions(shared_ptr<GetDiscoveredResourceCountsGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceCountsGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiscoveredResourceCountsGroupByResourceTypeResponse(callApi(params, req, runtime));
}

GetDiscoveredResourceCountsGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceCountsGroupByResourceType(shared_ptr<GetDiscoveredResourceCountsGroupByResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

GetIntegratedServiceStatusResponse Alibabacloud_Config20200907::Client::getIntegratedServiceStatusWithOptions(shared_ptr<GetIntegratedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIntegratedServiceStatus"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIntegratedServiceStatusResponse(callApi(params, req, runtime));
}

GetIntegratedServiceStatusResponse Alibabacloud_Config20200907::Client::getIntegratedServiceStatus(shared_ptr<GetIntegratedServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIntegratedServiceStatusWithOptions(request, runtime);
}

GetManagedRuleResponse Alibabacloud_Config20200907::Client::getManagedRuleWithOptions(shared_ptr<GetManagedRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetManagedRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetManagedRuleResponse(callApi(params, req, runtime));
}

GetManagedRuleResponse Alibabacloud_Config20200907::Client::getManagedRule(shared_ptr<GetManagedRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManagedRuleWithOptions(request, runtime);
}

GetRemediationTemplateResponse Alibabacloud_Config20200907::Client::getRemediationTemplateWithOptions(shared_ptr<GetRemediationTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateIdentifier)) {
    query->insert(pair<string, string>("TemplateIdentifier", *request->templateIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRemediationTemplate"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRemediationTemplateResponse(callApi(params, req, runtime));
}

GetRemediationTemplateResponse Alibabacloud_Config20200907::Client::getRemediationTemplate(shared_ptr<GetRemediationTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRemediationTemplateWithOptions(request, runtime);
}

GetResourceComplianceByConfigRuleResponse Alibabacloud_Config20200907::Client::getResourceComplianceByConfigRuleWithOptions(shared_ptr<GetResourceComplianceByConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceByConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceByConfigRuleResponse(callApi(params, req, runtime));
}

GetResourceComplianceByConfigRuleResponse Alibabacloud_Config20200907::Client::getResourceComplianceByConfigRule(shared_ptr<GetResourceComplianceByConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceByConfigRuleWithOptions(request, runtime);
}

GetResourceComplianceByPackResponse Alibabacloud_Config20200907::Client::getResourceComplianceByPackWithOptions(shared_ptr<GetResourceComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceByPack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceByPackResponse(callApi(params, req, runtime));
}

GetResourceComplianceByPackResponse Alibabacloud_Config20200907::Client::getResourceComplianceByPack(shared_ptr<GetResourceComplianceByPackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceByPackWithOptions(request, runtime);
}

GetResourceComplianceGroupByRegionResponse Alibabacloud_Config20200907::Client::getResourceComplianceGroupByRegionWithOptions(shared_ptr<GetResourceComplianceGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceGroupByRegionResponse(callApi(params, req, runtime));
}

GetResourceComplianceGroupByRegionResponse Alibabacloud_Config20200907::Client::getResourceComplianceGroupByRegion(shared_ptr<GetResourceComplianceGroupByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceGroupByRegionWithOptions(request, runtime);
}

GetResourceComplianceGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getResourceComplianceGroupByResourceTypeWithOptions(shared_ptr<GetResourceComplianceGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceGroupByResourceTypeResponse(callApi(params, req, runtime));
}

GetResourceComplianceGroupByResourceTypeResponse Alibabacloud_Config20200907::Client::getResourceComplianceGroupByResourceType(shared_ptr<GetResourceComplianceGroupByResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20200907::Client::getResourceComplianceTimelineWithOptions(shared_ptr<GetResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceTimeline"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceTimelineResponse(callApi(params, req, runtime));
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20200907::Client::getResourceComplianceTimeline(shared_ptr<GetResourceComplianceTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceTimelineWithOptions(request, runtime);
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20200907::Client::getResourceConfigurationTimelineWithOptions(shared_ptr<GetResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceConfigurationTimeline"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceConfigurationTimelineResponse(callApi(params, req, runtime));
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20200907::Client::getResourceConfigurationTimeline(shared_ptr<GetResourceConfigurationTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceConfigurationTimelineWithOptions(request, runtime);
}

GetResourceInventoryResponse Alibabacloud_Config20200907::Client::getResourceInventoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceInventory"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceInventoryResponse(callApi(params, req, runtime));
}

GetResourceInventoryResponse Alibabacloud_Config20200907::Client::getResourceInventory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceInventoryWithOptions(runtime);
}

GetSupportedResourceRelationConfigResponse Alibabacloud_Config20200907::Client::getSupportedResourceRelationConfigWithOptions(shared_ptr<GetSupportedResourceRelationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupportedResourceRelationConfig"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupportedResourceRelationConfigResponse(callApi(params, req, runtime));
}

GetSupportedResourceRelationConfigResponse Alibabacloud_Config20200907::Client::getSupportedResourceRelationConfig(shared_ptr<GetSupportedResourceRelationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupportedResourceRelationConfigWithOptions(request, runtime);
}

IgnoreAggregateEvaluationResultsResponse Alibabacloud_Config20200907::Client::ignoreAggregateEvaluationResultsWithOptions(shared_ptr<IgnoreAggregateEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IgnoreAggregateEvaluationResultsShrinkRequest> request = make_shared<IgnoreAggregateEvaluationResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IgnoreAggregateEvaluationResultsRequestResources>>(tmpReq->resources)) {
    request->resourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resources, make_shared<string>("Resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ignoreDate)) {
    body->insert(pair<string, string>("IgnoreDate", *request->ignoreDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcesShrink)) {
    body->insert(pair<string, string>("Resources", *request->resourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IgnoreAggregateEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IgnoreAggregateEvaluationResultsResponse(callApi(params, req, runtime));
}

IgnoreAggregateEvaluationResultsResponse Alibabacloud_Config20200907::Client::ignoreAggregateEvaluationResults(shared_ptr<IgnoreAggregateEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ignoreAggregateEvaluationResultsWithOptions(request, runtime);
}

IgnoreEvaluationResultsResponse Alibabacloud_Config20200907::Client::ignoreEvaluationResultsWithOptions(shared_ptr<IgnoreEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IgnoreEvaluationResultsShrinkRequest> request = make_shared<IgnoreEvaluationResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IgnoreEvaluationResultsRequestResources>>(tmpReq->resources)) {
    request->resourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resources, make_shared<string>("Resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ignoreDate)) {
    body->insert(pair<string, string>("IgnoreDate", *request->ignoreDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcesShrink)) {
    body->insert(pair<string, string>("Resources", *request->resourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IgnoreEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IgnoreEvaluationResultsResponse(callApi(params, req, runtime));
}

IgnoreEvaluationResultsResponse Alibabacloud_Config20200907::Client::ignoreEvaluationResults(shared_ptr<IgnoreEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ignoreEvaluationResultsWithOptions(request, runtime);
}

ListAggregateCompliancePacksResponse Alibabacloud_Config20200907::Client::listAggregateCompliancePacksWithOptions(shared_ptr<ListAggregateCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateCompliancePacksResponse(callApi(params, req, runtime));
}

ListAggregateCompliancePacksResponse Alibabacloud_Config20200907::Client::listAggregateCompliancePacks(shared_ptr<ListAggregateCompliancePacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateCompliancePacksWithOptions(request, runtime);
}

ListAggregateConfigDeliveryChannelsResponse Alibabacloud_Config20200907::Client::listAggregateConfigDeliveryChannelsWithOptions(shared_ptr<ListAggregateConfigDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelIds)) {
    query->insert(pair<string, string>("DeliveryChannelIds", *request->deliveryChannelIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigDeliveryChannels"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateConfigDeliveryChannelsResponse(callApi(params, req, runtime));
}

ListAggregateConfigDeliveryChannelsResponse Alibabacloud_Config20200907::Client::listAggregateConfigDeliveryChannels(shared_ptr<ListAggregateConfigDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateConfigDeliveryChannelsWithOptions(request, runtime);
}

ListAggregateConfigRuleEvaluationResultsResponse Alibabacloud_Config20200907::Client::listAggregateConfigRuleEvaluationResultsWithOptions(shared_ptr<ListAggregateConfigRuleEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIds)) {
    query->insert(pair<string, string>("ResourceGroupIds", *request->resourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigRuleEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateConfigRuleEvaluationResultsResponse(callApi(params, req, runtime));
}

ListAggregateConfigRuleEvaluationResultsResponse Alibabacloud_Config20200907::Client::listAggregateConfigRuleEvaluationResults(shared_ptr<ListAggregateConfigRuleEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateConfigRuleEvaluationResultsWithOptions(request, runtime);
}

ListAggregateConfigRuleEvaluationStatisticsResponse Alibabacloud_Config20200907::Client::listAggregateConfigRuleEvaluationStatisticsWithOptions(shared_ptr<ListAggregateConfigRuleEvaluationStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigRuleEvaluationStatistics"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateConfigRuleEvaluationStatisticsResponse(callApi(params, req, runtime));
}

ListAggregateConfigRuleEvaluationStatisticsResponse Alibabacloud_Config20200907::Client::listAggregateConfigRuleEvaluationStatistics(shared_ptr<ListAggregateConfigRuleEvaluationStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateConfigRuleEvaluationStatisticsWithOptions(request, runtime);
}

ListAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::listAggregateConfigRulesWithOptions(shared_ptr<ListAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    query->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleState)) {
    query->insert(pair<string, string>("ConfigRuleState", *request->configRuleState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    query->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateConfigRulesResponse(callApi(params, req, runtime));
}

ListAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::listAggregateConfigRules(shared_ptr<ListAggregateConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateConfigRulesWithOptions(request, runtime);
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20200907::Client::listAggregateDiscoveredResourcesWithOptions(shared_ptr<ListAggregateDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endUpdateTimestamp)) {
    query->insert(pair<string, long>("EndUpdateTimestamp", *request->endUpdateTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceTypes)) {
    query->insert(pair<string, string>("ExcludeResourceTypes", *request->excludeResourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startUpdateTimestamp)) {
    query->insert(pair<string, long>("StartUpdateTimestamp", *request->startUpdateTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateDiscoveredResources"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateDiscoveredResourcesResponse(callApi(params, req, runtime));
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20200907::Client::listAggregateDiscoveredResources(shared_ptr<ListAggregateDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateDiscoveredResourcesWithOptions(request, runtime);
}

ListAggregateRemediationExecutionsResponse Alibabacloud_Config20200907::Client::listAggregateRemediationExecutionsWithOptions(shared_ptr<ListAggregateRemediationExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionStatus)) {
    query->insert(pair<string, string>("ExecutionStatus", *request->executionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateRemediationExecutions"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateRemediationExecutionsResponse(callApi(params, req, runtime));
}

ListAggregateRemediationExecutionsResponse Alibabacloud_Config20200907::Client::listAggregateRemediationExecutions(shared_ptr<ListAggregateRemediationExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateRemediationExecutionsWithOptions(request, runtime);
}

ListAggregateRemediationsResponse Alibabacloud_Config20200907::Client::listAggregateRemediationsWithOptions(shared_ptr<ListAggregateRemediationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateRemediations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateRemediationsResponse(callApi(params, req, runtime));
}

ListAggregateRemediationsResponse Alibabacloud_Config20200907::Client::listAggregateRemediations(shared_ptr<ListAggregateRemediationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateRemediationsWithOptions(request, runtime);
}

ListAggregateResourceEvaluationResultsResponse Alibabacloud_Config20200907::Client::listAggregateResourceEvaluationResultsWithOptions(shared_ptr<ListAggregateResourceEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateResourceEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateResourceEvaluationResultsResponse(callApi(params, req, runtime));
}

ListAggregateResourceEvaluationResultsResponse Alibabacloud_Config20200907::Client::listAggregateResourceEvaluationResults(shared_ptr<ListAggregateResourceEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateResourceEvaluationResultsWithOptions(request, runtime);
}

ListAggregateResourceRelationsResponse Alibabacloud_Config20200907::Client::listAggregateResourceRelationsWithOptions(shared_ptr<ListAggregateResourceRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetResourceId)) {
    query->insert(pair<string, string>("TargetResourceId", *request->targetResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetResourceType)) {
    query->insert(pair<string, string>("TargetResourceType", *request->targetResourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateResourceRelations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateResourceRelationsResponse(callApi(params, req, runtime));
}

ListAggregateResourceRelationsResponse Alibabacloud_Config20200907::Client::listAggregateResourceRelations(shared_ptr<ListAggregateResourceRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateResourceRelationsWithOptions(request, runtime);
}

ListAggregateResourcesByAdvancedSearchResponse Alibabacloud_Config20200907::Client::listAggregateResourcesByAdvancedSearchWithOptions(shared_ptr<ListAggregateResourcesByAdvancedSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("Sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateResourcesByAdvancedSearch"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateResourcesByAdvancedSearchResponse(callApi(params, req, runtime));
}

ListAggregateResourcesByAdvancedSearchResponse Alibabacloud_Config20200907::Client::listAggregateResourcesByAdvancedSearch(shared_ptr<ListAggregateResourcesByAdvancedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateResourcesByAdvancedSearchWithOptions(request, runtime);
}

ListAggregatorsResponse Alibabacloud_Config20200907::Client::listAggregatorsWithOptions(shared_ptr<ListAggregatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregators"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregatorsResponse(callApi(params, req, runtime));
}

ListAggregatorsResponse Alibabacloud_Config20200907::Client::listAggregators(shared_ptr<ListAggregatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregatorsWithOptions(request, runtime);
}

ListCompliancePackTemplatesResponse Alibabacloud_Config20200907::Client::listCompliancePackTemplatesWithOptions(shared_ptr<ListCompliancePackTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackTemplateId)) {
    query->insert(pair<string, string>("CompliancePackTemplateId", *request->compliancePackTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCompliancePackTemplates"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCompliancePackTemplatesResponse(callApi(params, req, runtime));
}

ListCompliancePackTemplatesResponse Alibabacloud_Config20200907::Client::listCompliancePackTemplates(shared_ptr<ListCompliancePackTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCompliancePackTemplatesWithOptions(request, runtime);
}

ListCompliancePacksResponse Alibabacloud_Config20200907::Client::listCompliancePacksWithOptions(shared_ptr<ListCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCompliancePacksResponse(callApi(params, req, runtime));
}

ListCompliancePacksResponse Alibabacloud_Config20200907::Client::listCompliancePacks(shared_ptr<ListCompliancePacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCompliancePacksWithOptions(request, runtime);
}

ListConfigDeliveryChannelsResponse Alibabacloud_Config20200907::Client::listConfigDeliveryChannelsWithOptions(shared_ptr<ListConfigDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelIds)) {
    query->insert(pair<string, string>("DeliveryChannelIds", *request->deliveryChannelIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigDeliveryChannels"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigDeliveryChannelsResponse(callApi(params, req, runtime));
}

ListConfigDeliveryChannelsResponse Alibabacloud_Config20200907::Client::listConfigDeliveryChannels(shared_ptr<ListConfigDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigDeliveryChannelsWithOptions(request, runtime);
}

ListConfigRuleEvaluationResultsResponse Alibabacloud_Config20200907::Client::listConfigRuleEvaluationResultsWithOptions(shared_ptr<ListConfigRuleEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigRuleEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigRuleEvaluationResultsResponse(callApi(params, req, runtime));
}

ListConfigRuleEvaluationResultsResponse Alibabacloud_Config20200907::Client::listConfigRuleEvaluationResults(shared_ptr<ListConfigRuleEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRuleEvaluationResultsWithOptions(request, runtime);
}

ListConfigRuleEvaluationStatisticsResponse Alibabacloud_Config20200907::Client::listConfigRuleEvaluationStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigRuleEvaluationStatistics"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigRuleEvaluationStatisticsResponse(callApi(params, req, runtime));
}

ListConfigRuleEvaluationStatisticsResponse Alibabacloud_Config20200907::Client::listConfigRuleEvaluationStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRuleEvaluationStatisticsWithOptions(runtime);
}

ListConfigRulesResponse Alibabacloud_Config20200907::Client::listConfigRulesWithOptions(shared_ptr<ListConfigRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListConfigRulesShrinkRequest> request = make_shared<ListConfigRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListConfigRulesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    query->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleState)) {
    query->insert(pair<string, string>("ConfigRuleState", *request->configRuleState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    query->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigRulesResponse(callApi(params, req, runtime));
}

ListConfigRulesResponse Alibabacloud_Config20200907::Client::listConfigRules(shared_ptr<ListConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRulesWithOptions(request, runtime);
}

ListDiscoveredResourcesResponse Alibabacloud_Config20200907::Client::listDiscoveredResourcesWithOptions(shared_ptr<ListDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endUpdateTimestamp)) {
    query->insert(pair<string, long>("EndUpdateTimestamp", *request->endUpdateTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceTypes)) {
    query->insert(pair<string, string>("ExcludeResourceTypes", *request->excludeResourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startUpdateTimestamp)) {
    query->insert(pair<string, long>("StartUpdateTimestamp", *request->startUpdateTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiscoveredResources"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiscoveredResourcesResponse(callApi(params, req, runtime));
}

ListDiscoveredResourcesResponse Alibabacloud_Config20200907::Client::listDiscoveredResources(shared_ptr<ListDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDiscoveredResourcesWithOptions(request, runtime);
}

ListIntegratedServiceResponse Alibabacloud_Config20200907::Client::listIntegratedServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntegratedService"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntegratedServiceResponse(callApi(params, req, runtime));
}

ListIntegratedServiceResponse Alibabacloud_Config20200907::Client::listIntegratedService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntegratedServiceWithOptions(runtime);
}

ListManagedRulesResponse Alibabacloud_Config20200907::Client::listManagedRulesWithOptions(shared_ptr<ListManagedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    query->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManagedRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListManagedRulesResponse(callApi(params, req, runtime));
}

ListManagedRulesResponse Alibabacloud_Config20200907::Client::listManagedRules(shared_ptr<ListManagedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listManagedRulesWithOptions(request, runtime);
}

ListPreManagedRulesResponse Alibabacloud_Config20200907::Client::listPreManagedRulesWithOptions(shared_ptr<ListPreManagedRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPreManagedRulesShrinkRequest> request = make_shared<ListPreManagedRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceTypes)) {
    request->resourceTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceTypes, make_shared<string>("ResourceTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypesShrink)) {
    body->insert(pair<string, string>("ResourceTypes", *request->resourceTypesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPreManagedRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPreManagedRulesResponse(callApi(params, req, runtime));
}

ListPreManagedRulesResponse Alibabacloud_Config20200907::Client::listPreManagedRules(shared_ptr<ListPreManagedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPreManagedRulesWithOptions(request, runtime);
}

ListRemediationExecutionsResponse Alibabacloud_Config20200907::Client::listRemediationExecutionsWithOptions(shared_ptr<ListRemediationExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionStatus)) {
    query->insert(pair<string, string>("ExecutionStatus", *request->executionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRemediationExecutions"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemediationExecutionsResponse(callApi(params, req, runtime));
}

ListRemediationExecutionsResponse Alibabacloud_Config20200907::Client::listRemediationExecutions(shared_ptr<ListRemediationExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemediationExecutionsWithOptions(request, runtime);
}

ListRemediationTemplatesResponse Alibabacloud_Config20200907::Client::listRemediationTemplatesWithOptions(shared_ptr<ListRemediationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->managedRuleIdentifier)) {
    query->insert(pair<string, string>("ManagedRuleIdentifier", *request->managedRuleIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    query->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRemediationTemplates"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemediationTemplatesResponse(callApi(params, req, runtime));
}

ListRemediationTemplatesResponse Alibabacloud_Config20200907::Client::listRemediationTemplates(shared_ptr<ListRemediationTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemediationTemplatesWithOptions(request, runtime);
}

ListRemediationsResponse Alibabacloud_Config20200907::Client::listRemediationsWithOptions(shared_ptr<ListRemediationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
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
    {"action", boost::any(string("ListRemediations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemediationsResponse(callApi(params, req, runtime));
}

ListRemediationsResponse Alibabacloud_Config20200907::Client::listRemediations(shared_ptr<ListRemediationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemediationsWithOptions(request, runtime);
}

ListResourceEvaluationResultsResponse Alibabacloud_Config20200907::Client::listResourceEvaluationResultsWithOptions(shared_ptr<ListResourceEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceType)) {
    query->insert(pair<string, string>("ComplianceType", *request->complianceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceEvaluationResultsResponse(callApi(params, req, runtime));
}

ListResourceEvaluationResultsResponse Alibabacloud_Config20200907::Client::listResourceEvaluationResults(shared_ptr<ListResourceEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceEvaluationResultsWithOptions(request, runtime);
}

ListResourceRelationsResponse Alibabacloud_Config20200907::Client::listResourceRelationsWithOptions(shared_ptr<ListResourceRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetResourceId)) {
    query->insert(pair<string, string>("TargetResourceId", *request->targetResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetResourceType)) {
    query->insert(pair<string, string>("TargetResourceType", *request->targetResourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceRelations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceRelationsResponse(callApi(params, req, runtime));
}

ListResourceRelationsResponse Alibabacloud_Config20200907::Client::listResourceRelations(shared_ptr<ListResourceRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceRelationsWithOptions(request, runtime);
}

ListResourcesByAdvancedSearchResponse Alibabacloud_Config20200907::Client::listResourcesByAdvancedSearchWithOptions(shared_ptr<ListResourcesByAdvancedSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("Sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourcesByAdvancedSearch"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesByAdvancedSearchResponse(callApi(params, req, runtime));
}

ListResourcesByAdvancedSearchResponse Alibabacloud_Config20200907::Client::listResourcesByAdvancedSearch(shared_ptr<ListResourcesByAdvancedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcesByAdvancedSearchWithOptions(request, runtime);
}

ListSupportedProductsResponse Alibabacloud_Config20200907::Client::listSupportedProductsWithOptions(shared_ptr<ListSupportedProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSupportedProducts"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSupportedProductsResponse(callApi(params, req, runtime));
}

ListSupportedProductsResponse Alibabacloud_Config20200907::Client::listSupportedProducts(shared_ptr<ListSupportedProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSupportedProductsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Config20200907::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    body->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Config20200907::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

PutEvaluationsResponse Alibabacloud_Config20200907::Client::putEvaluationsWithOptions(shared_ptr<PutEvaluationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteMode)) {
    body->insert(pair<string, bool>("DeleteMode", *request->deleteMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->evaluations)) {
    body->insert(pair<string, string>("Evaluations", *request->evaluations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultToken)) {
    body->insert(pair<string, string>("ResultToken", *request->resultToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutEvaluations"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutEvaluationsResponse(callApi(params, req, runtime));
}

PutEvaluationsResponse Alibabacloud_Config20200907::Client::putEvaluations(shared_ptr<PutEvaluationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putEvaluationsWithOptions(request, runtime);
}

RevertAggregateEvaluationResultsResponse Alibabacloud_Config20200907::Client::revertAggregateEvaluationResultsWithOptions(shared_ptr<RevertAggregateEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevertAggregateEvaluationResultsShrinkRequest> request = make_shared<RevertAggregateEvaluationResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RevertAggregateEvaluationResultsRequestResources>>(tmpReq->resources)) {
    request->resourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resources, make_shared<string>("Resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcesShrink)) {
    body->insert(pair<string, string>("Resources", *request->resourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevertAggregateEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevertAggregateEvaluationResultsResponse(callApi(params, req, runtime));
}

RevertAggregateEvaluationResultsResponse Alibabacloud_Config20200907::Client::revertAggregateEvaluationResults(shared_ptr<RevertAggregateEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revertAggregateEvaluationResultsWithOptions(request, runtime);
}

RevertEvaluationResultsResponse Alibabacloud_Config20200907::Client::revertEvaluationResultsWithOptions(shared_ptr<RevertEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevertEvaluationResultsShrinkRequest> request = make_shared<RevertEvaluationResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RevertEvaluationResultsRequestResources>>(tmpReq->resources)) {
    request->resourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resources, make_shared<string>("Resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcesShrink)) {
    body->insert(pair<string, string>("Resources", *request->resourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevertEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevertEvaluationResultsResponse(callApi(params, req, runtime));
}

RevertEvaluationResultsResponse Alibabacloud_Config20200907::Client::revertEvaluationResults(shared_ptr<RevertEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revertEvaluationResultsWithOptions(request, runtime);
}

StartAggregateConfigRuleEvaluationResponse Alibabacloud_Config20200907::Client::startAggregateConfigRuleEvaluationWithOptions(shared_ptr<StartAggregateConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->revertEvaluation)) {
    query->insert(pair<string, bool>("RevertEvaluation", *request->revertEvaluation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAggregateConfigRuleEvaluation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAggregateConfigRuleEvaluationResponse(callApi(params, req, runtime));
}

StartAggregateConfigRuleEvaluationResponse Alibabacloud_Config20200907::Client::startAggregateConfigRuleEvaluation(shared_ptr<StartAggregateConfigRuleEvaluationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAggregateConfigRuleEvaluationWithOptions(request, runtime);
}

StartAggregateRemediationResponse Alibabacloud_Config20200907::Client::startAggregateRemediationWithOptions(shared_ptr<StartAggregateRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceAccountId)) {
    query->insert(pair<string, long>("ResourceAccountId", *request->resourceAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAggregateRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAggregateRemediationResponse(callApi(params, req, runtime));
}

StartAggregateRemediationResponse Alibabacloud_Config20200907::Client::startAggregateRemediation(shared_ptr<StartAggregateRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAggregateRemediationWithOptions(request, runtime);
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20200907::Client::startConfigRuleEvaluationWithOptions(shared_ptr<StartConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->revertEvaluation)) {
    query->insert(pair<string, bool>("RevertEvaluation", *request->revertEvaluation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartConfigRuleEvaluation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartConfigRuleEvaluationResponse(callApi(params, req, runtime));
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20200907::Client::startConfigRuleEvaluation(shared_ptr<StartConfigRuleEvaluationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigRuleEvaluationWithOptions(request, runtime);
}

StartConfigurationRecorderResponse Alibabacloud_Config20200907::Client::startConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartConfigurationRecorder"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartConfigurationRecorderResponse(callApi(params, req, runtime));
}

StartConfigurationRecorderResponse Alibabacloud_Config20200907::Client::startConfigurationRecorder() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigurationRecorderWithOptions(runtime);
}

StartRemediationResponse Alibabacloud_Config20200907::Client::startRemediationWithOptions(shared_ptr<StartRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartRemediationResponse(callApi(params, req, runtime));
}

StartRemediationResponse Alibabacloud_Config20200907::Client::startRemediation(shared_ptr<StartRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRemediationWithOptions(request, runtime);
}

StopConfigurationRecorderResponse Alibabacloud_Config20200907::Client::stopConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopConfigurationRecorder"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopConfigurationRecorderResponse(callApi(params, req, runtime));
}

StopConfigurationRecorderResponse Alibabacloud_Config20200907::Client::stopConfigurationRecorder() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopConfigurationRecorderWithOptions(runtime);
}

TagResourcesResponse Alibabacloud_Config20200907::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TagResourcesShrinkRequest> request = make_shared<TagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    body->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Config20200907::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Config20200907::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    body->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    body->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Config20200907::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::updateAggregateCompliancePackWithOptions(shared_ptr<UpdateAggregateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAggregateCompliancePackShrinkRequest> request = make_shared<UpdateAggregateCompliancePackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregateCompliancePackRequestConfigRules>>(tmpReq->configRules)) {
    request->configRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configRules, make_shared<string>("ConfigRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    body->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackName)) {
    body->insert(pair<string, string>("CompliancePackName", *request->compliancePackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRulesShrink)) {
    body->insert(pair<string, string>("ConfigRules", *request->configRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregateCompliancePackShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateAggregateCompliancePackShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAggregateCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAggregateCompliancePackResponse(callApi(params, req, runtime));
}

UpdateAggregateCompliancePackResponse Alibabacloud_Config20200907::Client::updateAggregateCompliancePack(shared_ptr<UpdateAggregateCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAggregateCompliancePackWithOptions(request, runtime);
}

UpdateAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateAggregateConfigDeliveryChannelWithOptions(shared_ptr<UpdateAggregateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compliantSnapshot)) {
    query->insert(pair<string, bool>("CompliantSnapshot", *request->compliantSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    query->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    query->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    query->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    query->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverySnapshotTime)) {
    query->insert(pair<string, string>("DeliverySnapshotTime", *request->deliverySnapshotTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    query->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    query->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAggregateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAggregateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

UpdateAggregateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateAggregateConfigDeliveryChannel(shared_ptr<UpdateAggregateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

UpdateAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::updateAggregateConfigRuleWithOptions(shared_ptr<UpdateAggregateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAggregateConfigRuleShrinkRequest> request = make_shared<UpdateAggregateConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->inputParameters)) {
    request->inputParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputParameters, make_shared<string>("InputParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceTypesScope)) {
    request->resourceTypesScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceTypesScope, make_shared<string>("ResourceTypesScope"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsScope)) {
    body->insert(pair<string, string>("AccountIdsScope", *request->accountIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    body->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleTriggerTypes)) {
    body->insert(pair<string, string>("ConfigRuleTriggerTypes", *request->configRuleTriggerTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeAccountIdsScope)) {
    body->insert(pair<string, string>("ExcludeAccountIdsScope", *request->excludeAccountIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeFolderIdsScope)) {
    body->insert(pair<string, string>("ExcludeFolderIdsScope", *request->excludeFolderIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregateConfigRuleShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateAggregateConfigRuleShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderIdsScope)) {
    body->insert(pair<string, string>("FolderIdsScope", *request->folderIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParametersShrink)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maximumExecutionFrequency)) {
    body->insert(pair<string, string>("MaximumExecutionFrequency", *request->maximumExecutionFrequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypesScopeShrink)) {
    body->insert(pair<string, string>("ResourceTypesScope", *request->resourceTypesScopeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyLogicScope)) {
    body->insert(pair<string, string>("TagKeyLogicScope", *request->tagKeyLogicScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregateConfigRuleShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateAggregateConfigRuleShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAggregateConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAggregateConfigRuleResponse(callApi(params, req, runtime));
}

UpdateAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::updateAggregateConfigRule(shared_ptr<UpdateAggregateConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAggregateConfigRuleWithOptions(request, runtime);
}

UpdateAggregateRemediationResponse Alibabacloud_Config20200907::Client::updateAggregateRemediationWithOptions(shared_ptr<UpdateAggregateRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeType)) {
    body->insert(pair<string, string>("InvokeType", *request->invokeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationId)) {
    body->insert(pair<string, string>("RemediationId", *request->remediationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationTemplateId)) {
    body->insert(pair<string, string>("RemediationTemplateId", *request->remediationTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    body->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAggregateRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAggregateRemediationResponse(callApi(params, req, runtime));
}

UpdateAggregateRemediationResponse Alibabacloud_Config20200907::Client::updateAggregateRemediation(shared_ptr<UpdateAggregateRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAggregateRemediationWithOptions(request, runtime);
}

UpdateAggregatorResponse Alibabacloud_Config20200907::Client::updateAggregatorWithOptions(shared_ptr<UpdateAggregatorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAggregatorShrinkRequest> request = make_shared<UpdateAggregatorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAggregatorRequestAggregatorAccounts>>(tmpReq->aggregatorAccounts)) {
    request->aggregatorAccountsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aggregatorAccounts, make_shared<string>("AggregatorAccounts"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorAccountsShrink)) {
    body->insert(pair<string, string>("AggregatorAccounts", *request->aggregatorAccountsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    body->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorName)) {
    body->insert(pair<string, string>("AggregatorName", *request->aggregatorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAggregator"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAggregatorResponse(callApi(params, req, runtime));
}

UpdateAggregatorResponse Alibabacloud_Config20200907::Client::updateAggregator(shared_ptr<UpdateAggregatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAggregatorWithOptions(request, runtime);
}

UpdateCompliancePackResponse Alibabacloud_Config20200907::Client::updateCompliancePackWithOptions(shared_ptr<UpdateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateCompliancePackShrinkRequest> request = make_shared<UpdateCompliancePackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCompliancePackRequestConfigRules>>(tmpReq->configRules)) {
    request->configRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configRules, make_shared<string>("ConfigRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    body->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackName)) {
    body->insert(pair<string, string>("CompliancePackName", *request->compliancePackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRulesShrink)) {
    body->insert(pair<string, string>("ConfigRules", *request->configRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCompliancePackShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateCompliancePackShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCompliancePackShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateCompliancePackShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCompliancePack"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCompliancePackResponse(callApi(params, req, runtime));
}

UpdateCompliancePackResponse Alibabacloud_Config20200907::Client::updateCompliancePack(shared_ptr<UpdateCompliancePackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCompliancePackWithOptions(request, runtime);
}

UpdateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateConfigDeliveryChannelWithOptions(shared_ptr<UpdateConfigDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compliantSnapshot)) {
    query->insert(pair<string, bool>("CompliantSnapshot", *request->compliantSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    query->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    query->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    query->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    query->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverySnapshotTime)) {
    query->insert(pair<string, string>("DeliverySnapshotTime", *request->deliverySnapshotTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    query->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    query->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigDeliveryChannelResponse(callApi(params, req, runtime));
}

UpdateConfigDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateConfigDeliveryChannel(shared_ptr<UpdateConfigDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigDeliveryChannelWithOptions(request, runtime);
}

UpdateConfigRuleResponse Alibabacloud_Config20200907::Client::updateConfigRuleWithOptions(shared_ptr<UpdateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateConfigRuleShrinkRequest> request = make_shared<UpdateConfigRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->inputParameters)) {
    request->inputParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputParameters, make_shared<string>("InputParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceTypesScope)) {
    request->resourceTypesScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceTypesScope, make_shared<string>("ResourceTypesScope"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateConfigRuleRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    body->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleTriggerTypes)) {
    body->insert(pair<string, string>("ConfigRuleTriggerTypes", *request->configRuleTriggerTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRegionIdsScope)) {
    body->insert(pair<string, string>("ExcludeRegionIdsScope", *request->excludeRegionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceGroupIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceGroupIdsScope", *request->excludeResourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateConfigRuleShrinkRequestExcludeTagsScope>>(request->excludeTagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateConfigRuleShrinkRequestExcludeTagsScope>>("ExcludeTagsScope", *request->excludeTagsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendContent)) {
    body->insert(pair<string, string>("ExtendContent", *request->extendContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParametersShrink)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maximumExecutionFrequency)) {
    body->insert(pair<string, string>("MaximumExecutionFrequency", *request->maximumExecutionFrequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsScope)) {
    body->insert(pair<string, string>("RegionIdsScope", *request->regionIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdsScope)) {
    body->insert(pair<string, string>("ResourceGroupIdsScope", *request->resourceGroupIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsScope)) {
    body->insert(pair<string, string>("ResourceIdsScope", *request->resourceIdsScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypesScopeShrink)) {
    body->insert(pair<string, string>("ResourceTypesScope", *request->resourceTypesScopeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyLogicScope)) {
    body->insert(pair<string, string>("TagKeyLogicScope", *request->tagKeyLogicScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyScope)) {
    body->insert(pair<string, string>("TagKeyScope", *request->tagKeyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValueScope)) {
    body->insert(pair<string, string>("TagValueScope", *request->tagValueScope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateConfigRuleShrinkRequestTagsScope>>(request->tagsScope)) {
    bodyFlat->insert(pair<string, vector<UpdateConfigRuleShrinkRequestTagsScope>>("TagsScope", *request->tagsScope));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigRule"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigRuleResponse(callApi(params, req, runtime));
}

UpdateConfigRuleResponse Alibabacloud_Config20200907::Client::updateConfigRule(shared_ptr<UpdateConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigRuleWithOptions(request, runtime);
}

UpdateConfigurationRecorderResponse Alibabacloud_Config20200907::Client::updateConfigurationRecorderWithOptions(shared_ptr<UpdateConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    body->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigurationRecorder"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigurationRecorderResponse(callApi(params, req, runtime));
}

UpdateConfigurationRecorderResponse Alibabacloud_Config20200907::Client::updateConfigurationRecorder(shared_ptr<UpdateConfigurationRecorderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigurationRecorderWithOptions(request, runtime);
}

UpdateDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateDeliveryChannelWithOptions(shared_ptr<UpdateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationItemChangeNotification)) {
    body->insert(pair<string, bool>("ConfigurationItemChangeNotification", *request->configurationItemChangeNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configurationSnapshot)) {
    body->insert(pair<string, bool>("ConfigurationSnapshot", *request->configurationSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelAssumeRoleArn)) {
    body->insert(pair<string, string>("DeliveryChannelAssumeRoleArn", *request->deliveryChannelAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    body->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    body->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    body->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    body->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nonCompliantNotification)) {
    body->insert(pair<string, bool>("NonCompliantNotification", *request->nonCompliantNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversizedDataOSSTargetArn)) {
    body->insert(pair<string, string>("OversizedDataOSSTargetArn", *request->oversizedDataOSSTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeliveryChannel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeliveryChannelResponse(callApi(params, req, runtime));
}

UpdateDeliveryChannelResponse Alibabacloud_Config20200907::Client::updateDeliveryChannel(shared_ptr<UpdateDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeliveryChannelWithOptions(request, runtime);
}

UpdateIntegratedServiceStatusResponse Alibabacloud_Config20200907::Client::updateIntegratedServiceStatusWithOptions(shared_ptr<UpdateIntegratedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorDeliveryDataType)) {
    body->insert(pair<string, string>("AggregatorDeliveryDataType", *request->aggregatorDeliveryDataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integratedTypes)) {
    body->insert(pair<string, string>("IntegratedTypes", *request->integratedTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    body->insert(pair<string, bool>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIntegratedServiceStatus"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIntegratedServiceStatusResponse(callApi(params, req, runtime));
}

UpdateIntegratedServiceStatusResponse Alibabacloud_Config20200907::Client::updateIntegratedServiceStatus(shared_ptr<UpdateIntegratedServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIntegratedServiceStatusWithOptions(request, runtime);
}

UpdateRemediationResponse Alibabacloud_Config20200907::Client::updateRemediationWithOptions(shared_ptr<UpdateRemediationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeType)) {
    body->insert(pair<string, string>("InvokeType", *request->invokeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationId)) {
    body->insert(pair<string, string>("RemediationId", *request->remediationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationTemplateId)) {
    body->insert(pair<string, string>("RemediationTemplateId", *request->remediationTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    body->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRemediation"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRemediationResponse(callApi(params, req, runtime));
}

UpdateRemediationResponse Alibabacloud_Config20200907::Client::updateRemediation(shared_ptr<UpdateRemediationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRemediationWithOptions(request, runtime);
}

