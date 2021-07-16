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
  _endpointRule = make_shared<string>("");
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

ListIncidentTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentTimelines(shared_ptr<ListIncidentTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentTimelinesWithOptions(request, headers, runtime);
}

ListIncidentTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentTimelinesWithOptions(shared_ptr<ListIncidentTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIncidentTimelinesResponse(doROARequest(make_shared<string>("ListIncidentTimelines"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/timeline")), make_shared<string>("json"), req, runtime));
}

UpdateProblemNoticeResponse Alibabacloud_GEMP20210413::Client::updateProblemNotice(shared_ptr<UpdateProblemNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemNoticeWithOptions(request, headers, runtime);
}

UpdateProblemNoticeResponse Alibabacloud_GEMP20210413::Client::updateProblemNoticeWithOptions(shared_ptr<UpdateProblemNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemNoticeResponse(doROARequest(make_shared<string>("UpdateProblemNotice"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/notify")), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_GEMP20210413::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUsersWithOptions(request, headers, runtime);
}

ListUsersResponse Alibabacloud_GEMP20210413::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    (*body)["username"] = *request->username;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    (*body)["phone"] = *request->phone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramId)) {
    (*body)["ramId"] = *request->ramId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scene)) {
    (*body)["scene"] = *request->scene;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListUsersResponse(doROARequest(make_shared<string>("ListUsers"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/list")), make_shared<string>("json"), req, runtime));
}

ListIntegrationConfigTimelinesResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigTimelines(shared_ptr<ListIntegrationConfigTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIntegrationConfigTimelinesWithOptions(request, headers, runtime);
}

ListIntegrationConfigTimelinesResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigTimelinesWithOptions(shared_ptr<ListIntegrationConfigTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIntegrationConfigTimelinesResponse(doROARequest(make_shared<string>("ListIntegrationConfigTimelines"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/timeline")), make_shared<string>("json"), req, runtime));
}

UpdateIncidentResponse Alibabacloud_GEMP20210413::Client::updateIncident(shared_ptr<UpdateIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIncidentWithOptions(request, headers, runtime);
}

UpdateIncidentResponse Alibabacloud_GEMP20210413::Client::updateIncidentWithOptions(shared_ptr<UpdateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    (*body)["incidentLevel"] = *request->incidentLevel;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    (*body)["effect"] = *request->effect;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentTitle)) {
    (*body)["incidentTitle"] = *request->incidentTitle;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateIncidentResponse(doROARequest(make_shared<string>("UpdateIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/update")), make_shared<string>("json"), req, runtime));
}

GetServiceGroupResponse Alibabacloud_GEMP20210413::Client::getServiceGroup(shared_ptr<GetServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceGroupWithOptions(request, headers, runtime);
}

GetServiceGroupResponse Alibabacloud_GEMP20210413::Client::getServiceGroupWithOptions(shared_ptr<GetServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetServiceGroupResponse(doROARequest(make_shared<string>("GetServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/detail")), make_shared<string>("json"), req, runtime));
}

ListRouteRulesResponse Alibabacloud_GEMP20210413::Client::listRouteRules(shared_ptr<ListRouteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRouteRulesWithOptions(request, headers, runtime);
}

ListRouteRulesResponse Alibabacloud_GEMP20210413::Client::listRouteRulesWithOptions(shared_ptr<ListRouteRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->ruleName)) {
    (*body)["ruleName"] = *request->ruleName;
  }
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->serviceName)) {
    (*body)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListRouteRulesResponse(doROARequest(make_shared<string>("ListRouteRules"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/list")), make_shared<string>("json"), req, runtime));
}

DisableSubscriptionResponse Alibabacloud_GEMP20210413::Client::disableSubscription(shared_ptr<DisableSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableSubscriptionWithOptions(request, headers, runtime);
}

DisableSubscriptionResponse Alibabacloud_GEMP20210413::Client::disableSubscriptionWithOptions(shared_ptr<DisableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    (*body)["subscriptionId"] = *request->subscriptionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DisableSubscriptionResponse(doROARequest(make_shared<string>("DisableSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/doDisable")), make_shared<string>("json"), req, runtime));
}

CreateSubscriptionResponse Alibabacloud_GEMP20210413::Client::createSubscription(shared_ptr<CreateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSubscriptionWithOptions(request, headers, runtime);
}

CreateSubscriptionResponse Alibabacloud_GEMP20210413::Client::createSubscriptionWithOptions(shared_ptr<CreateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    (*body)["subscriptionTitle"] = *request->subscriptionTitle;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    (*body)["scope"] = *request->scope;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyObjectType)) {
    (*body)["notifyObjectType"] = *request->notifyObjectType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredType)) {
    (*body)["expiredType"] = *request->expiredType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestScopeObjectList>>(request->scopeObjectList)) {
    (*body)["scopeObjectList"] = *request->scopeObjectList;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestNotifyObjectList>>(request->notifyObjectList)) {
    (*body)["notifyObjectList"] = *request->notifyObjectList;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubscriptionRequestNotifyStrategyList>>(request->notifyStrategyList)) {
    (*body)["notifyStrategyList"] = *request->notifyStrategyList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*body)["startTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*body)["endTime"] = *request->endTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateSubscriptionResponse(doROARequest(make_shared<string>("CreateSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/create")), make_shared<string>("json"), req, runtime));
}

DeleteIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::deleteIntegrationConfig(shared_ptr<DeleteIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIntegrationConfigWithOptions(request, headers, runtime);
}

DeleteIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::deleteIntegrationConfigWithOptions(shared_ptr<DeleteIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteIntegrationConfigResponse(doROARequest(make_shared<string>("DeleteIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/delete")), make_shared<string>("json"), req, runtime));
}

UpdateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::updateProblemMeasure(shared_ptr<UpdateProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemMeasureWithOptions(request, headers, runtime);
}

UpdateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::updateProblemMeasureWithOptions(shared_ptr<UpdateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    (*body)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    (*body)["content"] = *request->content;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkStandard)) {
    (*body)["checkStandard"] = *request->checkStandard;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkUserId)) {
    (*body)["checkUserId"] = *request->checkUserId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->directorId)) {
    (*body)["directorId"] = *request->directorId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stalkerId)) {
    (*body)["stalkerId"] = *request->stalkerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planFinishTime)) {
    (*body)["planFinishTime"] = *request->planFinishTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->measureId)) {
    (*body)["measureId"] = *request->measureId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*body)["status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemMeasureResponse(doROARequest(make_shared<string>("UpdateProblemMeasure"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/improvement/measure/update")), make_shared<string>("json"), req, runtime));
}

ListAlertsResponse Alibabacloud_GEMP20210413::Client::listAlerts(shared_ptr<ListAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlertsWithOptions(request, headers, runtime);
}

