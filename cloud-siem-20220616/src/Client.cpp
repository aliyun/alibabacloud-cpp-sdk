#include <darabonba/Core.hpp>
#include <alibabacloud/CloudSiem20220616.hpp>
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
using namespace AlibabaCloud::CloudSiem20220616::Models;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{

AlibabaCloud::CloudSiem20220616::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloud-siem", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a data source to a cloud account that is added to the threat analysis feature.
 *
 * @param request AddDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataSourceResponse
 */
AddDataSourceResponse Client::addDataSourceWithOptions(const AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceName()) {
    body["DataSourceInstanceName"] = request.dataSourceInstanceName();
  }

  if (!!request.hasDataSourceInstanceParams()) {
    body["DataSourceInstanceParams"] = request.dataSourceInstanceParams();
  }

  if (!!request.hasDataSourceInstanceRemark()) {
    body["DataSourceInstanceRemark"] = request.dataSourceInstanceRemark();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddDataSource"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataSourceResponse>();
}

/**
 * @summary Adds a data source to a cloud account that is added to the threat analysis feature.
 *
 * @param request AddDataSourceRequest
 * @return AddDataSourceResponse
 */
AddDataSourceResponse Client::addDataSource(const AddDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataSourceWithOptions(request, runtime);
}

/**
 * @summary Adds logs of a cloud account to the threat analysis feature.
 *
 * @param request AddDataSourceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataSourceLogResponse
 */
AddDataSourceLogResponse Client::addDataSourceLogWithOptions(const AddDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasDataSourceInstanceLogs()) {
    body["DataSourceInstanceLogs"] = request.dataSourceInstanceLogs();
  }

  if (!!request.hasLogCode()) {
    body["LogCode"] = request.logCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddDataSourceLog"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataSourceLogResponse>();
}

/**
 * @summary Adds logs of a cloud account to the threat analysis feature.
 *
 * @param request AddDataSourceLogRequest
 * @return AddDataSourceLogResponse
 */
AddDataSourceLogResponse Client::addDataSourceLog(const AddDataSourceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataSourceLogWithOptions(request, runtime);
}

/**
 * @summary Adds the logs of a cloud service within a cloud account to the threat analysis feature for alert and event anslysis.
 *
 * @param request AddUserSourceLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserSourceLogConfigResponse
 */
AddUserSourceLogConfigResponse Client::addUserSourceLogConfigWithOptions(const AddUserSourceLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeleted()) {
    body["Deleted"] = request.deleted();
  }

  if (!!request.hasDisPlayLine()) {
    body["DisPlayLine"] = request.disPlayLine();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceLogCode()) {
    body["SourceLogCode"] = request.sourceLogCode();
  }

  if (!!request.hasSourceLogInfo()) {
    body["SourceLogInfo"] = request.sourceLogInfo();
  }

  if (!!request.hasSourceProdCode()) {
    body["SourceProdCode"] = request.sourceProdCode();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddUserSourceLogConfig"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserSourceLogConfigResponse>();
}

/**
 * @summary Adds the logs of a cloud service within a cloud account to the threat analysis feature for alert and event anslysis.
 *
 * @param request AddUserSourceLogConfigRequest
 * @return AddUserSourceLogConfigResponse
 */
AddUserSourceLogConfigResponse Client::addUserSourceLogConfig(const AddUserSourceLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserSourceLogConfigWithOptions(request, runtime);
}

/**
 * @summary Adds a third-party cloud account that is displayed on the Multi-cloud assets tab of the Feature Settings page to the threat analysis feature.
 *
 * @param request BindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAccountResponse
 */
BindAccountResponse Client::bindAccountWithOptions(const BindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessId()) {
    body["AccessId"] = request.accessId();
  }

  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BindAccount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAccountResponse>();
}

/**
 * @summary Adds a third-party cloud account that is displayed on the Multi-cloud assets tab of the Feature Settings page to the threat analysis feature.
 *
 * @param request BindAccountRequest
 * @return BindAccountResponse
 */
BindAccountResponse Client::bindAccount(const BindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAccountWithOptions(request, runtime);
}

/**
 * @summary Disables the log delivery feature for a cloud service.
 *
 * @param request CloseDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseDeliveryResponse
 */
CloseDeliveryResponse Client::closeDeliveryWithOptions(const CloseDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLogCode()) {
    body["LogCode"] = request.logCode();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CloseDelivery"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseDeliveryResponse>();
}

/**
 * @summary Disables the log delivery feature for a cloud service.
 *
 * @param request CloseDeliveryRequest
 * @return CloseDeliveryResponse
 */
CloseDeliveryResponse Client::closeDelivery(const CloseDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeDeliveryWithOptions(request, runtime);
}

/**
 * @summary Deletes the automated response rule with a specified ID.
 *
 * @param request DeleteAutomateResponseConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutomateResponseConfigResponse
 */
DeleteAutomateResponseConfigResponse Client::deleteAutomateResponseConfigWithOptions(const DeleteAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAutomateResponseConfig"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutomateResponseConfigResponse>();
}

/**
 * @summary Deletes the automated response rule with a specified ID.
 *
 * @param request DeleteAutomateResponseConfigRequest
 * @return DeleteAutomateResponseConfigResponse
 */
DeleteAutomateResponseConfigResponse Client::deleteAutomateResponseConfig(const DeleteAutomateResponseConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutomateResponseConfigWithOptions(request, runtime);
}

/**
 * @summary Removes a third-party cloud account that is added to the threat analysis feature by using its AccessKey ID. You can add another cloud account based on your business requirements.
 *
 * @param request DeleteBindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBindAccountResponse
 */
DeleteBindAccountResponse Client::deleteBindAccountWithOptions(const DeleteBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessId()) {
    body["AccessId"] = request.accessId();
  }

  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasBindId()) {
    body["BindId"] = request.bindId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBindAccount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBindAccountResponse>();
}

/**
 * @summary Removes a third-party cloud account that is added to the threat analysis feature by using its AccessKey ID. You can add another cloud account based on your business requirements.
 *
 * @param request DeleteBindAccountRequest
 * @return DeleteBindAccountResponse
 */
