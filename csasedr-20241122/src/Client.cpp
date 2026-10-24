#include <darabonba/Core.hpp>
#include <alibabacloud/CsasEdr20241122.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::CsasEdr20241122::Models;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{

AlibabaCloud::CsasEdr20241122::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("csasedr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a client rule policy.
 *
 * @description Creates a client rule policy. The policy type is specified by PolicyType.
 *
 * @param tmpReq CreateClientRuleStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientRuleStrategyResponse
 */
CreateClientRuleStrategyResponse Client::createClientRuleStrategyWithOptions(const CreateClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClientRuleStrategyShrinkRequest request = CreateClientRuleStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeUserNameList()) {
    request.setExcludeUserNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeUserNameList(), "ExcludeUserNameList", "json"));
  }

  if (!!tmpReq.hasIncludeGroupIdList()) {
    request.setIncludeGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeGroupIdList(), "IncludeGroupIdList", "json"));
  }

  if (!!tmpReq.hasPortOnList()) {
    request.setPortOnListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPortOnList(), "PortOnList", "json"));
  }

  if (!!tmpReq.hasSoftWareOnList()) {
    request.setSoftWareOnListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSoftWareOnList(), "SoftWareOnList", "json"));
  }

  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasAllGroup()) {
    query["AllGroup"] = request.getAllGroup();
  }

  if (!!request.hasApprovalId()) {
    query["ApprovalId"] = request.getApprovalId();
  }

  if (!!request.hasCmdline()) {
    query["Cmdline"] = request.getCmdline();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeUserNameListShrink()) {
    query["ExcludeUserNameList"] = request.getExcludeUserNameListShrink();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasInSwitch()) {
    query["InSwitch"] = request.getInSwitch();
  }

  if (!!request.hasIncludeGroupIdListShrink()) {
    query["IncludeGroupIdList"] = request.getIncludeGroupIdListShrink();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasMainButtonTextCh()) {
    query["MainButtonTextCh"] = request.getMainButtonTextCh();
  }

  if (!!request.hasMainButtonTextEn()) {
    query["MainButtonTextEn"] = request.getMainButtonTextEn();
  }

  if (!!request.hasMatchMode()) {
    query["MatchMode"] = request.getMatchMode();
  }

  if (!!request.hasMatchTargetIds()) {
    query["MatchTargetIds"] = request.getMatchTargetIds();
  }

  if (!!request.hasMd5List()) {
    query["Md5List"] = request.getMd5List();
  }

  if (!!request.hasMinorButtonTextCh()) {
    query["MinorButtonTextCh"] = request.getMinorButtonTextCh();
  }

  if (!!request.hasMinorButtonTextEn()) {
    query["MinorButtonTextEn"] = request.getMinorButtonTextEn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewFilePath()) {
    query["NewFilePath"] = request.getNewFilePath();
  }

  if (!!request.hasOutSwitch()) {
    query["OutSwitch"] = request.getOutSwitch();
  }

  if (!!request.hasParentCmdline()) {
    query["ParentCmdline"] = request.getParentCmdline();
  }

  if (!!request.hasParentProcPath()) {
    query["ParentProcPath"] = request.getParentProcPath();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPortOnListShrink()) {
    query["PortOnList"] = request.getPortOnListShrink();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasProcPath()) {
    query["ProcPath"] = request.getProcPath();
  }

  if (!!request.hasRegistryContent()) {
    query["RegistryContent"] = request.getRegistryContent();
  }

  if (!!request.hasRegistryKey()) {
    query["RegistryKey"] = request.getRegistryKey();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSelectionKey()) {
    query["SelectionKey"] = request.getSelectionKey();
  }

  if (!!request.hasSoftWareOnListShrink()) {
    query["SoftWareOnList"] = request.getSoftWareOnListShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStrategySourceType()) {
    query["StrategySourceType"] = request.getStrategySourceType();
  }

  if (!!request.hasSupportsApproval()) {
    query["SupportsApproval"] = request.getSupportsApproval();
  }

  if (!!request.hasUsContent()) {
    query["UsContent"] = request.getUsContent();
  }

  if (!!request.hasUsTitle()) {
    query["UsTitle"] = request.getUsTitle();
  }

  if (!!request.hasZhContent()) {
    query["ZhContent"] = request.getZhContent();
  }

  if (!!request.hasZhTitle()) {
    query["ZhTitle"] = request.getZhTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClientRuleStrategy"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientRuleStrategyResponse>();
}