ListAlertsResponse Alibabacloud_GEMP20210413::Client::listAlertsWithOptions(shared_ptr<ListAlertsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertLevel)) {
    (*body)["alertLevel"] = *request->alertLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    (*body)["alertName"] = *request->alertName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListAlertsResponse(doROARequest(make_shared<string>("ListAlerts"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/alerts/list")), make_shared<string>("json"), req, runtime));
}

ListProblemSubtotalsResponse Alibabacloud_GEMP20210413::Client::listProblemSubtotals(shared_ptr<ListProblemSubtotalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemSubtotalsWithOptions(request, headers, runtime);
}

ListProblemSubtotalsResponse Alibabacloud_GEMP20210413::Client::listProblemSubtotalsWithOptions(shared_ptr<ListProblemSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListProblemSubtotalsResponse(doROARequest(make_shared<string>("ListProblemSubtotals"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/list/subtotal")), make_shared<string>("json"), req, runtime));
}

GetProblemPreviewResponse Alibabacloud_GEMP20210413::Client::getProblemPreview(shared_ptr<GetProblemPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemPreviewWithOptions(request, headers, runtime);
}

GetProblemPreviewResponse Alibabacloud_GEMP20210413::Client::getProblemPreviewWithOptions(shared_ptr<GetProblemPreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    (*body)["problemLevel"] = *request->problemLevel;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->effectServiceIds)) {
    (*body)["effectServiceIds"] = *request->effectServiceIds;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    (*body)["serviceGroupIds"] = *request->serviceGroupIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetProblemPreviewResponse(doROARequest(make_shared<string>("GetProblemPreview"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/preview")), make_shared<string>("json"), req, runtime));
}

CreateRouteRuleResponse Alibabacloud_GEMP20210413::Client::createRouteRule(shared_ptr<CreateRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRouteRuleWithOptions(request, headers, runtime);
}

CreateRouteRuleResponse Alibabacloud_GEMP20210413::Client::createRouteRuleWithOptions(shared_ptr<CreateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->ruleName)) {
    (*body)["ruleName"] = *request->ruleName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    (*body)["routeType"] = *request->routeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    (*body)["incidentLevel"] = *request->incidentLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assignObjectId)) {
    (*body)["assignObjectId"] = *request->assignObjectId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assignObjectType)) {
    (*body)["assignObjectType"] = *request->assignObjectType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effection)) {
    (*body)["effection"] = *request->effection;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeWindow)) {
    (*body)["timeWindow"] = *request->timeWindow;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchCount)) {
    (*body)["matchCount"] = *request->matchCount;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeWindowUnit)) {
    (*body)["timeWindowUnit"] = *request->timeWindowUnit;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRouteRuleRequestRouteChildRules>>(request->routeChildRules)) {
    (*body)["routeChildRules"] = *request->routeChildRules;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notifyChannels)) {
    (*body)["notifyChannels"] = *request->notifyChannels;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateRouteRuleResponse(doROARequest(make_shared<string>("CreateRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/save")), make_shared<string>("json"), req, runtime));
}

UpdateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::updateProblemTimeline(shared_ptr<UpdateProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemTimelineWithOptions(request, headers, runtime);
}

UpdateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::updateProblemTimelineWithOptions(shared_ptr<UpdateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemTimelineId)) {
    (*body)["problemTimelineId"] = *request->problemTimelineId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyNode)) {
    (*body)["keyNode"] = *request->keyNode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    (*body)["content"] = *request->content;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    (*body)["time"] = *request->time;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemTimelineResponse(doROARequest(make_shared<string>("UpdateProblemTimeline"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/timeline/update")), make_shared<string>("json"), req, runtime));
}

UpdateRouteRuleResponse Alibabacloud_GEMP20210413::Client::updateRouteRule(shared_ptr<UpdateRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRouteRuleWithOptions(request, headers, runtime);
}

UpdateRouteRuleResponse Alibabacloud_GEMP20210413::Client::updateRouteRuleWithOptions(shared_ptr<UpdateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    (*body)["ruleName"] = *request->ruleName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    (*body)["routeRuleId"] = *request->routeRuleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    (*body)["routeType"] = *request->routeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    (*body)["incidentLevel"] = *request->incidentLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assignObjectId)) {
    (*body)["assignObjectId"] = *request->assignObjectId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assignObjectType)) {
    (*body)["assignObjectType"] = *request->assignObjectType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effection)) {
    (*body)["effection"] = *request->effection;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeWindow)) {
    (*body)["timeWindow"] = *request->timeWindow;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeWindowUnit)) {
    (*body)["timeWindowUnit"] = *request->timeWindowUnit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchCount)) {
    (*body)["matchCount"] = *request->matchCount;
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRouteRuleRequestRouteChildRules>>(request->routeChildRules)) {
    (*body)["routeChildRules"] = *request->routeChildRules;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notifyChannels)) {
    (*body)["notifyChannels"] = *request->notifyChannels;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateRouteRuleResponse(doROARequest(make_shared<string>("UpdateRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/edit")), make_shared<string>("json"), req, runtime));
}

DisableRouteRuleResponse Alibabacloud_GEMP20210413::Client::disableRouteRule(shared_ptr<DisableRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableRouteRuleWithOptions(request, headers, runtime);
}

DisableRouteRuleResponse Alibabacloud_GEMP20210413::Client::disableRouteRuleWithOptions(shared_ptr<DisableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    (*body)["routeRuleId"] = *request->routeRuleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DisableRouteRuleResponse(doROARequest(make_shared<string>("DisableRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/disable")), make_shared<string>("json"), req, runtime));
}

EnableSubscriptionResponse Alibabacloud_GEMP20210413::Client::enableSubscription(shared_ptr<EnableSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableSubscriptionWithOptions(request, headers, runtime);
}

EnableSubscriptionResponse Alibabacloud_GEMP20210413::Client::enableSubscriptionWithOptions(shared_ptr<EnableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    (*body)["subscriptionId"] = *request->subscriptionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return EnableSubscriptionResponse(doROARequest(make_shared<string>("EnableSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/enable")), make_shared<string>("json"), req, runtime));
}

UpdateSubscriptionResponse Alibabacloud_GEMP20210413::Client::updateSubscription(shared_ptr<UpdateSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSubscriptionWithOptions(request, headers, runtime);
}

UpdateSubscriptionResponse Alibabacloud_GEMP20210413::Client::updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    (*body)["subscriptionId"] = *request->subscriptionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    (*body)["subscriptionTitle"] = *request->subscriptionTitle;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    (*body)["scope"] = *request->scope;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObjectType)) {
    (*body)["notifyObjectType"] = *request->notifyObjectType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredType)) {
    (*body)["expiredType"] = *request->expiredType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestScopeObjectList>>(request->scopeObjectList)) {
    (*body)["scopeObjectList"] = *request->scopeObjectList;
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestNotifyObjectList>>(request->notifyObjectList)) {
    (*body)["notifyObjectList"] = *request->notifyObjectList;
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSubscriptionRequestNotifyStrategyList>>(request->notifyStrategyList)) {
    (*body)["notifyStrategyList"] = *request->notifyStrategyList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*body)["startTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*body)["endTime"] = *request->endTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateSubscriptionResponse(doROARequest(make_shared<string>("UpdateSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/update")), make_shared<string>("json"), req, runtime));
}

GetIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getIncidentStatistics(shared_ptr<GetIncidentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentStatisticsWithOptions(request, headers, runtime);
}

