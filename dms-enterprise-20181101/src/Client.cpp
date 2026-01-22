#include <darabonba/Core.hpp>
#include <alibabacloud/DmsEnterprise20181101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DmsEnterprise20181101::Models;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{

AlibabaCloud::DmsEnterprise20181101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("dms-enterprise", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Adds instances, databases, and tables to the specified permission template.
 *
 * @param tmpReq AddAuthorityTemplateItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAuthorityTemplateItemsResponse
 */
AddAuthorityTemplateItemsResponse Client::addAuthorityTemplateItemsWithOptions(const AddAuthorityTemplateItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAuthorityTemplateItemsShrinkRequest request = AddAuthorityTemplateItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "Items", "json"));
  }

  json query = {};
  if (!!request.hasItemsShrink()) {
    query["Items"] = request.getItemsShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAuthorityTemplateItems"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAuthorityTemplateItemsResponse>();
}

/**
 * @summary Adds instances, databases, and tables to the specified permission template.
 *
 * @param request AddAuthorityTemplateItemsRequest
 * @return AddAuthorityTemplateItemsResponse
 */
AddAuthorityTemplateItemsResponse Client::addAuthorityTemplateItems(const AddAuthorityTemplateItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuthorityTemplateItemsWithOptions(request, runtime);
}

/**
 * @summary Adds a masking rule.
 *
 * @param request AddDesensitizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDesensitizationRuleResponse
 */
AddDesensitizationRuleResponse Client::addDesensitizationRuleWithOptions(const AddDesensitizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionType()) {
    query["FunctionType"] = request.getFunctionType();
  }

  if (!!request.hasRuleDescription()) {
    query["RuleDescription"] = request.getRuleDescription();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasFunctionParams()) {
    bodyFlat["FunctionParams"] = request.getFunctionParams();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDesensitizationRule"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDesensitizationRuleResponse>();
}

/**
 * @summary Adds a masking rule.
 *
 * @param request AddDesensitizationRuleRequest
 * @return AddDesensitizationRuleResponse
 */
AddDesensitizationRuleResponse Client::addDesensitizationRule(const AddDesensitizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDesensitizationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a database instance to Data Management (DMS) and enable security hosting for the instance.
 *
 * @description You must be a database administrator (DBA) or a DMS administrator. For more information, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request AddInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInstanceResponse
 */
AddInstanceResponse Client::addInstanceWithOptions(const AddInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLinkName()) {
    query["DataLinkName"] = request.getDataLinkName();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasDatabaseUser()) {
    query["DatabaseUser"] = request.getDatabaseUser();
  }

  if (!!request.hasDbaId()) {
    query["DbaId"] = request.getDbaId();
  }

  if (!!request.hasDdlOnline()) {
    query["DdlOnline"] = request.getDdlOnline();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  if (!!request.hasEcsRegion()) {
    query["EcsRegion"] = request.getEcsRegion();
  }

  if (!!request.hasEnableSellCommon()) {
    query["EnableSellCommon"] = request.getEnableSellCommon();
  }

  if (!!request.hasEnableSellSitd()) {
    query["EnableSellSitd"] = request.getEnableSellSitd();
  }

  if (!!request.hasEnableSellStable()) {
    query["EnableSellStable"] = request.getEnableSellStable();
  }

  if (!!request.hasEnableSellTrust()) {
    query["EnableSellTrust"] = request.getEnableSellTrust();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasExportTimeout()) {
    query["ExportTimeout"] = request.getExportTimeout();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceSource()) {
    query["InstanceSource"] = request.getInstanceSource();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasQueryTimeout()) {
    query["QueryTimeout"] = request.getQueryTimeout();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasSafeRule()) {
    query["SafeRule"] = request.getSafeRule();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasSkipTest()) {
    query["SkipTest"] = request.getSkipTest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUseDsql()) {
    query["UseDsql"] = request.getUseDsql();
  }

  if (!!request.hasUseSsl()) {
    query["UseSsl"] = request.getUseSsl();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInstanceResponse>();
}

/**
 * @summary Adds a database instance to Data Management (DMS) and enable security hosting for the instance.
 *
 * @description You must be a database administrator (DBA) or a DMS administrator. For more information, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request AddInstanceRequest
 * @return AddInstanceResponse
 */
AddInstanceResponse Client::addInstance(const AddInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds a workspace administrator, a workspace member, or a task flow developer in Data Management (DMS).
 *
 * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
 * Usage notes:
 * *   Before you call this operation to add a user as a task flow developer, make sure that you have added the user as a workspace member.
 * *   You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
 * *   For more information about workspace roles and permissions, see [Manage permissions on a workspace](https://help.aliyun.com/document_detail/410893.html).
 *
 * @param tmpReq AddLhMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLhMembersResponse
 */
AddLhMembersResponse Client::addLhMembersWithOptions(const AddLhMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddLhMembersShrinkRequest request = AddLhMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMembers(), "Members", "json"));
  }

  json query = {};
  if (!!request.hasMembersShrink()) {
    query["Members"] = request.getMembersShrink();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddLhMembers"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddLhMembersResponse>();
}

/**
 * @summary Adds a workspace administrator, a workspace member, or a task flow developer in Data Management (DMS).
 *
 * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
 * Usage notes:
 * *   Before you call this operation to add a user as a task flow developer, make sure that you have added the user as a workspace member.
 * *   You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
 * *   For more information about workspace roles and permissions, see [Manage permissions on a workspace](https://help.aliyun.com/document_detail/410893.html).
 *
 * @param request AddLhMembersRequest
 * @return AddLhMembersResponse
 */
AddLhMembersResponse Client::addLhMembers(const AddLhMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addLhMembersWithOptions(request, runtime);
}

/**
 * @summary Adds a routing algorithm to a logical table.
 *
 * @param request AddLogicTableRouteConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLogicTableRouteConfigResponse
 */
AddLogicTableRouteConfigResponse Client::addLogicTableRouteConfigWithOptions(const AddLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRouteExpr()) {
    query["RouteExpr"] = request.getRouteExpr();
  }

  if (!!request.hasRouteKey()) {
    query["RouteKey"] = request.getRouteKey();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddLogicTableRouteConfig"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddLogicTableRouteConfigResponse>();
}

/**
 * @summary Adds a routing algorithm to a logical table.
 *
 * @param request AddLogicTableRouteConfigRequest
 * @return AddLogicTableRouteConfigResponse
 */
AddLogicTableRouteConfigResponse Client::addLogicTableRouteConfig(const AddLogicTableRouteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addLogicTableRouteConfigWithOptions(request, runtime);
}

/**
 * @summary Add a table to an asset category.
 *
 * @param request AddTableToCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTableToCategoryResponse
 */
AddTableToCategoryResponse Client::addTableToCategoryWithOptions(const AddTableToCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableSchemaName()) {
    query["TableSchemaName"] = request.getTableSchemaName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTableToCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTableToCategoryResponse>();
}

/**
 * @summary Add a table to an asset category.
 *
 * @param request AddTableToCategoryRequest
 * @return AddTableToCategoryResponse
 */
AddTableToCategoryResponse Client::addTableToCategory(const AddTableToCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTableToCategoryWithOptions(request, runtime);
}

/**
 * @summary Adds directed edges for an existing task node.
 *
 * @description When you add directed edges for a task node, take note of the following limits:
 * 1. The endpoints of the specified edge exist in the Directed Acyclic Graph (DAG) of the task flow specified by DagId.
 * 2. After a backward edge is added, the DAG does not contain loops.
 *
 * @param tmpReq AddTaskFlowEdgesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTaskFlowEdgesResponse
 */
AddTaskFlowEdgesResponse Client::addTaskFlowEdgesWithOptions(const AddTaskFlowEdgesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTaskFlowEdgesShrinkRequest request = AddTaskFlowEdgesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEdges()) {
    request.setEdgesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEdges(), "Edges", "json"));
  }

  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasEdgesShrink()) {
    query["Edges"] = request.getEdgesShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTaskFlowEdges"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTaskFlowEdgesResponse>();
}

/**
 * @summary Adds directed edges for an existing task node.
 *
 * @description When you add directed edges for a task node, take note of the following limits:
 * 1. The endpoints of the specified edge exist in the Directed Acyclic Graph (DAG) of the task flow specified by DagId.
 * 2. After a backward edge is added, the DAG does not contain loops.
 *
 * @param request AddTaskFlowEdgesRequest
 * @return AddTaskFlowEdgesResponse
 */
AddTaskFlowEdgesResponse Client::addTaskFlowEdges(const AddTaskFlowEdgesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTaskFlowEdgesWithOptions(request, runtime);
}

/**
 * @summary Analyzes the lineage (dependencies and influence) between tables and between fields in SQL statements.
 *
 * @description The following conditions must be met before you call this API operation.
 * *   The database instance is of one of the following types: ApsaraDB RDS for MySQL, PolarDB for MySQL, AnalyticDB for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for PostgreSQL, AnalyticDB for PostgreSQL, Oracle, and openGauss.
 * *   A database instance is managed in Security Collaboration mode. For more information about control modes, see [Control modes](https://help.aliyun.com/document_detail/151629.html).
 *
 * @param request AnalyzeSQLLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeSQLLineageResponse
 */
AnalyzeSQLLineageResponse Client::analyzeSQLLineageWithOptions(const AnalyzeSQLLineageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasSqlContent()) {
    query["SqlContent"] = request.getSqlContent();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnalyzeSQLLineage"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeSQLLineageResponse>();
}

/**
 * @summary Analyzes the lineage (dependencies and influence) between tables and between fields in SQL statements.
 *
 * @description The following conditions must be met before you call this API operation.
 * *   The database instance is of one of the following types: ApsaraDB RDS for MySQL, PolarDB for MySQL, AnalyticDB for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for PostgreSQL, AnalyticDB for PostgreSQL, Oracle, and openGauss.
 * *   A database instance is managed in Security Collaboration mode. For more information about control modes, see [Control modes](https://help.aliyun.com/document_detail/151629.html).
 *
 * @param request AnalyzeSQLLineageRequest
 * @return AnalyzeSQLLineageResponse
 */
AnalyzeSQLLineageResponse Client::analyzeSQLLineage(const AnalyzeSQLLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return analyzeSQLLineageWithOptions(request, runtime);
}

/**
 * @summary Answers the syntax questions of the corresponding engine according to the specified database ID.
 *
 * @description You can call this operation to answer the syntax questions of the corresponding engine according to the specified database ID.
 *
 * @param request AnswerSqlSyntaxByMetaAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerSqlSyntaxByMetaAgentResponse
 */
AnswerSqlSyntaxByMetaAgentResponse Client::answerSqlSyntaxByMetaAgentWithOptions(const AnswerSqlSyntaxByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnswerSqlSyntaxByMetaAgent"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnswerSqlSyntaxByMetaAgentResponse>();
}

/**
 * @summary Answers the syntax questions of the corresponding engine according to the specified database ID.
 *
 * @description You can call this operation to answer the syntax questions of the corresponding engine according to the specified database ID.
 *
 * @param request AnswerSqlSyntaxByMetaAgentRequest
 * @return AnswerSqlSyntaxByMetaAgentResponse
 */
AnswerSqlSyntaxByMetaAgentResponse Client::answerSqlSyntaxByMetaAgent(const AnswerSqlSyntaxByMetaAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return answerSqlSyntaxByMetaAgentWithOptions(request, runtime);
}

/**
 * @summary Reviews a ticket.
 *
 * @param request ApproveOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveOrderResponse
 */
ApproveOrderResponse Client::approveOrderWithOptions(const ApproveOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApprovalNodeId()) {
    query["ApprovalNodeId"] = request.getApprovalNodeId();
  }

  if (!!request.hasApprovalNodePos()) {
    query["ApprovalNodePos"] = request.getApprovalNodePos();
  }

  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.getApprovalType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasNewApprover()) {
    query["NewApprover"] = request.getNewApprover();
  }

  if (!!request.hasNewApproverList()) {
    query["NewApproverList"] = request.getNewApproverList();
  }

  if (!!request.hasOldApprover()) {
    query["OldApprover"] = request.getOldApprover();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkflowInstanceId()) {
    query["WorkflowInstanceId"] = request.getWorkflowInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApproveOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveOrderResponse>();
}

/**
 * @summary Reviews a ticket.
 *
 * @param request ApproveOrderRequest
 * @return ApproveOrderResponse
 */
ApproveOrderResponse Client::approveOrder(const ApproveOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveOrderWithOptions(request, runtime);
}

/**
 * @summary Backfills data for task orchestration.
 *
 * @description During a data backfill, task flows are run in sequence based on their dates. You can specify whether task flows are run in chronological or reverse chronological order. After the data backfill is complete, you can specify a date or date range, and a node range to run task flows.
 *
 * @param tmpReq BackFillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackFillResponse
 */
BackFillResponse Client::backFillWithOptions(const BackFillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BackFillShrinkRequest request = BackFillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterNodeIds()) {
    request.setFilterNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterNodeIds(), "FilterNodeIds", "json"));
  }

  if (!!tmpReq.hasStartNodeIds()) {
    request.setStartNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartNodeIds(), "StartNodeIds", "json"));
  }

  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.getAsc();
  }

  if (!!request.hasBackFillDate()) {
    query["BackFillDate"] = request.getBackFillDate();
  }

  if (!!request.hasBackFillDateBegin()) {
    query["BackFillDateBegin"] = request.getBackFillDateBegin();
  }

  if (!!request.hasBackFillDateEnd()) {
    query["BackFillDateEnd"] = request.getBackFillDateEnd();
  }

  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasFilterNodeIdsShrink()) {
    query["FilterNodeIds"] = request.getFilterNodeIdsShrink();
  }

  if (!!request.hasHistoryDagId()) {
    query["HistoryDagId"] = request.getHistoryDagId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIsTriggerSubTree()) {
    query["IsTriggerSubTree"] = request.getIsTriggerSubTree();
  }

  if (!!request.hasStartNodeIdsShrink()) {
    query["StartNodeIds"] = request.getStartNodeIdsShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BackFill"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackFillResponse>();
}

/**
 * @summary Backfills data for task orchestration.
 *
 * @description During a data backfill, task flows are run in sequence based on their dates. You can specify whether task flows are run in chronological or reverse chronological order. After the data backfill is complete, you can specify a date or date range, and a node range to run task flows.
 *
 * @param request BackFillRequest
 * @return BackFillResponse
 */
BackFillResponse Client::backFill(const BackFillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return backFillWithOptions(request, runtime);
}

/**
 * @summary Creates multiple partitions for a table in a data lakehouse at a time.
 *
 * @param tmpReq BatchCreateDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateDataLakePartitionsResponse
 */
BatchCreateDataLakePartitionsResponse Client::batchCreateDataLakePartitionsWithOptions(const BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateDataLakePartitionsShrinkRequest request = BatchCreateDataLakePartitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInputs()) {
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.getIfNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.getNeedResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.getPartitionInputsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateDataLakePartitions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateDataLakePartitionsResponse>();
}

/**
 * @summary Creates multiple partitions for a table in a data lakehouse at a time.
 *
 * @param request BatchCreateDataLakePartitionsRequest
 * @return BatchCreateDataLakePartitionsResponse
 */