DeleteBindAccountResponse Client::deleteBindAccount(const DeleteBindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBindAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a rule by rule ID.
 *
 * @param request DeleteCustomizeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizeRuleResponse
 */
DeleteCustomizeRuleResponse Client::deleteCustomizeRuleWithOptions(const DeleteCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomizeRule"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomizeRuleResponse>();
}

/**
 * @summary Deletes a rule by rule ID.
 *
 * @param request DeleteCustomizeRuleRequest
 * @return DeleteCustomizeRuleResponse
 */
DeleteCustomizeRuleResponse Client::deleteCustomizeRule(const DeleteCustomizeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomizeRuleWithOptions(request, runtime);
}

/**
 * @summary Removes a data source that is no longer required.
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Removes a data source that is no longer required.
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Removes a log.
 *
 * @param request DeleteDataSourceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceLogResponse
 */
DeleteDataSourceLogResponse Client::deleteDataSourceLogWithOptions(const DeleteDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasLogInstanceId()) {
    body["LogInstanceId"] = request.logInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataSourceLog"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceLogResponse>();
}

/**
 * @summary Removes a log.
 *
 * @param request DeleteDataSourceLogRequest
 * @return DeleteDataSourceLogResponse
 */
DeleteDataSourceLogResponse Client::deleteDataSourceLog(const DeleteDataSourceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceLogWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert whitelist rule with a specified ID.
 *
 * @param request DeleteWhiteRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWhiteRuleListResponse
 */
DeleteWhiteRuleListResponse Client::deleteWhiteRuleListWithOptions(const DeleteWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWhiteRuleList"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWhiteRuleListResponse>();
}

/**
 * @summary Deletes an alert whitelist rule with a specified ID.
 *
 * @param request DeleteWhiteRuleListRequest
 * @return DeleteWhiteRuleListResponse
 */
DeleteWhiteRuleListResponse Client::deleteWhiteRuleList(const DeleteWhiteRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWhiteRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the aggregate functions that are supported for a custom rule.
 *
 * @param request DescribeAggregateFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAggregateFunctionResponse
 */
DescribeAggregateFunctionResponse Client::describeAggregateFunctionWithOptions(const DescribeAggregateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAggregateFunction"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAggregateFunctionResponse>();
}

/**
 * @summary Queries the aggregate functions that are supported for a custom rule.
 *
 * @param request DescribeAggregateFunctionRequest
 * @return DescribeAggregateFunctionResponse
 */
DescribeAggregateFunctionResponse Client::describeAggregateFunction(const DescribeAggregateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAggregateFunctionWithOptions(request, runtime);
}

/**
 * @summary Queries the scenarios in which an alert needs to be added to the whitelist.
 *
 * @param request DescribeAlertSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertSceneResponse
 */
DescribeAlertSceneResponse Client::describeAlertSceneWithOptions(const DescribeAlertSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertScene"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertSceneResponse>();
}

/**
 * @summary Queries the scenarios in which an alert needs to be added to the whitelist.
 *
 * @param request DescribeAlertSceneRequest
 * @return DescribeAlertSceneResponse
 */
DescribeAlertSceneResponse Client::describeAlertScene(const DescribeAlertSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertSceneWithOptions(request, runtime);
}

/**
 * @summary Queries the scenarios and objects that can be added to an alert whitelist rule.
 *
 * @param request DescribeAlertSceneByEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertSceneByEventResponse
 */
DescribeAlertSceneByEventResponse Client::describeAlertSceneByEventWithOptions(const DescribeAlertSceneByEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertSceneByEvent"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertSceneByEventResponse>();
}

/**
 * @summary Queries the scenarios and objects that can be added to an alert whitelist rule.
 *
 * @param request DescribeAlertSceneByEventRequest
 * @return DescribeAlertSceneByEventResponse
 */
DescribeAlertSceneByEventResponse Client::describeAlertSceneByEvent(const DescribeAlertSceneByEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertSceneByEventWithOptions(request, runtime);
}

/**
 * @summary Queries alert data sources.
 *
 * @param request DescribeAlertSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertSourceResponse
 */
DescribeAlertSourceResponse Client::describeAlertSourceWithOptions(const DescribeAlertSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertSource"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertSourceResponse>();
}

/**
 * @summary Queries alert data sources.
 *
 * @param request DescribeAlertSourceRequest
 * @return DescribeAlertSourceResponse
 */
DescribeAlertSourceResponse Client::describeAlertSource(const DescribeAlertSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the data sources of the alert that is associated with an event.
 *
 * @param request DescribeAlertSourceWithEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertSourceWithEventResponse
 */
DescribeAlertSourceWithEventResponse Client::describeAlertSourceWithEventWithOptions(const DescribeAlertSourceWithEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertSourceWithEvent"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertSourceWithEventResponse>();
}

/**
 * @summary Queries the data sources of the alert that is associated with an event.
 *
 * @param request DescribeAlertSourceWithEventRequest
 * @return DescribeAlertSourceWithEventResponse
 */
DescribeAlertSourceWithEventResponse Client::describeAlertSourceWithEvent(const DescribeAlertSourceWithEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertSourceWithEventWithOptions(request, runtime);
}

/**
 * @summary Queries the threat types that you can select when you create a custom rule.
 *
 * @param request DescribeAlertTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertTypeResponse
 */
DescribeAlertTypeResponse Client::describeAlertTypeWithOptions(const DescribeAlertTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertType"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertTypeResponse>();
}

/**
 * @summary Queries the threat types that you can select when you create a custom rule.
 *
 * @param request DescribeAlertTypeRequest
 * @return DescribeAlertTypeResponse
 */
DescribeAlertTypeResponse Client::describeAlertType(const DescribeAlertTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertTypeWithOptions(request, runtime);
}

/**
 * @summary Queries alerts within your account.
 *
 * @param request DescribeAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertsResponse
 */
DescribeAlertsResponse Client::describeAlertsWithOptions(const DescribeAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertName()) {
    body["AlertName"] = request.alertName();
  }

  if (!!request.hasAlertTitle()) {
    body["AlertTitle"] = request.alertTitle();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasAlertUuid()) {
    body["AlertUuid"] = request.alertUuid();
  }

  if (!!request.hasAssetId()) {
    body["AssetId"] = request.assetId();
  }

  if (!!request.hasAssetName()) {
    body["AssetName"] = request.assetName();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityName()) {
    body["EntityName"] = request.entityName();
  }

  if (!!request.hasIsDefend()) {
    body["IsDefend"] = request.isDefend();
  }

  if (!!request.hasLabelType()) {
    body["LabelType"] = request.labelType();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlerts"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertsResponse>();
}

/**
 * @summary Queries alerts within your account.
 *
 * @param request DescribeAlertsRequest
 * @return DescribeAlertsResponse
 */
DescribeAlertsResponse Client::describeAlerts(const DescribeAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of alerts of different severities.
 *
 * @param request DescribeAlertsCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertsCountResponse
 */
DescribeAlertsCountResponse Client::describeAlertsCountWithOptions(const DescribeAlertsCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasQueryType()) {
    body["QueryType"] = request.queryType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertsCount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertsCountResponse>();
}

/**
 * @summary Queries the number of alerts of different severities.
 *
 * @param request DescribeAlertsCountRequest
 * @return DescribeAlertsCountResponse
 */
DescribeAlertsCountResponse Client::describeAlertsCount(const DescribeAlertsCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertsCountWithOptions(request, runtime);
}

/**
 * @summary Queries the alerts that are associated with an entity.
 *
 * @param request DescribeAlertsWithEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertsWithEntityResponse
 */
DescribeAlertsWithEntityResponse Client::describeAlertsWithEntityWithOptions(const DescribeAlertsWithEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityUuid()) {
    body["EntityUuid"] = request.entityUuid();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSophonTaskId()) {
    body["SophonTaskId"] = request.sophonTaskId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertsWithEntity"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertsWithEntityResponse>();
}

/**
 * @summary Queries the alerts that are associated with an entity.
 *
 * @param request DescribeAlertsWithEntityRequest
 * @return DescribeAlertsWithEntityResponse
 */
DescribeAlertsWithEntityResponse Client::describeAlertsWithEntity(const DescribeAlertsWithEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertsWithEntityWithOptions(request, runtime);
}

/**
 * @summary Queries the alerts that are associated with an event.
 *
 * @param request DescribeAlertsWithEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertsWithEventResponse
 */
DescribeAlertsWithEventResponse Client::describeAlertsWithEventWithOptions(const DescribeAlertsWithEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertName()) {
    body["AlertName"] = request.alertName();
  }

  if (!!request.hasAlertTitle()) {
    body["AlertTitle"] = request.alertTitle();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasAssetId()) {
    body["AssetId"] = request.assetId();
  }

  if (!!request.hasAssetName()) {
    body["AssetName"] = request.assetName();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityName()) {
    body["EntityName"] = request.entityName();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasIsDefend()) {
    body["IsDefend"] = request.isDefend();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAlertsWithEvent"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertsWithEventResponse>();
}

/**
 * @summary Queries the alerts that are associated with an event.
 *
 * @param request DescribeAlertsWithEventRequest
 * @return DescribeAlertsWithEventResponse
 */
DescribeAlertsWithEventResponse Client::describeAlertsWithEvent(const DescribeAlertsWithEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertsWithEventWithOptions(request, runtime);
}

/**
 * @summary Checks whether the security information and event management (SIEM) system is granted the required permissions to access other cloud resources within your Alibaba Cloud account and whether the AliyunServiceRoleForSasCloudSiem service-linked role is created.
 *
 * @param request DescribeAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthResponse
 */
DescribeAuthResponse Client::describeAuthWithOptions(const DescribeAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAuth"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthResponse>();
}

/**
 * @summary Checks whether the security information and event management (SIEM) system is granted the required permissions to access other cloud resources within your Alibaba Cloud account and whether the AliyunServiceRoleForSasCloudSiem service-linked role is created.
 *
 * @param request DescribeAuthRequest
 * @return DescribeAuthResponse
 */
DescribeAuthResponse Client::describeAuth(const DescribeAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthWithOptions(request, runtime);
}

/**
 * @summary Queries the number of automated response rules.
 *
 * @param request DescribeAutomateResponseConfigCounterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutomateResponseConfigCounterResponse
 */
DescribeAutomateResponseConfigCounterResponse Client::describeAutomateResponseConfigCounterWithOptions(const DescribeAutomateResponseConfigCounterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAutomateResponseConfigCounter"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutomateResponseConfigCounterResponse>();
}

/**
 * @summary Queries the number of automated response rules.
 *
 * @param request DescribeAutomateResponseConfigCounterRequest
 * @return DescribeAutomateResponseConfigCounterResponse
 */
DescribeAutomateResponseConfigCounterResponse Client::describeAutomateResponseConfigCounter(const DescribeAutomateResponseConfigCounterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutomateResponseConfigCounterWithOptions(request, runtime);
}

/**
 * @summary Queries the configurable fields and operators of an automated response rule.
 *
 * @param request DescribeAutomateResponseConfigFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutomateResponseConfigFeatureResponse
 */
DescribeAutomateResponseConfigFeatureResponse Client::describeAutomateResponseConfigFeatureWithOptions(const DescribeAutomateResponseConfigFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoResponseType()) {
    body["AutoResponseType"] = request.autoResponseType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAutomateResponseConfigFeature"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutomateResponseConfigFeatureResponse>();
}

/**
 * @summary Queries the configurable fields and operators of an automated response rule.
 *
 * @param request DescribeAutomateResponseConfigFeatureRequest
 * @return DescribeAutomateResponseConfigFeatureResponse
 */
DescribeAutomateResponseConfigFeatureResponse Client::describeAutomateResponseConfigFeature(const DescribeAutomateResponseConfigFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutomateResponseConfigFeatureWithOptions(request, runtime);
}

/**
 * @summary Queries user-defined playbooks.
 *
 * @param request DescribeAutomateResponseConfigPlayBooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutomateResponseConfigPlayBooksResponse
 */
DescribeAutomateResponseConfigPlayBooksResponse Client::describeAutomateResponseConfigPlayBooksWithOptions(const DescribeAutomateResponseConfigPlayBooksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoResponseType()) {
    body["AutoResponseType"] = request.autoResponseType();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.entityType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAutomateResponseConfigPlayBooks"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutomateResponseConfigPlayBooksResponse>();
}

/**
 * @summary Queries user-defined playbooks.
 *
 * @param request DescribeAutomateResponseConfigPlayBooksRequest
 * @return DescribeAutomateResponseConfigPlayBooksResponse
 */
DescribeAutomateResponseConfigPlayBooksResponse Client::describeAutomateResponseConfigPlayBooks(const DescribeAutomateResponseConfigPlayBooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutomateResponseConfigPlayBooksWithOptions(request, runtime);
}

/**
 * @summary Queries the assets that are associated with an event.
 *
 * @param request DescribeCloudSiemAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudSiemAssetsResponse
 */
DescribeCloudSiemAssetsResponse Client::describeCloudSiemAssetsWithOptions(const DescribeCloudSiemAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssetName()) {
    body["AssetName"] = request.assetName();
  }

  if (!!request.hasAssetType()) {
    body["AssetType"] = request.assetType();
  }

  if (!!request.hasAssetUuid()) {
    body["AssetUuid"] = request.assetUuid();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCloudSiemAssets"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudSiemAssetsResponse>();
}

/**
 * @summary Queries the assets that are associated with an event.
 *
 * @param request DescribeCloudSiemAssetsRequest
 * @return DescribeCloudSiemAssetsResponse
 */
DescribeCloudSiemAssetsResponse Client::describeCloudSiemAssets(const DescribeCloudSiemAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudSiemAssetsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of assets that are associated with an event by asset type.
 *
 * @param request DescribeCloudSiemAssetsCounterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudSiemAssetsCounterResponse
 */
DescribeCloudSiemAssetsCounterResponse Client::describeCloudSiemAssetsCounterWithOptions(const DescribeCloudSiemAssetsCounterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCloudSiemAssetsCounter"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudSiemAssetsCounterResponse>();
}

/**
 * @summary Queries the number of assets that are associated with an event by asset type.
 *
 * @param request DescribeCloudSiemAssetsCounterRequest
 * @return DescribeCloudSiemAssetsCounterResponse
 */
DescribeCloudSiemAssetsCounterResponse Client::describeCloudSiemAssetsCounter(const DescribeCloudSiemAssetsCounterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudSiemAssetsCounterWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an event.
 *
 * @param request DescribeCloudSiemEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudSiemEventDetailResponse
 */
DescribeCloudSiemEventDetailResponse Client::describeCloudSiemEventDetailWithOptions(const DescribeCloudSiemEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCloudSiemEventDetail"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudSiemEventDetailResponse>();
}

/**
 * @summary Queries the details of an event.
 *
 * @param request DescribeCloudSiemEventDetailRequest
 * @return DescribeCloudSiemEventDetailResponse
 */
DescribeCloudSiemEventDetailResponse Client::describeCloudSiemEventDetail(const DescribeCloudSiemEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudSiemEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries events in SIEM.
 *
 * @param request DescribeCloudSiemEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudSiemEventsResponse
 */
DescribeCloudSiemEventsResponse Client::describeCloudSiemEventsWithOptions(const DescribeCloudSiemEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssetId()) {
    body["AssetId"] = request.assetId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityUuid()) {
    body["EntityUuid"] = request.entityUuid();
  }

  if (!!request.hasEventName()) {
    body["EventName"] = request.eventName();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasThreadLevel()) {
    body["ThreadLevel"] = request.threadLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCloudSiemEvents"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudSiemEventsResponse>();
}

/**
 * @summary Queries events in SIEM.
 *
 * @param request DescribeCloudSiemEventsRequest
 * @return DescribeCloudSiemEventsResponse
 */
DescribeCloudSiemEventsResponse Client::describeCloudSiemEvents(const DescribeCloudSiemEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudSiemEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of custom rules.
 *
 * @param request DescribeCustomizeRuleCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomizeRuleCountResponse
 */
DescribeCustomizeRuleCountResponse Client::describeCustomizeRuleCountWithOptions(const DescribeCustomizeRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCustomizeRuleCount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomizeRuleCountResponse>();
}

/**
 * @summary Queries the number of custom rules.
 *
 * @param request DescribeCustomizeRuleCountRequest
 * @return DescribeCustomizeRuleCountResponse
 */
DescribeCustomizeRuleCountResponse Client::describeCustomizeRuleCount(const DescribeCustomizeRuleCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomizeRuleCountWithOptions(request, runtime);
}

/**
 * @summary Queries the historical simulation data that is used in a simulation test scenario.
 *
 * @param request DescribeCustomizeRuleTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomizeRuleTestResponse
 */
DescribeCustomizeRuleTestResponse Client::describeCustomizeRuleTestWithOptions(const DescribeCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCustomizeRuleTest"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomizeRuleTestResponse>();
}

/**
 * @summary Queries the historical simulation data that is used in a simulation test scenario.
 *
 * @param request DescribeCustomizeRuleTestRequest
 * @return DescribeCustomizeRuleTestResponse
 */
DescribeCustomizeRuleTestResponse Client::describeCustomizeRuleTest(const DescribeCustomizeRuleTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomizeRuleTestWithOptions(request, runtime);
}

/**
 * @summary Queries the chart that displays the test results of business data for a custom rule.
 *
 * @param request DescribeCustomizeRuleTestHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomizeRuleTestHistogramResponse
 */
DescribeCustomizeRuleTestHistogramResponse Client::describeCustomizeRuleTestHistogramWithOptions(const DescribeCustomizeRuleTestHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCustomizeRuleTestHistogram"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomizeRuleTestHistogramResponse>();
}

/**
 * @summary Queries the chart that displays the test results of business data for a custom rule.
 *
 * @param request DescribeCustomizeRuleTestHistogramRequest
 * @return DescribeCustomizeRuleTestHistogramResponse
 */
DescribeCustomizeRuleTestHistogramResponse Client::describeCustomizeRuleTestHistogram(const DescribeCustomizeRuleTestHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomizeRuleTestHistogramWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data source.
 *
 * @param request DescribeDataSourceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceInstanceResponse
 */
DescribeDataSourceInstanceResponse Client::describeDataSourceInstanceWithOptions(const DescribeDataSourceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceInstance"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceInstanceResponse>();
}

/**
 * @summary Queries the details of a data source.
 *
 * @param request DescribeDataSourceInstanceRequest
 * @return DescribeDataSourceInstanceResponse
 */
DescribeDataSourceInstanceResponse Client::describeDataSourceInstance(const DescribeDataSourceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters of a data source.
 *
 * @param request DescribeDataSourceParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceParametersResponse
 */
DescribeDataSourceParametersResponse Client::describeDataSourceParametersWithOptions(const DescribeDataSourceParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceParameters"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceParametersResponse>();
}

/**
 * @summary Queries the parameters of a data source.
 *
 * @param request DescribeDataSourceParametersRequest
 * @return DescribeDataSourceParametersResponse
 */
DescribeDataSourceParametersResponse Client::describeDataSourceParameters(const DescribeDataSourceParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of entities and playbooks that need to be handled.
 *
 * @param request DescribeDisposeAndPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisposeAndPlaybookResponse
 */
DescribeDisposeAndPlaybookResponse Client::describeDisposeAndPlaybookWithOptions(const DescribeDisposeAndPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.entityType();
  }

  if (!!request.hasEntityUuid()) {
    body["EntityUuid"] = request.entityUuid();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDisposeAndPlaybook"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDisposeAndPlaybookResponse>();
}

/**
 * @summary Queries the list of entities and playbooks that need to be handled.
 *
 * @param request DescribeDisposeAndPlaybookRequest
 * @return DescribeDisposeAndPlaybookResponse
 */
DescribeDisposeAndPlaybookResponse Client::describeDisposeAndPlaybook(const DescribeDisposeAndPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisposeAndPlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries the list of playbooks that are used by a handling policy.
 *
 * @param request DescribeDisposeStrategyPlaybookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisposeStrategyPlaybookResponse
 */
DescribeDisposeStrategyPlaybookResponse Client::describeDisposeStrategyPlaybookWithOptions(const DescribeDisposeStrategyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDisposeStrategyPlaybook"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDisposeStrategyPlaybookResponse>();
}

/**
 * @summary Queries the list of playbooks that are used by a handling policy.
 *
 * @param request DescribeDisposeStrategyPlaybookRequest
 * @return DescribeDisposeStrategyPlaybookResponse
 */
DescribeDisposeStrategyPlaybookResponse Client::describeDisposeStrategyPlaybook(const DescribeDisposeStrategyPlaybookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisposeStrategyPlaybookWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an entity.
 *
 * @param request DescribeEntityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEntityInfoResponse
 */
DescribeEntityInfoResponse Client::describeEntityInfoWithOptions(const DescribeEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityIdentity()) {
    body["EntityIdentity"] = request.entityIdentity();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSophonTaskId()) {
    body["SophonTaskId"] = request.sophonTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeEntityInfo"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEntityInfoResponse>();
}

/**
 * @summary Queries the details of an entity.
 *
 * @param request DescribeEntityInfoRequest
 * @return DescribeEntityInfoResponse
 */
DescribeEntityInfoResponse Client::describeEntityInfo(const DescribeEntityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEntityInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the number of events by type.
 *
 * @param request DescribeEventCountByThreatLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventCountByThreatLevelResponse
 */
DescribeEventCountByThreatLevelResponse Client::describeEventCountByThreatLevelWithOptions(const DescribeEventCountByThreatLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeEventCountByThreatLevel"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventCountByThreatLevelResponse>();
}

/**
 * @summary Queries the number of events by type.
 *
 * @param request DescribeEventCountByThreatLevelRequest
 * @return DescribeEventCountByThreatLevelResponse
 */
DescribeEventCountByThreatLevelResponse Client::describeEventCountByThreatLevel(const DescribeEventCountByThreatLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventCountByThreatLevelWithOptions(request, runtime);
}

/**
 * @summary Queries the handling policies of a historical event.
 *
 * @param request DescribeEventDisposeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventDisposeResponse
 */
DescribeEventDisposeResponse Client::describeEventDisposeWithOptions(const DescribeEventDisposeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeEventDispose"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventDisposeResponse>();
}

/**
 * @summary Queries the handling policies of a historical event.
 *
 * @param request DescribeEventDisposeRequest
 * @return DescribeEventDisposeResponse
 */
DescribeEventDisposeResponse Client::describeEventDispose(const DescribeEventDisposeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventDisposeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of logs that are added to the threat analysis feature.
 *
 * @param request DescribeImportedLogCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImportedLogCountResponse
 */
DescribeImportedLogCountResponse Client::describeImportedLogCountWithOptions(const DescribeImportedLogCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeImportedLogCount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImportedLogCountResponse>();
}

/**
 * @summary Queries the number of logs that are added to the threat analysis feature.
 *
 * @param request DescribeImportedLogCountRequest
 * @return DescribeImportedLogCountResponse
 */
DescribeImportedLogCountResponse Client::describeImportedLogCount(const DescribeImportedLogCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImportedLogCountWithOptions(request, runtime);
}

/**
 * @summary Queries the fields that can be configured for a custom rule.
 *
 * @param request DescribeLogFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogFieldsResponse
 */
DescribeLogFieldsResponse Client::describeLogFieldsWithOptions(const DescribeLogFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLogSource()) {
    body["LogSource"] = request.logSource();
  }

  if (!!request.hasLogType()) {
    body["LogType"] = request.logType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeLogFields"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogFieldsResponse>();
}

/**
 * @summary Queries the fields that can be configured for a custom rule.
 *
 * @param request DescribeLogFieldsRequest
 * @return DescribeLogFieldsResponse
 */
DescribeLogFieldsResponse Client::describeLogFields(const DescribeLogFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogFieldsWithOptions(request, runtime);
}

/**
 * @summary Queries the log sources that can be configured for a custom rule.
 *
 * @param request DescribeLogSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogSourceResponse
 */
DescribeLogSourceResponse Client::describeLogSourceWithOptions(const DescribeLogSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLogType()) {
    body["LogType"] = request.logType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeLogSource"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogSourceResponse>();
}

/**
 * @summary Queries the log sources that can be configured for a custom rule.
 *
 * @param request DescribeLogSourceRequest
 * @return DescribeLogSourceResponse
 */
DescribeLogSourceResponse Client::describeLogSource(const DescribeLogSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the log types that can be configured for a custom rule.
 *
 * @param request DescribeLogTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogTypeResponse
 */
DescribeLogTypeResponse Client::describeLogTypeWithOptions(const DescribeLogTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeLogType"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogTypeResponse>();
}

/**
 * @summary Queries the log types that can be configured for a custom rule.
 *
 * @param request DescribeLogTypeRequest
 * @return DescribeLogTypeResponse
 */
DescribeLogTypeResponse Client::describeLogType(const DescribeLogTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the operator of a custom rule.
 *
 * @param request DescribeOperatorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorsResponse
 */
DescribeOperatorsResponse Client::describeOperatorsWithOptions(const DescribeOperatorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSceneType()) {
    body["SceneType"] = request.sceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeOperators"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorsResponse>();
}

/**
 * @summary Queries the operator of a custom rule.
 *
 * @param request DescribeOperatorsRequest
 * @return DescribeOperatorsResponse
 */
DescribeOperatorsResponse Client::describeOperators(const DescribeOperatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of services that can be added to the threat analysis feature in Alibaba Cloud, Tenant Cloud, and Huawei Cloud.
 *
 * @param request DescribeProdCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProdCountResponse
 */
DescribeProdCountResponse Client::describeProdCountWithOptions(const DescribeProdCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeProdCount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProdCountResponse>();
}

/**
 * @summary Queries the number of services that can be added to the threat analysis feature in Alibaba Cloud, Tenant Cloud, and Huawei Cloud.
 *
 * @param request DescribeProdCountRequest
 * @return DescribeProdCountResponse
 */
DescribeProdCountResponse Client::describeProdCount(const DescribeProdCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProdCountWithOptions(request, runtime);
}

/**
 * @summary Queries the list of users in the playbook scope.
 *
 * @param request DescribeScopeUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScopeUsersResponse
 */
DescribeScopeUsersResponse Client::describeScopeUsersWithOptions(const DescribeScopeUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeScopeUsers"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScopeUsersResponse>();
}

/**
 * @summary Queries the list of users in the playbook scope.
 *
 * @param request DescribeScopeUsersRequest
 * @return DescribeScopeUsersResponse
 */
DescribeScopeUsersResponse Client::describeScopeUsers(const DescribeScopeUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScopeUsersWithOptions(request, runtime);
}

/**
 * @summary Checks whether the threat analysis feature is authorized to access a resource directory.
 *
 * @param request DescribeServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceStatusResponse
 */
DescribeServiceStatusResponse Client::describeServiceStatusWithOptions(const DescribeServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeServiceStatus"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceStatusResponse>();
}

/**
 * @summary Checks whether the threat analysis feature is authorized to access a resource directory.
 *
 * @param request DescribeServiceStatusRequest
 * @return DescribeServiceStatusResponse
 */
DescribeServiceStatusResponse Client::describeServiceStatus(const DescribeServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Logstores for the threat analysis feature in Simple Log Service on the user side.
 *
 * @param request DescribeStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStorageResponse
 */
DescribeStorageResponse Client::describeStorageWithOptions(const DescribeStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeStorage"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStorageResponse>();
}

/**
 * @summary Queries the status of the Logstores for the threat analysis feature in Simple Log Service on the user side.
 *
 * @param request DescribeStorageRequest
 * @return DescribeStorageResponse
 */
DescribeStorageResponse Client::describeStorage(const DescribeStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStorageWithOptions(request, runtime);
}

/**
 * @summary Checks whether the current Alibaba Cloud account or the management account of a resource directory is used to purchase the threat analysis feature.
 *
 * @param request DescribeUserBuyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserBuyStatusResponse
 */
DescribeUserBuyStatusResponse Client::describeUserBuyStatusWithOptions(const DescribeUserBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUserBuyStatus"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserBuyStatusResponse>();
}

/**
 * @summary Checks whether the current Alibaba Cloud account or the management account of a resource directory is used to purchase the threat analysis feature.
 *
 * @param request DescribeUserBuyStatusRequest
 * @return DescribeUserBuyStatusResponse
 */
DescribeUserBuyStatusResponse Client::describeUserBuyStatus(const DescribeUserBuyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserBuyStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the protected domain names of the WAF instance for a user to which an entity belongs.
 *
 * @param request DescribeWafScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWafScopeResponse
 */
DescribeWafScopeResponse Client::describeWafScopeWithOptions(const DescribeWafScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeWafScope"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWafScopeResponse>();
}

/**
 * @summary Queries the protected domain names of the WAF instance for a user to which an entity belongs.
 *
 * @param request DescribeWafScopeRequest
 * @return DescribeWafScopeResponse
 */
DescribeWafScopeResponse Client::describeWafScope(const DescribeWafScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWafScopeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of whitelist rules for alerts.
 *
 * @param request DescribeWhiteRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhiteRuleListResponse
 */
DescribeWhiteRuleListResponse Client::describeWhiteRuleListWithOptions(const DescribeWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertName()) {
    body["AlertName"] = request.alertName();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeWhiteRuleList"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWhiteRuleListResponse>();
}

/**
 * @summary Queries a list of whitelist rules for alerts.
 *
 * @param request DescribeWhiteRuleListRequest
 * @return DescribeWhiteRuleListResponse
 */
DescribeWhiteRuleListResponse Client::describeWhiteRuleList(const DescribeWhiteRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhiteRuleListWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role named AliyunServiceRoleForSasCloudSiem for the threat analysis feature. The feature can assume this role to access cloud services.
 *
 * @param request EnableAccessForCloudSiemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAccessForCloudSiemResponse
 */
EnableAccessForCloudSiemResponse Client::enableAccessForCloudSiemWithOptions(const EnableAccessForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoSubmit()) {
    body["AutoSubmit"] = request.autoSubmit();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableAccessForCloudSiem"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAccessForCloudSiemResponse>();
}

/**
 * @summary Creates a service-linked role named AliyunServiceRoleForSasCloudSiem for the threat analysis feature. The feature can assume this role to access cloud services.
 *
 * @param request EnableAccessForCloudSiemRequest
 * @return EnableAccessForCloudSiemResponse
 */
EnableAccessForCloudSiemResponse Client::enableAccessForCloudSiem(const EnableAccessForCloudSiemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAccessForCloudSiemWithOptions(request, runtime);
}

/**
 * @summary Authorizes the threat analysis feature to access a resource directory. This operation must be called by the management account of the resource directory.
 *
 * @param request EnableServiceForCloudSiemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableServiceForCloudSiemResponse
 */
EnableServiceForCloudSiemResponse Client::enableServiceForCloudSiemWithOptions(const EnableServiceForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableServiceForCloudSiem"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableServiceForCloudSiemResponse>();
}

/**
 * @summary Authorizes the threat analysis feature to access a resource directory. This operation must be called by the management account of the resource directory.
 *
 * @param request EnableServiceForCloudSiemRequest
 * @return EnableServiceForCloudSiemResponse
 */
EnableServiceForCloudSiemResponse Client::enableServiceForCloudSiem(const EnableServiceForCloudSiemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableServiceForCloudSiemWithOptions(request, runtime);
}

/**
 * @summary Queries the storage capacity usage of the threat analysis feature and the purchased storage capacity
 *
 * @param request GetCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCapacityResponse
 */
GetCapacityResponse Client::getCapacityWithOptions(const GetCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCapacity"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCapacityResponse>();
}

/**
 * @summary Queries the storage capacity usage of the threat analysis feature and the purchased storage capacity
 *
 * @param request GetCapacityRequest
 * @return GetCapacityResponse
 */
GetCapacityResponse Client::getCapacity(const GetCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCapacityWithOptions(request, runtime);
}

/**
 * @summary Queries the storage configurations for the threat analysis feature on the user side.
 *
 * @param request GetStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageResponse
 */
GetStorageResponse Client::getStorageWithOptions(const GetStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetStorage"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageResponse>();
}

/**
 * @summary Queries the storage configurations for the threat analysis feature on the user side.
 *
 * @param request GetStorageRequest
 * @return GetStorageResponse
 */
GetStorageResponse Client::getStorage(const GetStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStorageWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AccessKey IDs of third-party cloud accounts that are added to the threat analysis feature.
 *
 * @param request ListAccountAccessIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountAccessIdResponse
 */
ListAccountAccessIdResponse Client::listAccountAccessIdWithOptions(const ListAccountAccessIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAccountAccessId"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountAccessIdResponse>();
}

/**
 * @summary Queries a list of AccessKey IDs of third-party cloud accounts that are added to the threat analysis feature.
 *
 * @param request ListAccountAccessIdRequest
 * @return ListAccountAccessIdResponse
 */
ListAccountAccessIdResponse Client::listAccountAccessId(const ListAccountAccessIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountAccessIdWithOptions(request, runtime);
}

/**
 * @summary Query accounts by log.
 *
 * @param request ListAccountsByLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsByLogResponse
 */
ListAccountsByLogResponse Client::listAccountsByLogWithOptions(const ListAccountsByLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasLogCodes()) {
    body["LogCodes"] = request.logCodes();
  }

  if (!!request.hasProdCode()) {
    body["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAccountsByLog"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountsByLogResponse>();
}

/**
 * @summary Query accounts by log.
 *
 * @param request ListAccountsByLogRequest
 * @return ListAccountsByLogResponse
 */
ListAccountsByLogResponse Client::listAccountsByLog(const ListAccountsByLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsByLogWithOptions(request, runtime);
}

/**
 * @summary Queries a list of cloud services that can be added to the threat analysis feature.
 *
 * @param request ListAllProdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllProdsResponse
 */
ListAllProdsResponse Client::listAllProdsWithOptions(const ListAllProdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAllProds"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllProdsResponse>();
}

/**
 * @summary Queries a list of cloud services that can be added to the threat analysis feature.
 *
 * @param request ListAllProdsRequest
 * @return ListAllProdsResponse
 */
ListAllProdsResponse Client::listAllProds(const ListAllProdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllProdsWithOptions(request, runtime);
}

/**
 * @summary Queries automated response rules.
 *
 * @param request ListAutomateResponseConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutomateResponseConfigsResponse
 */
ListAutomateResponseConfigsResponse Client::listAutomateResponseConfigsWithOptions(const ListAutomateResponseConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActionType()) {
    body["ActionType"] = request.actionType();
  }

  if (!!request.hasAutoResponseType()) {
    body["AutoResponseType"] = request.autoResponseType();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResponseRuleType()) {
    body["ResponseRuleType"] = request.responseRuleType();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAutomateResponseConfigs"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutomateResponseConfigsResponse>();
}

/**
 * @summary Queries automated response rules.
 *
 * @param request ListAutomateResponseConfigsRequest
 * @return ListAutomateResponseConfigsResponse
 */
ListAutomateResponseConfigsResponse Client::listAutomateResponseConfigs(const ListAutomateResponseConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutomateResponseConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of cloud accounts that are added to the threat analysis feature.
 *
 * @param request ListBindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindAccountResponse
 */
ListBindAccountResponse Client::listBindAccountWithOptions(const ListBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBindAccount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindAccountResponse>();
}

/**
 * @summary Queries a list of cloud accounts that are added to the threat analysis feature.
 *
 * @param request ListBindAccountRequest
 * @return ListBindAccountResponse
 */
ListBindAccountResponse Client::listBindAccount(const ListBindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindAccountWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data sources that are added to the threat analysis feature.
 *
 * @param request ListBindDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindDataSourcesResponse
 */
ListBindDataSourcesResponse Client::listBindDataSourcesWithOptions(const ListBindDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBindDataSources"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindDataSourcesResponse>();
}

/**
 * @summary Queries a list of data sources that are added to the threat analysis feature.
 *
 * @param request ListBindDataSourcesRequest
 * @return ListBindDataSourcesResponse
 */
ListBindDataSourcesResponse Client::listBindDataSources(const ListBindDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries custom rules.
 *
 * @param request ListCloudSiemCustomizeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudSiemCustomizeRulesResponse
 */
ListCloudSiemCustomizeRulesResponse Client::listCloudSiemCustomizeRulesWithOptions(const ListCloudSiemCustomizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasThreatLevel()) {
    body["ThreatLevel"] = request.threatLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloudSiemCustomizeRules"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudSiemCustomizeRulesResponse>();
}

/**
 * @summary Queries custom rules.
 *
 * @param request ListCloudSiemCustomizeRulesRequest
 * @return ListCloudSiemCustomizeRulesResponse
 */
ListCloudSiemCustomizeRulesResponse Client::listCloudSiemCustomizeRules(const ListCloudSiemCustomizeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudSiemCustomizeRulesWithOptions(request, runtime);
}

/**
 * @summary Queries predefined rules.
 *
 * @param request ListCloudSiemPredefinedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudSiemPredefinedRulesResponse
 */
ListCloudSiemPredefinedRulesResponse Client::listCloudSiemPredefinedRulesWithOptions(const ListCloudSiemPredefinedRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasAttCk()) {
    body["AttCk"] = request.attCk();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEventTransferType()) {
    body["EventTransferType"] = request.eventTransferType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasLogSource()) {
    body["LogSource"] = request.logSource();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasThreatLevel()) {
    body["ThreatLevel"] = request.threatLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloudSiemPredefinedRules"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudSiemPredefinedRulesResponse>();
}

/**
 * @summary Queries predefined rules.
 *
 * @param request ListCloudSiemPredefinedRulesRequest
 * @return ListCloudSiemPredefinedRulesResponse
 */
ListCloudSiemPredefinedRulesResponse Client::listCloudSiemPredefinedRules(const ListCloudSiemPredefinedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudSiemPredefinedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the test results of a custom rule.
 *
 * @param request ListCustomizeRuleTestResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomizeRuleTestResultResponse
 */
ListCustomizeRuleTestResultResponse Client::listCustomizeRuleTestResultWithOptions(const ListCustomizeRuleTestResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDetectionRuleId()) {
    body["DetectionRuleId"] = request.detectionRuleId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasVerifyType()) {
    body["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCustomizeRuleTestResult"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomizeRuleTestResultResponse>();
}

/**
 * @summary Queries the test results of a custom rule.
 *
 * @param request ListCustomizeRuleTestResultRequest
 * @return ListCustomizeRuleTestResultResponse
 */
ListCustomizeRuleTestResultResponse Client::listCustomizeRuleTestResult(const ListCustomizeRuleTestResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomizeRuleTestResultWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a data source.
 *
 * @param request ListDataSourceLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceLogsResponse
 */
ListDataSourceLogsResponse Client::listDataSourceLogsWithOptions(const ListDataSourceLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSourceLogs"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceLogsResponse>();
}

/**
 * @summary Queries the logs of a data source.
 *
 * @param request ListDataSourceLogsRequest
 * @return ListDataSourceLogsResponse
 */
ListDataSourceLogsResponse Client::listDataSourceLogs(const ListDataSourceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceLogsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data source types in third-party cloud services that can be added to the threat analysis feature.
 *
 * @param request ListDataSourceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceTypesResponse
 */
ListDataSourceTypesResponse Client::listDataSourceTypesWithOptions(const ListDataSourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSourceTypes"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceTypesResponse>();
}

/**
 * @summary Queries a list of data source types in third-party cloud services that can be added to the threat analysis feature.
 *
 * @param request ListDataSourceTypesRequest
 * @return ListDataSourceTypesResponse
 */
ListDataSourceTypesResponse Client::listDataSourceTypes(const ListDataSourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the cloud services that are integrated with the threat analysis feature, the logs of the cloud services, and the delivery of the logs.
 *
 * @param request ListDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeliveryResponse
 */
ListDeliveryResponse Client::listDeliveryWithOptions(const ListDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDelivery"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeliveryResponse>();
}

/**
 * @summary Queries the information about the cloud services that are integrated with the threat analysis feature, the logs of the cloud services, and the delivery of the logs.
 *
 * @param request ListDeliveryRequest
 * @return ListDeliveryResponse
 */
ListDeliveryResponse Client::listDelivery(const ListDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeliveryWithOptions(request, runtime);
}

/**
 * @summary Queries handling policies.
 *
 * @param request ListDisposeStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDisposeStrategyResponse
 */
ListDisposeStrategyResponse Client::listDisposeStrategyWithOptions(const ListDisposeStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEffectiveStatus()) {
    body["EffectiveStatus"] = request.effectiveStatus();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityIdentity()) {
    body["EntityIdentity"] = request.entityIdentity();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.entityType();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlaybookName()) {
    body["PlaybookName"] = request.playbookName();
  }

  if (!!request.hasPlaybookTypes()) {
    body["PlaybookTypes"] = request.playbookTypes();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.playbookUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSophonTaskId()) {
    body["SophonTaskId"] = request.sophonTaskId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDisposeStrategy"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDisposeStrategyResponse>();
}

/**
 * @summary Queries handling policies.
 *
 * @param request ListDisposeStrategyRequest
 * @return ListDisposeStrategyResponse
 */
ListDisposeStrategyResponse Client::listDisposeStrategy(const ListDisposeStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDisposeStrategyWithOptions(request, runtime);
}

/**
 * @summary 查询实体列表
 *
 * @param request ListEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEntitiesResponse
 */
ListEntitiesResponse Client::listEntitiesWithOptions(const ListEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEntityName()) {
    body["EntityName"] = request.entityName();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.entityType();
  }

  if (!!request.hasEntityUuid()) {
    body["EntityUuid"] = request.entityUuid();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasIsMalwareEntity()) {
    body["IsMalwareEntity"] = request.isMalwareEntity();
  }

  if (!!request.hasMalwareType()) {
    body["MalwareType"] = request.malwareType();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEntities"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEntitiesResponse>();
}

/**
 * @summary 查询实体列表
 *
 * @param request ListEntitiesRequest
 * @return ListEntitiesResponse
 */
ListEntitiesResponse Client::listEntities(const ListEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the logs in a cloud service that is added to the threat analysis feature.
 *
 * @param request ListImportedLogsByProdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImportedLogsByProdResponse
 */
ListImportedLogsByProdResponse Client::listImportedLogsByProdWithOptions(const ListImportedLogsByProdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasProdCode()) {
    body["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListImportedLogsByProd"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImportedLogsByProdResponse>();
}

/**
 * @summary Queries the details of the logs in a cloud service that is added to the threat analysis feature.
 *
 * @param request ListImportedLogsByProdRequest
 * @return ListImportedLogsByProdResponse
 */
ListImportedLogsByProdResponse Client::listImportedLogsByProd(const ListImportedLogsByProdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImportedLogsByProdWithOptions(request, runtime);
}

/**
 * @summary Queries the dedicated Simple Log Service project and Logstore for a cloud service based on the patterns of the project and Logstore names.
 *
 * @param request ListProjectLogStoresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectLogStoresResponse
 */
ListProjectLogStoresResponse Client::listProjectLogStoresWithOptions(const ListProjectLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceLogCode()) {
    body["SourceLogCode"] = request.sourceLogCode();
  }

  if (!!request.hasSourceProdCode()) {
    body["SourceProdCode"] = request.sourceProdCode();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProjectLogStores"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectLogStoresResponse>();
}

/**
 * @summary Queries the dedicated Simple Log Service project and Logstore for a cloud service based on the patterns of the project and Logstore names.
 *
 * @param request ListProjectLogStoresRequest
 * @return ListProjectLogStoresResponse
 */
ListProjectLogStoresResponse Client::listProjectLogStores(const ListProjectLogStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectLogStoresWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Alibaba Cloud accounts that are added to the threat analysis feature for centralized management. These accounts can be used to perform operations supported by the threat analysis feature, such as adding logs and handling events.
 *
 * @param request ListRdUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRdUsersResponse
 */
ListRdUsersResponse Client::listRdUsersWithOptions(const ListRdUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListRdUsers"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRdUsersResponse>();
}

/**
 * @summary Queries a list of Alibaba Cloud accounts that are added to the threat analysis feature for centralized management. These accounts can be used to perform operations supported by the threat analysis feature, such as adding logs and handling events.
 *
 * @param request ListRdUsersRequest
 * @return ListRdUsersResponse
 */
ListRdUsersResponse Client::listRdUsers(const ListRdUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRdUsersWithOptions(request, runtime);
}

/**
 * @summary Modifies a third-party cloud account that is added to the threat analysis feature.
 *
 * @param request ModifyBindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBindAccountResponse
 */
ModifyBindAccountResponse Client::modifyBindAccountWithOptions(const ModifyBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessId()) {
    body["AccessId"] = request.accessId();
  }

  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasBindId()) {
    body["BindId"] = request.bindId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyBindAccount"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBindAccountResponse>();
}

/**
 * @summary Modifies a third-party cloud account that is added to the threat analysis feature.
 *
 * @param request ModifyBindAccountRequest
 * @return ModifyBindAccountResponse
 */
ModifyBindAccountResponse Client::modifyBindAccount(const ModifyBindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBindAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies a data source that is added to the threat analysis feature.
 *
 * @param request ModifyDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataSourceResponse
 */
ModifyDataSourceResponse Client::modifyDataSourceWithOptions(const ModifyDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasDataSourceInstanceName()) {
    body["DataSourceInstanceName"] = request.dataSourceInstanceName();
  }

  if (!!request.hasDataSourceInstanceParams()) {
    body["DataSourceInstanceParams"] = request.dataSourceInstanceParams();
  }

  if (!!request.hasDataSourceInstanceRemark()) {
    body["DataSourceInstanceRemark"] = request.dataSourceInstanceRemark();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDataSource"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataSourceResponse>();
}

/**
 * @summary Modifies a data source that is added to the threat analysis feature.
 *
 * @param request ModifyDataSourceRequest
 * @return ModifyDataSourceResponse
 */
ModifyDataSourceResponse Client::modifyDataSource(const ModifyDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of the logs that are added to the threat analysis feature for a data source within a cloud account.
 *
 * @param request ModifyDataSourceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataSourceLogResponse
 */
ModifyDataSourceLogResponse Client::modifyDataSourceLogWithOptions(const ModifyDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasDataSourceInstanceId()) {
    body["DataSourceInstanceId"] = request.dataSourceInstanceId();
  }

  if (!!request.hasDataSourceInstanceLogs()) {
    body["DataSourceInstanceLogs"] = request.dataSourceInstanceLogs();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasLogCode()) {
    body["LogCode"] = request.logCode();
  }

  if (!!request.hasLogInstanceId()) {
    body["LogInstanceId"] = request.logInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDataSourceLog"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataSourceLogResponse>();
}

/**
 * @summary Modifies the description of the logs that are added to the threat analysis feature for a data source within a cloud account.
 *
 * @param request ModifyDataSourceLogRequest
 * @return ModifyDataSourceLogResponse
 */
ModifyDataSourceLogResponse Client::modifyDataSourceLog(const ModifyDataSourceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataSourceLogWithOptions(request, runtime);
}

/**
 * @summary Enables the log delivery feature for a cloud service that is integrated with Simple Log Service.
 *
 * @param request OpenDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDeliveryResponse
 */
OpenDeliveryResponse Client::openDeliveryWithOptions(const OpenDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLogCode()) {
    body["LogCode"] = request.logCode();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OpenDelivery"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenDeliveryResponse>();
}

/**
 * @summary Enables the log delivery feature for a cloud service that is integrated with Simple Log Service.
 *
 * @param request OpenDeliveryRequest
 * @return OpenDeliveryResponse
 */
OpenDeliveryResponse Client::openDelivery(const OpenDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openDeliveryWithOptions(request, runtime);
}

/**
 * @summary Creates or updates an automatic response rule.
 *
 * @param request PostAutomateResponseConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostAutomateResponseConfigResponse
 */
PostAutomateResponseConfigResponse Client::postAutomateResponseConfigWithOptions(const PostAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActionConfig()) {
    body["ActionConfig"] = request.actionConfig();
  }

  if (!!request.hasActionType()) {
    body["ActionType"] = request.actionType();
  }

  if (!!request.hasAutoResponseType()) {
    body["AutoResponseType"] = request.autoResponseType();
  }

  if (!!request.hasExecutionCondition()) {
    body["ExecutionCondition"] = request.executionCondition();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasSubUserId()) {
    body["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostAutomateResponseConfig"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostAutomateResponseConfigResponse>();
}

/**
 * @summary Creates or updates an automatic response rule.
 *
 * @param request PostAutomateResponseConfigRequest
 * @return PostAutomateResponseConfigResponse
 */
PostAutomateResponseConfigResponse Client::postAutomateResponseConfig(const PostAutomateResponseConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postAutomateResponseConfigWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a custom rule.
 *
 * @param request PostCustomizeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostCustomizeRuleResponse
 */
PostCustomizeRuleResponse Client::postCustomizeRuleWithOptions(const PostCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasAlertTypeMds()) {
    body["AlertTypeMds"] = request.alertTypeMds();
  }

  if (!!request.hasAttCk()) {
    body["AttCk"] = request.attCk();
  }

  if (!!request.hasEventTransferExt()) {
    body["EventTransferExt"] = request.eventTransferExt();
  }

  if (!!request.hasEventTransferSwitch()) {
    body["EventTransferSwitch"] = request.eventTransferSwitch();
  }

  if (!!request.hasEventTransferType()) {
    body["EventTransferType"] = request.eventTransferType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasLogSource()) {
    body["LogSource"] = request.logSource();
  }

  if (!!request.hasLogSourceMds()) {
    body["LogSourceMds"] = request.logSourceMds();
  }

  if (!!request.hasLogType()) {
    body["LogType"] = request.logType();
  }

  if (!!request.hasLogTypeMds()) {
    body["LogTypeMds"] = request.logTypeMds();
  }

  if (!!request.hasQueryCycle()) {
    body["QueryCycle"] = request.queryCycle();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleCondition()) {
    body["RuleCondition"] = request.ruleCondition();
  }

  if (!!request.hasRuleDesc()) {
    body["RuleDesc"] = request.ruleDesc();
  }

  if (!!request.hasRuleGroup()) {
    body["RuleGroup"] = request.ruleGroup();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleThreshold()) {
    body["RuleThreshold"] = request.ruleThreshold();
  }

  if (!!request.hasThreatLevel()) {
    body["ThreatLevel"] = request.threatLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostCustomizeRule"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostCustomizeRuleResponse>();
}

/**
 * @summary Creates or updates a custom rule.
 *
 * @param request PostCustomizeRuleRequest
 * @return PostCustomizeRuleResponse
 */
PostCustomizeRuleResponse Client::postCustomizeRule(const PostCustomizeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postCustomizeRuleWithOptions(request, runtime);
}

/**
 * @summary Submits a custom rule for testing.
 *
 * @param request PostCustomizeRuleTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostCustomizeRuleTestResponse
 */
PostCustomizeRuleTestResponse Client::postCustomizeRuleTestWithOptions(const PostCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasSimulatedData()) {
    body["SimulatedData"] = request.simulatedData();
  }

  if (!!request.hasTestType()) {
    body["TestType"] = request.testType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostCustomizeRuleTest"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostCustomizeRuleTestResponse>();
}

/**
 * @summary Submits a custom rule for testing.
 *
 * @param request PostCustomizeRuleTestRequest
 * @return PostCustomizeRuleTestResponse
 */
PostCustomizeRuleTestResponse Client::postCustomizeRuleTest(const PostCustomizeRuleTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postCustomizeRuleTestWithOptions(request, runtime);
}

/**
 * @summary Submits event handling information.
 *
 * @param request PostEventDisposeAndWhiteruleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostEventDisposeAndWhiteruleListResponse
 */
PostEventDisposeAndWhiteruleListResponse Client::postEventDisposeAndWhiteruleListWithOptions(const PostEventDisposeAndWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventDispose()) {
    body["EventDispose"] = request.eventDispose();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasReceiverInfo()) {
    body["ReceiverInfo"] = request.receiverInfo();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasThreatLevel()) {
    body["ThreatLevel"] = request.threatLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostEventDisposeAndWhiteruleList"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostEventDisposeAndWhiteruleListResponse>();
}

/**
 * @summary Submits event handling information.
 *
 * @param request PostEventDisposeAndWhiteruleListRequest
 * @return PostEventDisposeAndWhiteruleListResponse
 */
PostEventDisposeAndWhiteruleListResponse Client::postEventDisposeAndWhiteruleList(const PostEventDisposeAndWhiteruleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postEventDisposeAndWhiteruleListWithOptions(request, runtime);
}

/**
 * @summary Submits an alert whitelist rule.
 *
 * @param request PostEventWhiteruleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostEventWhiteruleListResponse
 */
PostEventWhiteruleListResponse Client::postEventWhiteruleListWithOptions(const PostEventWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasWhiteruleList()) {
    body["WhiteruleList"] = request.whiteruleList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostEventWhiteruleList"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostEventWhiteruleListResponse>();
}

/**
 * @summary Submits an alert whitelist rule.
 *
 * @param request PostEventWhiteruleListRequest
 * @return PostEventWhiteruleListResponse
 */
PostEventWhiteruleListResponse Client::postEventWhiteruleList(const PostEventWhiteruleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postEventWhiteruleListWithOptions(request, runtime);
}

/**
 * @summary Ends the test of a custom rule.
 *
 * @param request PostFinishCustomizeRuleTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostFinishCustomizeRuleTestResponse
 */
PostFinishCustomizeRuleTestResponse Client::postFinishCustomizeRuleTestWithOptions(const PostFinishCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostFinishCustomizeRuleTest"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostFinishCustomizeRuleTestResponse>();
}

/**
 * @summary Ends the test of a custom rule.
 *
 * @param request PostFinishCustomizeRuleTestRequest
 * @return PostFinishCustomizeRuleTestResponse
 */
PostFinishCustomizeRuleTestResponse Client::postFinishCustomizeRuleTest(const PostFinishCustomizeRuleTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postFinishCustomizeRuleTestWithOptions(request, runtime);
}

/**
 * @summary Updates the status of a custom rule.
 *
 * @param request PostRuleStatusChangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostRuleStatusChangeResponse
 */
PostRuleStatusChangeResponse Client::postRuleStatusChangeWithOptions(const PostRuleStatusChangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIds()) {
    body["Ids"] = request.ids();
  }

  if (!!request.hasInUse()) {
    body["InUse"] = request.inUse();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PostRuleStatusChange"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostRuleStatusChangeResponse>();
}

/**
 * @summary Updates the status of a custom rule.
 *
 * @param request PostRuleStatusChangeRequest
 * @return PostRuleStatusChangeResponse
 */
PostRuleStatusChangeResponse Client::postRuleStatusChange(const PostRuleStatusChangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return postRuleStatusChangeWithOptions(request, runtime);
}

/**
 * @summary Releases storage to reduce the storage usage. The release operation is irreversible and may cause data loss. Proceed with caution.
 *
 * @param request RestoreCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreCapacityResponse
 */
RestoreCapacityResponse Client::restoreCapacityWithOptions(const RestoreCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestoreCapacity"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreCapacityResponse>();
}

/**
 * @summary Releases storage to reduce the storage usage. The release operation is irreversible and may cause data loss. Proceed with caution.
 *
 * @param request RestoreCapacityRequest
 * @return RestoreCapacityResponse
 */
RestoreCapacityResponse Client::restoreCapacity(const RestoreCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreCapacityWithOptions(request, runtime);
}

/**
 * @summary Configures the settings of log storage, such as the storage duration and storage region.
 *
 * @param request SetStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetStorageResponse
 */
SetStorageResponse Client::setStorageWithOptions(const SetStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasTtl()) {
    body["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetStorage"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetStorageResponse>();
}

/**
 * @summary Configures the settings of log storage, such as the storage duration and storage region.
 *
 * @param request SetStorageRequest
 * @return SetStorageResponse
 */
SetStorageResponse Client::setStorage(const SetStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setStorageWithOptions(request, runtime);
}

/**
 * @summary Submits log collection tasks at a time.
 *
 * @param request SubmitImportLogTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImportLogTasksResponse
 */
SubmitImportLogTasksResponse Client::submitImportLogTasksWithOptions(const SubmitImportLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccounts()) {
    body["Accounts"] = request.accounts();
  }

  if (!!request.hasAutoImported()) {
    body["AutoImported"] = request.autoImported();
  }

  if (!!request.hasCloudCode()) {
    body["CloudCode"] = request.cloudCode();
  }

  if (!!request.hasLogCodes()) {
    body["LogCodes"] = request.logCodes();
  }

  if (!!request.hasProdCode()) {
    body["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitImportLogTasks"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImportLogTasksResponse>();
}

/**
 * @summary Submits log collection tasks at a time.
 *
 * @param request SubmitImportLogTasksRequest
 * @return SubmitImportLogTasksResponse
 */
SubmitImportLogTasksResponse Client::submitImportLogTasks(const SubmitImportLogTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImportLogTasksWithOptions(request, runtime);
}

/**
 * @summary Updates the status of an automatic response rule.
 *
 * @param request UpdateAutomateResponseConfigStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutomateResponseConfigStatusResponse
 */
UpdateAutomateResponseConfigStatusResponse Client::updateAutomateResponseConfigStatusWithOptions(const UpdateAutomateResponseConfigStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIds()) {
    body["Ids"] = request.ids();
  }

  if (!!request.hasInUse()) {
    body["InUse"] = request.inUse();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAutomateResponseConfigStatus"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutomateResponseConfigStatusResponse>();
}

/**
 * @summary Updates the status of an automatic response rule.
 *
 * @param request UpdateAutomateResponseConfigStatusRequest
 * @return UpdateAutomateResponseConfigStatusResponse
 */
UpdateAutomateResponseConfigStatusResponse Client::updateAutomateResponseConfigStatus(const UpdateAutomateResponseConfigStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutomateResponseConfigStatusWithOptions(request, runtime);
}

/**
 * @summary Creates or updates an alert whitelist rule.
 *
 * @param request UpdateWhiteRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWhiteRuleListResponse
 */
UpdateWhiteRuleListResponse Client::updateWhiteRuleListWithOptions(const UpdateWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpression()) {
    body["Expression"] = request.expression();
  }

  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.incidentUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.roleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.roleType();
  }

  if (!!request.hasWhiteRuleId()) {
    body["WhiteRuleId"] = request.whiteRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWhiteRuleList"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWhiteRuleListResponse>();
}

/**
 * @summary Creates or updates an alert whitelist rule.
 *
 * @param request UpdateWhiteRuleListRequest
 * @return UpdateWhiteRuleListResponse
 */
UpdateWhiteRuleListResponse Client::updateWhiteRuleList(const UpdateWhiteRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWhiteRuleListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudSiem20220616