GetIncidentStatisticsResponse Alibabacloud_GEMP20210413::Client::getIncidentStatisticsWithOptions(shared_ptr<GetIncidentStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetIncidentStatisticsResponse(doROARequest(make_shared<string>("GetIncidentStatistics"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/count")), make_shared<string>("json"), req, runtime));
}

ListSourceEventsResponse Alibabacloud_GEMP20210413::Client::listSourceEvents(shared_ptr<ListSourceEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSourceEventsWithOptions(request, headers, runtime);
}

ListSourceEventsResponse Alibabacloud_GEMP20210413::Client::listSourceEventsWithOptions(shared_ptr<ListSourceEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    (*body)["instanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    (*body)["instanceType"] = *request->instanceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startRowKey)) {
    (*body)["startRowKey"] = *request->startRowKey;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopRowKey)) {
    (*body)["stopRowKey"] = *request->stopRowKey;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListSourceEventsResponse(doROARequest(make_shared<string>("ListSourceEvents"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/events/listOriginalEvent")), make_shared<string>("json"), req, runtime));
}

GenerateProblemPictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureUploadSign(shared_ptr<GenerateProblemPictureUploadSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateProblemPictureUploadSignWithOptions(request, headers, runtime);
}

GenerateProblemPictureUploadSignResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureUploadSignWithOptions(shared_ptr<GenerateProblemPictureUploadSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    (*body)["fileName"] = *request->fileName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    (*body)["fileType"] = *request->fileType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSize)) {
    (*body)["fileSize"] = *request->fileSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GenerateProblemPictureUploadSignResponse(doROARequest(make_shared<string>("GenerateProblemPictureUploadSign"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/oss/generatePostPolicy")), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_GEMP20210413::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserWithOptions(request, headers, runtime);
}

GetUserResponse Alibabacloud_GEMP20210413::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    (*body)["userId"] = *request->userId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetUserResponse(doROARequest(make_shared<string>("GetUser"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/getUser")), make_shared<string>("json"), req, runtime));
}

AddProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::addProblemServiceGroup(shared_ptr<AddProblemServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addProblemServiceGroupWithOptions(request, headers, runtime);
}

AddProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::addProblemServiceGroupWithOptions(shared_ptr<AddProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    (*body)["serviceGroupIds"] = *request->serviceGroupIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return AddProblemServiceGroupResponse(doROARequest(make_shared<string>("AddProblemServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/addServiceGroup")), make_shared<string>("json"), req, runtime));
}

ReplayProblemResponse Alibabacloud_GEMP20210413::Client::replayProblem(shared_ptr<ReplayProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return replayProblemWithOptions(request, headers, runtime);
}

ReplayProblemResponse Alibabacloud_GEMP20210413::Client::replayProblemWithOptions(shared_ptr<ReplayProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replayDutyUserId)) {
    (*body)["replayDutyUserId"] = *request->replayDutyUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ReplayProblemResponse(doROARequest(make_shared<string>("ReplayProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/replay")), make_shared<string>("json"), req, runtime));
}

GetProblemResponse Alibabacloud_GEMP20210413::Client::getProblem(shared_ptr<GetProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemWithOptions(request, headers, runtime);
}

GetProblemResponse Alibabacloud_GEMP20210413::Client::getProblemWithOptions(shared_ptr<GetProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetProblemResponse(doROARequest(make_shared<string>("GetProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/detail")), make_shared<string>("json"), req, runtime));
}

DeleteProblemResponse Alibabacloud_GEMP20210413::Client::deleteProblem(shared_ptr<DeleteProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemWithOptions(request, headers, runtime);
}

DeleteProblemResponse Alibabacloud_GEMP20210413::Client::deleteProblemWithOptions(shared_ptr<DeleteProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteProblemResponse(doROARequest(make_shared<string>("DeleteProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/delete")), make_shared<string>("json"), req, runtime));
}

CreateServiceGroupResponse Alibabacloud_GEMP20210413::Client::createServiceGroup(shared_ptr<CreateServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceGroupWithOptions(request, headers, runtime);
}

CreateServiceGroupResponse Alibabacloud_GEMP20210413::Client::createServiceGroupWithOptions(shared_ptr<CreateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupName)) {
    (*body)["serviceGroupName"] = *request->serviceGroupName;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    (*body)["userIds"] = *request->userIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableWebhook)) {
    (*body)["enableWebhook"] = *request->enableWebhook;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookType)) {
    (*body)["webhookType"] = *request->webhookType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupDescription)) {
    (*body)["serviceGroupDescription"] = *request->serviceGroupDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookLink)) {
    (*body)["webhookLink"] = *request->webhookLink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateServiceGroupResponse(doROARequest(make_shared<string>("CreateServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/insert")), make_shared<string>("json"), req, runtime));
}

DeliverIncidentResponse Alibabacloud_GEMP20210413::Client::deliverIncident(shared_ptr<DeliverIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deliverIncidentWithOptions(request, headers, runtime);
}

DeliverIncidentResponse Alibabacloud_GEMP20210413::Client::deliverIncidentWithOptions(shared_ptr<DeliverIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assignUserId)) {
    (*body)["assignUserId"] = *request->assignUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeliverIncidentResponse(doROARequest(make_shared<string>("DeliverIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/deliver")), make_shared<string>("json"), req, runtime));
}

DeleteIncidentResponse Alibabacloud_GEMP20210413::Client::deleteIncident(shared_ptr<DeleteIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIncidentWithOptions(request, headers, runtime);
}

DeleteIncidentResponse Alibabacloud_GEMP20210413::Client::deleteIncidentWithOptions(shared_ptr<DeleteIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteIncidentResponse(doROARequest(make_shared<string>("DeleteIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/delete")), make_shared<string>("json"), req, runtime));
}