BatchCreateDataLakePartitionsResponse Client::batchCreateDataLakePartitions(const BatchCreateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple partitions of a table in a data lakehouse at a time.
 *
 * @param request BatchDeleteDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDataLakePartitionsResponse
 */
BatchDeleteDataLakePartitionsResponse Client::batchDeleteDataLakePartitionsWithOptions(const BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.getIfExists();
  }

  if (!!request.hasPartitionValuesList()) {
    query["PartitionValuesList"] = request.getPartitionValuesList();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDataLakePartitions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDataLakePartitionsResponse>();
}

/**
 * @summary Deletes multiple partitions of a table in a data lakehouse at a time.
 *
 * @param request BatchDeleteDataLakePartitionsRequest
 * @return BatchDeleteDataLakePartitionsResponse
 */
BatchDeleteDataLakePartitionsResponse Client::batchDeleteDataLakePartitions(const BatchDeleteDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Updates multiple partitions of a table in a data lakehouse at a time.
 *
 * @param tmpReq BatchUpdateDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateDataLakePartitionsResponse
 */
BatchUpdateDataLakePartitionsResponse Client::batchUpdateDataLakePartitionsWithOptions(const BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateDataLakePartitionsShrinkRequest request = BatchUpdateDataLakePartitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInputs()) {
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.getPartitionInputsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateDataLakePartitions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateDataLakePartitionsResponse>();
}

/**
 * @summary Updates multiple partitions of a table in a data lakehouse at a time.
 *
 * @param request BatchUpdateDataLakePartitionsRequest
 * @return BatchUpdateDataLakePartitionsResponse
 */
BatchUpdateDataLakePartitionsResponse Client::batchUpdateDataLakePartitions(const BatchUpdateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Purchases a pay-as-you-go Data Management (DMS) resource.
 *
 * @param request BuyPayAsYouGoOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuyPayAsYouGoOrderResponse
 */
BuyPayAsYouGoOrderResponse Client::buyPayAsYouGoOrderWithOptions(const BuyPayAsYouGoOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityType()) {
    query["CommodityType"] = request.getCommodityType();
  }

  if (!!request.hasInsNum()) {
    query["InsNum"] = request.getInsNum();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasVersionType()) {
    query["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BuyPayAsYouGoOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuyPayAsYouGoOrderResponse>();
}

/**
 * @summary Purchases a pay-as-you-go Data Management (DMS) resource.
 *
 * @param request BuyPayAsYouGoOrderRequest
 * @return BuyPayAsYouGoOrderResponse
 */
BuyPayAsYouGoOrderResponse Client::buyPayAsYouGoOrder(const BuyPayAsYouGoOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return buyPayAsYouGoOrderWithOptions(request, runtime);
}

/**
 * @summary Adjusts the sensitivity level of one or more fields.
 *
 * @param request ChangeColumnSecLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeColumnSecLevelResponse
 */
ChangeColumnSecLevelResponse Client::changeColumnSecLevelWithOptions(const ChangeColumnSecLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasIsLogic()) {
    query["IsLogic"] = request.getIsLogic();
  }

  if (!!request.hasNewLevel()) {
    query["NewLevel"] = request.getNewLevel();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeColumnSecLevel"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeColumnSecLevelResponse>();
}

/**
 * @summary Adjusts the sensitivity level of one or more fields.
 *
 * @param request ChangeColumnSecLevelRequest
 * @return ChangeColumnSecLevelResponse
 */
ChangeColumnSecLevelResponse Client::changeColumnSecLevel(const ChangeColumnSecLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeColumnSecLevelWithOptions(request, runtime);
}

/**
 * @summary Changes the security level of a column.
 *
 * @param request ChangeColumnSecurityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeColumnSecurityLevelResponse
 */
ChangeColumnSecurityLevelResponse Client::changeColumnSecurityLevelWithOptions(const ChangeColumnSecurityLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasIsLogic()) {
    query["IsLogic"] = request.getIsLogic();
  }

  if (!!request.hasNewSensitivityLevel()) {
    query["NewSensitivityLevel"] = request.getNewSensitivityLevel();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeColumnSecurityLevel"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeColumnSecurityLevelResponse>();
}

/**
 * @summary Changes the security level of a column.
 *
 * @param request ChangeColumnSecurityLevelRequest
 * @return ChangeColumnSecurityLevelResponse
 */
ChangeColumnSecurityLevelResponse Client::changeColumnSecurityLevel(const ChangeColumnSecurityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeColumnSecurityLevelWithOptions(request, runtime);
}

/**
 * @summary 移交数仓开发任务流
 *
 * @description Usage notes:
 * *   If you call this operation to transfer the ownership of a published task flow, the ownership transfer does not take effect.
 * *   You can call the [ReDeployLhDagVersion](https://help.aliyun.com/document_detail/424712.html) operation to redeploy a published version of a task flow.
 *
 * @param request ChangeLhDagOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeLhDagOwnerResponse
 */
ChangeLhDagOwnerResponse Client::changeLhDagOwnerWithOptions(const ChangeLhDagOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeLhDagOwner"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeLhDagOwnerResponse>();
}

/**
 * @summary 移交数仓开发任务流
 *
 * @description Usage notes:
 * *   If you call this operation to transfer the ownership of a published task flow, the ownership transfer does not take effect.
 * *   You can call the [ReDeployLhDagVersion](https://help.aliyun.com/document_detail/424712.html) operation to redeploy a published version of a task flow.
 *
 * @param request ChangeLhDagOwnerRequest
 * @return ChangeLhDagOwnerResponse
 */
ChangeLhDagOwnerResponse Client::changeLhDagOwner(const ChangeLhDagOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeLhDagOwnerWithOptions(request, runtime);
}

/**
 * @summary Chat API with DMS Data Masking capabilities.
 *
 * @description Chat API with DMS Data Masking capabilities.
 *
 * @param tmpReq ChatWithDesensitizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithDesensitizeResponse
 */
ChatWithDesensitizeResponse Client::chatWithDesensitizeWithOptions(const ChatWithDesensitizeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithDesensitizeShrinkRequest request = ChatWithDesensitizeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  if (!!tmpReq.hasModalitiesList()) {
    request.setModalitiesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModalitiesList(), "ModalitiesList", "json"));
  }

  if (!!tmpReq.hasSearchOptions()) {
    request.setSearchOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchOptions(), "SearchOptions", "json"));
  }

  if (!!tmpReq.hasStop()) {
    request.setStopShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStop(), "Stop", "json"));
  }

  json query = {};
  if (!!request.hasAudioJson()) {
    query["AudioJson"] = request.getAudioJson();
  }

  if (!!request.hasDesensitizationRule()) {
    query["DesensitizationRule"] = request.getDesensitizationRule();
  }

  if (!!request.hasEnableCodeInterpreter()) {
    query["EnableCodeInterpreter"] = request.getEnableCodeInterpreter();
  }

  if (!!request.hasEnableSearch()) {
    query["EnableSearch"] = request.getEnableSearch();
  }

  if (!!request.hasEnableThinking()) {
    query["EnableThinking"] = request.getEnableThinking();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogprobs()) {
    query["Logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxTokens()) {
    query["MaxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasModalitiesListShrink()) {
    query["ModalitiesList"] = request.getModalitiesListShrink();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNeedDesensitization()) {
    query["NeedDesensitization"] = request.getNeedDesensitization();
  }

  if (!!request.hasPresencePenalty()) {
    query["PresencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasResponseFormat()) {
    query["ResponseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSearchOptionsShrink()) {
    query["SearchOptions"] = request.getSearchOptionsShrink();
  }

  if (!!request.hasSeed()) {
    query["Seed"] = request.getSeed();
  }

  if (!!request.hasStopShrink()) {
    query["Stop"] = request.getStopShrink();
  }

  if (!!request.hasTemperature()) {
    query["Temperature"] = request.getTemperature();
  }

  if (!!request.hasThinkingBudget()) {
    query["ThinkingBudget"] = request.getThinkingBudget();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    query["TopLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    query["TopP"] = request.getTopP();
  }

  if (!!request.hasVlHighResolutionImages()) {
    query["VlHighResolutionImages"] = request.getVlHighResolutionImages();
  }

  if (!!request.hasXDashScopeDataInspection()) {
    query["XDashScopeDataInspection"] = request.getXDashScopeDataInspection();
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatWithDesensitize"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatWithDesensitizeResponse>();
}

/**
 * @summary Chat API with DMS Data Masking capabilities.
 *
 * @description Chat API with DMS Data Masking capabilities.
 *
 * @param request ChatWithDesensitizeRequest
 * @return ChatWithDesensitizeResponse
 */
ChatWithDesensitizeResponse Client::chatWithDesensitize(const ChatWithDesensitizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithDesensitizeWithOptions(request, runtime);
}

/**
 * @summary Chat SSE API with DMS Data Masking capability.
 *
 * @description Chat SSE API with DMS Data Masking capability.
 *
 * @param tmpReq ChatWithDesensitizeSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithDesensitizeSSEResponse
 */
FutureGenerator<ChatWithDesensitizeSSEResponse> Client::chatWithDesensitizeSSEWithSSE(const ChatWithDesensitizeSSERequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithDesensitizeSSEShrinkRequest request = ChatWithDesensitizeSSEShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  if (!!tmpReq.hasModalitiesList()) {
    request.setModalitiesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModalitiesList(), "ModalitiesList", "json"));
  }

  if (!!tmpReq.hasSearchOptions()) {
    request.setSearchOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchOptions(), "SearchOptions", "json"));
  }

  if (!!tmpReq.hasStop()) {
    request.setStopShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStop(), "Stop", "json"));
  }

  json query = {};
  if (!!request.hasAudioJson()) {
    query["AudioJson"] = request.getAudioJson();
  }

  if (!!request.hasDesensitizationRule()) {
    query["DesensitizationRule"] = request.getDesensitizationRule();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEnableCodeInterpreter()) {
    query["EnableCodeInterpreter"] = request.getEnableCodeInterpreter();
  }

  if (!!request.hasEnableSearch()) {
    query["EnableSearch"] = request.getEnableSearch();
  }

  if (!!request.hasEnableThinking()) {
    query["EnableThinking"] = request.getEnableThinking();
  }

  if (!!request.hasIncludeUsage()) {
    query["IncludeUsage"] = request.getIncludeUsage();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogprobs()) {
    query["Logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxTokens()) {
    query["MaxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasModalitiesListShrink()) {
    query["ModalitiesList"] = request.getModalitiesListShrink();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNeedDesensitization()) {
    query["NeedDesensitization"] = request.getNeedDesensitization();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPresencePenalty()) {
    query["PresencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasResponseFormat()) {
    query["ResponseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSearchOptionsShrink()) {
    query["SearchOptions"] = request.getSearchOptionsShrink();
  }

  if (!!request.hasSeed()) {
    query["Seed"] = request.getSeed();
  }

  if (!!request.hasStopShrink()) {
    query["Stop"] = request.getStopShrink();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.getStream();
  }

  if (!!request.hasTemperature()) {
    query["Temperature"] = request.getTemperature();
  }

  if (!!request.hasThinkingBudget()) {
    query["ThinkingBudget"] = request.getThinkingBudget();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    query["TopLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    query["TopP"] = request.getTopP();
  }

  if (!!request.hasVlHighResolutionImages()) {
    query["VlHighResolutionImages"] = request.getVlHighResolutionImages();
  }

  if (!!request.hasXDashScopeDataInspection()) {
    query["XDashScopeDataInspection"] = request.getXDashScopeDataInspection();
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatWithDesensitizeSSE"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<ChatWithDesensitizeSSEResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary Chat SSE API with DMS Data Masking capability.
 *
 * @description Chat SSE API with DMS Data Masking capability.
 *
 * @param tmpReq ChatWithDesensitizeSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithDesensitizeSSEResponse
 */
ChatWithDesensitizeSSEResponse Client::chatWithDesensitizeSSEWithOptions(const ChatWithDesensitizeSSERequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithDesensitizeSSEShrinkRequest request = ChatWithDesensitizeSSEShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  if (!!tmpReq.hasModalitiesList()) {
    request.setModalitiesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModalitiesList(), "ModalitiesList", "json"));
  }

  if (!!tmpReq.hasSearchOptions()) {
    request.setSearchOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchOptions(), "SearchOptions", "json"));
  }

  if (!!tmpReq.hasStop()) {
    request.setStopShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStop(), "Stop", "json"));
  }

  json query = {};
  if (!!request.hasAudioJson()) {
    query["AudioJson"] = request.getAudioJson();
  }

  if (!!request.hasDesensitizationRule()) {
    query["DesensitizationRule"] = request.getDesensitizationRule();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEnableCodeInterpreter()) {
    query["EnableCodeInterpreter"] = request.getEnableCodeInterpreter();
  }

  if (!!request.hasEnableSearch()) {
    query["EnableSearch"] = request.getEnableSearch();
  }

  if (!!request.hasEnableThinking()) {
    query["EnableThinking"] = request.getEnableThinking();
  }

  if (!!request.hasIncludeUsage()) {
    query["IncludeUsage"] = request.getIncludeUsage();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogprobs()) {
    query["Logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxTokens()) {
    query["MaxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasModalitiesListShrink()) {
    query["ModalitiesList"] = request.getModalitiesListShrink();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNeedDesensitization()) {
    query["NeedDesensitization"] = request.getNeedDesensitization();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPresencePenalty()) {
    query["PresencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasResponseFormat()) {
    query["ResponseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSearchOptionsShrink()) {
    query["SearchOptions"] = request.getSearchOptionsShrink();
  }

  if (!!request.hasSeed()) {
    query["Seed"] = request.getSeed();
  }

  if (!!request.hasStopShrink()) {
    query["Stop"] = request.getStopShrink();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.getStream();
  }

  if (!!request.hasTemperature()) {
    query["Temperature"] = request.getTemperature();
  }

  if (!!request.hasThinkingBudget()) {
    query["ThinkingBudget"] = request.getThinkingBudget();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    query["TopLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    query["TopP"] = request.getTopP();
  }

  if (!!request.hasVlHighResolutionImages()) {
    query["VlHighResolutionImages"] = request.getVlHighResolutionImages();
  }

  if (!!request.hasXDashScopeDataInspection()) {
    query["XDashScopeDataInspection"] = request.getXDashScopeDataInspection();
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatWithDesensitizeSSE"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatWithDesensitizeSSEResponse>();
}

/**
 * @summary Chat SSE API with DMS Data Masking capability.
 *
 * @description Chat SSE API with DMS Data Masking capability.
 *
 * @param request ChatWithDesensitizeSSERequest
 * @return ChatWithDesensitizeSSEResponse
 */
ChatWithDesensitizeSSEResponse Client::chatWithDesensitizeSSE(const ChatWithDesensitizeSSERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithDesensitizeSSEWithOptions(request, runtime);
}

/**
 * @summary Batch verify table permissions.
 *
 * @description Verify the permissions on multiple tables at a time.
 *
 * @param tmpReq CheckBatchTableAccessPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckBatchTableAccessPermissionResponse
 */
CheckBatchTableAccessPermissionResponse Client::checkBatchTableAccessPermissionWithOptions(const CheckBatchTableAccessPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckBatchTableAccessPermissionShrinkRequest request = CheckBatchTableAccessPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableNameList()) {
    request.setTableNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableNameList(), "TableNameList", "json"));
  }

  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPermissionType()) {
    query["PermissionType"] = request.getPermissionType();
  }

  if (!!request.hasTableNameListShrink()) {
    query["TableNameList"] = request.getTableNameListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckBatchTableAccessPermission"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckBatchTableAccessPermissionResponse>();
}

/**
 * @summary Batch verify table permissions.
 *
 * @description Verify the permissions on multiple tables at a time.
 *
 * @param request CheckBatchTableAccessPermissionRequest
 * @return CheckBatchTableAccessPermissionResponse
 */
CheckBatchTableAccessPermissionResponse Client::checkBatchTableAccessPermission(const CheckBatchTableAccessPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkBatchTableAccessPermissionWithOptions(request, runtime);
}

/**
 * @summary Closes a ticket.
 *
 * @param request CloseOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseOrderResponse
 */
CloseOrderResponse Client::closeOrderWithOptions(const CloseOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloseReason()) {
    query["CloseReason"] = request.getCloseReason();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseOrderResponse>();
}

/**
 * @summary Closes a ticket.
 *
 * @param request CloseOrderRequest
 * @return CloseOrderResponse
 */
CloseOrderResponse Client::closeOrder(const CloseOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeOrderWithOptions(request, runtime);
}

/**
 * @summary Attaches a system policy or custom policy to a DMS user or custom role.
 *
 * @param request CreateAbacAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAbacAuthorizationResponse
 */
CreateAbacAuthorizationResponse Client::createAbacAuthorizationWithOptions(const CreateAbacAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAbacAuthorization"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAbacAuthorizationResponse>();
}

/**
 * @summary Attaches a system policy or custom policy to a DMS user or custom role.
 *
 * @param request CreateAbacAuthorizationRequest
 * @return CreateAbacAuthorizationResponse
 */
CreateAbacAuthorizationResponse Client::createAbacAuthorization(const CreateAbacAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAbacAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Creates a policy to manage the permissions on DMS features and data resources managed in DMS in a fine-grained manner.
 *
 * @description Currently, this feature is in the phased release phase. Only users who have phased out can use this feature and related APIs. For more information about the policy feature, see [Manage policies](https://help.aliyun.com/document_detail/2848565.html).
 *
 * @param request CreateAbacPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAbacPolicyResponse
 */
CreateAbacPolicyResponse Client::createAbacPolicyWithOptions(const CreateAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbacPolicyContent()) {
    query["AbacPolicyContent"] = request.getAbacPolicyContent();
  }

  if (!!request.hasAbacPolicyDesc()) {
    query["AbacPolicyDesc"] = request.getAbacPolicyDesc();
  }

  if (!!request.hasAbacPolicyName()) {
    query["AbacPolicyName"] = request.getAbacPolicyName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAbacPolicy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAbacPolicyResponse>();
}

/**
 * @summary Creates a policy to manage the permissions on DMS features and data resources managed in DMS in a fine-grained manner.
 *
 * @description Currently, this feature is in the phased release phase. Only users who have phased out can use this feature and related APIs. For more information about the policy feature, see [Manage policies](https://help.aliyun.com/document_detail/2848565.html).
 *
 * @param request CreateAbacPolicyRequest
 * @return CreateAbacPolicyResponse
 */
CreateAbacPolicyResponse Client::createAbacPolicy(const CreateAbacPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAbacPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a permission template
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request CreateAuthorityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuthorityTemplateResponse
 */
CreateAuthorityTemplateResponse Client::createAuthorityTemplateWithOptions(const CreateAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAuthorityTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAuthorityTemplateResponse>();
}

/**
 * @summary Creates a permission template
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request CreateAuthorityTemplateRequest
 * @return CreateAuthorityTemplateResponse
 */
CreateAuthorityTemplateResponse Client::createAuthorityTemplate(const CreateAuthorityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuthorityTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a data archiving ticket to archive data to destinations such as dedicated storage space or ApsaraDB RDS for MySQL instances.
 *
 * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param tmpReq CreateDataArchiveOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataArchiveOrderResponse
 */
CreateDataArchiveOrderResponse Client::createDataArchiveOrderWithOptions(const CreateDataArchiveOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataArchiveOrderShrinkRequest request = CreateDataArchiveOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataArchiveOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataArchiveOrderResponse>();
}

/**
 * @summary Creates a data archiving ticket to archive data to destinations such as dedicated storage space or ApsaraDB RDS for MySQL instances.
 *
 * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request CreateDataArchiveOrderRequest
 * @return CreateDataArchiveOrderResponse
 */
CreateDataArchiveOrderResponse Client::createDataArchiveOrder(const CreateDataArchiveOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataArchiveOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket for changing data in Data Management (DMS).
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param tmpReq CreateDataCorrectOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataCorrectOrderResponse
 */
CreateDataCorrectOrderResponse Client::createDataCorrectOrderWithOptions(const CreateDataCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataCorrectOrderShrinkRequest request = CreateDataCorrectOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataCorrectOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataCorrectOrderResponse>();
}

/**
 * @summary Creates a ticket for changing data in Data Management (DMS).
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param request CreateDataCorrectOrderRequest
 * @return CreateDataCorrectOrderResponse
 */
CreateDataCorrectOrderResponse Client::createDataCorrectOrder(const CreateDataCorrectOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataCorrectOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket for clearing historical data.
 *
 * @description For more information about the historical data cleaning, see [Clear historical data](https://help.aliyun.com/document_detail/162507.html).
 * This operation can be used only for MySQL databases.
 *
 * @param tmpReq CreateDataCronClearOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataCronClearOrderResponse
 */
CreateDataCronClearOrderResponse Client::createDataCronClearOrderWithOptions(const CreateDataCronClearOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataCronClearOrderShrinkRequest request = CreateDataCronClearOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataCronClearOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataCronClearOrderResponse>();
}

/**
 * @summary Creates a ticket for clearing historical data.
 *
 * @description For more information about the historical data cleaning, see [Clear historical data](https://help.aliyun.com/document_detail/162507.html).
 * This operation can be used only for MySQL databases.
 *
 * @param request CreateDataCronClearOrderRequest
 * @return CreateDataCronClearOrderResponse
 */
CreateDataCronClearOrderResponse Client::createDataCronClearOrder(const CreateDataCronClearOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataCronClearOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket to export an SQL result set.
 *
 * @param tmpReq CreateDataExportOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataExportOrderResponse
 */
CreateDataExportOrderResponse Client::createDataExportOrderWithOptions(const CreateDataExportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataExportOrderShrinkRequest request = CreateDataExportOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPluginParam()) {
    request.setPluginParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPluginParam(), "PluginParam", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPluginParamShrink()) {
    query["PluginParam"] = request.getPluginParamShrink();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataExportOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataExportOrderResponse>();
}

/**
 * @summary Creates a ticket to export an SQL result set.
 *
 * @param request CreateDataExportOrderRequest
 * @return CreateDataExportOrderResponse
 */
CreateDataExportOrderResponse Client::createDataExportOrder(const CreateDataExportOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataExportOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket for importing data to Data Management (DMS).
 *
 * @description For more information about the Large Data Import feature, see [Import data](https://help.aliyun.com/document_detail/161439.html).
 *
 * @param tmpReq CreateDataImportOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataImportOrderResponse
 */
CreateDataImportOrderResponse Client::createDataImportOrderWithOptions(const CreateDataImportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataImportOrderShrinkRequest request = CreateDataImportOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataImportOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataImportOrderResponse>();
}

/**
 * @summary Creates a ticket for importing data to Data Management (DMS).
 *
 * @description For more information about the Large Data Import feature, see [Import data](https://help.aliyun.com/document_detail/161439.html).
 *
 * @param request CreateDataImportOrderRequest
 * @return CreateDataImportOrderResponse
 */
CreateDataImportOrderResponse Client::createDataImportOrder(const CreateDataImportOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataImportOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a database in a data lakehouse.
 *
 * @param tmpReq CreateDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeDatabaseResponse
 */
CreateDataLakeDatabaseResponse Client::createDataLakeDatabaseWithOptions(const CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeDatabaseShrinkRequest request = CreateDataLakeDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataLakeDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeDatabaseResponse>();
}

/**
 * @summary Creates a database in a data lakehouse.
 *
 * @param request CreateDataLakeDatabaseRequest
 * @return CreateDataLakeDatabaseResponse
 */
CreateDataLakeDatabaseResponse Client::createDataLakeDatabase(const CreateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Creates a custom function in a data lakehouse.
 *
 * @param tmpReq CreateDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeFunctionResponse
 */
CreateDataLakeFunctionResponse Client::createDataLakeFunctionWithOptions(const CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeFunctionShrinkRequest request = CreateDataLakeFunctionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFunctionInput()) {
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFunctionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.getFunctionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakeFunction"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeFunctionResponse>();
}

/**
 * @summary Creates a custom function in a data lakehouse.
 *
 * @param request CreateDataLakeFunctionRequest
 * @return CreateDataLakeFunctionResponse
 */
CreateDataLakeFunctionResponse Client::createDataLakeFunction(const CreateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Creates a partition for a table in a data lakehouse.
 *
 * @param tmpReq CreateDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakePartitionResponse
 */
CreateDataLakePartitionResponse Client::createDataLakePartitionWithOptions(const CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakePartitionShrinkRequest request = CreateDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInput()) {
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.getIfNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.getNeedResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.getPartitionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakePartition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakePartitionResponse>();
}

/**
 * @summary Creates a partition for a table in a data lakehouse.
 *
 * @param request CreateDataLakePartitionRequest
 * @return CreateDataLakePartitionResponse
 */
CreateDataLakePartitionResponse Client::createDataLakePartition(const CreateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Creates a table in a data lakehouse.
 *
 * @param tmpReq CreateDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeTableResponse
 */
CreateDataLakeTableResponse Client::createDataLakeTableWithOptions(const CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeTableShrinkRequest request = CreateDataLakeTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableInput()) {
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.getTableInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakeTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeTableResponse>();
}

/**
 * @summary Creates a table in a data lakehouse.
 *
 * @param request CreateDataLakeTableRequest
 * @return CreateDataLakeTableResponse
 */
CreateDataLakeTableResponse Client::createDataLakeTable(const CreateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Creates a data tracking ticket.
 *
 * @description This operation is available only for instances that are managed in Security Collaboration mode.
 *
 * @param tmpReq CreateDataTrackOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataTrackOrderResponse
 */
CreateDataTrackOrderResponse Client::createDataTrackOrderWithOptions(const CreateDataTrackOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataTrackOrderShrinkRequest request = CreateDataTrackOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataTrackOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataTrackOrderResponse>();
}

/**
 * @summary Creates a data tracking ticket.
 *
 * @description This operation is available only for instances that are managed in Security Collaboration mode.
 *
 * @param request CreateDataTrackOrderRequest
 * @return CreateDataTrackOrderResponse
 */
CreateDataTrackOrderResponse Client::createDataTrackOrder(const CreateDataTrackOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataTrackOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a database export ticket.
 *
 * @param tmpReq CreateDatabaseExportOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseExportOrderResponse
 */
CreateDatabaseExportOrderResponse Client::createDatabaseExportOrderWithOptions(const CreateDatabaseExportOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatabaseExportOrderShrinkRequest request = CreateDatabaseExportOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPluginParam()) {
    request.setPluginParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPluginParam(), "PluginParam", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPluginParamShrink()) {
    query["PluginParam"] = request.getPluginParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabaseExportOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseExportOrderResponse>();
}

/**
 * @summary Creates a database export ticket.
 *
 * @param request CreateDatabaseExportOrderRequest
 * @return CreateDatabaseExportOrderResponse
 */
CreateDatabaseExportOrderResponse Client::createDatabaseExportOrder(const CreateDatabaseExportOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseExportOrderWithOptions(request, runtime);
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request CreateDifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDifyInstanceResponse
 */
CreateDifyInstanceResponse Client::createDifyInstanceWithOptions(const CreateDifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdbpgInstanceMode()) {
    query["AdbpgInstanceMode"] = request.getAdbpgInstanceMode();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBackupVSwitchId()) {
    query["BackupVSwitchId"] = request.getBackupVSwitchId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDatabaseOption()) {
    query["DatabaseOption"] = request.getDatabaseOption();
  }

  if (!!request.hasDbEngineType()) {
    query["DbEngineType"] = request.getDbEngineType();
  }

  if (!!request.hasDbEngineVersion()) {
    query["DbEngineVersion"] = request.getDbEngineVersion();
  }

  if (!!request.hasDbInstanceAccount()) {
    query["DbInstanceAccount"] = request.getDbInstanceAccount();
  }

  if (!!request.hasDbInstanceCategory()) {
    query["DbInstanceCategory"] = request.getDbInstanceCategory();
  }

  if (!!request.hasDbInstanceClass()) {
    query["DbInstanceClass"] = request.getDbInstanceClass();
  }

  if (!!request.hasDbInstancePassword()) {
    query["DbInstancePassword"] = request.getDbInstancePassword();
  }

  if (!!request.hasDbResourceId()) {
    query["DbResourceId"] = request.getDbResourceId();
  }

  if (!!request.hasDbStorageSize()) {
    query["DbStorageSize"] = request.getDbStorageSize();
  }

  if (!!request.hasDbStorageType()) {
    query["DbStorageType"] = request.getDbStorageType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.getEdition();
  }

  if (!!request.hasEnableExtraEndpoint()) {
    query["EnableExtraEndpoint"] = request.getEnableExtraEndpoint();
  }

  if (!!request.hasGpuNodeSpec()) {
    query["GpuNodeSpec"] = request.getGpuNodeSpec();
  }

  if (!!request.hasKvStoreAccount()) {
    query["KvStoreAccount"] = request.getKvStoreAccount();
  }

  if (!!request.hasKvStoreEngineVersion()) {
    query["KvStoreEngineVersion"] = request.getKvStoreEngineVersion();
  }

  if (!!request.hasKvStoreInstanceClass()) {
    query["KvStoreInstanceClass"] = request.getKvStoreInstanceClass();
  }

  if (!!request.hasKvStoreNodeType()) {
    query["KvStoreNodeType"] = request.getKvStoreNodeType();
  }

  if (!!request.hasKvStoreOption()) {
    query["KvStoreOption"] = request.getKvStoreOption();
  }

  if (!!request.hasKvStorePassword()) {
    query["KvStorePassword"] = request.getKvStorePassword();
  }

  if (!!request.hasKvStoreResourceId()) {
    query["KvStoreResourceId"] = request.getKvStoreResourceId();
  }

  if (!!request.hasKvStoreType()) {
    query["KvStoreType"] = request.getKvStoreType();
  }

  if (!!request.hasMajorVersion()) {
    query["MajorVersion"] = request.getMajorVersion();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasModelOption()) {
    query["ModelOption"] = request.getModelOption();
  }

  if (!!request.hasNatGatewayOption()) {
    query["NatGatewayOption"] = request.getNatGatewayOption();
  }

  if (!!request.hasOnlyIntranet()) {
    query["OnlyIntranet"] = request.getOnlyIntranet();
  }

  if (!!request.hasOssPath()) {
    query["OssPath"] = request.getOssPath();
  }

  if (!!request.hasOssResourceId()) {
    query["OssResourceId"] = request.getOssResourceId();
  }

  if (!!request.hasPayPeriod()) {
    query["PayPeriod"] = request.getPayPeriod();
  }

  if (!!request.hasPayPeriodType()) {
    query["PayPeriodType"] = request.getPayPeriodType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasResourceQuota()) {
    query["ResourceQuota"] = request.getResourceQuota();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSegDiskPerformanceLevel()) {
    query["SegDiskPerformanceLevel"] = request.getSegDiskPerformanceLevel();
  }

  if (!!request.hasSegNodeNum()) {
    query["SegNodeNum"] = request.getSegNodeNum();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVectordbAccount()) {
    query["VectordbAccount"] = request.getVectordbAccount();
  }

  if (!!request.hasVectordbCategory()) {
    query["VectordbCategory"] = request.getVectordbCategory();
  }

  if (!!request.hasVectordbEngineVersion()) {
    query["VectordbEngineVersion"] = request.getVectordbEngineVersion();
  }

  if (!!request.hasVectordbInstanceSpec()) {
    query["VectordbInstanceSpec"] = request.getVectordbInstanceSpec();
  }

  if (!!request.hasVectordbOption()) {
    query["VectordbOption"] = request.getVectordbOption();
  }

  if (!!request.hasVectordbPassword()) {
    query["VectordbPassword"] = request.getVectordbPassword();
  }

  if (!!request.hasVectordbResourceId()) {
    query["VectordbResourceId"] = request.getVectordbResourceId();
  }

  if (!!request.hasVectordbStorageSize()) {
    query["VectordbStorageSize"] = request.getVectordbStorageSize();
  }

  if (!!request.hasVectordbStorageType()) {
    query["VectordbStorageType"] = request.getVectordbStorageType();
  }

  if (!!request.hasVectordbType()) {
    query["VectordbType"] = request.getVectordbType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkspaceDescription()) {
    query["WorkspaceDescription"] = request.getWorkspaceDescription();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  if (!!request.hasWorkspaceOption()) {
    query["WorkspaceOption"] = request.getWorkspaceOption();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDifyInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDifyInstanceResponse>();
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request CreateDifyInstanceRequest
 * @return CreateDifyInstanceResponse
 */
CreateDifyInstanceResponse Client::createDifyInstance(const CreateDifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDifyInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建无锁变更工单
 *
 * @description For more information about the lock-free change feature, see [Overview](https://help.aliyun.com/document_detail/207847.html).
 * This operation can be used only for instances that are managed in Stable Change or Security Collaboration mode. For more information, see [Change data without the need to lock tables](https://help.aliyun.com/document_detail/96145.html) and [Change schemas without locking tables](https://help.aliyun.com/document_detail/98373.html).
 *
 * @param tmpReq CreateFreeLockCorrectOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFreeLockCorrectOrderResponse
 */
CreateFreeLockCorrectOrderResponse Client::createFreeLockCorrectOrderWithOptions(const CreateFreeLockCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFreeLockCorrectOrderShrinkRequest request = CreateFreeLockCorrectOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFreeLockCorrectOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFreeLockCorrectOrderResponse>();
}

/**
 * @summary 创建无锁变更工单
 *
 * @description For more information about the lock-free change feature, see [Overview](https://help.aliyun.com/document_detail/207847.html).
 * This operation can be used only for instances that are managed in Stable Change or Security Collaboration mode. For more information, see [Change data without the need to lock tables](https://help.aliyun.com/document_detail/96145.html) and [Change schemas without locking tables](https://help.aliyun.com/document_detail/98373.html).
 *
 * @param request CreateFreeLockCorrectOrderRequest
 * @return CreateFreeLockCorrectOrderResponse
 */
CreateFreeLockCorrectOrderResponse Client::createFreeLockCorrectOrder(const CreateFreeLockCorrectOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFreeLockCorrectOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace for data warehouse development in Data Management (DMS).
 *
 * @description *   The workspace name must be unique within a tenant. If a workspace with the same name already exists within the tenant, the call may fail.
 * *   You can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to query whether a workspace with a specific name already exists as a DMS administrator or database administrator (DBA).
 *
 * @param request CreateLakeHouseSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLakeHouseSpaceResponse
 */
CreateLakeHouseSpaceResponse Client::createLakeHouseSpaceWithOptions(const CreateLakeHouseSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDevDbId()) {
    query["DevDbId"] = request.getDevDbId();
  }

  if (!!request.hasDwDbType()) {
    query["DwDbType"] = request.getDwDbType();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasProdDbId()) {
    query["ProdDbId"] = request.getProdDbId();
  }

  if (!!request.hasSpaceConfig()) {
    query["SpaceConfig"] = request.getSpaceConfig();
  }

  if (!!request.hasSpaceName()) {
    query["SpaceName"] = request.getSpaceName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLakeHouseSpace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLakeHouseSpaceResponse>();
}

/**
 * @summary Creates a workspace for data warehouse development in Data Management (DMS).
 *
 * @description *   The workspace name must be unique within a tenant. If a workspace with the same name already exists within the tenant, the call may fail.
 * *   You can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to query whether a workspace with a specific name already exists as a DMS administrator or database administrator (DBA).
 *
 * @param request CreateLakeHouseSpaceRequest
 * @return CreateLakeHouseSpaceResponse
 */
CreateLakeHouseSpaceResponse Client::createLakeHouseSpace(const CreateLakeHouseSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLakeHouseSpaceWithOptions(request, runtime);
}

/**
 * @summary Creates a logical database in Database Management (DMS).
 *
 * @param tmpReq CreateLogicDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogicDatabaseResponse
 */
CreateLogicDatabaseResponse Client::createLogicDatabaseWithOptions(const CreateLogicDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLogicDatabaseShrinkRequest request = CreateLogicDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatabaseIds()) {
    request.setDatabaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatabaseIds(), "DatabaseIds", "json"));
  }

  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasDatabaseIdsShrink()) {
    query["DatabaseIds"] = request.getDatabaseIdsShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogicDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogicDatabaseResponse>();
}

/**
 * @summary Creates a logical database in Database Management (DMS).
 *
 * @param request CreateLogicDatabaseRequest
 * @return CreateLogicDatabaseResponse
 */
CreateLogicDatabaseResponse Client::createLogicDatabase(const CreateLogicDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogicDatabaseWithOptions(request, runtime);
}

/**
 * @summary Create Asset Category
 *
 * @param tmpReq CreateMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaCategoryResponse
 */
CreateMetaCategoryResponse Client::createMetaCategoryWithOptions(const CreateMetaCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMetaCategoryShrinkRequest request = CreateMetaCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOwnerIds()) {
    request.setOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOwnerIds(), "OwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerIdsShrink()) {
    query["OwnerIds"] = request.getOwnerIdsShrink();
  }

  if (!!request.hasParentCategoryId()) {
    query["ParentCategoryId"] = request.getParentCategoryId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetaCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetaCategoryResponse>();
}

/**
 * @summary Create Asset Category
 *
 * @param request CreateMetaCategoryRequest
 * @return CreateMetaCategoryResponse
 */
CreateMetaCategoryResponse Client::createMetaCategory(const CreateMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket in Data Management (DMS).
 *
 * @description To facilitate ticket creation, you can call the following dedicated operations to create some types of tickets:
 * *   [CreateDataCorrectOrder](https://help.aliyun.com/document_detail/208388.html): creates a regular data change ticket.
 * *   [CreateDataCronClearOrder](https://help.aliyun.com/document_detail/208385.html): creates a ticket to clear historical data.
 * *   [CreateDataImportOrder](https://help.aliyun.com/document_detail/208387.html): creates a data import ticket.
 * *   [CreateFreeLockCorrectOrder](https://help.aliyun.com/document_detail/208386.html): creates a lock-free change ticket.
 *
 * @param tmpReq CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrderShrinkRequest request = CreateOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPluginParam()) {
    request.setPluginParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPluginParam(), "PluginParam", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRelatedUserList()) {
    query["RelatedUserList"] = request.getRelatedUserList();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  json body = {};
  if (!!request.hasPluginParamShrink()) {
    body["PluginParam"] = request.getPluginParamShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderResponse>();
}

/**
 * @summary Creates a ticket in Data Management (DMS).
 *
 * @description To facilitate ticket creation, you can call the following dedicated operations to create some types of tickets:
 * *   [CreateDataCorrectOrder](https://help.aliyun.com/document_detail/208388.html): creates a regular data change ticket.
 * *   [CreateDataCronClearOrder](https://help.aliyun.com/document_detail/208385.html): creates a ticket to clear historical data.
 * *   [CreateDataImportOrder](https://help.aliyun.com/document_detail/208387.html): creates a data import ticket.
 * *   [CreateFreeLockCorrectOrder](https://help.aliyun.com/document_detail/208386.html): creates a lock-free change ticket.
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a programmable object ticket.
 *
 * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param tmpReq CreateProcCorrectOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProcCorrectOrderResponse
 */
CreateProcCorrectOrderResponse Client::createProcCorrectOrderWithOptions(const CreateProcCorrectOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProcCorrectOrderShrinkRequest request = CreateProcCorrectOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProcCorrectOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProcCorrectOrderResponse>();
}

/**
 * @summary Creates a programmable object ticket.
 *
 * @description You can call this API operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request CreateProcCorrectOrderRequest
 * @return CreateProcCorrectOrderResponse
 */
CreateProcCorrectOrderResponse Client::createProcCorrectOrder(const CreateProcCorrectOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProcCorrectOrderWithOptions(request, runtime);
}

/**
 * @summary Enables the secure access proxy feature for a database instance.
 *
 * @description - The database instance runs the MySQL or MariaDB database engine. For example, the database instance can be an ApsaraDB RDS for MySQL instance, a PolarDB for MySQL cluster, a Distributed Relational Database Service (DRDS) cluster, or an AnalyticDB for MySQL cluster. The database instance can also be a self-managed MySQL or MariaDB database, or a MySQL or MariaDB database in a third-party cloud.
 * - The database instance resides in the China (Hangzhou) or China (Beijing) region.
 * - You are a Data Management (DMS) administrator, a database administrator (DBA), or the owner of the database instance.
 *
 * @param request CreateProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProxyResponse
 */
CreateProxyResponse Client::createProxyWithOptions(const CreateProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProxy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProxyResponse>();
}

/**
 * @summary Enables the secure access proxy feature for a database instance.
 *
 * @description - The database instance runs the MySQL or MariaDB database engine. For example, the database instance can be an ApsaraDB RDS for MySQL instance, a PolarDB for MySQL cluster, a Distributed Relational Database Service (DRDS) cluster, or an AnalyticDB for MySQL cluster. The database instance can also be a self-managed MySQL or MariaDB database, or a MySQL or MariaDB database in a third-party cloud.
 * - The database instance resides in the China (Hangzhou) or China (Beijing) region.
 * - You are a Data Management (DMS) administrator, a database administrator (DBA), or the owner of the database instance.
 *
 * @param request CreateProxyRequest
 * @return CreateProxyResponse
 */
CreateProxyResponse Client::createProxy(const CreateProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProxyWithOptions(request, runtime);
}

/**
 * @summary You can call the CreateProxyAccess to authorize users to access the DB instance through the Data Security Protection agent.
 *
 * @description - The data security protection feature is enabled for the instance.
 * - Your user role is the administrator role, DBA role, or the owner of data security protection for the current instance.
 *
 * @param request CreateProxyAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProxyAccessResponse
 */
CreateProxyAccessResponse Client::createProxyAccessWithOptions(const CreateProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndepAccount()) {
    query["IndepAccount"] = request.getIndepAccount();
  }

  if (!!request.hasIndepPassword()) {
    query["IndepPassword"] = request.getIndepPassword();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProxyAccess"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProxyAccessResponse>();
}

/**
 * @summary You can call the CreateProxyAccess to authorize users to access the DB instance through the Data Security Protection agent.
 *
 * @description - The data security protection feature is enabled for the instance.
 * - Your user role is the administrator role, DBA role, or the owner of data security protection for the current instance.
 *
 * @param request CreateProxyAccessRequest
 * @return CreateProxyAccessResponse
 */
CreateProxyAccessResponse Client::createProxyAccess(const CreateProxyAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProxyAccessWithOptions(request, runtime);
}

/**
 * @summary Executes a schema design ticket.
 *
 * @param request CreatePublishGroupTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePublishGroupTaskResponse
 */
CreatePublishGroupTaskResponse Client::createPublishGroupTaskWithOptions(const CreatePublishGroupTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPlanTime()) {
    query["PlanTime"] = request.getPlanTime();
  }

  if (!!request.hasPublishStrategy()) {
    query["PublishStrategy"] = request.getPublishStrategy();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePublishGroupTask"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePublishGroupTaskResponse>();
}

/**
 * @summary Executes a schema design ticket.
 *
 * @param request CreatePublishGroupTaskRequest
 * @return CreatePublishGroupTaskResponse
 */
CreatePublishGroupTaskResponse Client::createPublishGroupTask(const CreatePublishGroupTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPublishGroupTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a SQL review ticket.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 * For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param tmpReq CreateSQLReviewOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSQLReviewOrderResponse
 */
CreateSQLReviewOrderResponse Client::createSQLReviewOrderWithOptions(const CreateSQLReviewOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSQLReviewOrderShrinkRequest request = CreateSQLReviewOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSQLReviewOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSQLReviewOrderResponse>();
}

/**
 * @summary Creates a SQL review ticket.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 * For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request CreateSQLReviewOrderRequest
 * @return CreateSQLReviewOrderResponse
 */
CreateSQLReviewOrderResponse Client::createSQLReviewOrder(const CreateSQLReviewOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSQLReviewOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a business scenario to group task flows by business scenario.
 *
 * @param request CreateScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScenarioResponse
 */
CreateScenarioResponse Client::createScenarioWithOptions(const CreateScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasScenarioName()) {
    query["ScenarioName"] = request.getScenarioName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScenario"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScenarioResponse>();
}

/**
 * @summary Creates a business scenario to group task flows by business scenario.
 *
 * @param request CreateScenarioRequest
 * @return CreateScenarioResponse
 */
CreateScenarioResponse Client::createScenario(const CreateScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScenarioWithOptions(request, runtime);
}

/**
 * @summary Creates a security rule set.
 *
 * @param request CreateStandardGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardGroupResponse
 */
CreateStandardGroupResponse Client::createStandardGroupWithOptions(const CreateStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStandardGroup"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardGroupResponse>();
}

/**
 * @summary Creates a security rule set.
 *
 * @param request CreateStandardGroupRequest
 * @return CreateStandardGroupResponse
 */
CreateStandardGroupResponse Client::createStandardGroup(const CreateStandardGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a schema synchronization ticket.
 *
 * @param tmpReq CreateStructSyncOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStructSyncOrderResponse
 */
CreateStructSyncOrderResponse Client::createStructSyncOrderWithOptions(const CreateStructSyncOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStructSyncOrderShrinkRequest request = CreateStructSyncOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  if (!!tmpReq.hasRelatedUserList()) {
    request.setRelatedUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedUserList(), "RelatedUserList", "json"));
  }

  json query = {};
  if (!!request.hasAttachmentKey()) {
    query["AttachmentKey"] = request.getAttachmentKey();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasParamShrink()) {
    query["Param"] = request.getParamShrink();
  }

  if (!!request.hasRelatedUserListShrink()) {
    query["RelatedUserList"] = request.getRelatedUserListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStructSyncOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStructSyncOrderResponse>();
}

/**
 * @summary Creates a schema synchronization ticket.
 *
 * @param request CreateStructSyncOrderRequest
 * @return CreateStructSyncOrderResponse
 */
CreateStructSyncOrderResponse Client::createStructSyncOrder(const CreateStructSyncOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStructSyncOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a task node for a task flow.
 *
 * @param request CreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasGraphParam()) {
    query["GraphParam"] = request.getGraphParam();
  }

  if (!!request.hasNodeContent()) {
    query["NodeContent"] = request.getNodeContent();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
  }

  if (!!request.hasNodeOutput()) {
    query["NodeOutput"] = request.getNodeOutput();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasTimeVariables()) {
    query["TimeVariables"] = request.getTimeVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary Creates a task node for a task flow.
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a task flow.
 *
 * @param request CreateTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskFlowResponse
 */
CreateTaskFlowResponse Client::createTaskFlowWithOptions(const CreateTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagName()) {
    query["DagName"] = request.getDagName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskFlowResponse>();
}

/**
 * @summary Creates a task flow.
 *
 * @param request CreateTaskFlowRequest
 * @return CreateTaskFlowResponse
 */
CreateTaskFlowResponse Client::createTaskFlow(const CreateTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskFlowWithOptions(request, runtime);
}

/**
 * @summary 创建上传附件任务
 *
 * @param request CreateUploadFileJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadFileJobResponse
 */
CreateUploadFileJobResponse Client::createUploadFileJobWithOptions(const CreateUploadFileJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileSource()) {
    query["FileSource"] = request.getFileSource();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUploadURL()) {
    query["UploadURL"] = request.getUploadURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadFileJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadFileJobResponse>();
}

/**
 * @summary 创建上传附件任务
 *
 * @param request CreateUploadFileJobRequest
 * @return CreateUploadFileJobResponse
 */
CreateUploadFileJobResponse Client::createUploadFileJob(const CreateUploadFileJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadFileJobWithOptions(request, runtime);
}

/**
 * @summary Creates a task to upload an Object Storage Service (OSS) file and obtain the key of the task.
 *
 * @param tmpReq CreateUploadOSSFileJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadOSSFileJobResponse
 */
CreateUploadOSSFileJobResponse Client::createUploadOSSFileJobWithOptions(const CreateUploadOSSFileJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUploadOSSFileJobShrinkRequest request = CreateUploadOSSFileJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUploadTarget()) {
    request.setUploadTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUploadTarget(), "UploadTarget", "json"));
  }

  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileSource()) {
    query["FileSource"] = request.getFileSource();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUploadTargetShrink()) {
    query["UploadTarget"] = request.getUploadTargetShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadOSSFileJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadOSSFileJobResponse>();
}

/**
 * @summary Creates a task to upload an Object Storage Service (OSS) file and obtain the key of the task.
 *
 * @param request CreateUploadOSSFileJobRequest
 * @return CreateUploadOSSFileJobResponse
 */
CreateUploadOSSFileJobResponse Client::createUploadOSSFileJob(const CreateUploadOSSFileJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadOSSFileJobWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @description ## [](#)Prerequisites
 * *   A virtual private cloud (VPC) is created.
 * *   Log on to the DMS console by using an Alibaba Cloud account or a RAM user that has high permissions, and grant DMS the permissions to access cloud resources (AliyunDMSProcessingDataRolePolicy).
 *
 * @param request CreateWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @description ## [](#)Prerequisites
 * *   A virtual private cloud (VPC) is created.
 * *   Log on to the DMS console by using an Alibaba Cloud account or a RAM user that has high permissions, and grant DMS the permissions to access cloud resources (AliyunDMSProcessingDataRolePolicy).
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Detaches a policy from a user or role.
 *
 * @param request DeleteAbacAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAbacAuthorizationResponse
 */
DeleteAbacAuthorizationResponse Client::deleteAbacAuthorizationWithOptions(const DeleteAbacAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAbacAuthorization"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAbacAuthorizationResponse>();
}

/**
 * @summary Detaches a policy from a user or role.
 *
 * @param request DeleteAbacAuthorizationRequest
 * @return DeleteAbacAuthorizationResponse
 */
DeleteAbacAuthorizationResponse Client::deleteAbacAuthorization(const DeleteAbacAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAbacAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Deletes a created permission policy.
 *
 * @param request DeleteAbacPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAbacPolicyResponse
 */
DeleteAbacPolicyResponse Client::deleteAbacPolicyWithOptions(const DeleteAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbacPolicyId()) {
    query["AbacPolicyId"] = request.getAbacPolicyId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAbacPolicy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAbacPolicyResponse>();
}

/**
 * @summary Deletes a created permission policy.
 *
 * @param request DeleteAbacPolicyRequest
 * @return DeleteAbacPolicyResponse
 */
DeleteAbacPolicyResponse Client::deleteAbacPolicy(const DeleteAbacPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAbacPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a permission template.
 *
 * @param request DeleteAuthorityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuthorityTemplateResponse
 */
DeleteAuthorityTemplateResponse Client::deleteAuthorityTemplateWithOptions(const DeleteAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAuthorityTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuthorityTemplateResponse>();
}

/**
 * @summary Deletes a permission template.
 *
 * @param request DeleteAuthorityTemplateRequest
 * @return DeleteAuthorityTemplateResponse
 */
DeleteAuthorityTemplateResponse Client::deleteAuthorityTemplate(const DeleteAuthorityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuthorityTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a database from a data lakehouse.
 *
 * @param request DeleteDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeDatabaseResponse
 */
DeleteDataLakeDatabaseResponse Client::deleteDataLakeDatabaseWithOptions(const DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeDatabaseResponse>();
}

/**
 * @summary Deletes a database from a data lakehouse.
 *
 * @param request DeleteDataLakeDatabaseRequest
 * @return DeleteDataLakeDatabaseResponse
 */
DeleteDataLakeDatabaseResponse Client::deleteDataLakeDatabase(const DeleteDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a user-defined function in a data lakehouse.
 *
 * @param request DeleteDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeFunctionResponse
 */
DeleteDataLakeFunctionResponse Client::deleteDataLakeFunctionWithOptions(const DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeFunction"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeFunctionResponse>();
}

/**
 * @summary Deletes a user-defined function in a data lakehouse.
 *
 * @param request DeleteDataLakeFunctionRequest
 * @return DeleteDataLakeFunctionResponse
 */
DeleteDataLakeFunctionResponse Client::deleteDataLakeFunction(const DeleteDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Deletes a partition from a table in a data lakehouse.
 *
 * @param tmpReq DeleteDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakePartitionResponse
 */
DeleteDataLakePartitionResponse Client::deleteDataLakePartitionWithOptions(const DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataLakePartitionShrinkRequest request = DeleteDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionValues()) {
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.getIfExists();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.getPartitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakePartition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakePartitionResponse>();
}

/**
 * @summary Deletes a partition from a table in a data lakehouse.
 *
 * @param request DeleteDataLakePartitionRequest
 * @return DeleteDataLakePartitionResponse
 */
DeleteDataLakePartitionResponse Client::deleteDataLakePartition(const DeleteDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Deletes a table from a data lakehouse.
 *
 * @param request DeleteDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeTableResponse
 */
DeleteDataLakeTableResponse Client::deleteDataLakeTableWithOptions(const DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeTableResponse>();
}

/**
 * @summary Deletes a table from a data lakehouse.
 *
 * @param request DeleteDataLakeTableRequest
 * @return DeleteDataLakeTableResponse
 */
DeleteDataLakeTableResponse Client::deleteDataLakeTable(const DeleteDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Removes a database instance from Data Management (DMS).
 *
 * @description Note: You can call this operation only to remove a database instance from the instance list of DMS. The instance is not deleted or shut down.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Removes a database instance from Data Management (DMS).
 *
 * @description Note: You can call this operation only to remove a database instance from the instance list of DMS. The instance is not deleted or shut down.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteLakeHouseSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLakeHouseSpaceResponse
 */
DeleteLakeHouseSpaceResponse Client::deleteLakeHouseSpaceWithOptions(const DeleteLakeHouseSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceId()) {
    query["SpaceId"] = request.getSpaceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLakeHouseSpace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLakeHouseSpaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteLakeHouseSpaceRequest
 * @return DeleteLakeHouseSpaceResponse
 */
DeleteLakeHouseSpaceResponse Client::deleteLakeHouseSpace(const DeleteLakeHouseSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLakeHouseSpaceWithOptions(request, runtime);
}

/**
 * @summary 删除数仓空间成员
 *
 * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
 * You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
 *
 * @param tmpReq DeleteLhMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLhMembersResponse
 */
DeleteLhMembersResponse Client::deleteLhMembersWithOptions(const DeleteLhMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteLhMembersShrinkRequest request = DeleteLhMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMemberIds()) {
    request.setMemberIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberIds(), "MemberIds", "json"));
  }

  json query = {};
  if (!!request.hasMemberIdsShrink()) {
    query["MemberIds"] = request.getMemberIdsShrink();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLhMembers"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLhMembersResponse>();
}

/**
 * @summary 删除数仓空间成员
 *
 * @description You must call this operation as a DMS administrator, a database administrator (DBA), or a workspace administrator.
 * You cannot call this operation to transfer the ownership of a task flow. To transfer the ownership of a task flow, call the [ChangLhDagOwner](https://help.aliyun.com/document_detail/424761.html) operation.
 *
 * @param request DeleteLhMembersRequest
 * @return DeleteLhMembersResponse
 */
DeleteLhMembersResponse Client::deleteLhMembers(const DeleteLhMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLhMembersWithOptions(request, runtime);
}

/**
 * @summary Deletes a logical database in Database Management (DMS). This operation only deletes the specified logical database but does not delete physical databases.
 *
 * @param request DeleteLogicDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogicDatabaseResponse
 */
DeleteLogicDatabaseResponse Client::deleteLogicDatabaseWithOptions(const DeleteLogicDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicDbId()) {
    query["LogicDbId"] = request.getLogicDbId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogicDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogicDatabaseResponse>();
}

/**
 * @summary Deletes a logical database in Database Management (DMS). This operation only deletes the specified logical database but does not delete physical databases.
 *
 * @param request DeleteLogicDatabaseRequest
 * @return DeleteLogicDatabaseResponse
 */
DeleteLogicDatabaseResponse Client::deleteLogicDatabase(const DeleteLogicDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogicDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes the routing algorithm of a logical table.
 *
 * @param request DeleteLogicTableRouteConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogicTableRouteConfigResponse
 */
DeleteLogicTableRouteConfigResponse Client::deleteLogicTableRouteConfigWithOptions(const DeleteLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRouteKey()) {
    query["RouteKey"] = request.getRouteKey();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogicTableRouteConfig"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogicTableRouteConfigResponse>();
}

/**
 * @summary Deletes the routing algorithm of a logical table.
 *
 * @param request DeleteLogicTableRouteConfigRequest
 * @return DeleteLogicTableRouteConfigResponse
 */
DeleteLogicTableRouteConfigResponse Client::deleteLogicTableRouteConfig(const DeleteLogicTableRouteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogicTableRouteConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes an asset category.
 *
 * @param request DeleteMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCategoryResponse
 */
DeleteMetaCategoryResponse Client::deleteMetaCategoryWithOptions(const DeleteMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetaCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetaCategoryResponse>();
}

/**
 * @summary Deletes an asset category.
 *
 * @param request DeleteMetaCategoryRequest
 * @return DeleteMetaCategoryResponse
 */
DeleteMetaCategoryResponse Client::deleteMetaCategory(const DeleteMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to disable the data security protection proxy of a DB instance.
 *
 * @description After you disable this feature, your DB instance loses the JDBC protocol. All authorization information is recycled.
 *
 * @param request DeleteProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProxyResponse
 */
DeleteProxyResponse Client::deleteProxyWithOptions(const DeleteProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProxy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProxyResponse>();
}

/**
 * @summary You can call this operation to disable the data security protection proxy of a DB instance.
 *
 * @description After you disable this feature, your DB instance loses the JDBC protocol. All authorization information is recycled.
 *
 * @param request DeleteProxyRequest
 * @return DeleteProxyResponse
 */
DeleteProxyResponse Client::deleteProxy(const DeleteProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProxyWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to DeleteProxyAccess reclaim the data security protection authorization of the target user.
 *
 * @param request DeleteProxyAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProxyAccessResponse
 */
DeleteProxyAccessResponse Client::deleteProxyAccessWithOptions(const DeleteProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyAccessId()) {
    query["ProxyAccessId"] = request.getProxyAccessId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProxyAccess"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProxyAccessResponse>();
}

/**
 * @summary You can call this operation to DeleteProxyAccess reclaim the data security protection authorization of the target user.
 *
 * @param request DeleteProxyAccessRequest
 * @return DeleteProxyAccessResponse
 */
DeleteProxyAccessResponse Client::deleteProxyAccess(const DeleteProxyAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProxyAccessWithOptions(request, runtime);
}

/**
 * @summary Deletes a business scenario.
 *
 * @description When you call this operation, make sure that no task flow is specified in the business scenario.
 *
 * @param request DeleteScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenarioWithOptions(const DeleteScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScenario"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScenarioResponse>();
}

/**
 * @summary Deletes a business scenario.
 *
 * @description When you call this operation, make sure that no task flow is specified in the business scenario.
 *
 * @param request DeleteScenarioRequest
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenario(const DeleteScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScenarioWithOptions(request, runtime);
}

/**
 * @summary Deletes a security rule set.
 *
 * @description Before you call this API operation, make sure that the security rule set is not associated with an instance.
 *
 * @param request DeleteStandardGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardGroupResponse
 */
DeleteStandardGroupResponse Client::deleteStandardGroupWithOptions(const DeleteStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStandardGroup"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardGroupResponse>();
}

/**
 * @summary Deletes a security rule set.
 *
 * @description Before you call this API operation, make sure that the security rule set is not associated with an instance.
 *
 * @param request DeleteStandardGroupRequest
 * @return DeleteStandardGroupResponse
 */
DeleteStandardGroupResponse Client::deleteStandardGroup(const DeleteStandardGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a task in a specified task flow.
 *
 * @param request DeleteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTaskWithOptions(const DeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTask"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskResponse>();
}

/**
 * @summary Deletes a task in a specified task flow.
 *
 * @param request DeleteTaskRequest
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTask(const DeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a task flow.
 *
 * @param request DeleteTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskFlowResponse
 */
DeleteTaskFlowResponse Client::deleteTaskFlowWithOptions(const DeleteTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskFlowResponse>();
}

/**
 * @summary Deletes a task flow.
 *
 * @param request DeleteTaskFlowRequest
 * @return DeleteTaskFlowResponse
 */
DeleteTaskFlowResponse Client::deleteTaskFlow(const DeleteTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes task flow edges based on multiple conditions.
 *
 * @description This operation is used for multi-condition query. You can call it to delete the edges of a specified task flow that meet all specified conditions.
 *
 * @param request DeleteTaskFlowEdgesByConditionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskFlowEdgesByConditionResponse
 */
DeleteTaskFlowEdgesByConditionResponse Client::deleteTaskFlowEdgesByConditionWithOptions(const DeleteTaskFlowEdgesByConditionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasNodeEnd()) {
    query["NodeEnd"] = request.getNodeEnd();
  }

  if (!!request.hasNodeFrom()) {
    query["NodeFrom"] = request.getNodeFrom();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTaskFlowEdgesByCondition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskFlowEdgesByConditionResponse>();
}

/**
 * @summary Deletes task flow edges based on multiple conditions.
 *
 * @description This operation is used for multi-condition query. You can call it to delete the edges of a specified task flow that meet all specified conditions.
 *
 * @param request DeleteTaskFlowEdgesByConditionRequest
 * @return DeleteTaskFlowEdgesByConditionResponse
 */
DeleteTaskFlowEdgesByConditionResponse Client::deleteTaskFlowEdgesByCondition(const DeleteTaskFlowEdgesByConditionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskFlowEdgesByConditionWithOptions(request, runtime);
}

/**
 * @summary Deletes an Alibaba Cloud account that is no longer used.
 *
 * @description The effect of deleting a user by calling this operation is the same as that of deleting a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to delete a user that is no longer used from DMS Enterprise. After the user is deleted, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
 * >  This operation only removes the association of the Alibaba Cloud account or RAM user with DMS Enterprise of the enterprise, rather than actually deleting the Alibaba Cloud account or RAM user. After the user is deleted, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is added to DMS Enterprise again.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Deletes an Alibaba Cloud account that is no longer used.
 *
 * @description The effect of deleting a user by calling this operation is the same as that of deleting a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to delete a user that is no longer used from DMS Enterprise. After the user is deleted, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
 * >  This operation only removes the association of the Alibaba Cloud account or RAM user with DMS Enterprise of the enterprise, rather than actually deleting the Alibaba Cloud account or RAM user. After the user is deleted, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is added to DMS Enterprise again.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const DeleteWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDifyAttributeResponse
 */
DescribeDifyAttributeResponse Client::describeDifyAttributeWithOptions(const DescribeDifyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppUuid()) {
    query["AppUuid"] = request.getAppUuid();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDifyAttribute"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDifyAttributeResponse>();
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyAttributeRequest
 * @return DescribeDifyAttributeResponse
 */
DescribeDifyAttributeResponse Client::describeDifyAttribute(const DescribeDifyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDifyAttributeWithOptions(request, runtime);
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyDefaultVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDifyDefaultVpcResponse
 */
DescribeDifyDefaultVpcResponse Client::describeDifyDefaultVpcWithOptions(const DescribeDifyDefaultVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDifyDefaultVpc"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDifyDefaultVpcResponse>();
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyDefaultVpcRequest
 * @return DescribeDifyDefaultVpcResponse
 */
DescribeDifyDefaultVpcResponse Client::describeDifyDefaultVpc(const DescribeDifyDefaultVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDifyDefaultVpcWithOptions(request, runtime);
}

/**
 * @summary 用于获取Dify当前支持的版本信息
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyEditionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDifyEditionsResponse
 */
DescribeDifyEditionsResponse Client::describeDifyEditionsWithOptions(const DescribeDifyEditionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDifyEditions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDifyEditionsResponse>();
}

/**
 * @summary 用于获取Dify当前支持的版本信息
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyEditionsRequest
 * @return DescribeDifyEditionsResponse
 */
DescribeDifyEditionsResponse Client::describeDifyEditions(const DescribeDifyEditionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDifyEditionsWithOptions(request, runtime);
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDifyRegionsResponse
 */
DescribeDifyRegionsResponse Client::describeDifyRegionsWithOptions(const DescribeDifyRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDifyRegions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDifyRegionsResponse>();
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request DescribeDifyRegionsRequest
 * @return DescribeDifyRegionsResponse
 */
DescribeDifyRegionsResponse Client::describeDifyRegions(const DescribeDifyRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDifyRegionsWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to disable a user that is temporarily not used in Data Management (DMS) Enterprise.
 *
 * @description The effect of disabling a user by calling this operation is the same as that of disabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to disable a user that is temporarily not used in DMS Enterprise. After the user is disabled, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
 * >  This operation only stops the Alibaba Cloud account or RAM user from logging on to DMS Enterprise of the enterprise, rather than actually disabling the Alibaba Cloud account or RAM user. After the user is disabled, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is enabled again. The disabled user, however, still exists in DMS Enterprise.
 *
 * @param request DisableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUserWithOptions(const DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableUserResponse>();
}

/**
 * @summary You can call this operation to disable a user that is temporarily not used in Data Management (DMS) Enterprise.
 *
 * @description The effect of disabling a user by calling this operation is the same as that of disabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to disable a user that is temporarily not used in DMS Enterprise. After the user is disabled, the data source permission, data owner configuration, and database administrator (DBA) configuration of the corresponding Alibaba Cloud account or Resource Access Management (RAM) user are revoked and become invalid.
 * >  This operation only stops the Alibaba Cloud account or RAM user from logging on to DMS Enterprise of the enterprise, rather than actually disabling the Alibaba Cloud account or RAM user. After the user is disabled, the Alibaba Cloud account or RAM user cannot log on to DMS Enterprise, unless the user is enabled again. The disabled user, however, still exists in DMS Enterprise.
 *
 * @param request DisableUserRequest
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUser(const DisableUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableUserWithOptions(request, runtime);
}

/**
 * @summary Downloads the parsing result of a data tracking task.
 *
 * @param tmpReq DownloadDataTrackResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadDataTrackResultResponse
 */
DownloadDataTrackResultResponse Client::downloadDataTrackResultWithOptions(const DownloadDataTrackResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DownloadDataTrackResultShrinkRequest request = DownloadDataTrackResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnFilter()) {
    request.setColumnFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getColumnFilter(), "ColumnFilter", "json"));
  }

  if (!!tmpReq.hasEventIdList()) {
    request.setEventIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventIdList(), "EventIdList", "json"));
  }

  if (!!tmpReq.hasFilterTableList()) {
    request.setFilterTableListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterTableList(), "FilterTableList", "json"));
  }

  if (!!tmpReq.hasFilterTypeList()) {
    request.setFilterTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterTypeList(), "FilterTypeList", "json"));
  }

  json query = {};
  if (!!request.hasColumnFilterShrink()) {
    query["ColumnFilter"] = request.getColumnFilterShrink();
  }

  if (!!request.hasEventIdListShrink()) {
    query["EventIdList"] = request.getEventIdListShrink();
  }

  if (!!request.hasFilterEndTime()) {
    query["FilterEndTime"] = request.getFilterEndTime();
  }

  if (!!request.hasFilterStartTime()) {
    query["FilterStartTime"] = request.getFilterStartTime();
  }

  if (!!request.hasFilterTableListShrink()) {
    query["FilterTableList"] = request.getFilterTableListShrink();
  }

  if (!!request.hasFilterTypeListShrink()) {
    query["FilterTypeList"] = request.getFilterTypeListShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRollbackSQLType()) {
    query["RollbackSQLType"] = request.getRollbackSQLType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadDataTrackResult"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadDataTrackResultResponse>();
}

/**
 * @summary Downloads the parsing result of a data tracking task.
 *
 * @param request DownloadDataTrackResultRequest
 * @return DownloadDataTrackResultResponse
 */
DownloadDataTrackResultResponse Client::downloadDataTrackResult(const DownloadDataTrackResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadDataTrackResultWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a logical database.
 *
 * @param tmpReq EditLogicDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditLogicDatabaseResponse
 */
EditLogicDatabaseResponse Client::editLogicDatabaseWithOptions(const EditLogicDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EditLogicDatabaseShrinkRequest request = EditLogicDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatabaseIds()) {
    request.setDatabaseIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatabaseIds(), "DatabaseIds", "json"));
  }

  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasDatabaseIdsShrink()) {
    query["DatabaseIds"] = request.getDatabaseIdsShrink();
  }

  if (!!request.hasLogicDbId()) {
    query["LogicDbId"] = request.getLogicDbId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditLogicDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditLogicDatabaseResponse>();
}

/**
 * @summary Modifies the information about a logical database.
 *
 * @param request EditLogicDatabaseRequest
 * @return EditLogicDatabaseResponse
 */
EditLogicDatabaseResponse Client::editLogicDatabase(const EditLogicDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editLogicDatabaseWithOptions(request, runtime);
}

/**
 * @summary Edits the metadata business knowledge for specified GUIDs.
 *
 * @description Edits the business knowledge of the metadata represented by the specified GUID.
 *
 * @param request EditMetaKnowledgeAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditMetaKnowledgeAssetResponse
 */
EditMetaKnowledgeAssetResponse Client::editMetaKnowledgeAssetWithOptions(const EditMetaKnowledgeAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetDescription()) {
    query["AssetDescription"] = request.getAssetDescription();
  }

  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableSchemaName()) {
    query["TableSchemaName"] = request.getTableSchemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditMetaKnowledgeAsset"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditMetaKnowledgeAssetResponse>();
}

/**
 * @summary Edits the metadata business knowledge for specified GUIDs.
 *
 * @description Edits the business knowledge of the metadata represented by the specified GUID.
 *
 * @param request EditMetaKnowledgeAssetRequest
 * @return EditMetaKnowledgeAssetResponse
 */
EditMetaKnowledgeAssetResponse Client::editMetaKnowledgeAsset(const EditMetaKnowledgeAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editMetaKnowledgeAssetWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to enable a user that has been disabled in Data Management (DMS) Enterprise.
 *
 * @description The effect of enabling a user by calling this operation is the same as that of enabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to enable a user that has been disabled in DMS Enterprise. After the user is enabled, the corresponding Alibaba Cloud account or Resource Access Management (RAM) user can continue to log on to DMS Enterprise and perform relevant operations.
 * >  This operation only enables the Alibaba Cloud account or RAM user to log on to DMS Enterprise of the enterprise and perform relevant operations, rather than granting other permissions to the Alibaba Cloud account or RAM user.
 *
 * @param request EnableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUserWithOptions(const EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableUserResponse>();
}

/**
 * @summary You can call this operation to enable a user that has been disabled in Data Management (DMS) Enterprise.
 *
 * @description The effect of enabling a user by calling this operation is the same as that of enabling a user by choosing System Management > User Management in the DMS Enterprise console. The administrator of DMS Enterprise can call this operation to enable a user that has been disabled in DMS Enterprise. After the user is enabled, the corresponding Alibaba Cloud account or Resource Access Management (RAM) user can continue to log on to DMS Enterprise and perform relevant operations.
 * >  This operation only enables the Alibaba Cloud account or RAM user to log on to DMS Enterprise of the enterprise and perform relevant operations, rather than granting other permissions to the Alibaba Cloud account or RAM user.
 *
 * @param request EnableUserRequest
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUser(const EnableUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableUserWithOptions(request, runtime);
}

/**
 * @summary Submits a ticket for data change.
 *
 * @param tmpReq ExecuteDataCorrectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteDataCorrectResponse
 */
ExecuteDataCorrectResponse Client::executeDataCorrectWithOptions(const ExecuteDataCorrectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteDataCorrectShrinkRequest request = ExecuteDataCorrectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionDetail()) {
    request.setActionDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActionDetail(), "ActionDetail", "json"));
  }

  json query = {};
  if (!!request.hasActionDetailShrink()) {
    query["ActionDetail"] = request.getActionDetailShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteDataCorrect"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteDataCorrectResponse>();
}

/**
 * @summary Submits a ticket for data change.
 *
 * @param request ExecuteDataCorrectRequest
 * @return ExecuteDataCorrectResponse
 */
ExecuteDataCorrectResponse Client::executeDataCorrect(const ExecuteDataCorrectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeDataCorrectWithOptions(request, runtime);
}

/**
 * @summary Executes a data export ticket.
 *
 * @param tmpReq ExecuteDataExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteDataExportResponse
 */
ExecuteDataExportResponse Client::executeDataExportWithOptions(const ExecuteDataExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteDataExportShrinkRequest request = ExecuteDataExportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionDetail()) {
    request.setActionDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActionDetail(), "ActionDetail", "json"));
  }

  json query = {};
  if (!!request.hasActionDetailShrink()) {
    query["ActionDetail"] = request.getActionDetailShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteDataExport"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteDataExportResponse>();
}

/**
 * @summary Executes a data export ticket.
 *
 * @param request ExecuteDataExportRequest
 * @return ExecuteDataExportResponse
 */
ExecuteDataExportResponse Client::executeDataExport(const ExecuteDataExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeDataExportWithOptions(request, runtime);
}

/**
 * @summary Executes SQL statements.
 *
 * @description You can call this operation only for instances that are managed in Security Collaboration mode.
 *
 * @param request ExecuteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteScriptResponse
 */
ExecuteScriptResponse Client::executeScriptWithOptions(const ExecuteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasScript()) {
    query["Script"] = request.getScript();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteScript"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteScriptResponse>();
}

/**
 * @summary Executes SQL statements.
 *
 * @description You can call this operation only for instances that are managed in Security Collaboration mode.
 *
 * @param request ExecuteScriptRequest
 * @return ExecuteScriptResponse
 */
ExecuteScriptResponse Client::executeScript(const ExecuteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeScriptWithOptions(request, runtime);
}

/**
 * @summary Executes a schema synchronization task.
 *
 * @description If the security rules of an instance indicate that a ticket must be approved before you perform schema synchronization, you can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
 * >  You can call the [GetStructSyncJobDetail](https://help.aliyun.com/document_detail/206160.html) operation to query whether you need to submit a ticket for approval.
 *
 * @param request ExecuteStructSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteStructSyncResponse
 */
ExecuteStructSyncResponse Client::executeStructSyncWithOptions(const ExecuteStructSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteStructSync"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteStructSyncResponse>();
}

/**
 * @summary Executes a schema synchronization task.
 *
 * @description If the security rules of an instance indicate that a ticket must be approved before you perform schema synchronization, you can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
 * >  You can call the [GetStructSyncJobDetail](https://help.aliyun.com/document_detail/206160.html) operation to query whether you need to submit a ticket for approval.
 *
 * @param request ExecuteStructSyncRequest
 * @return ExecuteStructSyncResponse
 */
ExecuteStructSyncResponse Client::executeStructSync(const ExecuteStructSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeStructSyncWithOptions(request, runtime);
}

/**
 * @summary Uses the specified SQL statement, error message, and database ID to analyze and fix the SQL error.
 *
 * @description You can call this operation to analyze and fix SQL errors based on the specified SQL statement, error message, and database ID.
 *
 * @param request FixSqlByMetaAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FixSqlByMetaAgentResponse
 */
FixSqlByMetaAgentResponse Client::fixSqlByMetaAgentWithOptions(const FixSqlByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasError()) {
    query["Error"] = request.getError();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FixSqlByMetaAgent"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FixSqlByMetaAgentResponse>();
}

/**
 * @summary Uses the specified SQL statement, error message, and database ID to analyze and fix the SQL error.
 *
 * @description You can call this operation to analyze and fix SQL errors based on the specified SQL statement, error message, and database ID.
 *
 * @param request FixSqlByMetaAgentRequest
 * @return FixSqlByMetaAgentResponse
 */
FixSqlByMetaAgentResponse Client::fixSqlByMetaAgent(const FixSqlByMetaAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fixSqlByMetaAgentWithOptions(request, runtime);
}

/**
 * @summary 数据库知识库补数据接口
 *
 * @param request GenMetaKnowledgeAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenMetaKnowledgeAssetResponse
 */
GenMetaKnowledgeAssetResponse Client::genMetaKnowledgeAssetWithOptions(const GenMetaKnowledgeAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenMetaKnowledgeAsset"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenMetaKnowledgeAssetResponse>();
}

/**
 * @summary 数据库知识库补数据接口
 *
 * @param request GenMetaKnowledgeAssetRequest
 * @return GenMetaKnowledgeAssetResponse
 */
GenMetaKnowledgeAssetResponse Client::genMetaKnowledgeAsset(const GenMetaKnowledgeAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return genMetaKnowledgeAssetWithOptions(request, runtime);
}

/**
 * @summary 根据用户提供的自然语言描述和数据库信息生成对应的SQL语句。
 *
 * @description ## 请求说明
 * - 该API用于将用户的自然语言问题转换为可执行的SQL查询语句。
 * - 用户需要提供数据库ID (`dbId`) 和实例ID (`instanceId`)，以及想要查询的问题描述 (`question`)。
 * - 可选参数包括业务知识 (`knowledge`)、数据库方言 (`dialect`)、历史消息 (`history`)、算法级别 (`level`) 和指定模型名称 (`model`)。
 * - `dialect` 默认值为 "SQL"，表示生成标准SQL语句；`level` 默认值为 "base"，代表基础级别的处理。
 * - 如果请求中包含多个表且这些表不属于同一个数据库，则返回的 `dbId` 将为0，表明这是一个跨库查询。
 * - 返回结果中除了生成的SQL语句外，还包括了求解时用到的表、引用的知识点、展示用的SQL等信息，方便进一步理解和使用。
 *
 * @param request GenerateSqlFromNLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateSqlFromNLResponse
 */
GenerateSqlFromNLResponse Client::generateSqlFromNLWithOptions(const GenerateSqlFromNLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasDialect()) {
    query["Dialect"] = request.getDialect();
  }

  if (!!request.hasKnowledge()) {
    query["Knowledge"] = request.getKnowledge();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasQuestion()) {
    query["Question"] = request.getQuestion();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTableNames()) {
    query["TableNames"] = request.getTableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateSqlFromNL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateSqlFromNLResponse>();
}

/**
 * @summary 根据用户提供的自然语言描述和数据库信息生成对应的SQL语句。
 *
 * @description ## 请求说明
 * - 该API用于将用户的自然语言问题转换为可执行的SQL查询语句。
 * - 用户需要提供数据库ID (`dbId`) 和实例ID (`instanceId`)，以及想要查询的问题描述 (`question`)。
 * - 可选参数包括业务知识 (`knowledge`)、数据库方言 (`dialect`)、历史消息 (`history`)、算法级别 (`level`) 和指定模型名称 (`model`)。
 * - `dialect` 默认值为 "SQL"，表示生成标准SQL语句；`level` 默认值为 "base"，代表基础级别的处理。
 * - 如果请求中包含多个表且这些表不属于同一个数据库，则返回的 `dbId` 将为0，表明这是一个跨库查询。
 * - 返回结果中除了生成的SQL语句外，还包括了求解时用到的表、引用的知识点、展示用的SQL等信息，方便进一步理解和使用。
 *
 * @param request GenerateSqlFromNLRequest
 * @return GenerateSqlFromNLResponse
 */
GenerateSqlFromNLResponse Client::generateSqlFromNL(const GenerateSqlFromNLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateSqlFromNLWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a policy, including the name, content, and the user who created the policy.
 *
 * @param request GetAbacPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAbacPolicyResponse
 */
GetAbacPolicyResponse Client::getAbacPolicyWithOptions(const GetAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbacPolicyId()) {
    query["AbacPolicyId"] = request.getAbacPolicyId();
  }

  if (!!request.hasAbacPolicyName()) {
    query["AbacPolicyName"] = request.getAbacPolicyName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAbacPolicy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAbacPolicyResponse>();
}

/**
 * @summary Queries the details of a policy, including the name, content, and the user who created the policy.
 *
 * @param request GetAbacPolicyRequest
 * @return GetAbacPolicyResponse
 */
GetAbacPolicyResponse Client::getAbacPolicy(const GetAbacPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAbacPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the approval details of a ticket.
 *
 * @param request GetApprovalDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApprovalDetailResponse
 */
GetApprovalDetailResponse Client::getApprovalDetailWithOptions(const GetApprovalDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkflowInstanceId()) {
    query["WorkflowInstanceId"] = request.getWorkflowInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApprovalDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApprovalDetailResponse>();
}

/**
 * @summary Queries the approval details of a ticket.
 *
 * @param request GetApprovalDetailRequest
 * @return GetApprovalDetailResponse
 */
GetApprovalDetailResponse Client::getApprovalDetail(const GetApprovalDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a permission template.
 *
 * @description You must be a Data Management (DMS) administrator or a database administrator (DBA). For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GetAuthorityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorityTemplateResponse
 */
GetAuthorityTemplateResponse Client::getAuthorityTemplateWithOptions(const GetAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorityTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorityTemplateResponse>();
}

/**
 * @summary Queries the information about a permission template.
 *
 * @description You must be a Data Management (DMS) administrator or a database administrator (DBA). For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GetAuthorityTemplateRequest
 * @return GetAuthorityTemplateResponse
 */
GetAuthorityTemplateResponse Client::getAuthorityTemplate(const GetAuthorityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorityTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the resources in a permission template.
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GetAuthorityTemplateItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorityTemplateItemResponse
 */
GetAuthorityTemplateItemResponse Client::getAuthorityTemplateItemWithOptions(const GetAuthorityTemplateItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorityTemplateItem"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorityTemplateItemResponse>();
}

/**
 * @summary Queries the resources in a permission template.
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GetAuthorityTemplateItemRequest
 * @return GetAuthorityTemplateItemResponse
 */
GetAuthorityTemplateItemResponse Client::getAuthorityTemplateItem(const GetAuthorityTemplateItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorityTemplateItemWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the classification and grading template associated with an instance.
 *
 * @param request GetClassificationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClassificationTemplateResponse
 */
GetClassificationTemplateResponse Client::getClassificationTemplateWithOptions(const GetClassificationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClassificationTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClassificationTemplateResponse>();
}

/**
 * @summary Queries the information about the classification and grading template associated with an instance.
 *
 * @param request GetClassificationTemplateRequest
 * @return GetClassificationTemplateResponse
 */
GetClassificationTemplateResponse Client::getClassificationTemplate(const GetClassificationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClassificationTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the log that records the scheduling details of an SQL task.
 *
 * @param request GetDBTaskSQLJobLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBTaskSQLJobLogResponse
 */
GetDBTaskSQLJobLogResponse Client::getDBTaskSQLJobLogWithOptions(const GetDBTaskSQLJobLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBTaskSQLJobLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBTaskSQLJobLogResponse>();
}

/**
 * @summary Queries the log that records the scheduling details of an SQL task.
 *
 * @param request GetDBTaskSQLJobLogRequest
 * @return GetDBTaskSQLJobLogResponse
 */
GetDBTaskSQLJobLogResponse Client::getDBTaskSQLJobLog(const GetDBTaskSQLJobLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBTaskSQLJobLogWithOptions(request, runtime);
}

/**
 * @summary Queries the topologies of a logical database and its physical database shards.
 *
 * @param request GetDBTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBTopologyResponse
 */
GetDBTopologyResponse Client::getDBTopologyWithOptions(const GetDBTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicDbId()) {
    query["LogicDbId"] = request.getLogicDbId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBTopology"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBTopologyResponse>();
}

/**
 * @summary Queries the topologies of a logical database and its physical database shards.
 *
 * @param request GetDBTopologyRequest
 * @return GetDBTopologyResponse
 */
GetDBTopologyResponse Client::getDBTopology(const GetDBTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBTopologyWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the number of data archiving tickets, including the number of tickets of successful data archiving, failed data archiving,and in-progress data archiving, and the total number of data archiving tickets.
 *
 * @param request GetDataArchiveCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataArchiveCountResponse
 */
GetDataArchiveCountResponse Client::getDataArchiveCountWithOptions(const GetDataArchiveCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderResultType()) {
    query["OrderResultType"] = request.getOrderResultType();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasSearchDateType()) {
    query["SearchDateType"] = request.getSearchDateType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataArchiveCount"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataArchiveCountResponse>();
}

/**
 * @summary Queries the statistics on the number of data archiving tickets, including the number of tickets of successful data archiving, failed data archiving,and in-progress data archiving, and the total number of data archiving tickets.
 *
 * @param request GetDataArchiveCountRequest
 * @return GetDataArchiveCountResponse
 */
GetDataArchiveCountResponse Client::getDataArchiveCount(const GetDataArchiveCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataArchiveCountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data archiving ticket, including the time when the ticket was created, the scheduling information of the data archiving task, the logs of the data archiving task, and the database to which data is archived.
 *
 * @param request GetDataArchiveOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataArchiveOrderDetailResponse
 */
GetDataArchiveOrderDetailResponse Client::getDataArchiveOrderDetailWithOptions(const GetDataArchiveOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataArchiveOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataArchiveOrderDetailResponse>();
}

/**
 * @summary Queries the details of a data archiving ticket, including the time when the ticket was created, the scheduling information of the data archiving task, the logs of the data archiving task, and the database to which data is archived.
 *
 * @param request GetDataArchiveOrderDetailRequest
 * @return GetDataArchiveOrderDetailResponse
 */
GetDataArchiveOrderDetailResponse Client::getDataArchiveOrderDetail(const GetDataArchiveOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataArchiveOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the backup file for a data change ticket in Data Management (DMS).
 *
 * @param tmpReq GetDataCorrectBackupFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCorrectBackupFilesResponse
 */
GetDataCorrectBackupFilesResponse Client::getDataCorrectBackupFilesWithOptions(const GetDataCorrectBackupFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDataCorrectBackupFilesShrinkRequest request = GetDataCorrectBackupFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionDetail()) {
    request.setActionDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActionDetail(), "ActionDetail", "json"));
  }

  json query = {};
  if (!!request.hasActionDetailShrink()) {
    query["ActionDetail"] = request.getActionDetailShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCorrectBackupFiles"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCorrectBackupFilesResponse>();
}

/**
 * @summary Queries the download URL of the backup file for a data change ticket in Data Management (DMS).
 *
 * @param request GetDataCorrectBackupFilesRequest
 * @return GetDataCorrectBackupFilesResponse
 */
GetDataCorrectBackupFilesResponse Client::getDataCorrectBackupFiles(const GetDataCorrectBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCorrectBackupFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a data change ticket in Data Management (DMS).
 *
 * @param request GetDataCorrectOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCorrectOrderDetailResponse
 */
GetDataCorrectOrderDetailResponse Client::getDataCorrectOrderDetailWithOptions(const GetDataCorrectOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCorrectOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCorrectOrderDetailResponse>();
}

/**
 * @summary Queries the information about a data change ticket in Data Management (DMS).
 *
 * @param request GetDataCorrectOrderDetailRequest
 * @return GetDataCorrectOrderDetailResponse
 */
GetDataCorrectOrderDetailResponse Client::getDataCorrectOrderDetail(const GetDataCorrectOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCorrectOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the rollback attachment submitted along with a data change ticket.
 *
 * @param request GetDataCorrectRollbackFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCorrectRollbackFileResponse
 */
GetDataCorrectRollbackFileResponse Client::getDataCorrectRollbackFileWithOptions(const GetDataCorrectRollbackFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCorrectRollbackFile"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCorrectRollbackFileResponse>();
}

/**
 * @summary Queries the download URL of the rollback attachment submitted along with a data change ticket.
 *
 * @param request GetDataCorrectRollbackFileRequest
 * @return GetDataCorrectRollbackFileResponse
 */
GetDataCorrectRollbackFileResponse Client::getDataCorrectRollbackFile(const GetDataCorrectRollbackFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCorrectRollbackFileWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the SQL script for a data change task.
 *
 * @description This operation applies to [regular data change](https://help.aliyun.com/document_detail/58419.html) and [batch data import](https://help.aliyun.com/document_detail/144643.html).
 *
 * @param request GetDataCorrectSQLFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCorrectSQLFileResponse
 */
GetDataCorrectSQLFileResponse Client::getDataCorrectSQLFileWithOptions(const GetDataCorrectSQLFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCorrectSQLFile"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCorrectSQLFileResponse>();
}

/**
 * @summary Queries the download URL of the SQL script for a data change task.
 *
 * @description This operation applies to [regular data change](https://help.aliyun.com/document_detail/58419.html) and [batch data import](https://help.aliyun.com/document_detail/144643.html).
 *
 * @param request GetDataCorrectSQLFileRequest
 * @return GetDataCorrectSQLFileResponse
 */
GetDataCorrectSQLFileResponse Client::getDataCorrectSQLFile(const GetDataCorrectSQLFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCorrectSQLFileWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a data change, lock-free data change, or data import task.
 *
 * @param request GetDataCorrectTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCorrectTaskDetailResponse
 */
GetDataCorrectTaskDetailResponse Client::getDataCorrectTaskDetailWithOptions(const GetDataCorrectTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCorrectTaskDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCorrectTaskDetailResponse>();
}

/**
 * @summary Queries the information about a data change, lock-free data change, or data import task.
 *
 * @param request GetDataCorrectTaskDetailRequest
 * @return GetDataCorrectTaskDetailResponse
 */
GetDataCorrectTaskDetailResponse Client::getDataCorrectTaskDetail(const GetDataCorrectTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCorrectTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the scheduling configuration of a ticket for cleaning up historical data.
 *
 * @param request GetDataCronClearConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCronClearConfigResponse
 */
GetDataCronClearConfigResponse Client::getDataCronClearConfigWithOptions(const GetDataCronClearConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCronClearConfig"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCronClearConfigResponse>();
}

/**
 * @summary Queries the scheduling configuration of a ticket for cleaning up historical data.
 *
 * @param request GetDataCronClearConfigRequest
 * @return GetDataCronClearConfigResponse
 */
GetDataCronClearConfigResponse Client::getDataCronClearConfig(const GetDataCronClearConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCronClearConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a historical data cleansing ticket.
 *
 * @param request GetDataCronClearTaskDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataCronClearTaskDetailListResponse
 */
GetDataCronClearTaskDetailListResponse Client::getDataCronClearTaskDetailListWithOptions(const GetDataCronClearTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataCronClearTaskDetailList"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataCronClearTaskDetailListResponse>();
}

/**
 * @summary Queries the details of a historical data cleansing ticket.
 *
 * @param request GetDataCronClearTaskDetailListRequest
 * @return GetDataCronClearTaskDetailListResponse
 */
GetDataCronClearTaskDetailListResponse Client::getDataCronClearTaskDetailList(const GetDataCronClearTaskDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataCronClearTaskDetailListWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of export results for a data export ticket.
 *
 * @param request GetDataExportDownloadURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataExportDownloadURLResponse
 */
GetDataExportDownloadURLResponse Client::getDataExportDownloadURLWithOptions(const GetDataExportDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataExportDownloadURL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataExportDownloadURLResponse>();
}

/**
 * @summary Queries the download URL of export results for a data export ticket.
 *
 * @param request GetDataExportDownloadURLRequest
 * @return GetDataExportDownloadURLResponse
 */
GetDataExportDownloadURLResponse Client::getDataExportDownloadURL(const GetDataExportDownloadURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataExportDownloadURLWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a data export ticket.
 *
 * @param request GetDataExportOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataExportOrderDetailResponse
 */
GetDataExportOrderDetailResponse Client::getDataExportOrderDetailWithOptions(const GetDataExportOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  json body = {};
  if (!!request.hasOrderId()) {
    body["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDataExportOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataExportOrderDetailResponse>();
}

/**
 * @summary Queries the information about a data export ticket.
 *
 * @param request GetDataExportOrderDetailRequest
 * @return GetDataExportOrderDetailResponse
 */
GetDataExportOrderDetailResponse Client::getDataExportOrderDetail(const GetDataExportOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataExportOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the precheck details of an SQL result set export ticket.
 *
 * @param request GetDataExportPreCheckDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataExportPreCheckDetailResponse
 */
GetDataExportPreCheckDetailResponse Client::getDataExportPreCheckDetailWithOptions(const GetDataExportPreCheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataExportPreCheckDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataExportPreCheckDetailResponse>();
}

/**
 * @summary Queries the precheck details of an SQL result set export ticket.
 *
 * @param request GetDataExportPreCheckDetailRequest
 * @return GetDataExportPreCheckDetailResponse
 */
GetDataExportPreCheckDetailResponse Client::getDataExportPreCheckDetail(const GetDataExportPreCheckDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataExportPreCheckDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request GetDataImportSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataImportSQLResponse
 */
GetDataImportSQLResponse Client::getDataImportSQLWithOptions(const GetDataImportSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataImportSQL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataImportSQLResponse>();
}

/**
 * @summary Queries the SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request GetDataImportSQLRequest
 * @return GetDataImportSQLResponse
 */
GetDataImportSQLResponse Client::getDataImportSQL(const GetDataImportSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataImportSQLWithOptions(request, runtime);
}

/**
 * @summary Queries the data catalog of the data lake.
 *
 * @param request GetDataLakeCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeCatalogResponse
 */
GetDataLakeCatalogResponse Client::getDataLakeCatalogWithOptions(const GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeCatalog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeCatalogResponse>();
}

/**
 * @summary Queries the data catalog of the data lake.
 *
 * @param request GetDataLakeCatalogRequest
 * @return GetDataLakeCatalogResponse
 */
GetDataLakeCatalogResponse Client::getDataLakeCatalog(const GetDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the database in the data lake.
 *
 * @param request GetDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeDatabaseResponse
 */
GetDataLakeDatabaseResponse Client::getDataLakeDatabaseWithOptions(const GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeDatabaseResponse>();
}

/**
 * @summary Queries the information about the database in the data lake.
 *
 * @param request GetDataLakeDatabaseRequest
 * @return GetDataLakeDatabaseResponse
 */
GetDataLakeDatabaseResponse Client::getDataLakeDatabase(const GetDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Obtains the details about a user-defined function in a data lakehouse.
 *
 * @param request GetDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeFunctionResponse
 */
GetDataLakeFunctionResponse Client::getDataLakeFunctionWithOptions(const GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeFunction"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeFunctionResponse>();
}

/**
 * @summary Obtains the details about a user-defined function in a data lakehouse.
 *
 * @param request GetDataLakeFunctionRequest
 * @return GetDataLakeFunctionResponse
 */
GetDataLakeFunctionResponse Client::getDataLakeFunction(const GetDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a partition of a table in a data lakehouse.
 *
 * @param tmpReq GetDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakePartitionResponse
 */
GetDataLakePartitionResponse Client::getDataLakePartitionWithOptions(const GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDataLakePartitionShrinkRequest request = GetDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionValues()) {
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.getPartitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakePartition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakePartitionResponse>();
}

/**
 * @summary Queries the information about a partition of a table in a data lakehouse.
 *
 * @param request GetDataLakePartitionRequest
 * @return GetDataLakePartitionResponse
 */
GetDataLakePartitionResponse Client::getDataLakePartition(const GetDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Queries basic information about tables in the data lake.
 *
 * @param request GetDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeTableResponse
 */
GetDataLakeTableResponse Client::getDataLakeTableWithOptions(const GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeTableResponse>();
}

/**
 * @summary Queries basic information about tables in the data lake.
 *
 * @param request GetDataLakeTableRequest
 * @return GetDataLakeTableResponse
 */
GetDataLakeTableResponse Client::getDataLakeTable(const GetDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of a data tracking task.
 *
 * @param request GetDataTrackJobDegreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataTrackJobDegreeResponse
 */
GetDataTrackJobDegreeResponse Client::getDataTrackJobDegreeWithOptions(const GetDataTrackJobDegreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataTrackJobDegree"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataTrackJobDegreeResponse>();
}

/**
 * @summary Queries the progress of a data tracking task.
 *
 * @param request GetDataTrackJobDegreeRequest
 * @return GetDataTrackJobDegreeResponse
 */
GetDataTrackJobDegreeResponse Client::getDataTrackJobDegree(const GetDataTrackJobDegreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataTrackJobDegreeWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of tables involved in a data tracking task.
 *
 * @param request GetDataTrackJobTableMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataTrackJobTableMetaResponse
 */
GetDataTrackJobTableMetaResponse Client::getDataTrackJobTableMetaWithOptions(const GetDataTrackJobTableMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataTrackJobTableMeta"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataTrackJobTableMetaResponse>();
}

/**
 * @summary Queries the metadata of tables involved in a data tracking task.
 *
 * @param request GetDataTrackJobTableMetaRequest
 * @return GetDataTrackJobTableMetaResponse
 */
GetDataTrackJobTableMetaResponse Client::getDataTrackJobTableMeta(const GetDataTrackJobTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataTrackJobTableMetaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data tracking ticket.
 *
 * @param request GetDataTrackOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataTrackOrderDetailResponse
 */
GetDataTrackOrderDetailResponse Client::getDataTrackOrderDetailWithOptions(const GetDataTrackOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataTrackOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataTrackOrderDetailResponse>();
}

/**
 * @summary Queries the details of a data tracking ticket.
 *
 * @param request GetDataTrackOrderDetailRequest
 * @return GetDataTrackOrderDetailResponse
 */
GetDataTrackOrderDetailResponse Client::getDataTrackOrderDetail(const GetDataTrackOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataTrackOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries details of a specific database.
 *
 * @param request GetDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary Queries details of a specific database.
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a database export ticket.
 *
 * @param request GetDatabaseExportOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseExportOrderDetailResponse
 */
GetDatabaseExportOrderDetailResponse Client::getDatabaseExportOrderDetailWithOptions(const GetDatabaseExportOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  json body = {};
  if (!!request.hasOrderId()) {
    body["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDatabaseExportOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseExportOrderDetailResponse>();
}

/**
 * @summary Queries the details of a database export ticket.
 *
 * @param request GetDatabaseExportOrderDetailRequest
 * @return GetDatabaseExportOrderDetailResponse
 */
GetDatabaseExportOrderDetailResponse Client::getDatabaseExportOrderDetail(const GetDatabaseExportOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseExportOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the results of a database export ticket.
 *
 * @param request GetDbExportDownloadURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDbExportDownloadURLResponse
 */
GetDbExportDownloadURLResponse Client::getDbExportDownloadURLWithOptions(const GetDbExportDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDbExportDownloadURL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDbExportDownloadURLResponse>();
}

/**
 * @summary Queries the download URL of the results of a database export ticket.
 *
 * @param request GetDbExportDownloadURLRequest
 * @return GetDbExportDownloadURLResponse
 */
GetDbExportDownloadURLResponse Client::getDbExportDownloadURL(const GetDbExportDownloadURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDbExportDownloadURLWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a database instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the details of a database instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the minimum scheduling cycle of a task flow when a service level agreement (SLA) timeout rule is configured for the task flow.
 *
 * @description The scheduling cycle of a task flow must be greater than the minimum scheduling cycle configured in the SLA rule for the task flow.
 *
 * @param request GetIntervalLimitOfSLARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntervalLimitOfSLAResponse
 */
GetIntervalLimitOfSLAResponse Client::getIntervalLimitOfSLAWithOptions(const GetIntervalLimitOfSLARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntervalLimitOfSLA"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntervalLimitOfSLAResponse>();
}

/**
 * @summary Queries the minimum scheduling cycle of a task flow when a service level agreement (SLA) timeout rule is configured for the task flow.
 *
 * @description The scheduling cycle of a task flow must be greater than the minimum scheduling cycle configured in the SLA rule for the task flow.
 *
 * @param request GetIntervalLimitOfSLARequest
 * @return GetIntervalLimitOfSLAResponse
 */
GetIntervalLimitOfSLAResponse Client::getIntervalLimitOfSLA(const GetIntervalLimitOfSLARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntervalLimitOfSLAWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workspace based on the workspace name in Data Management (DMS).
 *
 * @description You are a DMS administrator or a database administrator (DBA).
 *
 * @param request GetLhSpaceByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLhSpaceByNameResponse
 */
GetLhSpaceByNameResponse Client::getLhSpaceByNameWithOptions(const GetLhSpaceByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceName()) {
    query["SpaceName"] = request.getSpaceName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLhSpaceByName"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLhSpaceByNameResponse>();
}

/**
 * @summary Queries the information about a workspace based on the workspace name in Data Management (DMS).
 *
 * @description You are a DMS administrator or a database administrator (DBA).
 *
 * @param request GetLhSpaceByNameRequest
 * @return GetLhSpaceByNameResponse
 */
GetLhSpaceByNameResponse Client::getLhSpaceByName(const GetLhSpaceByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLhSpaceByNameWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a logical database.
 *
 * @param request GetLogicDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogicDatabaseResponse
 */
GetLogicDatabaseResponse Client::getLogicDatabaseWithOptions(const GetLogicDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogicDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogicDatabaseResponse>();
}

/**
 * @summary Queries the details of a logical database.
 *
 * @param request GetLogicDatabaseRequest
 * @return GetLogicDatabaseResponse
 */
GetLogicDatabaseResponse Client::getLogicDatabase(const GetLogicDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogicDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries the details of columns in a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request GetMetaTableColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableColumnResponse
 */
GetMetaTableColumnResponse Client::getMetaTableColumnWithOptions(const GetMetaTableColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableColumn"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableColumnResponse>();
}

/**
 * @summary Queries the details of columns in a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request GetMetaTableColumnRequest
 * @return GetMetaTableColumnResponse
 */
GetMetaTableColumnResponse Client::getMetaTableColumn(const GetMetaTableColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableColumnWithOptions(request, runtime);
}

/**
 * @summary Queries the details of columns and indexes in a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request GetMetaTableDetailInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableDetailInfoResponse
 */
GetMetaTableDetailInfoResponse Client::getMetaTableDetailInfoWithOptions(const GetMetaTableDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableDetailInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableDetailInfoResponse>();
}

/**
 * @summary Queries the details of columns and indexes in a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request GetMetaTableDetailInfoRequest
 * @return GetMetaTableDetailInfoResponse
 */
GetMetaTableDetailInfoResponse Client::getMetaTableDetailInfo(const GetMetaTableDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableDetailInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details and progress of an OnlineDDL task.
 *
 * @param request GetOnlineDDLProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOnlineDDLProgressResponse
 */
GetOnlineDDLProgressResponse Client::getOnlineDDLProgressWithOptions(const GetOnlineDDLProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobDetailId()) {
    query["JobDetailId"] = request.getJobDetailId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOnlineDDLProgress"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOnlineDDLProgressResponse>();
}

/**
 * @summary Queries the details and progress of an OnlineDDL task.
 *
 * @param request GetOnlineDDLProgressRequest
 * @return GetOnlineDDLProgressResponse
 */
GetOnlineDDLProgressResponse Client::getOnlineDDLProgress(const GetOnlineDDLProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnlineDDLProgressWithOptions(request, runtime);
}

/**
 * @summary Queries the details of operation logs that are generated in a specified period of time.
 *
 * @description Prerequisites: You are an administrator of Data Management (DMS) or a security administrator. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain your user role from the RoleIdList parameter that is returned.
 *
 * @param request GetOpLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpLogResponse
 */
GetOpLogResponse Client::getOpLogWithOptions(const GetOpLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.getUserNick();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpLogResponse>();
}

/**
 * @summary Queries the details of operation logs that are generated in a specified period of time.
 *
 * @description Prerequisites: You are an administrator of Data Management (DMS) or a security administrator. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain your user role from the RoleIdList parameter that is returned.
 *
 * @param request GetOpLogRequest
 * @return GetOpLogResponse
 */
GetOpLogResponse Client::getOpLog(const GetOpLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpLogWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the attachment of a ticket.
 *
 * @param request GetOrderAttachmentFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderAttachmentFileResponse
 */
GetOrderAttachmentFileResponse Client::getOrderAttachmentFileWithOptions(const GetOrderAttachmentFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrderAttachmentFile"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrderAttachmentFileResponse>();
}

/**
 * @summary Queries the download URL of the attachment of a ticket.
 *
 * @param request GetOrderAttachmentFileRequest
 * @return GetOrderAttachmentFileResponse
 */
GetOrderAttachmentFileResponse Client::getOrderAttachmentFile(const GetOrderAttachmentFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderAttachmentFileWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about a ticket.
 *
 * @param request GetOrderBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderBaseInfoResponse
 */
GetOrderBaseInfoResponse Client::getOrderBaseInfoWithOptions(const GetOrderBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrderBaseInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrderBaseInfoResponse>();
}

/**
 * @summary Queries the basic information about a ticket.
 *
 * @param request GetOrderBaseInfoRequest
 * @return GetOrderBaseInfoResponse
 */
GetOrderBaseInfoResponse Client::getOrderBaseInfo(const GetOrderBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderBaseInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the Database-OWNER, Table-OWNER, and Instance-OWNER tickets.
 *
 * @param request GetOwnerApplyOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOwnerApplyOrderDetailResponse
 */
GetOwnerApplyOrderDetailResponse Client::getOwnerApplyOrderDetailWithOptions(const GetOwnerApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOwnerApplyOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOwnerApplyOrderDetailResponse>();
}

/**
 * @summary Queries the details of the Database-OWNER, Table-OWNER, and Instance-OWNER tickets.
 *
 * @param request GetOwnerApplyOrderDetailRequest
 * @return GetOwnerApplyOrderDetailResponse
 */
GetOwnerApplyOrderDetailResponse Client::getOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOwnerApplyOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the task information about a ticket.
 *
 * @param request GetPagedInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPagedInstanceResponse
 */
GetPagedInstanceResponse Client::getPagedInstanceWithOptions(const GetPagedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPagedInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPagedInstanceResponse>();
}

/**
 * @summary Queries the task information about a ticket.
 *
 * @param request GetPagedInstanceRequest
 * @return GetPagedInstanceResponse
 */
GetPagedInstanceResponse Client::getPagedInstance(const GetPagedInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPagedInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a ticket that applies for permissions.
 *
 * @description You can call this operation to query the information about tickets that apply for permissions on databases, tables, and sensitive columns.
 *
 * @param request GetPermApplyOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPermApplyOrderDetailResponse
 */
GetPermApplyOrderDetailResponse Client::getPermApplyOrderDetailWithOptions(const GetPermApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPermApplyOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPermApplyOrderDetailResponse>();
}

/**
 * @summary Queries the details of a ticket that applies for permissions.
 *
 * @description You can call this operation to query the information about tickets that apply for permissions on databases, tables, and sensitive columns.
 *
 * @param request GetPermApplyOrderDetailRequest
 * @return GetPermApplyOrderDetailResponse
 */
GetPermApplyOrderDetailResponse Client::getPermApplyOrderDetail(const GetPermApplyOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPermApplyOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a physical database.
 *
 * @param request GetPhysicalDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalDatabaseResponse
 */
GetPhysicalDatabaseResponse Client::getPhysicalDatabaseWithOptions(const GetPhysicalDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalDatabaseResponse>();
}

/**
 * @summary Queries the details of a physical database.
 *
 * @param request GetPhysicalDatabaseRequest
 * @return GetPhysicalDatabaseResponse
 */
GetPhysicalDatabaseResponse Client::getPhysicalDatabase(const GetPhysicalDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a secure access proxy.
 *
 * @param request GetProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProxyResponse
 */
GetProxyResponse Client::getProxyWithOptions(const GetProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProxy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProxyResponse>();
}

/**
 * @summary Queries the details of a secure access proxy.
 *
 * @param request GetProxyRequest
 * @return GetProxyResponse
 */
GetProxyResponse Client::getProxy(const GetProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProxyWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information about the secure access proxy feature.
 *
 * @param request GetProxyAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProxyAccessResponse
 */
GetProxyAccessResponse Client::getProxyAccessWithOptions(const GetProxyAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyAccessId()) {
    query["ProxyAccessId"] = request.getProxyAccessId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProxyAccess"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProxyAccessResponse>();
}

/**
 * @summary Queries the authorization information about the secure access proxy feature.
 *
 * @param request GetProxyAccessRequest
 * @return GetProxyAccessResponse
 */
GetProxyAccessResponse Client::getProxyAccess(const GetProxyAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProxyAccessWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number of custom service-level agreement (SLA) rules for task orchestration.
 *
 * @param request GetRuleNumLimitOfSLARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleNumLimitOfSLAResponse
 */
GetRuleNumLimitOfSLAResponse Client::getRuleNumLimitOfSLAWithOptions(const GetRuleNumLimitOfSLARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuleNumLimitOfSLA"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleNumLimitOfSLAResponse>();
}

/**
 * @summary Queries the maximum number of custom service-level agreement (SLA) rules for task orchestration.
 *
 * @param request GetRuleNumLimitOfSLARequest
 * @return GetRuleNumLimitOfSLAResponse
 */
GetRuleNumLimitOfSLAResponse Client::getRuleNumLimitOfSLA(const GetRuleNumLimitOfSLARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleNumLimitOfSLAWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an SQL review.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request GetSQLReviewCheckResultStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSQLReviewCheckResultStatusResponse
 */
GetSQLReviewCheckResultStatusResponse Client::getSQLReviewCheckResultStatusWithOptions(const GetSQLReviewCheckResultStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSQLReviewCheckResultStatus"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSQLReviewCheckResultStatusResponse>();
}

/**
 * @summary Queries the result of an SQL review.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request GetSQLReviewCheckResultStatusRequest
 * @return GetSQLReviewCheckResultStatusResponse
 */
GetSQLReviewCheckResultStatusResponse Client::getSQLReviewCheckResultStatus(const GetSQLReviewCheckResultStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSQLReviewCheckResultStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of optimization suggestions. The operation applies only to the tickets for the data changes and SQL review.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request GetSQLReviewOptimizeDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSQLReviewOptimizeDetailResponse
 */
GetSQLReviewOptimizeDetailResponse Client::getSQLReviewOptimizeDetailWithOptions(const GetSQLReviewOptimizeDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSQLReviewQueryKey()) {
    query["SQLReviewQueryKey"] = request.getSQLReviewQueryKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSQLReviewOptimizeDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSQLReviewOptimizeDetailResponse>();
}

/**
 * @summary Queries the details of optimization suggestions. The operation applies only to the tickets for the data changes and SQL review.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request GetSQLReviewOptimizeDetailRequest
 * @return GetSQLReviewOptimizeDetailResponse
 */
GetSQLReviewOptimizeDetailResponse Client::getSQLReviewOptimizeDetail(const GetSQLReviewOptimizeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSQLReviewOptimizeDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about security rule sets of a tenant. The information includes the name and description of security rules, and instances associated with security rules.
 *
 * @param request GetStandardGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardGroupResponse
 */
GetStandardGroupResponse Client::getStandardGroupWithOptions(const GetStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStandardGroup"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardGroupResponse>();
}

/**
 * @summary Queries the information about security rule sets of a tenant. The information includes the name and description of security rules, and instances associated with security rules.
 *
 * @param request GetStandardGroupRequest
 * @return GetStandardGroupResponse
 */
GetStandardGroupResponse Client::getStandardGroup(const GetStandardGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL statements that are involved in a schema synchronization ticket.
 *
 * @param request GetStructSyncExecSqlDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStructSyncExecSqlDetailResponse
 */
GetStructSyncExecSqlDetailResponse Client::getStructSyncExecSqlDetailWithOptions(const GetStructSyncExecSqlDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStructSyncExecSqlDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStructSyncExecSqlDetailResponse>();
}

/**
 * @summary Queries the SQL statements that are involved in a schema synchronization ticket.
 *
 * @param request GetStructSyncExecSqlDetailRequest
 * @return GetStructSyncExecSqlDetailResponse
 */
GetStructSyncExecSqlDetailResponse Client::getStructSyncExecSqlDetail(const GetStructSyncExecSqlDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStructSyncExecSqlDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the analysis result of a schema synchronization task.
 *
 * @param request GetStructSyncJobAnalyzeResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStructSyncJobAnalyzeResultResponse
 */
GetStructSyncJobAnalyzeResultResponse Client::getStructSyncJobAnalyzeResultWithOptions(const GetStructSyncJobAnalyzeResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompareType()) {
    query["CompareType"] = request.getCompareType();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStructSyncJobAnalyzeResult"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStructSyncJobAnalyzeResultResponse>();
}

/**
 * @summary Queries the analysis result of a schema synchronization task.
 *
 * @param request GetStructSyncJobAnalyzeResultRequest
 * @return GetStructSyncJobAnalyzeResultResponse
 */
GetStructSyncJobAnalyzeResultResponse Client::getStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStructSyncJobAnalyzeResultWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a schema synchronization task.
 *
 * @param request GetStructSyncJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStructSyncJobDetailResponse
 */
GetStructSyncJobDetailResponse Client::getStructSyncJobDetailWithOptions(const GetStructSyncJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStructSyncJobDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStructSyncJobDetailResponse>();
}

/**
 * @summary Queries the information of a schema synchronization task.
 *
 * @param request GetStructSyncJobDetailRequest
 * @return GetStructSyncJobDetailResponse
 */
GetStructSyncJobDetailResponse Client::getStructSyncJobDetail(const GetStructSyncJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStructSyncJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a schema synchronization ticket.
 *
 * @param request GetStructSyncOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStructSyncOrderDetailResponse
 */
GetStructSyncOrderDetailResponse Client::getStructSyncOrderDetailWithOptions(const GetStructSyncOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStructSyncOrderDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStructSyncOrderDetailResponse>();
}

/**
 * @summary Queries the details of a schema synchronization ticket.
 *
 * @param request GetStructSyncOrderDetailRequest
 * @return GetStructSyncOrderDetailResponse
 */
GetStructSyncOrderDetailResponse Client::getStructSyncOrderDetail(const GetStructSyncOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStructSyncOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the topology of a data table.
 *
 * @param request GetTableDBTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableDBTopologyResponse
 */
GetTableDBTopologyResponse Client::getTableDBTopologyWithOptions(const GetTableDBTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableDBTopology"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableDBTopologyResponse>();
}

/**
 * @summary Queries the topology of a data table.
 *
 * @param request GetTableDBTopologyRequest
 * @return GetTableDBTopologyResponse
 */
GetTableDBTopologyResponse Client::getTableDBTopology(const GetTableDBTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableDBTopologyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a schema design ticket, such as the current node of the ticket, whether the ticket can be returned to the schema design node, and the publishing strategy.
 *
 * @param request GetTableDesignProjectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableDesignProjectFlowResponse
 */
GetTableDesignProjectFlowResponse Client::getTableDesignProjectFlowWithOptions(const GetTableDesignProjectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableDesignProjectFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableDesignProjectFlowResponse>();
}

/**
 * @summary Queries the information about a schema design ticket, such as the current node of the ticket, whether the ticket can be returned to the schema design node, and the publishing strategy.
 *
 * @param request GetTableDesignProjectFlowRequest
 * @return GetTableDesignProjectFlowResponse
 */
GetTableDesignProjectFlowResponse Client::getTableDesignProjectFlow(const GetTableDesignProjectFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableDesignProjectFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the project and change base database of a schema design ticket, such as the state of the ticket, the ID of the user who created the ticket, and the name and ID of the change base database.
 *
 * @param request GetTableDesignProjectInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableDesignProjectInfoResponse
 */
GetTableDesignProjectInfoResponse Client::getTableDesignProjectInfoWithOptions(const GetTableDesignProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableDesignProjectInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableDesignProjectInfoResponse>();
}

/**
 * @summary Queries the information about the project and change base database of a schema design ticket, such as the state of the ticket, the ID of the user who created the ticket, and the name and ID of the change base database.
 *
 * @param request GetTableDesignProjectInfoRequest
 * @return GetTableDesignProjectInfoResponse
 */
GetTableDesignProjectInfoResponse Client::getTableDesignProjectInfo(const GetTableDesignProjectInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableDesignProjectInfoWithOptions(request, runtime);
}

/**
 * @summary Gets metadata knowledge for a specified GUID.
 *
 * @description This API can be called only for database instances that are enabled for security hosting.
 *
 * @param request GetTableKnowledgeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableKnowledgeInfoResponse
 */
GetTableKnowledgeInfoResponse Client::getTableKnowledgeInfoWithOptions(const GetTableKnowledgeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableSchemaName()) {
    query["TableSchemaName"] = request.getTableSchemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableKnowledgeInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableKnowledgeInfoResponse>();
}

/**
 * @summary Gets metadata knowledge for a specified GUID.
 *
 * @description This API can be called only for database instances that are enabled for security hosting.
 *
 * @param request GetTableKnowledgeInfoRequest
 * @return GetTableKnowledgeInfoResponse
 */
GetTableKnowledgeInfoResponse Client::getTableKnowledgeInfo(const GetTableKnowledgeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableKnowledgeInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the topology of a table.
 *
 * @param request GetTableTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableTopologyResponse
 */
GetTableTopologyResponse Client::getTableTopologyWithOptions(const GetTableTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableTopology"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableTopologyResponse>();
}

/**
 * @summary Queries the topology of a table.
 *
 * @param request GetTableTopologyRequest
 * @return GetTableTopologyResponse
 */
GetTableTopologyResponse Client::getTableTopology(const GetTableTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableTopologyWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations, including time variables, of a specified task node based on the task node ID.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Queries the configurations, including time variables, of a specified task node based on the task node ID.
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the Directed Acyclic Graph (DAG) of a task flow.
 *
 * @param request GetTaskFlowGraphRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskFlowGraphResponse
 */
GetTaskFlowGraphResponse Client::getTaskFlowGraphWithOptions(const GetTaskFlowGraphRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskFlowGraph"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskFlowGraphResponse>();
}

/**
 * @summary Queries the Directed Acyclic Graph (DAG) of a task flow.
 *
 * @param request GetTaskFlowGraphRequest
 * @return GetTaskFlowGraphResponse
 */
GetTaskFlowGraphResponse Client::getTaskFlowGraph(const GetTaskFlowGraphRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskFlowGraphWithOptions(request, runtime);
}

/**
 * @summary Queries the notification settings for task flows.
 *
 * @param request GetTaskFlowNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskFlowNotificationResponse
 */
GetTaskFlowNotificationResponse Client::getTaskFlowNotificationWithOptions(const GetTaskFlowNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskFlowNotification"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskFlowNotificationResponse>();
}

/**
 * @summary Queries the notification settings for task flows.
 *
 * @param request GetTaskFlowNotificationRequest
 * @return GetTaskFlowNotificationResponse
 */
GetTaskFlowNotificationResponse Client::getTaskFlowNotification(const GetTaskFlowNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskFlowNotificationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the nodes in an execution record of a task flow.
 *
 * @param request GetTaskInstanceRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskInstanceRelationResponse
 */
GetTaskInstanceRelationResponse Client::getTaskInstanceRelationWithOptions(const GetTaskInstanceRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskInstanceRelation"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskInstanceRelationResponse>();
}

/**
 * @summary Queries the information about the nodes in an execution record of a task flow.
 *
 * @param request GetTaskInstanceRelationRequest
 * @return GetTaskInstanceRelationResponse
 */
GetTaskInstanceRelationResponse Client::getTaskInstanceRelation(const GetTaskInstanceRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskInstanceRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a user.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries the information about a user.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Queries details of the active tenant.
 *
 * @param request GetUserActiveTenantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserActiveTenantResponse
 */
GetUserActiveTenantResponse Client::getUserActiveTenantWithOptions(const GetUserActiveTenantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserActiveTenant"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserActiveTenantResponse>();
}

/**
 * @summary Queries details of the active tenant.
 *
 * @param request GetUserActiveTenantRequest
 * @return GetUserActiveTenantResponse
 */
GetUserActiveTenantResponse Client::getUserActiveTenant(const GetUserActiveTenantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserActiveTenantWithOptions(request, runtime);
}

/**
 * @summary Obtains the information of a file upload task.
 *
 * @param request GetUserUploadFileJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserUploadFileJobResponse
 */
GetUserUploadFileJobResponse Client::getUserUploadFileJobWithOptions(const GetUserUploadFileJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobKey()) {
    query["JobKey"] = request.getJobKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserUploadFileJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserUploadFileJobResponse>();
}

/**
 * @summary Obtains the information of a file upload task.
 *
 * @param request GetUserUploadFileJobRequest
 * @return GetUserUploadFileJobResponse
 */
GetUserUploadFileJobResponse Client::getUserUploadFileJob(const GetUserUploadFileJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserUploadFileJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a workspace.
 *
 * @param request GetWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const GetWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Queries the details of a workspace.
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on resources to users by using a permission template.
 *
 * @description You must be a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GrantTemplateAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantTemplateAuthorityResponse
 */
GrantTemplateAuthorityResponse Client::grantTemplateAuthorityWithOptions(const GrantTemplateAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasExpireDate()) {
    query["ExpireDate"] = request.getExpireDate();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantTemplateAuthority"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantTemplateAuthorityResponse>();
}

/**
 * @summary Grants permissions on resources to users by using a permission template.
 *
 * @description You must be a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request GrantTemplateAuthorityRequest
 * @return GrantTemplateAuthorityResponse
 */
GrantTemplateAuthorityResponse Client::grantTemplateAuthority(const GrantTemplateAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantTemplateAuthorityWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on an instance, a database, or a table to a user.
 *
 * @param request GrantUserPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantUserPermissionResponse
 */
GrantUserPermissionResponse Client::grantUserPermissionWithOptions(const GrantUserPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasDsType()) {
    query["DsType"] = request.getDsType();
  }

  if (!!request.hasExpireDate()) {
    query["ExpireDate"] = request.getExpireDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPermTypes()) {
    query["PermTypes"] = request.getPermTypes();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantUserPermission"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantUserPermissionResponse>();
}

/**
 * @summary Grants permissions on an instance, a database, or a table to a user.
 *
 * @param request GrantUserPermissionRequest
 * @return GrantUserPermissionResponse
 */
GrantUserPermissionResponse Client::grantUserPermission(const GrantUserPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantUserPermissionWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to obtain the authorization password of the security protection agent InspectProxyAccessSecret.
 *
 * @param request InspectProxyAccessSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InspectProxyAccessSecretResponse
 */
InspectProxyAccessSecretResponse Client::inspectProxyAccessSecretWithOptions(const InspectProxyAccessSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyAccessId()) {
    query["ProxyAccessId"] = request.getProxyAccessId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InspectProxyAccessSecret"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InspectProxyAccessSecretResponse>();
}

/**
 * @summary You can call this operation to obtain the authorization password of the security protection agent InspectProxyAccessSecret.
 *
 * @param request InspectProxyAccessSecretRequest
 * @return InspectProxyAccessSecretResponse
 */
InspectProxyAccessSecretResponse Client::inspectProxyAccessSecret(const InspectProxyAccessSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inspectProxyAccessSecretWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users to which the specified policy is attached and the number of the users.
 *
 * @param request ListAbacAuthorizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAbacAuthorizationsResponse
 */
ListAbacAuthorizationsResponse Client::listAbacAuthorizationsWithOptions(const ListAbacAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicySource()) {
    query["PolicySource"] = request.getPolicySource();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAbacAuthorizations"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAbacAuthorizationsResponse>();
}

/**
 * @summary Queries a list of users to which the specified policy is attached and the number of the users.
 *
 * @param request ListAbacAuthorizationsRequest
 * @return ListAbacAuthorizationsResponse
 */
ListAbacAuthorizationsResponse Client::listAbacAuthorizations(const ListAbacAuthorizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAbacAuthorizationsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of policies that are created by a user.
 *
 * @param request ListAbacPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAbacPoliciesResponse
 */
ListAbacPoliciesResponse Client::listAbacPoliciesWithOptions(const ListAbacPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAbacPolicies"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAbacPoliciesResponse>();
}

/**
 * @summary Queries a list of policies that are created by a user.
 *
 * @param request ListAbacPoliciesRequest
 * @return ListAbacPoliciesResponse
 */
ListAbacPoliciesResponse Client::listAbacPolicies(const ListAbacPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAbacPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about permission templates, including the template creator, template name, and total number of templates.
 *
 * @param request ListAuthorityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorityTemplateResponse
 */
ListAuthorityTemplateResponse Client::listAuthorityTemplateWithOptions(const ListAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorityTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorityTemplateResponse>();
}

/**
 * @summary Queries the information about permission templates, including the template creator, template name, and total number of templates.
 *
 * @param request ListAuthorityTemplateRequest
 * @return ListAuthorityTemplateResponse
 */
ListAuthorityTemplateResponse Client::listAuthorityTemplate(const ListAuthorityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorityTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the databases on which the specified user has permissions.
 *
 * @param request ListAuthorizedDatabasesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedDatabasesForUserResponse
 */
ListAuthorizedDatabasesForUserResponse Client::listAuthorizedDatabasesForUserWithOptions(const ListAuthorizedDatabasesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedDatabasesForUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedDatabasesForUserResponse>();
}

/**
 * @summary Queries the databases on which the specified user has permissions.
 *
 * @param request ListAuthorizedDatabasesForUserRequest
 * @return ListAuthorizedDatabasesForUserResponse
 */
ListAuthorizedDatabasesForUserResponse Client::listAuthorizedDatabasesForUser(const ListAuthorizedDatabasesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedDatabasesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the instances on which the specified user has permissions.
 *
 * @param request ListAuthorizedInstancesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedInstancesForUserResponse
 */
ListAuthorizedInstancesForUserResponse Client::listAuthorizedInstancesForUserWithOptions(const ListAuthorizedInstancesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedInstancesForUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedInstancesForUserResponse>();
}

/**
 * @summary Queries the instances on which the specified user has permissions.
 *
 * @param request ListAuthorizedInstancesForUserRequest
 * @return ListAuthorizedInstancesForUserResponse
 */
ListAuthorizedInstancesForUserResponse Client::listAuthorizedInstancesForUser(const ListAuthorizedInstancesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedInstancesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users that have permissions on the specified database.
 *
 * @param request ListAuthorizedUsersForDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedUsersForDatabaseResponse
 */
ListAuthorizedUsersForDatabaseResponse Client::listAuthorizedUsersForDatabaseWithOptions(const ListAuthorizedUsersForDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedUsersForDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUsersForDatabaseResponse>();
}

/**
 * @summary Queries a list of users that have permissions on the specified database.
 *
 * @param request ListAuthorizedUsersForDatabaseRequest
 * @return ListAuthorizedUsersForDatabaseResponse
 */
ListAuthorizedUsersForDatabaseResponse Client::listAuthorizedUsersForDatabase(const ListAuthorizedUsersForDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedUsersForDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users that have permissions on the specified instance.
 *
 * @param request ListAuthorizedUsersForInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedUsersForInstanceResponse
 */
ListAuthorizedUsersForInstanceResponse Client::listAuthorizedUsersForInstanceWithOptions(const ListAuthorizedUsersForInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedUsersForInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUsersForInstanceResponse>();
}

/**
 * @summary Queries a list of users that have permissions on the specified instance.
 *
 * @param request ListAuthorizedUsersForInstanceRequest
 * @return ListAuthorizedUsersForInstanceResponse
 */
ListAuthorizedUsersForInstanceResponse Client::listAuthorizedUsersForInstance(const ListAuthorizedUsersForInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedUsersForInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the classification templates.
 *
 * @param request ListClassificationTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClassificationTemplatesResponse
 */
ListClassificationTemplatesResponse Client::listClassificationTemplatesWithOptions(const ListClassificationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClassificationTemplates"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClassificationTemplatesResponse>();
}

/**
 * @summary Queries the classification templates.
 *
 * @param request ListClassificationTemplatesRequest
 * @return ListClassificationTemplatesResponse
 */
ListClassificationTemplatesResponse Client::listClassificationTemplates(const ListClassificationTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClassificationTemplatesWithOptions(request, runtime);
}

/**
 * @summary Returns the column information of a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request ListColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumnsWithOptions(const ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListColumns"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListColumnsResponse>();
}

/**
 * @summary Returns the column information of a table.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request ListColumnsRequest
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumns(const ListColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the published versions of a task flow.
 *
 * @param request ListDAGVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDAGVersionsResponse
 */
ListDAGVersionsResponse Client::listDAGVersionsWithOptions(const ListDAGVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDAGVersions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDAGVersionsResponse>();
}

/**
 * @summary Queries the published versions of a task flow.
 *
 * @param request ListDAGVersionsRequest
 * @return ListDAGVersionsResponse
 */
ListDAGVersionsResponse Client::listDAGVersions(const ListDAGVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDAGVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of SQL tasks.
 *
 * @param request ListDBTaskSQLJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDBTaskSQLJobResponse
 */
ListDBTaskSQLJobResponse Client::listDBTaskSQLJobWithOptions(const ListDBTaskSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBTaskGroupId()) {
    query["DBTaskGroupId"] = request.getDBTaskGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDBTaskSQLJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDBTaskSQLJobResponse>();
}

/**
 * @summary Queries a list of SQL tasks.
 *
 * @param request ListDBTaskSQLJobRequest
 * @return ListDBTaskSQLJobResponse
 */
ListDBTaskSQLJobResponse Client::listDBTaskSQLJob(const ListDBTaskSQLJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDBTaskSQLJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an SQL task.
 *
 * @param request ListDBTaskSQLJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDBTaskSQLJobDetailResponse
 */
ListDBTaskSQLJobDetailResponse Client::listDBTaskSQLJobDetailWithOptions(const ListDBTaskSQLJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDBTaskSQLJobDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDBTaskSQLJobDetailResponse>();
}

/**
 * @summary Queries the details of an SQL task.
 *
 * @param request ListDBTaskSQLJobDetailRequest
 * @return ListDBTaskSQLJobDetailResponse
 */
ListDBTaskSQLJobDetailResponse Client::listDBTaskSQLJobDetail(const ListDBTaskSQLJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDBTaskSQLJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the publishing details of a schema design ticket.
 *
 * @param request ListDDLPublishRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDDLPublishRecordsResponse
 */
ListDDLPublishRecordsResponse Client::listDDLPublishRecordsWithOptions(const ListDDLPublishRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDDLPublishRecords"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDDLPublishRecordsResponse>();
}

/**
 * @summary Queries the publishing details of a schema design ticket.
 *
 * @param request ListDDLPublishRecordsRequest
 * @return ListDDLPublishRecordsResponse
 */
ListDDLPublishRecordsResponse Client::listDDLPublishRecords(const ListDDLPublishRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDDLPublishRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the databases that are involved in the precheck of a data change ticket.
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param request ListDataCorrectPreCheckDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataCorrectPreCheckDBResponse
 */
ListDataCorrectPreCheckDBResponse Client::listDataCorrectPreCheckDBWithOptions(const ListDataCorrectPreCheckDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataCorrectPreCheckDB"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataCorrectPreCheckDBResponse>();
}

/**
 * @summary Queries the databases that are involved in the precheck of a data change ticket.
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param request ListDataCorrectPreCheckDBRequest
 * @return ListDataCorrectPreCheckDBResponse
 */
ListDataCorrectPreCheckDBResponse Client::listDataCorrectPreCheckDB(const ListDataCorrectPreCheckDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataCorrectPreCheckDBWithOptions(request, runtime);
}

/**
 * @summary Queries the precheck information about an SQL statement that is specified in a data change ticket.
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param request ListDataCorrectPreCheckSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataCorrectPreCheckSQLResponse
 */
ListDataCorrectPreCheckSQLResponse Client::listDataCorrectPreCheckSQLWithOptions(const ListDataCorrectPreCheckSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataCorrectPreCheckSQL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataCorrectPreCheckSQLResponse>();
}

/**
 * @summary Queries the precheck information about an SQL statement that is specified in a data change ticket.
 *
 * @description For more information about the Normal Data Modify feature, see [Change regular data](https://help.aliyun.com/document_detail/58419.html).
 *
 * @param request ListDataCorrectPreCheckSQLRequest
 * @return ListDataCorrectPreCheckSQLResponse
 */
ListDataCorrectPreCheckSQLResponse Client::listDataCorrectPreCheckSQL(const ListDataCorrectPreCheckSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataCorrectPreCheckSQLWithOptions(request, runtime);
}

/**
 * @summary Queries the precheck information of SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request ListDataImportSQLPreCheckDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataImportSQLPreCheckDetailResponse
 */
ListDataImportSQLPreCheckDetailResponse Client::listDataImportSQLPreCheckDetailWithOptions(const ListDataImportSQLPreCheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageNumer()) {
    query["PageNumer"] = request.getPageNumer();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.getStatusCode();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataImportSQLPreCheckDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataImportSQLPreCheckDetailResponse>();
}

/**
 * @summary Queries the precheck information of SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request ListDataImportSQLPreCheckDetailRequest
 * @return ListDataImportSQLPreCheckDetailResponse
 */
ListDataImportSQLPreCheckDetailResponse Client::listDataImportSQLPreCheckDetail(const ListDataImportSQLPreCheckDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataImportSQLPreCheckDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the types of SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request ListDataImportSQLTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataImportSQLTypeResponse
 */
ListDataImportSQLTypeResponse Client::listDataImportSQLTypeWithOptions(const ListDataImportSQLTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataImportSQLType"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataImportSQLTypeResponse>();
}

/**
 * @summary Queries the types of SQL statements used for data import in a ticket.
 *
 * @description You can call this operation only if the data is imported in security mode in your data import ticket.
 *
 * @param request ListDataImportSQLTypeRequest
 * @return ListDataImportSQLTypeResponse
 */
ListDataImportSQLTypeResponse Client::listDataImportSQLType(const ListDataImportSQLTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataImportSQLTypeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data catalogs in a data lake.
 *
 * @param request ListDataLakeCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeCatalogResponse
 */
ListDataLakeCatalogResponse Client::listDataLakeCatalogWithOptions(const ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeCatalog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeCatalogResponse>();
}

/**
 * @summary Queries a list of data catalogs in a data lake.
 *
 * @param request ListDataLakeCatalogRequest
 * @return ListDataLakeCatalogResponse
 */
ListDataLakeCatalogResponse Client::listDataLakeCatalog(const ListDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary Queries the list of databases in the data lake.
 *
 * @param request ListDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeDatabaseResponse
 */
ListDataLakeDatabaseResponse Client::listDataLakeDatabaseWithOptions(const ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeDatabaseResponse>();
}

/**
 * @summary Queries the list of databases in the data lake.
 *
 * @param request ListDataLakeDatabaseRequest
 * @return ListDataLakeDatabaseResponse
 */
ListDataLakeDatabaseResponse Client::listDataLakeDatabase(const ListDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries a list of functions in a data lake.
 *
 * @param request ListDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeFunctionResponse
 */
ListDataLakeFunctionResponse Client::listDataLakeFunctionWithOptions(const ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.getFunctionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeFunction"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeFunctionResponse>();
}

/**
 * @summary Queries a list of functions in a data lake.
 *
 * @param request ListDataLakeFunctionRequest
 * @return ListDataLakeFunctionResponse
 */
ListDataLakeFunctionResponse Client::listDataLakeFunction(const ListDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Gets a list of data lake function names.
 *
 * @param request ListDataLakeFunctionNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeFunctionNameResponse
 */
ListDataLakeFunctionNameResponse Client::listDataLakeFunctionNameWithOptions(const ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.getFunctionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeFunctionName"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeFunctionNameResponse>();
}

/**
 * @summary Gets a list of data lake function names.
 *
 * @param request ListDataLakeFunctionNameRequest
 * @return ListDataLakeFunctionNameResponse
 */
ListDataLakeFunctionNameResponse Client::listDataLakeFunctionName(const ListDataLakeFunctionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionNameWithOptions(request, runtime);
}

/**
 * @summary Queries a list of partitions of a table in a data lake.
 *
 * @param tmpReq ListDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionResponse
 */
ListDataLakePartitionResponse Client::listDataLakePartitionWithOptions(const ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataLakePartitionShrinkRequest request = ListDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartNames()) {
    request.setPartNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartNames(), "PartNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartNamesShrink()) {
    body["PartNames"] = request.getPartNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataLakePartition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionResponse>();
}

/**
 * @summary Queries a list of partitions of a table in a data lake.
 *
 * @param request ListDataLakePartitionRequest
 * @return ListDataLakePartitionResponse
 */
ListDataLakePartitionResponse Client::listDataLakePartition(const ListDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of partitions of a table in a data lake based on filter conditions.
 *
 * @param request ListDataLakePartitionByFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionByFilterResponse
 */
ListDataLakePartitionByFilterResponse Client::listDataLakePartitionByFilterWithOptions(const ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataLakePartitionByFilter"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionByFilterResponse>();
}

/**
 * @summary Queries a list of partitions of a table in a data lake based on filter conditions.
 *
 * @param request ListDataLakePartitionByFilterRequest
 * @return ListDataLakePartitionByFilterResponse
 */
ListDataLakePartitionByFilterResponse Client::listDataLakePartitionByFilter(const ListDataLakePartitionByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionByFilterWithOptions(request, runtime);
}

/**
 * @summary Queries a list of partition names of a table in a data lake.
 *
 * @param request ListDataLakePartitionNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionNameResponse
 */
ListDataLakePartitionNameResponse Client::listDataLakePartitionNameWithOptions(const ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakePartitionName"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionNameResponse>();
}

/**
 * @summary Queries a list of partition names of a table in a data lake.
 *
 * @param request ListDataLakePartitionNameRequest
 * @return ListDataLakePartitionNameResponse
 */
ListDataLakePartitionNameResponse Client::listDataLakePartitionName(const ListDataLakePartitionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionNameWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables in a data lake.
 *
 * @param request ListDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTableResponse
 */
ListDataLakeTableResponse Client::listDataLakeTableWithOptions(const ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.getTableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTableResponse>();
}

/**
 * @summary Queries a list of tables in a data lake.
 *
 * @param request ListDataLakeTableRequest
 * @return ListDataLakeTableResponse
 */
ListDataLakeTableResponse Client::listDataLakeTable(const ListDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Queries a list of names of tables in a data lake.
 *
 * @param request ListDataLakeTableNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTableNameResponse
 */
ListDataLakeTableNameResponse Client::listDataLakeTableNameWithOptions(const ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.getTableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTableName"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTableNameResponse>();
}

/**
 * @summary Queries a list of names of tables in a data lake.
 *
 * @param request ListDataLakeTableNameRequest
 * @return ListDataLakeTableNameResponse
 */
ListDataLakeTableNameResponse Client::listDataLakeTableName(const ListDataLakeTableNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableNameWithOptions(request, runtime);
}

/**
 * @summary Queries basic information about tables in the data lake.
 *
 * @param request ListDataLakeTablebaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTablebaseInfoResponse
 */
ListDataLakeTablebaseInfoResponse Client::listDataLakeTablebaseInfoWithOptions(const ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasRows()) {
    query["Rows"] = request.getRows();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTablebaseInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTablebaseInfoResponse>();
}

/**
 * @summary Queries basic information about tables in the data lake.
 *
 * @param request ListDataLakeTablebaseInfoRequest
 * @return ListDataLakeTablebaseInfoResponse
 */
ListDataLakeTablebaseInfoResponse Client::listDataLakeTablebaseInfo(const ListDataLakeTablebaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTablebaseInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of users on a database.
 *
 * @param request ListDatabaseUserPermssionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseUserPermssionsResponse
 */
ListDatabaseUserPermssionsResponse Client::listDatabaseUserPermssionsWithOptions(const ListDatabaseUserPermssionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPermType()) {
    query["PermType"] = request.getPermType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseUserPermssions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseUserPermssionsResponse>();
}

/**
 * @summary Queries the permissions of users on a database.
 *
 * @param request ListDatabaseUserPermssionsRequest
 * @return ListDatabaseUserPermssionsResponse
 */
ListDatabaseUserPermssionsResponse Client::listDatabaseUserPermssions(const ListDatabaseUserPermssionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseUserPermssionsWithOptions(request, runtime);
}

/**
 * @summary Queries the databases in a database instance.
 *
 * @param request ListDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Queries the databases in a database instance.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries the default service level agreement (SLA) timeout rules.
 *
 * @param request ListDefaultSLARulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDefaultSLARulesResponse
 */
ListDefaultSLARulesResponse Client::listDefaultSLARulesWithOptions(const ListDefaultSLARulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDefaultSLARules"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDefaultSLARulesResponse>();
}

/**
 * @summary Queries the default service level agreement (SLA) timeout rules.
 *
 * @param request ListDefaultSLARulesRequest
 * @return ListDefaultSLARulesResponse
 */
ListDefaultSLARulesResponse Client::listDefaultSLARules(const ListDefaultSLARulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDefaultSLARulesWithOptions(request, runtime);
}

/**
 * @summary Queries masking rules.
 *
 * @param request ListDesensitizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDesensitizationRuleResponse
 */
ListDesensitizationRuleResponse Client::listDesensitizationRuleWithOptions(const ListDesensitizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFuncType()) {
    query["FuncType"] = request.getFuncType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDesensitizationRule"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDesensitizationRuleResponse>();
}

/**
 * @summary Queries masking rules.
 *
 * @param request ListDesensitizationRuleRequest
 * @return ListDesensitizationRuleResponse
 */
ListDesensitizationRuleResponse Client::listDesensitizationRule(const ListDesensitizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDesensitizationRuleWithOptions(request, runtime);
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request ListDifyInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDifyInstancesResponse
 */
ListDifyInstancesResponse Client::listDifyInstancesWithOptions(const ListDifyInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDifyInstances"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDifyInstancesResponse>();
}

/**
 * @summary 用于创建DIFY实例及相关资源，支持自定义配置。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request ListDifyInstancesRequest
 * @return ListDifyInstancesResponse
 */
ListDifyInstancesResponse Client::listDifyInstances(const ListDifyInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDifyInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries valid orders.
 *
 * @param request ListEffectiveOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEffectiveOrdersResponse
 */
ListEffectiveOrdersResponse Client::listEffectiveOrdersWithOptions(const ListEffectiveOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEffectiveOrders"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEffectiveOrdersResponse>();
}

/**
 * @summary Queries valid orders.
 *
 * @param request ListEffectiveOrdersRequest
 * @return ListEffectiveOrdersResponse
 */
ListEffectiveOrdersResponse Client::listEffectiveOrders(const ListEffectiveOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEffectiveOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries the indexes of a table.
 *
 * @param request ListIndexesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexesResponse
 */
ListIndexesResponse Client::listIndexesWithOptions(const ListIndexesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexes"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexesResponse>();
}

/**
 * @summary Queries the indexes of a table.
 *
 * @param request ListIndexesRequest
 * @return ListIndexesResponse
 */
ListIndexesResponse Client::listIndexes(const ListIndexesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIndexesWithOptions(request, runtime);
}

/**
 * @summary Queries the logon records of an instance.
 *
 * @param request ListInstanceLoginAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceLoginAuditLogResponse
 */
ListInstanceLoginAuditLogResponse Client::listInstanceLoginAuditLogWithOptions(const ListInstanceLoginAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOpUserName()) {
    query["OpUserName"] = request.getOpUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceLoginAuditLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceLoginAuditLogResponse>();
}

/**
 * @summary Queries the logon records of an instance.
 *
 * @param request ListInstanceLoginAuditLogRequest
 * @return ListInstanceLoginAuditLogResponse
 */
ListInstanceLoginAuditLogResponse Client::listInstanceLoginAuditLog(const ListInstanceLoginAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceLoginAuditLogWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of a user on a specific instance.
 *
 * @param request ListInstanceUserPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceUserPermissionsResponse
 */
ListInstanceUserPermissionsResponse Client::listInstanceUserPermissionsWithOptions(const ListInstanceUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceUserPermissions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceUserPermissionsResponse>();
}

/**
 * @summary Queries the permissions of a user on a specific instance.
 *
 * @param request ListInstanceUserPermissionsRequest
 * @return ListInstanceUserPermissionsResponse
 */
ListInstanceUserPermissionsResponse Client::listInstanceUserPermissions(const ListInstanceUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceUserPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about database instances.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasInstanceSource()) {
    query["InstanceSource"] = request.getInstanceSource();
  }

  if (!!request.hasInstanceState()) {
    query["InstanceState"] = request.getInstanceState();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries the information about database instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the task flows corresponding to a specific business scenario in a workspace in Data Management (DMS).
 *
 * @description *   Before you call this operation, make sure that you have the access permissions on the workspace. If you do not have the access permissions on the workspace, you can contact a DMS administrator, database administrator (DBA), or workspace administrator to add you as a member of the workspace. The [AddLhMembers](https://help.aliyun.com/document_detail/424759.html) operation can be called to add a workspace member.
 * *   If you are a DMS administrator or a workspace administrator, you can query the business scenarios and task flows related to a user in a workspace based on the user ID.
 *
 * @param request ListLhTaskFlowAndScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLhTaskFlowAndScenarioResponse
 */
ListLhTaskFlowAndScenarioResponse Client::listLhTaskFlowAndScenarioWithOptions(const ListLhTaskFlowAndScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceId()) {
    query["SpaceId"] = request.getSpaceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLhTaskFlowAndScenario"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLhTaskFlowAndScenarioResponse>();
}

/**
 * @summary Queries the task flows corresponding to a specific business scenario in a workspace in Data Management (DMS).
 *
 * @description *   Before you call this operation, make sure that you have the access permissions on the workspace. If you do not have the access permissions on the workspace, you can contact a DMS administrator, database administrator (DBA), or workspace administrator to add you as a member of the workspace. The [AddLhMembers](https://help.aliyun.com/document_detail/424759.html) operation can be called to add a workspace member.
 * *   If you are a DMS administrator or a workspace administrator, you can query the business scenarios and task flows related to a user in a workspace based on the user ID.
 *
 * @param request ListLhTaskFlowAndScenarioRequest
 * @return ListLhTaskFlowAndScenarioResponse
 */
ListLhTaskFlowAndScenarioResponse Client::listLhTaskFlowAndScenario(const ListLhTaskFlowAndScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLhTaskFlowAndScenarioWithOptions(request, runtime);
}

/**
 * @summary Queries the details of logical databases.
 *
 * @param request ListLogicDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogicDatabasesResponse
 */
ListLogicDatabasesResponse Client::listLogicDatabasesWithOptions(const ListLogicDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogicDatabases"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogicDatabasesResponse>();
}

/**
 * @summary Queries the details of logical databases.
 *
 * @param request ListLogicDatabasesRequest
 * @return ListLogicDatabasesResponse
 */
ListLogicDatabasesResponse Client::listLogicDatabases(const ListLogicDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogicDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries the routing algorithms of a logical table.
 *
 * @param request ListLogicTableRouteConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogicTableRouteConfigResponse
 */
ListLogicTableRouteConfigResponse Client::listLogicTableRouteConfigWithOptions(const ListLogicTableRouteConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogicTableRouteConfig"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogicTableRouteConfigResponse>();
}

/**
 * @summary Queries the routing algorithms of a logical table.
 *
 * @param request ListLogicTableRouteConfigRequest
 * @return ListLogicTableRouteConfigResponse
 */
ListLogicTableRouteConfigResponse Client::listLogicTableRouteConfig(const ListLogicTableRouteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogicTableRouteConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the logical tables in a logical database.
 *
 * @param request ListLogicTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogicTablesResponse
 */
ListLogicTablesResponse Client::listLogicTablesWithOptions(const ListLogicTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReturnGuid()) {
    query["ReturnGuid"] = request.getReturnGuid();
  }

  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogicTables"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogicTablesResponse>();
}

/**
 * @summary Queries the details of the logical tables in a logical database.
 *
 * @param request ListLogicTablesRequest
 * @return ListLogicTablesResponse
 */
ListLogicTablesResponse Client::listLogicTables(const ListLogicTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogicTablesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of categories
 *
 * @param request ListMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaCategoryResponse
 */
ListMetaCategoryResponse Client::listMetaCategoryWithOptions(const ListMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentCategoryId()) {
    query["ParentCategoryId"] = request.getParentCategoryId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetaCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaCategoryResponse>();
}

/**
 * @summary Queries a list of categories
 *
 * @param request ListMetaCategoryRequest
 * @return ListMetaCategoryResponse
 */
ListMetaCategoryResponse Client::listMetaCategory(const ListMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries tickets in Data Management (DMS).
 *
 * @param request ListOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrdersResponse
 */
ListOrdersResponse Client::listOrdersWithOptions(const ListOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOrderResultType()) {
    query["OrderResultType"] = request.getOrderResultType();
  }

  if (!!request.hasOrderStatus()) {
    query["OrderStatus"] = request.getOrderStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginType()) {
    query["PluginType"] = request.getPluginType();
  }

  if (!!request.hasSearchContent()) {
    query["SearchContent"] = request.getSearchContent();
  }

  if (!!request.hasSearchDateType()) {
    query["SearchDateType"] = request.getSearchDateType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrders"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrdersResponse>();
}

/**
 * @summary Queries tickets in Data Management (DMS).
 *
 * @param request ListOrdersRequest
 * @return ListOrdersResponse
 */
ListOrdersResponse Client::listOrders(const ListOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries the proxies that are generated by the secure access proxy feature.
 *
 * @param request ListProxiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProxiesResponse
 */
ListProxiesResponse Client::listProxiesWithOptions(const ListProxiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProxies"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProxiesResponse>();
}

/**
 * @summary Queries the proxies that are generated by the secure access proxy feature.
 *
 * @param request ListProxiesRequest
 * @return ListProxiesResponse
 */
ListProxiesResponse Client::listProxies(const ListProxiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProxiesWithOptions(request, runtime);
}

/**
 * @summary Queries information about users that are authorized to access a database instance by using the secure access proxy feature.
 *
 * @param request ListProxyAccessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProxyAccessesResponse
 */
ListProxyAccessesResponse Client::listProxyAccessesWithOptions(const ListProxyAccessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProxyAccesses"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProxyAccessesResponse>();
}

/**
 * @summary Queries information about users that are authorized to access a database instance by using the secure access proxy feature.
 *
 * @param request ListProxyAccessesRequest
 * @return ListProxyAccessesResponse
 */
ListProxyAccessesResponse Client::listProxyAccesses(const ListProxyAccessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProxyAccessesWithOptions(request, runtime);
}

/**
 * @summary 操作审计-数据安全代理SQL执行列表
 *
 * @param request ListProxySQLExecAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProxySQLExecAuditLogResponse
 */
ListProxySQLExecAuditLogResponse Client::listProxySQLExecAuditLogWithOptions(const ListProxySQLExecAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecState()) {
    query["ExecState"] = request.getExecState();
  }

  if (!!request.hasOpUserName()) {
    query["OpUserName"] = request.getOpUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSQLType()) {
    query["SQLType"] = request.getSQLType();
  }

  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProxySQLExecAuditLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProxySQLExecAuditLogResponse>();
}

/**
 * @summary 操作审计-数据安全代理SQL执行列表
 *
 * @param request ListProxySQLExecAuditLogRequest
 * @return ListProxySQLExecAuditLogResponse
 */
ListProxySQLExecAuditLogResponse Client::listProxySQLExecAuditLog(const ListProxySQLExecAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProxySQLExecAuditLogWithOptions(request, runtime);
}

/**
 * @summary Queries the custom service level agreement (SLA) rules.
 *
 * @param request ListSLARulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSLARulesResponse
 */
ListSLARulesResponse Client::listSLARulesWithOptions(const ListSLARulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSLARules"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSLARulesResponse>();
}

/**
 * @summary Queries the custom service level agreement (SLA) rules.
 *
 * @param request ListSLARulesRequest
 * @return ListSLARulesResponse
 */
ListSLARulesResponse Client::listSLARules(const ListSLARulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSLARulesWithOptions(request, runtime);
}

/**
 * @summary Queries SQL statements that were written on the SQLConsole tab.
 *
 * @param request ListSQLExecAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSQLExecAuditLogResponse
 */
ListSQLExecAuditLogResponse Client::listSQLExecAuditLogWithOptions(const ListSQLExecAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecState()) {
    query["ExecState"] = request.getExecState();
  }

  if (!!request.hasOpUserName()) {
    query["OpUserName"] = request.getOpUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSQLExecAuditLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSQLExecAuditLogResponse>();
}

/**
 * @summary Queries SQL statements that were written on the SQLConsole tab.
 *
 * @param request ListSQLExecAuditLogRequest
 * @return ListSQLExecAuditLogResponse
 */
ListSQLExecAuditLogResponse Client::listSQLExecAuditLog(const ListSQLExecAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSQLExecAuditLogWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the SQL statements that are involved in an SQL review ticket.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param tmpReq ListSQLReviewOriginSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSQLReviewOriginSQLResponse
 */
ListSQLReviewOriginSQLResponse Client::listSQLReviewOriginSQLWithOptions(const ListSQLReviewOriginSQLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSQLReviewOriginSQLShrinkRequest request = ListSQLReviewOriginSQLShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderActionDetail()) {
    request.setOrderActionDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderActionDetail(), "OrderActionDetail", "json"));
  }

  json query = {};
  if (!!request.hasOrderActionDetailShrink()) {
    query["OrderActionDetail"] = request.getOrderActionDetailShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSQLReviewOriginSQL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSQLReviewOriginSQLResponse>();
}

/**
 * @summary Queries the details of the SQL statements that are involved in an SQL review ticket.
 *
 * @description For more information about the SQL review feature, see [SQL review](https://help.aliyun.com/document_detail/60374.html).
 *
 * @param request ListSQLReviewOriginSQLRequest
 * @return ListSQLReviewOriginSQLResponse
 */
ListSQLReviewOriginSQLResponse Client::listSQLReviewOriginSQL(const ListSQLReviewOriginSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSQLReviewOriginSQLWithOptions(request, runtime);
}

/**
 * @summary Queries business scenarios.
 *
 * @param request ListScenariosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScenariosResponse
 */
ListScenariosResponse Client::listScenariosWithOptions(const ListScenariosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScenarios"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScenariosResponse>();
}

/**
 * @summary Queries business scenarios.
 *
 * @param request ListScenariosRequest
 * @return ListScenariosResponse
 */
ListScenariosResponse Client::listScenarios(const ListScenariosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScenariosWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a sensitive field. The information includes the masking algorithm ID, masking algorithm name, and field security level.
 *
 * @param request ListSensitiveColumnInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSensitiveColumnInfoResponse
 */
ListSensitiveColumnInfoResponse Client::listSensitiveColumnInfoWithOptions(const ListSensitiveColumnInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSensitiveColumnInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSensitiveColumnInfoResponse>();
}

/**
 * @summary Queries the information about a sensitive field. The information includes the masking algorithm ID, masking algorithm name, and field security level.
 *
 * @param request ListSensitiveColumnInfoRequest
 * @return ListSensitiveColumnInfoResponse
 */
ListSensitiveColumnInfoResponse Client::listSensitiveColumnInfo(const ListSensitiveColumnInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSensitiveColumnInfoWithOptions(request, runtime);
}

/**
 * @summary Queries sensitive fields in a table of a database.
 *
 * @param request ListSensitiveColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSensitiveColumnsResponse
 */
ListSensitiveColumnsResponse Client::listSensitiveColumnsWithOptions(const ListSensitiveColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasSecurityLevel()) {
    query["SecurityLevel"] = request.getSecurityLevel();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSensitiveColumns"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSensitiveColumnsResponse>();
}

/**
 * @summary Queries sensitive fields in a table of a database.
 *
 * @param request ListSensitiveColumnsRequest
 * @return ListSensitiveColumnsResponse
 */
ListSensitiveColumnsResponse Client::listSensitiveColumns(const ListSensitiveColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSensitiveColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a sensitive field.
 *
 * @param request ListSensitiveColumnsDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSensitiveColumnsDetailResponse
 */
ListSensitiveColumnsDetailResponse Client::listSensitiveColumnsDetailWithOptions(const ListSensitiveColumnsDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSensitiveColumnsDetail"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSensitiveColumnsDetailResponse>();
}

/**
 * @summary Queries the details of a sensitive field.
 *
 * @param request ListSensitiveColumnsDetailRequest
 * @return ListSensitiveColumnsDetailResponse
 */
ListSensitiveColumnsDetailResponse Client::listSensitiveColumnsDetail(const ListSensitiveColumnsDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSensitiveColumnsDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the audit logs for sensitive information.
 *
 * @param request ListSensitiveDataAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSensitiveDataAuditLogResponse
 */
ListSensitiveDataAuditLogResponse Client::listSensitiveDataAuditLogWithOptions(const ListSensitiveDataAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.getModuleName();
  }

  if (!!request.hasOpUserName()) {
    query["OpUserName"] = request.getOpUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSensitiveDataAuditLog"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSensitiveDataAuditLogResponse>();
}

/**
 * @summary Queries the audit logs for sensitive information.
 *
 * @param request ListSensitiveDataAuditLogRequest
 * @return ListSensitiveDataAuditLogResponse
 */
ListSensitiveDataAuditLogResponse Client::listSensitiveDataAuditLog(const ListSensitiveDataAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSensitiveDataAuditLogWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitivity levels of a classification template.
 *
 * @param request ListSensitivityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSensitivityLevelResponse
 */
ListSensitivityLevelResponse Client::listSensitivityLevelWithOptions(const ListSensitivityLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSensitivityLevel"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSensitivityLevelResponse>();
}

/**
 * @summary Queries the sensitivity levels of a classification template.
 *
 * @param request ListSensitivityLevelRequest
 * @return ListSensitivityLevelResponse
 */
ListSensitivityLevelResponse Client::listSensitivityLevel(const ListSensitivityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSensitivityLevelWithOptions(request, runtime);
}

/**
 * @summary Queries security rule sets.
 *
 * @param request ListStandardGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStandardGroupsResponse
 */
ListStandardGroupsResponse Client::listStandardGroupsWithOptions(const ListStandardGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStandardGroups"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStandardGroupsResponse>();
}

/**
 * @summary Queries security rule sets.
 *
 * @param request ListStandardGroupsRequest
 * @return ListStandardGroupsResponse
 */
ListStandardGroupsResponse Client::listStandardGroups(const ListStandardGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStandardGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details about fields in a table.
 *
 * @param request ListTableColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableColumnsResponse
 */
ListTableColumnsResponse Client::listTableColumnsWithOptions(const ListTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableSchemaName()) {
    query["TableSchemaName"] = request.getTableSchemaName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableColumns"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableColumnsResponse>();
}

/**
 * @summary Queries the details about fields in a table.
 *
 * @param request ListTableColumnsRequest
 * @return ListTableColumnsResponse
 */
ListTableColumnsResponse Client::listTableColumns(const ListTableColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTableColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the tables in a database.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasReturnGuid()) {
    query["ReturnGuid"] = request.getReturnGuid();
  }

  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries the tables in a database.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Obtains the list of tables in a category.
 *
 * @param request ListTablesInCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesInCategoryResponse
 */
ListTablesInCategoryResponse Client::listTablesInCategoryWithOptions(const ListTablesInCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTablesInCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesInCategoryResponse>();
}

/**
 * @summary Obtains the list of tables in a category.
 *
 * @param request ListTablesInCategoryRequest
 * @return ListTablesInCategoryResponse
 */
ListTablesInCategoryResponse Client::listTablesInCategory(const ListTablesInCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesInCategoryWithOptions(request, runtime);
}

/**
 * @summary 任务编排获取任务流列表
 *
 * @param request ListTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowResponse
 */
ListTaskFlowResponse Client::listTaskFlowWithOptions(const ListTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowResponse>();
}

/**
 * @summary 任务编排获取任务流列表
 *
 * @param request ListTaskFlowRequest
 * @return ListTaskFlowResponse
 */
ListTaskFlowResponse Client::listTaskFlow(const ListTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the constants for a task flow.
 *
 * @param request ListTaskFlowConstantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowConstantsResponse
 */
ListTaskFlowConstantsResponse Client::listTaskFlowConstantsWithOptions(const ListTaskFlowConstantsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowConstants"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowConstantsResponse>();
}

/**
 * @summary Queries the constants for a task flow.
 *
 * @param request ListTaskFlowConstantsRequest
 * @return ListTaskFlowConstantsResponse
 */
ListTaskFlowConstantsResponse Client::listTaskFlowConstants(const ListTaskFlowConstantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowConstantsWithOptions(request, runtime);
}

/**
 * @summary Queries the users that are involved in a specified task flow.
 *
 * @param request ListTaskFlowCooperatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowCooperatorsResponse
 */
ListTaskFlowCooperatorsResponse Client::listTaskFlowCooperatorsWithOptions(const ListTaskFlowCooperatorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowCooperators"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowCooperatorsResponse>();
}

/**
 * @summary Queries the users that are involved in a specified task flow.
 *
 * @param request ListTaskFlowCooperatorsRequest
 * @return ListTaskFlowCooperatorsResponse
 */
ListTaskFlowCooperatorsResponse Client::listTaskFlowCooperators(const ListTaskFlowCooperatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowCooperatorsWithOptions(request, runtime);
}

/**
 * @summary Queries the edges of the directed acyclic graph (DAG) for a specified task flow based on multiple conditions.
 *
 * @description This operation is used for multi-condition query. You can call this operation to query the edges of a specified task flow that meet all specified conditions.
 *
 * @param request ListTaskFlowEdgesByConditionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowEdgesByConditionResponse
 */
ListTaskFlowEdgesByConditionResponse Client::listTaskFlowEdgesByConditionWithOptions(const ListTaskFlowEdgesByConditionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasNodeEnd()) {
    query["NodeEnd"] = request.getNodeEnd();
  }

  if (!!request.hasNodeFrom()) {
    query["NodeFrom"] = request.getNodeFrom();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowEdgesByCondition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowEdgesByConditionResponse>();
}

/**
 * @summary Queries the edges of the directed acyclic graph (DAG) for a specified task flow based on multiple conditions.
 *
 * @description This operation is used for multi-condition query. You can call this operation to query the edges of a specified task flow that meet all specified conditions.
 *
 * @param request ListTaskFlowEdgesByConditionRequest
 * @return ListTaskFlowEdgesByConditionResponse
 */
ListTaskFlowEdgesByConditionResponse Client::listTaskFlowEdgesByCondition(const ListTaskFlowEdgesByConditionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowEdgesByConditionWithOptions(request, runtime);
}

/**
 * @summary Queries the execution records of a task flow.
 *
 * @param request ListTaskFlowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowInstanceResponse
 */
ListTaskFlowInstanceResponse Client::listTaskFlowInstanceWithOptions(const ListTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTimeBegin()) {
    query["StartTimeBegin"] = request.getStartTimeBegin();
  }

  if (!!request.hasStartTimeEnd()) {
    query["StartTimeEnd"] = request.getStartTimeEnd();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.getTriggerType();
  }

  if (!!request.hasUseBizDate()) {
    query["UseBizDate"] = request.getUseBizDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowInstanceResponse>();
}

/**
 * @summary Queries the execution records of a task flow.
 *
 * @param request ListTaskFlowInstanceRequest
 * @return ListTaskFlowInstanceResponse
 */
ListTaskFlowInstanceResponse Client::listTaskFlowInstance(const ListTaskFlowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the time variables for a task flow.
 *
 * @param request ListTaskFlowTimeVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowTimeVariablesResponse
 */
ListTaskFlowTimeVariablesResponse Client::listTaskFlowTimeVariablesWithOptions(const ListTaskFlowTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowTimeVariables"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowTimeVariablesResponse>();
}

/**
 * @summary Queries the time variables for a task flow.
 *
 * @param request ListTaskFlowTimeVariablesRequest
 * @return ListTaskFlowTimeVariablesResponse
 */
ListTaskFlowTimeVariablesResponse Client::listTaskFlowTimeVariables(const ListTaskFlowTimeVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowTimeVariablesWithOptions(request, runtime);
}

/**
 * @summary Queries task flows by page.
 *
 * @param tmpReq ListTaskFlowsByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskFlowsByPageResponse
 */
ListTaskFlowsByPageResponse Client::listTaskFlowsByPageWithOptions(const ListTaskFlowsByPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTaskFlowsByPageShrinkRequest request = ListTaskFlowsByPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDagIdList()) {
    request.setDagIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDagIdList(), "DagIdList", "json"));
  }

  json query = {};
  if (!!request.hasDagIdListShrink()) {
    query["DagIdList"] = request.getDagIdListShrink();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskFlowsByPage"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskFlowsByPageResponse>();
}

/**
 * @summary Queries task flows by page.
 *
 * @param request ListTaskFlowsByPageRequest
 * @return ListTaskFlowsByPageResponse
 */
ListTaskFlowsByPageResponse Client::listTaskFlowsByPage(const ListTaskFlowsByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskFlowsByPageWithOptions(request, runtime);
}

/**
 * @summary Queries the tasks in a specified task flow.
 *
 * @param request ListTasksInTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksInTaskFlowResponse
 */
ListTasksInTaskFlowResponse Client::listTasksInTaskFlowWithOptions(const ListTasksInTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasksInTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksInTaskFlowResponse>();
}

/**
 * @summary Queries the tasks in a specified task flow.
 *
 * @param request ListTasksInTaskFlowRequest
 * @return ListTasksInTaskFlowResponse
 */
ListTasksInTaskFlowResponse Client::listTasksInTaskFlow(const ListTasksInTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTasksInTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Obtains
 *
 * @param request ListUserOwnedResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserOwnedResourcesResponse
 */
ListUserOwnedResourcesResponse Client::listUserOwnedResourcesWithOptions(const ListUserOwnedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasOwnerType()) {
    query["OwnerType"] = request.getOwnerType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserOwnedResources"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserOwnedResourcesResponse>();
}

/**
 * @summary Obtains
 *
 * @param request ListUserOwnedResourcesRequest
 * @return ListUserOwnedResourcesResponse
 */
ListUserOwnedResourcesResponse Client::listUserOwnedResources(const ListUserOwnedResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserOwnedResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of a specific user on a database or a table.
 *
 * @param request ListUserPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPermissionsResponse
 */
ListUserPermissionsResponse Client::listUserPermissionsWithOptions(const ListUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPermType()) {
    query["PermType"] = request.getPermType();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserPermissions"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPermissionsResponse>();
}

/**
 * @summary Queries the permissions of a specific user on a database or a table.
 *
 * @param request ListUserPermissionsRequest
 * @return ListUserPermissionsResponse
 */
ListUserPermissionsResponse Client::listUserPermissions(const ListUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPermissionsWithOptions(request, runtime);
}

/**
 * @summary 获取用户租户列表
 *
 * @param request ListUserTenantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserTenantsResponse
 */
ListUserTenantsResponse Client::listUserTenantsWithOptions(const ListUserTenantsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserTenants"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserTenantsResponse>();
}

/**
 * @summary 获取用户租户列表
 *
 * @param request ListUserTenantsRequest
 * @return ListUserTenantsResponse
 */
ListUserTenantsResponse Client::listUserTenants(const ListUserTenantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserTenantsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of users.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserState()) {
    query["UserState"] = request.getUserState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries the details of users.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Queries approval nodes.
 *
 * @param request ListWorkFlowNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkFlowNodesResponse
 */
ListWorkFlowNodesResponse Client::listWorkFlowNodesWithOptions(const ListWorkFlowNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkFlowNodes"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkFlowNodesResponse>();
}

/**
 * @summary Queries approval nodes.
 *
 * @param request ListWorkFlowNodesRequest
 * @return ListWorkFlowNodesResponse
 */
ListWorkFlowNodesResponse Client::listWorkFlowNodes(const ListWorkFlowNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkFlowNodesWithOptions(request, runtime);
}

/**
 * @summary Queries approval templates.
 *
 * @param request ListWorkFlowTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkFlowTemplatesResponse
 */
ListWorkFlowTemplatesResponse Client::listWorkFlowTemplatesWithOptions(const ListWorkFlowTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchName()) {
    query["SearchName"] = request.getSearchName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkFlowTemplates"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkFlowTemplatesResponse>();
}

/**
 * @summary Queries approval templates.
 *
 * @param request ListWorkFlowTemplatesRequest
 * @return ListWorkFlowTemplatesResponse
 */
ListWorkFlowTemplatesResponse Client::listWorkFlowTemplates(const ListWorkFlowTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkFlowTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workspaces of the tenant.
 *
 * @param request ListWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlreadyJoined()) {
    query["AlreadyJoined"] = request.getAlreadyJoined();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasServiceAccountId()) {
    query["ServiceAccountId"] = request.getServiceAccountId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Queries a list of workspaces of the tenant.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspacesWithOptions(request, runtime);
}

/**
 * @summary Sets the status of a task flow to "Successful".
 *
 * @param request MakeTaskFlowInstanceSuccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeTaskFlowInstanceSuccessResponse
 */
MakeTaskFlowInstanceSuccessResponse Client::makeTaskFlowInstanceSuccessWithOptions(const MakeTaskFlowInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MakeTaskFlowInstanceSuccess"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MakeTaskFlowInstanceSuccessResponse>();
}

/**
 * @summary Sets the status of a task flow to "Successful".
 *
 * @param request MakeTaskFlowInstanceSuccessRequest
 * @return MakeTaskFlowInstanceSuccessResponse
 */
MakeTaskFlowInstanceSuccessResponse Client::makeTaskFlowInstanceSuccess(const MakeTaskFlowInstanceSuccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeTaskFlowInstanceSuccessWithOptions(request, runtime);
}

/**
 * @summary Modifies the SQL script that is submitted by using a data change ticket.
 *
 * @param request ModifyDataCorrectExecSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataCorrectExecSQLResponse
 */
ModifyDataCorrectExecSQLResponse Client::modifyDataCorrectExecSQLWithOptions(const ModifyDataCorrectExecSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecSQL()) {
    query["ExecSQL"] = request.getExecSQL();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDataCorrectExecSQL"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataCorrectExecSQLResponse>();
}

/**
 * @summary Modifies the SQL script that is submitted by using a data change ticket.
 *
 * @param request ModifyDataCorrectExecSQLRequest
 * @return ModifyDataCorrectExecSQLResponse
 */
ModifyDataCorrectExecSQLResponse Client::modifyDataCorrectExecSQL(const ModifyDataCorrectExecSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataCorrectExecSQLWithOptions(request, runtime);
}

/**
 * @summary Modifies the masking rule bound to a specified field.
 *
 * @param request ModifyDesensitizationStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesensitizationStrategyResponse
 */
ModifyDesensitizationStrategyResponse Client::modifyDesensitizationStrategyWithOptions(const ModifyDesensitizationStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasIsLogic()) {
    query["IsLogic"] = request.getIsLogic();
  }

  if (!!request.hasIsReset()) {
    query["IsReset"] = request.getIsReset();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesensitizationStrategy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesensitizationStrategyResponse>();
}

/**
 * @summary Modifies the masking rule bound to a specified field.
 *
 * @param request ModifyDesensitizationStrategyRequest
 * @return ModifyDesensitizationStrategyResponse
 */
ModifyDesensitizationStrategyResponse Client::modifyDesensitizationStrategy(const ModifyDesensitizationStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesensitizationStrategyWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic and advanced information about a database instance in Data Management (DMS). The basic information includes the hosting mode of the instance, the instance account username and password, and features that are enabled for the instance. The advanced information includes the environment type, the instance name in DMS, and the timeout period for querying and exporting data.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLinkName()) {
    query["DataLinkName"] = request.getDataLinkName();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasDatabaseUser()) {
    query["DatabaseUser"] = request.getDatabaseUser();
  }

  if (!!request.hasDbaId()) {
    query["DbaId"] = request.getDbaId();
  }

  if (!!request.hasDdlOnline()) {
    query["DdlOnline"] = request.getDdlOnline();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  if (!!request.hasEcsRegion()) {
    query["EcsRegion"] = request.getEcsRegion();
  }

  if (!!request.hasEnableSellCommon()) {
    query["EnableSellCommon"] = request.getEnableSellCommon();
  }

  if (!!request.hasEnableSellSitd()) {
    query["EnableSellSitd"] = request.getEnableSellSitd();
  }

  if (!!request.hasEnableSellStable()) {
    query["EnableSellStable"] = request.getEnableSellStable();
  }

  if (!!request.hasEnableSellTrust()) {
    query["EnableSellTrust"] = request.getEnableSellTrust();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasExportTimeout()) {
    query["ExportTimeout"] = request.getExportTimeout();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceSource()) {
    query["InstanceSource"] = request.getInstanceSource();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasQueryTimeout()) {
    query["QueryTimeout"] = request.getQueryTimeout();
  }

  if (!!request.hasSafeRule()) {
    query["SafeRule"] = request.getSafeRule();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasSkipTest()) {
    query["SkipTest"] = request.getSkipTest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUseDsql()) {
    query["UseDsql"] = request.getUseDsql();
  }

  if (!!request.hasUseSsl()) {
    query["UseSsl"] = request.getUseSsl();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceResponse>();
}

/**
 * @summary Modifies the basic and advanced information about a database instance in Data Management (DMS). The basic information includes the hosting mode of the instance, the instance account username and password, and features that are enabled for the instance. The advanced information includes the environment type, the instance name in DMS, and the timeout period for querying and exporting data.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Migrates a task flow to a specified business scenario.
 *
 * @param request MoveTaskFlowToScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveTaskFlowToScenarioResponse
 */
MoveTaskFlowToScenarioResponse Client::moveTaskFlowToScenarioWithOptions(const MoveTaskFlowToScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveTaskFlowToScenario"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveTaskFlowToScenarioResponse>();
}

/**
 * @summary Migrates a task flow to a specified business scenario.
 *
 * @param request MoveTaskFlowToScenarioRequest
 * @return MoveTaskFlowToScenarioResponse
 */
MoveTaskFlowToScenarioResponse Client::moveTaskFlowToScenario(const MoveTaskFlowToScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveTaskFlowToScenarioWithOptions(request, runtime);
}

/**
 * @summary Unpublishes a published task flow.
 *
 * @param request OfflineTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineTaskFlowResponse
 */
OfflineTaskFlowResponse Client::offlineTaskFlowWithOptions(const OfflineTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineTaskFlowResponse>();
}

/**
 * @summary Unpublishes a published task flow.
 *
 * @param request OfflineTaskFlowRequest
 * @return OfflineTaskFlowResponse
 */
OfflineTaskFlowResponse Client::offlineTaskFlow(const OfflineTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Analyzes and optimizes the SQL statements in the specified database.
 *
 * @description You can call this operation to analyze and optimize the SQL statements in the specified database.
 *
 * @param request OptimizeSqlByMetaAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OptimizeSqlByMetaAgentResponse
 */
OptimizeSqlByMetaAgentResponse Client::optimizeSqlByMetaAgentWithOptions(const OptimizeSqlByMetaAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OptimizeSqlByMetaAgent"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OptimizeSqlByMetaAgentResponse>();
}

/**
 * @summary Analyzes and optimizes the SQL statements in the specified database.
 *
 * @description You can call this operation to analyze and optimize the SQL statements in the specified database.
 *
 * @param request OptimizeSqlByMetaAgentRequest
 * @return OptimizeSqlByMetaAgentResponse
 */
OptimizeSqlByMetaAgentResponse Client::optimizeSqlByMetaAgent(const OptimizeSqlByMetaAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return optimizeSqlByMetaAgentWithOptions(request, runtime);
}

/**
 * @summary Pauses a SQL task for data change.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request PauseDataCorrectSQLJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseDataCorrectSQLJobResponse
 */
PauseDataCorrectSQLJobResponse Client::pauseDataCorrectSQLJobWithOptions(const PauseDataCorrectSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseDataCorrectSQLJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseDataCorrectSQLJobResponse>();
}

/**
 * @summary Pauses a SQL task for data change.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request PauseDataCorrectSQLJobRequest
 * @return PauseDataCorrectSQLJobResponse
 */
PauseDataCorrectSQLJobResponse Client::pauseDataCorrectSQLJob(const PauseDataCorrectSQLJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseDataCorrectSQLJobWithOptions(request, runtime);
}

/**
 * @summary Terminates a SQL result set export task.
 *
 * @param request PauseDataExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseDataExportJobResponse
 */
PauseDataExportJobResponse Client::pauseDataExportJobWithOptions(const PauseDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseDataExportJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseDataExportJobResponse>();
}

/**
 * @summary Terminates a SQL result set export task.
 *
 * @param request PauseDataExportJobRequest
 * @return PauseDataExportJobResponse
 */
PauseDataExportJobResponse Client::pauseDataExportJob(const PauseDataExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseDataExportJobWithOptions(request, runtime);
}

/**
 * @summary Previews the approval process of a ticket before the ticket is submitted.
 *
 * @param request PreviewWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewWorkflowResponse
 */
PreviewWorkflowResponse Client::previewWorkflowWithOptions(const PreviewWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewWorkflow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewWorkflowResponse>();
}

/**
 * @summary Previews the approval process of a ticket before the ticket is submitted.
 *
 * @param request PreviewWorkflowRequest
 * @return PreviewWorkflowResponse
 */
PreviewWorkflowResponse Client::previewWorkflow(const PreviewWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewWorkflowWithOptions(request, runtime);
}

/**
 * @summary Publishes and deploys a task flow.
 *
 * @param request PublishAndDeployTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishAndDeployTaskFlowResponse
 */
PublishAndDeployTaskFlowResponse Client::publishAndDeployTaskFlowWithOptions(const PublishAndDeployTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasVersionComments()) {
    query["VersionComments"] = request.getVersionComments();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishAndDeployTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishAndDeployTaskFlowResponse>();
}

/**
 * @summary Publishes and deploys a task flow.
 *
 * @param request PublishAndDeployTaskFlowRequest
 * @return PublishAndDeployTaskFlowResponse
 */
PublishAndDeployTaskFlowResponse Client::publishAndDeployTaskFlow(const PublishAndDeployTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishAndDeployTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the download and parsing progress of data tracking logs.
 *
 * @param request QueryDataTrackResultDownloadStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataTrackResultDownloadStatusResponse
 */
QueryDataTrackResultDownloadStatusResponse Client::queryDataTrackResultDownloadStatusWithOptions(const QueryDataTrackResultDownloadStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDownloadKeyId()) {
    query["DownloadKeyId"] = request.getDownloadKeyId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataTrackResultDownloadStatus"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataTrackResultDownloadStatusResponse>();
}

/**
 * @summary Queries the download and parsing progress of data tracking logs.
 *
 * @param request QueryDataTrackResultDownloadStatusRequest
 * @return QueryDataTrackResultDownloadStatusResponse
 */
QueryDataTrackResultDownloadStatusResponse Client::queryDataTrackResultDownloadStatus(const QueryDataTrackResultDownloadStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDataTrackResultDownloadStatusWithOptions(request, runtime);
}

/**
 * @summary 部署任务流的历史版本
 *
 * @param request ReDeployLhDagVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReDeployLhDagVersionResponse
 */
ReDeployLhDagVersionResponse Client::reDeployLhDagVersionWithOptions(const ReDeployLhDagVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagVersion()) {
    query["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReDeployLhDagVersion"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReDeployLhDagVersionResponse>();
}

/**
 * @summary 部署任务流的历史版本
 *
 * @param request ReDeployLhDagVersionRequest
 * @return ReDeployLhDagVersionResponse
 */
ReDeployLhDagVersionResponse Client::reDeployLhDagVersion(const ReDeployLhDagVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reDeployLhDagVersionWithOptions(request, runtime);
}

/**
 * @summary Reruns a task flow instance.
 *
 * @param request ReRunTaskFlowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReRunTaskFlowInstanceResponse
 */
ReRunTaskFlowInstanceResponse Client::reRunTaskFlowInstanceWithOptions(const ReRunTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasDagVersion()) {
    query["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReRunTaskFlowInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReRunTaskFlowInstanceResponse>();
}

/**
 * @summary Reruns a task flow instance.
 *
 * @param request ReRunTaskFlowInstanceRequest
 * @return ReRunTaskFlowInstanceResponse
 */
ReRunTaskFlowInstanceResponse Client::reRunTaskFlowInstance(const ReRunTaskFlowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reRunTaskFlowInstanceWithOptions(request, runtime);
}

/**
 * @summary 用于重新部署DIFY实例。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request RedeployDifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedeployDifyInstanceResponse
 */
RedeployDifyInstanceResponse Client::redeployDifyInstanceWithOptions(const RedeployDifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RedeployDifyInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedeployDifyInstanceResponse>();
}

/**
 * @summary 用于重新部署DIFY实例。
 *
 * @description ## 请求说明
 * - `workspaceOption` 参数指示是否新建工作空间，默认使用已有工作空间。
 * - 如果选择新建工作空间 (`CreateNewInstance`)，则必须提供 `workspaceName` 和 `workspaceDescription`。
 * - `vpcId`, `VSwitchID`, `zoneId`, `regionCode`, `ResourceQuota`, `Replicas`, `storageType`, `dbInstanceClass`, `dbEngineVersion`, `kvstoreEngineVersion` 是必填项。
 * - 当 `storageType` 为 `oss` 时，需要指定 `ossBucketResourceId` 和 `ossPath`。
 * - 如果需要新建数据库实例，则必须提供 `instanceAccount` 和 `instancePassword`。
 * - 预付费模式下，`PayPeriodType` 和 `PayPeriod` 必须填写。
 * - 可以通过设置 `dryRun` 为 `true` 来执行预检查而不实际创建实例。
 *
 * @param request RedeployDifyInstanceRequest
 * @return RedeployDifyInstanceResponse
 */
RedeployDifyInstanceResponse Client::redeployDifyInstance(const RedeployDifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return redeployDifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Unsubscribes from a pay-as-you-go Data Management (DMS) resource.
 *
 * @param request RefundPayAsYouGoOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundPayAsYouGoOrderResponse
 */
RefundPayAsYouGoOrderResponse Client::refundPayAsYouGoOrderWithOptions(const RefundPayAsYouGoOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefundPayAsYouGoOrder"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundPayAsYouGoOrderResponse>();
}

/**
 * @summary Unsubscribes from a pay-as-you-go Data Management (DMS) resource.
 *
 * @param request RefundPayAsYouGoOrderRequest
 * @return RefundPayAsYouGoOrderResponse
 */
RefundPayAsYouGoOrderResponse Client::refundPayAsYouGoOrder(const RefundPayAsYouGoOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refundPayAsYouGoOrderWithOptions(request, runtime);
}

/**
 * @summary Registers a database instance in Data Management (DMS).
 *
 * @description Prerequisites: You are a DMS administrator or a database administrator (DBA). You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to query your user role from the RoleIdList parameter that is returned.
 *
 * @param request RegisterInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterInstanceResponse
 */
RegisterInstanceResponse Client::registerInstanceWithOptions(const RegisterInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLinkName()) {
    query["DataLinkName"] = request.getDataLinkName();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasDatabaseUser()) {
    query["DatabaseUser"] = request.getDatabaseUser();
  }

  if (!!request.hasDbaUid()) {
    query["DbaUid"] = request.getDbaUid();
  }

  if (!!request.hasDbaUidByString()) {
    query["DbaUidByString"] = request.getDbaUidByString();
  }

  if (!!request.hasDdlOnline()) {
    query["DdlOnline"] = request.getDdlOnline();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  if (!!request.hasEcsRegion()) {
    query["EcsRegion"] = request.getEcsRegion();
  }

  if (!!request.hasEnableSellSitd()) {
    query["EnableSellSitd"] = request.getEnableSellSitd();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasExportTimeout()) {
    query["ExportTimeout"] = request.getExportTimeout();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceSource()) {
    query["InstanceSource"] = request.getInstanceSource();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasQueryTimeout()) {
    query["QueryTimeout"] = request.getQueryTimeout();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.getResourceGroup();
  }

  if (!!request.hasSafeRule()) {
    query["SafeRule"] = request.getSafeRule();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasSkipTest()) {
    query["SkipTest"] = request.getSkipTest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUseDsql()) {
    query["UseDsql"] = request.getUseDsql();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterInstanceResponse>();
}

/**
 * @summary Registers a database instance in Data Management (DMS).
 *
 * @description Prerequisites: You are a DMS administrator or a database administrator (DBA). You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to query your user role from the RoleIdList parameter that is returned.
 *
 * @param request RegisterInstanceRequest
 * @return RegisterInstanceResponse
 */
RegisterInstanceResponse Client::registerInstance(const RegisterInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerInstanceWithOptions(request, runtime);
}

/**
 * @summary Registers a user for your enterprise.
 *
 * @description If you are an **administrator** in Data Management (DMS), you can call this operation to register a user for your enterprise. To view users that are assigned the administrator role, perform the following steps: Log on to the DMS console. In the top navigation bar, click O&M. In the left-side navigation pane, click User.
 *
 * @param request RegisterUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterUserResponse
 */
RegisterUserResponse Client::registerUserWithOptions(const RegisterUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasRoleNames()) {
    query["RoleNames"] = request.getRoleNames();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.getUserNick();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterUserResponse>();
}

/**
 * @summary Registers a user for your enterprise.
 *
 * @description If you are an **administrator** in Data Management (DMS), you can call this operation to register a user for your enterprise. To view users that are assigned the administrator role, perform the following steps: Log on to the DMS console. In the top navigation bar, click O&M. In the left-side navigation pane, click User.
 *
 * @param request RegisterUserRequest
 * @return RegisterUserResponse
 */
RegisterUserResponse Client::registerUser(const RegisterUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a data export task.
 *
 * @param request RemoveDataExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDataExportJobResponse
 */
RemoveDataExportJobResponse Client::removeDataExportJobWithOptions(const RemoveDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDataExportJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDataExportJobResponse>();
}

/**
 * @summary Deletes a data export task.
 *
 * @param request RemoveDataExportJobRequest
 * @return RemoveDataExportJobResponse
 */
RemoveDataExportJobResponse Client::removeDataExportJob(const RemoveDataExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDataExportJobWithOptions(request, runtime);
}

/**
 * @summary Removes table from the asset category.
 *
 * @param request RemoveTableFromCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTableFromCategoryResponse
 */
RemoveTableFromCategoryResponse Client::removeTableFromCategoryWithOptions(const RemoveTableFromCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableSchemaName()) {
    query["TableSchemaName"] = request.getTableSchemaName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTableFromCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTableFromCategoryResponse>();
}

/**
 * @summary Removes table from the asset category.
 *
 * @param request RemoveTableFromCategoryRequest
 * @return RemoveTableFromCategoryResponse
 */
RemoveTableFromCategoryResponse Client::removeTableFromCategory(const RemoveTableFromCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTableFromCategoryWithOptions(request, runtime);
}

/**
 * @summary Reruns a failed SQL task for data change.
 *
 * @param request RestartDataCorrectSQLJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDataCorrectSQLJobResponse
 */
RestartDataCorrectSQLJobResponse Client::restartDataCorrectSQLJobWithOptions(const RestartDataCorrectSQLJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDataCorrectSQLJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDataCorrectSQLJobResponse>();
}

/**
 * @summary Reruns a failed SQL task for data change.
 *
 * @param request RestartDataCorrectSQLJobRequest
 * @return RestartDataCorrectSQLJobResponse
 */
RestartDataCorrectSQLJobResponse Client::restartDataCorrectSQLJob(const RestartDataCorrectSQLJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDataCorrectSQLJobWithOptions(request, runtime);
}

/**
 * @summary Restarts a SQL result set export task.
 *
 * @param request RestartDataExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDataExportJobResponse
 */
RestartDataExportJobResponse Client::restartDataExportJobWithOptions(const RestartDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDataExportJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDataExportJobResponse>();
}

/**
 * @summary Restarts a SQL result set export task.
 *
 * @param request RestartDataExportJobRequest
 * @return RestartDataExportJobResponse
 */
RestartDataExportJobResponse Client::restartDataExportJob(const RestartDataExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDataExportJobWithOptions(request, runtime);
}

/**
 * @summary Resumes a suspended task flow.
 *
 * @description You can call this operation only for task flows that are suspended.
 *
 * @param request ResumeTaskFlowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeTaskFlowInstanceResponse
 */
ResumeTaskFlowInstanceResponse Client::resumeTaskFlowInstanceWithOptions(const ResumeTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasDagVersion()) {
    query["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeTaskFlowInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeTaskFlowInstanceResponse>();
}

/**
 * @summary Resumes a suspended task flow.
 *
 * @description You can call this operation only for task flows that are suspended.
 *
 * @param request ResumeTaskFlowInstanceRequest
 * @return ResumeTaskFlowInstanceResponse
 */
ResumeTaskFlowInstanceResponse Client::resumeTaskFlowInstance(const ResumeTaskFlowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeTaskFlowInstanceWithOptions(request, runtime);
}

/**
 * @summary Reruns the precheck for a data change ticket.
 *
 * @param request RetryDataCorrectPreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDataCorrectPreCheckResponse
 */
RetryDataCorrectPreCheckResponse Client::retryDataCorrectPreCheckWithOptions(const RetryDataCorrectPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryDataCorrectPreCheck"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryDataCorrectPreCheckResponse>();
}

/**
 * @summary Reruns the precheck for a data change ticket.
 *
 * @param request RetryDataCorrectPreCheckRequest
 * @return RetryDataCorrectPreCheckResponse
 */
RetryDataCorrectPreCheckResponse Client::retryDataCorrectPreCheck(const RetryDataCorrectPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryDataCorrectPreCheckWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on resources from Data Management (DMS) users by using a permission template.
 *
 * @description You must be a database administrator (DBA) or a DMS administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request RevokeTemplateAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeTemplateAuthorityResponse
 */
RevokeTemplateAuthorityResponse Client::revokeTemplateAuthorityWithOptions(const RevokeTemplateAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeTemplateAuthority"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeTemplateAuthorityResponse>();
}

/**
 * @summary Revokes permissions on resources from Data Management (DMS) users by using a permission template.
 *
 * @description You must be a database administrator (DBA) or a DMS administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request RevokeTemplateAuthorityRequest
 * @return RevokeTemplateAuthorityResponse
 */
RevokeTemplateAuthorityResponse Client::revokeTemplateAuthority(const RevokeTemplateAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeTemplateAuthorityWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions on instances, databases, and tables from a user.
 *
 * @param request RevokeUserPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeUserPermissionResponse
 */
RevokeUserPermissionResponse Client::revokeUserPermissionWithOptions(const RevokeUserPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasDsType()) {
    query["DsType"] = request.getDsType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasPermTypes()) {
    query["PermTypes"] = request.getPermTypes();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUserAccessId()) {
    query["UserAccessId"] = request.getUserAccessId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeUserPermission"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeUserPermissionResponse>();
}

/**
 * @summary Revokes the permissions on instances, databases, and tables from a user.
 *
 * @param request RevokeUserPermissionRequest
 * @return RevokeUserPermissionResponse
 */
RevokeUserPermissionResponse Client::revokeUserPermission(const RevokeUserPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeUserPermissionWithOptions(request, runtime);
}

/**
 * @summary Searches for the parsing result of a data tracking task.
 *
 * @param tmpReq SearchDataTrackResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchDataTrackResultResponse
 */
SearchDataTrackResultResponse Client::searchDataTrackResultWithOptions(const SearchDataTrackResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchDataTrackResultShrinkRequest request = SearchDataTrackResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnFilter()) {
    request.setColumnFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getColumnFilter(), "ColumnFilter", "json"));
  }

  if (!!tmpReq.hasFilterTableList()) {
    request.setFilterTableListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterTableList(), "FilterTableList", "json"));
  }

  if (!!tmpReq.hasFilterTypeList()) {
    request.setFilterTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterTypeList(), "FilterTypeList", "json"));
  }

  json query = {};
  if (!!request.hasColumnFilterShrink()) {
    query["ColumnFilter"] = request.getColumnFilterShrink();
  }

  if (!!request.hasFilterEndTime()) {
    query["FilterEndTime"] = request.getFilterEndTime();
  }

  if (!!request.hasFilterStartTime()) {
    query["FilterStartTime"] = request.getFilterStartTime();
  }

  if (!!request.hasFilterTableListShrink()) {
    query["FilterTableList"] = request.getFilterTableListShrink();
  }

  if (!!request.hasFilterTypeListShrink()) {
    query["FilterTypeList"] = request.getFilterTypeListShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchDataTrackResult"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchDataTrackResultResponse>();
}

/**
 * @summary Searches for the parsing result of a data tracking task.
 *
 * @param request SearchDataTrackResultRequest
 * @return SearchDataTrackResultResponse
 */
SearchDataTrackResultResponse Client::searchDataTrackResult(const SearchDataTrackResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDataTrackResultWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the databases.
 *
 * @param request SearchDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchDatabaseResponse
 */
SearchDatabaseResponse Client::searchDatabaseWithOptions(const SearchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSearchRange()) {
    query["SearchRange"] = request.getSearchRange();
  }

  if (!!request.hasSearchTarget()) {
    query["SearchTarget"] = request.getSearchTarget();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchDatabaseResponse>();
}

/**
 * @summary Queries the details of the databases.
 *
 * @param request SearchDatabaseRequest
 * @return SearchDatabaseResponse
 */
SearchDatabaseResponse Client::searchDatabase(const SearchDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries detailed information about tables.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request SearchTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTableResponse
 */
SearchTableResponse Client::searchTableWithOptions(const SearchTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReturnGuid()) {
    query["ReturnGuid"] = request.getReturnGuid();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSearchRange()) {
    query["SearchRange"] = request.getSearchRange();
  }

  if (!!request.hasSearchTarget()) {
    query["SearchTarget"] = request.getSearchTarget();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTableResponse>();
}

/**
 * @summary Queries detailed information about tables.
 *
 * @description You can call this operation only for database instances that are managed in Security Collaboration mode.
 *
 * @param request SearchTableRequest
 * @return SearchTableResponse
 */
SearchTableResponse Client::searchTable(const SearchTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTableWithOptions(request, runtime);
}

/**
 * @summary Configures the owner of an instance, a database, or a table.
 *
 * @param request SetOwnersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetOwnersResponse
 */
SetOwnersResponse Client::setOwnersWithOptions(const SetOwnersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerIds()) {
    query["OwnerIds"] = request.getOwnerIds();
  }

  if (!!request.hasOwnerType()) {
    query["OwnerType"] = request.getOwnerType();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetOwners"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetOwnersResponse>();
}

/**
 * @summary Configures the owner of an instance, a database, or a table.
 *
 * @param request SetOwnersRequest
 * @return SetOwnersResponse
 */
SetOwnersResponse Client::setOwners(const SetOwnersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setOwnersWithOptions(request, runtime);
}

/**
 * @summary Configures whether the operation buttons, such as Agree, Revoke, and Sign, are displayed in the ticket approval section of the DMS console.
 *
 * @param request SetWorkflowExtraInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWorkflowExtraInfoResponse
 */
SetWorkflowExtraInfoResponse Client::setWorkflowExtraInfoWithOptions(const SetWorkflowExtraInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderAddApprovalNode()) {
    query["RenderAddApprovalNode"] = request.getRenderAddApprovalNode();
  }

  if (!!request.hasRenderAgree()) {
    query["RenderAgree"] = request.getRenderAgree();
  }

  if (!!request.hasRenderCancel()) {
    query["RenderCancel"] = request.getRenderCancel();
  }

  if (!!request.hasRenderReject()) {
    query["RenderReject"] = request.getRenderReject();
  }

  if (!!request.hasRenderTransfer()) {
    query["RenderTransfer"] = request.getRenderTransfer();
  }

  if (!!request.hasThirdpartyWorkflowComment()) {
    query["ThirdpartyWorkflowComment"] = request.getThirdpartyWorkflowComment();
  }

  if (!!request.hasThirdpartyWorkflowUrl()) {
    query["ThirdpartyWorkflowUrl"] = request.getThirdpartyWorkflowUrl();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkflowInstanceId()) {
    query["WorkflowInstanceId"] = request.getWorkflowInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWorkflowExtraInfo"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWorkflowExtraInfoResponse>();
}

/**
 * @summary Configures whether the operation buttons, such as Agree, Revoke, and Sign, are displayed in the ticket approval section of the DMS console.
 *
 * @param request SetWorkflowExtraInfoRequest
 * @return SetWorkflowExtraInfoResponse
 */
SetWorkflowExtraInfoResponse Client::setWorkflowExtraInfo(const SetWorkflowExtraInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWorkflowExtraInfoWithOptions(request, runtime);
}

/**
 * @summary 添加实例
 *
 * @param request SimplyAddInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SimplyAddInstanceResponse
 */
SimplyAddInstanceResponse Client::simplyAddInstanceWithOptions(const SimplyAddInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasDatabaseUser()) {
    query["DatabaseUser"] = request.getDatabaseUser();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceRegion()) {
    query["InstanceRegion"] = request.getInstanceRegion();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SimplyAddInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SimplyAddInstanceResponse>();
}

/**
 * @summary 添加实例
 *
 * @param request SimplyAddInstanceRequest
 * @return SimplyAddInstanceResponse
 */
SimplyAddInstanceResponse Client::simplyAddInstance(const SimplyAddInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return simplyAddInstanceWithOptions(request, runtime);
}

/**
 * @summary Skips the verification on the number of rows in the precheck for data change.
 *
 * @param request SkipDataCorrectRowCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipDataCorrectRowCheckResponse
 */
SkipDataCorrectRowCheckResponse Client::skipDataCorrectRowCheckWithOptions(const SkipDataCorrectRowCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipDataCorrectRowCheck"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipDataCorrectRowCheckResponse>();
}

/**
 * @summary Skips the verification on the number of rows in the precheck for data change.
 *
 * @param request SkipDataCorrectRowCheckRequest
 * @return SkipDataCorrectRowCheckResponse
 */
SkipDataCorrectRowCheckResponse Client::skipDataCorrectRowCheck(const SkipDataCorrectRowCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipDataCorrectRowCheckWithOptions(request, runtime);
}

/**
 * @summary Stops a task flow instance.
 *
 * @param request StopTaskFlowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskFlowInstanceResponse
 */
StopTaskFlowInstanceResponse Client::stopTaskFlowInstanceWithOptions(const StopTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTaskFlowInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTaskFlowInstanceResponse>();
}

/**
 * @summary Stops a task flow instance.
 *
 * @param request StopTaskFlowInstanceRequest
 * @return StopTaskFlowInstanceResponse
 */
StopTaskFlowInstanceResponse Client::stopTaskFlowInstance(const StopTaskFlowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTaskFlowInstanceWithOptions(request, runtime);
}

/**
 * @summary Submits a ticket for approval.
 *
 * @param request SubmitOrderApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitOrderApprovalResponse
 */
SubmitOrderApprovalResponse Client::submitOrderApprovalWithOptions(const SubmitOrderApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRealLoginUserUid()) {
    query["RealLoginUserUid"] = request.getRealLoginUserUid();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitOrderApproval"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitOrderApprovalResponse>();
}

/**
 * @summary Submits a ticket for approval.
 *
 * @param request SubmitOrderApprovalRequest
 * @return SubmitOrderApprovalResponse
 */
SubmitOrderApprovalResponse Client::submitOrderApproval(const SubmitOrderApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitOrderApprovalWithOptions(request, runtime);
}

/**
 * @summary Submits a schema synchronization ticket for approval.
 *
 * @param request SubmitStructSyncOrderApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitStructSyncOrderApprovalResponse
 */
SubmitStructSyncOrderApprovalResponse Client::submitStructSyncOrderApprovalWithOptions(const SubmitStructSyncOrderApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitStructSyncOrderApproval"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitStructSyncOrderApprovalResponse>();
}

/**
 * @summary Submits a schema synchronization ticket for approval.
 *
 * @param request SubmitStructSyncOrderApprovalRequest
 * @return SubmitStructSyncOrderApprovalResponse
 */
SubmitStructSyncOrderApprovalResponse Client::submitStructSyncOrderApproval(const SubmitStructSyncOrderApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitStructSyncOrderApprovalWithOptions(request, runtime);
}

/**
 * @summary Suspends an ongoing or scheduled SQL result set export task.
 *
 * @param request SuspendDataExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendDataExportJobResponse
 */
SuspendDataExportJobResponse Client::suspendDataExportJobWithOptions(const SuspendDataExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendDataExportJob"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendDataExportJobResponse>();
}

/**
 * @summary Suspends an ongoing or scheduled SQL result set export task.
 *
 * @param request SuspendDataExportJobRequest
 * @return SuspendDataExportJobResponse
 */
SuspendDataExportJobResponse Client::suspendDataExportJob(const SuspendDataExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendDataExportJobWithOptions(request, runtime);
}

/**
 * @summary Suspends a task flow instance.
 *
 * @param request SuspendTaskFlowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendTaskFlowInstanceResponse
 */
SuspendTaskFlowInstanceResponse Client::suspendTaskFlowInstanceWithOptions(const SuspendTaskFlowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagInstanceId()) {
    query["DagInstanceId"] = request.getDagInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendTaskFlowInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendTaskFlowInstanceResponse>();
}

/**
 * @summary Suspends a task flow instance.
 *
 * @param request SuspendTaskFlowInstanceRequest
 * @return SuspendTaskFlowInstanceResponse
 */
SuspendTaskFlowInstanceResponse Client::suspendTaskFlowInstance(const SuspendTaskFlowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendTaskFlowInstanceWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the metadata of a database.
 *
 * @param request SyncDatabaseMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDatabaseMetaResponse
 */
SyncDatabaseMetaResponse Client::syncDatabaseMetaWithOptions(const SyncDatabaseMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasLogic()) {
    query["Logic"] = request.getLogic();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncDatabaseMeta"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDatabaseMetaResponse>();
}

/**
 * @summary Synchronizes the metadata of a database.
 *
 * @param request SyncDatabaseMetaRequest
 * @return SyncDatabaseMetaResponse
 */
SyncDatabaseMetaResponse Client::syncDatabaseMeta(const SyncDatabaseMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDatabaseMetaWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the metadata of all databases in a database instance.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request SyncInstanceMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncInstanceMetaResponse
 */
SyncInstanceMetaResponse Client::syncInstanceMetaWithOptions(const SyncInstanceMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIgnoreTable()) {
    query["IgnoreTable"] = request.getIgnoreTable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncInstanceMeta"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncInstanceMetaResponse>();
}

/**
 * @summary Synchronizes the metadata of all databases in a database instance.
 *
 * @description You can call this operation only for database instances whose control mode is Security Collaboration.
 *
 * @param request SyncInstanceMetaRequest
 * @return SyncInstanceMetaResponse
 */
SyncInstanceMetaResponse Client::syncInstanceMeta(const SyncInstanceMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncInstanceMetaWithOptions(request, runtime);
}

/**
 * @summary Tests the task flow of task orchestration.
 *
 * @description ### [](#)Usage notes
 * An edge can be created only when the following conditions are met:
 * 1.  The start and end nodes of the edge exist in the directed acyclic graph (DAG) of the task flow specified by DagId.
 * 2.  After the edge is created, the DAG does not contain loops.
 *
 * @param request TryRunTaskFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TryRunTaskFlowResponse
 */
TryRunTaskFlowResponse Client::tryRunTaskFlowWithOptions(const TryRunTaskFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TryRunTaskFlow"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TryRunTaskFlowResponse>();
}

/**
 * @summary Tests the task flow of task orchestration.
 *
 * @description ### [](#)Usage notes
 * An edge can be created only when the following conditions are met:
 * 1.  The start and end nodes of the edge exist in the directed acyclic graph (DAG) of the task flow specified by DagId.
 * 2.  After the edge is created, the DAG does not contain loops.
 *
 * @param request TryRunTaskFlowRequest
 * @return TryRunTaskFlowResponse
 */
TryRunTaskFlowResponse Client::tryRunTaskFlow(const TryRunTaskFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tryRunTaskFlowWithOptions(request, runtime);
}

/**
 * @summary Updates the name, description, or content of a policy.
 *
 * @param request UpdateAbacPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAbacPolicyResponse
 */
UpdateAbacPolicyResponse Client::updateAbacPolicyWithOptions(const UpdateAbacPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbacPolicyContent()) {
    query["AbacPolicyContent"] = request.getAbacPolicyContent();
  }

  if (!!request.hasAbacPolicyDesc()) {
    query["AbacPolicyDesc"] = request.getAbacPolicyDesc();
  }

  if (!!request.hasAbacPolicyId()) {
    query["AbacPolicyId"] = request.getAbacPolicyId();
  }

  if (!!request.hasAbacPolicyName()) {
    query["AbacPolicyName"] = request.getAbacPolicyName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAbacPolicy"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAbacPolicyResponse>();
}

/**
 * @summary Updates the name, description, or content of a policy.
 *
 * @param request UpdateAbacPolicyRequest
 * @return UpdateAbacPolicyResponse
 */
UpdateAbacPolicyResponse Client::updateAbacPolicy(const UpdateAbacPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAbacPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a permission template.
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request UpdateAuthorityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorityTemplateResponse
 */
UpdateAuthorityTemplateResponse Client::updateAuthorityTemplateWithOptions(const UpdateAuthorityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAuthorityTemplate"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorityTemplateResponse>();
}

/**
 * @summary Modifies a permission template.
 *
 * @description You are a database administrator (DBA) or a Data Management (DMS) administrator. For more information about how to view system roles, see [View system roles](https://help.aliyun.com/document_detail/324212.html).
 *
 * @param request UpdateAuthorityTemplateRequest
 * @return UpdateAuthorityTemplateResponse
 */
UpdateAuthorityTemplateResponse Client::updateAuthorityTemplate(const UpdateAuthorityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorityTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a database in a data lakehouse.
 *
 * @param tmpReq UpdateDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeDatabaseResponse
 */
UpdateDataLakeDatabaseResponse Client::updateDataLakeDatabaseWithOptions(const UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeDatabaseShrinkRequest request = UpdateDataLakeDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataLakeDatabase"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeDatabaseResponse>();
}

/**
 * @summary Updates the information about a database in a data lakehouse.
 *
 * @param request UpdateDataLakeDatabaseRequest
 * @return UpdateDataLakeDatabaseResponse
 */
UpdateDataLakeDatabaseResponse Client::updateDataLakeDatabase(const UpdateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Updates a user-defined function in a data lakehouse.
 *
 * @param tmpReq UpdateDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeFunctionResponse
 */
UpdateDataLakeFunctionResponse Client::updateDataLakeFunctionWithOptions(const UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeFunctionShrinkRequest request = UpdateDataLakeFunctionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFunctionInput()) {
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFunctionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.getFunctionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakeFunction"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeFunctionResponse>();
}

/**
 * @summary Updates a user-defined function in a data lakehouse.
 *
 * @param request UpdateDataLakeFunctionRequest
 * @return UpdateDataLakeFunctionResponse
 */
UpdateDataLakeFunctionResponse Client::updateDataLakeFunction(const UpdateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Updates the partition information of a table in a data lakehouse.
 *
 * @param tmpReq UpdateDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakePartitionResponse
 */
UpdateDataLakePartitionResponse Client::updateDataLakePartitionWithOptions(const UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakePartitionShrinkRequest request = UpdateDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInput()) {
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.getPartitionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakePartition"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakePartitionResponse>();
}

/**
 * @summary Updates the partition information of a table in a data lakehouse.
 *
 * @param request UpdateDataLakePartitionRequest
 * @return UpdateDataLakePartitionResponse
 */
UpdateDataLakePartitionResponse Client::updateDataLakePartition(const UpdateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a table in a data lakehouse.
 *
 * @param tmpReq UpdateDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeTableResponse
 */
UpdateDataLakeTableResponse Client::updateDataLakeTableWithOptions(const UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeTableShrinkRequest request = UpdateDataLakeTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableInput()) {
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDataRegion()) {
    query["DataRegion"] = request.getDataRegion();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.getTableInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakeTable"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeTableResponse>();
}

/**
 * @summary Updates the information about a table in a data lakehouse.
 *
 * @param request UpdateDataLakeTableRequest
 * @return UpdateDataLakeTableResponse
 */
UpdateDataLakeTableResponse Client::updateDataLakeTable(const UpdateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a database instance and checks the connectivity of the database instance.
 *
 * @description Before you call the UpdateInstance operation, call the [GetInstance](https://help.aliyun.com/document_detail/141567.html) or [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the complete information about the instance.
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLinkName()) {
    query["DataLinkName"] = request.getDataLinkName();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasDatabaseUser()) {
    query["DatabaseUser"] = request.getDatabaseUser();
  }

  if (!!request.hasDbaId()) {
    query["DbaId"] = request.getDbaId();
  }

  if (!!request.hasDdlOnline()) {
    query["DdlOnline"] = request.getDdlOnline();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  if (!!request.hasEcsRegion()) {
    query["EcsRegion"] = request.getEcsRegion();
  }

  if (!!request.hasEnableSellSitd()) {
    query["EnableSellSitd"] = request.getEnableSellSitd();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasExportTimeout()) {
    query["ExportTimeout"] = request.getExportTimeout();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceSource()) {
    query["InstanceSource"] = request.getInstanceSource();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasQueryTimeout()) {
    query["QueryTimeout"] = request.getQueryTimeout();
  }

  if (!!request.hasSafeRuleId()) {
    query["SafeRuleId"] = request.getSafeRuleId();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.getSid();
  }

  if (!!request.hasSkipTest()) {
    query["SkipTest"] = request.getSkipTest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUseDsql()) {
    query["UseDsql"] = request.getUseDsql();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates the information about a database instance and checks the connectivity of the database instance.
 *
 * @description Before you call the UpdateInstance operation, call the [GetInstance](https://help.aliyun.com/document_detail/141567.html) or [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the complete information about the instance.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates asset category information.
 *
 * @param tmpReq UpdateMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaCategoryResponse
 */
UpdateMetaCategoryResponse Client::updateMetaCategoryWithOptions(const UpdateMetaCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMetaCategoryShrinkRequest request = UpdateMetaCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOwnerIds()) {
    request.setOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOwnerIds(), "OwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerIdsShrink()) {
    query["OwnerIds"] = request.getOwnerIdsShrink();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMetaCategory"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaCategoryResponse>();
}

/**
 * @summary Updates asset category information.
 *
 * @param request UpdateMetaCategoryRequest
 * @return UpdateMetaCategoryResponse
 */
UpdateMetaCategoryResponse Client::updateMetaCategory(const UpdateMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates the service level agreement (SLA) timeout reminder for a task flow.
 *
 * @description SLA rules take effect after task flows are deployed and published.
 *
 * @param tmpReq UpdateSLARulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSLARulesResponse
 */
UpdateSLARulesResponse Client::updateSLARulesWithOptions(const UpdateSLARulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSLARulesShrinkRequest request = UpdateSLARulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSlaRuleList()) {
    request.setSlaRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSlaRuleList(), "SlaRuleList", "json"));
  }

  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasSlaRuleListShrink()) {
    query["SlaRuleList"] = request.getSlaRuleListShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSLARules"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSLARulesResponse>();
}

/**
 * @summary Updates the service level agreement (SLA) timeout reminder for a task flow.
 *
 * @description SLA rules take effect after task flows are deployed and published.
 *
 * @param request UpdateSLARulesRequest
 * @return UpdateSLARulesResponse
 */
UpdateSLARulesResponse Client::updateSLARules(const UpdateSLARulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSLARulesWithOptions(request, runtime);
}

/**
 * @summary Updates the name and description of the business scenario for a specified task flow.
 *
 * @param request UpdateScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScenarioResponse
 */
UpdateScenarioResponse Client::updateScenarioWithOptions(const UpdateScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScenarioName()) {
    query["ScenarioName"] = request.getScenarioName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateScenario"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScenarioResponse>();
}

/**
 * @summary Updates the name and description of the business scenario for a specified task flow.
 *
 * @param request UpdateScenarioRequest
 * @return UpdateScenarioResponse
 */
UpdateScenarioResponse Client::updateScenario(const UpdateScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScenarioWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a specific security rule set.
 *
 * @param request UpdateStandardGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardGroupResponse
 */
UpdateStandardGroupResponse Client::updateStandardGroupWithOptions(const UpdateStandardGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateStandardGroup"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardGroupResponse>();
}

/**
 * @summary Modifies the name and description of a specific security rule set.
 *
 * @param request UpdateStandardGroupRequest
 * @return UpdateStandardGroupResponse
 */
UpdateStandardGroupResponse Client::updateStandardGroup(const UpdateStandardGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the advanced configuration of a task node.
 *
 * @description You can call this operation to configure a failed task or rerun a task.
 *
 * @param request UpdateTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskConfigResponse
 */
UpdateTaskConfigResponse Client::updateTaskConfigWithOptions(const UpdateTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeConfig()) {
    query["NodeConfig"] = request.getNodeConfig();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskConfig"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskConfigResponse>();
}

/**
 * @summary Updates the advanced configuration of a task node.
 *
 * @description You can call this operation to configure a failed task or rerun a task.
 *
 * @param request UpdateTaskConfigRequest
 * @return UpdateTaskConfigResponse
 */
UpdateTaskConfigResponse Client::updateTaskConfig(const UpdateTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskConfigWithOptions(request, runtime);
}

/**
 * @summary Updates tasks in a task flow.
 *
 * @description You can call this operation to modify node configurations.
 *
 * @param request UpdateTaskContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskContentResponse
 */
UpdateTaskContentResponse Client::updateTaskContentWithOptions(const UpdateTaskContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeContent()) {
    query["NodeContent"] = request.getNodeContent();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskContent"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskContentResponse>();
}

/**
 * @summary Updates tasks in a task flow.
 *
 * @description You can call this operation to modify node configurations.
 *
 * @param request UpdateTaskContentRequest
 * @return UpdateTaskContentResponse
 */
UpdateTaskContentResponse Client::updateTaskContent(const UpdateTaskContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskContentWithOptions(request, runtime);
}

/**
 * @summary Updates the node content in large SQL files.
 *
 * @description You can call this operation to modify node configurations.
 *
 * @param request UpdateTaskContentV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskContentV2Response
 */
UpdateTaskContentV2Response Client::updateTaskContentV2WithOptions(const UpdateTaskContentV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  json body = {};
  if (!!request.hasNodeContent()) {
    body["NodeContent"] = request.getNodeContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTaskContentV2"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskContentV2Response>();
}

/**
 * @summary Updates the node content in large SQL files.
 *
 * @description You can call this operation to modify node configurations.
 *
 * @param request UpdateTaskContentV2Request
 * @return UpdateTaskContentV2Response
 */
UpdateTaskContentV2Response Client::updateTaskContentV2(const UpdateTaskContentV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskContentV2WithOptions(request, runtime);
}

/**
 * @summary Updates the constants for a specified task flow.
 *
 * @param tmpReq UpdateTaskFlowConstantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowConstantsResponse
 */
UpdateTaskFlowConstantsResponse Client::updateTaskFlowConstantsWithOptions(const UpdateTaskFlowConstantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskFlowConstantsShrinkRequest request = UpdateTaskFlowConstantsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDagConstants()) {
    request.setDagConstantsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDagConstants(), "DagConstants", "json"));
  }

  json query = {};
  if (!!request.hasDagConstantsShrink()) {
    query["DagConstants"] = request.getDagConstantsShrink();
  }

  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowConstants"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowConstantsResponse>();
}

/**
 * @summary Updates the constants for a specified task flow.
 *
 * @param request UpdateTaskFlowConstantsRequest
 * @return UpdateTaskFlowConstantsResponse
 */
UpdateTaskFlowConstantsResponse Client::updateTaskFlowConstants(const UpdateTaskFlowConstantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowConstantsWithOptions(request, runtime);
}

/**
 * @summary Updates the IDs of the users who are involved in the task flow.
 *
 * @param tmpReq UpdateTaskFlowCooperatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowCooperatorsResponse
 */
UpdateTaskFlowCooperatorsResponse Client::updateTaskFlowCooperatorsWithOptions(const UpdateTaskFlowCooperatorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskFlowCooperatorsShrinkRequest request = UpdateTaskFlowCooperatorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCooperatorIds()) {
    request.setCooperatorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCooperatorIds(), "CooperatorIds", "json"));
  }

  json query = {};
  if (!!request.hasCooperatorIdsShrink()) {
    query["CooperatorIds"] = request.getCooperatorIdsShrink();
  }

  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowCooperators"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowCooperatorsResponse>();
}

/**
 * @summary Updates the IDs of the users who are involved in the task flow.
 *
 * @param request UpdateTaskFlowCooperatorsRequest
 * @return UpdateTaskFlowCooperatorsResponse
 */
UpdateTaskFlowCooperatorsResponse Client::updateTaskFlowCooperators(const UpdateTaskFlowCooperatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowCooperatorsWithOptions(request, runtime);
}

/**
 * @summary Updates the start node and end node of multiple edges at a time for a task flow.
 *
 * @description ###
 * The edges can be updated only when the following conditions are met:
 * 1.  The specified edge exists in the directed acyclic graph (DAG) of the task flow specified by DagId.
 * 2.  The specified edge nodes exist in the DAG of the task flow specified by DagId.
 * 3.  After the update, rings do not exist in the DAG.
 *
 * @param tmpReq UpdateTaskFlowEdgesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowEdgesResponse
 */
UpdateTaskFlowEdgesResponse Client::updateTaskFlowEdgesWithOptions(const UpdateTaskFlowEdgesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskFlowEdgesShrinkRequest request = UpdateTaskFlowEdgesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEdges()) {
    request.setEdgesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEdges(), "Edges", "json"));
  }

  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasEdgesShrink()) {
    query["Edges"] = request.getEdgesShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowEdges"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowEdgesResponse>();
}

/**
 * @summary Updates the start node and end node of multiple edges at a time for a task flow.
 *
 * @description ###
 * The edges can be updated only when the following conditions are met:
 * 1.  The specified edge exists in the directed acyclic graph (DAG) of the task flow specified by DagId.
 * 2.  The specified edge nodes exist in the DAG of the task flow specified by DagId.
 * 3.  After the update, rings do not exist in the DAG.
 *
 * @param request UpdateTaskFlowEdgesRequest
 * @return UpdateTaskFlowEdgesResponse
 */
UpdateTaskFlowEdgesResponse Client::updateTaskFlowEdges(const UpdateTaskFlowEdgesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowEdgesWithOptions(request, runtime);
}

/**
 * @summary Updates the name and description of a task flow.
 *
 * @param request UpdateTaskFlowNameAndDescRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowNameAndDescResponse
 */
UpdateTaskFlowNameAndDescResponse Client::updateTaskFlowNameAndDescWithOptions(const UpdateTaskFlowNameAndDescRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagName()) {
    query["DagName"] = request.getDagName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowNameAndDesc"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowNameAndDescResponse>();
}

/**
 * @summary Updates the name and description of a task flow.
 *
 * @param request UpdateTaskFlowNameAndDescRequest
 * @return UpdateTaskFlowNameAndDescResponse
 */
UpdateTaskFlowNameAndDescResponse Client::updateTaskFlowNameAndDesc(const UpdateTaskFlowNameAndDescRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowNameAndDescWithOptions(request, runtime);
}

/**
 * @summary Updates the notification settings for task flows.
 *
 * @param request UpdateTaskFlowNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowNotificationResponse
 */
UpdateTaskFlowNotificationResponse Client::updateTaskFlowNotificationWithOptions(const UpdateTaskFlowNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasDagNotificationFail()) {
    query["DagNotificationFail"] = request.getDagNotificationFail();
  }

  if (!!request.hasDagNotificationSla()) {
    query["DagNotificationSla"] = request.getDagNotificationSla();
  }

  if (!!request.hasDagNotificationSuccess()) {
    query["DagNotificationSuccess"] = request.getDagNotificationSuccess();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowNotification"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowNotificationResponse>();
}

/**
 * @summary Updates the notification settings for task flows.
 *
 * @param request UpdateTaskFlowNotificationRequest
 * @return UpdateTaskFlowNotificationResponse
 */
UpdateTaskFlowNotificationResponse Client::updateTaskFlowNotification(const UpdateTaskFlowNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowNotificationWithOptions(request, runtime);
}

/**
 * @summary Changes the owner of a task flow.
 *
 * @description Note: The new owner of the task flow must belong to the same tenant as the previous owner.
 *
 * @param request UpdateTaskFlowOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowOwnerResponse
 */
UpdateTaskFlowOwnerResponse Client::updateTaskFlowOwnerWithOptions(const UpdateTaskFlowOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasNewOwnerId()) {
    query["NewOwnerId"] = request.getNewOwnerId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowOwner"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowOwnerResponse>();
}

/**
 * @summary Changes the owner of a task flow.
 *
 * @description Note: The new owner of the task flow must belong to the same tenant as the previous owner.
 *
 * @param request UpdateTaskFlowOwnerRequest
 * @return UpdateTaskFlowOwnerResponse
 */
UpdateTaskFlowOwnerResponse Client::updateTaskFlowOwner(const UpdateTaskFlowOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowOwnerWithOptions(request, runtime);
}

/**
 * @summary Fully updates the edges of a task flow.
 *
 * @description You can call this operation to perform a full update. For incremental updates, see AddTaskFlowEdges, UpdateTaskFlowEdges, and DeleteTaskFlowEdgesByMultiCondition.
 *
 * @param tmpReq UpdateTaskFlowRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowRelationsResponse
 */
UpdateTaskFlowRelationsResponse Client::updateTaskFlowRelationsWithOptions(const UpdateTaskFlowRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskFlowRelationsShrinkRequest request = UpdateTaskFlowRelationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEdges()) {
    request.setEdgesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEdges(), "Edges", "json"));
  }

  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasEdgesShrink()) {
    query["Edges"] = request.getEdgesShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowRelations"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowRelationsResponse>();
}

/**
 * @summary Fully updates the edges of a task flow.
 *
 * @description You can call this operation to perform a full update. For incremental updates, see AddTaskFlowEdges, UpdateTaskFlowEdges, and DeleteTaskFlowEdgesByMultiCondition.
 *
 * @param request UpdateTaskFlowRelationsRequest
 * @return UpdateTaskFlowRelationsResponse
 */
UpdateTaskFlowRelationsResponse Client::updateTaskFlowRelations(const UpdateTaskFlowRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowRelationsWithOptions(request, runtime);
}

/**
 * @summary Updates the scheduling properties for a task flow.
 *
 * @description You can call this operation to update the scheduling properties for a task flow in the editing state. You can configure a **timed scheduling** task flow or an **event scheduling** task flow. When you configure a **timed scheduling** task flow, you can choose from one-time scheduling or periodic scheduling. When you configure an **event scheduling** task flow, you can subscribe to task flows or task flow nodes.****\\
 * After you update the scheduling properties, you need to publish and deploy the task flow again. The new task flow instance will run based on the updated scheduling properties.
 *
 * @param request UpdateTaskFlowScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowScheduleResponse
 */
UpdateTaskFlowScheduleResponse Client::updateTaskFlowScheduleWithOptions(const UpdateTaskFlowScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronBeginDate()) {
    query["CronBeginDate"] = request.getCronBeginDate();
  }

  if (!!request.hasCronEndDate()) {
    query["CronEndDate"] = request.getCronEndDate();
  }

  if (!!request.hasCronStr()) {
    query["CronStr"] = request.getCronStr();
  }

  if (!!request.hasCronType()) {
    query["CronType"] = request.getCronType();
  }

  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasScheduleParam()) {
    query["ScheduleParam"] = request.getScheduleParam();
  }

  if (!!request.hasScheduleSwitch()) {
    query["ScheduleSwitch"] = request.getScheduleSwitch();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasTimeZoneId()) {
    query["TimeZoneId"] = request.getTimeZoneId();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowSchedule"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowScheduleResponse>();
}

/**
 * @summary Updates the scheduling properties for a task flow.
 *
 * @description You can call this operation to update the scheduling properties for a task flow in the editing state. You can configure a **timed scheduling** task flow or an **event scheduling** task flow. When you configure a **timed scheduling** task flow, you can choose from one-time scheduling or periodic scheduling. When you configure an **event scheduling** task flow, you can subscribe to task flows or task flow nodes.****\\
 * After you update the scheduling properties, you need to publish and deploy the task flow again. The new task flow instance will run based on the updated scheduling properties.
 *
 * @param request UpdateTaskFlowScheduleRequest
 * @return UpdateTaskFlowScheduleResponse
 */
UpdateTaskFlowScheduleResponse Client::updateTaskFlowSchedule(const UpdateTaskFlowScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowScheduleWithOptions(request, runtime);
}

/**
 * @summary Updates the time variables for a task flow.
 *
 * @param request UpdateTaskFlowTimeVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskFlowTimeVariablesResponse
 */
UpdateTaskFlowTimeVariablesResponse Client::updateTaskFlowTimeVariablesWithOptions(const UpdateTaskFlowTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagId()) {
    query["DagId"] = request.getDagId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasTimeVariables()) {
    query["TimeVariables"] = request.getTimeVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskFlowTimeVariables"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskFlowTimeVariablesResponse>();
}

/**
 * @summary Updates the time variables for a task flow.
 *
 * @param request UpdateTaskFlowTimeVariablesRequest
 * @return UpdateTaskFlowTimeVariablesResponse
 */
UpdateTaskFlowTimeVariablesResponse Client::updateTaskFlowTimeVariables(const UpdateTaskFlowTimeVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskFlowTimeVariablesWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a specified task.
 *
 * @param request UpdateTaskNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskNameResponse
 */
UpdateTaskNameResponse Client::updateTaskNameWithOptions(const UpdateTaskNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskName"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskNameResponse>();
}

/**
 * @summary Updates the name of a specified task.
 *
 * @param request UpdateTaskNameRequest
 * @return UpdateTaskNameResponse
 */
UpdateTaskNameResponse Client::updateTaskName(const UpdateTaskNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskNameWithOptions(request, runtime);
}

/**
 * @summary Updates the output variables for a specified task node.
 *
 * @description Only nodes of single-instance SQL assignment, script code, and ECS remote command have output variables.
 *
 * @param request UpdateTaskOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskOutputResponse
 */
UpdateTaskOutputResponse Client::updateTaskOutputWithOptions(const UpdateTaskOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasNodeOutput()) {
    query["NodeOutput"] = request.getNodeOutput();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskOutput"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskOutputResponse>();
}

/**
 * @summary Updates the output variables for a specified task node.
 *
 * @description Only nodes of single-instance SQL assignment, script code, and ECS remote command have output variables.
 *
 * @param request UpdateTaskOutputRequest
 * @return UpdateTaskOutputResponse
 */
UpdateTaskOutputResponse Client::updateTaskOutput(const UpdateTaskOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskOutputWithOptions(request, runtime);
}

/**
 * @summary Updates time variables for a task.
 *
 * @param request UpdateTaskTimeVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskTimeVariablesResponse
 */
UpdateTaskTimeVariablesResponse Client::updateTaskTimeVariablesWithOptions(const UpdateTaskTimeVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasTimeVariables()) {
    query["TimeVariables"] = request.getTimeVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskTimeVariables"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskTimeVariablesResponse>();
}

/**
 * @summary Updates time variables for a task.
 *
 * @param request UpdateTaskTimeVariablesRequest
 * @return UpdateTaskTimeVariablesResponse
 */
UpdateTaskTimeVariablesResponse Client::updateTaskTimeVariables(const UpdateTaskTimeVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskTimeVariablesWithOptions(request, runtime);
}

/**
 * @summary Updates user information.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxExecuteCount()) {
    query["MaxExecuteCount"] = request.getMaxExecuteCount();
  }

  if (!!request.hasMaxResultCount()) {
    query["MaxResultCount"] = request.getMaxResultCount();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasRoleNames()) {
    query["RoleNames"] = request.getRoleNames();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  if (!!request.hasUidString()) {
    query["UidString"] = request.getUidString();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.getUserNick();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Updates user information.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspaceWithOptions(const UpdateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspace"},
    {"version" , "2018-11-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResponse>();
}

/**
 * @summary Updates the information about a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspace(const UpdateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkspaceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101