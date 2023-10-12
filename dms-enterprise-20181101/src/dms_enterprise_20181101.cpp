// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dms_enterprise_20181101.hpp>
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

using namespace Alibabacloud_Dms-enterprise20181101;

Alibabacloud_Dms-enterprise20181101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dms-enterprise"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dms-enterprise20181101::Client::getEndpoint(shared_ptr<string> productId,
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

AddDesensitizationRuleResponse Alibabacloud_Dms-enterprise20181101::Client::addDesensitizationRuleWithOptions(shared_ptr<AddDesensitizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    query->insert(pair<string, string>("FunctionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDescription)) {
    query->insert(pair<string, string>("RuleDescription", *request->ruleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<map<string, string>>>(request->functionParams)) {
    bodyFlat->insert(pair<string, vector<map<string, string>>>("FunctionParams", *request->functionParams));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDesensitizationRule"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDesensitizationRuleResponse(callApi(params, req, runtime));
}

AddDesensitizationRuleResponse Alibabacloud_Dms-enterprise20181101::Client::addDesensitizationRule(shared_ptr<AddDesensitizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDesensitizationRuleWithOptions(request, runtime);
}

AddLhMembersResponse Alibabacloud_Dms-enterprise20181101::Client::addLhMembersWithOptions(shared_ptr<AddLhMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddLhMembersShrinkRequest> request = make_shared<AddLhMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddLhMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    query->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->objectId)) {
    query->insert(pair<string, long>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->objectType)) {
    query->insert(pair<string, long>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLhMembers"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLhMembersResponse(callApi(params, req, runtime));
}

AddLhMembersResponse Alibabacloud_Dms-enterprise20181101::Client::addLhMembers(shared_ptr<AddLhMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLhMembersWithOptions(request, runtime);
}

AddLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::addLogicTableRouteConfigWithOptions(shared_ptr<AddLogicTableRouteConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->routeExpr)) {
    query->insert(pair<string, string>("RouteExpr", *request->routeExpr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeKey)) {
    query->insert(pair<string, string>("RouteKey", *request->routeKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tableId)) {
    query->insert(pair<string, long>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLogicTableRouteConfig"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLogicTableRouteConfigResponse(callApi(params, req, runtime));
}

AddLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::addLogicTableRouteConfig(shared_ptr<AddLogicTableRouteConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLogicTableRouteConfigWithOptions(request, runtime);
}

AddTaskFlowEdgesResponse Alibabacloud_Dms-enterprise20181101::Client::addTaskFlowEdgesWithOptions(shared_ptr<AddTaskFlowEdgesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddTaskFlowEdgesShrinkRequest> request = make_shared<AddTaskFlowEdgesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddTaskFlowEdgesRequestEdges>>(tmpReq->edges)) {
    request->edgesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->edges, make_shared<string>("Edges"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgesShrink)) {
    query->insert(pair<string, string>("Edges", *request->edgesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTaskFlowEdges"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTaskFlowEdgesResponse(callApi(params, req, runtime));
}

AddTaskFlowEdgesResponse Alibabacloud_Dms-enterprise20181101::Client::addTaskFlowEdges(shared_ptr<AddTaskFlowEdgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTaskFlowEdgesWithOptions(request, runtime);
}

AnalyzeSQLLineageResponse Alibabacloud_Dms-enterprise20181101::Client::analyzeSQLLineageWithOptions(shared_ptr<AnalyzeSQLLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlContent)) {
    query->insert(pair<string, string>("SqlContent", *request->sqlContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeSQLLineage"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeSQLLineageResponse(callApi(params, req, runtime));
}

AnalyzeSQLLineageResponse Alibabacloud_Dms-enterprise20181101::Client::analyzeSQLLineage(shared_ptr<AnalyzeSQLLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return analyzeSQLLineageWithOptions(request, runtime);
}

ApproveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::approveOrderWithOptions(shared_ptr<ApproveOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->approvalNodeId)) {
    query->insert(pair<string, long>("ApprovalNodeId", *request->approvalNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalNodePos)) {
    query->insert(pair<string, string>("ApprovalNodePos", *request->approvalNodePos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalType)) {
    query->insert(pair<string, string>("ApprovalType", *request->approvalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newApprover)) {
    query->insert(pair<string, long>("NewApprover", *request->newApprover));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oldApprover)) {
    query->insert(pair<string, long>("OldApprover", *request->oldApprover));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowInstanceId)) {
    query->insert(pair<string, long>("WorkflowInstanceId", *request->workflowInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveOrderResponse(callApi(params, req, runtime));
}

ApproveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::approveOrder(shared_ptr<ApproveOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveOrderWithOptions(request, runtime);
}

BackFillResponse Alibabacloud_Dms-enterprise20181101::Client::backFillWithOptions(shared_ptr<BackFillRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BackFillShrinkRequest> request = make_shared<BackFillShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->filterNodeIds)) {
    request->filterNodeIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterNodeIds, make_shared<string>("FilterNodeIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->startNodeIds)) {
    request->startNodeIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startNodeIds, make_shared<string>("StartNodeIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asc)) {
    query->insert(pair<string, bool>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backFillDate)) {
    query->insert(pair<string, string>("BackFillDate", *request->backFillDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backFillDateBegin)) {
    query->insert(pair<string, string>("BackFillDateBegin", *request->backFillDateBegin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backFillDateEnd)) {
    query->insert(pair<string, string>("BackFillDateEnd", *request->backFillDateEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterNodeIdsShrink)) {
    query->insert(pair<string, string>("FilterNodeIds", *request->filterNodeIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->historyDagId)) {
    query->insert(pair<string, long>("HistoryDagId", *request->historyDagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isTriggerSubTree)) {
    query->insert(pair<string, bool>("IsTriggerSubTree", *request->isTriggerSubTree));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startNodeIdsShrink)) {
    query->insert(pair<string, string>("StartNodeIds", *request->startNodeIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BackFill"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BackFillResponse(callApi(params, req, runtime));
}

BackFillResponse Alibabacloud_Dms-enterprise20181101::Client::backFill(shared_ptr<BackFillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return backFillWithOptions(request, runtime);
}

BuyPayAsYouGoOrderResponse Alibabacloud_Dms-enterprise20181101::Client::buyPayAsYouGoOrderWithOptions(shared_ptr<BuyPayAsYouGoOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityType)) {
    query->insert(pair<string, string>("CommodityType", *request->commodityType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->insNum)) {
    query->insert(pair<string, long>("InsNum", *request->insNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionType)) {
    query->insert(pair<string, string>("VersionType", *request->versionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuyPayAsYouGoOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BuyPayAsYouGoOrderResponse(callApi(params, req, runtime));
}

BuyPayAsYouGoOrderResponse Alibabacloud_Dms-enterprise20181101::Client::buyPayAsYouGoOrder(shared_ptr<BuyPayAsYouGoOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return buyPayAsYouGoOrderWithOptions(request, runtime);
}

ChangeColumnSecLevelResponse Alibabacloud_Dms-enterprise20181101::Client::changeColumnSecLevelWithOptions(shared_ptr<ChangeColumnSecLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isLogic)) {
    query->insert(pair<string, bool>("IsLogic", *request->isLogic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newLevel)) {
    query->insert(pair<string, string>("NewLevel", *request->newLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeColumnSecLevel"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeColumnSecLevelResponse(callApi(params, req, runtime));
}

ChangeColumnSecLevelResponse Alibabacloud_Dms-enterprise20181101::Client::changeColumnSecLevel(shared_ptr<ChangeColumnSecLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeColumnSecLevelWithOptions(request, runtime);
}

ChangeColumnSecurityLevelResponse Alibabacloud_Dms-enterprise20181101::Client::changeColumnSecurityLevelWithOptions(shared_ptr<ChangeColumnSecurityLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isLogic)) {
    query->insert(pair<string, bool>("IsLogic", *request->isLogic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newSensitivityLevel)) {
    query->insert(pair<string, string>("NewSensitivityLevel", *request->newSensitivityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeColumnSecurityLevel"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeColumnSecurityLevelResponse(callApi(params, req, runtime));
}

ChangeColumnSecurityLevelResponse Alibabacloud_Dms-enterprise20181101::Client::changeColumnSecurityLevel(shared_ptr<ChangeColumnSecurityLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeColumnSecurityLevelWithOptions(request, runtime);
}

ChangeLhDagOwnerResponse Alibabacloud_Dms-enterprise20181101::Client::changeLhDagOwnerWithOptions(shared_ptr<ChangeLhDagOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerUserId)) {
    query->insert(pair<string, long>("OwnerUserId", *request->ownerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeLhDagOwner"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeLhDagOwnerResponse(callApi(params, req, runtime));
}

ChangeLhDagOwnerResponse Alibabacloud_Dms-enterprise20181101::Client::changeLhDagOwner(shared_ptr<ChangeLhDagOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeLhDagOwnerWithOptions(request, runtime);
}

CloseOrderResponse Alibabacloud_Dms-enterprise20181101::Client::closeOrderWithOptions(shared_ptr<CloseOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->closeReason)) {
    query->insert(pair<string, string>("CloseReason", *request->closeReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseOrderResponse(callApi(params, req, runtime));
}

CloseOrderResponse Alibabacloud_Dms-enterprise20181101::Client::closeOrder(shared_ptr<CloseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeOrderWithOptions(request, runtime);
}

CreateAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::createAuthorityTemplateWithOptions(shared_ptr<CreateAuthorityTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthorityTemplate"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthorityTemplateResponse(callApi(params, req, runtime));
}

CreateAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::createAuthorityTemplate(shared_ptr<CreateAuthorityTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthorityTemplateWithOptions(request, runtime);
}

CreateDataArchiveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataArchiveOrderWithOptions(shared_ptr<CreateDataArchiveOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataArchiveOrderShrinkRequest> request = make_shared<CreateDataArchiveOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataArchiveOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginType)) {
    query->insert(pair<string, string>("PluginType", *request->pluginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataArchiveOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataArchiveOrderResponse(callApi(params, req, runtime));
}

CreateDataArchiveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataArchiveOrder(shared_ptr<CreateDataArchiveOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataArchiveOrderWithOptions(request, runtime);
}

CreateDataCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCorrectOrderWithOptions(shared_ptr<CreateDataCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataCorrectOrderShrinkRequest> request = make_shared<CreateDataCorrectOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataCorrectOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataCorrectOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataCorrectOrderResponse(callApi(params, req, runtime));
}

CreateDataCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCorrectOrder(shared_ptr<CreateDataCorrectOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataCorrectOrderWithOptions(request, runtime);
}

CreateDataCronClearOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCronClearOrderWithOptions(shared_ptr<CreateDataCronClearOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataCronClearOrderShrinkRequest> request = make_shared<CreateDataCronClearOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataCronClearOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataCronClearOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataCronClearOrderResponse(callApi(params, req, runtime));
}

CreateDataCronClearOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCronClearOrder(shared_ptr<CreateDataCronClearOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataCronClearOrderWithOptions(request, runtime);
}

CreateDataExportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataExportOrderWithOptions(shared_ptr<CreateDataExportOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataExportOrderShrinkRequest> request = make_shared<CreateDataExportOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataExportOrderRequestPluginParam>(tmpReq->pluginParam)) {
    request->pluginParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pluginParam, make_shared<string>("PluginParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginParamShrink)) {
    query->insert(pair<string, string>("PluginParam", *request->pluginParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataExportOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataExportOrderResponse(callApi(params, req, runtime));
}

CreateDataExportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataExportOrder(shared_ptr<CreateDataExportOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataExportOrderWithOptions(request, runtime);
}

CreateDataImportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataImportOrderWithOptions(shared_ptr<CreateDataImportOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataImportOrderShrinkRequest> request = make_shared<CreateDataImportOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataImportOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataImportOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataImportOrderResponse(callApi(params, req, runtime));
}

CreateDataImportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataImportOrder(shared_ptr<CreateDataImportOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataImportOrderWithOptions(request, runtime);
}

CreateDataTrackOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataTrackOrderWithOptions(shared_ptr<CreateDataTrackOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataTrackOrderShrinkRequest> request = make_shared<CreateDataTrackOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataTrackOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataTrackOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataTrackOrderResponse(callApi(params, req, runtime));
}

CreateDataTrackOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataTrackOrder(shared_ptr<CreateDataTrackOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataTrackOrderWithOptions(request, runtime);
}

CreateDatabaseExportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDatabaseExportOrderWithOptions(shared_ptr<CreateDatabaseExportOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDatabaseExportOrderShrinkRequest> request = make_shared<CreateDatabaseExportOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDatabaseExportOrderRequestPluginParam>(tmpReq->pluginParam)) {
    request->pluginParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pluginParam, make_shared<string>("PluginParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginParamShrink)) {
    query->insert(pair<string, string>("PluginParam", *request->pluginParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatabaseExportOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatabaseExportOrderResponse(callApi(params, req, runtime));
}

CreateDatabaseExportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDatabaseExportOrder(shared_ptr<CreateDatabaseExportOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatabaseExportOrderWithOptions(request, runtime);
}

CreateFreeLockCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createFreeLockCorrectOrderWithOptions(shared_ptr<CreateFreeLockCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFreeLockCorrectOrderShrinkRequest> request = make_shared<CreateFreeLockCorrectOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateFreeLockCorrectOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFreeLockCorrectOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFreeLockCorrectOrderResponse(callApi(params, req, runtime));
}

CreateFreeLockCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createFreeLockCorrectOrder(shared_ptr<CreateFreeLockCorrectOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFreeLockCorrectOrderWithOptions(request, runtime);
}

CreateLakeHouseSpaceResponse Alibabacloud_Dms-enterprise20181101::Client::createLakeHouseSpaceWithOptions(shared_ptr<CreateLakeHouseSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devDbId)) {
    query->insert(pair<string, string>("DevDbId", *request->devDbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dwDbType)) {
    query->insert(pair<string, string>("DwDbType", *request->dwDbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodDbId)) {
    query->insert(pair<string, string>("ProdDbId", *request->prodDbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceConfig)) {
    query->insert(pair<string, string>("SpaceConfig", *request->spaceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceName)) {
    query->insert(pair<string, string>("SpaceName", *request->spaceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLakeHouseSpace"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLakeHouseSpaceResponse(callApi(params, req, runtime));
}

CreateLakeHouseSpaceResponse Alibabacloud_Dms-enterprise20181101::Client::createLakeHouseSpace(shared_ptr<CreateLakeHouseSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLakeHouseSpaceWithOptions(request, runtime);
}

CreateLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::createLogicDatabaseWithOptions(shared_ptr<CreateLogicDatabaseRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLogicDatabaseShrinkRequest> request = make_shared<CreateLogicDatabaseShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->databaseIds)) {
    request->databaseIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->databaseIds, make_shared<string>("DatabaseIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    query->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseIdsShrink)) {
    query->insert(pair<string, string>("DatabaseIds", *request->databaseIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogicDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLogicDatabaseResponse(callApi(params, req, runtime));
}

CreateLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::createLogicDatabase(shared_ptr<CreateLogicDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogicDatabaseWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOrderShrinkRequest> request = make_shared<CreateOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->pluginParam)) {
    request->pluginParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pluginParam, make_shared<string>("PluginParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginType)) {
    query->insert(pair<string, string>("PluginType", *request->pluginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserList)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginParamShrink)) {
    body->insert(pair<string, string>("PluginParam", *request->pluginParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderResponse(callApi(params, req, runtime));
}

CreateOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

CreateProcCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createProcCorrectOrderWithOptions(shared_ptr<CreateProcCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProcCorrectOrderShrinkRequest> request = make_shared<CreateProcCorrectOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateProcCorrectOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProcCorrectOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProcCorrectOrderResponse(callApi(params, req, runtime));
}

CreateProcCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createProcCorrectOrder(shared_ptr<CreateProcCorrectOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProcCorrectOrderWithOptions(request, runtime);
}

CreateProxyResponse Alibabacloud_Dms-enterprise20181101::Client::createProxyWithOptions(shared_ptr<CreateProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProxy"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProxyResponse(callApi(params, req, runtime));
}

CreateProxyResponse Alibabacloud_Dms-enterprise20181101::Client::createProxy(shared_ptr<CreateProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProxyWithOptions(request, runtime);
}

CreateProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::createProxyAccessWithOptions(shared_ptr<CreateProxyAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indepAccount)) {
    query->insert(pair<string, string>("IndepAccount", *request->indepAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indepPassword)) {
    query->insert(pair<string, string>("IndepPassword", *request->indepPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyId)) {
    query->insert(pair<string, long>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProxyAccess"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProxyAccessResponse(callApi(params, req, runtime));
}

CreateProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::createProxyAccess(shared_ptr<CreateProxyAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProxyAccessWithOptions(request, runtime);
}

CreatePublishGroupTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createPublishGroupTaskWithOptions(shared_ptr<CreatePublishGroupTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planTime)) {
    query->insert(pair<string, string>("PlanTime", *request->planTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishStrategy)) {
    query->insert(pair<string, string>("PublishStrategy", *request->publishStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePublishGroupTask"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePublishGroupTaskResponse(callApi(params, req, runtime));
}

CreatePublishGroupTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createPublishGroupTask(shared_ptr<CreatePublishGroupTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPublishGroupTaskWithOptions(request, runtime);
}

CreateSQLReviewOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createSQLReviewOrderWithOptions(shared_ptr<CreateSQLReviewOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSQLReviewOrderShrinkRequest> request = make_shared<CreateSQLReviewOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateSQLReviewOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSQLReviewOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSQLReviewOrderResponse(callApi(params, req, runtime));
}

CreateSQLReviewOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createSQLReviewOrder(shared_ptr<CreateSQLReviewOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSQLReviewOrderWithOptions(request, runtime);
}

CreateScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::createScenarioWithOptions(shared_ptr<CreateScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioName)) {
    query->insert(pair<string, string>("ScenarioName", *request->scenarioName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScenario"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScenarioResponse(callApi(params, req, runtime));
}

CreateScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::createScenario(shared_ptr<CreateScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScenarioWithOptions(request, runtime);
}

CreateStandardGroupResponse Alibabacloud_Dms-enterprise20181101::Client::createStandardGroupWithOptions(shared_ptr<CreateStandardGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStandardGroup"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStandardGroupResponse(callApi(params, req, runtime));
}

CreateStandardGroupResponse Alibabacloud_Dms-enterprise20181101::Client::createStandardGroup(shared_ptr<CreateStandardGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStandardGroupWithOptions(request, runtime);
}

CreateStructSyncOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createStructSyncOrderWithOptions(shared_ptr<CreateStructSyncOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStructSyncOrderShrinkRequest> request = make_shared<CreateStructSyncOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateStructSyncOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->param, make_shared<string>("Param"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentKey)) {
    query->insert(pair<string, string>("AttachmentKey", *request->attachmentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramShrink)) {
    query->insert(pair<string, string>("Param", *request->paramShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedUserListShrink)) {
    query->insert(pair<string, string>("RelatedUserList", *request->relatedUserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStructSyncOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStructSyncOrderResponse(callApi(params, req, runtime));
}

CreateStructSyncOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createStructSyncOrder(shared_ptr<CreateStructSyncOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStructSyncOrderWithOptions(request, runtime);
}

CreateTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->graphParam)) {
    query->insert(pair<string, string>("GraphParam", *request->graphParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeContent)) {
    query->insert(pair<string, string>("NodeContent", *request->nodeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeOutput)) {
    query->insert(pair<string, string>("NodeOutput", *request->nodeOutput));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("NodeType", *request->nodeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeVariables)) {
    query->insert(pair<string, string>("TimeVariables", *request->timeVariables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskWithOptions(request, runtime);
}

CreateTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::createTaskFlowWithOptions(shared_ptr<CreateTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagName)) {
    query->insert(pair<string, string>("DagName", *request->dagName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scenarioId)) {
    query->insert(pair<string, long>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskFlowResponse(callApi(params, req, runtime));
}

CreateTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::createTaskFlow(shared_ptr<CreateTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskFlowWithOptions(request, runtime);
}

CreateUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadFileJobWithOptions(shared_ptr<CreateUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSource)) {
    query->insert(pair<string, string>("FileSource", *request->fileSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURL)) {
    query->insert(pair<string, string>("UploadURL", *request->uploadURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadFileJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadFileJobResponse(callApi(params, req, runtime));
}

CreateUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadFileJob(shared_ptr<CreateUploadFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadFileJobWithOptions(request, runtime);
}

CreateUploadOSSFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadOSSFileJobWithOptions(shared_ptr<CreateUploadOSSFileJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUploadOSSFileJobShrinkRequest> request = make_shared<CreateUploadOSSFileJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateUploadOSSFileJobRequestUploadTarget>(tmpReq->uploadTarget)) {
    request->uploadTargetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->uploadTarget, make_shared<string>("UploadTarget"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSource)) {
    query->insert(pair<string, string>("FileSource", *request->fileSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetShrink)) {
    query->insert(pair<string, string>("UploadTarget", *request->uploadTargetShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadOSSFileJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadOSSFileJobResponse(callApi(params, req, runtime));
}

CreateUploadOSSFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadOSSFileJob(shared_ptr<CreateUploadOSSFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadOSSFileJobWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteLakeHouseSpaceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLakeHouseSpaceWithOptions(shared_ptr<DeleteLakeHouseSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->spaceId)) {
    query->insert(pair<string, long>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLakeHouseSpace"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLakeHouseSpaceResponse(callApi(params, req, runtime));
}

DeleteLakeHouseSpaceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLakeHouseSpace(shared_ptr<DeleteLakeHouseSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLakeHouseSpaceWithOptions(request, runtime);
}

DeleteLhMembersResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLhMembersWithOptions(shared_ptr<DeleteLhMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteLhMembersShrinkRequest> request = make_shared<DeleteLhMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->memberIds)) {
    request->memberIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->memberIds, make_shared<string>("MemberIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberIdsShrink)) {
    query->insert(pair<string, string>("MemberIds", *request->memberIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->objectId)) {
    query->insert(pair<string, long>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->objectType)) {
    query->insert(pair<string, long>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLhMembers"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLhMembersResponse(callApi(params, req, runtime));
}

DeleteLhMembersResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLhMembers(shared_ptr<DeleteLhMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLhMembersWithOptions(request, runtime);
}

DeleteLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLogicDatabaseWithOptions(shared_ptr<DeleteLogicDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->logicDbId)) {
    query->insert(pair<string, long>("LogicDbId", *request->logicDbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogicDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLogicDatabaseResponse(callApi(params, req, runtime));
}

DeleteLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLogicDatabase(shared_ptr<DeleteLogicDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLogicDatabaseWithOptions(request, runtime);
}

DeleteLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLogicTableRouteConfigWithOptions(shared_ptr<DeleteLogicTableRouteConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->routeKey)) {
    query->insert(pair<string, string>("RouteKey", *request->routeKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tableId)) {
    query->insert(pair<string, long>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogicTableRouteConfig"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLogicTableRouteConfigResponse(callApi(params, req, runtime));
}

DeleteLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::deleteLogicTableRouteConfig(shared_ptr<DeleteLogicTableRouteConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLogicTableRouteConfigWithOptions(request, runtime);
}

DeleteProxyResponse Alibabacloud_Dms-enterprise20181101::Client::deleteProxyWithOptions(shared_ptr<DeleteProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyId)) {
    query->insert(pair<string, long>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProxy"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProxyResponse(callApi(params, req, runtime));
}

DeleteProxyResponse Alibabacloud_Dms-enterprise20181101::Client::deleteProxy(shared_ptr<DeleteProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProxyWithOptions(request, runtime);
}

DeleteProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::deleteProxyAccessWithOptions(shared_ptr<DeleteProxyAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyAccessId)) {
    query->insert(pair<string, long>("ProxyAccessId", *request->proxyAccessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProxyAccess"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProxyAccessResponse(callApi(params, req, runtime));
}

DeleteProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::deleteProxyAccess(shared_ptr<DeleteProxyAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProxyAccessWithOptions(request, runtime);
}

DeleteScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::deleteScenarioWithOptions(shared_ptr<DeleteScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->scenarioId)) {
    query->insert(pair<string, long>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScenario"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScenarioResponse(callApi(params, req, runtime));
}

DeleteScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::deleteScenario(shared_ptr<DeleteScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScenarioWithOptions(request, runtime);
}

DeleteTaskResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTaskWithOptions(shared_ptr<DeleteTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTask"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskResponse(callApi(params, req, runtime));
}

DeleteTaskResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTask(shared_ptr<DeleteTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskWithOptions(request, runtime);
}

DeleteTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTaskFlowWithOptions(shared_ptr<DeleteTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskFlowResponse(callApi(params, req, runtime));
}

DeleteTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTaskFlow(shared_ptr<DeleteTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskFlowWithOptions(request, runtime);
}

DeleteTaskFlowEdgesByConditionResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTaskFlowEdgesByConditionWithOptions(shared_ptr<DeleteTaskFlowEdgesByConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeEnd)) {
    query->insert(pair<string, long>("NodeEnd", *request->nodeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeFrom)) {
    query->insert(pair<string, long>("NodeFrom", *request->nodeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTaskFlowEdgesByCondition"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskFlowEdgesByConditionResponse(callApi(params, req, runtime));
}

DeleteTaskFlowEdgesByConditionResponse Alibabacloud_Dms-enterprise20181101::Client::deleteTaskFlowEdgesByCondition(shared_ptr<DeleteTaskFlowEdgesByConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskFlowEdgesByConditionWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Dms-enterprise20181101::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Dms-enterprise20181101::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DisableUserResponse Alibabacloud_Dms-enterprise20181101::Client::disableUserWithOptions(shared_ptr<DisableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableUserResponse(callApi(params, req, runtime));
}

DisableUserResponse Alibabacloud_Dms-enterprise20181101::Client::disableUser(shared_ptr<DisableUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableUserWithOptions(request, runtime);
}

DownloadDataTrackResultResponse Alibabacloud_Dms-enterprise20181101::Client::downloadDataTrackResultWithOptions(shared_ptr<DownloadDataTrackResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DownloadDataTrackResultShrinkRequest> request = make_shared<DownloadDataTrackResultShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DownloadDataTrackResultRequestColumnFilter>(tmpReq->columnFilter)) {
    request->columnFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->columnFilter, make_shared<string>("ColumnFilter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->eventIdList)) {
    request->eventIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventIdList, make_shared<string>("EventIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->filterTableList)) {
    request->filterTableListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTableList, make_shared<string>("FilterTableList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->filterTypeList)) {
    request->filterTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTypeList, make_shared<string>("FilterTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnFilterShrink)) {
    query->insert(pair<string, string>("ColumnFilter", *request->columnFilterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventIdListShrink)) {
    query->insert(pair<string, string>("EventIdList", *request->eventIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterEndTime)) {
    query->insert(pair<string, string>("FilterEndTime", *request->filterEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterStartTime)) {
    query->insert(pair<string, string>("FilterStartTime", *request->filterStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTableListShrink)) {
    query->insert(pair<string, string>("FilterTableList", *request->filterTableListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTypeListShrink)) {
    query->insert(pair<string, string>("FilterTypeList", *request->filterTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rollbackSQLType)) {
    query->insert(pair<string, string>("RollbackSQLType", *request->rollbackSQLType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadDataTrackResult"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadDataTrackResultResponse(callApi(params, req, runtime));
}

DownloadDataTrackResultResponse Alibabacloud_Dms-enterprise20181101::Client::downloadDataTrackResult(shared_ptr<DownloadDataTrackResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadDataTrackResultWithOptions(request, runtime);
}

EditLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::editLogicDatabaseWithOptions(shared_ptr<EditLogicDatabaseRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EditLogicDatabaseShrinkRequest> request = make_shared<EditLogicDatabaseShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->databaseIds)) {
    request->databaseIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->databaseIds, make_shared<string>("DatabaseIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    query->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseIdsShrink)) {
    query->insert(pair<string, string>("DatabaseIds", *request->databaseIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logicDbId)) {
    query->insert(pair<string, long>("LogicDbId", *request->logicDbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditLogicDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditLogicDatabaseResponse(callApi(params, req, runtime));
}

EditLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::editLogicDatabase(shared_ptr<EditLogicDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editLogicDatabaseWithOptions(request, runtime);
}

EnableUserResponse Alibabacloud_Dms-enterprise20181101::Client::enableUserWithOptions(shared_ptr<EnableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableUserResponse(callApi(params, req, runtime));
}

EnableUserResponse Alibabacloud_Dms-enterprise20181101::Client::enableUser(shared_ptr<EnableUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableUserWithOptions(request, runtime);
}

ExecuteDataCorrectResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataCorrectWithOptions(shared_ptr<ExecuteDataCorrectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteDataCorrectShrinkRequest> request = make_shared<ExecuteDataCorrectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionDetailShrink)) {
    query->insert(pair<string, string>("ActionDetail", *request->actionDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tid)) {
    query->insert(pair<string, string>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteDataCorrect"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteDataCorrectResponse(callApi(params, req, runtime));
}

ExecuteDataCorrectResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataCorrect(shared_ptr<ExecuteDataCorrectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeDataCorrectWithOptions(request, runtime);
}

ExecuteDataExportResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataExportWithOptions(shared_ptr<ExecuteDataExportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteDataExportShrinkRequest> request = make_shared<ExecuteDataExportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionDetailShrink)) {
    query->insert(pair<string, string>("ActionDetail", *request->actionDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteDataExport"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteDataExportResponse(callApi(params, req, runtime));
}

ExecuteDataExportResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataExport(shared_ptr<ExecuteDataExportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeDataExportWithOptions(request, runtime);
}

ExecuteScriptResponse Alibabacloud_Dms-enterprise20181101::Client::executeScriptWithOptions(shared_ptr<ExecuteScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    query->insert(pair<string, string>("Script", *request->script));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteScript"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteScriptResponse(callApi(params, req, runtime));
}

ExecuteScriptResponse Alibabacloud_Dms-enterprise20181101::Client::executeScript(shared_ptr<ExecuteScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeScriptWithOptions(request, runtime);
}

ExecuteStructSyncResponse Alibabacloud_Dms-enterprise20181101::Client::executeStructSyncWithOptions(shared_ptr<ExecuteStructSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteStructSync"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteStructSyncResponse(callApi(params, req, runtime));
}

ExecuteStructSyncResponse Alibabacloud_Dms-enterprise20181101::Client::executeStructSync(shared_ptr<ExecuteStructSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeStructSyncWithOptions(request, runtime);
}

GetApprovalDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getApprovalDetailWithOptions(shared_ptr<GetApprovalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowInstanceId)) {
    query->insert(pair<string, long>("WorkflowInstanceId", *request->workflowInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApprovalDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApprovalDetailResponse(callApi(params, req, runtime));
}

GetApprovalDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getApprovalDetail(shared_ptr<GetApprovalDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApprovalDetailWithOptions(request, runtime);
}

GetAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::getAuthorityTemplateWithOptions(shared_ptr<GetAuthorityTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorityTemplate"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorityTemplateResponse(callApi(params, req, runtime));
}

GetAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::getAuthorityTemplate(shared_ptr<GetAuthorityTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorityTemplateWithOptions(request, runtime);
}

GetAuthorityTemplateItemResponse Alibabacloud_Dms-enterprise20181101::Client::getAuthorityTemplateItemWithOptions(shared_ptr<GetAuthorityTemplateItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorityTemplateItem"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorityTemplateItemResponse(callApi(params, req, runtime));
}

GetAuthorityTemplateItemResponse Alibabacloud_Dms-enterprise20181101::Client::getAuthorityTemplateItem(shared_ptr<GetAuthorityTemplateItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorityTemplateItemWithOptions(request, runtime);
}

GetClassificationTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::getClassificationTemplateWithOptions(shared_ptr<GetClassificationTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClassificationTemplate"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClassificationTemplateResponse(callApi(params, req, runtime));
}

GetClassificationTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::getClassificationTemplate(shared_ptr<GetClassificationTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClassificationTemplateWithOptions(request, runtime);
}

GetDBTaskSQLJobLogResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTaskSQLJobLogWithOptions(shared_ptr<GetDBTaskSQLJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDBTaskSQLJobLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDBTaskSQLJobLogResponse(callApi(params, req, runtime));
}

GetDBTaskSQLJobLogResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTaskSQLJobLog(shared_ptr<GetDBTaskSQLJobLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBTaskSQLJobLogWithOptions(request, runtime);
}

GetDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTopologyWithOptions(shared_ptr<GetDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->logicDbId)) {
    query->insert(pair<string, long>("LogicDbId", *request->logicDbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDBTopology"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDBTopologyResponse(callApi(params, req, runtime));
}

GetDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTopology(shared_ptr<GetDBTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBTopologyWithOptions(request, runtime);
}

GetDataArchiveCountResponse Alibabacloud_Dms-enterprise20181101::Client::getDataArchiveCountWithOptions(shared_ptr<GetDataArchiveCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderResultType)) {
    query->insert(pair<string, string>("OrderResultType", *request->orderResultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginType)) {
    query->insert(pair<string, string>("PluginType", *request->pluginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchDateType)) {
    query->insert(pair<string, string>("SearchDateType", *request->searchDateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataArchiveCount"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataArchiveCountResponse(callApi(params, req, runtime));
}

GetDataArchiveCountResponse Alibabacloud_Dms-enterprise20181101::Client::getDataArchiveCount(shared_ptr<GetDataArchiveCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataArchiveCountWithOptions(request, runtime);
}

GetDataArchiveOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataArchiveOrderDetailWithOptions(shared_ptr<GetDataArchiveOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataArchiveOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataArchiveOrderDetailResponse(callApi(params, req, runtime));
}

GetDataArchiveOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataArchiveOrderDetail(shared_ptr<GetDataArchiveOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataArchiveOrderDetailWithOptions(request, runtime);
}

GetDataCorrectBackupFilesResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectBackupFilesWithOptions(shared_ptr<GetDataCorrectBackupFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDataCorrectBackupFilesShrinkRequest> request = make_shared<GetDataCorrectBackupFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionDetailShrink)) {
    query->insert(pair<string, string>("ActionDetail", *request->actionDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCorrectBackupFiles"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCorrectBackupFilesResponse(callApi(params, req, runtime));
}

GetDataCorrectBackupFilesResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectBackupFiles(shared_ptr<GetDataCorrectBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectBackupFilesWithOptions(request, runtime);
}

GetDataCorrectOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectOrderDetailWithOptions(shared_ptr<GetDataCorrectOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCorrectOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCorrectOrderDetailResponse(callApi(params, req, runtime));
}

GetDataCorrectOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectOrderDetail(shared_ptr<GetDataCorrectOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectOrderDetailWithOptions(request, runtime);
}

GetDataCorrectRollbackFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectRollbackFileWithOptions(shared_ptr<GetDataCorrectRollbackFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCorrectRollbackFile"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCorrectRollbackFileResponse(callApi(params, req, runtime));
}

GetDataCorrectRollbackFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectRollbackFile(shared_ptr<GetDataCorrectRollbackFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectRollbackFileWithOptions(request, runtime);
}

GetDataCorrectSQLFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectSQLFileWithOptions(shared_ptr<GetDataCorrectSQLFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCorrectSQLFile"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCorrectSQLFileResponse(callApi(params, req, runtime));
}

GetDataCorrectSQLFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectSQLFile(shared_ptr<GetDataCorrectSQLFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectSQLFileWithOptions(request, runtime);
}

GetDataCorrectTaskDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectTaskDetailWithOptions(shared_ptr<GetDataCorrectTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCorrectTaskDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCorrectTaskDetailResponse(callApi(params, req, runtime));
}

GetDataCorrectTaskDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectTaskDetail(shared_ptr<GetDataCorrectTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectTaskDetailWithOptions(request, runtime);
}

GetDataCronClearConfigResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearConfigWithOptions(shared_ptr<GetDataCronClearConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCronClearConfig"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCronClearConfigResponse(callApi(params, req, runtime));
}

GetDataCronClearConfigResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearConfig(shared_ptr<GetDataCronClearConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCronClearConfigWithOptions(request, runtime);
}

GetDataCronClearTaskDetailListResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearTaskDetailListWithOptions(shared_ptr<GetDataCronClearTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataCronClearTaskDetailList"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataCronClearTaskDetailListResponse(callApi(params, req, runtime));
}

GetDataCronClearTaskDetailListResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearTaskDetailList(shared_ptr<GetDataCronClearTaskDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCronClearTaskDetailListWithOptions(request, runtime);
}

GetDataExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportDownloadURLWithOptions(shared_ptr<GetDataExportDownloadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataExportDownloadURL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataExportDownloadURLResponse(callApi(params, req, runtime));
}

GetDataExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportDownloadURL(shared_ptr<GetDataExportDownloadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataExportDownloadURLWithOptions(request, runtime);
}

GetDataExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportOrderDetailWithOptions(shared_ptr<GetDataExportOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    body->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataExportOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataExportOrderDetailResponse(callApi(params, req, runtime));
}

GetDataExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportOrderDetail(shared_ptr<GetDataExportOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataExportOrderDetailWithOptions(request, runtime);
}

GetDataExportPreCheckDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportPreCheckDetailWithOptions(shared_ptr<GetDataExportPreCheckDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataExportPreCheckDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataExportPreCheckDetailResponse(callApi(params, req, runtime));
}

GetDataExportPreCheckDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportPreCheckDetail(shared_ptr<GetDataExportPreCheckDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataExportPreCheckDetailWithOptions(request, runtime);
}

GetDataImportSQLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataImportSQLWithOptions(shared_ptr<GetDataImportSQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlId)) {
    query->insert(pair<string, long>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataImportSQL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataImportSQLResponse(callApi(params, req, runtime));
}

GetDataImportSQLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataImportSQL(shared_ptr<GetDataImportSQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataImportSQLWithOptions(request, runtime);
}

GetDataTrackJobDegreeResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackJobDegreeWithOptions(shared_ptr<GetDataTrackJobDegreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataTrackJobDegree"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataTrackJobDegreeResponse(callApi(params, req, runtime));
}

GetDataTrackJobDegreeResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackJobDegree(shared_ptr<GetDataTrackJobDegreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataTrackJobDegreeWithOptions(request, runtime);
}

GetDataTrackJobTableMetaResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackJobTableMetaWithOptions(shared_ptr<GetDataTrackJobTableMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataTrackJobTableMeta"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataTrackJobTableMetaResponse(callApi(params, req, runtime));
}

GetDataTrackJobTableMetaResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackJobTableMeta(shared_ptr<GetDataTrackJobTableMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataTrackJobTableMetaWithOptions(request, runtime);
}

GetDataTrackOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackOrderDetailWithOptions(shared_ptr<GetDataTrackOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataTrackOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataTrackOrderDetailResponse(callApi(params, req, runtime));
}

GetDataTrackOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataTrackOrderDetail(shared_ptr<GetDataTrackOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataTrackOrderDetailWithOptions(request, runtime);
}

GetDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabaseWithOptions(shared_ptr<GetDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabaseResponse(callApi(params, req, runtime));
}

GetDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabase(shared_ptr<GetDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatabaseWithOptions(request, runtime);
}

GetDatabaseExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabaseExportOrderDetailWithOptions(shared_ptr<GetDatabaseExportOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    body->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatabaseExportOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabaseExportOrderDetailResponse(callApi(params, req, runtime));
}

GetDatabaseExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabaseExportOrderDetail(shared_ptr<GetDatabaseExportOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatabaseExportOrderDetailWithOptions(request, runtime);
}

GetDbExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDbExportDownloadURLWithOptions(shared_ptr<GetDbExportDownloadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDbExportDownloadURL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDbExportDownloadURLResponse(callApi(params, req, runtime));
}

GetDbExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDbExportDownloadURL(shared_ptr<GetDbExportDownloadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDbExportDownloadURLWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetIntervalLimitOfSLAResponse Alibabacloud_Dms-enterprise20181101::Client::getIntervalLimitOfSLAWithOptions(shared_ptr<GetIntervalLimitOfSLARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIntervalLimitOfSLA"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIntervalLimitOfSLAResponse(callApi(params, req, runtime));
}

GetIntervalLimitOfSLAResponse Alibabacloud_Dms-enterprise20181101::Client::getIntervalLimitOfSLA(shared_ptr<GetIntervalLimitOfSLARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIntervalLimitOfSLAWithOptions(request, runtime);
}

GetLhSpaceByNameResponse Alibabacloud_Dms-enterprise20181101::Client::getLhSpaceByNameWithOptions(shared_ptr<GetLhSpaceByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceName)) {
    query->insert(pair<string, string>("SpaceName", *request->spaceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLhSpaceByName"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLhSpaceByNameResponse(callApi(params, req, runtime));
}

GetLhSpaceByNameResponse Alibabacloud_Dms-enterprise20181101::Client::getLhSpaceByName(shared_ptr<GetLhSpaceByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLhSpaceByNameWithOptions(request, runtime);
}

GetLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getLogicDatabaseWithOptions(shared_ptr<GetLogicDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbId)) {
    query->insert(pair<string, string>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogicDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogicDatabaseResponse(callApi(params, req, runtime));
}

GetLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getLogicDatabase(shared_ptr<GetLogicDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogicDatabaseWithOptions(request, runtime);
}

GetMetaTableColumnResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableColumnWithOptions(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableColumn"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableColumnResponse(callApi(params, req, runtime));
}

GetMetaTableColumnResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableColumnWithOptions(request, runtime);
}

GetMetaTableDetailInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableDetailInfoWithOptions(shared_ptr<GetMetaTableDetailInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableDetailInfo"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableDetailInfoResponse(callApi(params, req, runtime));
}

GetMetaTableDetailInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableDetailInfo(shared_ptr<GetMetaTableDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableDetailInfoWithOptions(request, runtime);
}

GetOnlineDDLProgressResponse Alibabacloud_Dms-enterprise20181101::Client::getOnlineDDLProgressWithOptions(shared_ptr<GetOnlineDDLProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobDetailId)) {
    query->insert(pair<string, long>("JobDetailId", *request->jobDetailId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOnlineDDLProgress"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOnlineDDLProgressResponse(callApi(params, req, runtime));
}

GetOnlineDDLProgressResponse Alibabacloud_Dms-enterprise20181101::Client::getOnlineDDLProgress(shared_ptr<GetOnlineDDLProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnlineDDLProgressWithOptions(request, runtime);
}

GetOpLogResponse Alibabacloud_Dms-enterprise20181101::Client::getOpLogWithOptions(shared_ptr<GetOpLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    query->insert(pair<string, string>("Module", *request->module));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    query->insert(pair<string, string>("UserNick", *request->userNick));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOpLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOpLogResponse(callApi(params, req, runtime));
}

GetOpLogResponse Alibabacloud_Dms-enterprise20181101::Client::getOpLog(shared_ptr<GetOpLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpLogWithOptions(request, runtime);
}

GetOrderAttachmentFileResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderAttachmentFileWithOptions(shared_ptr<GetOrderAttachmentFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrderAttachmentFile"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrderAttachmentFileResponse(callApi(params, req, runtime));
}

GetOrderAttachmentFileResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderAttachmentFile(shared_ptr<GetOrderAttachmentFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderAttachmentFileWithOptions(request, runtime);
}

GetOrderBaseInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderBaseInfoWithOptions(shared_ptr<GetOrderBaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrderBaseInfo"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrderBaseInfoResponse(callApi(params, req, runtime));
}

GetOrderBaseInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderBaseInfo(shared_ptr<GetOrderBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderBaseInfoWithOptions(request, runtime);
}

GetOwnerApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getOwnerApplyOrderDetailWithOptions(shared_ptr<GetOwnerApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOwnerApplyOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOwnerApplyOrderDetailResponse(callApi(params, req, runtime));
}

GetOwnerApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getOwnerApplyOrderDetail(shared_ptr<GetOwnerApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOwnerApplyOrderDetailWithOptions(request, runtime);
}

GetPagedInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getPagedInstanceWithOptions(shared_ptr<GetPagedInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPagedInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPagedInstanceResponse(callApi(params, req, runtime));
}

GetPagedInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getPagedInstance(shared_ptr<GetPagedInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPagedInstanceWithOptions(request, runtime);
}

GetPermApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getPermApplyOrderDetailWithOptions(shared_ptr<GetPermApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPermApplyOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPermApplyOrderDetailResponse(callApi(params, req, runtime));
}

GetPermApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getPermApplyOrderDetail(shared_ptr<GetPermApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermApplyOrderDetailWithOptions(request, runtime);
}

GetPhysicalDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getPhysicalDatabaseWithOptions(shared_ptr<GetPhysicalDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalDatabaseResponse(callApi(params, req, runtime));
}

GetPhysicalDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getPhysicalDatabase(shared_ptr<GetPhysicalDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalDatabaseWithOptions(request, runtime);
}

GetProxyResponse Alibabacloud_Dms-enterprise20181101::Client::getProxyWithOptions(shared_ptr<GetProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyId)) {
    query->insert(pair<string, long>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProxy"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProxyResponse(callApi(params, req, runtime));
}

GetProxyResponse Alibabacloud_Dms-enterprise20181101::Client::getProxy(shared_ptr<GetProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProxyWithOptions(request, runtime);
}

GetProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::getProxyAccessWithOptions(shared_ptr<GetProxyAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyAccessId)) {
    query->insert(pair<string, long>("ProxyAccessId", *request->proxyAccessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProxyAccess"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProxyAccessResponse(callApi(params, req, runtime));
}

GetProxyAccessResponse Alibabacloud_Dms-enterprise20181101::Client::getProxyAccess(shared_ptr<GetProxyAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProxyAccessWithOptions(request, runtime);
}

GetRuleNumLimitOfSLAResponse Alibabacloud_Dms-enterprise20181101::Client::getRuleNumLimitOfSLAWithOptions(shared_ptr<GetRuleNumLimitOfSLARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleNumLimitOfSLA"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRuleNumLimitOfSLAResponse(callApi(params, req, runtime));
}

GetRuleNumLimitOfSLAResponse Alibabacloud_Dms-enterprise20181101::Client::getRuleNumLimitOfSLA(shared_ptr<GetRuleNumLimitOfSLARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleNumLimitOfSLAWithOptions(request, runtime);
}

GetSQLReviewCheckResultStatusResponse Alibabacloud_Dms-enterprise20181101::Client::getSQLReviewCheckResultStatusWithOptions(shared_ptr<GetSQLReviewCheckResultStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSQLReviewCheckResultStatus"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSQLReviewCheckResultStatusResponse(callApi(params, req, runtime));
}

GetSQLReviewCheckResultStatusResponse Alibabacloud_Dms-enterprise20181101::Client::getSQLReviewCheckResultStatus(shared_ptr<GetSQLReviewCheckResultStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSQLReviewCheckResultStatusWithOptions(request, runtime);
}

GetSQLReviewOptimizeDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getSQLReviewOptimizeDetailWithOptions(shared_ptr<GetSQLReviewOptimizeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLReviewQueryKey)) {
    query->insert(pair<string, string>("SQLReviewQueryKey", *request->SQLReviewQueryKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSQLReviewOptimizeDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSQLReviewOptimizeDetailResponse(callApi(params, req, runtime));
}

GetSQLReviewOptimizeDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getSQLReviewOptimizeDetail(shared_ptr<GetSQLReviewOptimizeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSQLReviewOptimizeDetailWithOptions(request, runtime);
}

GetStructSyncExecSqlDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncExecSqlDetailWithOptions(shared_ptr<GetStructSyncExecSqlDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStructSyncExecSqlDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStructSyncExecSqlDetailResponse(callApi(params, req, runtime));
}

GetStructSyncExecSqlDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncExecSqlDetail(shared_ptr<GetStructSyncExecSqlDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncExecSqlDetailWithOptions(request, runtime);
}

GetStructSyncJobAnalyzeResultResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobAnalyzeResultWithOptions(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compareType)) {
    query->insert(pair<string, string>("CompareType", *request->compareType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStructSyncJobAnalyzeResult"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStructSyncJobAnalyzeResultResponse(callApi(params, req, runtime));
}

GetStructSyncJobAnalyzeResultResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobAnalyzeResult(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncJobAnalyzeResultWithOptions(request, runtime);
}

GetStructSyncJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobDetailWithOptions(shared_ptr<GetStructSyncJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStructSyncJobDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStructSyncJobDetailResponse(callApi(params, req, runtime));
}

GetStructSyncJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobDetail(shared_ptr<GetStructSyncJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncJobDetailWithOptions(request, runtime);
}

GetStructSyncOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncOrderDetailWithOptions(shared_ptr<GetStructSyncOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStructSyncOrderDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStructSyncOrderDetailResponse(callApi(params, req, runtime));
}

GetStructSyncOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncOrderDetail(shared_ptr<GetStructSyncOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncOrderDetailWithOptions(request, runtime);
}

GetTableDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableDBTopologyWithOptions(shared_ptr<GetTableDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableDBTopology"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableDBTopologyResponse(callApi(params, req, runtime));
}

GetTableDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableDBTopology(shared_ptr<GetTableDBTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableDBTopologyWithOptions(request, runtime);
}

GetTableTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableTopologyWithOptions(shared_ptr<GetTableTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableTopology"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableTopologyResponse(callApi(params, req, runtime));
}

GetTableTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableTopology(shared_ptr<GetTableTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableTopologyWithOptions(request, runtime);
}

GetTaskResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    query->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_Dms-enterprise20181101::Client::getTask(shared_ptr<GetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskWithOptions(request, runtime);
}

GetTaskFlowGraphResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskFlowGraphWithOptions(shared_ptr<GetTaskFlowGraphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskFlowGraph"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskFlowGraphResponse(callApi(params, req, runtime));
}

GetTaskFlowGraphResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskFlowGraph(shared_ptr<GetTaskFlowGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskFlowGraphWithOptions(request, runtime);
}

GetTaskFlowNotificationResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskFlowNotificationWithOptions(shared_ptr<GetTaskFlowNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskFlowNotification"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskFlowNotificationResponse(callApi(params, req, runtime));
}

GetTaskFlowNotificationResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskFlowNotification(shared_ptr<GetTaskFlowNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskFlowNotificationWithOptions(request, runtime);
}

GetTaskInstanceRelationResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskInstanceRelationWithOptions(shared_ptr<GetTaskInstanceRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskInstanceRelation"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskInstanceRelationResponse(callApi(params, req, runtime));
}

GetTaskInstanceRelationResponse Alibabacloud_Dms-enterprise20181101::Client::getTaskInstanceRelation(shared_ptr<GetTaskInstanceRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskInstanceRelationWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_Dms-enterprise20181101::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Dms-enterprise20181101::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

GetUserActiveTenantResponse Alibabacloud_Dms-enterprise20181101::Client::getUserActiveTenantWithOptions(shared_ptr<GetUserActiveTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserActiveTenant"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserActiveTenantResponse(callApi(params, req, runtime));
}

GetUserActiveTenantResponse Alibabacloud_Dms-enterprise20181101::Client::getUserActiveTenant(shared_ptr<GetUserActiveTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserActiveTenantWithOptions(request, runtime);
}

GetUserUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::getUserUploadFileJobWithOptions(shared_ptr<GetUserUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserUploadFileJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserUploadFileJobResponse(callApi(params, req, runtime));
}

GetUserUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::getUserUploadFileJob(shared_ptr<GetUserUploadFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserUploadFileJobWithOptions(request, runtime);
}

GrantTemplateAuthorityResponse Alibabacloud_Dms-enterprise20181101::Client::grantTemplateAuthorityWithOptions(shared_ptr<GrantTemplateAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireDate)) {
    query->insert(pair<string, string>("ExpireDate", *request->expireDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantTemplateAuthority"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantTemplateAuthorityResponse(callApi(params, req, runtime));
}

GrantTemplateAuthorityResponse Alibabacloud_Dms-enterprise20181101::Client::grantTemplateAuthority(shared_ptr<GrantTemplateAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantTemplateAuthorityWithOptions(request, runtime);
}

GrantUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::grantUserPermissionWithOptions(shared_ptr<GrantUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbId)) {
    query->insert(pair<string, string>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dsType)) {
    query->insert(pair<string, string>("DsType", *request->dsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireDate)) {
    query->insert(pair<string, string>("ExpireDate", *request->expireDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permTypes)) {
    query->insert(pair<string, string>("PermTypes", *request->permTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableId)) {
    query->insert(pair<string, string>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantUserPermission"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantUserPermissionResponse(callApi(params, req, runtime));
}

GrantUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::grantUserPermission(shared_ptr<GrantUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPermissionWithOptions(request, runtime);
}

InspectProxyAccessSecretResponse Alibabacloud_Dms-enterprise20181101::Client::inspectProxyAccessSecretWithOptions(shared_ptr<InspectProxyAccessSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyAccessId)) {
    query->insert(pair<string, long>("ProxyAccessId", *request->proxyAccessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InspectProxyAccessSecret"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InspectProxyAccessSecretResponse(callApi(params, req, runtime));
}

InspectProxyAccessSecretResponse Alibabacloud_Dms-enterprise20181101::Client::inspectProxyAccessSecret(shared_ptr<InspectProxyAccessSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inspectProxyAccessSecretWithOptions(request, runtime);
}

ListClassificationTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listClassificationTemplatesWithOptions(shared_ptr<ListClassificationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClassificationTemplates"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClassificationTemplatesResponse(callApi(params, req, runtime));
}

ListClassificationTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listClassificationTemplates(shared_ptr<ListClassificationTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClassificationTemplatesWithOptions(request, runtime);
}

ListColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listColumnsWithOptions(shared_ptr<ListColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableId)) {
    query->insert(pair<string, string>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListColumns"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListColumnsResponse(callApi(params, req, runtime));
}

ListColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listColumns(shared_ptr<ListColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listColumnsWithOptions(request, runtime);
}

ListDAGVersionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDAGVersionsWithOptions(shared_ptr<ListDAGVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDAGVersions"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDAGVersionsResponse(callApi(params, req, runtime));
}

ListDAGVersionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDAGVersions(shared_ptr<ListDAGVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDAGVersionsWithOptions(request, runtime);
}

ListDBTaskSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobWithOptions(shared_ptr<ListDBTaskSQLJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->DBTaskGroupId)) {
    query->insert(pair<string, long>("DBTaskGroupId", *request->DBTaskGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDBTaskSQLJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDBTaskSQLJobResponse(callApi(params, req, runtime));
}

ListDBTaskSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJob(shared_ptr<ListDBTaskSQLJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDBTaskSQLJobWithOptions(request, runtime);
}

ListDBTaskSQLJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobDetailWithOptions(shared_ptr<ListDBTaskSQLJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDBTaskSQLJobDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDBTaskSQLJobDetailResponse(callApi(params, req, runtime));
}

ListDBTaskSQLJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobDetail(shared_ptr<ListDBTaskSQLJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDBTaskSQLJobDetailWithOptions(request, runtime);
}

ListDDLPublishRecordsResponse Alibabacloud_Dms-enterprise20181101::Client::listDDLPublishRecordsWithOptions(shared_ptr<ListDDLPublishRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDDLPublishRecords"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDDLPublishRecordsResponse(callApi(params, req, runtime));
}

ListDDLPublishRecordsResponse Alibabacloud_Dms-enterprise20181101::Client::listDDLPublishRecords(shared_ptr<ListDDLPublishRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDDLPublishRecordsWithOptions(request, runtime);
}

ListDataCorrectPreCheckDBResponse Alibabacloud_Dms-enterprise20181101::Client::listDataCorrectPreCheckDBWithOptions(shared_ptr<ListDataCorrectPreCheckDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataCorrectPreCheckDB"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataCorrectPreCheckDBResponse(callApi(params, req, runtime));
}

ListDataCorrectPreCheckDBResponse Alibabacloud_Dms-enterprise20181101::Client::listDataCorrectPreCheckDB(shared_ptr<ListDataCorrectPreCheckDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataCorrectPreCheckDBWithOptions(request, runtime);
}

ListDataCorrectPreCheckSQLResponse Alibabacloud_Dms-enterprise20181101::Client::listDataCorrectPreCheckSQLWithOptions(shared_ptr<ListDataCorrectPreCheckSQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataCorrectPreCheckSQL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataCorrectPreCheckSQLResponse(callApi(params, req, runtime));
}

ListDataCorrectPreCheckSQLResponse Alibabacloud_Dms-enterprise20181101::Client::listDataCorrectPreCheckSQL(shared_ptr<ListDataCorrectPreCheckSQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataCorrectPreCheckSQLWithOptions(request, runtime);
}

ListDataImportSQLPreCheckDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDataImportSQLPreCheckDetailWithOptions(shared_ptr<ListDataImportSQLPreCheckDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumer)) {
    query->insert(pair<string, long>("PageNumer", *request->pageNumer));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataImportSQLPreCheckDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataImportSQLPreCheckDetailResponse(callApi(params, req, runtime));
}

ListDataImportSQLPreCheckDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDataImportSQLPreCheckDetail(shared_ptr<ListDataImportSQLPreCheckDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataImportSQLPreCheckDetailWithOptions(request, runtime);
}

ListDataImportSQLTypeResponse Alibabacloud_Dms-enterprise20181101::Client::listDataImportSQLTypeWithOptions(shared_ptr<ListDataImportSQLTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataImportSQLType"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataImportSQLTypeResponse(callApi(params, req, runtime));
}

ListDataImportSQLTypeResponse Alibabacloud_Dms-enterprise20181101::Client::listDataImportSQLType(shared_ptr<ListDataImportSQLTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataImportSQLTypeWithOptions(request, runtime);
}

ListDatabaseUserPermssionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabaseUserPermssionsWithOptions(shared_ptr<ListDatabaseUserPermssionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbId)) {
    query->insert(pair<string, string>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permType)) {
    query->insert(pair<string, string>("PermType", *request->permType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatabaseUserPermssions"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatabaseUserPermssionsResponse(callApi(params, req, runtime));
}

ListDatabaseUserPermssionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabaseUserPermssions(shared_ptr<ListDatabaseUserPermssionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabaseUserPermssionsWithOptions(request, runtime);
}

ListDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabasesWithOptions(shared_ptr<ListDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatabases"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatabasesResponse(callApi(params, req, runtime));
}

ListDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabases(shared_ptr<ListDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabasesWithOptions(request, runtime);
}

ListDefaultSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::listDefaultSLARulesWithOptions(shared_ptr<ListDefaultSLARulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDefaultSLARules"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDefaultSLARulesResponse(callApi(params, req, runtime));
}

ListDefaultSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::listDefaultSLARules(shared_ptr<ListDefaultSLARulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDefaultSLARulesWithOptions(request, runtime);
}

ListDesensitizationRuleResponse Alibabacloud_Dms-enterprise20181101::Client::listDesensitizationRuleWithOptions(shared_ptr<ListDesensitizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->funcType)) {
    query->insert(pair<string, string>("FuncType", *request->funcType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDesensitizationRule"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDesensitizationRuleResponse(callApi(params, req, runtime));
}

ListDesensitizationRuleResponse Alibabacloud_Dms-enterprise20181101::Client::listDesensitizationRule(shared_ptr<ListDesensitizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDesensitizationRuleWithOptions(request, runtime);
}

ListEffectiveOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listEffectiveOrdersWithOptions(shared_ptr<ListEffectiveOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEffectiveOrders"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEffectiveOrdersResponse(callApi(params, req, runtime));
}

ListEffectiveOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listEffectiveOrders(shared_ptr<ListEffectiveOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEffectiveOrdersWithOptions(request, runtime);
}

ListIndexesResponse Alibabacloud_Dms-enterprise20181101::Client::listIndexesWithOptions(shared_ptr<ListIndexesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableId)) {
    query->insert(pair<string, string>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexes"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexesResponse(callApi(params, req, runtime));
}

ListIndexesResponse Alibabacloud_Dms-enterprise20181101::Client::listIndexes(shared_ptr<ListIndexesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIndexesWithOptions(request, runtime);
}

ListInstanceLoginAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listInstanceLoginAuditLogWithOptions(shared_ptr<ListInstanceLoginAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opUserName)) {
    query->insert(pair<string, string>("OpUserName", *request->opUserName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceLoginAuditLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceLoginAuditLogResponse(callApi(params, req, runtime));
}

ListInstanceLoginAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listInstanceLoginAuditLog(shared_ptr<ListInstanceLoginAuditLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceLoginAuditLogWithOptions(request, runtime);
}

ListInstanceUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listInstanceUserPermissionsWithOptions(shared_ptr<ListInstanceUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceUserPermissions"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceUserPermissionsResponse(callApi(params, req, runtime));
}

ListInstanceUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listInstanceUserPermissions(shared_ptr<ListInstanceUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceUserPermissionsWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Dms-enterprise20181101::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSource)) {
    query->insert(pair<string, string>("InstanceSource", *request->instanceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceState)) {
    query->insert(pair<string, string>("InstanceState", *request->instanceState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netType)) {
    query->insert(pair<string, string>("NetType", *request->netType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Dms-enterprise20181101::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListLhTaskFlowAndScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::listLhTaskFlowAndScenarioWithOptions(shared_ptr<ListLhTaskFlowAndScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->spaceId)) {
    query->insert(pair<string, long>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLhTaskFlowAndScenario"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLhTaskFlowAndScenarioResponse(callApi(params, req, runtime));
}

ListLhTaskFlowAndScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::listLhTaskFlowAndScenario(shared_ptr<ListLhTaskFlowAndScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLhTaskFlowAndScenarioWithOptions(request, runtime);
}

ListLogicDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicDatabasesWithOptions(shared_ptr<ListLogicDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogicDatabases"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogicDatabasesResponse(callApi(params, req, runtime));
}

ListLogicDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicDatabases(shared_ptr<ListLogicDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogicDatabasesWithOptions(request, runtime);
}

ListLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTableRouteConfigWithOptions(shared_ptr<ListLogicTableRouteConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tableId)) {
    query->insert(pair<string, long>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogicTableRouteConfig"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogicTableRouteConfigResponse(callApi(params, req, runtime));
}

ListLogicTableRouteConfigResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTableRouteConfig(shared_ptr<ListLogicTableRouteConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogicTableRouteConfigWithOptions(request, runtime);
}

ListLogicTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTablesWithOptions(shared_ptr<ListLogicTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseId)) {
    query->insert(pair<string, string>("DatabaseId", *request->databaseId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnGuid)) {
    query->insert(pair<string, bool>("ReturnGuid", *request->returnGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogicTables"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogicTablesResponse(callApi(params, req, runtime));
}

ListLogicTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTables(shared_ptr<ListLogicTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogicTablesWithOptions(request, runtime);
}

ListOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderResultType)) {
    query->insert(pair<string, string>("OrderResultType", *request->orderResultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderStatus)) {
    query->insert(pair<string, string>("OrderStatus", *request->orderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginType)) {
    query->insert(pair<string, string>("PluginType", *request->pluginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchContent)) {
    query->insert(pair<string, string>("SearchContent", *request->searchContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchDateType)) {
    query->insert(pair<string, string>("SearchDateType", *request->searchDateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrders"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrdersResponse(callApi(params, req, runtime));
}

ListOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listOrders(shared_ptr<ListOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrdersWithOptions(request, runtime);
}

ListProxiesResponse Alibabacloud_Dms-enterprise20181101::Client::listProxiesWithOptions(shared_ptr<ListProxiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProxies"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProxiesResponse(callApi(params, req, runtime));
}

ListProxiesResponse Alibabacloud_Dms-enterprise20181101::Client::listProxies(shared_ptr<ListProxiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProxiesWithOptions(request, runtime);
}

ListProxyAccessesResponse Alibabacloud_Dms-enterprise20181101::Client::listProxyAccessesWithOptions(shared_ptr<ListProxyAccessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyId)) {
    query->insert(pair<string, long>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProxyAccesses"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProxyAccessesResponse(callApi(params, req, runtime));
}

ListProxyAccessesResponse Alibabacloud_Dms-enterprise20181101::Client::listProxyAccesses(shared_ptr<ListProxyAccessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProxyAccessesWithOptions(request, runtime);
}

ListProxySQLExecAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listProxySQLExecAuditLogWithOptions(shared_ptr<ListProxySQLExecAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->execState)) {
    query->insert(pair<string, string>("ExecState", *request->execState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opUserName)) {
    query->insert(pair<string, string>("OpUserName", *request->opUserName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLType)) {
    query->insert(pair<string, string>("SQLType", *request->SQLType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProxySQLExecAuditLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProxySQLExecAuditLogResponse(callApi(params, req, runtime));
}

ListProxySQLExecAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listProxySQLExecAuditLog(shared_ptr<ListProxySQLExecAuditLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProxySQLExecAuditLogWithOptions(request, runtime);
}

ListSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::listSLARulesWithOptions(shared_ptr<ListSLARulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSLARules"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSLARulesResponse(callApi(params, req, runtime));
}

ListSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::listSLARules(shared_ptr<ListSLARulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSLARulesWithOptions(request, runtime);
}

ListSQLExecAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listSQLExecAuditLogWithOptions(shared_ptr<ListSQLExecAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->execState)) {
    query->insert(pair<string, string>("ExecState", *request->execState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opUserName)) {
    query->insert(pair<string, string>("OpUserName", *request->opUserName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSQLExecAuditLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSQLExecAuditLogResponse(callApi(params, req, runtime));
}

ListSQLExecAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listSQLExecAuditLog(shared_ptr<ListSQLExecAuditLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSQLExecAuditLogWithOptions(request, runtime);
}

ListSQLReviewOriginSQLResponse Alibabacloud_Dms-enterprise20181101::Client::listSQLReviewOriginSQLWithOptions(shared_ptr<ListSQLReviewOriginSQLRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSQLReviewOriginSQLShrinkRequest> request = make_shared<ListSQLReviewOriginSQLShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListSQLReviewOriginSQLRequestOrderActionDetail>(tmpReq->orderActionDetail)) {
    request->orderActionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderActionDetail, make_shared<string>("OrderActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderActionDetailShrink)) {
    query->insert(pair<string, string>("OrderActionDetail", *request->orderActionDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSQLReviewOriginSQL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSQLReviewOriginSQLResponse(callApi(params, req, runtime));
}

ListSQLReviewOriginSQLResponse Alibabacloud_Dms-enterprise20181101::Client::listSQLReviewOriginSQL(shared_ptr<ListSQLReviewOriginSQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSQLReviewOriginSQLWithOptions(request, runtime);
}

ListScenariosResponse Alibabacloud_Dms-enterprise20181101::Client::listScenariosWithOptions(shared_ptr<ListScenariosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScenarios"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScenariosResponse(callApi(params, req, runtime));
}

ListScenariosResponse Alibabacloud_Dms-enterprise20181101::Client::listScenarios(shared_ptr<ListScenariosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScenariosWithOptions(request, runtime);
}

ListSensitiveColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsWithOptions(shared_ptr<ListSensitiveColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityLevel)) {
    query->insert(pair<string, string>("SecurityLevel", *request->securityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSensitiveColumns"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSensitiveColumnsResponse(callApi(params, req, runtime));
}

ListSensitiveColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumns(shared_ptr<ListSensitiveColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveColumnsWithOptions(request, runtime);
}

ListSensitiveColumnsDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsDetailWithOptions(shared_ptr<ListSensitiveColumnsDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSensitiveColumnsDetail"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSensitiveColumnsDetailResponse(callApi(params, req, runtime));
}

ListSensitiveColumnsDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsDetail(shared_ptr<ListSensitiveColumnsDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveColumnsDetailWithOptions(request, runtime);
}

ListSensitiveDataAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveDataAuditLogWithOptions(shared_ptr<ListSensitiveDataAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opUserName)) {
    query->insert(pair<string, string>("OpUserName", *request->opUserName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSensitiveDataAuditLog"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSensitiveDataAuditLogResponse(callApi(params, req, runtime));
}

ListSensitiveDataAuditLogResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveDataAuditLog(shared_ptr<ListSensitiveDataAuditLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveDataAuditLogWithOptions(request, runtime);
}

ListSensitivityLevelResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitivityLevelWithOptions(shared_ptr<ListSensitivityLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSensitivityLevel"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSensitivityLevelResponse(callApi(params, req, runtime));
}

ListSensitivityLevelResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitivityLevel(shared_ptr<ListSensitivityLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitivityLevelWithOptions(request, runtime);
}

ListStandardGroupsResponse Alibabacloud_Dms-enterprise20181101::Client::listStandardGroupsWithOptions(shared_ptr<ListStandardGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStandardGroups"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStandardGroupsResponse(callApi(params, req, runtime));
}

ListStandardGroupsResponse Alibabacloud_Dms-enterprise20181101::Client::listStandardGroups(shared_ptr<ListStandardGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStandardGroupsWithOptions(request, runtime);
}

ListTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTablesWithOptions(shared_ptr<ListTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseId)) {
    query->insert(pair<string, string>("DatabaseId", *request->databaseId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnGuid)) {
    query->insert(pair<string, bool>("ReturnGuid", *request->returnGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTables"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTablesResponse(callApi(params, req, runtime));
}

ListTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTables(shared_ptr<ListTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTablesWithOptions(request, runtime);
}

ListTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowWithOptions(shared_ptr<ListTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowResponse(callApi(params, req, runtime));
}

ListTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlow(shared_ptr<ListTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowWithOptions(request, runtime);
}

ListTaskFlowConstantsResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowConstantsWithOptions(shared_ptr<ListTaskFlowConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowConstants"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowConstantsResponse(callApi(params, req, runtime));
}

ListTaskFlowConstantsResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowConstants(shared_ptr<ListTaskFlowConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowConstantsWithOptions(request, runtime);
}

ListTaskFlowCooperatorsResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowCooperatorsWithOptions(shared_ptr<ListTaskFlowCooperatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowCooperators"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowCooperatorsResponse(callApi(params, req, runtime));
}

ListTaskFlowCooperatorsResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowCooperators(shared_ptr<ListTaskFlowCooperatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowCooperatorsWithOptions(request, runtime);
}

ListTaskFlowEdgesByConditionResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowEdgesByConditionWithOptions(shared_ptr<ListTaskFlowEdgesByConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeEnd)) {
    query->insert(pair<string, long>("NodeEnd", *request->nodeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeFrom)) {
    query->insert(pair<string, long>("NodeFrom", *request->nodeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowEdgesByCondition"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowEdgesByConditionResponse(callApi(params, req, runtime));
}

ListTaskFlowEdgesByConditionResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowEdgesByCondition(shared_ptr<ListTaskFlowEdgesByConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowEdgesByConditionWithOptions(request, runtime);
}

ListTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowInstanceWithOptions(shared_ptr<ListTaskFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeBegin)) {
    query->insert(pair<string, string>("StartTimeBegin", *request->startTimeBegin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeEnd)) {
    query->insert(pair<string, string>("StartTimeEnd", *request->startTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerType)) {
    query->insert(pair<string, long>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBizDate)) {
    query->insert(pair<string, bool>("UseBizDate", *request->useBizDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowInstanceResponse(callApi(params, req, runtime));
}

ListTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowInstance(shared_ptr<ListTaskFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowInstanceWithOptions(request, runtime);
}

ListTaskFlowTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowTimeVariablesWithOptions(shared_ptr<ListTaskFlowTimeVariablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowTimeVariables"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowTimeVariablesResponse(callApi(params, req, runtime));
}

ListTaskFlowTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowTimeVariables(shared_ptr<ListTaskFlowTimeVariablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowTimeVariablesWithOptions(request, runtime);
}

ListTaskFlowsByPageResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowsByPageWithOptions(shared_ptr<ListTaskFlowsByPageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTaskFlowsByPageShrinkRequest> request = make_shared<ListTaskFlowsByPageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->dagIdList)) {
    request->dagIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dagIdList, make_shared<string>("DagIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagIdListShrink)) {
    query->insert(pair<string, string>("DagIdList", *request->dagIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scenarioId)) {
    query->insert(pair<string, long>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskFlowsByPage"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskFlowsByPageResponse(callApi(params, req, runtime));
}

ListTaskFlowsByPageResponse Alibabacloud_Dms-enterprise20181101::Client::listTaskFlowsByPage(shared_ptr<ListTaskFlowsByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskFlowsByPageWithOptions(request, runtime);
}

ListTasksInTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::listTasksInTaskFlowWithOptions(shared_ptr<ListTasksInTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasksInTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksInTaskFlowResponse(callApi(params, req, runtime));
}

ListTasksInTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::listTasksInTaskFlow(shared_ptr<ListTasksInTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksInTaskFlowWithOptions(request, runtime);
}

ListUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserPermissionsWithOptions(shared_ptr<ListUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permType)) {
    query->insert(pair<string, string>("PermType", *request->permType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserPermissions"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserPermissionsResponse(callApi(params, req, runtime));
}

ListUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserPermissions(shared_ptr<ListUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserPermissionsWithOptions(request, runtime);
}

ListUserTenantsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserTenantsWithOptions(shared_ptr<ListUserTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserTenants"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserTenantsResponse(callApi(params, req, runtime));
}

ListUserTenantsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserTenants(shared_ptr<ListUserTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserTenantsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Dms-enterprise20181101::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userState)) {
    query->insert(pair<string, string>("UserState", *request->userState));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Dms-enterprise20181101::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListWorkFlowNodesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowNodesWithOptions(shared_ptr<ListWorkFlowNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkFlowNodes"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkFlowNodesResponse(callApi(params, req, runtime));
}

ListWorkFlowNodesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowNodes(shared_ptr<ListWorkFlowNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkFlowNodesWithOptions(request, runtime);
}

ListWorkFlowTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowTemplatesWithOptions(shared_ptr<ListWorkFlowTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkFlowTemplates"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkFlowTemplatesResponse(callApi(params, req, runtime));
}

ListWorkFlowTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowTemplates(shared_ptr<ListWorkFlowTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkFlowTemplatesWithOptions(request, runtime);
}

MakeTaskFlowInstanceSuccessResponse Alibabacloud_Dms-enterprise20181101::Client::makeTaskFlowInstanceSuccessWithOptions(shared_ptr<MakeTaskFlowInstanceSuccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MakeTaskFlowInstanceSuccess"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MakeTaskFlowInstanceSuccessResponse(callApi(params, req, runtime));
}

MakeTaskFlowInstanceSuccessResponse Alibabacloud_Dms-enterprise20181101::Client::makeTaskFlowInstanceSuccess(shared_ptr<MakeTaskFlowInstanceSuccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeTaskFlowInstanceSuccessWithOptions(request, runtime);
}

ModifyDataCorrectExecSQLResponse Alibabacloud_Dms-enterprise20181101::Client::modifyDataCorrectExecSQLWithOptions(shared_ptr<ModifyDataCorrectExecSQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->execSQL)) {
    query->insert(pair<string, string>("ExecSQL", *request->execSQL));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDataCorrectExecSQL"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataCorrectExecSQLResponse(callApi(params, req, runtime));
}

ModifyDataCorrectExecSQLResponse Alibabacloud_Dms-enterprise20181101::Client::modifyDataCorrectExecSQL(shared_ptr<ModifyDataCorrectExecSQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataCorrectExecSQLWithOptions(request, runtime);
}

ModifyDesensitizationStrategyResponse Alibabacloud_Dms-enterprise20181101::Client::modifyDesensitizationStrategyWithOptions(shared_ptr<ModifyDesensitizationStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDefault)) {
    query->insert(pair<string, bool>("IsDefault", *request->isDefault));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isLogic)) {
    query->insert(pair<string, bool>("IsLogic", *request->isLogic));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReset)) {
    query->insert(pair<string, bool>("IsReset", *request->isReset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesensitizationStrategy"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesensitizationStrategyResponse(callApi(params, req, runtime));
}

ModifyDesensitizationStrategyResponse Alibabacloud_Dms-enterprise20181101::Client::modifyDesensitizationStrategy(shared_ptr<ModifyDesensitizationStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesensitizationStrategyWithOptions(request, runtime);
}

MoveTaskFlowToScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::moveTaskFlowToScenarioWithOptions(shared_ptr<MoveTaskFlowToScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scenarioId)) {
    query->insert(pair<string, long>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveTaskFlowToScenario"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveTaskFlowToScenarioResponse(callApi(params, req, runtime));
}

MoveTaskFlowToScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::moveTaskFlowToScenario(shared_ptr<MoveTaskFlowToScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveTaskFlowToScenarioWithOptions(request, runtime);
}

OfflineTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::offlineTaskFlowWithOptions(shared_ptr<OfflineTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineTaskFlowResponse(callApi(params, req, runtime));
}

OfflineTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::offlineTaskFlow(shared_ptr<OfflineTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineTaskFlowWithOptions(request, runtime);
}

PauseDataCorrectSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::pauseDataCorrectSQLJobWithOptions(shared_ptr<PauseDataCorrectSQLJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseDataCorrectSQLJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PauseDataCorrectSQLJobResponse(callApi(params, req, runtime));
}

PauseDataCorrectSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::pauseDataCorrectSQLJob(shared_ptr<PauseDataCorrectSQLJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pauseDataCorrectSQLJobWithOptions(request, runtime);
}

PreviewWorkflowResponse Alibabacloud_Dms-enterprise20181101::Client::previewWorkflowWithOptions(shared_ptr<PreviewWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreviewWorkflow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreviewWorkflowResponse(callApi(params, req, runtime));
}

PreviewWorkflowResponse Alibabacloud_Dms-enterprise20181101::Client::previewWorkflow(shared_ptr<PreviewWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return previewWorkflowWithOptions(request, runtime);
}

PublishAndDeployTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::publishAndDeployTaskFlowWithOptions(shared_ptr<PublishAndDeployTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionComments)) {
    query->insert(pair<string, string>("VersionComments", *request->versionComments));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishAndDeployTaskFlow"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishAndDeployTaskFlowResponse(callApi(params, req, runtime));
}

PublishAndDeployTaskFlowResponse Alibabacloud_Dms-enterprise20181101::Client::publishAndDeployTaskFlow(shared_ptr<PublishAndDeployTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishAndDeployTaskFlowWithOptions(request, runtime);
}

QueryDataTrackResultDownloadStatusResponse Alibabacloud_Dms-enterprise20181101::Client::queryDataTrackResultDownloadStatusWithOptions(shared_ptr<QueryDataTrackResultDownloadStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadKeyId)) {
    query->insert(pair<string, string>("DownloadKeyId", *request->downloadKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDataTrackResultDownloadStatus"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDataTrackResultDownloadStatusResponse(callApi(params, req, runtime));
}

QueryDataTrackResultDownloadStatusResponse Alibabacloud_Dms-enterprise20181101::Client::queryDataTrackResultDownloadStatus(shared_ptr<QueryDataTrackResultDownloadStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDataTrackResultDownloadStatusWithOptions(request, runtime);
}

ReDeployLhDagVersionResponse Alibabacloud_Dms-enterprise20181101::Client::reDeployLhDagVersionWithOptions(shared_ptr<ReDeployLhDagVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagVersion)) {
    query->insert(pair<string, long>("DagVersion", *request->dagVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReDeployLhDagVersion"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReDeployLhDagVersionResponse(callApi(params, req, runtime));
}

ReDeployLhDagVersionResponse Alibabacloud_Dms-enterprise20181101::Client::reDeployLhDagVersion(shared_ptr<ReDeployLhDagVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reDeployLhDagVersionWithOptions(request, runtime);
}

ReRunTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::reRunTaskFlowInstanceWithOptions(shared_ptr<ReRunTaskFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagVersion)) {
    query->insert(pair<string, string>("DagVersion", *request->dagVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReRunTaskFlowInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReRunTaskFlowInstanceResponse(callApi(params, req, runtime));
}

ReRunTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::reRunTaskFlowInstance(shared_ptr<ReRunTaskFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reRunTaskFlowInstanceWithOptions(request, runtime);
}

RefundPayAsYouGoOrderResponse Alibabacloud_Dms-enterprise20181101::Client::refundPayAsYouGoOrderWithOptions(shared_ptr<RefundPayAsYouGoOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundPayAsYouGoOrder"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundPayAsYouGoOrderResponse(callApi(params, req, runtime));
}

RefundPayAsYouGoOrderResponse Alibabacloud_Dms-enterprise20181101::Client::refundPayAsYouGoOrder(shared_ptr<RefundPayAsYouGoOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundPayAsYouGoOrderWithOptions(request, runtime);
}

RegisterInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::registerInstanceWithOptions(shared_ptr<RegisterInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataLinkName)) {
    query->insert(pair<string, string>("DataLinkName", *request->dataLinkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databasePassword)) {
    query->insert(pair<string, string>("DatabasePassword", *request->databasePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseUser)) {
    query->insert(pair<string, string>("DatabaseUser", *request->databaseUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dbaUid)) {
    query->insert(pair<string, long>("DbaUid", *request->dbaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ddlOnline)) {
    query->insert(pair<string, long>("DdlOnline", *request->ddlOnline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceId)) {
    query->insert(pair<string, string>("EcsInstanceId", *request->ecsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsRegion)) {
    query->insert(pair<string, string>("EcsRegion", *request->ecsRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableSellSitd)) {
    query->insert(pair<string, string>("EnableSellSitd", *request->enableSellSitd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->exportTimeout)) {
    query->insert(pair<string, long>("ExportTimeout", *request->exportTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceAlias)) {
    query->insert(pair<string, string>("InstanceAlias", *request->instanceAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSource)) {
    query->insert(pair<string, string>("InstanceSource", *request->instanceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryTimeout)) {
    query->insert(pair<string, long>("QueryTimeout", *request->queryTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->safeRule)) {
    query->insert(pair<string, string>("SafeRule", *request->safeRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipTest)) {
    query->insert(pair<string, bool>("SkipTest", *request->skipTest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->useDsql)) {
    query->insert(pair<string, long>("UseDsql", *request->useDsql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterInstanceResponse(callApi(params, req, runtime));
}

RegisterInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::registerInstance(shared_ptr<RegisterInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerInstanceWithOptions(request, runtime);
}

RegisterUserResponse Alibabacloud_Dms-enterprise20181101::Client::registerUserWithOptions(shared_ptr<RegisterUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleNames)) {
    query->insert(pair<string, string>("RoleNames", *request->roleNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    query->insert(pair<string, string>("UserNick", *request->userNick));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterUserResponse(callApi(params, req, runtime));
}

RegisterUserResponse Alibabacloud_Dms-enterprise20181101::Client::registerUser(shared_ptr<RegisterUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerUserWithOptions(request, runtime);
}

RestartDataCorrectSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::restartDataCorrectSQLJobWithOptions(shared_ptr<RestartDataCorrectSQLJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDataCorrectSQLJob"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartDataCorrectSQLJobResponse(callApi(params, req, runtime));
}

RestartDataCorrectSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::restartDataCorrectSQLJob(shared_ptr<RestartDataCorrectSQLJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDataCorrectSQLJobWithOptions(request, runtime);
}

ResumeTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::resumeTaskFlowInstanceWithOptions(shared_ptr<ResumeTaskFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagVersion)) {
    query->insert(pair<string, string>("DagVersion", *request->dagVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeTaskFlowInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeTaskFlowInstanceResponse(callApi(params, req, runtime));
}

ResumeTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::resumeTaskFlowInstance(shared_ptr<ResumeTaskFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeTaskFlowInstanceWithOptions(request, runtime);
}

RetryDataCorrectPreCheckResponse Alibabacloud_Dms-enterprise20181101::Client::retryDataCorrectPreCheckWithOptions(shared_ptr<RetryDataCorrectPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryDataCorrectPreCheck"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryDataCorrectPreCheckResponse(callApi(params, req, runtime));
}

RetryDataCorrectPreCheckResponse Alibabacloud_Dms-enterprise20181101::Client::retryDataCorrectPreCheck(shared_ptr<RetryDataCorrectPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryDataCorrectPreCheckWithOptions(request, runtime);
}

RevokeTemplateAuthorityResponse Alibabacloud_Dms-enterprise20181101::Client::revokeTemplateAuthorityWithOptions(shared_ptr<RevokeTemplateAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeTemplateAuthority"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeTemplateAuthorityResponse(callApi(params, req, runtime));
}

RevokeTemplateAuthorityResponse Alibabacloud_Dms-enterprise20181101::Client::revokeTemplateAuthority(shared_ptr<RevokeTemplateAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeTemplateAuthorityWithOptions(request, runtime);
}

RevokeUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::revokeUserPermissionWithOptions(shared_ptr<RevokeUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbId)) {
    query->insert(pair<string, string>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dsType)) {
    query->insert(pair<string, string>("DsType", *request->dsType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permTypes)) {
    query->insert(pair<string, string>("PermTypes", *request->permTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableId)) {
    query->insert(pair<string, string>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessId)) {
    query->insert(pair<string, string>("UserAccessId", *request->userAccessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeUserPermission"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeUserPermissionResponse(callApi(params, req, runtime));
}

RevokeUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::revokeUserPermission(shared_ptr<RevokeUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeUserPermissionWithOptions(request, runtime);
}

SearchDataTrackResultResponse Alibabacloud_Dms-enterprise20181101::Client::searchDataTrackResultWithOptions(shared_ptr<SearchDataTrackResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchDataTrackResultShrinkRequest> request = make_shared<SearchDataTrackResultShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SearchDataTrackResultRequestColumnFilter>(tmpReq->columnFilter)) {
    request->columnFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->columnFilter, make_shared<string>("ColumnFilter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->filterTableList)) {
    request->filterTableListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTableList, make_shared<string>("FilterTableList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->filterTypeList)) {
    request->filterTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTypeList, make_shared<string>("FilterTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnFilterShrink)) {
    query->insert(pair<string, string>("ColumnFilter", *request->columnFilterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterEndTime)) {
    query->insert(pair<string, string>("FilterEndTime", *request->filterEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterStartTime)) {
    query->insert(pair<string, string>("FilterStartTime", *request->filterStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTableListShrink)) {
    query->insert(pair<string, string>("FilterTableList", *request->filterTableListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTypeListShrink)) {
    query->insert(pair<string, string>("FilterTypeList", *request->filterTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchDataTrackResult"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchDataTrackResultResponse(callApi(params, req, runtime));
}

SearchDataTrackResultResponse Alibabacloud_Dms-enterprise20181101::Client::searchDataTrackResult(shared_ptr<SearchDataTrackResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchDataTrackResultWithOptions(request, runtime);
}

SearchDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::searchDatabaseWithOptions(shared_ptr<SearchDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRange)) {
    query->insert(pair<string, string>("SearchRange", *request->searchRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchTarget)) {
    query->insert(pair<string, string>("SearchTarget", *request->searchTarget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchDatabase"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchDatabaseResponse(callApi(params, req, runtime));
}

SearchDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::searchDatabase(shared_ptr<SearchDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchDatabaseWithOptions(request, runtime);
}

SearchTableResponse Alibabacloud_Dms-enterprise20181101::Client::searchTableWithOptions(shared_ptr<SearchTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnGuid)) {
    query->insert(pair<string, bool>("ReturnGuid", *request->returnGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRange)) {
    query->insert(pair<string, string>("SearchRange", *request->searchRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchTarget)) {
    query->insert(pair<string, string>("SearchTarget", *request->searchTarget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTable"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTableResponse(callApi(params, req, runtime));
}

SearchTableResponse Alibabacloud_Dms-enterprise20181101::Client::searchTable(shared_ptr<SearchTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTableWithOptions(request, runtime);
}

SetOwnersResponse Alibabacloud_Dms-enterprise20181101::Client::setOwnersWithOptions(shared_ptr<SetOwnersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerIds)) {
    query->insert(pair<string, string>("OwnerIds", *request->ownerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerType)) {
    query->insert(pair<string, string>("OwnerType", *request->ownerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetOwners"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetOwnersResponse(callApi(params, req, runtime));
}

SetOwnersResponse Alibabacloud_Dms-enterprise20181101::Client::setOwners(shared_ptr<SetOwnersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setOwnersWithOptions(request, runtime);
}

SkipDataCorrectRowCheckResponse Alibabacloud_Dms-enterprise20181101::Client::skipDataCorrectRowCheckWithOptions(shared_ptr<SkipDataCorrectRowCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipDataCorrectRowCheck"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipDataCorrectRowCheckResponse(callApi(params, req, runtime));
}

SkipDataCorrectRowCheckResponse Alibabacloud_Dms-enterprise20181101::Client::skipDataCorrectRowCheck(shared_ptr<SkipDataCorrectRowCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return skipDataCorrectRowCheckWithOptions(request, runtime);
}

StopTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::stopTaskFlowInstanceWithOptions(shared_ptr<StopTaskFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTaskFlowInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTaskFlowInstanceResponse(callApi(params, req, runtime));
}

StopTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::stopTaskFlowInstance(shared_ptr<StopTaskFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTaskFlowInstanceWithOptions(request, runtime);
}

SubmitOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitOrderApprovalWithOptions(shared_ptr<SubmitOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitOrderApproval"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitOrderApprovalResponse(callApi(params, req, runtime));
}

SubmitOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitOrderApproval(shared_ptr<SubmitOrderApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitOrderApprovalWithOptions(request, runtime);
}

SubmitStructSyncOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitStructSyncOrderApprovalWithOptions(shared_ptr<SubmitStructSyncOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitStructSyncOrderApproval"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitStructSyncOrderApprovalResponse(callApi(params, req, runtime));
}

SubmitStructSyncOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitStructSyncOrderApproval(shared_ptr<SubmitStructSyncOrderApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitStructSyncOrderApprovalWithOptions(request, runtime);
}

SuspendTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::suspendTaskFlowInstanceWithOptions(shared_ptr<SuspendTaskFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagInstanceId)) {
    query->insert(pair<string, long>("DagInstanceId", *request->dagInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendTaskFlowInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendTaskFlowInstanceResponse(callApi(params, req, runtime));
}

SuspendTaskFlowInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::suspendTaskFlowInstance(shared_ptr<SuspendTaskFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendTaskFlowInstanceWithOptions(request, runtime);
}

SyncDatabaseMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncDatabaseMetaWithOptions(shared_ptr<SyncDatabaseMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbId)) {
    query->insert(pair<string, string>("DbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logic)) {
    query->insert(pair<string, bool>("Logic", *request->logic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncDatabaseMeta"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncDatabaseMetaResponse(callApi(params, req, runtime));
}

SyncDatabaseMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncDatabaseMeta(shared_ptr<SyncDatabaseMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncDatabaseMetaWithOptions(request, runtime);
}

SyncInstanceMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncInstanceMetaWithOptions(shared_ptr<SyncInstanceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreTable)) {
    query->insert(pair<string, bool>("IgnoreTable", *request->ignoreTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncInstanceMeta"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncInstanceMetaResponse(callApi(params, req, runtime));
}

SyncInstanceMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncInstanceMeta(shared_ptr<SyncInstanceMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncInstanceMetaWithOptions(request, runtime);
}

UpdateAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::updateAuthorityTemplateWithOptions(shared_ptr<UpdateAuthorityTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthorityTemplate"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthorityTemplateResponse(callApi(params, req, runtime));
}

UpdateAuthorityTemplateResponse Alibabacloud_Dms-enterprise20181101::Client::updateAuthorityTemplate(shared_ptr<UpdateAuthorityTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthorityTemplateWithOptions(request, runtime);
}

UpdateInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataLinkName)) {
    query->insert(pair<string, string>("DataLinkName", *request->dataLinkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databasePassword)) {
    query->insert(pair<string, string>("DatabasePassword", *request->databasePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseUser)) {
    query->insert(pair<string, string>("DatabaseUser", *request->databaseUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbaId)) {
    query->insert(pair<string, string>("DbaId", *request->dbaId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ddlOnline)) {
    query->insert(pair<string, long>("DdlOnline", *request->ddlOnline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceId)) {
    query->insert(pair<string, string>("EcsInstanceId", *request->ecsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsRegion)) {
    query->insert(pair<string, string>("EcsRegion", *request->ecsRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableSellSitd)) {
    query->insert(pair<string, string>("EnableSellSitd", *request->enableSellSitd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->exportTimeout)) {
    query->insert(pair<string, long>("ExportTimeout", *request->exportTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceAlias)) {
    query->insert(pair<string, string>("InstanceAlias", *request->instanceAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSource)) {
    query->insert(pair<string, string>("InstanceSource", *request->instanceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryTimeout)) {
    query->insert(pair<string, long>("QueryTimeout", *request->queryTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->safeRuleId)) {
    query->insert(pair<string, string>("SafeRuleId", *request->safeRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipTest)) {
    query->insert(pair<string, bool>("SkipTest", *request->skipTest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->useDsql)) {
    query->insert(pair<string, long>("UseDsql", *request->useDsql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::updateInstance(shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceWithOptions(request, runtime);
}

UpdateSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::updateSLARulesWithOptions(shared_ptr<UpdateSLARulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSLARulesShrinkRequest> request = make_shared<UpdateSLARulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSLARulesRequestSlaRuleList>>(tmpReq->slaRuleList)) {
    request->slaRuleListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->slaRuleList, make_shared<string>("SlaRuleList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaRuleListShrink)) {
    query->insert(pair<string, string>("SlaRuleList", *request->slaRuleListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSLARules"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSLARulesResponse(callApi(params, req, runtime));
}

UpdateSLARulesResponse Alibabacloud_Dms-enterprise20181101::Client::updateSLARules(shared_ptr<UpdateSLARulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSLARulesWithOptions(request, runtime);
}

UpdateScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::updateScenarioWithOptions(shared_ptr<UpdateScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioName)) {
    query->insert(pair<string, string>("ScenarioName", *request->scenarioName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScenario"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScenarioResponse(callApi(params, req, runtime));
}

UpdateScenarioResponse Alibabacloud_Dms-enterprise20181101::Client::updateScenario(shared_ptr<UpdateScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScenarioWithOptions(request, runtime);
}

UpdateTaskConfigResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskConfigWithOptions(shared_ptr<UpdateTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeConfig)) {
    query->insert(pair<string, string>("NodeConfig", *request->nodeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskConfig"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskConfigResponse(callApi(params, req, runtime));
}

UpdateTaskConfigResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskConfig(shared_ptr<UpdateTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskConfigWithOptions(request, runtime);
}

UpdateTaskContentResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskContentWithOptions(shared_ptr<UpdateTaskContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeContent)) {
    query->insert(pair<string, string>("NodeContent", *request->nodeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskContent"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskContentResponse(callApi(params, req, runtime));
}

UpdateTaskContentResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskContent(shared_ptr<UpdateTaskContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskContentWithOptions(request, runtime);
}

UpdateTaskFlowConstantsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowConstantsWithOptions(shared_ptr<UpdateTaskFlowConstantsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskFlowConstantsShrinkRequest> request = make_shared<UpdateTaskFlowConstantsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskFlowConstantsRequestDagConstants>>(tmpReq->dagConstants)) {
    request->dagConstantsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dagConstants, make_shared<string>("DagConstants"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagConstantsShrink)) {
    query->insert(pair<string, string>("DagConstants", *request->dagConstantsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowConstants"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowConstantsResponse(callApi(params, req, runtime));
}

UpdateTaskFlowConstantsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowConstants(shared_ptr<UpdateTaskFlowConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowConstantsWithOptions(request, runtime);
}

UpdateTaskFlowCooperatorsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowCooperatorsWithOptions(shared_ptr<UpdateTaskFlowCooperatorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskFlowCooperatorsShrinkRequest> request = make_shared<UpdateTaskFlowCooperatorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cooperatorIds)) {
    request->cooperatorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cooperatorIds, make_shared<string>("CooperatorIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorIdsShrink)) {
    query->insert(pair<string, string>("CooperatorIds", *request->cooperatorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowCooperators"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowCooperatorsResponse(callApi(params, req, runtime));
}

UpdateTaskFlowCooperatorsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowCooperators(shared_ptr<UpdateTaskFlowCooperatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowCooperatorsWithOptions(request, runtime);
}

UpdateTaskFlowEdgesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowEdgesWithOptions(shared_ptr<UpdateTaskFlowEdgesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskFlowEdgesShrinkRequest> request = make_shared<UpdateTaskFlowEdgesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskFlowEdgesRequestEdges>>(tmpReq->edges)) {
    request->edgesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->edges, make_shared<string>("Edges"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgesShrink)) {
    query->insert(pair<string, string>("Edges", *request->edgesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowEdges"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowEdgesResponse(callApi(params, req, runtime));
}

UpdateTaskFlowEdgesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowEdges(shared_ptr<UpdateTaskFlowEdgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowEdgesWithOptions(request, runtime);
}

UpdateTaskFlowNameAndDescResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowNameAndDescWithOptions(shared_ptr<UpdateTaskFlowNameAndDescRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagName)) {
    query->insert(pair<string, string>("DagName", *request->dagName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowNameAndDesc"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowNameAndDescResponse(callApi(params, req, runtime));
}

UpdateTaskFlowNameAndDescResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowNameAndDesc(shared_ptr<UpdateTaskFlowNameAndDescRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowNameAndDescWithOptions(request, runtime);
}

UpdateTaskFlowNotificationResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowNotificationWithOptions(shared_ptr<UpdateTaskFlowNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dagNotificationFail)) {
    query->insert(pair<string, bool>("DagNotificationFail", *request->dagNotificationFail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dagNotificationSla)) {
    query->insert(pair<string, bool>("DagNotificationSla", *request->dagNotificationSla));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dagNotificationSuccess)) {
    query->insert(pair<string, bool>("DagNotificationSuccess", *request->dagNotificationSuccess));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowNotification"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowNotificationResponse(callApi(params, req, runtime));
}

UpdateTaskFlowNotificationResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowNotification(shared_ptr<UpdateTaskFlowNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowNotificationWithOptions(request, runtime);
}

UpdateTaskFlowOwnerResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowOwnerWithOptions(shared_ptr<UpdateTaskFlowOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOwnerId)) {
    query->insert(pair<string, string>("NewOwnerId", *request->newOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowOwner"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowOwnerResponse(callApi(params, req, runtime));
}

UpdateTaskFlowOwnerResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowOwner(shared_ptr<UpdateTaskFlowOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowOwnerWithOptions(request, runtime);
}

UpdateTaskFlowRelationsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowRelationsWithOptions(shared_ptr<UpdateTaskFlowRelationsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskFlowRelationsShrinkRequest> request = make_shared<UpdateTaskFlowRelationsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskFlowRelationsRequestEdges>>(tmpReq->edges)) {
    request->edgesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->edges, make_shared<string>("Edges"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgesShrink)) {
    query->insert(pair<string, string>("Edges", *request->edgesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowRelations"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowRelationsResponse(callApi(params, req, runtime));
}

UpdateTaskFlowRelationsResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowRelations(shared_ptr<UpdateTaskFlowRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowRelationsWithOptions(request, runtime);
}

UpdateTaskFlowScheduleResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowScheduleWithOptions(shared_ptr<UpdateTaskFlowScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cronBeginDate)) {
    query->insert(pair<string, string>("CronBeginDate", *request->cronBeginDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronEndDate)) {
    query->insert(pair<string, string>("CronEndDate", *request->cronEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronStr)) {
    query->insert(pair<string, string>("CronStr", *request->cronStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronType)) {
    query->insert(pair<string, string>("CronType", *request->cronType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleParam)) {
    query->insert(pair<string, string>("ScheduleParam", *request->scheduleParam));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scheduleSwitch)) {
    query->insert(pair<string, bool>("ScheduleSwitch", *request->scheduleSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZoneId)) {
    query->insert(pair<string, string>("TimeZoneId", *request->timeZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    query->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowSchedule"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowScheduleResponse(callApi(params, req, runtime));
}

UpdateTaskFlowScheduleResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowSchedule(shared_ptr<UpdateTaskFlowScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowScheduleWithOptions(request, runtime);
}

UpdateTaskFlowTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowTimeVariablesWithOptions(shared_ptr<UpdateTaskFlowTimeVariablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeVariables)) {
    query->insert(pair<string, string>("TimeVariables", *request->timeVariables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskFlowTimeVariables"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskFlowTimeVariablesResponse(callApi(params, req, runtime));
}

UpdateTaskFlowTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskFlowTimeVariables(shared_ptr<UpdateTaskFlowTimeVariablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskFlowTimeVariablesWithOptions(request, runtime);
}

UpdateTaskNameResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskNameWithOptions(shared_ptr<UpdateTaskNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskName"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskNameResponse(callApi(params, req, runtime));
}

UpdateTaskNameResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskName(shared_ptr<UpdateTaskNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskNameWithOptions(request, runtime);
}

UpdateTaskOutputResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskOutputWithOptions(shared_ptr<UpdateTaskOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeOutput)) {
    query->insert(pair<string, string>("NodeOutput", *request->nodeOutput));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskOutput"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskOutputResponse(callApi(params, req, runtime));
}

UpdateTaskOutputResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskOutput(shared_ptr<UpdateTaskOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskOutputWithOptions(request, runtime);
}

UpdateTaskTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskTimeVariablesWithOptions(shared_ptr<UpdateTaskTimeVariablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeVariables)) {
    query->insert(pair<string, string>("TimeVariables", *request->timeVariables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskTimeVariables"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskTimeVariablesResponse(callApi(params, req, runtime));
}

UpdateTaskTimeVariablesResponse Alibabacloud_Dms-enterprise20181101::Client::updateTaskTimeVariables(shared_ptr<UpdateTaskTimeVariablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskTimeVariablesWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Dms-enterprise20181101::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxExecuteCount)) {
    query->insert(pair<string, long>("MaxExecuteCount", *request->maxExecuteCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResultCount)) {
    query->insert(pair<string, long>("MaxResultCount", *request->maxResultCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleNames)) {
    query->insert(pair<string, string>("RoleNames", *request->roleNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tid)) {
    query->insert(pair<string, long>("Tid", *request->tid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    query->insert(pair<string, string>("UserNick", *request->userNick));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2018-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_Dms-enterprise20181101::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