ListServicesResponse Alibabacloud_GEMP20210413::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListServicesResponse Alibabacloud_GEMP20210413::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*body)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListServicesResponse(doROARequest(make_shared<string>("ListServices"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/list")), make_shared<string>("json"), req, runtime));
}

GetSubscriptionResponse Alibabacloud_GEMP20210413::Client::getSubscription(shared_ptr<GetSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubscriptionWithOptions(request, headers, runtime);
}

GetSubscriptionResponse Alibabacloud_GEMP20210413::Client::getSubscriptionWithOptions(shared_ptr<GetSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    (*body)["subscriptionId"] = *request->subscriptionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetSubscriptionResponse(doROARequest(make_shared<string>("GetSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/detail")), make_shared<string>("json"), req, runtime));
}

CreateProblemTimelinesResponse Alibabacloud_GEMP20210413::Client::createProblemTimelines(shared_ptr<CreateProblemTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemTimelinesWithOptions(request, headers, runtime);
}

CreateProblemTimelinesResponse Alibabacloud_GEMP20210413::Client::createProblemTimelinesWithOptions(shared_ptr<CreateProblemTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timelineNodes)) {
    (*body)["timelineNodes"] = *request->timelineNodes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemTimelinesResponse(doROARequest(make_shared<string>("CreateProblemTimelines"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/timeline/batchCreate")), make_shared<string>("json"), req, runtime));
}

CreateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::createProblemTimeline(shared_ptr<CreateProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemTimelineWithOptions(request, headers, runtime);
}

CreateProblemTimelineResponse Alibabacloud_GEMP20210413::Client::createProblemTimelineWithOptions(shared_ptr<CreateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyNode)) {
    (*body)["keyNode"] = *request->keyNode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    (*body)["content"] = *request->content;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    (*body)["time"] = *request->time;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemTimelineResponse(doROARequest(make_shared<string>("CreateProblemTimeline"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/timeline/create")), make_shared<string>("json"), req, runtime));
}

CancelProblemResponse Alibabacloud_GEMP20210413::Client::cancelProblem(shared_ptr<CancelProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelProblemWithOptions(request, headers, runtime);
}

CancelProblemResponse Alibabacloud_GEMP20210413::Client::cancelProblemWithOptions(shared_ptr<CancelProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cancelReasonDescription)) {
    (*body)["cancelReasonDescription"] = *request->cancelReasonDescription;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cancelReason)) {
    (*body)["cancelReason"] = *request->cancelReason;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CancelProblemResponse(doROARequest(make_shared<string>("CancelProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/cancel")), make_shared<string>("json"), req, runtime));
}

UpdateServiceGroupResponse Alibabacloud_GEMP20210413::Client::updateServiceGroup(shared_ptr<UpdateServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceGroupWithOptions(request, headers, runtime);
}

UpdateServiceGroupResponse Alibabacloud_GEMP20210413::Client::updateServiceGroupWithOptions(shared_ptr<UpdateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableWebhook)) {
    (*body)["enableWebhook"] = *request->enableWebhook;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookType)) {
    (*body)["webhookType"] = *request->webhookType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookLink)) {
    (*body)["webhookLink"] = *request->webhookLink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupName)) {
    (*body)["serviceGroupName"] = *request->serviceGroupName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroupDescription)) {
    (*body)["serviceGroupDescription"] = *request->serviceGroupDescription;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    (*body)["userIds"] = *request->userIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateServiceGroupResponse(doROARequest(make_shared<string>("UpdateServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/modify")), make_shared<string>("json"), req, runtime));
}

UpdateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::updateIntegrationConfig(shared_ptr<UpdateIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIntegrationConfigWithOptions(request, headers, runtime);
}

UpdateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::updateIntegrationConfigWithOptions(shared_ptr<UpdateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    (*body)["accessKey"] = *request->accessKey;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateIntegrationConfigResponse(doROARequest(make_shared<string>("UpdateIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/update")), make_shared<string>("json"), req, runtime));
}

ListIncidentSubtotalsResponse Alibabacloud_GEMP20210413::Client::listIncidentSubtotals(shared_ptr<ListIncidentSubtotalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentSubtotalsWithOptions(request, headers, runtime);
}

ListIncidentSubtotalsResponse Alibabacloud_GEMP20210413::Client::listIncidentSubtotalsWithOptions(shared_ptr<ListIncidentSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIncidentSubtotalsResponse(doROARequest(make_shared<string>("ListIncidentSubtotals"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/list/subtotal")), make_shared<string>("json"), req, runtime));
}

DeleteProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::deleteProblemEffectionService(shared_ptr<DeleteProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemEffectionServiceWithOptions(request, headers, runtime);
}

DeleteProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::deleteProblemEffectionServiceWithOptions(shared_ptr<DeleteProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    (*body)["effectionServiceId"] = *request->effectionServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteProblemEffectionServiceResponse(doROARequest(make_shared<string>("DeleteProblemEffectionService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/effectionService/delete")), make_shared<string>("json"), req, runtime));
}

ListDictionariesResponse Alibabacloud_GEMP20210413::Client::listDictionaries(shared_ptr<ListDictionariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictionariesWithOptions(request, headers, runtime);
}

ListDictionariesResponse Alibabacloud_GEMP20210413::Client::listDictionariesWithOptions(shared_ptr<ListDictionariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListDictionariesResponse(doROARequest(make_shared<string>("ListDictionaries"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/dict/list")), make_shared<string>("json"), req, runtime));
}

ListIncidentsResponse Alibabacloud_GEMP20210413::Client::listIncidents(shared_ptr<ListIncidentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentsWithOptions(request, headers, runtime);
}

ListIncidentsResponse Alibabacloud_GEMP20210413::Client::listIncidentsWithOptions(shared_ptr<ListIncidentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    (*body)["incidentLevel"] = *request->incidentLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    (*body)["effect"] = *request->effect;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relationServiceId)) {
    (*body)["relationServiceId"] = *request->relationServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentStatus)) {
    (*body)["incidentStatus"] = *request->incidentStatus;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->me)) {
    (*body)["me"] = *request->me;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIncidentsResponse(doROARequest(make_shared<string>("ListIncidents"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/list")), make_shared<string>("json"), req, runtime));
}

CreateServiceResponse Alibabacloud_GEMP20210413::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_GEMP20210413::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    (*body)["serviceDescription"] = *request->serviceDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*body)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateServiceResponse(doROARequest(make_shared<string>("CreateService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/save")), make_shared<string>("json"), req, runtime));
}

ConfirmIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::confirmIntegrationConfig(shared_ptr<ConfirmIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return confirmIntegrationConfigWithOptions(request, headers, runtime);
}

ConfirmIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::confirmIntegrationConfigWithOptions(shared_ptr<ConfirmIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ConfirmIntegrationConfigResponse(doROARequest(make_shared<string>("ConfirmIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/confirm")), make_shared<string>("json"), req, runtime));
}

UpdateServiceResponse Alibabacloud_GEMP20210413::Client::updateService(shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceWithOptions(request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_GEMP20210413::Client::updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    (*body)["serviceDescription"] = *request->serviceDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*body)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    (*body)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateServiceResponse(doROARequest(make_shared<string>("UpdateService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/update")), make_shared<string>("json"), req, runtime));
}

ListIncidentDetailTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailTimelines(shared_ptr<ListIncidentDetailTimelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIncidentDetailTimelinesWithOptions(request, headers, runtime);
}

