#include <darabonba/Core.hpp>
#include <alibabacloud/Sddp20190103.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sddp20190103::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sddp20190103
{

AlibabaCloud::Sddp20190103::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hongkong" , "sddp-api.cn-hongkong.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("sddp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Modifies the configurations of a common configuration item for alerts.
 *
 * @description You can call this operation to create or restore configurations based on the codes of common configuration items. This allows you to manage the configurations of common configuration items.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigResponse
 */
CreateConfigResponse Client::createConfigWithOptions(const CreateConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConfig"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigResponse>();
}

/**
 * @summary Modifies the configurations of a common configuration item for alerts.
 *
 * @description You can call this operation to create or restore configurations based on the codes of common configuration items. This allows you to manage the configurations of common configuration items.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateConfigRequest
 * @return CreateConfigResponse
 */
CreateConfigResponse Client::createConfig(const CreateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigWithOptions(request, runtime);
}

/**
 * @summary Authorizes Data Security Center (DSC) to scan data assets. The data assets can be a database, a project, or a bucket.
 *
 * @description You can call this operation to authorize DSC to scan data assets to ensure the security of the data assets.
 *
 * @param request CreateDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLimitResponse
 */
CreateDataLimitResponse Client::createDataLimitWithOptions(const CreateDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasAutoScan()) {
    query["AutoScan"] = request.autoScan();
  }

  if (!!request.hasCertificatePermission()) {
    query["CertificatePermission"] = request.certificatePermission();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasEventStatus()) {
    query["EventStatus"] = request.eventStatus();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasInstantlyScan()) {
    query["InstantlyScan"] = request.instantlyScan();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLogStoreDay()) {
    query["LogStoreDay"] = request.logStoreDay();
  }

  if (!!request.hasOcrStatus()) {
    query["OcrStatus"] = request.ocrStatus();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSamplingSize()) {
    query["SamplingSize"] = request.samplingSize();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataLimit"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLimitResponse>();
}

/**
 * @summary Authorizes Data Security Center (DSC) to scan data assets. The data assets can be a database, a project, or a bucket.
 *
 * @description You can call this operation to authorize DSC to scan data assets to ensure the security of the data assets.
 *
 * @param request CreateDataLimitRequest
 * @return CreateDataLimitResponse
 */
CreateDataLimitResponse Client::createDataLimit(const CreateDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLimitWithOptions(request, runtime);
}

/**
 * @summary Creates a custom sensitive data detection rule.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasContentCategory()) {
    query["ContentCategory"] = request.contentCategory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasModelRuleIds()) {
    query["ModelRuleIds"] = request.modelRuleIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStatExpress()) {
    query["StatExpress"] = request.statExpress();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.supportForm();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.templateRuleIds();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.warnLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Creates a custom sensitive data detection rule.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom scan task. The custom scan task is used to scan data assets on which Data Security Center (DSC) is granted the scan permissions for sensitive data.
 *
 * @description You can call this operation to create a custom scan task for authorized data assets. You can customize the interval between two consecutive scan tasks and the time when the scan task is executed next time.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScanTaskResponse
 */
CreateScanTaskResponse Client::createScanTaskWithOptions(const CreateScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLimitId()) {
    query["DataLimitId"] = request.dataLimitId();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasIntervalDay()) {
    query["IntervalDay"] = request.intervalDay();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOssScanPath()) {
    query["OssScanPath"] = request.ossScanPath();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasRunHour()) {
    query["RunHour"] = request.runHour();
  }

  if (!!request.hasRunMinute()) {
    query["RunMinute"] = request.runMinute();
  }

  if (!!request.hasScanRange()) {
    query["ScanRange"] = request.scanRange();
  }

  if (!!request.hasScanRangeContent()) {
    query["ScanRangeContent"] = request.scanRangeContent();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskUserName()) {
    query["TaskUserName"] = request.taskUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScanTask"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScanTaskResponse>();
}

/**
 * @summary Creates a custom scan task. The custom scan task is used to scan data assets on which Data Security Center (DSC) is granted the scan permissions for sensitive data.
 *
 * @description You can call this operation to create a custom scan task for authorized data assets. You can customize the interval between two consecutive scan tasks and the time when the scan task is executed next time.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateScanTaskRequest
 * @return CreateScanTaskResponse
 */
CreateScanTaskResponse Client::createScanTask(const CreateScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScanTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role for Data Security Center (DSC) to grant DSC the permissions to access data assets in other services.
 *
 * @description You can call this operation to allow DSC to access the data assets in services such as Object Storage Service (OSS), ApsaraDB RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role named AliyunServiceRoleForSDDP and attaches the AliyunServiceRolePolicyForSDDP policy to the role.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateSlrRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlrRoleResponse
 */
CreateSlrRoleResponse Client::createSlrRoleWithOptions(const CreateSlrRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSlrRole"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlrRoleResponse>();
}

/**
 * @summary Creates a service-linked role for Data Security Center (DSC) to grant DSC the permissions to access data assets in other services.
 *
 * @description You can call this operation to allow DSC to access the data assets in services such as Object Storage Service (OSS), ApsaraDB RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role named AliyunServiceRoleForSDDP and attaches the AliyunServiceRolePolicyForSDDP policy to the role.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateSlrRoleRequest
 * @return CreateSlrRoleResponse
 */
CreateSlrRoleResponse Client::createSlrRole(const CreateSlrRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlrRoleWithOptions(request, runtime);
}

/**
 * @summary Revokes the scan permissions on a data asset. The data asset can be a database, an instance, or a bucket.
 *
 * @description You can call this operation to revoke the permissions on a data asset from Data Security Center (DSC).
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLimitResponse
 */
DeleteDataLimitResponse Client::deleteDataLimitWithOptions(const DeleteDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLimit"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLimitResponse>();
}

/**
 * @summary Revokes the scan permissions on a data asset. The data asset can be a database, an instance, or a bucket.
 *
 * @description You can call this operation to revoke the permissions on a data asset from Data Security Center (DSC).
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteDataLimitRequest
 * @return DeleteDataLimitResponse
 */
DeleteDataLimitResponse Client::deleteDataLimit(const DeleteDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLimitWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom sensitive data detection rule from Data Security Center (DSC).
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes a custom sensitive data detection rule from Data Security Center (DSC).
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary 查询审计告警日志列表
 *
 * @param request DescribeAuditLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogsWithOptions(const DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncRequestId()) {
    query["AsyncRequestId"] = request.asyncRequestId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientUa()) {
    query["ClientUa"] = request.clientUa();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasEffectRowRange()) {
    query["EffectRowRange"] = request.effectRowRange();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecuteTimeRange()) {
    query["ExecuteTimeRange"] = request.executeTimeRange();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.ipType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLoadWhiteList()) {
    query["LoadWhiteList"] = request.loadWhiteList();
  }

  if (!!request.hasLogSource()) {
    query["LogSource"] = request.logSource();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.memberAccount();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasOssObjectKey()) {
    query["OssObjectKey"] = request.ossObjectKey();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRuleAggQuery()) {
    query["RuleAggQuery"] = request.ruleAggQuery();
  }

  if (!!request.hasRuleCategory()) {
    query["RuleCategory"] = request.ruleCategory();
  }

  if (!!request.hasRuleID()) {
    query["RuleID"] = request.ruleID();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSqlText()) {
    query["SqlText"] = request.sqlText();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditLogs"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogsResponse>();
}

/**
 * @summary 查询审计告警日志列表
 *
 * @param request DescribeAuditLogsRequest
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogs(const DescribeAuditLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogsWithOptions(request, runtime);
}

/**
 * @summary Call this interface to query the list of industry templates.
 *
 * @param request DescribeCategoryTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryTemplateListResponse
 */
DescribeCategoryTemplateListResponse Client::describeCategoryTemplateListWithOptions(const DescribeCategoryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.usageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCategoryTemplateList"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCategoryTemplateListResponse>();
}

/**
 * @summary Call this interface to query the list of industry templates.
 *
 * @param request DescribeCategoryTemplateListRequest
 * @return DescribeCategoryTemplateListResponse
 */
DescribeCategoryTemplateListResponse Client::describeCategoryTemplateList(const DescribeCategoryTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries rules in a classification template by page.
 *
 * @description You can call this operation to query rules in a classification template.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCategoryTemplateRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryTemplateRuleListResponse
 */
DescribeCategoryTemplateRuleListResponse Client::describeCategoryTemplateRuleListWithOptions(const DescribeCategoryTemplateRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCategoryTemplateRuleList"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCategoryTemplateRuleListResponse>();
}

/**
 * @summary Queries rules in a classification template by page.
 *
 * @description You can call this operation to query rules in a classification template.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCategoryTemplateRuleListRequest
 * @return DescribeCategoryTemplateRuleListResponse
 */
DescribeCategoryTemplateRuleListResponse Client::describeCategoryTemplateRuleList(const DescribeCategoryTemplateRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryTemplateRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries data in the columns of the tables that Data Security Center (DSC) is authorized to access. The tables include the tables of MaxCompute and ApsaraDB RDS.
 *
 * @description You can call this operation to query the data in columns of a table that may contain sensitive data. This helps you analyze sensitive data.
 * ## [](#)Precautions
 * The DescribeColumns operation is changed to DescribeColumnsV2. We recommend that you call the DescribeColumnsV2 operation when you develop your applications.
 * ## [](#qps)Limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumnsWithOptions(const DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasModelTagId()) {
    query["ModelTagId"] = request.modelTagId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSensLevelName()) {
    query["SensLevelName"] = request.sensLevelName();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.tableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateRuleId()) {
    query["TemplateRuleId"] = request.templateRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumns"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnsResponse>();
}

/**
 * @summary Queries data in the columns of the tables that Data Security Center (DSC) is authorized to access. The tables include the tables of MaxCompute and ApsaraDB RDS.
 *
 * @description You can call this operation to query the data in columns of a table that may contain sensitive data. This helps you analyze sensitive data.
 * ## [](#)Precautions
 * The DescribeColumns operation is changed to DescribeColumnsV2. We recommend that you call the DescribeColumnsV2 operation when you develop your applications.
 * ## [](#qps)Limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeColumnsRequest
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumns(const DescribeColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsWithOptions(request, runtime);
}

/**
 * @summary Query data in columns of data assets such as MaxCompute, RDS, etc., that are authorized by the Data Security Center.
 *
 * @param request DescribeColumnsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsV2Response
 */
DescribeColumnsV2Response Client::describeColumnsV2WithOptions(const DescribeColumnsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSensLevelName()) {
    query["SensLevelName"] = request.sensLevelName();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.tableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumnsV2"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnsV2Response>();
}

/**
 * @summary Query data in columns of data assets such as MaxCompute, RDS, etc., that are authorized by the Data Security Center.
 *
 * @param request DescribeColumnsV2Request
 * @return DescribeColumnsV2Response
 */
DescribeColumnsV2Response Client::describeColumnsV2(const DescribeColumnsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsV2WithOptions(request, runtime);
}

/**
 * @summary Queries common configuration items for alerts.
 *
 * @param request DescribeConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigsResponse
 */
DescribeConfigsResponse Client::describeConfigsWithOptions(const DescribeConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigs"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigsResponse>();
}

/**
 * @summary Queries common configuration items for alerts.
 *
 * @param request DescribeConfigsRequest
 * @return DescribeConfigsResponse
 */
DescribeConfigsResponse Client::describeConfigs(const DescribeConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitive data detection results of data assets that Data Security Center (DSC) is authorized to access.
 *
 * @param request DescribeDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataAssetsResponse
 */
DescribeDataAssetsResponse Client::describeDataAssetsWithOptions(const DescribeDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRangeId()) {
    query["RangeId"] = request.rangeId();
  }

  if (!!request.hasRiskLevels()) {
    query["RiskLevels"] = request.riskLevels();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataAssets"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataAssetsResponse>();
}

/**
 * @summary Queries the sensitive data detection results of data assets that Data Security Center (DSC) is authorized to access.
 *
 * @param request DescribeDataAssetsRequest
 * @return DescribeDataAssetsResponse
 */
DescribeDataAssetsResponse Client::describeDataAssets(const DescribeDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataAssetsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data asset, such as a MaxCompute project, an ApsaraDB RDS database, or an Object Storage Service (OSS) bucket, that you authorize Data Security Center (DSC) to access.
 *
 * @param request DescribeDataLimitDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitDetailResponse
 */
DescribeDataLimitDetailResponse Client::describeDataLimitDetailWithOptions(const DescribeDataLimitDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataLimitDetail"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataLimitDetailResponse>();
}

/**
 * @summary Queries the details of a data asset, such as a MaxCompute project, an ApsaraDB RDS database, or an Object Storage Service (OSS) bucket, that you authorize Data Security Center (DSC) to access.
 *
 * @param request DescribeDataLimitDetailRequest
 * @return DescribeDataLimitDetailResponse
 */
DescribeDataLimitDetailResponse Client::describeDataLimitDetail(const DescribeDataLimitDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitDetailWithOptions(request, runtime);
}

/**
 * @summary Queries data assets, such as instances, databases, and Object Storage Service (OSS) buckets, that you authorize Data Security Center (DSC) to scan in a service.
 *
 * @description You can call this operation to query the data assets that are authorized to be scanned. This facilitates resource search and aggregation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataLimitSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitSetResponse
 */
DescribeDataLimitSetResponse Client::describeDataLimitSetWithOptions(const DescribeDataLimitSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasRegionType()) {
    query["RegionType"] = request.regionType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataLimitSet"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataLimitSetResponse>();
}

/**
 * @summary Queries data assets, such as instances, databases, and Object Storage Service (OSS) buckets, that you authorize Data Security Center (DSC) to scan in a service.
 *
 * @description You can call this operation to query the data assets that are authorized to be scanned. This facilitates resource search and aggregation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataLimitSetRequest
 * @return DescribeDataLimitSetResponse
 */
DescribeDataLimitSetResponse Client::describeDataLimitSet(const DescribeDataLimitSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitSetWithOptions(request, runtime);
}

/**
 * @summary Queries the data assets such as instances, databases, or buckets that Data Security Center (DSC) is authorized to access.
 *
 * @param request DescribeDataLimitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitsResponse
 */
DescribeDataLimitsResponse Client::describeDataLimitsWithOptions(const DescribeDataLimitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasCheckStatus()) {
    query["CheckStatus"] = request.checkStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDatamaskStatus()) {
    query["DatamaskStatus"] = request.datamaskStatus();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.memberAccount();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataLimits"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataLimitsResponse>();
}

/**
 * @summary Queries the data assets such as instances, databases, or buckets that Data Security Center (DSC) is authorized to access.
 *
 * @param request DescribeDataLimitsRequest
 * @return DescribeDataLimitsResponse
 */
DescribeDataLimitsResponse Client::describeDataLimits(const DescribeDataLimitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution information about a de-identification task.
 *
 * @description You can call this operation to query the execution information of a static de-identification task, including the status and progress.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataMaskingRunHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataMaskingRunHistoryResponse
 */
DescribeDataMaskingRunHistoryResponse Client::describeDataMaskingRunHistoryWithOptions(const DescribeDataMaskingRunHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.dstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMainProcessId()) {
    query["MainProcessId"] = request.mainProcessId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSrcTableName()) {
    query["SrcTableName"] = request.srcTableName();
  }

  if (!!request.hasSrcType()) {
    query["SrcType"] = request.srcType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataMaskingRunHistory"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataMaskingRunHistoryResponse>();
}

/**
 * @summary Queries the execution information about a de-identification task.
 *
 * @description You can call this operation to query the execution information of a static de-identification task, including the status and progress.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataMaskingRunHistoryRequest
 * @return DescribeDataMaskingRunHistoryResponse
 */
DescribeDataMaskingRunHistoryResponse Client::describeDataMaskingRunHistory(const DescribeDataMaskingRunHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataMaskingRunHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries de-identification tasks.
 *
 * @description You can call this operation to query static de-identification tasks. This facilitates task queries and management.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataMaskingTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataMaskingTasksResponse
 */
DescribeDataMaskingTasksResponse Client::describeDataMaskingTasksWithOptions(const DescribeDataMaskingTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.dstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataMaskingTasks"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataMaskingTasksResponse>();
}

/**
 * @summary Queries de-identification tasks.
 *
 * @description You can call this operation to query static de-identification tasks. This facilitates task queries and management.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDataMaskingTasksRequest
 * @return DescribeDataMaskingTasksResponse
 */
DescribeDataMaskingTasksResponse Client::describeDataMaskingTasks(const DescribeDataMaskingTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataMaskingTasksWithOptions(request, runtime);
}

/**
 * @summary View data object column details
 *
 * @description ## Notes
 * The DescribeDataObjectColumnDetail interface has been revised to DescribeDataObjectColumnDetailV2. It is recommended that you use the newer version, DescribeDataObjectColumnDetailV2, when developing your application.
 *
 * @param request DescribeDataObjectColumnDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectColumnDetailResponse
 */
DescribeDataObjectColumnDetailResponse Client::describeDataObjectColumnDetailWithOptions(const DescribeDataObjectColumnDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataObjectColumnDetail"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataObjectColumnDetailResponse>();
}

/**
 * @summary View data object column details
 *
 * @description ## Notes
 * The DescribeDataObjectColumnDetail interface has been revised to DescribeDataObjectColumnDetailV2. It is recommended that you use the newer version, DescribeDataObjectColumnDetailV2, when developing your application.
 *
 * @param request DescribeDataObjectColumnDetailRequest
 * @return DescribeDataObjectColumnDetailResponse
 */
DescribeDataObjectColumnDetailResponse Client::describeDataObjectColumnDetail(const DescribeDataObjectColumnDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectColumnDetailWithOptions(request, runtime);
}

/**
 * @summary View Data Object Column Details V2
 *
 * @param request DescribeDataObjectColumnDetailV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectColumnDetailV2Response
 */
DescribeDataObjectColumnDetailV2Response Client::describeDataObjectColumnDetailV2WithOptions(const DescribeDataObjectColumnDetailV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataObjectColumnDetailV2"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataObjectColumnDetailV2Response>();
}

/**
 * @summary View Data Object Column Details V2
 *
 * @param request DescribeDataObjectColumnDetailV2Request
 * @return DescribeDataObjectColumnDetailV2Response
 */
DescribeDataObjectColumnDetailV2Response Client::describeDataObjectColumnDetailV2(const DescribeDataObjectColumnDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectColumnDetailV2WithOptions(request, runtime);
}

/**
 * @summary Paginated Query of Data Catalog Objects
 *
 * @param request DescribeDataObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectsResponse
 */
DescribeDataObjectsResponse Client::describeDataObjectsWithOptions(const DescribeDataObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasFileCategoryCode()) {
    query["FileCategoryCode"] = request.fileCategoryCode();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.memberAccount();
  }

  if (!!request.hasModelIds()) {
    query["ModelIds"] = request.modelIds();
  }

  if (!!request.hasModelTagIds()) {
    query["ModelTagIds"] = request.modelTagIds();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentCategoryIds()) {
    query["ParentCategoryIds"] = request.parentCategoryIds();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.productIds();
  }

  if (!!request.hasQueryName()) {
    query["QueryName"] = request.queryName();
  }

  if (!!request.hasRiskLevels()) {
    query["RiskLevels"] = request.riskLevels();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataObjects"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataObjectsResponse>();
}

/**
 * @summary Paginated Query of Data Catalog Objects
 *
 * @param request DescribeDataObjectsRequest
 * @return DescribeDataObjectsResponse
 */
DescribeDataObjectsResponse Client::describeDataObjects(const DescribeDataObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of OSS object types that can be identified.
 *
 * @param request DescribeDocTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocTypesResponse
 */
DescribeDocTypesResponse Client::describeDocTypesWithOptions(const DescribeDocTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocTypes"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocTypesResponse>();
}

/**
 * @summary Queries a list of OSS object types that can be identified.
 *
 * @param request DescribeDocTypesRequest
 * @return DescribeDocTypesResponse
 */
DescribeDocTypesResponse Client::describeDocTypes(const DescribeDocTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an anomalous event. The details include the time when the anomalous event occurred, and the description and handling status of the anomalous event.
 *
 * @param request DescribeEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventDetailResponse
 */
DescribeEventDetailResponse Client::describeEventDetailWithOptions(const DescribeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventDetail"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventDetailResponse>();
}

/**
 * @summary Queries the details of an anomalous event. The details include the time when the anomalous event occurred, and the description and handling status of the anomalous event.
 *
 * @param request DescribeEventDetailRequest
 * @return DescribeEventDetailResponse
 */
DescribeEventDetailResponse Client::describeEventDetail(const DescribeEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the types of anomalous events.
 *
 * @param request DescribeEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTypesResponse
 */
DescribeEventTypesResponse Client::describeEventTypesWithOptions(const DescribeEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasParentTypeId()) {
    query["ParentTypeId"] = request.parentTypeId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventTypes"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventTypesResponse>();
}

/**
 * @summary Queries the types of anomalous events.
 *
 * @param request DescribeEventTypesRequest
 * @return DescribeEventTypesResponse
 */
DescribeEventTypesResponse Client::describeEventTypes(const DescribeEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTypesWithOptions(request, runtime);
}

/**
 * @summary Queries anomalous events.
 *
 * @description You can call this operation to query anomalous events that may involve data leaks. This helps you search for and handle anomalous events.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDealUserId()) {
    query["DealUserId"] = request.dealUserId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSubTypeCode()) {
    query["SubTypeCode"] = request.subTypeCode();
  }

  if (!!request.hasTargetProductCode()) {
    query["TargetProductCode"] = request.targetProductCode();
  }

  if (!!request.hasTypeCode()) {
    query["TypeCode"] = request.typeCode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.warnLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvents"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsResponse>();
}

/**
 * @summary Queries anomalous events.
 *
 * @description You can call this operation to query anomalous events that may involve data leaks. This helps you search for and handle anomalous events.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary Query the status of an identification task
 *
 * @description ## QPS Limit
 * The QPS limit for this interface per user is 10 times/second. Exceeding the limit will result in API calls being rate-limited, which may affect your business. Please call it reasonably.
 *
 * @param request DescribeIdentifyTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIdentifyTaskStatusResponse
 */
DescribeIdentifyTaskStatusResponse Client::describeIdentifyTaskStatusWithOptions(const DescribeIdentifyTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIdentifyTaskStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIdentifyTaskStatusResponse>();
}

/**
 * @summary Query the status of an identification task
 *
 * @description ## QPS Limit
 * The QPS limit for this interface per user is 10 times/second. Exceeding the limit will result in API calls being rate-limited, which may affect your business. Please call it reasonably.
 *
 * @param request DescribeIdentifyTaskStatusRequest
 * @return DescribeIdentifyTaskStatusResponse
 */
DescribeIdentifyTaskStatusResponse Client::describeIdentifyTaskStatus(const DescribeIdentifyTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIdentifyTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data assets.
 *
 * @description You can query a list of unauthorized or authorized data assets based on the value of AuthStatus.
 * This operation is no longer used for the KMS console of the new version.
 *
 * @param request DescribeInstanceSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSourcesResponse
 */
DescribeInstanceSourcesResponse Client::describeInstanceSourcesWithOptions(const DescribeInstanceSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasAuthStatus()) {
    query["AuthStatus"] = request.authStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.searchType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSources"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSourcesResponse>();
}

/**
 * @summary Queries a list of data assets.
 *
 * @description You can query a list of unauthorized or authorized data assets based on the value of AuthStatus.
 * This operation is no longer used for the KMS console of the new version.
 *
 * @param request DescribeInstanceSourcesRequest
 * @return DescribeInstanceSourcesResponse
 */
DescribeInstanceSourcesResponse Client::describeInstanceSources(const DescribeInstanceSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries data assets such as MaxCompute, ApsaraDB RDS, and Object Storage Service (OSS) that you authorize Data Security Center (DSC) to access.
 *
 * @description When you call the DescribeInstances operation, you can specify parameters such as Name and RiskLevelId to query data assets that meet filter conditions.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries data assets such as MaxCompute, ApsaraDB RDS, and Object Storage Service (OSS) that you authorize Data Security Center (DSC) to access.
 *
 * @description When you call the DescribeInstances operation, you can specify parameters such as Name and RiskLevelId to query data assets that meet filter conditions.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Object Storage Service (OSS) object that Data Security Center (DSC) is authorized to access.
 *
 * @description You can call this operation to query the details of an Object Storage Service (OSS) object. This helps you locate sensitive data detected in OSS.
 * ## [](#)Precautions
 * The DescribeOssObjectDetail operation is chagned to DescribeOssObjectDetailV2. We recommend that you call the DescribeOssObjectDetailV2 operation when you develop your applications.
 * ## [](#qps)Limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeOssObjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectDetailResponse
 */
DescribeOssObjectDetailResponse Client::describeOssObjectDetailWithOptions(const DescribeOssObjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssObjectDetail"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssObjectDetailResponse>();
}

/**
 * @summary Queries the details of an Object Storage Service (OSS) object that Data Security Center (DSC) is authorized to access.
 *
 * @description You can call this operation to query the details of an Object Storage Service (OSS) object. This helps you locate sensitive data detected in OSS.
 * ## [](#)Precautions
 * The DescribeOssObjectDetail operation is chagned to DescribeOssObjectDetailV2. We recommend that you call the DescribeOssObjectDetailV2 operation when you develop your applications.
 * ## [](#qps)Limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeOssObjectDetailRequest
 * @return DescribeOssObjectDetailResponse
 */
DescribeOssObjectDetailResponse Client::describeOssObjectDetail(const DescribeOssObjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectDetailWithOptions(request, runtime);
}

/**
 * @summary Call this interface to query the details of a single storage object in OSS that is authorized by the Data Security Center.
 *
 * @description This interface is generally used to query the detailed information of OSS storage objects, which facilitates the accurate positioning of sensitive OSS assets.
 *
 * @param request DescribeOssObjectDetailV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectDetailV2Response
 */
DescribeOssObjectDetailV2Response Client::describeOssObjectDetailV2WithOptions(const DescribeOssObjectDetailV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.bucketName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.objectKey();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssObjectDetailV2"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssObjectDetailV2Response>();
}

/**
 * @summary Call this interface to query the details of a single storage object in OSS that is authorized by the Data Security Center.
 *
 * @description This interface is generally used to query the detailed information of OSS storage objects, which facilitates the accurate positioning of sensitive OSS assets.
 *
 * @param request DescribeOssObjectDetailV2Request
 * @return DescribeOssObjectDetailV2Response
 */
DescribeOssObjectDetailV2Response Client::describeOssObjectDetailV2(const DescribeOssObjectDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectDetailV2WithOptions(request, runtime);
}

/**
 * @summary Queries Object Storage Service (OSS) objects that you authorize Data Security Center (DSC) to access.
 *
 * @param request DescribeOssObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectsResponse
 */
DescribeOssObjectsResponse Client::describeOssObjectsWithOptions(const DescribeOssObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFileCategoryCode()) {
    query["FileCategoryCode"] = request.fileCategoryCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLastScanTimeEnd()) {
    query["LastScanTimeEnd"] = request.lastScanTimeEnd();
  }

  if (!!request.hasLastScanTimeStart()) {
    query["LastScanTimeStart"] = request.lastScanTimeStart();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssObjects"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssObjectsResponse>();
}

/**
 * @summary Queries Object Storage Service (OSS) objects that you authorize Data Security Center (DSC) to access.
 *
 * @param request DescribeOssObjectsRequest
 * @return DescribeOssObjectsResponse
 */
DescribeOssObjectsResponse Client::describeOssObjects(const DescribeOssObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries information about the MaxCompute packages that Data Security Center (DSC) is authorized to access. The information includes the names of MaxCompute packages, the accounts of MaxCompute package owners, and the sensitivity levels of MaxCompute packages.
 *
 * @description You can call this operation to query MaxCompute packages that are scanned by DSC. This helps you search for MaxCompute packages and view the summary of MaxCompute packages.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackagesResponse
 */
DescribePackagesResponse Client::describePackagesWithOptions(const DescribePackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackages"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePackagesResponse>();
}

/**
 * @summary Queries information about the MaxCompute packages that Data Security Center (DSC) is authorized to access. The information includes the names of MaxCompute packages, the accounts of MaxCompute package owners, and the sensitivity levels of MaxCompute packages.
 *
 * @description You can call this operation to query MaxCompute packages that are scanned by DSC. This helps you search for MaxCompute packages and view the summary of MaxCompute packages.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePackagesRequest
 * @return DescribePackagesResponse
 */
DescribePackagesResponse Client::describePackages(const DescribePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackagesWithOptions(request, runtime);
}

/**
 * @summary Gets the list of first-level authorizations.
 *
 * @param request DescribeParentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentInstanceResponse
 */
DescribeParentInstanceResponse Client::describeParentInstanceWithOptions(const DescribeParentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthStatus()) {
    query["AuthStatus"] = request.authStatus();
  }

  if (!!request.hasCheckStatus()) {
    query["CheckStatus"] = request.checkStatus();
  }

  if (!!request.hasClusterStatus()) {
    query["ClusterStatus"] = request.clusterStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.memberAccount();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParentInstance"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParentInstanceResponse>();
}

/**
 * @summary Gets the list of first-level authorizations.
 *
 * @param request DescribeParentInstanceRequest
 * @return DescribeParentInstanceResponse
 */
DescribeParentInstanceResponse Client::describeParentInstance(const DescribeParentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the sensitivity levels that are defined in a rule template provided by Data Security Center (DSC).
 *
 * @description You can call this operation to query the sensitivity levels that are defined in the current rule template provided by DSC. This helps you learn about the number of times that each sensitivity level is referenced in the rule template and the highest sensitivity level.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeRiskLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskLevelsResponse
 */
DescribeRiskLevelsResponse Client::describeRiskLevelsWithOptions(const DescribeRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskLevels"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskLevelsResponse>();
}

/**
 * @summary Queries the sensitivity levels that are defined in a rule template provided by Data Security Center (DSC).
 *
 * @description You can call this operation to query the sensitivity levels that are defined in the current rule template provided by DSC. This helps you learn about the number of times that each sensitivity level is referenced in the rule template and the highest sensitivity level.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeRiskLevelsRequest
 * @return DescribeRiskLevelsResponse
 */
DescribeRiskLevelsResponse Client::describeRiskLevels(const DescribeRiskLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskLevelsWithOptions(request, runtime);
}

/**
 * @summary Queries sensitive data detection rules.
 *
 * @param request DescribeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRulesWithOptions(const DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasContentCategory()) {
    query["ContentCategory"] = request.contentCategory();
  }

  if (!!request.hasCooperationChannel()) {
    query["CooperationChannel"] = request.cooperationChannel();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasCustomType()) {
    query["CustomType"] = request.customType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasKeywordCompatible()) {
    query["KeywordCompatible"] = request.keywordCompatible();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasSimplify()) {
    query["Simplify"] = request.simplify();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.supportForm();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.warnLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRules"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRulesResponse>();
}

/**
 * @summary Queries sensitive data detection rules.
 *
 * @param request DescribeRulesRequest
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRules(const DescribeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRulesWithOptions(request, runtime);
}

/**
 * @summary Queries tables in data assets, such as MaxCompute projects and ApsaraDB RDS instances, that you authorize Data Security Center (DSC) to access.
 *
 * @description When you call the DescribeTables operation to query tables, you can specify parameters such as Name and RiskLevelId to filter tables.
 * # Limits
 * You can send up to 10 requests per second to call this operation by using your Alibaba Cloud account. If you send excessive requests, throttling is implemented, and your business may be affected.
 *
 * @param request DescribeTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTablesWithOptions(const DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPackageId()) {
    query["PackageId"] = request.packageId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTables"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTablesResponse>();
}

/**
 * @summary Queries tables in data assets, such as MaxCompute projects and ApsaraDB RDS instances, that you authorize Data Security Center (DSC) to access.
 *
 * @description When you call the DescribeTables operation to query tables, you can specify parameters such as Name and RiskLevelId to filter tables.
 * # Limits
 * You can send up to 10 requests per second to call this operation by using your Alibaba Cloud account. If you send excessive requests, throttling is implemented, and your business may be affected.
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Call this interface to query all models list of industry templates.
 *
 * @param request DescribeTemplateAllRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateAllRulesResponse
 */
DescribeTemplateAllRulesResponse Client::describeTemplateAllRulesWithOptions(const DescribeTemplateAllRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateAllRules"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateAllRulesResponse>();
}

/**
 * @summary Call this interface to query all models list of industry templates.
 *
 * @param request DescribeTemplateAllRulesRequest
 * @return DescribeTemplateAllRulesResponse
 */
DescribeTemplateAllRulesResponse Client::describeTemplateAllRules(const DescribeTemplateAllRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateAllRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an account.
 *
 * @description You can call this operation to query the information about the current account. This helps you get familiar with your account that accesses Data Security Center (DSC).
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserStatusResponse
 */
DescribeUserStatusResponse Client::describeUserStatusWithOptions(const DescribeUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserStatusResponse>();
}

/**
 * @summary Queries the information about an account.
 *
 * @description You can call this operation to query the information about the current account. This helps you get familiar with your account that accesses Data Security Center (DSC).
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUserStatusRequest
 * @return DescribeUserStatusResponse
 */
DescribeUserStatusResponse Client::describeUserStatus(const DescribeUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserStatusWithOptions(request, runtime);
}

/**
 * @summary Disables a configuration item. After you disable a configuration item, you can call the CreateConfig operation to enable the configuration item by specifying the code of the configuration item for the Code parameter in the request.
 *
 * @description You can call this operation to disable a configuration item based on the code of the configuration item. This helps you modify configurations at the earliest opportunity.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DisableUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserConfigResponse
 */
DisableUserConfigResponse Client::disableUserConfigWithOptions(const DisableUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableUserConfig"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableUserConfigResponse>();
}

/**
 * @summary Disables a configuration item. After you disable a configuration item, you can call the CreateConfig operation to enable the configuration item by specifying the code of the configuration item for the Code parameter in the request.
 *
 * @description You can call this operation to disable a configuration item based on the code of the configuration item. This helps you modify configurations at the earliest opportunity.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DisableUserConfigRequest
 * @return DisableUserConfigResponse
 */
DisableUserConfigResponse Client::disableUserConfig(const DisableUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableUserConfigWithOptions(request, runtime);
}

/**
 * @summary Dynamically de-identifies sensitive data.
 *
 * @param request ExecDatamaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecDatamaskResponse
 */
ExecDatamaskResponse Client::execDatamaskWithOptions(const ExecDatamaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecDatamask"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecDatamaskResponse>();
}

/**
 * @summary Dynamically de-identifies sensitive data.
 *
 * @param request ExecDatamaskRequest
 * @return ExecDatamaskResponse
 */
ExecDatamaskResponse Client::execDatamask(const ExecDatamaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execDatamaskWithOptions(request, runtime);
}

/**
 * @summary Triggers a de-identification task.
 *
 * @param request ManualTriggerMaskingProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualTriggerMaskingProcessResponse
 */
ManualTriggerMaskingProcessResponse Client::manualTriggerMaskingProcessWithOptions(const ManualTriggerMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManualTriggerMaskingProcess"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManualTriggerMaskingProcessResponse>();
}

/**
 * @summary Triggers a de-identification task.
 *
 * @param request ManualTriggerMaskingProcessRequest
 * @return ManualTriggerMaskingProcessResponse
 */
ManualTriggerMaskingProcessResponse Client::manualTriggerMaskingProcess(const ManualTriggerMaskingProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualTriggerMaskingProcessWithOptions(request, runtime);
}

/**
 * @summary Modifies configuration items for a data asset that you authorize Data Security Center (DSC) to access.
 *
 * @param request ModifyDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataLimitResponse
 */
ModifyDataLimitResponse Client::modifyDataLimitWithOptions(const ModifyDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasAutoScan()) {
    query["AutoScan"] = request.autoScan();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLogStoreDay()) {
    query["LogStoreDay"] = request.logStoreDay();
  }

  if (!!request.hasModifyPassword()) {
    query["ModifyPassword"] = request.modifyPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSamplingSize()) {
    query["SamplingSize"] = request.samplingSize();
  }

  if (!!request.hasSecurityGroupIdList()) {
    query["SecurityGroupIdList"] = request.securityGroupIdList();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasVSwitchIdList()) {
    query["VSwitchIdList"] = request.vSwitchIdList();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDataLimit"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataLimitResponse>();
}

/**
 * @summary Modifies configuration items for a data asset that you authorize Data Security Center (DSC) to access.
 *
 * @param request ModifyDataLimitRequest
 * @return ModifyDataLimitResponse
 */
ModifyDataLimitResponse Client::modifyDataLimit(const ModifyDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataLimitWithOptions(request, runtime);
}

/**
 * @summary Changes the sensitivity levels of sensitive data. You can change the default sensitivity levels of data that cannot be classified as sensitive or insensitive, and the sensitivity levels of data that can be classified as sensitive.
 *
 * @description You can call this operation to modify the sensitivity levels of data. This helps you manage the sensitivity levels.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyDefaultLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultLevelResponse
 */
ModifyDefaultLevelResponse Client::modifyDefaultLevelWithOptions(const ModifyDefaultLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultId()) {
    query["DefaultId"] = request.defaultId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSensitiveIds()) {
    query["SensitiveIds"] = request.sensitiveIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefaultLevel"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefaultLevelResponse>();
}

/**
 * @summary Changes the sensitivity levels of sensitive data. You can change the default sensitivity levels of data that cannot be classified as sensitive or insensitive, and the sensitivity levels of data that can be classified as sensitive.
 *
 * @description You can call this operation to modify the sensitivity levels of data. This helps you manage the sensitivity levels.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyDefaultLevelRequest
 * @return ModifyDefaultLevelResponse
 */
ModifyDefaultLevelResponse Client::modifyDefaultLevel(const ModifyDefaultLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultLevelWithOptions(request, runtime);
}

/**
 * @summary Handles an anomalous event.
 *
 * @description You can call this operation to handle anomalous events that involve data leaks. This helps protect your data assets at the earliest opportunity.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyEventStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatusWithOptions(const ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBacked()) {
    query["Backed"] = request.backed();
  }

  if (!!request.hasDealReason()) {
    query["DealReason"] = request.dealReason();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEventStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventStatusResponse>();
}

/**
 * @summary Handles an anomalous event.
 *
 * @description You can call this operation to handle anomalous events that involve data leaks. This helps protect your data assets at the earliest opportunity.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyEventStatusRequest
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatus(const ModifyEventStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventStatusWithOptions(request, runtime);
}

/**
 * @summary Enables the detection of anomalous events of subtypes.
 *
 * @param request ModifyEventTypeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventTypeStatusResponse
 */
ModifyEventTypeStatusResponse Client::modifyEventTypeStatusWithOptions(const ModifyEventTypeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSubTypeIds()) {
    query["SubTypeIds"] = request.subTypeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEventTypeStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventTypeStatusResponse>();
}

/**
 * @summary Enables the detection of anomalous events of subtypes.
 *
 * @param request ModifyEventTypeStatusRequest
 * @return ModifyEventTypeStatusResponse
 */
ModifyEventTypeStatusResponse Client::modifyEventTypeStatus(const ModifyEventTypeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventTypeStatusWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the report task.
 *
 * @description You can call this operation to enable or disable the report task. After you activate Data Security Center (DSC), the report task is enabled by default. After you disable the report task, you cannot view statistics that are newly generated in the Report Center module, on the Overview page of the Cloud Native Data Audit module, and in the Data security lab module. Existing statistics are not affected.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyReportTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReportTaskStatusResponse
 */
ModifyReportTaskStatusResponse Client::modifyReportTaskStatusWithOptions(const ModifyReportTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.featureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasReportTaskStatus()) {
    query["ReportTaskStatus"] = request.reportTaskStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyReportTaskStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyReportTaskStatusResponse>();
}

/**
 * @summary Enables or disables the report task.
 *
 * @description You can call this operation to enable or disable the report task. After you activate Data Security Center (DSC), the report task is enabled by default. After you disable the report task, you cannot view statistics that are newly generated in the Report Center module, on the Overview page of the Cloud Native Data Audit module, and in the Data security lab module. Existing statistics are not affected.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyReportTaskStatusRequest
 * @return ModifyReportTaskStatusResponse
 */
ModifyReportTaskStatusResponse Client::modifyReportTaskStatus(const ModifyReportTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyReportTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
 *
 * @description When you call this operation, you must configure request parameters to specify the rule name, rule ID, and rule content.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRuleWithOptions(const ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasModelRuleIds()) {
    query["ModelRuleIds"] = request.modelRuleIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.riskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.supportForm();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.templateRuleIds();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.warnLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRule"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleResponse>();
}

/**
 * @summary Modifies a custom sensitive data detection rule in Data Security Center (DSC).
 *
 * @description When you call this operation, you must configure request parameters to specify the rule name, rule ID, and rule content.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyRuleRequest
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRule(const ModifyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a sensitive data detection rule.
 *
 * @param request ModifyRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatusWithOptions(const ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRuleStatus"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleStatusResponse>();
}

/**
 * @summary Enables or disables a sensitive data detection rule.
 *
 * @param request ModifyRuleStatusRequest
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatus(const ModifyRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleStatusWithOptions(request, runtime);
}

/**
 * @summary Creates an identification task to scan sensitive data in Object Storage Service (OSS) objects.
 *
 * @description ### [](#)Prerequisites
 * To call this operation, make sure that asset authorization for your OSS bucket is complete and the bucket is connected. If the authorization is not complete, the bucket_not_authorized error code is returned when you call the operation.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 * ### [](#)Additional information
 * After you call this operation, you can obtain the task ID. You can specify the task ID in the DescribeIdentifyTaskDetail operation to query the state of the task.
 * After the task is complete, you can call the DescribeOssObjectDetailV2 operation to query the identification results of sensitive data in the related OSS objects. When you call the DescribeOssObjectDetailV2 operation, you must specify BucketName, ServiceRegionId, and ObjectKey.
 *
 * @param tmpReq ScanOssObjectV1Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScanOssObjectV1Response
 */
ScanOssObjectV1Response Client::scanOssObjectV1WithOptions(const ScanOssObjectV1Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ScanOssObjectV1ShrinkRequest request = ScanOssObjectV1ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectKeyList()) {
    request.setObjectKeyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.objectKeyList(), "ObjectKeyList", "json"));
  }

  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.bucketName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasObjectKeyListShrink()) {
    query["ObjectKeyList"] = request.objectKeyListShrink();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScanOssObjectV1"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScanOssObjectV1Response>();
}

/**
 * @summary Creates an identification task to scan sensitive data in Object Storage Service (OSS) objects.
 *
 * @description ### [](#)Prerequisites
 * To call this operation, make sure that asset authorization for your OSS bucket is complete and the bucket is connected. If the authorization is not complete, the bucket_not_authorized error code is returned when you call the operation.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 * ### [](#)Additional information
 * After you call this operation, you can obtain the task ID. You can specify the task ID in the DescribeIdentifyTaskDetail operation to query the state of the task.
 * After the task is complete, you can call the DescribeOssObjectDetailV2 operation to query the identification results of sensitive data in the related OSS objects. When you call the DescribeOssObjectDetailV2 operation, you must specify BucketName, ServiceRegionId, and ObjectKey.
 *
 * @param request ScanOssObjectV1Request
 * @return ScanOssObjectV1Response
 */
ScanOssObjectV1Response Client::scanOssObjectV1(const ScanOssObjectV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scanOssObjectV1WithOptions(request, runtime);
}

/**
 * @summary Stops a de-identification task. After you stop a de-identification task, you can resume the task by calling the ManualTriggerMaskingProcess operation.
 *
 * @description You can call this operation to stop a de-identification task that is running. For example, you can stop a de-identification task that is used to de-identify specific data.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request StopMaskingProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMaskingProcessResponse
 */
StopMaskingProcessResponse Client::stopMaskingProcessWithOptions(const StopMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMaskingProcess"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMaskingProcessResponse>();
}

/**
 * @summary Stops a de-identification task. After you stop a de-identification task, you can resume the task by calling the ManualTriggerMaskingProcess operation.
 *
 * @description You can call this operation to stop a de-identification task that is running. For example, you can stop a de-identification task that is used to de-identify specific data.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request StopMaskingProcessRequest
 * @return StopMaskingProcessResponse
 */
StopMaskingProcessResponse Client::stopMaskingProcess(const StopMaskingProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMaskingProcessWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sddp20190103