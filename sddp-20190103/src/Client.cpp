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
    {"cn-hongkong" , "sddp-api.cn-hongkong.aliyuncs.com"},
    {"cn-zhangjiakou" , "sddp.cn-zhangjiakou.aliyuncs.com"},
    {"ap-southeast-1" , "sddp.ap-southeast-1.aliyuncs.com"}
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
 * @summary Modifies the general alert configuration parameters.
 *
 * @description Creates or restores configurations based on the codes of common alert configuration items, allowing you to manage these configurations.
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
    query["Code"] = request.getCode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
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
 * @summary Modifies the general alert configuration parameters.
 *
 * @description Creates or restores configurations based on the codes of common alert configuration items, allowing you to manage these configurations.
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
 * @summary You can call the CreateDataLimit operation to grant permissions to scan databases, projects, and buckets.
 *
 * @description You can use this operation to grant permissions to scan your data assets. This helps improve the security of your data assets.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, the system throttles your API calls. This may affect your business. Plan your calls accordingly.
 *
 * @param request CreateDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLimitResponse
 */
CreateDataLimitResponse Client::createDataLimitWithOptions(const CreateDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasAutoScan()) {
    query["AutoScan"] = request.getAutoScan();
  }

  if (!!request.hasCertificatePermission()) {
    query["CertificatePermission"] = request.getCertificatePermission();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasEventStatus()) {
    query["EventStatus"] = request.getEventStatus();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasInstantlyScan()) {
    query["InstantlyScan"] = request.getInstantlyScan();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLogStoreDay()) {
    query["LogStoreDay"] = request.getLogStoreDay();
  }

  if (!!request.hasOcrStatus()) {
    query["OcrStatus"] = request.getOcrStatus();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSamplingSize()) {
    query["SamplingSize"] = request.getSamplingSize();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
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
 * @summary You can call the CreateDataLimit operation to grant permissions to scan databases, projects, and buckets.
 *
 * @description You can use this operation to grant permissions to scan your data assets. This helps improve the security of your data assets.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, the system throttles your API calls. This may affect your business. Plan your calls accordingly.
 *
 * @param request CreateDataLimitRequest
 * @return CreateDataLimitResponse
 */
CreateDataLimitResponse Client::createDataLimit(const CreateDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLimitWithOptions(request, runtime);
}

/**
 * @summary Call CreateRule to create a custom sensitive data detection rule.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasContentCategory()) {
    query["ContentCategory"] = request.getContentCategory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.getMatchType();
  }

  if (!!request.hasModelRuleIds()) {
    query["ModelRuleIds"] = request.getModelRuleIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStatExpress()) {
    query["StatExpress"] = request.getStatExpress();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.getSupportForm();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.getWarnLevel();
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
 * @summary Call CreateRule to create a custom sensitive data detection rule.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary You can call the CreateScanTask operation to create a custom scan task to detect sensitive data in authorized assets.
 *
 * @description This operation creates custom scan tasks for authorized assets. You can control the run interval and runtime of each scan task.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
 *
 * @param request CreateScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScanTaskResponse
 */
CreateScanTaskResponse Client::createScanTaskWithOptions(const CreateScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataLimitId()) {
    query["DataLimitId"] = request.getDataLimitId();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasIntervalDay()) {
    query["IntervalDay"] = request.getIntervalDay();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOssScanPath()) {
    query["OssScanPath"] = request.getOssScanPath();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRunHour()) {
    query["RunHour"] = request.getRunHour();
  }

  if (!!request.hasRunMinute()) {
    query["RunMinute"] = request.getRunMinute();
  }

  if (!!request.hasScanRange()) {
    query["ScanRange"] = request.getScanRange();
  }

  if (!!request.hasScanRangeContent()) {
    query["ScanRangeContent"] = request.getScanRangeContent();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskUserName()) {
    query["TaskUserName"] = request.getTaskUserName();
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
 * @summary You can call the CreateScanTask operation to create a custom scan task to detect sensitive data in authorized assets.
 *
 * @description This operation creates custom scan tasks for authorized assets. You can control the run interval and runtime of each scan task.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
 *
 * @param request CreateScanTaskRequest
 * @return CreateScanTaskResponse
 */
CreateScanTaskResponse Client::createScanTask(const CreateScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScanTaskWithOptions(request, runtime);
}

/**
 * @summary Call CreateSlrRole to create a service-linked role for Data Security Center (DSC). This role authorizes DSC to access your cloud resources.
 *
 * @description This operation allows DSC to access the resources of Alibaba Cloud services such as OSS, RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role. The role is named AliyunServiceRoleForSDDP, and its access policy is AliyunServiceRolePolicyForSDDP.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
 *
 * @param request CreateSlrRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlrRoleResponse
 */
CreateSlrRoleResponse Client::createSlrRoleWithOptions(const CreateSlrRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Call CreateSlrRole to create a service-linked role for Data Security Center (DSC). This role authorizes DSC to access your cloud resources.
 *
 * @description This operation allows DSC to access the resources of Alibaba Cloud services such as OSS, RDS, and MaxCompute. After you call this operation, the system automatically creates a service-linked role. The role is named AliyunServiceRoleForSDDP, and its access policy is AliyunServiceRolePolicyForSDDP.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
 *
 * @param request CreateSlrRoleRequest
 * @return CreateSlrRoleResponse
 */
CreateSlrRoleResponse Client::createSlrRole(const CreateSlrRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlrRoleWithOptions(request, runtime);
}

/**
 * @summary Revokes the scan authorization for a data asset, such as a database, instance, or bucket.
 *
 * @description This operation is typically used to revoke authorization for data assets. This helps you manage data access permissions.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation within this limit.
 *
 * @param request DeleteDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLimitResponse
 */
DeleteDataLimitResponse Client::deleteDataLimitWithOptions(const DeleteDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Revokes the scan authorization for a data asset, such as a database, instance, or bucket.
 *
 * @description This operation is typically used to revoke authorization for data assets. This helps you manage data access permissions.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation within this limit.
 *
 * @param request DeleteDataLimitRequest
 * @return DeleteDataLimitResponse
 */
DeleteDataLimitResponse Client::deleteDataLimit(const DeleteDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLimitWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom sensitive data detection rule.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes a custom sensitive data detection rule.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the list of audit alert logs.
 *
 * @description This operation is used to query the list of data audit alert logs, which facilitates alerting search and alerting handling.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
 *
 * @param request DescribeAuditLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogsWithOptions(const DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncRequestId()) {
    query["AsyncRequestId"] = request.getAsyncRequestId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientUa()) {
    query["ClientUa"] = request.getClientUa();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasEffectRowRange()) {
    query["EffectRowRange"] = request.getEffectRowRange();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecuteTimeRange()) {
    query["ExecuteTimeRange"] = request.getExecuteTimeRange();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLoadWhiteList()) {
    query["LoadWhiteList"] = request.getLoadWhiteList();
  }

  if (!!request.hasLogQueryOpJson()) {
    query["LogQueryOpJson"] = request.getLogQueryOpJson();
  }

  if (!!request.hasLogSource()) {
    query["LogSource"] = request.getLogSource();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.getMemberAccount();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOssObjectKey()) {
    query["OssObjectKey"] = request.getOssObjectKey();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRuleAggQuery()) {
    query["RuleAggQuery"] = request.getRuleAggQuery();
  }

  if (!!request.hasRuleCategory()) {
    query["RuleCategory"] = request.getRuleCategory();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSqlText()) {
    query["SqlText"] = request.getSqlText();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
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
 * @summary Queries the list of audit alert logs.
 *
 * @description This operation is used to query the list of data audit alert logs, which facilitates alerting search and alerting handling.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
 *
 * @param request DescribeAuditLogsRequest
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogs(const DescribeAuditLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogsWithOptions(request, runtime);
}

/**
 * @summary Lists industry-specific templates.
 *
 * @param request DescribeCategoryTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryTemplateListResponse
 */
DescribeCategoryTemplateListResponse Client::describeCategoryTemplateListWithOptions(const DescribeCategoryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.getUsageScenario();
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
 * @summary Lists industry-specific templates.
 *
 * @param request DescribeCategoryTemplateListRequest
 * @return DescribeCategoryTemplateListResponse
 */
DescribeCategoryTemplateListResponse Client::describeCategoryTemplateList(const DescribeCategoryTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of rules in a data classification template.
 *
 * @description Retrieves the rules in a data classification template to help you review the rule details.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCategoryTemplateRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryTemplateRuleListResponse
 */
DescribeCategoryTemplateRuleListResponse Client::describeCategoryTemplateRuleListWithOptions(const DescribeCategoryTemplateRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries a paginated list of rules in a data classification template.
 *
 * @description Retrieves the rules in a data classification template to help you review the rule details.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCategoryTemplateRuleListRequest
 * @return DescribeCategoryTemplateRuleListResponse
 */
DescribeCategoryTemplateRuleListResponse Client::describeCategoryTemplateRuleList(const DescribeCategoryTemplateRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryTemplateRuleListWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeColumns API to query column data in data asset tables, such as MaxCompute and RDS, that are authorized to connect to Data Security Center.
 *
 * @description This API is typically used to view column data in sensitive data asset information tables. This helps users accurately analyze sensitive data.
 * ## Notes
 * The DescribeColumns API has been revised and replaced by DescribeColumnsV2. Use the newer DescribeColumnsV2 version when developing applications.
 * ## QPS Limits
 * The single-user QPS limit for this API is 10 calls per second. If you exceed this limit, API calls will be rate-limited. This may affect your business. You should call the API reasonably.
 *
 * @param request DescribeColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumnsWithOptions(const DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasModelTagId()) {
    query["ModelTagId"] = request.getModelTagId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSensLevelName()) {
    query["SensLevelName"] = request.getSensLevelName();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateRuleId()) {
    query["TemplateRuleId"] = request.getTemplateRuleId();
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
 * @summary You can call the DescribeColumns API to query column data in data asset tables, such as MaxCompute and RDS, that are authorized to connect to Data Security Center.
 *
 * @description This API is typically used to view column data in sensitive data asset information tables. This helps users accurately analyze sensitive data.
 * ## Notes
 * The DescribeColumns API has been revised and replaced by DescribeColumnsV2. Use the newer DescribeColumnsV2 version when developing applications.
 * ## QPS Limits
 * The single-user QPS limit for this API is 10 calls per second. If you exceed this limit, API calls will be rate-limited. This may affect your business. You should call the API reasonably.
 *
 * @param request DescribeColumnsRequest
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumns(const DescribeColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsWithOptions(request, runtime);
}

/**
 * @summary The DescribeColumnsV2 operation queries data in the columns of data asset tables, such as those in MaxCompute and RDS, that are authorized in Data Security Center.
 *
 * @param request DescribeColumnsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsV2Response
 */
DescribeColumnsV2Response Client::describeColumnsV2WithOptions(const DescribeColumnsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSensLevelName()) {
    query["SensLevelName"] = request.getSensLevelName();
  }

  if (!!request.hasTableId()) {
    query["TableId"] = request.getTableId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
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
 * @summary The DescribeColumnsV2 operation queries data in the columns of data asset tables, such as those in MaxCompute and RDS, that are authorized in Data Security Center.
 *
 * @param request DescribeColumnsV2Request
 * @return DescribeColumnsV2Response
 */
DescribeColumnsV2Response Client::describeColumnsV2(const DescribeColumnsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsV2WithOptions(request, runtime);
}

/**
 * @summary Queries common configuration items for anomaly alerts.
 *
 * @description # Usage notes
 * Queries common configuration items for anomaly alerts, which you can use to create or restore alert configurations.
 * # QPS limit
 * The maximum number of queries per second (QPS) per user is 10. If this limit is exceeded, API calls are throttled. This may impact your business. Call this operation only as needed.
 *
 * @param request DescribeConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigsResponse
 */
DescribeConfigsResponse Client::describeConfigsWithOptions(const DescribeConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries common configuration items for anomaly alerts.
 *
 * @description # Usage notes
 * Queries common configuration items for anomaly alerts, which you can use to create or restore alert configurations.
 * # QPS limit
 * The maximum number of queries per second (QPS) per user is 10. If this limit is exceeded, API calls are throttled. This may impact your business. Call this operation only as needed.
 *
 * @param request DescribeConfigsRequest
 * @return DescribeConfigsResponse
 */
DescribeConfigsResponse Client::describeConfigs(const DescribeConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfigsWithOptions(request, runtime);
}

/**
 * @summary Searches for data assets on the Overview page of Data Security Center (DSC).
 *
 * @description This operation is typically used to query data assets of different types on the overview page of DSC.
 * ## Usage notes
 * This operation is deprecated and no longer maintained.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataAssetsResponse
 */
DescribeDataAssetsResponse Client::describeDataAssetsWithOptions(const DescribeDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRangeId()) {
    query["RangeId"] = request.getRangeId();
  }

  if (!!request.hasRiskLevels()) {
    query["RiskLevels"] = request.getRiskLevels();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
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
 * @summary Searches for data assets on the Overview page of Data Security Center (DSC).
 *
 * @description This operation is typically used to query data assets of different types on the overview page of DSC.
 * ## Usage notes
 * This operation is deprecated and no longer maintained.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeDataAssetsRequest
 * @return DescribeDataAssetsResponse
 */
DescribeDataAssetsResponse Client::describeDataAssets(const DescribeDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataAssetsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an authorized data asset, such as a MaxCompute project, ApsaraDB RDS database, or OSS bucket.
 *
 * @param request DescribeDataLimitDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitDetailResponse
 */
DescribeDataLimitDetailResponse Client::describeDataLimitDetailWithOptions(const DescribeDataLimitDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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
 * @summary Retrieves the details of an authorized data asset, such as a MaxCompute project, ApsaraDB RDS database, or OSS bucket.
 *
 * @param request DescribeDataLimitDetailRequest
 * @return DescribeDataLimitDetailResponse
 */
DescribeDataLimitDetailResponse Client::describeDataLimitDetail(const DescribeDataLimitDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitDetailWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeDataLimitSet operation to query the authorization list for unstructured assets or the list of regions supported by Data Security Center.
 *
 * @description Use this operation to retrieve a list of authorized product assets. This list helps you search for and aggregate resources.
 * ## Notes
 * In the future, this operation will be used only to retrieve the list of regions that a product supports. Other features will no longer be maintained.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled. Throttling can affect your business. We recommend that you call this operation a reasonable number of times.
 *
 * @param request DescribeDataLimitSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitSetResponse
 */
DescribeDataLimitSetResponse Client::describeDataLimitSetWithOptions(const DescribeDataLimitSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasRegionType()) {
    query["RegionType"] = request.getRegionType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Call the DescribeDataLimitSet operation to query the authorization list for unstructured assets or the list of regions supported by Data Security Center.
 *
 * @description Use this operation to retrieve a list of authorized product assets. This list helps you search for and aggregate resources.
 * ## Notes
 * In the future, this operation will be used only to retrieve the list of regions that a product supports. Other features will no longer be maintained.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled. Throttling can affect your business. We recommend that you call this operation a reasonable number of times.
 *
 * @param request DescribeDataLimitSetRequest
 * @return DescribeDataLimitSetResponse
 */
DescribeDataLimitSetResponse Client::describeDataLimitSet(const DescribeDataLimitSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitSetWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data assets for authorized instances, databases, and buckets.
 *
 * @param request DescribeDataLimitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataLimitsResponse
 */
DescribeDataLimitsResponse Client::describeDataLimitsWithOptions(const DescribeDataLimitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasCheckStatus()) {
    query["CheckStatus"] = request.getCheckStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDatamaskStatus()) {
    query["DatamaskStatus"] = request.getDatamaskStatus();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.getMemberAccount();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the list of data assets for authorized instances, databases, and buckets.
 *
 * @param request DescribeDataLimitsRequest
 * @return DescribeDataLimitsResponse
 */
DescribeDataLimitsResponse Client::describeDataLimits(const DescribeDataLimitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataLimitsWithOptions(request, runtime);
}

/**
 * @summary You can call DescribeDataMaskingRunHistory to query the execution history of data masking tasks.
 *
 * @description This operation retrieves the execution history of static data masking tasks. You can use it to search for task statuses and view task progress.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeDataMaskingRunHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataMaskingRunHistoryResponse
 */
DescribeDataMaskingRunHistoryResponse Client::describeDataMaskingRunHistoryWithOptions(const DescribeDataMaskingRunHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.getDstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMainProcessId()) {
    query["MainProcessId"] = request.getMainProcessId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSrcTableName()) {
    query["SrcTableName"] = request.getSrcTableName();
  }

  if (!!request.hasSrcType()) {
    query["SrcType"] = request.getSrcType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary You can call DescribeDataMaskingRunHistory to query the execution history of data masking tasks.
 *
 * @description This operation retrieves the execution history of static data masking tasks. You can use it to search for task statuses and view task progress.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user on this operation is 10 calls per second. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeDataMaskingRunHistoryRequest
 * @return DescribeDataMaskingRunHistoryResponse
 */
DescribeDataMaskingRunHistoryResponse Client::describeDataMaskingRunHistory(const DescribeDataMaskingRunHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataMaskingRunHistoryWithOptions(request, runtime);
}

/**
 * @summary Call DescribeDataMaskingTasks to retrieve a list of data masking tasks.
 *
 * @description This operation retrieves a list of static data masking tasks, which you can then search and manage.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeDataMaskingTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataMaskingTasksResponse
 */
DescribeDataMaskingTasksResponse Client::describeDataMaskingTasksWithOptions(const DescribeDataMaskingTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.getDstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Call DescribeDataMaskingTasks to retrieve a list of data masking tasks.
 *
 * @description This operation retrieves a list of static data masking tasks, which you can then search and manage.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeDataMaskingTasksRequest
 * @return DescribeDataMaskingTasksResponse
 */
DescribeDataMaskingTasksResponse Client::describeDataMaskingTasks(const DescribeDataMaskingTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataMaskingTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the detection results for columns in a data table.
 *
 * @description ## Notes
 * The DescribeDataObjectColumnDetail operation has been updated to DescribeDataObjectColumnDetailV2. We recommend that you use the latest version, DescribeDataObjectColumnDetailV2, for application development.
 *
 * @param request DescribeDataObjectColumnDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectColumnDetailResponse
 */
DescribeDataObjectColumnDetailResponse Client::describeDataObjectColumnDetailWithOptions(const DescribeDataObjectColumnDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the detection results for columns in a data table.
 *
 * @description ## Notes
 * The DescribeDataObjectColumnDetail operation has been updated to DescribeDataObjectColumnDetailV2. We recommend that you use the latest version, DescribeDataObjectColumnDetailV2, for application development.
 *
 * @param request DescribeDataObjectColumnDetailRequest
 * @return DescribeDataObjectColumnDetailResponse
 */
DescribeDataObjectColumnDetailResponse Client::describeDataObjectColumnDetail(const DescribeDataObjectColumnDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectColumnDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the detection results for the columns of a data table.
 *
 * @param request DescribeDataObjectColumnDetailV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectColumnDetailV2Response
 */
DescribeDataObjectColumnDetailV2Response Client::describeDataObjectColumnDetailV2WithOptions(const DescribeDataObjectColumnDetailV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the detection results for the columns of a data table.
 *
 * @param request DescribeDataObjectColumnDetailV2Request
 * @return DescribeDataObjectColumnDetailV2Response
 */
DescribeDataObjectColumnDetailV2Response Client::describeDataObjectColumnDetailV2(const DescribeDataObjectColumnDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectColumnDetailV2WithOptions(request, runtime);
}

/**
 * @summary Query data detection results for tables and files.
 *
 * @description This operation queries data detection results for tables and files, to provide a comprehensive view across all your assets.
 * ## QPS limit
 * The per-user QPS limit for this operation is 10 requests per second. If you exceed this limit, the system throttles your API calls. To prevent business disruptions, call this operation only when necessary.
 *
 * @param request DescribeDataObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataObjectsResponse
 */
DescribeDataObjectsResponse Client::describeDataObjectsWithOptions(const DescribeDataObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAPIVersion()) {
    query["APIVersion"] = request.getAPIVersion();
  }

  if (!!request.hasBucket()) {
    query["Bucket"] = request.getBucket();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasFileCategoryCode()) {
    query["FileCategoryCode"] = request.getFileCategoryCode();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLogStore()) {
    query["LogStore"] = request.getLogStore();
  }

  if (!!request.hasLogStoreFlag()) {
    query["LogStoreFlag"] = request.getLogStoreFlag();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.getMemberAccount();
  }

  if (!!request.hasModelIds()) {
    query["ModelIds"] = request.getModelIds();
  }

  if (!!request.hasModelTagIds()) {
    query["ModelTagIds"] = request.getModelTagIds();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentCategoryIds()) {
    query["ParentCategoryIds"] = request.getParentCategoryIds();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasProject()) {
    query["Project"] = request.getProject();
  }

  if (!!request.hasQueryName()) {
    query["QueryName"] = request.getQueryName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRiskLevelIdList()) {
    query["RiskLevelIdList"] = request.getRiskLevelIdList();
  }

  if (!!request.hasRiskLevels()) {
    query["RiskLevels"] = request.getRiskLevels();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Query data detection results for tables and files.
 *
 * @description This operation queries data detection results for tables and files, to provide a comprehensive view across all your assets.
 * ## QPS limit
 * The per-user QPS limit for this operation is 10 requests per second. If you exceed this limit, the system throttles your API calls. To prevent business disruptions, call this operation only when necessary.
 *
 * @param request DescribeDataObjectsRequest
 * @return DescribeDataObjectsResponse
 */
DescribeDataObjectsResponse Client::describeDataObjects(const DescribeDataObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of file types supported by Object Storage Service (OSS).
 *
 * @param request DescribeDocTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocTypesResponse
 */
DescribeDocTypesResponse Client::describeDocTypesWithOptions(const DescribeDocTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries a list of file types supported by Object Storage Service (OSS).
 *
 * @param request DescribeDocTypesRequest
 * @return DescribeDocTypesResponse
 */
DescribeDocTypesResponse Client::describeDocTypes(const DescribeDocTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocTypesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an anomalous event, including its occurrence time, description, and handling status.
 *
 * @param request DescribeEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventDetailResponse
 */
DescribeEventDetailResponse Client::describeEventDetailWithOptions(const DescribeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Retrieves the details of an anomalous event, including its occurrence time, description, and handling status.
 *
 * @param request DescribeEventDetailRequest
 * @return DescribeEventDetailResponse
 */
DescribeEventDetailResponse Client::describeEventDetail(const DescribeEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries anomalous activity types.
 *
 * @param request DescribeEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTypesResponse
 */
DescribeEventTypesResponse Client::describeEventTypesWithOptions(const DescribeEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasParentTypeId()) {
    query["ParentTypeId"] = request.getParentTypeId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries anomalous activity types.
 *
 * @param request DescribeEventTypesRequest
 * @return DescribeEventTypesResponse
 */
DescribeEventTypesResponse Client::describeEventTypes(const DescribeEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTypesWithOptions(request, runtime);
}

/**
 * @summary Lists anomalous events.
 *
 * @description This operation queries alerts for data breach risks to help you find and handle them.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
 *
 * @param request DescribeEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDealUserId()) {
    query["DealUserId"] = request.getDealUserId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSubTypeCode()) {
    query["SubTypeCode"] = request.getSubTypeCode();
  }

  if (!!request.hasTargetProductCode()) {
    query["TargetProductCode"] = request.getTargetProductCode();
  }

  if (!!request.hasTypeCode()) {
    query["TypeCode"] = request.getTypeCode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.getWarnLevel();
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
 * @summary Lists anomalous events.
 *
 * @description This operation queries alerts for data breach risks to help you find and handle them.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the completion status of a detection task based on the task ID. You can obtain the task ID from the Id field in the return value of a CreateScanTask or ScanOssObjectV1 API call.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
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
 * @summary Retrieves the completion status of a detection task based on the task ID. You can obtain the task ID from the Id field in the return value of a CreateScanTask or ScanOssObjectV1 API call.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
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
 * @description Queries the list of authorized or unauthorized data assets based on the AuthStatus parameter to help you understand the authorization status of your data assets.
 * This operation is no longer used in the new console.
 * ## QPS limit
 * Each user can call this operation up to 10 times per second. If this limit is exceeded, API calls are throttled, which may affect your business.
 *
 * @param request DescribeInstanceSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSourcesResponse
 */
DescribeInstanceSourcesResponse Client::describeInstanceSourcesWithOptions(const DescribeInstanceSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasAuthStatus()) {
    query["AuthStatus"] = request.getAuthStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.getSearchType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
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
 * @description Queries the list of authorized or unauthorized data assets based on the AuthStatus parameter to help you understand the authorization status of your data assets.
 * This operation is no longer used in the new console.
 * ## QPS limit
 * Each user can call this operation up to 10 times per second. If this limit is exceeded, API calls are throttled, which may affect your business.
 *
 * @param request DescribeInstanceSourcesRequest
 * @return DescribeInstanceSourcesResponse
 */
DescribeInstanceSourcesResponse Client::describeInstanceSources(const DescribeInstanceSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of authorized MaxCompute, RDS, and OSS data asset instances.
 *
 * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and the threat level of data asset instances to retrieve a list of instances that meet your requirements.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user for this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
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
 * @summary Retrieves a list of authorized MaxCompute, RDS, and OSS data asset instances.
 *
 * @description When you call the DescribeInstances operation, you can set parameters such as search keywords and the threat level of data asset instances to retrieve a list of instances that meet your requirements.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user for this operation is 10 calls per second. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
 *
 * @description This operation is typically used to query the details of OSS objects. This information helps you accurately locate sensitive data assets in OSS.
 * ## Usage notes
 * The DescribeOssObjectDetail operation has been updated to DescribeOssObjectDetailV2. We recommend that you use the new version, DescribeOssObjectDetailV2, when you develop applications.
 * ## QPS limit
 * A single user can make up to 10 queries per second (QPS). If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request DescribeOssObjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectDetailResponse
 */
DescribeOssObjectDetailResponse Client::describeOssObjectDetailWithOptions(const DescribeOssObjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
 *
 * @description This operation is typically used to query the details of OSS objects. This information helps you accurately locate sensitive data assets in OSS.
 * ## Usage notes
 * The DescribeOssObjectDetail operation has been updated to DescribeOssObjectDetailV2. We recommend that you use the new version, DescribeOssObjectDetailV2, when you develop applications.
 * ## QPS limit
 * A single user can make up to 10 queries per second (QPS). If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request DescribeOssObjectDetailRequest
 * @return DescribeOssObjectDetailResponse
 */
DescribeOssObjectDetailResponse Client::describeOssObjectDetail(const DescribeOssObjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectDetailWithOptions(request, runtime);
}

/**
 * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
 *
 * @description This operation queries the details of OSS objects. You can use this operation to locate sensitive data assets in OSS.
 *
 * @param request DescribeOssObjectDetailV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectDetailV2Response
 */
DescribeOssObjectDetailV2Response Client::describeOssObjectDetailV2WithOptions(const DescribeOssObjectDetailV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.getObjectKey();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Obtains detailed information about an authorized OSS object in Data Security Center.
 *
 * @description This operation queries the details of OSS objects. You can use this operation to locate sensitive data assets in OSS.
 *
 * @param request DescribeOssObjectDetailV2Request
 * @return DescribeOssObjectDetailV2Response
 */
DescribeOssObjectDetailV2Response Client::describeOssObjectDetailV2(const DescribeOssObjectDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectDetailV2WithOptions(request, runtime);
}

/**
 * @summary Lists authorized OSS objects.
 *
 * @param request DescribeOssObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssObjectsResponse
 */
DescribeOssObjectsResponse Client::describeOssObjectsWithOptions(const DescribeOssObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFileCategoryCode()) {
    query["FileCategoryCode"] = request.getFileCategoryCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLastScanTimeEnd()) {
    query["LastScanTimeEnd"] = request.getLastScanTimeEnd();
  }

  if (!!request.hasLastScanTimeStart()) {
    query["LastScanTimeStart"] = request.getLastScanTimeStart();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Lists authorized OSS objects.
 *
 * @param request DescribeOssObjectsRequest
 * @return DescribeOssObjectsResponse
 */
DescribeOssObjectsResponse Client::describeOssObjects(const DescribeOssObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssObjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about MaxCompute packages authorized for scanning, including package names, owner accounts, and risk levels.
 *
 * @description This API is typically used to query a list of MaxCompute packages. This helps you search for packages and obtain an overview of sensitive information.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This can affect your business. Make sure to call this API within the limit.
 *
 * @param request DescribePackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackagesResponse
 */
DescribePackagesResponse Client::describePackagesWithOptions(const DescribePackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
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
 * @summary Retrieves information about MaxCompute packages authorized for scanning, including package names, owner accounts, and risk levels.
 *
 * @description This API is typically used to query a list of MaxCompute packages. This helps you search for packages and obtain an overview of sensitive information.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This can affect your business. Make sure to call this API within the limit.
 *
 * @param request DescribePackagesRequest
 * @return DescribePackagesResponse
 */
DescribePackagesResponse Client::describePackages(const DescribePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackagesWithOptions(request, runtime);
}

/**
 * @summary Lists assets and their authorization status.
 *
 * @param request DescribeParentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentInstanceResponse
 */
DescribeParentInstanceResponse Client::describeParentInstanceWithOptions(const DescribeParentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthStatus()) {
    query["AuthStatus"] = request.getAuthStatus();
  }

  if (!!request.hasCheckStatus()) {
    query["CheckStatus"] = request.getCheckStatus();
  }

  if (!!request.hasClusterStatus()) {
    query["ClusterStatus"] = request.getClusterStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberAccount()) {
    query["MemberAccount"] = request.getMemberAccount();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
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
 * @summary Lists assets and their authorization status.
 *
 * @param request DescribeParentInstanceRequest
 * @return DescribeParentInstanceResponse
 */
DescribeParentInstanceResponse Client::describeParentInstance(const DescribeParentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentInstanceWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeRiskLevels operation to retrieve a list of risk levels for sensitive data.
 *
 * @description You can use this operation to retrieve a list of risk levels for sensitive data that are defined in the current template. This lets you view the number of rules that reference each risk level and the maximum risk level in the template.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeRiskLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskLevelsResponse
 */
DescribeRiskLevelsResponse Client::describeRiskLevelsWithOptions(const DescribeRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Call the DescribeRiskLevels operation to retrieve a list of risk levels for sensitive data.
 *
 * @description You can use this operation to retrieve a list of risk levels for sensitive data that are defined in the current template. This lets you view the number of rules that reference each risk level and the maximum risk level in the template.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeRiskLevelsRequest
 * @return DescribeRiskLevelsResponse
 */
DescribeRiskLevelsResponse Client::describeRiskLevels(const DescribeRiskLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskLevelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of sensitive data detection rules.
 *
 * @param request DescribeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRulesWithOptions(const DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasContentCategory()) {
    query["ContentCategory"] = request.getContentCategory();
  }

  if (!!request.hasCooperationChannel()) {
    query["CooperationChannel"] = request.getCooperationChannel();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasCustomType()) {
    query["CustomType"] = request.getCustomType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasKeywordCompatible()) {
    query["KeywordCompatible"] = request.getKeywordCompatible();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.getMatchType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSimplify()) {
    query["Simplify"] = request.getSimplify();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.getSupportForm();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.getWarnLevel();
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
 * @summary Queries a list of sensitive data detection rules.
 *
 * @param request DescribeRulesRequest
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRules(const DescribeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRulesWithOptions(request, runtime);
}

/**
 * @summary Queries tables in data assets, such as MaxCompute and RDS, that Data Security Center is authorized to access.
 *
 * @description You can call the DescribeTables operation to retrieve information about specific data asset tables. You can specify parameters such as search keywords and risk levels.
 * ## QPS limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If you exceed this limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a sustainable rate.
 *
 * @param request DescribeTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTablesWithOptions(const DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPackageId()) {
    query["PackageId"] = request.getPackageId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries tables in data assets, such as MaxCompute and RDS, that Data Security Center is authorized to access.
 *
 * @description You can call the DescribeTables operation to retrieve information about specific data asset tables. You can specify parameters such as search keywords and risk levels.
 * ## QPS limits
 * Each Alibaba Cloud account can call this operation up to 10 times per second. If you exceed this limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a sustainable rate.
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Lists all rules in an industry-specific template.
 *
 * @param request DescribeTemplateAllRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateAllRulesResponse
 */
DescribeTemplateAllRulesResponse Client::describeTemplateAllRulesWithOptions(const DescribeTemplateAllRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Lists all rules in an industry-specific template.
 *
 * @param request DescribeTemplateAllRulesRequest
 * @return DescribeTemplateAllRulesResponse
 */
DescribeTemplateAllRulesResponse Client::describeTemplateAllRules(const DescribeTemplateAllRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateAllRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a user account.
 *
 * @description Retrieves information about the current account, such as your usage of Data Security Center (DSC).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserStatusResponse
 */
DescribeUserStatusResponse Client::describeUserStatusWithOptions(const DescribeUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the status of a user account.
 *
 * @description Retrieves information about the current account, such as your usage of Data Security Center (DSC).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeUserStatusRequest
 * @return DescribeUserStatusResponse
 */
DescribeUserStatusResponse Client::describeUserStatus(const DescribeUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserStatusWithOptions(request, runtime);
}

/**
 * @summary You can call the DisableUserConfig operation to disable a user configuration. After a configuration is disabled, you can call the CreateConfig operation and specify the same Code parameter to restore the general anomaly alert configuration.
 *
 * @description This operation disables a user configuration based on the code of a configuration item in the general anomaly alert configuration module. This lets you promptly change the status of the user configuration.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. Throttling may impact your business. Plan your calls accordingly.
 *
 * @param request DisableUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserConfigResponse
 */
DisableUserConfigResponse Client::disableUserConfigWithOptions(const DisableUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary You can call the DisableUserConfig operation to disable a user configuration. After a configuration is disabled, you can call the CreateConfig operation and specify the same Code parameter to restore the general anomaly alert configuration.
 *
 * @description This operation disables a user configuration based on the code of a configuration item in the general anomaly alert configuration module. This lets you promptly change the status of the user configuration.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. Throttling may impact your business. Plan your calls accordingly.
 *
 * @param request DisableUserConfigRequest
 * @return DisableUserConfigResponse
 */
DisableUserConfigResponse Client::disableUserConfig(const DisableUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableUserConfigWithOptions(request, runtime);
}

/**
 * @summary You can call the ExecDatamask operation to dynamically mask data.
 *
 * @param request ExecDatamaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecDatamaskResponse
 */
ExecDatamaskResponse Client::execDatamaskWithOptions(const ExecDatamaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary You can call the ExecDatamask operation to dynamically mask data.
 *
 * @param request ExecDatamaskRequest
 * @return ExecDatamaskResponse
 */
ExecDatamaskResponse Client::execDatamask(const ExecDatamaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execDatamaskWithOptions(request, runtime);
}

/**
 * @summary Triggers a data masking task.
 *
 * @param request ManualTriggerMaskingProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualTriggerMaskingProcessResponse
 */
ManualTriggerMaskingProcessResponse Client::manualTriggerMaskingProcessWithOptions(const ManualTriggerMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Triggers a data masking task.
 *
 * @param request ManualTriggerMaskingProcessRequest
 * @return ManualTriggerMaskingProcessResponse
 */
ManualTriggerMaskingProcessResponse Client::manualTriggerMaskingProcess(const ManualTriggerMaskingProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualTriggerMaskingProcessWithOptions(request, runtime);
}

/**
 * @summary Use the MaskOssImage operation to mask images stored as objects.
 *
 * @description **Prerequisites**
 * To use this operation, you must have an image masking quota. Each call deducts one unit from your quota.
 * **QPS limit**
 * The QPS limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. To prevent service disruptions, operate within this limit.
 * **Usage notes**
 * After masking is complete, the system stores the masked image in the aliyun_dsc_desensitization folder within the source bucket.
 * For example, an image at exampledir/test.png in a bucket is saved as aliyun_dsc_desensitization/exampledir/test.png after masking.
 * For more information, see https\\://help.aliyun.com/zh/dsc/data-security-center/user-guide/picture-desensitization
 *
 * @param request MaskOssImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MaskOssImageResponse
 */
MaskOssImageResponse Client::maskOssImageWithOptions(const MaskOssImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasIsAlwaysUpload()) {
    query["IsAlwaysUpload"] = request.getIsAlwaysUpload();
  }

  if (!!request.hasIsCoverObject()) {
    query["IsCoverObject"] = request.getIsCoverObject();
  }

  if (!!request.hasIsSupportRestore()) {
    query["IsSupportRestore"] = request.getIsSupportRestore();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaskRuleIdList()) {
    query["MaskRuleIdList"] = request.getMaskRuleIdList();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.getObjectKey();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MaskOssImage"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MaskOssImageResponse>();
}

/**
 * @summary Use the MaskOssImage operation to mask images stored as objects.
 *
 * @description **Prerequisites**
 * To use this operation, you must have an image masking quota. Each call deducts one unit from your quota.
 * **QPS limit**
 * The QPS limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. To prevent service disruptions, operate within this limit.
 * **Usage notes**
 * After masking is complete, the system stores the masked image in the aliyun_dsc_desensitization folder within the source bucket.
 * For example, an image at exampledir/test.png in a bucket is saved as aliyun_dsc_desensitization/exampledir/test.png after masking.
 * For more information, see https\\://help.aliyun.com/zh/dsc/data-security-center/user-guide/picture-desensitization
 *
 * @param request MaskOssImageRequest
 * @return MaskOssImageResponse
 */
MaskOssImageResponse Client::maskOssImage(const MaskOssImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return maskOssImageWithOptions(request, runtime);
}

/**
 * @summary You can call ModifyDataLimit to modify the configuration items of a connection authorization in Data Security Center (DSC).
 *
 * @param request ModifyDataLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataLimitResponse
 */
ModifyDataLimitResponse Client::modifyDataLimitWithOptions(const ModifyDataLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasAutoScan()) {
    query["AutoScan"] = request.getAutoScan();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLogStoreDay()) {
    query["LogStoreDay"] = request.getLogStoreDay();
  }

  if (!!request.hasModifyPassword()) {
    query["ModifyPassword"] = request.getModifyPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSamplingSize()) {
    query["SamplingSize"] = request.getSamplingSize();
  }

  if (!!request.hasSecurityGroupIdList()) {
    query["SecurityGroupIdList"] = request.getSecurityGroupIdList();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVSwitchIdList()) {
    query["VSwitchIdList"] = request.getVSwitchIdList();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary You can call ModifyDataLimit to modify the configuration items of a connection authorization in Data Security Center (DSC).
 *
 * @param request ModifyDataLimitRequest
 * @return ModifyDataLimitResponse
 */
ModifyDataLimitResponse Client::modifyDataLimit(const ModifyDataLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataLimitWithOptions(request, runtime);
}

/**
 * @summary Modifies the rules that define threat levels for sensitive data. This includes the default threat level for unidentified data and the threat levels for data that is classified as sensitive.
 *
 * @description This API modifies the rules that define threat levels for sensitive data to help with threat level planning.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. Throttling can impact your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request ModifyDefaultLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultLevelResponse
 */
ModifyDefaultLevelResponse Client::modifyDefaultLevelWithOptions(const ModifyDefaultLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultId()) {
    query["DefaultId"] = request.getDefaultId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSensitiveIds()) {
    query["SensitiveIds"] = request.getSensitiveIds();
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
 * @summary Modifies the rules that define threat levels for sensitive data. This includes the default threat level for unidentified data and the threat levels for data that is classified as sensitive.
 *
 * @description This API modifies the rules that define threat levels for sensitive data to help with threat level planning.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. Throttling can impact your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request ModifyDefaultLevelRequest
 * @return ModifyDefaultLevelResponse
 */
ModifyDefaultLevelResponse Client::modifyDefaultLevel(const ModifyDefaultLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultLevelWithOptions(request, runtime);
}

/**
 * @summary Handles anomalous activities.
 *
 * @description This API operation is typically used to handle alerts for data breach threats, helping you protect your data assets promptly.
 * ## QPS limits
 * This API operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend calling the API operation at a reasonable rate.
 *
 * @param request ModifyEventStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatusWithOptions(const ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBacked()) {
    query["Backed"] = request.getBacked();
  }

  if (!!request.hasDealReason()) {
    query["DealReason"] = request.getDealReason();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Handles anomalous activities.
 *
 * @description This API operation is typically used to handle alerts for data breach threats, helping you protect your data assets promptly.
 * ## QPS limits
 * This API operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend calling the API operation at a reasonable rate.
 *
 * @param request ModifyEventStatusRequest
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatus(const ModifyEventStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventStatusWithOptions(request, runtime);
}

/**
 * @summary This operation enables anomalous activity detection for subtypes.
 *
 * @param request ModifyEventTypeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventTypeStatusResponse
 */
ModifyEventTypeStatusResponse Client::modifyEventTypeStatusWithOptions(const ModifyEventTypeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSubTypeIds()) {
    query["SubTypeIds"] = request.getSubTypeIds();
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
 * @summary This operation enables anomalous activity detection for subtypes.
 *
 * @param request ModifyEventTypeStatusRequest
 * @return ModifyEventTypeStatusResponse
 */
ModifyEventTypeStatusResponse Client::modifyEventTypeStatus(const ModifyEventTypeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventTypeStatusWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyReportTaskStatus operation to enable or disable report tasks.
 *
 * @description After you activate Data Security Center (DSC), report tasks are enabled by default. If you disable report tasks, Report Center, Cloud-native Data Audit Overview, and Data Security Lab will not generate new statistical data. Existing data is not affected.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request ModifyReportTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReportTaskStatusResponse
 */
ModifyReportTaskStatusResponse Client::modifyReportTaskStatusWithOptions(const ModifyReportTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasReportTaskStatus()) {
    query["ReportTaskStatus"] = request.getReportTaskStatus();
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
 * @summary You can call the ModifyReportTaskStatus operation to enable or disable report tasks.
 *
 * @description After you activate Data Security Center (DSC), report tasks are enabled by default. If you disable report tasks, Report Center, Cloud-native Data Audit Overview, and Data Security Lab will not generate new statistical data. Existing data is not affected.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
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
 * @description You must specify the rule name, rule ID, and rule content.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRuleWithOptions(const ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.getMatchType();
  }

  if (!!request.hasModelRuleIds()) {
    query["ModelRuleIds"] = request.getModelRuleIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSupportForm()) {
    query["SupportForm"] = request.getSupportForm();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  if (!!request.hasWarnLevel()) {
    query["WarnLevel"] = request.getWarnLevel();
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
 * @description You must specify the rule name, rule ID, and rule content.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyRuleRequest
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRule(const ModifyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleWithOptions(request, runtime);
}

/**
 * @summary Enables or disables sensitive data detection rules.
 *
 * @param request ModifyRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatusWithOptions(const ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Enables or disables sensitive data detection rules.
 *
 * @param request ModifyRuleStatusRequest
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatus(const ModifyRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleStatusWithOptions(request, runtime);
}

/**
 * @summary You can call the RestoreOssImage operation to restore desensitized images.
 *
 * @description You can use RestoreOssImage to retrieve the original images that were processed by the MaskOssImage operation if the IsAlwaysUpload parameter is set to `true`.
 * For example, the image `aliyun_dsc_desensitization/exampledir/test.png` in a bucket is restored and saved as `aliyun_dsc_original/exampledir/test.png`.
 *
 * @param request RestoreOssImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreOssImageResponse
 */
RestoreOssImageResponse Client::restoreOssImageWithOptions(const RestoreOssImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.getBucket();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.getObjectKey();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTargetObjectKey()) {
    query["TargetObjectKey"] = request.getTargetObjectKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreOssImage"},
    {"version" , "2019-01-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreOssImageResponse>();
}

/**
 * @summary You can call the RestoreOssImage operation to restore desensitized images.
 *
 * @description You can use RestoreOssImage to retrieve the original images that were processed by the MaskOssImage operation if the IsAlwaysUpload parameter is set to `true`.
 * For example, the image `aliyun_dsc_desensitization/exampledir/test.png` in a bucket is restored and saved as `aliyun_dsc_original/exampledir/test.png`.
 *
 * @param request RestoreOssImageRequest
 * @return RestoreOssImageResponse
 */
RestoreOssImageResponse Client::restoreOssImage(const RestoreOssImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreOssImageWithOptions(request, runtime);
}

/**
 * @summary The ScanOssObjectV1 operation creates a scan task to detect sensitive data in a specified object.
 *
 * @description ### Prerequisites
 * You must authorize and connect to the specified bucket before you call this operation. If the bucket is not authorized, the API call returns the bucket_not_authorized error code.
 * ### QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call the operation at a reasonable rate.
 * ### Usage notes
 * You can use the returned task ID to call the DescribeIdentifyTaskStatus operation to check the running status of the task.
 * After the task is complete, call the DescribeOssObjectDetailV2 operation and provide the BucketName, ServiceRegionId, and ObjectKey to view the sensitive data detection results for the object.
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
    request.setObjectKeyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectKeyList(), "ObjectKeyList", "json"));
  }

  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectKeyListShrink()) {
    query["ObjectKeyList"] = request.getObjectKeyListShrink();
  }

  if (!!request.hasServiceRegionId()) {
    query["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary The ScanOssObjectV1 operation creates a scan task to detect sensitive data in a specified object.
 *
 * @description ### Prerequisites
 * You must authorize and connect to the specified bucket before you call this operation. If the bucket is not authorized, the API call returns the bucket_not_authorized error code.
 * ### QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call the operation at a reasonable rate.
 * ### Usage notes
 * You can use the returned task ID to call the DescribeIdentifyTaskStatus operation to check the running status of the task.
 * After the task is complete, call the DescribeOssObjectDetailV2 operation and provide the BucketName, ServiceRegionId, and ObjectKey to view the sensitive data detection results for the object.
 *
 * @param request ScanOssObjectV1Request
 * @return ScanOssObjectV1Response
 */
ScanOssObjectV1Response Client::scanOssObjectV1(const ScanOssObjectV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scanOssObjectV1WithOptions(request, runtime);
}

/**
 * @summary You can call the StopMaskingProcess operation to stop a data masking task. You can call the ManualTriggerMaskingProcess operation to restart a stopped task using its unique resource ID.
 *
 * @description This operation stops a running data masking task. For example, you can call this operation if you no longer need to mask data for a previously configured task.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Ensure that you call this operation within the specified limit.
 *
 * @param request StopMaskingProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMaskingProcessResponse
 */
StopMaskingProcessResponse Client::stopMaskingProcessWithOptions(const StopMaskingProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary You can call the StopMaskingProcess operation to stop a data masking task. You can call the ManualTriggerMaskingProcess operation to restart a stopped task using its unique resource ID.
 *
 * @description This operation stops a running data masking task. For example, you can call this operation if you no longer need to mask data for a previously configured task.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are throttled. This may affect your business. Ensure that you call this operation within the specified limit.
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