ListIncidentDetailTimelinesResponse Alibabacloud_GEMP20210413::Client::listIncidentDetailTimelinesWithOptions(shared_ptr<ListIncidentDetailTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIncidentDetailTimelinesResponse(doROARequest(make_shared<string>("ListIncidentDetailTimelines"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/detail/timeline")), make_shared<string>("json"), req, runtime));
}

EnableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::enableServiceGroupWebhook(shared_ptr<EnableServiceGroupWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableServiceGroupWebhookWithOptions(request, headers, runtime);
}

EnableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::enableServiceGroupWebhookWithOptions(shared_ptr<EnableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return EnableServiceGroupWebhookResponse(doROARequest(make_shared<string>("EnableServiceGroupWebhook"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/enableWebhook")), make_shared<string>("json"), req, runtime));
}

DeleteSubscriptionResponse Alibabacloud_GEMP20210413::Client::deleteSubscription(shared_ptr<DeleteSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSubscriptionWithOptions(request, headers, runtime);
}

DeleteSubscriptionResponse Alibabacloud_GEMP20210413::Client::deleteSubscriptionWithOptions(shared_ptr<DeleteSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionId)) {
    (*body)["subscriptionId"] = *request->subscriptionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteSubscriptionResponse(doROARequest(make_shared<string>("DeleteSubscription"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/delete")), make_shared<string>("json"), req, runtime));
}

ListSubscriptionsResponse Alibabacloud_GEMP20210413::Client::listSubscriptions(shared_ptr<ListSubscriptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubscriptionsWithOptions(request, headers, runtime);
}

ListSubscriptionsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionsWithOptions(shared_ptr<ListSubscriptionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionTitle)) {
    (*body)["subscriptionTitle"] = *request->subscriptionTitle;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    (*body)["scope"] = *request->scope;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeObject)) {
    (*body)["scopeObject"] = *request->scopeObject;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObjectType)) {
    (*body)["notifyObjectType"] = *request->notifyObjectType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyObject)) {
    (*body)["notifyObject"] = *request->notifyObject;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListSubscriptionsResponse(doROARequest(make_shared<string>("ListSubscriptions"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/notify/subscription/list")), make_shared<string>("json"), req, runtime));
}

RespondIncidentResponse Alibabacloud_GEMP20210413::Client::respondIncident(shared_ptr<RespondIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return respondIncidentWithOptions(request, headers, runtime);
}

RespondIncidentResponse Alibabacloud_GEMP20210413::Client::respondIncidentWithOptions(shared_ptr<RespondIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIds)) {
    (*body)["incidentIds"] = *request->incidentIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RespondIncidentResponse(doROARequest(make_shared<string>("RespondIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/response")), make_shared<string>("json"), req, runtime));
}

ListProblemTimeLinesResponse Alibabacloud_GEMP20210413::Client::listProblemTimeLines(shared_ptr<ListProblemTimeLinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemTimeLinesWithOptions(request, headers, runtime);
}

ListProblemTimeLinesResponse Alibabacloud_GEMP20210413::Client::listProblemTimeLinesWithOptions(shared_ptr<ListProblemTimeLinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListProblemTimeLinesResponse(doROARequest(make_shared<string>("ListProblemTimeLines"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/detail/timeLines")), make_shared<string>("json"), req, runtime));
}

DeleteProblemMeasureResponse Alibabacloud_GEMP20210413::Client::deleteProblemMeasure(shared_ptr<DeleteProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemMeasureWithOptions(request, headers, runtime);
}

DeleteProblemMeasureResponse Alibabacloud_GEMP20210413::Client::deleteProblemMeasureWithOptions(shared_ptr<DeleteProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->measureId)) {
    (*body)["measureId"] = *request->measureId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteProblemMeasureResponse(doROARequest(make_shared<string>("DeleteProblemMeasure"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/improvement/measure/delete")), make_shared<string>("json"), req, runtime));
}

DeleteServiceResponse Alibabacloud_GEMP20210413::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(request, headers, runtime);
}

DeleteServiceResponse Alibabacloud_GEMP20210413::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    (*body)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteServiceResponse(doROARequest(make_shared<string>("DeleteService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/delete")), make_shared<string>("json"), req, runtime));
}

RecoverProblemResponse Alibabacloud_GEMP20210413::Client::recoverProblem(shared_ptr<RecoverProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recoverProblemWithOptions(request, headers, runtime);
}

RecoverProblemResponse Alibabacloud_GEMP20210413::Client::recoverProblemWithOptions(shared_ptr<RecoverProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryTime)) {
    (*body)["recoveryTime"] = *request->recoveryTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RecoverProblemResponse(doROARequest(make_shared<string>("RecoverProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/recovery")), make_shared<string>("json"), req, runtime));
}

ListIntegrationConfigsResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigs(shared_ptr<ListIntegrationConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIntegrationConfigsWithOptions(request, headers, runtime);
}

ListIntegrationConfigsResponse Alibabacloud_GEMP20210413::Client::listIntegrationConfigsWithOptions(shared_ptr<ListIntegrationConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceName)) {
    (*body)["monitorSourceName"] = *request->monitorSourceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListIntegrationConfigsResponse(doROARequest(make_shared<string>("ListIntegrationConfigs"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/list")), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_GEMP20210413::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUserWithOptions(request, headers, runtime);
}

DeleteUserResponse Alibabacloud_GEMP20210413::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    (*body)["userId"] = *request->userId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteUserResponse(doROARequest(make_shared<string>("DeleteUser"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/delete")), make_shared<string>("json"), req, runtime));
}

UpdateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::updateProblemEffectionService(shared_ptr<UpdateProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemEffectionServiceWithOptions(request, headers, runtime);
}

UpdateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::updateProblemEffectionServiceWithOptions(shared_ptr<UpdateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    (*body)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    (*body)["level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*body)["status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->picUrl)) {
    (*body)["picUrl"] = *request->picUrl;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    (*body)["effectionServiceId"] = *request->effectionServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemEffectionServiceResponse(doROARequest(make_shared<string>("UpdateProblemEffectionService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/effectionService/update")), make_shared<string>("json"), req, runtime));
}

DeleteServiceGroupResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroup(shared_ptr<DeleteServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceGroupWithOptions(request, headers, runtime);
}

DeleteServiceGroupResponse Alibabacloud_GEMP20210413::Client::deleteServiceGroupWithOptions(shared_ptr<DeleteServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteServiceGroupResponse(doROARequest(make_shared<string>("DeleteServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/delete")), make_shared<string>("json"), req, runtime));
}

DisableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::disableServiceGroupWebhook(shared_ptr<DisableServiceGroupWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableServiceGroupWebhookWithOptions(request, headers, runtime);
}

DisableServiceGroupWebhookResponse Alibabacloud_GEMP20210413::Client::disableServiceGroupWebhookWithOptions(shared_ptr<DisableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DisableServiceGroupWebhookResponse(doROARequest(make_shared<string>("DisableServiceGroupWebhook"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/disableWebhook")), make_shared<string>("json"), req, runtime));
}

RemoveProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::removeProblemServiceGroup(shared_ptr<RemoveProblemServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeProblemServiceGroupWithOptions(request, headers, runtime);
}

RemoveProblemServiceGroupResponse Alibabacloud_GEMP20210413::Client::removeProblemServiceGroupWithOptions(shared_ptr<RemoveProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    (*body)["serviceGroupIds"] = *request->serviceGroupIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RemoveProblemServiceGroupResponse(doROARequest(make_shared<string>("RemoveProblemServiceGroup"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/removeServiceGroup")), make_shared<string>("json"), req, runtime));
}

GetProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::getProblemEffectionService(shared_ptr<GetProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemEffectionServiceWithOptions(request, headers, runtime);
}

GetProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::getProblemEffectionServiceWithOptions(shared_ptr<GetProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->effectionServiceId)) {
    (*body)["effectionServiceId"] = *request->effectionServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetProblemEffectionServiceResponse(doROARequest(make_shared<string>("GetProblemEffectionService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/effectionService/detail")), make_shared<string>("json"), req, runtime));
}

ListMonitorSourcesResponse Alibabacloud_GEMP20210413::Client::listMonitorSources(shared_ptr<ListMonitorSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMonitorSourcesWithOptions(request, headers, runtime);
}

ListMonitorSourcesResponse Alibabacloud_GEMP20210413::Client::listMonitorSourcesWithOptions(shared_ptr<ListMonitorSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListMonitorSourcesResponse(doROARequest(make_shared<string>("ListMonitorSources"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/monitorSource/list")), make_shared<string>("json"), req, runtime));
}

GetIncidentResponse Alibabacloud_GEMP20210413::Client::getIncident(shared_ptr<GetIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIncidentWithOptions(request, headers, runtime);
}

GetIncidentResponse Alibabacloud_GEMP20210413::Client::getIncidentWithOptions(shared_ptr<GetIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetIncidentResponse(doROARequest(make_shared<string>("GetIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/detail")), make_shared<string>("json"), req, runtime));
}

ListProblemsResponse Alibabacloud_GEMP20210413::Client::listProblems(shared_ptr<ListProblemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProblemsWithOptions(request, headers, runtime);
}

ListProblemsResponse Alibabacloud_GEMP20210413::Client::listProblemsWithOptions(shared_ptr<ListProblemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    (*body)["queryType"] = *request->queryType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemStatus)) {
    (*body)["problemStatus"] = *request->problemStatus;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    (*body)["problemLevel"] = *request->problemLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->affectServiceId)) {
    (*body)["affectServiceId"] = *request->affectServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceGroupId)) {
    (*body)["serviceGroupId"] = *request->serviceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    (*body)["mainHandlerId"] = *request->mainHandlerId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeaterId)) {
    (*body)["repeaterId"] = *request->repeaterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoveryStartTime)) {
    (*body)["discoveryStartTime"] = *request->discoveryStartTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoveryEndTime)) {
    (*body)["discoveryEndTime"] = *request->discoveryEndTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreEndTime)) {
    (*body)["restoreEndTime"] = *request->restoreEndTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreStartTime)) {
    (*body)["restoreStartTime"] = *request->restoreStartTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListProblemsResponse(doROARequest(make_shared<string>("ListProblems"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/listProblems")), make_shared<string>("json"), req, runtime));
}

GenerateProblemPictureLinkResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureLink(shared_ptr<GenerateProblemPictureLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateProblemPictureLinkWithOptions(request, headers, runtime);
}

GenerateProblemPictureLinkResponse Alibabacloud_GEMP20210413::Client::generateProblemPictureLinkWithOptions(shared_ptr<GenerateProblemPictureLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keys)) {
    (*body)["keys"] = *request->keys;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GenerateProblemPictureLinkResponse(doROARequest(make_shared<string>("GenerateProblemPictureLink"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/oss/getPresignedLink")), make_shared<string>("json"), req, runtime));
}

GetIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::getIntegrationConfig(shared_ptr<GetIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIntegrationConfigWithOptions(request, headers, runtime);
}

GetIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::getIntegrationConfigWithOptions(shared_ptr<GetIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetIntegrationConfigResponse(doROARequest(make_shared<string>("GetIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/detail")), make_shared<string>("json"), req, runtime));
}

ListConfigsResponse Alibabacloud_GEMP20210413::Client::listConfigs(shared_ptr<ListConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigsWithOptions(request, headers, runtime);
}

ListConfigsResponse Alibabacloud_GEMP20210413::Client::listConfigsWithOptions(shared_ptr<ListConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListConfigsResponse(doROARequest(make_shared<string>("ListConfigs"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/config/all")), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_GEMP20210413::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserWithOptions(request, headers, runtime);
}

CreateUserResponse Alibabacloud_GEMP20210413::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ramId)) {
    (*body)["ramId"] = *request->ramId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    (*body)["phone"] = *request->phone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    (*body)["username"] = *request->username;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    (*body)["email"] = *request->email;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateUserResponse(doROARequest(make_shared<string>("CreateUser"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/create")), make_shared<string>("json"), req, runtime));
}

ListUserSerivceGroupsResponse Alibabacloud_GEMP20210413::Client::listUserSerivceGroups(shared_ptr<ListUserSerivceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserSerivceGroupsWithOptions(request, headers, runtime);
}

ListUserSerivceGroupsResponse Alibabacloud_GEMP20210413::Client::listUserSerivceGroupsWithOptions(shared_ptr<ListUserSerivceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    (*body)["userId"] = *request->userId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListUserSerivceGroupsResponse(doROARequest(make_shared<string>("ListUserSerivceGroups"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/preview/detail")), make_shared<string>("json"), req, runtime));
}

RevokeProblemRecoveryResponse Alibabacloud_GEMP20210413::Client::revokeProblemRecovery(shared_ptr<RevokeProblemRecoveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeProblemRecoveryWithOptions(request, headers, runtime);
}

RevokeProblemRecoveryResponse Alibabacloud_GEMP20210413::Client::revokeProblemRecoveryWithOptions(shared_ptr<RevokeProblemRecoveryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RevokeProblemRecoveryResponse(doROARequest(make_shared<string>("RevokeProblemRecovery"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/revoke")), make_shared<string>("json"), req, runtime));
}

EnableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::enableIntegrationConfig(shared_ptr<EnableIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableIntegrationConfigWithOptions(request, headers, runtime);
}

EnableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::enableIntegrationConfigWithOptions(shared_ptr<EnableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return EnableIntegrationConfigResponse(doROARequest(make_shared<string>("EnableIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/enable")), make_shared<string>("json"), req, runtime));
}

RefreshIntegrationConfigKeyResponse Alibabacloud_GEMP20210413::Client::refreshIntegrationConfigKey(shared_ptr<RefreshIntegrationConfigKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refreshIntegrationConfigKeyWithOptions(request, headers, runtime);
}

RefreshIntegrationConfigKeyResponse Alibabacloud_GEMP20210413::Client::refreshIntegrationConfigKeyWithOptions(shared_ptr<RefreshIntegrationConfigKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RefreshIntegrationConfigKeyResponse(doROARequest(make_shared<string>("RefreshIntegrationConfigKey"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/refreshKey")), make_shared<string>("json"), req, runtime));
}

CreateProblemSubtotalResponse Alibabacloud_GEMP20210413::Client::createProblemSubtotal(shared_ptr<CreateProblemSubtotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemSubtotalWithOptions(request, headers, runtime);
}

CreateProblemSubtotalResponse Alibabacloud_GEMP20210413::Client::createProblemSubtotalWithOptions(shared_ptr<CreateProblemSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemSubtotalResponse(doROARequest(make_shared<string>("CreateProblemSubtotal"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/save/subtotal")), make_shared<string>("json"), req, runtime));
}

CreateProblemResponse Alibabacloud_GEMP20210413::Client::createProblem(shared_ptr<CreateProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemWithOptions(request, headers, runtime);
}

CreateProblemResponse Alibabacloud_GEMP20210413::Client::createProblemWithOptions(shared_ptr<CreateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->problemName)) {
    (*body)["problemName"] = *request->problemName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemStatus)) {
    (*body)["problemStatus"] = *request->problemStatus;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemLevel)) {
    (*body)["problemLevel"] = *request->problemLevel;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->progressSummary)) {
    (*body)["progressSummary"] = *request->progressSummary;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    (*body)["mainHandlerId"] = *request->mainHandlerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preliminaryReason)) {
    (*body)["preliminaryReason"] = *request->preliminaryReason;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoverTime)) {
    (*body)["discoverTime"] = *request->discoverTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryTime)) {
    (*body)["recoveryTime"] = *request->recoveryTime;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->affectServiceIds)) {
    (*body)["affectServiceIds"] = *request->affectServiceIds;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    (*body)["serviceGroupIds"] = *request->serviceGroupIds;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemNotifyType)) {
    (*body)["problemNotifyType"] = *request->problemNotifyType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemResponse(doROARequest(make_shared<string>("CreateProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/upgrade")), make_shared<string>("json"), req, runtime));
}

GetProblemImprovementResponse Alibabacloud_GEMP20210413::Client::getProblemImprovement(shared_ptr<GetProblemImprovementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemImprovementWithOptions(request, headers, runtime);
}

GetProblemImprovementResponse Alibabacloud_GEMP20210413::Client::getProblemImprovementWithOptions(shared_ptr<GetProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetProblemImprovementResponse(doROARequest(make_shared<string>("GetProblemImprovement"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/improvement/detail")), make_shared<string>("json"), req, runtime));
}

CreateIncidentSubtotalResponse Alibabacloud_GEMP20210413::Client::createIncidentSubtotal(shared_ptr<CreateIncidentSubtotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIncidentSubtotalWithOptions(request, headers, runtime);
}

CreateIncidentSubtotalResponse Alibabacloud_GEMP20210413::Client::createIncidentSubtotalWithOptions(shared_ptr<CreateIncidentSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentId)) {
    (*body)["incidentId"] = *request->incidentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateIncidentSubtotalResponse(doROARequest(make_shared<string>("CreateIncidentSubtotal"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/save/subtotal")), make_shared<string>("json"), req, runtime));
}

DisableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::disableIntegrationConfig(shared_ptr<DisableIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableIntegrationConfigWithOptions(request, headers, runtime);
}

DisableIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::disableIntegrationConfigWithOptions(shared_ptr<DisableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationConfigId)) {
    (*body)["integrationConfigId"] = *request->integrationConfigId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DisableIntegrationConfigResponse(doROARequest(make_shared<string>("DisableIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/disable")), make_shared<string>("json"), req, runtime));
}

CreateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::createIntegrationConfig(shared_ptr<CreateIntegrationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIntegrationConfigWithOptions(request, headers, runtime);
}

CreateIntegrationConfigResponse Alibabacloud_GEMP20210413::Client::createIntegrationConfigWithOptions(shared_ptr<CreateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorSourceId)) {
    (*body)["monitorSourceId"] = *request->monitorSourceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateIntegrationConfigResponse(doROARequest(make_shared<string>("CreateIntegrationConfig"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/integrationConfig/create")), make_shared<string>("json"), req, runtime));
}

CreateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::createProblemEffectionService(shared_ptr<CreateProblemEffectionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemEffectionServiceWithOptions(request, headers, runtime);
}

CreateProblemEffectionServiceResponse Alibabacloud_GEMP20210413::Client::createProblemEffectionServiceWithOptions(shared_ptr<CreateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    (*body)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    (*body)["level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*body)["status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pictureUrl)) {
    (*body)["pictureUrl"] = *request->pictureUrl;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemEffectionServiceResponse(doROARequest(make_shared<string>("CreateProblemEffectionService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/effectionService/create")), make_shared<string>("json"), req, runtime));
}

DeleteProblemTimelineResponse Alibabacloud_GEMP20210413::Client::deleteProblemTimeline(shared_ptr<DeleteProblemTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProblemTimelineWithOptions(request, headers, runtime);
}

DeleteProblemTimelineResponse Alibabacloud_GEMP20210413::Client::deleteProblemTimelineWithOptions(shared_ptr<DeleteProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemTimelineId)) {
    (*body)["problemTimelineId"] = *request->problemTimelineId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteProblemTimelineResponse(doROARequest(make_shared<string>("DeleteProblemTimeline"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/process/timeline/delete")), make_shared<string>("json"), req, runtime));
}

DeleteRouteRuleResponse Alibabacloud_GEMP20210413::Client::deleteRouteRule(shared_ptr<DeleteRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRouteRuleWithOptions(request, headers, runtime);
}

DeleteRouteRuleResponse Alibabacloud_GEMP20210413::Client::deleteRouteRuleWithOptions(shared_ptr<DeleteRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    (*body)["routeRuleId"] = *request->routeRuleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteRouteRuleResponse(doROARequest(make_shared<string>("DeleteRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/delete")), make_shared<string>("json"), req, runtime));
}

UpdateProblemResponse Alibabacloud_GEMP20210413::Client::updateProblem(shared_ptr<UpdateProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemWithOptions(request, headers, runtime);
}

UpdateProblemResponse Alibabacloud_GEMP20210413::Client::updateProblemWithOptions(shared_ptr<UpdateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemName)) {
    (*body)["problemName"] = *request->problemName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    (*body)["level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->progressSummary)) {
    (*body)["progressSummary"] = *request->progressSummary;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preliminaryReason)) {
    (*body)["preliminaryReason"] = *request->preliminaryReason;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainHandlerId)) {
    (*body)["mainHandlerId"] = *request->mainHandlerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feedback)) {
    (*body)["feedback"] = *request->feedback;
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceGroupIds)) {
    (*body)["serviceGroupIds"] = *request->serviceGroupIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemResponse(doROARequest(make_shared<string>("UpdateProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/update")), make_shared<string>("json"), req, runtime));
}

CreateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::createProblemMeasure(shared_ptr<CreateProblemMeasureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProblemMeasureWithOptions(request, headers, runtime);
}

CreateProblemMeasureResponse Alibabacloud_GEMP20210413::Client::createProblemMeasureWithOptions(shared_ptr<CreateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    (*body)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    (*body)["content"] = *request->content;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkStandard)) {
    (*body)["checkStandard"] = *request->checkStandard;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkUserId)) {
    (*body)["checkUserId"] = *request->checkUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planFinishTime)) {
    (*body)["planFinishTime"] = *request->planFinishTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->directorId)) {
    (*body)["directorId"] = *request->directorId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stalkerId)) {
    (*body)["stalkerId"] = *request->stalkerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*body)["status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateProblemMeasureResponse(doROARequest(make_shared<string>("CreateProblemMeasure"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/improvement/measure/save")), make_shared<string>("json"), req, runtime));
}

ListServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listServiceGroups(shared_ptr<ListServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceGroupsWithOptions(request, headers, runtime);
}

ListServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listServiceGroupsWithOptions(shared_ptr<ListServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryName)) {
    (*body)["queryName"] = *request->queryName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    (*body)["queryType"] = *request->queryType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListServiceGroupsResponse(doROARequest(make_shared<string>("ListServiceGroups"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/group/list")), make_shared<string>("json"), req, runtime));
}

GetRouteRuleResponse Alibabacloud_GEMP20210413::Client::getRouteRule(shared_ptr<GetRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRouteRuleWithOptions(request, headers, runtime);
}

GetRouteRuleResponse Alibabacloud_GEMP20210413::Client::getRouteRuleWithOptions(shared_ptr<GetRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    (*body)["routeRuleId"] = *request->routeRuleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetRouteRuleResponse(doROARequest(make_shared<string>("GetRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/detail")), make_shared<string>("json"), req, runtime));
}

EnableRouteRuleResponse Alibabacloud_GEMP20210413::Client::enableRouteRule(shared_ptr<EnableRouteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableRouteRuleWithOptions(request, headers, runtime);
}

EnableRouteRuleResponse Alibabacloud_GEMP20210413::Client::enableRouteRuleWithOptions(shared_ptr<EnableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->routeRuleId)) {
    (*body)["routeRuleId"] = *request->routeRuleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return EnableRouteRuleResponse(doROARequest(make_shared<string>("EnableRouteRule"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/routeRule/enable")), make_shared<string>("json"), req, runtime));
}

UpdateUserResponse Alibabacloud_GEMP20210413::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserWithOptions(request, headers, runtime);
}

UpdateUserResponse Alibabacloud_GEMP20210413::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ramId)) {
    (*body)["ramId"] = *request->ramId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    (*body)["phone"] = *request->phone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    (*body)["username"] = *request->username;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    (*body)["email"] = *request->email;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    (*body)["userId"] = *request->userId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateUserResponse(doROARequest(make_shared<string>("UpdateUser"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/user/update")), make_shared<string>("json"), req, runtime));
}

UpdateProblemImprovementResponse Alibabacloud_GEMP20210413::Client::updateProblemImprovement(shared_ptr<UpdateProblemImprovementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProblemImprovementWithOptions(request, headers, runtime);
}

UpdateProblemImprovementResponse Alibabacloud_GEMP20210413::Client::updateProblemImprovementWithOptions(shared_ptr<UpdateProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->problemReason)) {
    (*body)["problemReason"] = *request->problemReason;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recentActivity)) {
    (*body)["recentActivity"] = *request->recentActivity;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->injectionMode)) {
    (*body)["injectionMode"] = *request->injectionMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryMode)) {
    (*body)["recoveryMode"] = *request->recoveryMode;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->discoverSource)) {
    (*body)["discoverSource"] = *request->discoverSource;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userReport)) {
    (*body)["userReport"] = *request->userReport;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSourceName)) {
    (*body)["monitorSourceName"] = *request->monitorSourceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationChanges)) {
    (*body)["relationChanges"] = *request->relationChanges;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dutyUserId)) {
    (*body)["dutyUserId"] = *request->dutyUserId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replayDutyUserId)) {
    (*body)["replayDutyUserId"] = *request->replayDutyUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dutyDepartmentName)) {
    (*body)["dutyDepartmentName"] = *request->dutyDepartmentName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dutyDepartmentId)) {
    (*body)["dutyDepartmentId"] = *request->dutyDepartmentId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    (*body)["remark"] = *request->remark;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateProblemImprovementResponse(doROARequest(make_shared<string>("UpdateProblemImprovement"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/improvement/update")), make_shared<string>("json"), req, runtime));
}

FinishIncidentResponse Alibabacloud_GEMP20210413::Client::finishIncident(shared_ptr<FinishIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return finishIncidentWithOptions(request, headers, runtime);
}

FinishIncidentResponse Alibabacloud_GEMP20210413::Client::finishIncidentWithOptions(shared_ptr<FinishIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->incidentIds)) {
    (*body)["incidentIds"] = *request->incidentIds;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentFinishReason)) {
    (*body)["incidentFinishReason"] = *request->incidentFinishReason;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentFinishReasonDescription)) {
    (*body)["incidentFinishReasonDescription"] = *request->incidentFinishReasonDescription;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incidentFinishSolution)) {
    (*body)["incidentFinishSolution"] = *request->incidentFinishSolution;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentFinishSolutionDescription)) {
    (*body)["incidentFinishSolutionDescription"] = *request->incidentFinishSolutionDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return FinishIncidentResponse(doROARequest(make_shared<string>("FinishIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/finish")), make_shared<string>("json"), req, runtime));
}