/**
 * @summary Creates a client rule policy.
 *
 * @description Creates a client rule policy. The policy type is specified by PolicyType.
 *
 * @param request CreateClientRuleStrategyRequest
 * @return CreateClientRuleStrategyResponse
 */
CreateClientRuleStrategyResponse Client::createClientRuleStrategy(const CreateClientRuleStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientRuleStrategyWithOptions(request, runtime);
}

/**
 * @summary Creates a general asset selection configuration and generates a SelectionKey for use in What to do next.
 *
 * @description This operation is used for the initialization of a general asset selection configuration and generates a SelectionKey. The addition or selection of specific assets is completed in What to do next. When you invoke this operation, it only generates the configuration object and does not save the configuration record.
 *
 * @param request CreateSelectionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSelectionConfigResponse
 */
CreateSelectionConfigResponse Client::createSelectionConfigWithOptions(const CreateSelectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CreateSelectionConfig"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSelectionConfigResponse>();
}

/**
 * @summary Creates a general asset selection configuration and generates a SelectionKey for use in What to do next.
 *
 * @description This operation is used for the initialization of a general asset selection configuration and generates a SelectionKey. The addition or selection of specific assets is completed in What to do next. When you invoke this operation, it only generates the configuration object and does not save the configuration record.
 *
 * @param request CreateSelectionConfigRequest
 * @return CreateSelectionConfigResponse
 */
CreateSelectionConfigResponse Client::createSelectionConfig(const CreateSelectionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSelectionConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a node to query alerting events triggered by the same rule or Alarm Metric.
 *
 * @param request CreateSimilarSecurityEventsQueryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimilarSecurityEventsQueryTaskResponse
 */
CreateSimilarSecurityEventsQueryTaskResponse Client::createSimilarSecurityEventsQueryTaskWithOptions(const CreateSimilarSecurityEventsQueryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityEventId()) {
    query["SecurityEventId"] = request.getSecurityEventId();
  }

  if (!!request.hasSimilarEventScenarioCode()) {
    query["SimilarEventScenarioCode"] = request.getSimilarEventScenarioCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSimilarSecurityEventsQueryTask"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimilarSecurityEventsQueryTaskResponse>();
}

/**
 * @summary Creates a node to query alerting events triggered by the same rule or Alarm Metric.
 *
 * @param request CreateSimilarSecurityEventsQueryTaskRequest
 * @return CreateSimilarSecurityEventsQueryTaskResponse
 */
CreateSimilarSecurityEventsQueryTaskResponse Client::createSimilarSecurityEventsQueryTask(const CreateSimilarSecurityEventsQueryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimilarSecurityEventsQueryTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes client rule policies based on a list of policy IDs.
 *
 * @param tmpReq DeleteClientRuleStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientRuleStrategyResponse
 */
DeleteClientRuleStrategyResponse Client::deleteClientRuleStrategyWithOptions(const DeleteClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteClientRuleStrategyShrinkRequest request = DeleteClientRuleStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIdList()) {
    request.setIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIdList(), "IdList", "json"));
  }

  json query = {};
  if (!!request.hasIdListShrink()) {
    query["IdList"] = request.getIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientRuleStrategy"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientRuleStrategyResponse>();
}

/**
 * @summary Deletes client rule policies based on a list of policy IDs.
 *
 * @param request DeleteClientRuleStrategyRequest
 * @return DeleteClientRuleStrategyResponse
 */
