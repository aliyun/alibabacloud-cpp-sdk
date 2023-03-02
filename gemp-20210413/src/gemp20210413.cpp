// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/gemp20210413.hpp>
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

using namespace Alibabacloud_GEMP20210413;

Alibabacloud_GEMP20210413::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("gemp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_GEMP20210413::Client::getEndpoint(shared_ptr<string> productId,
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

AddProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::addProblemServiceGroupWithOptions(shared_ptr<AddProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    body->insert(pair<string, vector<long>>("serviceGroupIds", *request->serviceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProblemServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/addServiceGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProblemServiceGroupResponse(callApi(params, req, runtime));
}

AddProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::addProblemServiceGroup(shared_ptr<AddProblemServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addProblemServiceGroupWithOptions(request, headers, runtime);
}

BillingStatisticsResponse Alibabacloud_GEMP20210413::Client::billingStatisticsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BillingStatistics"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/charging/details"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BillingStatisticsResponse(callApi(params, req, runtime));
}

BillingStatisticsResponse Alibabacloud_GEMP20210413::Client::billingStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return billingStatisticsWithOptions(headers, runtime);
}

CancelProblemResponse Alibabacloud_GEMP20210413::Client::cancelProblemWithOptions(shared_ptr<CancelProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cancelReason)) {
    body->insert(pair<string, long>("cancelReason", *request->cancelReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cancelReasonDescription)) {
    body->insert(pair<string, string>("cancelReasonDescription", *request->cancelReasonDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemNotifyType)) {
    body->insert(pair<string, long>("problemNotifyType", *request->problemNotifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelProblemResponse(callApi(params, req, runtime));
}

CancelProblemResponse Alibabacloud_GEMP20210413::Client::cancelProblem(shared_ptr<CancelProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelProblemWithOptions(request, headers, runtime);
}

CheckWebhookResponse Alibabacloud_GEMP20210413::Client::checkWebhookWithOptions(shared_ptr<CheckWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhook)) {
    body->insert(pair<string, string>("webhook", *request->webhook));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookType)) {
    body->insert(pair<string, string>("webhookType", *request->webhookType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckWebhook"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/check/webhook"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckWebhookResponse(callApi(params, req, runtime));
}

CheckWebhookResponse Alibabacloud_GEMP20210413::Client::checkWebhook(shared_ptr<CheckWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkWebhookWithOptions(request, headers, runtime);
}

ConfirmIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::confirmIntegrationConfigWithOptions(shared_ptr<ConfirmIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/confirm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmIntegrationConfigResponse(callApi(params, req, runtime));
}

ConfirmIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::confirmIntegrationConfig(shared_ptr<ConfirmIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return confirmIntegrationConfigWithOptions(request, headers, runtime);
}

CreateEscalationPlanResponse Alibabacloud_GEMP20210413::Client::createEscalationPlanWithOptions(shared_ptr<CreateEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->escalationPlanDescription)) {
    body->insert(pair<string, string>("escalationPlanDescription", *request->escalationPlanDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->escalationPlanName)) {
    body->insert(pair<string, string>("escalationPlanName", *request->escalationPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEscalationPlanRequestEscalationPlanRules>>(request->escalationPlanRules)) {
    body->insert(pair<string, vector<CreateEscalationPlanRequestEscalationPlanRules>>("escalationPlanRules", *request->escalationPlanRules));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEscalationPlanRequestEscalationPlanScopeObjects>>(request->escalationPlanScopeObjects)) {
    body->insert(pair<string, vector<CreateEscalationPlanRequestEscalationPlanScopeObjects>>("escalationPlanScopeObjects", *request->escalationPlanScopeObjects));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEscalationPlanResponse(callApi(params, req, runtime));
}

CreateEscalationPlanResponse Alibabacloud_GEMP20210413::Client::createEscalationPlan(shared_ptr<CreateEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEscalationPlanWithOptions(request, headers, runtime);
}

CreateIncidentResponse Alibabacloud_GEMP20210413::Client::createIncidentWithOptions(shared_ptr<CreateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assignUserId)) {
    body->insert(pair<string, long>("assignUserId", *request->assignUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channels)) {
    body->insert(pair<string, vector<string>>("channels", *request->channels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    body->insert(pair<string, string>("effect", *request->effect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentDescription)) {
    body->insert(pair<string, string>("incidentDescription", *request->incidentDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    body->insert(pair<string, string>("incidentLevel", *request->incidentLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentTitle)) {
    body->insert(pair<string, string>("incidentTitle", *request->incidentTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/manualSave"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIncidentResponse(callApi(params, req, runtime));
}

CreateIncidentResponse Alibabacloud_GEMP20210413::Client::createIncident(shared_ptr<CreateIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIncidentWithOptions(request, headers, runtime);
}

CreateIncidentSubtotalResponse Alibabacloud_GEMP20210413::Client::createIncidentSubtotalWithOptions(shared_ptr<CreateIncidentSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIncidentSubtotal"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/save/subtotal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIncidentSubtotalResponse(callApi(params, req, runtime));
}

CreateIncidentSubtotalResponse Alibabacloud_GEMP20210413::Client::createIncidentSubtotal(shared_ptr<CreateIncidentSubtotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIncidentSubtotalWithOptions(request, headers, runtime);
}

CreateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::createIntegrationConfigWithOptions(shared_ptr<CreateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorSourceId)) {
    body->insert(pair<string, long>("monitorSourceId", *request->monitorSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntegrationConfigResponse(callApi(params, req, runtime));
}

CreateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::createIntegrationConfig(shared_ptr<CreateIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIntegrationConfigWithOptions(request, headers, runtime);
}

CreateProblemResponse Alibabacloud_GEMP20210413::Client::createProblemWithOptions(shared_ptr<CreateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->affectServiceIds)) {
    body->insert(pair<string, vector<long>>("affectServiceIds", *request->affectServiceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoverTime)) {
    body->insert(pair<string, string>("discoverTime", *request->discoverTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    body->insert(pair<string, long>("mainHandlerId", *request->mainHandlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preliminaryReason)) {
    body->insert(pair<string, string>("preliminaryReason", *request->preliminaryReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    body->insert(pair<string, string>("problemLevel", *request->problemLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemName)) {
    body->insert(pair<string, string>("problemName", *request->problemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    body->insert(pair<string, string>("problemNotifyType", *request->problemNotifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemStatus)) {
    body->insert(pair<string, string>("problemStatus", *request->problemStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->progressSummary)) {
    body->insert(pair<string, string>("progressSummary", *request->progressSummary));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->progressSummaryRichTextId)) {
    body->insert(pair<string, long>("progressSummaryRichTextId", *request->progressSummaryRichTextId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryTime)) {
    body->insert(pair<string, string>("recoveryTime", *request->recoveryTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    body->insert(pair<string, vector<long>>("serviceGroupIds", *request->serviceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemResponse(callApi(params, req, runtime));
}

CreateProblemResponse Alibabacloud_GEMP20210413::Client::createProblem(shared_ptr<CreateProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemWithOptions(request, headers, runtime);
}

CreateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::createProblemEffectionServiceWithOptions(shared_ptr<CreateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pictureUrl)) {
    body->insert(pair<string, vector<string>>("pictureUrl", *request->pictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    body->insert(pair<string, long>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblemEffectionService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/effectionService/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemEffectionServiceResponse(callApi(params, req, runtime));
}

CreateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::createProblemEffectionService(shared_ptr<CreateProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemEffectionServiceWithOptions(request, headers, runtime);
}

CreateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::createProblemMeasureWithOptions(shared_ptr<CreateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkStandard)) {
    body->insert(pair<string, string>("checkStandard", *request->checkStandard));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkUserId)) {
    body->insert(pair<string, long>("checkUserId", *request->checkUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->directorId)) {
    body->insert(pair<string, long>("directorId", *request->directorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planFinishTime)) {
    body->insert(pair<string, string>("planFinishTime", *request->planFinishTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stalkerId)) {
    body->insert(pair<string, long>("stalkerId", *request->stalkerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblemMeasure"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/improvement/measure/save"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemMeasureResponse(callApi(params, req, runtime));
}

CreateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::createProblemMeasure(shared_ptr<CreateProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemMeasureWithOptions(request, headers, runtime);
}

CreateProblemSubtotalResponse Alibabacloud_GEMP20210413::Client::createProblemSubtotalWithOptions(shared_ptr<CreateProblemSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblemSubtotal"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/save/subtotal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemSubtotalResponse(callApi(params, req, runtime));
}

CreateProblemSubtotalResponse Alibabacloud_GEMP20210413::Client::createProblemSubtotal(shared_ptr<CreateProblemSubtotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemSubtotalWithOptions(request, headers, runtime);
}

CreateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::createProblemTimelineWithOptions(shared_ptr<CreateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyNode)) {
    body->insert(pair<string, string>("keyNode", *request->keyNode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    body->insert(pair<string, string>("time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblemTimeline"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/timeline/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemTimelineResponse(callApi(params, req, runtime));
}

CreateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::createProblemTimeline(shared_ptr<CreateProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemTimelineWithOptions(request, headers, runtime);
}

CreateProblemTimelinesResponse Alibabacloud_GEMP20210413::Client::createProblemTimelinesWithOptions(shared_ptr<CreateProblemTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timelineNodes)) {
    body->insert(pair<string, string>("timelineNodes", *request->timelineNodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProblemTimelines"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/timeline/batchCreate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProblemTimelinesResponse(callApi(params, req, runtime));
}

CreateProblemTimelinesResponse Alibabacloud_GEMP20210413::Client::createProblemTimelines(shared_ptr<CreateProblemTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemTimelinesWithOptions(request, headers, runtime);
}

CreateRichTextResponse Alibabacloud_GEMP20210413::Client::createRichTextWithOptions(shared_ptr<CreateRichTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->richText)) {
    body->insert(pair<string, string>("richText", *request->richText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRichText"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/rich/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRichTextResponse(callApi(params, req, runtime));
}

CreateRichTextResponse Alibabacloud_GEMP20210413::Client::createRichText(shared_ptr<CreateRichTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRichTextWithOptions(request, headers, runtime);
}

CreateRouteRuleResponse Alibabacloud_GEMP20210413::Client::createRouteRuleWithOptions(shared_ptr<CreateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assignObjectId)) {
    body->insert(pair<string, long>("assignObjectId", *request->assignObjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assignObjectType)) {
    body->insert(pair<string, string>("assignObjectType", *request->assignObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childRuleRelation)) {
    body->insert(pair<string, string>("childRuleRelation", *request->childRuleRelation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->convergenceFields)) {
    body->insert(pair<string, vector<string>>("convergenceFields", *request->convergenceFields));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->convergenceType)) {
    body->insert(pair<string, long>("convergenceType", *request->convergenceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->coverageProblemLevels)) {
    body->insert(pair<string, vector<string>>("coverageProblemLevels", *request->coverageProblemLevels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effection)) {
    body->insert(pair<string, string>("effection", *request->effection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableStatus)) {
    body->insert(pair<string, string>("enableStatus", *request->enableStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    body->insert(pair<string, string>("incidentLevel", *request->incidentLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchCount)) {
    body->insert(pair<string, long>("matchCount", *request->matchCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notifyChannels)) {
    body->insert(pair<string, vector<string>>("notifyChannels", *request->notifyChannels));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->problemEffectionServices)) {
    body->insert(pair<string, vector<long>>("problemEffectionServices", *request->problemEffectionServices));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, ProblemLevelGroupValue>>(request->problemLevelGroup)) {
    body->insert(pair<string, map<string, ProblemLevelGroupValue>>("problemLevelGroup", *request->problemLevelGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRouteRuleRequestRouteChildRules>>(request->routeChildRules)) {
    body->insert(pair<string, vector<CreateRouteRuleRequestRouteChildRules>>("routeChildRules", *request->routeChildRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    body->insert(pair<string, string>("routeType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeWindow)) {
    body->insert(pair<string, long>("timeWindow", *request->timeWindow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeWindowUnit)) {
    body->insert(pair<string, string>("timeWindowUnit", *request->timeWindowUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/save"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRouteRuleResponse(callApi(params, req, runtime));
}

CreateRouteRuleResponse Alibabacloud_GEMP20210413::Client::createRouteRule(shared_ptr<CreateRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRouteRuleWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_GEMP20210413::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    body->insert(pair<string, string>("serviceDescription", *request->serviceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/save"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_GEMP20210413::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

CreateServiceGroupResponse Alibabacloud_GEMP20210413::Client::createServiceGroupWithOptions(shared_ptr<CreateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableWebhook)) {
    body->insert(pair<string, string>("enableWebhook", *request->enableWebhook));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceGroupRequestMonitorSourceTemplates>>(request->monitorSourceTemplates)) {
    body->insert(pair<string, vector<CreateServiceGroupRequestMonitorSourceTemplates>>("monitorSourceTemplates", *request->monitorSourceTemplates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupDescription)) {
    body->insert(pair<string, string>("serviceGroupDescription", *request->serviceGroupDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupName)) {
    body->insert(pair<string, string>("serviceGroupName", *request->serviceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    body->insert(pair<string, vector<long>>("userIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookLink)) {
    body->insert(pair<string, string>("webhookLink", *request->webhookLink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookType)) {
    body->insert(pair<string, string>("webhookType", *request->webhookType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/insert"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceGroupResponse(callApi(params, req, runtime));
}

CreateServiceGroupResponse Alibabacloud_GEMP20210413::Client::createServiceGroup(shared_ptr<CreateServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceGroupWithOptions(request, headers, runtime);
}

CreateServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::createServiceGroupSchedulingWithOptions(shared_ptr<CreateServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceGroupSchedulingRequestFastScheduling>(request->fastScheduling)) {
    body->insert(pair<string, CreateServiceGroupSchedulingRequestFastScheduling>("fastScheduling", *request->fastScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceGroupSchedulingRequestFineScheduling>(request->fineScheduling)) {
    body->insert(pair<string, CreateServiceGroupSchedulingRequestFineScheduling>("fineScheduling", *request->fineScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingWay)) {
    body->insert(pair<string, string>("schedulingWay", *request->schedulingWay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceGroupScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/save"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceGroupSchedulingResponse(callApi(params, req, runtime));
}

CreateServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::createServiceGroupScheduling(shared_ptr<CreateServiceGroupSchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceGroupSchedulingWithOptions(request, headers, runtime);
}

CreateSubscriptionResponse Alibabacloud_GEMP20210413::Client::createSubscriptionWithOptions(shared_ptr<CreateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredType)) {
    body->insert(pair<string, long>("expiredType", *request->expiredType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestNotifyObjectList>>(request->notifyObjectList)) {
    body->insert(pair<string, vector<CreateSubscriptionRequestNotifyObjectList>>("notifyObjectList", *request->notifyObjectList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyObjectType)) {
    body->insert(pair<string, long>("notifyObjectType", *request->notifyObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestNotifyStrategyList>>(request->notifyStrategyList)) {
    body->insert(pair<string, vector<CreateSubscriptionRequestNotifyStrategyList>>("notifyStrategyList", *request->notifyStrategyList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestScopeObjectList>>(request->scopeObjectList)) {
    body->insert(pair<string, vector<CreateSubscriptionRequestScopeObjectList>>("scopeObjectList", *request->scopeObjectList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    body->insert(pair<string, string>("subscriptionTitle", *request->subscriptionTitle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscriptionResponse(callApi(params, req, runtime));
}

CreateSubscriptionResponse Alibabacloud_GEMP20210413::Client::createSubscription(shared_ptr<CreateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSubscriptionWithOptions(request, headers, runtime);
}

CreateTenantApplicationResponse Alibabacloud_GEMP20210413::Client::createTenantApplicationWithOptions(shared_ptr<CreateTenantApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTenantApplication"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/mobileApp/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTenantApplicationResponse(callApi(params, req, runtime));
}

CreateTenantApplicationResponse Alibabacloud_GEMP20210413::Client::createTenantApplication(shared_ptr<CreateTenantApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTenantApplicationWithOptions(request, headers, runtime);
}

CreateUserResponse Alibabacloud_GEMP20210413::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ramId)) {
    body->insert(pair<string, long>("ramId", *request->ramId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserResponse(callApi(params, req, runtime));
}

CreateUserResponse Alibabacloud_GEMP20210413::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserWithOptions(request, headers, runtime);
}

DeleteEscalationPlanResponse Alibabacloud_GEMP20210413::Client::deleteEscalationPlanWithOptions(shared_ptr<DeleteEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPlanId)) {
    body->insert(pair<string, long>("escalationPlanId", *request->escalationPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEscalationPlanResponse(callApi(params, req, runtime));
}

DeleteEscalationPlanResponse Alibabacloud_GEMP20210413::Client::deleteEscalationPlan(shared_ptr<DeleteEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEscalationPlanWithOptions(request, headers, runtime);
}

DeleteIncidentResponse Alibabacloud_GEMP20210413::Client::deleteIncidentWithOptions(shared_ptr<DeleteIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIncidentResponse(callApi(params, req, runtime));
}

DeleteIncidentResponse Alibabacloud_GEMP20210413::Client::deleteIncident(shared_ptr<DeleteIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIncidentWithOptions(request, headers, runtime);
}

DeleteIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::deleteIntegrationConfigWithOptions(shared_ptr<DeleteIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIntegrationConfigResponse(callApi(params, req, runtime));
}

DeleteIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::deleteIntegrationConfig(shared_ptr<DeleteIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIntegrationConfigWithOptions(request, headers, runtime);
}

DeleteProblemResponse Alibabacloud_GEMP20210413::Client::deleteProblemWithOptions(shared_ptr<DeleteProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProblemResponse(callApi(params, req, runtime));
}

DeleteProblemResponse Alibabacloud_GEMP20210413::Client::deleteProblem(shared_ptr<DeleteProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemWithOptions(request, headers, runtime);
}

DeleteProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::deleteProblemEffectionServiceWithOptions(shared_ptr<DeleteProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    body->insert(pair<string, long>("effectionServiceId", *request->effectionServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProblemEffectionService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/effectionService/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProblemEffectionServiceResponse(callApi(params, req, runtime));
}

DeleteProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::deleteProblemEffectionService(shared_ptr<DeleteProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemEffectionServiceWithOptions(request, headers, runtime);
}

DeleteProblemMeasureResponse Alibabacloud_GEMP20210413::Client::deleteProblemMeasureWithOptions(shared_ptr<DeleteProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->measureId)) {
    body->insert(pair<string, long>("measureId", *request->measureId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    body->insert(pair<string, string>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProblemMeasure"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/improvement/measure/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProblemMeasureResponse(callApi(params, req, runtime));
}

DeleteProblemMeasureResponse Alibabacloud_GEMP20210413::Client::deleteProblemMeasure(shared_ptr<DeleteProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemMeasureWithOptions(request, headers, runtime);
}

DeleteProblemTimelineResponse Alibabacloud_GEMP20210413::Client::deleteProblemTimelineWithOptions(shared_ptr<DeleteProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemTimelineId)) {
    body->insert(pair<string, long>("problemTimelineId", *request->problemTimelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProblemTimeline"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/timeline/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProblemTimelineResponse(callApi(params, req, runtime));
}

DeleteProblemTimelineResponse Alibabacloud_GEMP20210413::Client::deleteProblemTimeline(shared_ptr<DeleteProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemTimelineWithOptions(request, headers, runtime);
}

DeleteRouteRuleResponse Alibabacloud_GEMP20210413::Client::deleteRouteRuleWithOptions(shared_ptr<DeleteRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRouteRuleResponse(callApi(params, req, runtime));
}

DeleteRouteRuleResponse Alibabacloud_GEMP20210413::Client::deleteRouteRule(shared_ptr<DeleteRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRouteRuleWithOptions(request, headers, runtime);
}

DeleteServiceResponse Alibabacloud_GEMP20210413::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    body->insert(pair<string, long>("serviceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_GEMP20210413::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(request, headers, runtime);
}

DeleteServiceGroupResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupWithOptions(shared_ptr<DeleteServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceGroupResponse(callApi(params, req, runtime));
}

DeleteServiceGroupResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroup(shared_ptr<DeleteServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceGroupWithOptions(request, headers, runtime);
}

DeleteServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupSchedulingWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceGroupScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceGroupSchedulingResponse(callApi(params, req, runtime));
}

DeleteServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupScheduling() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceGroupSchedulingWithOptions(headers, runtime);
}

DeleteServiceGroupUserResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupUserWithOptions(shared_ptr<DeleteServiceGroupUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newUserId)) {
    body->insert(pair<string, long>("newUserId", *request->newUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oldUserId)) {
    body->insert(pair<string, long>("oldUserId", *request->oldUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeUser)) {
    body->insert(pair<string, bool>("removeUser", *request->removeUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceGroupUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/deleteServiceGroupUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceGroupUserResponse(callApi(params, req, runtime));
}

DeleteServiceGroupUserResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupUser(shared_ptr<DeleteServiceGroupUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceGroupUserWithOptions(request, headers, runtime);
}

DeleteSubscriptionResponse Alibabacloud_GEMP20210413::Client::deleteSubscriptionWithOptions(shared_ptr<DeleteSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    body->insert(pair<string, long>("subscriptionId", *request->subscriptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubscriptionResponse(callApi(params, req, runtime));
}

DeleteSubscriptionResponse Alibabacloud_GEMP20210413::Client::deleteSubscription(shared_ptr<DeleteSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSubscriptionWithOptions(request, headers, runtime);
}

DeleteUserResponse Alibabacloud_GEMP20210413::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_GEMP20210413::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUserWithOptions(request, headers, runtime);
}

DeliverIncidentResponse Alibabacloud_GEMP20210413::Client::deliverIncidentWithOptions(shared_ptr<DeliverIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assignUserId)) {
    body->insert(pair<string, long>("assignUserId", *request->assignUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeliverIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/deliver"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeliverIncidentResponse(callApi(params, req, runtime));
}

DeliverIncidentResponse Alibabacloud_GEMP20210413::Client::deliverIncident(shared_ptr<DeliverIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deliverIncidentWithOptions(request, headers, runtime);
}

DisableEscalationPlanResponse Alibabacloud_GEMP20210413::Client::disableEscalationPlanWithOptions(shared_ptr<DisableEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPlanId)) {
    body->insert(pair<string, long>("escalationPlanId", *request->escalationPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableEscalationPlanResponse(callApi(params, req, runtime));
}

DisableEscalationPlanResponse Alibabacloud_GEMP20210413::Client::disableEscalationPlan(shared_ptr<DisableEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableEscalationPlanWithOptions(request, headers, runtime);
}

DisableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::disableIntegrationConfigWithOptions(shared_ptr<DisableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableIntegrationConfigResponse(callApi(params, req, runtime));
}

DisableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::disableIntegrationConfig(shared_ptr<DisableIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableIntegrationConfigWithOptions(request, headers, runtime);
}

DisableRouteRuleResponse Alibabacloud_GEMP20210413::Client::disableRouteRuleWithOptions(shared_ptr<DisableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableRouteRuleResponse(callApi(params, req, runtime));
}

DisableRouteRuleResponse Alibabacloud_GEMP20210413::Client::disableRouteRule(shared_ptr<DisableRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableRouteRuleWithOptions(request, headers, runtime);
}

DisableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::disableServiceGroupWebhookWithOptions(shared_ptr<DisableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableServiceGroupWebhook"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/disableWebhook"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableServiceGroupWebhookResponse(callApi(params, req, runtime));
}

DisableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::disableServiceGroupWebhook(shared_ptr<DisableServiceGroupWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableServiceGroupWebhookWithOptions(request, headers, runtime);
}

DisableSubscriptionResponse Alibabacloud_GEMP20210413::Client::disableSubscriptionWithOptions(shared_ptr<DisableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    body->insert(pair<string, long>("subscriptionId", *request->subscriptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/doDisable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSubscriptionResponse(callApi(params, req, runtime));
}

DisableSubscriptionResponse Alibabacloud_GEMP20210413::Client::disableSubscription(shared_ptr<DisableSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableSubscriptionWithOptions(request, headers, runtime);
}

EnableEscalationPlanResponse Alibabacloud_GEMP20210413::Client::enableEscalationPlanWithOptions(shared_ptr<EnableEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPlanId)) {
    body->insert(pair<string, long>("escalationPlanId", *request->escalationPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableEscalationPlanResponse(callApi(params, req, runtime));
}

EnableEscalationPlanResponse Alibabacloud_GEMP20210413::Client::enableEscalationPlan(shared_ptr<EnableEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableEscalationPlanWithOptions(request, headers, runtime);
}

EnableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::enableIntegrationConfigWithOptions(shared_ptr<EnableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableIntegrationConfigResponse(callApi(params, req, runtime));
}

EnableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::enableIntegrationConfig(shared_ptr<EnableIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableIntegrationConfigWithOptions(request, headers, runtime);
}

EnableRouteRuleResponse Alibabacloud_GEMP20210413::Client::enableRouteRuleWithOptions(shared_ptr<EnableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableRouteRuleResponse(callApi(params, req, runtime));
}

EnableRouteRuleResponse Alibabacloud_GEMP20210413::Client::enableRouteRule(shared_ptr<EnableRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableRouteRuleWithOptions(request, headers, runtime);
}

EnableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::enableServiceGroupWebhookWithOptions(shared_ptr<EnableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableServiceGroupWebhook"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/enableWebhook"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableServiceGroupWebhookResponse(callApi(params, req, runtime));
}

EnableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::enableServiceGroupWebhook(shared_ptr<EnableServiceGroupWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableServiceGroupWebhookWithOptions(request, headers, runtime);
}

EnableSubscriptionResponse Alibabacloud_GEMP20210413::Client::enableSubscriptionWithOptions(shared_ptr<EnableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    body->insert(pair<string, long>("subscriptionId", *request->subscriptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSubscriptionResponse(callApi(params, req, runtime));
}

EnableSubscriptionResponse Alibabacloud_GEMP20210413::Client::enableSubscription(shared_ptr<EnableSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableSubscriptionWithOptions(request, headers, runtime);
}

FinishIncidentResponse Alibabacloud_GEMP20210413::Client::finishIncidentWithOptions(shared_ptr<FinishIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentFinishReason)) {
    body->insert(pair<string, long>("incidentFinishReason", *request->incidentFinishReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentFinishReasonDescription)) {
    body->insert(pair<string, string>("incidentFinishReasonDescription", *request->incidentFinishReasonDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentFinishSolution)) {
    body->insert(pair<string, long>("incidentFinishSolution", *request->incidentFinishSolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentFinishSolutionDescription)) {
    body->insert(pair<string, string>("incidentFinishSolutionDescription", *request->incidentFinishSolutionDescription));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIds)) {
    body->insert(pair<string, vector<long>>("incidentIds", *request->incidentIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FinishIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/finish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FinishIncidentResponse(callApi(params, req, runtime));
}

FinishIncidentResponse Alibabacloud_GEMP20210413::Client::finishIncident(shared_ptr<FinishIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return finishIncidentWithOptions(request, headers, runtime);
}

FinishProblemResponse Alibabacloud_GEMP20210413::Client::finishProblemWithOptions(shared_ptr<FinishProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FinishProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/finish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FinishProblemResponse(callApi(params, req, runtime));
}

FinishProblemResponse Alibabacloud_GEMP20210413::Client::finishProblem(shared_ptr<FinishProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return finishProblemWithOptions(request, headers, runtime);
}

GeneratePictureLinkResponse Alibabacloud_GEMP20210413::Client::generatePictureLinkWithOptions(shared_ptr<GeneratePictureLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keys)) {
    body->insert(pair<string, vector<string>>("keys", *request->keys));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GeneratePictureLink"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/rich/oss/getPictureLink"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GeneratePictureLinkResponse(callApi(params, req, runtime));
}

GeneratePictureLinkResponse Alibabacloud_GEMP20210413::Client::generatePictureLink(shared_ptr<GeneratePictureLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generatePictureLinkWithOptions(request, headers, runtime);
}

GeneratePictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generatePictureUploadSignWithOptions(shared_ptr<GeneratePictureUploadSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GeneratePictureUploadSignRequestFiles>>(request->files)) {
    body->insert(pair<string, vector<GeneratePictureUploadSignRequestFiles>>("files", *request->files));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GeneratePictureUploadSign"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/rich/oss/generatePostPolicy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GeneratePictureUploadSignResponse(callApi(params, req, runtime));
}

GeneratePictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generatePictureUploadSign(shared_ptr<GeneratePictureUploadSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generatePictureUploadSignWithOptions(request, headers, runtime);
}

GenerateProblemPictureLinkResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureLinkWithOptions(shared_ptr<GenerateProblemPictureLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keys)) {
    body->insert(pair<string, vector<string>>("keys", *request->keys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    body->insert(pair<string, string>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateProblemPictureLink"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/oss/getPresignedLink"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateProblemPictureLinkResponse(callApi(params, req, runtime));
}

GenerateProblemPictureLinkResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureLink(shared_ptr<GenerateProblemPictureLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateProblemPictureLinkWithOptions(request, headers, runtime);
}

GenerateProblemPictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureUploadSignWithOptions(shared_ptr<GenerateProblemPictureUploadSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSize)) {
    body->insert(pair<string, long>("fileSize", *request->fileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("fileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateProblemPictureUploadSign"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/oss/generatePostPolicy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateProblemPictureUploadSignResponse(callApi(params, req, runtime));
}

GenerateProblemPictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureUploadSign(shared_ptr<GenerateProblemPictureUploadSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateProblemPictureUploadSignWithOptions(request, headers, runtime);
}

GetEscalationPlanResponse Alibabacloud_GEMP20210413::Client::getEscalationPlanWithOptions(shared_ptr<GetEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPlanId)) {
    body->insert(pair<string, long>("escalationPlanId", *request->escalationPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEscalationPlanResponse(callApi(params, req, runtime));
}

GetEscalationPlanResponse Alibabacloud_GEMP20210413::Client::getEscalationPlan(shared_ptr<GetEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEscalationPlanWithOptions(request, headers, runtime);
}

GetEventResponse Alibabacloud_GEMP20210413::Client::getEventWithOptions(shared_ptr<GetEventRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorSourceId)) {
    body->insert(pair<string, long>("monitorSourceId", *request->monitorSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEvent"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/events/getLastTimeEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventResponse(callApi(params, req, runtime));
}

GetEventResponse Alibabacloud_GEMP20210413::Client::getEvent(shared_ptr<GetEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEventWithOptions(request, headers, runtime);
}

GetHomePageGuidanceResponse Alibabacloud_GEMP20210413::Client::getHomePageGuidanceWithOptions(shared_ptr<GetHomePageGuidanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHomePageGuidance"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/guidance/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHomePageGuidanceResponse(callApi(params, req, runtime));
}

GetHomePageGuidanceResponse Alibabacloud_GEMP20210413::Client::getHomePageGuidance(shared_ptr<GetHomePageGuidanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHomePageGuidanceWithOptions(request, headers, runtime);
}

GetIncidentResponse Alibabacloud_GEMP20210413::Client::getIncidentWithOptions(shared_ptr<GetIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIncidentResponse(callApi(params, req, runtime));
}

GetIncidentResponse Alibabacloud_GEMP20210413::Client::getIncident(shared_ptr<GetIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentWithOptions(request, headers, runtime);
}

GetIncidentListByIdListResponse Alibabacloud_GEMP20210413::Client::getIncidentListByIdListWithOptions(shared_ptr<GetIncidentListByIdListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIdList)) {
    body->insert(pair<string, vector<long>>("incidentIdList", *request->incidentIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIncidentListByIdList"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/getIncidentListByIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIncidentListByIdListResponse(callApi(params, req, runtime));
}

GetIncidentListByIdListResponse Alibabacloud_GEMP20210413::Client::getIncidentListByIdList(shared_ptr<GetIncidentListByIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentListByIdListWithOptions(request, headers, runtime);
}

GetIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getIncidentStatisticsWithOptions(shared_ptr<GetIncidentStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIncidentStatistics"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/count"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIncidentStatisticsResponse(callApi(params, req, runtime));
}

GetIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getIncidentStatistics(shared_ptr<GetIncidentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentStatisticsWithOptions(request, headers, runtime);
}

GetIncidentSubtotalCountResponse Alibabacloud_GEMP20210413::Client::getIncidentSubtotalCountWithOptions(shared_ptr<GetIncidentSubtotalCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIds)) {
    body->insert(pair<string, vector<long>>("incidentIds", *request->incidentIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIncidentSubtotalCount"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/subtotal/count"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIncidentSubtotalCountResponse(callApi(params, req, runtime));
}

GetIncidentSubtotalCountResponse Alibabacloud_GEMP20210413::Client::getIncidentSubtotalCount(shared_ptr<GetIncidentSubtotalCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentSubtotalCountWithOptions(request, headers, runtime);
}

GetIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::getIntegrationConfigWithOptions(shared_ptr<GetIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIntegrationConfigResponse(callApi(params, req, runtime));
}

GetIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::getIntegrationConfig(shared_ptr<GetIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIntegrationConfigWithOptions(request, headers, runtime);
}

GetProblemResponse Alibabacloud_GEMP20210413::Client::getProblemWithOptions(shared_ptr<GetProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProblemResponse(callApi(params, req, runtime));
}

GetProblemResponse Alibabacloud_GEMP20210413::Client::getProblem(shared_ptr<GetProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemWithOptions(request, headers, runtime);
}

GetProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::getProblemEffectionServiceWithOptions(shared_ptr<GetProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    body->insert(pair<string, long>("effectionServiceId", *request->effectionServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProblemEffectionService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/effectionService/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProblemEffectionServiceResponse(callApi(params, req, runtime));
}

GetProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::getProblemEffectionService(shared_ptr<GetProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemEffectionServiceWithOptions(request, headers, runtime);
}

GetProblemImprovementResponse Alibabacloud_GEMP20210413::Client::getProblemImprovementWithOptions(shared_ptr<GetProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    body->insert(pair<string, string>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProblemImprovement"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/improvement/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProblemImprovementResponse(callApi(params, req, runtime));
}

GetProblemImprovementResponse Alibabacloud_GEMP20210413::Client::getProblemImprovement(shared_ptr<GetProblemImprovementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemImprovementWithOptions(request, headers, runtime);
}

GetProblemPreviewResponse Alibabacloud_GEMP20210413::Client::getProblemPreviewWithOptions(shared_ptr<GetProblemPreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->effectServiceIds)) {
    body->insert(pair<string, vector<long>>("effectServiceIds", *request->effectServiceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    body->insert(pair<string, string>("problemLevel", *request->problemLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    body->insert(pair<string, string>("problemNotifyType", *request->problemNotifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    body->insert(pair<string, vector<long>>("serviceGroupIds", *request->serviceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProblemPreview"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/preview"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProblemPreviewResponse(callApi(params, req, runtime));
}

GetProblemPreviewResponse Alibabacloud_GEMP20210413::Client::getProblemPreview(shared_ptr<GetProblemPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemPreviewWithOptions(request, headers, runtime);
}

GetResourceStatisticsResponse Alibabacloud_GEMP20210413::Client::getResourceStatisticsWithOptions(shared_ptr<GetResourceStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceStatistics"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/config/resource/count"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceStatisticsResponse(callApi(params, req, runtime));
}

GetResourceStatisticsResponse Alibabacloud_GEMP20210413::Client::getResourceStatistics(shared_ptr<GetResourceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceStatisticsWithOptions(request, headers, runtime);
}

GetRichTextResponse Alibabacloud_GEMP20210413::Client::getRichTextWithOptions(shared_ptr<GetRichTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->richTextId)) {
    body->insert(pair<string, long>("richTextId", *request->richTextId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRichText"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/rich/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRichTextResponse(callApi(params, req, runtime));
}

GetRichTextResponse Alibabacloud_GEMP20210413::Client::getRichText(shared_ptr<GetRichTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRichTextWithOptions(request, headers, runtime);
}

GetRouteRuleResponse Alibabacloud_GEMP20210413::Client::getRouteRuleWithOptions(shared_ptr<GetRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRouteRuleResponse(callApi(params, req, runtime));
}

GetRouteRuleResponse Alibabacloud_GEMP20210413::Client::getRouteRule(shared_ptr<GetRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRouteRuleWithOptions(request, headers, runtime);
}

GetServiceResponse Alibabacloud_GEMP20210413::Client::getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    body->insert(pair<string, long>("serviceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceResponse(callApi(params, req, runtime));
}

GetServiceResponse Alibabacloud_GEMP20210413::Client::getService(shared_ptr<GetServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceWithOptions(request, headers, runtime);
}

GetServiceGroupResponse Alibabacloud_GEMP20210413::Client::getServiceGroupWithOptions(shared_ptr<GetServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceGroupResponse(callApi(params, req, runtime));
}

GetServiceGroupResponse Alibabacloud_GEMP20210413::Client::getServiceGroup(shared_ptr<GetServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupWithOptions(request, headers, runtime);
}

GetServiceGroupPersonSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupPersonSchedulingWithOptions(shared_ptr<GetServiceGroupPersonSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceGroupPersonScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/user/getScheduling"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceGroupPersonSchedulingResponse(callApi(params, req, runtime));
}

GetServiceGroupPersonSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupPersonScheduling(shared_ptr<GetServiceGroupPersonSchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupPersonSchedulingWithOptions(request, headers, runtime);
}

GetServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupSchedulingWithOptions(shared_ptr<GetServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceGroupScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceGroupSchedulingResponse(callApi(params, req, runtime));
}

GetServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupScheduling(shared_ptr<GetServiceGroupSchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupSchedulingWithOptions(request, headers, runtime);
}

GetServiceGroupSchedulingPreviewResponse Alibabacloud_GEMP20210413::Client::getServiceGroupSchedulingPreviewWithOptions(shared_ptr<GetServiceGroupSchedulingPreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<GetServiceGroupSchedulingPreviewRequestFastScheduling>(request->fastScheduling)) {
    body->insert(pair<string, GetServiceGroupSchedulingPreviewRequestFastScheduling>("fastScheduling", *request->fastScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<GetServiceGroupSchedulingPreviewRequestFineScheduling>(request->fineScheduling)) {
    body->insert(pair<string, GetServiceGroupSchedulingPreviewRequestFineScheduling>("fineScheduling", *request->fineScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingWay)) {
    body->insert(pair<string, string>("schedulingWay", *request->schedulingWay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceGroupSchedulingPreview"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/preview"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceGroupSchedulingPreviewResponse(callApi(params, req, runtime));
}

GetServiceGroupSchedulingPreviewResponse Alibabacloud_GEMP20210413::Client::getServiceGroupSchedulingPreview(shared_ptr<GetServiceGroupSchedulingPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupSchedulingPreviewWithOptions(request, headers, runtime);
}

GetServiceGroupSpecialPersonSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupSpecialPersonSchedulingWithOptions(shared_ptr<GetServiceGroupSpecialPersonSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceGroupSpecialPersonScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/getUserScheduling"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceGroupSpecialPersonSchedulingResponse(callApi(params, req, runtime));
}

GetServiceGroupSpecialPersonSchedulingResponse Alibabacloud_GEMP20210413::Client::getServiceGroupSpecialPersonScheduling(shared_ptr<GetServiceGroupSpecialPersonSchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupSpecialPersonSchedulingWithOptions(request, headers, runtime);
}

GetSimilarIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getSimilarIncidentStatisticsWithOptions(shared_ptr<GetSimilarIncidentStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    body->insert(pair<string, string>("createTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->events)) {
    body->insert(pair<string, vector<string>>("events", *request->events));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentTitle)) {
    body->insert(pair<string, string>("incidentTitle", *request->incidentTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSimilarIncidentStatistics"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/similarIncident/statistics"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSimilarIncidentStatisticsResponse(callApi(params, req, runtime));
}

GetSimilarIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getSimilarIncidentStatistics(shared_ptr<GetSimilarIncidentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSimilarIncidentStatisticsWithOptions(request, headers, runtime);
}

GetSubscriptionResponse Alibabacloud_GEMP20210413::Client::getSubscriptionWithOptions(shared_ptr<GetSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->notFilterScopeObjectDeleted)) {
    body->insert(pair<string, bool>("notFilterScopeObjectDeleted", *request->notFilterScopeObjectDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    body->insert(pair<string, long>("subscriptionId", *request->subscriptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscriptionResponse(callApi(params, req, runtime));
}

GetSubscriptionResponse Alibabacloud_GEMP20210413::Client::getSubscription(shared_ptr<GetSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubscriptionWithOptions(request, headers, runtime);
}

GetTenantApplicationResponse Alibabacloud_GEMP20210413::Client::getTenantApplicationWithOptions(shared_ptr<GetTenantApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTenantApplication"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/mobileApp/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTenantApplicationResponse(callApi(params, req, runtime));
}

GetTenantApplicationResponse Alibabacloud_GEMP20210413::Client::getTenantApplication(shared_ptr<GetTenantApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTenantApplicationWithOptions(request, headers, runtime);
}

GetTenantStatusResponse Alibabacloud_GEMP20210413::Client::getTenantStatusWithOptions(shared_ptr<GetTenantStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantRamId)) {
    body->insert(pair<string, long>("tenantRamId", *request->tenantRamId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTenantStatus"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tenant/getTenantStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTenantStatusResponse(callApi(params, req, runtime));
}

GetTenantStatusResponse Alibabacloud_GEMP20210413::Client::getTenantStatus(shared_ptr<GetTenantStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTenantStatusWithOptions(request, headers, runtime);
}

GetUserResponse Alibabacloud_GEMP20210413::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/getUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_GEMP20210413::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserWithOptions(request, headers, runtime);
}

GetUserGuideStatusResponse Alibabacloud_GEMP20210413::Client::getUserGuideStatusWithOptions(shared_ptr<GetUserGuideStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGuideStatus"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/guide/status"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGuideStatusResponse(callApi(params, req, runtime));
}

GetUserGuideStatusResponse Alibabacloud_GEMP20210413::Client::getUserGuideStatus(shared_ptr<GetUserGuideStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserGuideStatusWithOptions(request, headers, runtime);
}

ListAlertsResponse Alibabacloud_GEMP20210413::Client::listAlertsWithOptions(shared_ptr<ListAlertsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertLevel)) {
    body->insert(pair<string, string>("alertLevel", *request->alertLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    body->insert(pair<string, string>("alertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSourceName)) {
    body->insert(pair<string, string>("alertSourceName", *request->alertSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceId)) {
    body->insert(pair<string, string>("monitorSourceId", *request->monitorSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlerts"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alerts/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertsResponse(callApi(params, req, runtime));
}

ListAlertsResponse Alibabacloud_GEMP20210413::Client::listAlerts(shared_ptr<ListAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlertsWithOptions(request, headers, runtime);
}

ListByMonitorSourceIdResponse Alibabacloud_GEMP20210413::Client::listByMonitorSourceIdWithOptions(shared_ptr<ListByMonitorSourceIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceId)) {
    body->insert(pair<string, string>("monitorSourceId", *request->monitorSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListByMonitorSourceId"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/listByMonitorSourceId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListByMonitorSourceIdResponse(callApi(params, req, runtime));
}

ListByMonitorSourceIdResponse Alibabacloud_GEMP20210413::Client::listByMonitorSourceId(shared_ptr<ListByMonitorSourceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listByMonitorSourceIdWithOptions(request, headers, runtime);
}

ListChartDataForServiceGroupResponse Alibabacloud_GEMP20210413::Client::listChartDataForServiceGroupWithOptions(shared_ptr<ListChartDataForServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChartDataForServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/statistics/chartDataForServiceGroup/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChartDataForServiceGroupResponse(callApi(params, req, runtime));
}

ListChartDataForServiceGroupResponse Alibabacloud_GEMP20210413::Client::listChartDataForServiceGroup(shared_ptr<ListChartDataForServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChartDataForServiceGroupWithOptions(request, headers, runtime);
}

ListChartDataForUserResponse Alibabacloud_GEMP20210413::Client::listChartDataForUserWithOptions(shared_ptr<ListChartDataForUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChartDataForUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/statistics/chartDataForUser/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChartDataForUserResponse(callApi(params, req, runtime));
}

ListChartDataForUserResponse Alibabacloud_GEMP20210413::Client::listChartDataForUser(shared_ptr<ListChartDataForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChartDataForUserWithOptions(request, headers, runtime);
}

ListConfigsResponse Alibabacloud_GEMP20210413::Client::listConfigsWithOptions(shared_ptr<ListConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigs"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/config/all"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigsResponse(callApi(params, req, runtime));
}

ListConfigsResponse Alibabacloud_GEMP20210413::Client::listConfigs(shared_ptr<ListConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigsWithOptions(request, headers, runtime);
}

ListDataReportForServiceGroupResponse Alibabacloud_GEMP20210413::Client::listDataReportForServiceGroupWithOptions(shared_ptr<ListDataReportForServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupName)) {
    body->insert(pair<string, string>("serviceGroupName", *request->serviceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataReportForServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/statistics/listDataReportForServiceGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataReportForServiceGroupResponse(callApi(params, req, runtime));
}

ListDataReportForServiceGroupResponse Alibabacloud_GEMP20210413::Client::listDataReportForServiceGroup(shared_ptr<ListDataReportForServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataReportForServiceGroupWithOptions(request, headers, runtime);
}

ListDataReportForUserResponse Alibabacloud_GEMP20210413::Client::listDataReportForUserWithOptions(shared_ptr<ListDataReportForUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataReportForUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/statistics/listDataReportForUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataReportForUserResponse(callApi(params, req, runtime));
}

ListDataReportForUserResponse Alibabacloud_GEMP20210413::Client::listDataReportForUser(shared_ptr<ListDataReportForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataReportForUserWithOptions(request, headers, runtime);
}

ListDictionariesResponse Alibabacloud_GEMP20210413::Client::listDictionariesWithOptions(shared_ptr<ListDictionariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDictionaries"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dict/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDictionariesResponse(callApi(params, req, runtime));
}

ListDictionariesResponse Alibabacloud_GEMP20210413::Client::listDictionaries(shared_ptr<ListDictionariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictionariesWithOptions(request, headers, runtime);
}

ListEscalationPlanServicesResponse Alibabacloud_GEMP20210413::Client::listEscalationPlanServicesWithOptions(shared_ptr<ListEscalationPlanServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEscalationPlanServices"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEscalationPlanServicesResponse(callApi(params, req, runtime));
}

ListEscalationPlanServicesResponse Alibabacloud_GEMP20210413::Client::listEscalationPlanServices(shared_ptr<ListEscalationPlanServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEscalationPlanServicesWithOptions(request, headers, runtime);
}

ListEscalationPlansResponse Alibabacloud_GEMP20210413::Client::listEscalationPlansWithOptions(shared_ptr<ListEscalationPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->escalationPlanName)) {
    body->insert(pair<string, string>("escalationPlanName", *request->escalationPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEscalationPlans"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEscalationPlansResponse(callApi(params, req, runtime));
}

ListEscalationPlansResponse Alibabacloud_GEMP20210413::Client::listEscalationPlans(shared_ptr<ListEscalationPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEscalationPlansWithOptions(request, headers, runtime);
}

ListEscalationPlansByNoticeObjectResponse Alibabacloud_GEMP20210413::Client::listEscalationPlansByNoticeObjectWithOptions(shared_ptr<ListEscalationPlansByNoticeObjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeObjectId)) {
    body->insert(pair<string, long>("noticeObjectId", *request->noticeObjectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeObjectType)) {
    body->insert(pair<string, long>("noticeObjectType", *request->noticeObjectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEscalationPlansByNoticeObject"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/listByNoticeObject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEscalationPlansByNoticeObjectResponse(callApi(params, req, runtime));
}

ListEscalationPlansByNoticeObjectResponse Alibabacloud_GEMP20210413::Client::listEscalationPlansByNoticeObject(shared_ptr<ListEscalationPlansByNoticeObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEscalationPlansByNoticeObjectWithOptions(request, headers, runtime);
}

ListIncidentDetailEscalationPlansResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailEscalationPlansWithOptions(shared_ptr<ListIncidentDetailEscalationPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIncidentDetailEscalationPlans"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/detail/escalation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIncidentDetailEscalationPlansResponse(callApi(params, req, runtime));
}

ListIncidentDetailEscalationPlansResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailEscalationPlans(shared_ptr<ListIncidentDetailEscalationPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentDetailEscalationPlansWithOptions(request, headers, runtime);
}

ListIncidentDetailTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailTimelinesWithOptions(shared_ptr<ListIncidentDetailTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idSort)) {
    body->insert(pair<string, string>("idSort", *request->idSort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIncidentDetailTimelines"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/detail/timeline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIncidentDetailTimelinesResponse(callApi(params, req, runtime));
}

ListIncidentDetailTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailTimelines(shared_ptr<ListIncidentDetailTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentDetailTimelinesWithOptions(request, headers, runtime);
}

ListIncidentSubtotalsResponse Alibabacloud_GEMP20210413::Client::listIncidentSubtotalsWithOptions(shared_ptr<ListIncidentSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIncidentSubtotals"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/list/subtotal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIncidentSubtotalsResponse(callApi(params, req, runtime));
}

ListIncidentSubtotalsResponse Alibabacloud_GEMP20210413::Client::listIncidentSubtotals(shared_ptr<ListIncidentSubtotalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentSubtotalsWithOptions(request, headers, runtime);
}

ListIncidentTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentTimelinesWithOptions(shared_ptr<ListIncidentTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIncidentTimelines"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/timeline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIncidentTimelinesResponse(callApi(params, req, runtime));
}

ListIncidentTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentTimelines(shared_ptr<ListIncidentTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentTimelinesWithOptions(request, headers, runtime);
}

ListIncidentsResponse Alibabacloud_GEMP20210413::Client::listIncidentsWithOptions(shared_ptr<ListIncidentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEndTime)) {
    body->insert(pair<string, string>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createStartTime)) {
    body->insert(pair<string, string>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    body->insert(pair<string, string>("effect", *request->effect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    body->insert(pair<string, string>("incidentLevel", *request->incidentLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentStatus)) {
    body->insert(pair<string, string>("incidentStatus", *request->incidentStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->me)) {
    body->insert(pair<string, long>("me", *request->me));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relationServiceId)) {
    body->insert(pair<string, long>("relationServiceId", *request->relationServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIncidents"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIncidentsResponse(callApi(params, req, runtime));
}

ListIncidentsResponse Alibabacloud_GEMP20210413::Client::listIncidents(shared_ptr<ListIncidentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentsWithOptions(request, headers, runtime);
}

ListIntegrationConfigTimelinesResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigTimelinesWithOptions(shared_ptr<ListIntegrationConfigTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntegrationConfigTimelines"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/timeline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntegrationConfigTimelinesResponse(callApi(params, req, runtime));
}

ListIntegrationConfigTimelinesResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigTimelines(shared_ptr<ListIntegrationConfigTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIntegrationConfigTimelinesWithOptions(request, headers, runtime);
}

ListIntegrationConfigsResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigsWithOptions(shared_ptr<ListIntegrationConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceName)) {
    body->insert(pair<string, string>("monitorSourceName", *request->monitorSourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntegrationConfigs"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntegrationConfigsResponse(callApi(params, req, runtime));
}

ListIntegrationConfigsResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigs(shared_ptr<ListIntegrationConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIntegrationConfigsWithOptions(request, headers, runtime);
}

ListMonitorSourcesResponse Alibabacloud_GEMP20210413::Client::listMonitorSourcesWithOptions(shared_ptr<ListMonitorSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMonitorSources"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/monitorSource/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMonitorSourcesResponse(callApi(params, req, runtime));
}

ListMonitorSourcesResponse Alibabacloud_GEMP20210413::Client::listMonitorSources(shared_ptr<ListMonitorSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMonitorSourcesWithOptions(request, headers, runtime);
}

ListProblemDetailOperationsResponse Alibabacloud_GEMP20210413::Client::listProblemDetailOperationsWithOptions(shared_ptr<ListProblemDetailOperationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeSort)) {
    body->insert(pair<string, string>("createTimeSort", *request->createTimeSort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProblemDetailOperations"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/detail/operations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProblemDetailOperationsResponse(callApi(params, req, runtime));
}

ListProblemDetailOperationsResponse Alibabacloud_GEMP20210413::Client::listProblemDetailOperations(shared_ptr<ListProblemDetailOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemDetailOperationsWithOptions(request, headers, runtime);
}

ListProblemOperationsResponse Alibabacloud_GEMP20210413::Client::listProblemOperationsWithOptions(shared_ptr<ListProblemOperationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProblemOperations"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/operations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProblemOperationsResponse(callApi(params, req, runtime));
}

ListProblemOperationsResponse Alibabacloud_GEMP20210413::Client::listProblemOperations(shared_ptr<ListProblemOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemOperationsWithOptions(request, headers, runtime);
}

ListProblemSubtotalsResponse Alibabacloud_GEMP20210413::Client::listProblemSubtotalsWithOptions(shared_ptr<ListProblemSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProblemSubtotals"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/list/subtotal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProblemSubtotalsResponse(callApi(params, req, runtime));
}

ListProblemSubtotalsResponse Alibabacloud_GEMP20210413::Client::listProblemSubtotals(shared_ptr<ListProblemSubtotalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemSubtotalsWithOptions(request, headers, runtime);
}

ListProblemTimeLinesResponse Alibabacloud_GEMP20210413::Client::listProblemTimeLinesWithOptions(shared_ptr<ListProblemTimeLinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProblemTimeLines"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/detail/timeLines"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProblemTimeLinesResponse(callApi(params, req, runtime));
}

ListProblemTimeLinesResponse Alibabacloud_GEMP20210413::Client::listProblemTimeLines(shared_ptr<ListProblemTimeLinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemTimeLinesWithOptions(request, headers, runtime);
}

ListProblemsResponse Alibabacloud_GEMP20210413::Client::listProblemsWithOptions(shared_ptr<ListProblemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->affectServiceId)) {
    body->insert(pair<string, long>("affectServiceId", *request->affectServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoveryEndTime)) {
    body->insert(pair<string, string>("discoveryEndTime", *request->discoveryEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoveryStartTime)) {
    body->insert(pair<string, string>("discoveryStartTime", *request->discoveryStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    body->insert(pair<string, long>("mainHandlerId", *request->mainHandlerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    body->insert(pair<string, string>("problemLevel", *request->problemLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemStatus)) {
    body->insert(pair<string, string>("problemStatus", *request->problemStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    body->insert(pair<string, string>("queryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeaterId)) {
    body->insert(pair<string, long>("repeaterId", *request->repeaterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreEndTime)) {
    body->insert(pair<string, string>("restoreEndTime", *request->restoreEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreStartTime)) {
    body->insert(pair<string, string>("restoreStartTime", *request->restoreStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProblems"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/listProblems"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProblemsResponse(callApi(params, req, runtime));
}

ListProblemsResponse Alibabacloud_GEMP20210413::Client::listProblems(shared_ptr<ListProblemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemsWithOptions(request, headers, runtime);
}

ListRouteRulesResponse Alibabacloud_GEMP20210413::Client::listRouteRulesWithOptions(shared_ptr<ListRouteRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->notFilterRouteRuleDeleted)) {
    body->insert(pair<string, bool>("notFilterRouteRuleDeleted", *request->notFilterRouteRuleDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeType)) {
    body->insert(pair<string, long>("routeType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->ruleName)) {
    body->insert(pair<string, vector<uint8_t>>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->serviceName)) {
    body->insert(pair<string, vector<uint8_t>>("serviceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRouteRules"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRouteRulesResponse(callApi(params, req, runtime));
}

ListRouteRulesResponse Alibabacloud_GEMP20210413::Client::listRouteRules(shared_ptr<ListRouteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRouteRulesWithOptions(request, headers, runtime);
}

ListRouteRulesByAssignWhoIdResponse Alibabacloud_GEMP20210413::Client::listRouteRulesByAssignWhoIdWithOptions(shared_ptr<ListRouteRulesByAssignWhoIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assignWhoId)) {
    body->insert(pair<string, long>("assignWhoId", *request->assignWhoId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assignWhoType)) {
    body->insert(pair<string, long>("assignWhoType", *request->assignWhoType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRouteRulesByAssignWhoId"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/listByAssignWhoId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRouteRulesByAssignWhoIdResponse(callApi(params, req, runtime));
}

ListRouteRulesByAssignWhoIdResponse Alibabacloud_GEMP20210413::Client::listRouteRulesByAssignWhoId(shared_ptr<ListRouteRulesByAssignWhoIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRouteRulesByAssignWhoIdWithOptions(request, headers, runtime);
}

ListRouteRulesByServiceResponse Alibabacloud_GEMP20210413::Client::listRouteRulesByServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRouteRulesByService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/listByService"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRouteRulesByServiceResponse(callApi(params, req, runtime));
}

ListRouteRulesByServiceResponse Alibabacloud_GEMP20210413::Client::listRouteRulesByService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRouteRulesByServiceWithOptions(headers, runtime);
}

ListServiceGroupMonitorSourceTemplatesResponse Alibabacloud_GEMP20210413::Client::listServiceGroupMonitorSourceTemplatesWithOptions(shared_ptr<ListServiceGroupMonitorSourceTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceGroupMonitorSourceTemplates"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/listServiceGroupMonitorSourceTemplates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceGroupMonitorSourceTemplatesResponse(callApi(params, req, runtime));
}

ListServiceGroupMonitorSourceTemplatesResponse Alibabacloud_GEMP20210413::Client::listServiceGroupMonitorSourceTemplates(shared_ptr<ListServiceGroupMonitorSourceTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceGroupMonitorSourceTemplatesWithOptions(request, headers, runtime);
}

ListServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listServiceGroupsWithOptions(shared_ptr<ListServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isScheduled)) {
    body->insert(pair<string, bool>("isScheduled", *request->isScheduled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->orderByScheduleStatus)) {
    body->insert(pair<string, bool>("orderByScheduleStatus", *request->orderByScheduleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryName)) {
    body->insert(pair<string, string>("queryName", *request->queryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    body->insert(pair<string, string>("queryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceGroups"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceGroupsResponse(callApi(params, req, runtime));
}

ListServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listServiceGroups(shared_ptr<ListServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceGroupsWithOptions(request, headers, runtime);
}

ListServiceGroupsByUserIdResponse Alibabacloud_GEMP20210413::Client::listServiceGroupsByUserIdWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceGroupsByUserId"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/listByUserId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceGroupsByUserIdResponse(callApi(params, req, runtime));
}

ListServiceGroupsByUserIdResponse Alibabacloud_GEMP20210413::Client::listServiceGroupsByUserId() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceGroupsByUserIdWithOptions(headers, runtime);
}

ListServicesResponse Alibabacloud_GEMP20210413::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_GEMP20210413::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListSourceEventsResponse Alibabacloud_GEMP20210413::Client::listSourceEventsWithOptions(shared_ptr<ListSourceEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startRowKey)) {
    body->insert(pair<string, string>("startRowKey", *request->startRowKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopRowKey)) {
    body->insert(pair<string, string>("stopRowKey", *request->stopRowKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSourceEvents"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/events/listOriginalEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSourceEventsResponse(callApi(params, req, runtime));
}

ListSourceEventsResponse Alibabacloud_GEMP20210413::Client::listSourceEvents(shared_ptr<ListSourceEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSourceEventsWithOptions(request, headers, runtime);
}

ListSourceEventsForMonitorSourceResponse Alibabacloud_GEMP20210413::Client::listSourceEventsForMonitorSourceWithOptions(shared_ptr<ListSourceEventsForMonitorSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorSourceId)) {
    body->insert(pair<string, long>("monitorSourceId", *request->monitorSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSourceEventsForMonitorSource"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/events/queryLastestEvents"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSourceEventsForMonitorSourceResponse(callApi(params, req, runtime));
}

ListSourceEventsForMonitorSourceResponse Alibabacloud_GEMP20210413::Client::listSourceEventsForMonitorSource(shared_ptr<ListSourceEventsForMonitorSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSourceEventsForMonitorSourceWithOptions(request, headers, runtime);
}

ListSubscriptionServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionServiceGroupsWithOptions(shared_ptr<ListSubscriptionServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceIds)) {
    body->insert(pair<string, vector<long>>("serviceIds", *request->serviceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubscriptionServiceGroups"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/serviceGroup/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubscriptionServiceGroupsResponse(callApi(params, req, runtime));
}

ListSubscriptionServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionServiceGroups(shared_ptr<ListSubscriptionServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubscriptionServiceGroupsWithOptions(request, headers, runtime);
}

ListSubscriptionsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionsWithOptions(shared_ptr<ListSubscriptionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->notFilterScopeObjectDeleted)) {
    body->insert(pair<string, bool>("notFilterScopeObjectDeleted", *request->notFilterScopeObjectDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObject)) {
    body->insert(pair<string, string>("notifyObject", *request->notifyObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObjectType)) {
    body->insert(pair<string, string>("notifyObjectType", *request->notifyObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeObject)) {
    body->insert(pair<string, string>("scopeObject", *request->scopeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    body->insert(pair<string, string>("subscriptionTitle", *request->subscriptionTitle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubscriptions"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubscriptionsResponse(callApi(params, req, runtime));
}

ListSubscriptionsResponse Alibabacloud_GEMP20210413::Client::listSubscriptions(shared_ptr<ListSubscriptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubscriptionsWithOptions(request, headers, runtime);
}

ListTrendForSourceEventResponse Alibabacloud_GEMP20210413::Client::listTrendForSourceEventWithOptions(shared_ptr<ListTrendForSourceEventRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeUnit)) {
    body->insert(pair<string, long>("timeUnit", *request->timeUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrendForSourceEvent"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/events/querySourceEventTrend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrendForSourceEventResponse(callApi(params, req, runtime));
}

ListTrendForSourceEventResponse Alibabacloud_GEMP20210413::Client::listTrendForSourceEvent(shared_ptr<ListTrendForSourceEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrendForSourceEventWithOptions(request, headers, runtime);
}

ListUserSerivceGroupsResponse Alibabacloud_GEMP20210413::Client::listUserSerivceGroupsWithOptions(shared_ptr<ListUserSerivceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserSerivceGroups"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/preview/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserSerivceGroupsResponse(callApi(params, req, runtime));
}

ListUserSerivceGroupsResponse Alibabacloud_GEMP20210413::Client::listUserSerivceGroups(shared_ptr<ListUserSerivceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserSerivceGroupsWithOptions(request, headers, runtime);
}

ListUsersResponse Alibabacloud_GEMP20210413::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramId)) {
    body->insert(pair<string, string>("ramId", *request->ramId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scene)) {
    body->insert(pair<string, long>("scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synergyChannel)) {
    body->insert(pair<string, string>("synergyChannel", *request->synergyChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_GEMP20210413::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUsersWithOptions(request, headers, runtime);
}

PushMonitorResponse Alibabacloud_GEMP20210413::Client::pushMonitorWithOptions(shared_ptr<string> apiKey,
                                                                              shared_ptr<PushMonitorRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMonitor"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/monitor/push/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(apiKey)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushMonitorResponse(callApi(params, req, runtime));
}

PushMonitorResponse Alibabacloud_GEMP20210413::Client::pushMonitor(shared_ptr<string> apiKey, shared_ptr<PushMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushMonitorWithOptions(apiKey, request, headers, runtime);
}

RecoverProblemResponse Alibabacloud_GEMP20210413::Client::recoverProblemWithOptions(shared_ptr<RecoverProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    body->insert(pair<string, string>("problemNotifyType", *request->problemNotifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryTime)) {
    body->insert(pair<string, string>("recoveryTime", *request->recoveryTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoverProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/recovery"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoverProblemResponse(callApi(params, req, runtime));
}

RecoverProblemResponse Alibabacloud_GEMP20210413::Client::recoverProblem(shared_ptr<RecoverProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recoverProblemWithOptions(request, headers, runtime);
}

RefreshIntegrationConfigKeyResponse Alibabacloud_GEMP20210413::Client::refreshIntegrationConfigKeyWithOptions(shared_ptr<RefreshIntegrationConfigKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshIntegrationConfigKey"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/refreshKey"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshIntegrationConfigKeyResponse(callApi(params, req, runtime));
}

RefreshIntegrationConfigKeyResponse Alibabacloud_GEMP20210413::Client::refreshIntegrationConfigKey(shared_ptr<RefreshIntegrationConfigKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refreshIntegrationConfigKeyWithOptions(request, headers, runtime);
}

RemoveIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::removeIntegrationConfigWithOptions(shared_ptr<RemoveIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveIntegrationConfigResponse(callApi(params, req, runtime));
}

RemoveIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::removeIntegrationConfig(shared_ptr<RemoveIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeIntegrationConfigWithOptions(request, headers, runtime);
}

RemoveProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::removeProblemServiceGroupWithOptions(shared_ptr<RemoveProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    body->insert(pair<string, vector<long>>("serviceGroupIds", *request->serviceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveProblemServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/removeServiceGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveProblemServiceGroupResponse(callApi(params, req, runtime));
}

RemoveProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::removeProblemServiceGroup(shared_ptr<RemoveProblemServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeProblemServiceGroupWithOptions(request, headers, runtime);
}

ReplayProblemResponse Alibabacloud_GEMP20210413::Client::replayProblemWithOptions(shared_ptr<ReplayProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replayDutyUserId)) {
    body->insert(pair<string, long>("replayDutyUserId", *request->replayDutyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplayProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/replay"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplayProblemResponse(callApi(params, req, runtime));
}

ReplayProblemResponse Alibabacloud_GEMP20210413::Client::replayProblem(shared_ptr<ReplayProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return replayProblemWithOptions(request, headers, runtime);
}

RespondIncidentResponse Alibabacloud_GEMP20210413::Client::respondIncidentWithOptions(shared_ptr<RespondIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIds)) {
    body->insert(pair<string, vector<long>>("incidentIds", *request->incidentIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RespondIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/response"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RespondIncidentResponse(callApi(params, req, runtime));
}

RespondIncidentResponse Alibabacloud_GEMP20210413::Client::respondIncident(shared_ptr<RespondIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return respondIncidentWithOptions(request, headers, runtime);
}

RevokeProblemRecoveryResponse Alibabacloud_GEMP20210413::Client::revokeProblemRecoveryWithOptions(shared_ptr<RevokeProblemRecoveryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    body->insert(pair<string, string>("problemNotifyType", *request->problemNotifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeProblemRecovery"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/revoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeProblemRecoveryResponse(callApi(params, req, runtime));
}

RevokeProblemRecoveryResponse Alibabacloud_GEMP20210413::Client::revokeProblemRecovery(shared_ptr<RevokeProblemRecoveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeProblemRecoveryWithOptions(request, headers, runtime);
}

UnbindUserResponse Alibabacloud_GEMP20210413::Client::unbindUserWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/unbind"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindUserResponse(callApi(params, req, runtime));
}

UnbindUserResponse Alibabacloud_GEMP20210413::Client::unbindUser() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindUserWithOptions(headers, runtime);
}

UpdateEscalationPlanResponse Alibabacloud_GEMP20210413::Client::updateEscalationPlanWithOptions(shared_ptr<UpdateEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->escalationPlanDescription)) {
    body->insert(pair<string, string>("escalationPlanDescription", *request->escalationPlanDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPlanId)) {
    body->insert(pair<string, long>("escalationPlanId", *request->escalationPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->escalationPlanName)) {
    body->insert(pair<string, string>("escalationPlanName", *request->escalationPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEscalationPlanRequestEscalationPlanRules>>(request->escalationPlanRules)) {
    body->insert(pair<string, vector<UpdateEscalationPlanRequestEscalationPlanRules>>("escalationPlanRules", *request->escalationPlanRules));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEscalationPlanRequestEscalationPlanScopeObjects>>(request->escalationPlanScopeObjects)) {
    body->insert(pair<string, vector<UpdateEscalationPlanRequestEscalationPlanScopeObjects>>("escalationPlanScopeObjects", *request->escalationPlanScopeObjects));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEscalationPlan"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/escalationPlan/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEscalationPlanResponse(callApi(params, req, runtime));
}

UpdateEscalationPlanResponse Alibabacloud_GEMP20210413::Client::updateEscalationPlan(shared_ptr<UpdateEscalationPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEscalationPlanWithOptions(request, headers, runtime);
}

UpdateIncidentResponse Alibabacloud_GEMP20210413::Client::updateIncidentWithOptions(shared_ptr<UpdateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    body->insert(pair<string, string>("effect", *request->effect));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    body->insert(pair<string, long>("incidentId", *request->incidentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    body->insert(pair<string, string>("incidentLevel", *request->incidentLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentTitle)) {
    body->insert(pair<string, string>("incidentTitle", *request->incidentTitle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIncident"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/incident/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIncidentResponse(callApi(params, req, runtime));
}

UpdateIncidentResponse Alibabacloud_GEMP20210413::Client::updateIncident(shared_ptr<UpdateIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIncidentWithOptions(request, headers, runtime);
}

UpdateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::updateIntegrationConfigWithOptions(shared_ptr<UpdateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("accessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    body->insert(pair<string, long>("integrationConfigId", *request->integrationConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIntegrationConfig"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integrationConfig/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIntegrationConfigResponse(callApi(params, req, runtime));
}

UpdateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::updateIntegrationConfig(shared_ptr<UpdateIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIntegrationConfigWithOptions(request, headers, runtime);
}

UpdateProblemResponse Alibabacloud_GEMP20210413::Client::updateProblemWithOptions(shared_ptr<UpdateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->feedback)) {
    body->insert(pair<string, string>("feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    body->insert(pair<string, long>("mainHandlerId", *request->mainHandlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preliminaryReason)) {
    body->insert(pair<string, string>("preliminaryReason", *request->preliminaryReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemName)) {
    body->insert(pair<string, string>("problemName", *request->problemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->progressSummary)) {
    body->insert(pair<string, string>("progressSummary", *request->progressSummary));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->progressSummaryRichTextId)) {
    body->insert(pair<string, long>("progressSummaryRichTextId", *request->progressSummaryRichTextId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    body->insert(pair<string, vector<long>>("serviceGroupIds", *request->serviceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblem"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemResponse(callApi(params, req, runtime));
}

UpdateProblemResponse Alibabacloud_GEMP20210413::Client::updateProblem(shared_ptr<UpdateProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemWithOptions(request, headers, runtime);
}

UpdateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::updateProblemEffectionServiceWithOptions(shared_ptr<UpdateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    body->insert(pair<string, long>("effectionServiceId", *request->effectionServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->picUrl)) {
    body->insert(pair<string, vector<string>>("picUrl", *request->picUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    body->insert(pair<string, long>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblemEffectionService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/effectionService/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemEffectionServiceResponse(callApi(params, req, runtime));
}

UpdateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::updateProblemEffectionService(shared_ptr<UpdateProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemEffectionServiceWithOptions(request, headers, runtime);
}

UpdateProblemImprovementResponse Alibabacloud_GEMP20210413::Client::updateProblemImprovementWithOptions(shared_ptr<UpdateProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customProblemReason)) {
    body->insert(pair<string, string>("customProblemReason", *request->customProblemReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->discoverSource)) {
    body->insert(pair<string, long>("discoverSource", *request->discoverSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dutyDepartmentId)) {
    body->insert(pair<string, long>("dutyDepartmentId", *request->dutyDepartmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dutyDepartmentName)) {
    body->insert(pair<string, string>("dutyDepartmentName", *request->dutyDepartmentName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dutyUserId)) {
    body->insert(pair<string, long>("dutyUserId", *request->dutyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->injectionMode)) {
    body->insert(pair<string, string>("injectionMode", *request->injectionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceName)) {
    body->insert(pair<string, string>("monitorSourceName", *request->monitorSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemReason)) {
    body->insert(pair<string, string>("problemReason", *request->problemReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recentActivity)) {
    body->insert(pair<string, string>("recentActivity", *request->recentActivity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryMode)) {
    body->insert(pair<string, string>("recoveryMode", *request->recoveryMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationChanges)) {
    body->insert(pair<string, string>("relationChanges", *request->relationChanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replayDutyUserId)) {
    body->insert(pair<string, long>("replayDutyUserId", *request->replayDutyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userReport)) {
    body->insert(pair<string, long>("userReport", *request->userReport));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblemImprovement"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/improvement/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemImprovementResponse(callApi(params, req, runtime));
}

UpdateProblemImprovementResponse Alibabacloud_GEMP20210413::Client::updateProblemImprovement(shared_ptr<UpdateProblemImprovementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemImprovementWithOptions(request, headers, runtime);
}

UpdateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::updateProblemMeasureWithOptions(shared_ptr<UpdateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkStandard)) {
    body->insert(pair<string, string>("checkStandard", *request->checkStandard));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkUserId)) {
    body->insert(pair<string, long>("checkUserId", *request->checkUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->directorId)) {
    body->insert(pair<string, long>("directorId", *request->directorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->measureId)) {
    body->insert(pair<string, long>("measureId", *request->measureId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planFinishTime)) {
    body->insert(pair<string, string>("planFinishTime", *request->planFinishTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stalkerId)) {
    body->insert(pair<string, long>("stalkerId", *request->stalkerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblemMeasure"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/improvement/measure/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemMeasureResponse(callApi(params, req, runtime));
}

UpdateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::updateProblemMeasure(shared_ptr<UpdateProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemMeasureWithOptions(request, headers, runtime);
}

UpdateProblemNoticeResponse Alibabacloud_GEMP20210413::Client::updateProblemNoticeWithOptions(shared_ptr<UpdateProblemNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    body->insert(pair<string, string>("problemNotifyType", *request->problemNotifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblemNotice"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/notify"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemNoticeResponse(callApi(params, req, runtime));
}

UpdateProblemNoticeResponse Alibabacloud_GEMP20210413::Client::updateProblemNotice(shared_ptr<UpdateProblemNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemNoticeWithOptions(request, headers, runtime);
}

UpdateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::updateProblemTimelineWithOptions(shared_ptr<UpdateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyNode)) {
    body->insert(pair<string, string>("keyNode", *request->keyNode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    body->insert(pair<string, long>("problemId", *request->problemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemTimelineId)) {
    body->insert(pair<string, long>("problemTimelineId", *request->problemTimelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    body->insert(pair<string, string>("time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProblemTimeline"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/problem/process/timeline/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProblemTimelineResponse(callApi(params, req, runtime));
}

UpdateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::updateProblemTimeline(shared_ptr<UpdateProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemTimelineWithOptions(request, headers, runtime);
}

UpdateRichTextResponse Alibabacloud_GEMP20210413::Client::updateRichTextWithOptions(shared_ptr<UpdateRichTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->richText)) {
    body->insert(pair<string, string>("richText", *request->richText));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->richTextId)) {
    body->insert(pair<string, long>("richTextId", *request->richTextId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRichText"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/rich/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRichTextResponse(callApi(params, req, runtime));
}

UpdateRichTextResponse Alibabacloud_GEMP20210413::Client::updateRichText(shared_ptr<UpdateRichTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRichTextWithOptions(request, headers, runtime);
}

UpdateRouteRuleResponse Alibabacloud_GEMP20210413::Client::updateRouteRuleWithOptions(shared_ptr<UpdateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assignObjectId)) {
    body->insert(pair<string, long>("assignObjectId", *request->assignObjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assignObjectType)) {
    body->insert(pair<string, string>("assignObjectType", *request->assignObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childRuleRelation)) {
    body->insert(pair<string, string>("childRuleRelation", *request->childRuleRelation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->convergenceFields)) {
    body->insert(pair<string, vector<string>>("convergenceFields", *request->convergenceFields));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->convergenceType)) {
    body->insert(pair<string, long>("convergenceType", *request->convergenceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->coverageProblemLevels)) {
    body->insert(pair<string, vector<string>>("coverageProblemLevels", *request->coverageProblemLevels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effection)) {
    body->insert(pair<string, string>("effection", *request->effection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    body->insert(pair<string, string>("incidentLevel", *request->incidentLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchCount)) {
    body->insert(pair<string, long>("matchCount", *request->matchCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notifyChannels)) {
    body->insert(pair<string, vector<string>>("notifyChannels", *request->notifyChannels));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->problemEffectionServices)) {
    body->insert(pair<string, vector<long>>("problemEffectionServices", *request->problemEffectionServices));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, ProblemLevelGroupValue>>(request->problemLevelGroup)) {
    body->insert(pair<string, map<string, ProblemLevelGroupValue>>("problemLevelGroup", *request->problemLevelGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    body->insert(pair<string, long>("relatedServiceId", *request->relatedServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRouteRuleRequestRouteChildRules>>(request->routeChildRules)) {
    body->insert(pair<string, vector<UpdateRouteRuleRequestRouteChildRules>>("routeChildRules", *request->routeChildRules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    body->insert(pair<string, string>("routeType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeWindow)) {
    body->insert(pair<string, long>("timeWindow", *request->timeWindow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeWindowUnit)) {
    body->insert(pair<string, string>("timeWindowUnit", *request->timeWindowUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/edit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRouteRuleResponse(callApi(params, req, runtime));
}

UpdateRouteRuleResponse Alibabacloud_GEMP20210413::Client::updateRouteRule(shared_ptr<UpdateRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRouteRuleWithOptions(request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_GEMP20210413::Client::updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    body->insert(pair<string, string>("serviceDescription", *request->serviceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    body->insert(pair<string, long>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceResponse(callApi(params, req, runtime));
}

UpdateServiceResponse Alibabacloud_GEMP20210413::Client::updateService(shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceWithOptions(request, headers, runtime);
}

UpdateServiceGroupResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupWithOptions(shared_ptr<UpdateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableWebhook)) {
    body->insert(pair<string, string>("enableWebhook", *request->enableWebhook));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceGroupRequestMonitorSourceTemplates>>(request->monitorSourceTemplates)) {
    body->insert(pair<string, vector<UpdateServiceGroupRequestMonitorSourceTemplates>>("monitorSourceTemplates", *request->monitorSourceTemplates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupDescription)) {
    body->insert(pair<string, string>("serviceGroupDescription", *request->serviceGroupDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupName)) {
    body->insert(pair<string, string>("serviceGroupName", *request->serviceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    body->insert(pair<string, vector<long>>("userIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookLink)) {
    body->insert(pair<string, string>("webhookLink", *request->webhookLink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookType)) {
    body->insert(pair<string, string>("webhookType", *request->webhookType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceGroup"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/modify"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceGroupResponse(callApi(params, req, runtime));
}

UpdateServiceGroupResponse Alibabacloud_GEMP20210413::Client::updateServiceGroup(shared_ptr<UpdateServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceGroupWithOptions(request, headers, runtime);
}

UpdateServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupSchedulingWithOptions(shared_ptr<UpdateServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceGroupSchedulingRequestFastScheduling>(request->fastScheduling)) {
    body->insert(pair<string, UpdateServiceGroupSchedulingRequestFastScheduling>("fastScheduling", *request->fastScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceGroupSchedulingRequestFineScheduling>(request->fineScheduling)) {
    body->insert(pair<string, UpdateServiceGroupSchedulingRequestFineScheduling>("fineScheduling", *request->fineScheduling));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingWay)) {
    body->insert(pair<string, string>("schedulingWay", *request->schedulingWay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceGroupScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceGroupSchedulingResponse(callApi(params, req, runtime));
}

UpdateServiceGroupSchedulingResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupScheduling(shared_ptr<UpdateServiceGroupSchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceGroupSchedulingWithOptions(request, headers, runtime);
}

UpdateServiceGroupSpecialDaySchedulingResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupSpecialDaySchedulingWithOptions(shared_ptr<UpdateServiceGroupSpecialDaySchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingDate)) {
    body->insert(pair<string, string>("schedulingDate", *request->schedulingDate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays>>(request->schedulingSpecialDays)) {
    body->insert(pair<string, vector<UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays>>("schedulingSpecialDays", *request->schedulingSpecialDays));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    body->insert(pair<string, long>("serviceGroupId", *request->serviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceGroupSpecialDayScheduling"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/services/group/scheduling/updateSpecialDayScheduling"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceGroupSpecialDaySchedulingResponse(callApi(params, req, runtime));
}

UpdateServiceGroupSpecialDaySchedulingResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupSpecialDayScheduling(shared_ptr<UpdateServiceGroupSpecialDaySchedulingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceGroupSpecialDaySchedulingWithOptions(request, headers, runtime);
}

UpdateSubscriptionResponse Alibabacloud_GEMP20210413::Client::updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredType)) {
    body->insert(pair<string, string>("expiredType", *request->expiredType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestNotifyObjectList>>(request->notifyObjectList)) {
    body->insert(pair<string, vector<UpdateSubscriptionRequestNotifyObjectList>>("notifyObjectList", *request->notifyObjectList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObjectType)) {
    body->insert(pair<string, string>("notifyObjectType", *request->notifyObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestNotifyStrategyList>>(request->notifyStrategyList)) {
    body->insert(pair<string, vector<UpdateSubscriptionRequestNotifyStrategyList>>("notifyStrategyList", *request->notifyStrategyList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestScopeObjectList>>(request->scopeObjectList)) {
    body->insert(pair<string, vector<UpdateSubscriptionRequestScopeObjectList>>("scopeObjectList", *request->scopeObjectList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    body->insert(pair<string, long>("subscriptionId", *request->subscriptionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    body->insert(pair<string, string>("subscriptionTitle", *request->subscriptionTitle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubscription"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/notify/subscription/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubscriptionResponse(callApi(params, req, runtime));
}

UpdateSubscriptionResponse Alibabacloud_GEMP20210413::Client::updateSubscription(shared_ptr<UpdateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSubscriptionWithOptions(request, headers, runtime);
}

UpdateUserResponse Alibabacloud_GEMP20210413::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ramId)) {
    body->insert(pair<string, long>("ramId", *request->ramId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("userId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_GEMP20210413::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserWithOptions(request, headers, runtime);
}

UpdateUserGuideStatusResponse Alibabacloud_GEMP20210413::Client::updateUserGuideStatusWithOptions(shared_ptr<UpdateUserGuideStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guideAction)) {
    body->insert(pair<string, string>("guideAction", *request->guideAction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserGuideStatus"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/update/guide/status"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserGuideStatusResponse(callApi(params, req, runtime));
}

UpdateUserGuideStatusResponse Alibabacloud_GEMP20210413::Client::updateUserGuideStatus(shared_ptr<UpdateUserGuideStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserGuideStatusWithOptions(request, headers, runtime);
}

VerifyRouteRuleResponse Alibabacloud_GEMP20210413::Client::verifyRouteRuleWithOptions(shared_ptr<VerifyRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    body->insert(pair<string, long>("routeRuleId", *request->routeRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<VerifyRouteRuleRequestTestSourceEvents>>(request->testSourceEvents)) {
    body->insert(pair<string, vector<VerifyRouteRuleRequestTestSourceEvents>>("testSourceEvents", *request->testSourceEvents));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyRouteRule"))},
    {"version", boost::any(string("2021-04-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/routeRule/verify"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyRouteRuleResponse(callApi(params, req, runtime));
}

VerifyRouteRuleResponse Alibabacloud_GEMP20210413::Client::verifyRouteRule(shared_ptr<VerifyRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return verifyRouteRuleWithOptions(request, headers, runtime);
}