GetServiceResponse Alibabacloud_GEMP20210413::Client::getService(shared_ptr<GetServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceWithOptions(request, headers, runtime);
}

GetServiceResponse Alibabacloud_GEMP20210413::Client::getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    (*body)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GetServiceResponse(doROARequest(make_shared<string>("GetService"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/services/detail")), make_shared<string>("json"), req, runtime));
}

CreateIncidentResponse Alibabacloud_GEMP20210413::Client::createIncident(shared_ptr<CreateIncidentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIncidentWithOptions(request, headers, runtime);
}

CreateIncidentResponse Alibabacloud_GEMP20210413::Client::createIncidentWithOptions(shared_ptr<CreateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentLevel)) {
    (*body)["incidentLevel"] = *request->incidentLevel;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relatedServiceId)) {
    (*body)["relatedServiceId"] = *request->relatedServiceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    (*body)["effect"] = *request->effect;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentTitle)) {
    (*body)["incidentTitle"] = *request->incidentTitle;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assignUserId)) {
    (*body)["assignUserId"] = *request->assignUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentDescription)) {
    (*body)["incidentDescription"] = *request->incidentDescription;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channels)) {
    (*body)["channels"] = *request->channels;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateIncidentResponse(doROARequest(make_shared<string>("CreateIncident"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/incident/manualSave")), make_shared<string>("json"), req, runtime));
}

FinishProblemResponse Alibabacloud_GEMP20210413::Client::finishProblem(shared_ptr<FinishProblemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return finishProblemWithOptions(request, headers, runtime);
}

FinishProblemResponse Alibabacloud_GEMP20210413::Client::finishProblemWithOptions(shared_ptr<FinishProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->problemId)) {
    (*body)["problemId"] = *request->problemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return FinishProblemResponse(doROARequest(make_shared<string>("FinishProblem"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/finish")), make_shared<string>("json"), req, runtime));
}

ListSubscriptionServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionServiceGroups(shared_ptr<ListSubscriptionServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubscriptionServiceGroupsWithOptions(request, headers, runtime);
}

ListSubscriptionServiceGroupsResponse Alibabacloud_GEMP20210413::Client::listSubscriptionServiceGroupsWithOptions(shared_ptr<ListSubscriptionServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->serviceIds)) {
    (*body)["serviceIds"] = *request->serviceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*body)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ListSubscriptionServiceGroupsResponse(doROARequest(make_shared<string>("ListSubscriptionServiceGroups"), make_shared<string>("2021-04-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/problem/serviceGroup/list")), make_shared<string>("json"), req, runtime));
}