DeleteClientRuleStrategyResponse Client::deleteClientRuleStrategy(const DeleteClientRuleStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientRuleStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes alert whitelist configurations in batches.
 *
 * @param request DeleteSecurityEventMarkMissListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityEventMarkMissListResponse
 */
DeleteSecurityEventMarkMissListResponse Client::deleteSecurityEventMarkMissListWithOptions(const DeleteSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityEventMarkMissList"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityEventMarkMissListResponse>();
}

/**
 * @summary Deletes alert whitelist configurations in batches.
 *
 * @param request DeleteSecurityEventMarkMissListRequest
 * @return DeleteSecurityEventMarkMissListResponse
 */
DeleteSecurityEventMarkMissListResponse Client::deleteSecurityEventMarkMissList(const DeleteSecurityEventMarkMissListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityEventMarkMissListWithOptions(request, runtime);
}

/**
 * @summary Queries the effective scope mode, target list, and scope record information based on the asset scope ID.
 *
 * @param request DescribeAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetScopeResponse
 */
DescribeAssetScopeResponse Client::describeAssetScopeWithOptions(const DescribeAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetScope"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetScopeResponse>();
}

/**
 * @summary Queries the effective scope mode, target list, and scope record information based on the asset scope ID.
 *
 * @param request DescribeAssetScopeRequest
 * @return DescribeAssetScopeResponse
 */
DescribeAssetScopeResponse Client::describeAssetScope(const DescribeAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Queries security alert types.
 *
 * @param request DescribeNsasSuspEventTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNsasSuspEventTypeResponse
 */
DescribeNsasSuspEventTypeResponse Client::describeNsasSuspEventTypeWithOptions(const DescribeNsasSuspEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainerFieldName()) {
    query["ContainerFieldName"] = request.getContainerFieldName();
  }

  if (!!request.hasContainerFieldValue()) {
    query["ContainerFieldValue"] = request.getContainerFieldValue();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasUuids()) {
    query["Uuids"] = request.getUuids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNsasSuspEventType"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNsasSuspEventTypeResponse>();
}

/**
 * @summary Queries security alert types.
 *
 * @param request DescribeNsasSuspEventTypeRequest
 * @return DescribeNsasSuspEventTypeResponse
 */
DescribeNsasSuspEventTypeResponse Client::describeNsasSuspEventType(const DescribeNsasSuspEventTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNsasSuspEventTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic whitelist rules for alerts.
 *
 * @param request DescribeSecurityEventMarkMissListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventMarkMissListResponse
 */
DescribeSecurityEventMarkMissListResponse Client::describeSecurityEventMarkMissListWithOptions(const DescribeSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDisposalWay()) {
    query["DisposalWay"] = request.getDisposalWay();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventMarkMissList"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventMarkMissListResponse>();
}

/**
 * @summary Queries the automatic whitelist rules for alerts.
 *
 * @param request DescribeSecurityEventMarkMissListRequest
 * @return DescribeSecurityEventMarkMissListResponse
 */
DescribeSecurityEventMarkMissListResponse Client::describeSecurityEventMarkMissList(const DescribeSecurityEventMarkMissListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventMarkMissListWithOptions(request, runtime);
}

/**
 * @summary Queries the processing status of security alerts based on the task ID or alert event ID.
 *
 * @param request DescribeSecurityEventOperationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventOperationStatusResponse
 */
DescribeSecurityEventOperationStatusResponse Client::describeSecurityEventOperationStatusWithOptions(const DescribeSecurityEventOperationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityEventIds()) {
    query["SecurityEventIds"] = request.getSecurityEventIds();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventOperationStatus"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventOperationStatusResponse>();
}

/**
 * @summary Queries the processing status of security alerts based on the task ID or alert event ID.
 *
 * @param request DescribeSecurityEventOperationStatusRequest
 * @return DescribeSecurityEventOperationStatusResponse
 */
DescribeSecurityEventOperationStatusResponse Client::describeSecurityEventOperationStatus(const DescribeSecurityEventOperationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventOperationStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
 *
 * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
 * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
 *
 * @param request DescribeSecurityEventOperationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventOperationsResponse
 */
DescribeSecurityEventOperationsResponse Client::describeSecurityEventOperationsWithOptions(const DescribeSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityEventId()) {
    query["SecurityEventId"] = request.getSecurityEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventOperations"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventOperationsResponse>();
}

/**
 * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
 *
 * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
 * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
 *
 * @param request DescribeSecurityEventOperationsRequest
 * @return DescribeSecurityEventOperationsResponse
 */
DescribeSecurityEventOperationsResponse Client::describeSecurityEventOperations(const DescribeSecurityEventOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventOperationsWithOptions(request, runtime);
}

/**
 * @summary Queries the handling scenarios for alerts triggered by the same rule or type.
 *
 * @param request DescribeSimilarEventScenariosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimilarEventScenariosResponse
 */
DescribeSimilarEventScenariosResponse Client::describeSimilarEventScenariosWithOptions(const DescribeSimilarEventScenariosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityEventId()) {
    query["SecurityEventId"] = request.getSecurityEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimilarEventScenarios"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimilarEventScenariosResponse>();
}

/**
 * @summary Queries the handling scenarios for alerts triggered by the same rule or type.
 *
 * @param request DescribeSimilarEventScenariosRequest
 * @return DescribeSimilarEventScenariosResponse
 */
DescribeSimilarEventScenariosResponse Client::describeSimilarEventScenarios(const DescribeSimilarEventScenariosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimilarEventScenariosWithOptions(request, runtime);
}

/**
 * @summary Queries aggregated alerts triggered by the same rule or type.
 *
 * @param request DescribeSimilarSecurityEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimilarSecurityEventsResponse
 */
DescribeSimilarSecurityEventsResponse Client::describeSimilarSecurityEventsWithOptions(const DescribeSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimilarSecurityEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimilarSecurityEventsResponse>();
}

/**
 * @summary Queries aggregated alerts triggered by the same rule or type.
 *
 * @param request DescribeSimilarSecurityEventsRequest
 * @return DescribeSimilarSecurityEventsResponse
 */
DescribeSimilarSecurityEventsResponse Client::describeSimilarSecurityEvents(const DescribeSimilarSecurityEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimilarSecurityEventsWithOptions(request, runtime);
}

/**
 * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
 *
 * @param request DescribeSuspEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEventsWithOptions(const DescribeSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmEventName()) {
    query["AlarmEventName"] = request.getAlarmEventName();
  }

  if (!!request.hasAlarmUniqueInfo()) {
    query["AlarmUniqueInfo"] = request.getAlarmUniqueInfo();
  }

  if (!!request.hasAssetsTypeList()) {
    query["AssetsTypeList"] = request.getAssetsTypeList();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasContainerFieldName()) {
    query["ContainerFieldName"] = request.getContainerFieldName();
  }

  if (!!request.hasContainerFieldValue()) {
    query["ContainerFieldValue"] = request.getContainerFieldValue();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDealed()) {
    query["Dealed"] = request.getDealed();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.getDepartment();
  }

  if (!!request.hasEventNames()) {
    query["EventNames"] = request.getEventNames();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInnerIp()) {
    query["InnerIp"] = request.getInnerIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLevels()) {
    query["Levels"] = request.getLevels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOperateErrorCodeList()) {
    query["OperateErrorCodeList"] = request.getOperateErrorCodeList();
  }

  if (!!request.hasOperateTimeEnd()) {
    query["OperateTimeEnd"] = request.getOperateTimeEnd();
  }

  if (!!request.hasOperateTimeStart()) {
    query["OperateTimeStart"] = request.getOperateTimeStart();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentEventTypes()) {
    query["ParentEventTypes"] = request.getParentEventTypes();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSortColumn()) {
    query["SortColumn"] = request.getSortColumn();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.getStrictMode();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTimeEnd()) {
    query["TimeEnd"] = request.getTimeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["TimeStart"] = request.getTimeStart();
  }

  if (!!request.hasUniqueInfo()) {
    query["UniqueInfo"] = request.getUniqueInfo();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasUuids()) {
    query["Uuids"] = request.getUuids();
  }

  json body = {};
  if (!!request.hasTacticId()) {
    body["TacticId"] = request.getTacticId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeSuspEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSuspEventsResponse>();
}

/**
 * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
 *
 * @param request DescribeSuspEventsRequest
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEvents(const DescribeSuspEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSuspEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a client rule policy.
 *
 * @description Queries the detailed information of a client rule policy based on the policy ID.
 *
 * @param request GetClientRuleStrategyDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientRuleStrategyDetailResponse
 */
GetClientRuleStrategyDetailResponse Client::getClientRuleStrategyDetailWithOptions(const GetClientRuleStrategyDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientRuleStrategyDetail"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientRuleStrategyDetailResponse>();
}

/**
 * @summary Queries the details of a client rule policy.
 *
 * @description Queries the detailed information of a client rule policy based on the policy ID.
 *
 * @param request GetClientRuleStrategyDetailRequest
 * @return GetClientRuleStrategyDetailResponse
 */
GetClientRuleStrategyDetailResponse Client::getClientRuleStrategyDetail(const GetClientRuleStrategyDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientRuleStrategyDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the number of system rules and custom rules in proactive defense policies.
 *
 * @description Counts the number of proactive defense policies (PolicyType=2) for the current account and returns the number of system rule policies and custom rule policies.
 *
 * @param request GetClientRuleStrategyStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientRuleStrategyStatisticsResponse
 */
GetClientRuleStrategyStatisticsResponse Client::getClientRuleStrategyStatisticsWithOptions(const GetClientRuleStrategyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientRuleStrategyStatistics"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientRuleStrategyStatisticsResponse>();
}

/**
 * @summary Queries the number of system rules and custom rules in proactive defense policies.
 *
 * @description Counts the number of proactive defense policies (PolicyType=2) for the current account and returns the number of system rule policies and custom rule policies.
 *
 * @param request GetClientRuleStrategyStatisticsRequest
 * @return GetClientRuleStrategyStatisticsResponse
 */
GetClientRuleStrategyStatisticsResponse Client::getClientRuleStrategyStatistics(const GetClientRuleStrategyStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientRuleStrategyStatisticsWithOptions(request, runtime);
}

/**
 * @summary Handles security alert events.
 *
 * @param request HandleSecurityEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleSecurityEventsResponse
 */
HandleSecurityEventsResponse Client::handleSecurityEventsWithOptions(const HandleSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarkBatch()) {
    query["MarkBatch"] = request.getMarkBatch();
  }

  if (!!request.hasMarkMissParam()) {
    query["MarkMissParam"] = request.getMarkMissParam();
  }

  if (!!request.hasOperationCode()) {
    query["OperationCode"] = request.getOperationCode();
  }

  if (!!request.hasOperationParams()) {
    query["OperationParams"] = request.getOperationParams();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSecurityEventIds()) {
    query["SecurityEventIds"] = request.getSecurityEventIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HandleSecurityEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HandleSecurityEventsResponse>();
}

/**
 * @summary Handles security alert events.
 *
 * @param request HandleSecurityEventsRequest
 * @return HandleSecurityEventsResponse
 */
HandleSecurityEventsResponse Client::handleSecurityEvents(const HandleSecurityEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return handleSecurityEventsWithOptions(request, runtime);
}

/**
 * @summary Performs batch operations on similar security alerts filtered by a query task.
 *
 * @description First, call the CreateSimilarSecurityEventsQueryTask operation to create a similar alert query task. Wait until the data extraction for the task is complete and the task reaches the DataRetrieved state before you call this operation. The processing scope covers the security alerts filtered under the TaskId. This scope is determined by the similar scenario and alert configurations selected when the query task was created. The scope does not equal all alerts of the same type, nor is it fixed to alerts with the same IP address. After this operation is successfully called, the processing continues to run asynchronously in the background.
 *
 * @param request HandleSimilarSecurityEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleSimilarSecurityEventsResponse
 */
HandleSimilarSecurityEventsResponse Client::handleSimilarSecurityEventsWithOptions(const HandleSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarkMissParam()) {
    query["MarkMissParam"] = request.getMarkMissParam();
  }

  if (!!request.hasOperationCode()) {
    query["OperationCode"] = request.getOperationCode();
  }

  if (!!request.hasOperationParams()) {
    query["OperationParams"] = request.getOperationParams();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HandleSimilarSecurityEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HandleSimilarSecurityEventsResponse>();
}

/**
 * @summary Performs batch operations on similar security alerts filtered by a query task.
 *
 * @description First, call the CreateSimilarSecurityEventsQueryTask operation to create a similar alert query task. Wait until the data extraction for the task is complete and the task reaches the DataRetrieved state before you call this operation. The processing scope covers the security alerts filtered under the TaskId. This scope is determined by the similar scenario and alert configurations selected when the query task was created. The scope does not equal all alerts of the same type, nor is it fixed to alerts with the same IP address. After this operation is successfully called, the processing continues to run asynchronously in the background.
 *
 * @param request HandleSimilarSecurityEventsRequest
 * @return HandleSimilarSecurityEventsResponse
 */
HandleSimilarSecurityEventsResponse Client::handleSimilarSecurityEvents(const HandleSimilarSecurityEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return handleSimilarSecurityEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the client rule policy list by using a paged query with paging.
 *
 * @description Performs a paged query to retrieve client rule policies based on the policy type (PolicyType) with paging. You can call GetClientRuleStrategyDetail to query the details.
 *
 * @param request ListClientRuleStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientRuleStrategyResponse
 */
ListClientRuleStrategyResponse Client::listClientRuleStrategyWithOptions(const ListClientRuleStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClientRuleStrategy"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientRuleStrategyResponse>();
}

/**
 * @summary Queries the client rule policy list by using a paged query with paging.
 *
 * @description Performs a paged query to retrieve client rule policies based on the policy type (PolicyType) with paging. You can call GetClientRuleStrategyDetail to query the details.
 *
 * @param request ListClientRuleStrategyRequest
 * @return ListClientRuleStrategyResponse
 */
ListClientRuleStrategyResponse Client::listClientRuleStrategy(const ListClientRuleStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientRuleStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries system defense rules and the switch status of rules under a specified SelectionKey by paging in a paged query.
 *
 * @description Queries the system rule catalog and the switch status of rules under a specified SelectionKey. You can use the returned SwitchId and the same SelectionKey to call the OperateTargetConfig operation to modify the switch status.
 *
 * @param tmpReq ListSystemConfigRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemConfigRulesResponse
 */
ListSystemConfigRulesResponse Client::listSystemConfigRulesWithOptions(const ListSystemConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSystemConfigRulesShrinkRequest request = ListSystemConfigRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAggregationIds()) {
    request.setAggregationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAggregationIds(), "AggregationIds", "json"));
  }

  if (!!tmpReq.hasRuleTypes()) {
    request.setRuleTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleTypes(), "RuleTypes", "json"));
  }

  json query = {};
  if (!!request.hasAggregationIdsShrink()) {
    query["AggregationIds"] = request.getAggregationIdsShrink();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleTypesShrink()) {
    query["RuleTypes"] = request.getRuleTypesShrink();
  }

  if (!!request.hasSelectionKey()) {
    query["SelectionKey"] = request.getSelectionKey();
  }

  if (!!request.hasSystemType()) {
    query["SystemType"] = request.getSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSystemConfigRules"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemConfigRulesResponse>();
}

/**
 * @summary Queries system defense rules and the switch status of rules under a specified SelectionKey by paging in a paged query.
 *
 * @description Queries the system rule catalog and the switch status of rules under a specified SelectionKey. You can use the returned SwitchId and the same SelectionKey to call the OperateTargetConfig operation to modify the switch status.
 *
 * @param request ListSystemConfigRulesRequest
 * @return ListSystemConfigRulesResponse
 */
ListSystemConfigRulesResponse Client::listSystemConfigRules(const ListSystemConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Updates the switch status of system rules in batches by SelectionKey.
 *
 * @description Updates the override configuration of rule switches for each SwitchId under the same SelectionKey. Obtain the rule SwitchId by calling ListSystemConfigRules first. Do not use this operation to replace UpdateClientRuleStrategy for updating the overall policy switch Status, and do not use software process names as system rule SwitchIds.
 *
 * @param tmpReq OperateTargetConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateTargetConfigResponse
 */
OperateTargetConfigResponse Client::operateTargetConfigWithOptions(const OperateTargetConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateTargetConfigShrinkRequest request = OperateTargetConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSwitchIdList()) {
    request.setSwitchIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSwitchIdList(), "SwitchIdList", "json"));
  }

  json query = {};
  if (!!request.hasSelectionKey()) {
    query["SelectionKey"] = request.getSelectionKey();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSwitchIdListShrink()) {
    query["SwitchIdList"] = request.getSwitchIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateTargetConfig"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateTargetConfigResponse>();
}

/**
 * @summary Updates the switch status of system rules in batches by SelectionKey.
 *
 * @description Updates the override configuration of rule switches for each SwitchId under the same SelectionKey. Obtain the rule SwitchId by calling ListSystemConfigRules first. Do not use this operation to replace UpdateClientRuleStrategy for updating the overall policy switch Status, and do not use software process names as system rule SwitchIds.
 *
 * @param request OperateTargetConfigRequest
 * @return OperateTargetConfigResponse
 */
OperateTargetConfigResponse Client::operateTargetConfig(const OperateTargetConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateTargetConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the effective scope mode and target list of a specified asset scope record.
 *
 * @param request UpdateAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssetScopeResponse
 */
UpdateAssetScopeResponse Client::updateAssetScopeWithOptions(const UpdateAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMatchMode()) {
    query["MatchMode"] = request.getMatchMode();
  }

  if (!!request.hasMatchTargetIds()) {
    query["MatchTargetIds"] = request.getMatchTargetIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAssetScope"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssetScopeResponse>();
}

/**
 * @summary Updates the effective scope mode and target list of a specified asset scope record.
 *
 * @param request UpdateAssetScopeRequest
 * @return UpdateAssetScopeResponse
 */
UpdateAssetScopeResponse Client::updateAssetScope(const UpdateAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Updates a client rule policy.
 *
 * @description Updates a client rule policy based on the policy ID.
 *
 * @param tmpReq UpdateClientRuleStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientRuleStrategyResponse
 */
UpdateClientRuleStrategyResponse Client::updateClientRuleStrategyWithOptions(const UpdateClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateClientRuleStrategyShrinkRequest request = UpdateClientRuleStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeUserNameList()) {
    request.setExcludeUserNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeUserNameList(), "ExcludeUserNameList", "json"));
  }

  if (!!tmpReq.hasIncludeGroupIdList()) {
    request.setIncludeGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeGroupIdList(), "IncludeGroupIdList", "json"));
  }

  if (!!tmpReq.hasPortOnList()) {
    request.setPortOnListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPortOnList(), "PortOnList", "json"));
  }

  if (!!tmpReq.hasSoftWareOnList()) {
    request.setSoftWareOnListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSoftWareOnList(), "SoftWareOnList", "json"));
  }

  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasAllGroup()) {
    query["AllGroup"] = request.getAllGroup();
  }

  if (!!request.hasApprovalId()) {
    query["ApprovalId"] = request.getApprovalId();
  }

  if (!!request.hasCmdline()) {
    query["Cmdline"] = request.getCmdline();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeUserNameListShrink()) {
    query["ExcludeUserNameList"] = request.getExcludeUserNameListShrink();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInSwitch()) {
    query["InSwitch"] = request.getInSwitch();
  }

  if (!!request.hasIncludeGroupIdListShrink()) {
    query["IncludeGroupIdList"] = request.getIncludeGroupIdListShrink();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasMainButtonTextCh()) {
    query["MainButtonTextCh"] = request.getMainButtonTextCh();
  }

  if (!!request.hasMainButtonTextEn()) {
    query["MainButtonTextEn"] = request.getMainButtonTextEn();
  }

  if (!!request.hasMatchMode()) {
    query["MatchMode"] = request.getMatchMode();
  }

  if (!!request.hasMatchTargetIds()) {
    query["MatchTargetIds"] = request.getMatchTargetIds();
  }

  if (!!request.hasMd5List()) {
    query["Md5List"] = request.getMd5List();
  }

  if (!!request.hasMinorButtonTextCh()) {
    query["MinorButtonTextCh"] = request.getMinorButtonTextCh();
  }

  if (!!request.hasMinorButtonTextEn()) {
    query["MinorButtonTextEn"] = request.getMinorButtonTextEn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewFilePath()) {
    query["NewFilePath"] = request.getNewFilePath();
  }

  if (!!request.hasOutSwitch()) {
    query["OutSwitch"] = request.getOutSwitch();
  }

  if (!!request.hasParentCmdline()) {
    query["ParentCmdline"] = request.getParentCmdline();
  }

  if (!!request.hasParentProcPath()) {
    query["ParentProcPath"] = request.getParentProcPath();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPortOnListShrink()) {
    query["PortOnList"] = request.getPortOnListShrink();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasProcPath()) {
    query["ProcPath"] = request.getProcPath();
  }

  if (!!request.hasRegistryContent()) {
    query["RegistryContent"] = request.getRegistryContent();
  }

  if (!!request.hasRegistryKey()) {
    query["RegistryKey"] = request.getRegistryKey();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSoftWareOnListShrink()) {
    query["SoftWareOnList"] = request.getSoftWareOnListShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStrategySourceType()) {
    query["StrategySourceType"] = request.getStrategySourceType();
  }

  if (!!request.hasSupportsApproval()) {
    query["SupportsApproval"] = request.getSupportsApproval();
  }

  if (!!request.hasUsContent()) {
    query["UsContent"] = request.getUsContent();
  }

  if (!!request.hasUsTitle()) {
    query["UsTitle"] = request.getUsTitle();
  }

  if (!!request.hasZhContent()) {
    query["ZhContent"] = request.getZhContent();
  }

  if (!!request.hasZhTitle()) {
    query["ZhTitle"] = request.getZhTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClientRuleStrategy"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClientRuleStrategyResponse>();
}

/**
 * @summary Updates a client rule policy.
 *
 * @description Updates a client rule policy based on the policy ID.
 *
 * @param request UpdateClientRuleStrategyRequest
 * @return UpdateClientRuleStrategyResponse
 */
UpdateClientRuleStrategyResponse Client::updateClientRuleStrategy(const UpdateClientRuleStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientRuleStrategyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CsasEdr20241122