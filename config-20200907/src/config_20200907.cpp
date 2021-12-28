// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/config_20200907.hpp>
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
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
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

DeactiveAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::deactiveAggregateConfigRulesWithOptions(shared_ptr<DeactiveAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

GetAggregateConfigRuleResponse Alibabacloud_Config20200907::Client::getAggregateConfigRuleWithOptions(shared_ptr<GetAggregateConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateConfigRuleSummaryByRiskLevel"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceCountsGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateResourceCountsGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

GetAggregatorResponse Alibabacloud_Config20200907::Client::getAggregatorWithOptions(shared_ptr<GetAggregatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregator"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

GetConfigRuleResponse Alibabacloud_Config20200907::Client::getConfigRuleWithOptions(shared_ptr<GetConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
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
    {"method", boost::any(string("GET"))},
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

GetDiscoveredResourceCountsGroupByRegionResponse Alibabacloud_Config20200907::Client::getDiscoveredResourceCountsGroupByRegionWithOptions(shared_ptr<GetDiscoveredResourceCountsGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceCountsGroupByRegion"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceCountsGroupByResourceType"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

ListAggregateConfigRuleEvaluationResultsResponse Alibabacloud_Config20200907::Client::listAggregateConfigRuleEvaluationResultsWithOptions(shared_ptr<ListAggregateConfigRuleEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigRuleEvaluationResults"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

ListAggregateConfigRulesResponse Alibabacloud_Config20200907::Client::listAggregateConfigRulesWithOptions(shared_ptr<ListAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateConfigRules"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

ListAggregatorsResponse Alibabacloud_Config20200907::Client::listAggregatorsWithOptions(shared_ptr<ListAggregatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregators"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCompliancePackTemplates"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCompliancePacks"))},
    {"version", boost::any(string("2020-09-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeResourceIdsScope)) {
    body->insert(pair<string, string>("ExcludeResourceIdsScope", *request->excludeResourceIdsScope));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
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

