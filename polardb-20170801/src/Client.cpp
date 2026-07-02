#include <darabonba/Core.hpp>
#include <alibabacloud/Polardb20170801.hpp>
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
using namespace AlibabaCloud::Polardb20170801::Models;
namespace AlibabaCloud
{
namespace Polardb20170801
{

AlibabaCloud::Polardb20170801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "polardb.aliyuncs.com"},
    {"cn-beijing" , "polardb.aliyuncs.com"},
    {"cn-wulanchabu" , "polardb.aliyuncs.com"},
    {"cn-hangzhou" , "polardb.aliyuncs.com"},
    {"cn-shanghai" , "polardb.aliyuncs.com"},
    {"cn-heyuan" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "polardb.aliyuncs.com"},
    {"ap-northeast-2-pop" , "polardb.aliyuncs.com"},
    {"cn-beijing-finance-1" , "polardb.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "polardb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "polardb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "polardb.aliyuncs.com"},
    {"cn-edge-1" , "polardb.aliyuncs.com"},
    {"cn-fujian" , "polardb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "polardb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "polardb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "polardb.aliyuncs.com"},
    {"cn-qingdao-nebula" , "polardb.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "polardb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "polardb.aliyuncs.com"},
    {"cn-shanghai-inner" , "polardb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "polardb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "polardb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "polardb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "polardb.aliyuncs.com"},
    {"cn-wuhan" , "polardb.aliyuncs.com"},
    {"cn-yushanfang" , "polardb.aliyuncs.com"},
    {"cn-zhangbei" , "polardb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "polardb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "polardb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "polardb.aliyuncs.com"},
    {"eu-west-1-oxs" , "polardb.aliyuncs.com"},
    {"rus-west-1-pop" , "polardb.aliyuncs.com"},
    {"us-west-1" , "polardb.us-west-1.aliyuncs.com"},
    {"us-east-1" , "polardb.us-east-1.aliyuncs.com"},
    {"na-south-1" , "polardb.na-south-1.aliyuncs.com"},
    {"me-east-1" , "polardb.me-east-1.aliyuncs.com"},
    {"eu-west-1" , "polardb.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "polardb.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "polardb.cn-zhangjiakou.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "polardb.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "polardb.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "polardb.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-huhehaote" , "polardb.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "polardb.cn-hongkong.aliyuncs.com"},
    {"cn-guangzhou" , "polardb.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "polardb.cn-chengdu.aliyuncs.com"},
    {"ap-southeast-7" , "polardb.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "polardb.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "polardb.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "polardb.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "polardb.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "polardb.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "polardb.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "polardb.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "polardb.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("polardb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Aborts an upgrade or migration task.
 *
 * @description - Aborts an upgrade or migration task.
 * > Before you call this operation, create an upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request AbortDBClusterMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortDBClusterMigrationResponse
 */
AbortDBClusterMigrationResponse Client::abortDBClusterMigrationWithOptions(const AbortDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortDBClusterMigration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortDBClusterMigrationResponse>();
}

/**
 * @summary Aborts an upgrade or migration task.
 *
 * @description - Aborts an upgrade or migration task.
 * > Before you call this operation, create an upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request AbortDBClusterMigrationRequest
 * @return AbortDBClusterMigrationResponse
 */
AbortDBClusterMigrationResponse Client::abortDBClusterMigration(const AbortDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to a role.
 *
 * @param request AddEncryptionDBRolePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEncryptionDBRolePrivilegeResponse
 */
AddEncryptionDBRolePrivilegeResponse Client::addEncryptionDBRolePrivilegeWithOptions(const AddEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRolePrivilegeConfig()) {
    query["RolePrivilegeConfig"] = request.getRolePrivilegeConfig();
  }

  if (!!request.hasRolePrivilegeName()) {
    query["RolePrivilegeName"] = request.getRolePrivilegeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEncryptionDBRolePrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEncryptionDBRolePrivilegeResponse>();
}

/**
 * @summary Grants permissions to a role.
 *
 * @param request AddEncryptionDBRolePrivilegeRequest
 * @return AddEncryptionDBRolePrivilegeResponse
 */
AddEncryptionDBRolePrivilegeResponse Client::addEncryptionDBRolePrivilege(const AddEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Adds SQL firewall rules.
 *
 * @param request AddFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFirewallRulesResponse
 */
AddFirewallRulesResponse Client::addFirewallRulesWithOptions(const AddFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFirewallRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFirewallRulesResponse>();
}

/**
 * @summary Adds SQL firewall rules.
 *
 * @param request AddFirewallRulesRequest
 * @return AddFirewallRulesResponse
 */
AddFirewallRulesResponse Client::addFirewallRules(const AddFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Adds an MCP server to a specified PolarClaw application.
 *
 * @description ## Description
 * - The `ApplicationId` and `ServerName` parameters are required.
 * - The `ApplicationId` parameter specifies the application ID.
 * - The `ServerName` parameter specifies the MCP server name to add.
 * - A successful response returns the request ID, a message, a status code, the application ID, and the server name.
 * - If the request fails, the API may return a 500 error code with a detailed error message.
 *
 * @param tmpReq AddPolarClawMCPServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPolarClawMCPServerResponse
 */
AddPolarClawMCPServerResponse Client::addPolarClawMCPServerWithOptions(const AddPolarClawMCPServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddPolarClawMCPServerShrinkRequest request = AddPolarClawMCPServerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerConfig()) {
    request.setServerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerConfig(), "ServerConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasServerConfigShrink()) {
    query["ServerConfig"] = request.getServerConfigShrink();
  }

  if (!!request.hasServerName()) {
    query["ServerName"] = request.getServerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPolarClawMCPServer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPolarClawMCPServerResponse>();
}

/**
 * @summary Adds an MCP server to a specified PolarClaw application.
 *
 * @description ## Description
 * - The `ApplicationId` and `ServerName` parameters are required.
 * - The `ApplicationId` parameter specifies the application ID.
 * - The `ServerName` parameter specifies the MCP server name to add.
 * - A successful response returns the request ID, a message, a status code, the application ID, and the server name.
 * - If the request fails, the API may return a 500 error code with a detailed error message.
 *
 * @param request AddPolarClawMCPServerRequest
 * @return AddPolarClawMCPServerResponse
 */
AddPolarClawMCPServerResponse Client::addPolarClawMCPServer(const AddPolarClawMCPServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPolarClawMCPServerWithOptions(request, runtime);
}

/**
 * @summary Adds a transparent acceleration path.
 *
 * @param request AddPolarFsPathMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPolarFsPathMappingResponse
 */
AddPolarFsPathMappingResponse Client::addPolarFsPathMappingWithOptions(const AddPolarFsPathMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomBucketPathList()) {
    query["CustomBucketPathList"] = request.getCustomBucketPathList();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPolarFsPathMapping"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPolarFsPathMappingResponse>();
}

/**
 * @summary Adds a transparent acceleration path.
 *
 * @param request AddPolarFsPathMappingRequest
 * @return AddPolarFsPathMappingResponse
 */
AddPolarFsPathMappingResponse Client::addPolarFsPathMapping(const AddPolarFsPathMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPolarFsPathMappingWithOptions(request, runtime);
}

/**
 * @summary Adds a new directory quota rule to a Polarlakebase instance.
 *
 * @description ## Request description
 * - This operation adds a new path policy—a directory quota rule—to a specified Polarlakebase instance.
 * - The `Quotas` parameter is a list. Each element represents a new quota rule. You can add up to 11 rules in a single request.
 * - Each rule must include the `Name` and `Include` fields. Other fields, such as `Description` and `Exclude`, are optional.
 * - To define the quota limit, specify at least one of the following parameters: `SizeLimit`, `FileCountLimit`, `AccessTTL`, or `ChangeTTL`.
 * - The `Priority` field specifies the rule priority. A larger value indicates higher priority. The default value is 0.
 * - The `Enabled` field determines whether the rule takes effect immediately. The default value is true.
 *
 * @param request AddPolarFsQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPolarFsQuotaResponse
 */
AddPolarFsQuotaResponse Client::addPolarFsQuotaWithOptions(const AddPolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasQuotas()) {
    query["Quotas"] = request.getQuotas();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPolarFsQuota"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPolarFsQuotaResponse>();
}

/**
 * @summary Adds a new directory quota rule to a Polarlakebase instance.
 *
 * @description ## Request description
 * - This operation adds a new path policy—a directory quota rule—to a specified Polarlakebase instance.
 * - The `Quotas` parameter is a list. Each element represents a new quota rule. You can add up to 11 rules in a single request.
 * - Each rule must include the `Name` and `Include` fields. Other fields, such as `Description` and `Exclude`, are optional.
 * - To define the quota limit, specify at least one of the following parameters: `SizeLimit`, `FileCountLimit`, `AccessTTL`, or `ChangeTTL`.
 * - The `Priority` field specifies the rule priority. A larger value indicates higher priority. The default value is 0.
 * - The `Enabled` field determines whether the rule takes effect immediately. The default value is true.
 *
 * @param request AddPolarFsQuotaRequest
 * @return AddPolarFsQuotaResponse
 */
AddPolarFsQuotaResponse Client::addPolarFsQuota(const AddPolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary Adds SQL throttling rules.
 *
 * @param request AddSQLRateLimitingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSQLRateLimitingRulesResponse
 */
AddSQLRateLimitingRulesResponse Client::addSQLRateLimitingRulesWithOptions(const AddSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSQLRateLimitingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSQLRateLimitingRulesResponse>();
}

/**
 * @summary Adds SQL throttling rules.
 *
 * @param request AddSQLRateLimitingRulesRequest
 * @return AddSQLRateLimitingRulesResponse
 */
AddSQLRateLimitingRulesResponse Client::addSQLRateLimitingRules(const AddSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Applies prompts to an application instance.
 *
 * @description ## Request
 * - Applies prompts to a specified application instance.
 *
 * @param tmpReq ApplyApplicationPromptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyApplicationPromptsResponse
 */
ApplyApplicationPromptsResponse Client::applyApplicationPromptsWithOptions(const ApplyApplicationPromptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyApplicationPromptsShrinkRequest request = ApplyApplicationPromptsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDisabledPromptIds()) {
    request.setDisabledPromptIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDisabledPromptIds(), "DisabledPromptIds", "json"));
  }

  if (!!tmpReq.hasEnabledPromptIds()) {
    request.setEnabledPromptIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnabledPromptIds(), "EnabledPromptIds", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDisabledPromptIdsShrink()) {
    query["DisabledPromptIds"] = request.getDisabledPromptIdsShrink();
  }

  if (!!request.hasEnabledPromptIdsShrink()) {
    query["EnabledPromptIds"] = request.getEnabledPromptIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyApplicationPrompts"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyApplicationPromptsResponse>();
}

/**
 * @summary Applies prompts to an application instance.
 *
 * @description ## Request
 * - Applies prompts to a specified application instance.
 *
 * @param request ApplyApplicationPromptsRequest
 * @return ApplyApplicationPromptsResponse
 */
ApplyApplicationPromptsResponse Client::applyApplicationPrompts(const ApplyApplicationPromptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyApplicationPromptsWithOptions(request, runtime);
}

/**
 * @summary Approves a PolarClaw device pairing.
 *
 * @param request ApprovePolarClawDevicePairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApprovePolarClawDevicePairResponse
 */
ApprovePolarClawDevicePairResponse Client::approvePolarClawDevicePairWithOptions(const ApprovePolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPairRequestId()) {
    query["PairRequestId"] = request.getPairRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApprovePolarClawDevicePair"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApprovePolarClawDevicePairResponse>();
}

/**
 * @summary Approves a PolarClaw device pairing.
 *
 * @param request ApprovePolarClawDevicePairRequest
 * @return ApprovePolarClawDevicePairResponse
 */
ApprovePolarClawDevicePairResponse Client::approvePolarClawDevicePair(const ApprovePolarClawDevicePairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approvePolarClawDevicePairWithOptions(request, runtime);
}

/**
 * @summary Attaches a specified PolarLakeBase cold-storage instance to a PolarDB application.
 *
 * @param request AttachApplicationPolarFSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachApplicationPolarFSResponse
 */
AttachApplicationPolarFSResponse Client::attachApplicationPolarFSWithOptions(const AttachApplicationPolarFSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPolarFSAccessKeyId()) {
    query["PolarFSAccessKeyId"] = request.getPolarFSAccessKeyId();
  }

  if (!!request.hasPolarFSAccessKeySecret()) {
    query["PolarFSAccessKeySecret"] = request.getPolarFSAccessKeySecret();
  }

  if (!!request.hasPolarFSInstanceId()) {
    query["PolarFSInstanceId"] = request.getPolarFSInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachApplicationPolarFS"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachApplicationPolarFSResponse>();
}

/**
 * @summary Attaches a specified PolarLakeBase cold-storage instance to a PolarDB application.
 *
 * @param request AttachApplicationPolarFSRequest
 * @return AttachApplicationPolarFSResponse
 */
AttachApplicationPolarFSResponse Client::attachApplicationPolarFS(const AttachApplicationPolarFSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachApplicationPolarFSWithOptions(request, runtime);
}

/**
 * @summary Binds a PolarClaw Agent to a channel.
 *
 * @description ## Request
 * This API associates an agent from a PolarClaw application with a communication channel. You specify the application with `ApplicationId`, the agent with `AgentId`, and the channel with `Channel`. You can optionally specify an account ID for the channel with `ChannelAccountId`.
 *
 * @param request BindPolarClawAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPolarClawAgentResponse
 */
BindPolarClawAgentResponse Client::bindPolarClawAgentWithOptions(const BindPolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasChannelAccountId()) {
    query["ChannelAccountId"] = request.getChannelAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindPolarClawAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPolarClawAgentResponse>();
}

/**
 * @summary Binds a PolarClaw Agent to a channel.
 *
 * @description ## Request
 * This API associates an agent from a PolarClaw application with a communication channel. You specify the application with `ApplicationId`, the agent with `AgentId`, and the channel with `Channel`. You can optionally specify an account ID for the channel with `ChannelAccountId`.
 *
 * @param request BindPolarClawAgentRequest
 * @return BindPolarClawAgentResponse
 */
BindPolarClawAgentResponse Client::bindPolarClawAgent(const BindPolarClawAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPolarClawAgentWithOptions(request, runtime);
}

/**
 * @summary Cancels O\\\\\\&M events at a time.
 *
 * @param request CancelActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasksWithOptions(const CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelActiveOperationTasksResponse>();
}

/**
 * @summary Cancels O\\\\\\&M events at a time.
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Cancels an auto triggered task policy.
 *
 * @param request CancelCronJobPolicyServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCronJobPolicyServerlessResponse
 */
CancelCronJobPolicyServerlessResponse Client::cancelCronJobPolicyServerlessWithOptions(const CancelCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCronJobPolicyServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCronJobPolicyServerlessResponse>();
}

/**
 * @summary Cancels an auto triggered task policy.
 *
 * @param request CancelCronJobPolicyServerlessRequest
 * @return CancelCronJobPolicyServerlessResponse
 */
CancelCronJobPolicyServerlessResponse Client::cancelCronJobPolicyServerless(const CancelCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary Deletes quota rules for one or more file paths within a specified Polarlakebase instance.
 *
 * @description ## Request description
 * - The `PolarFsInstanceId` parameter is required. It specifies the Polarlakebase instance for the operation.
 * - The `FilePathIds` parameter is required. It accepts a string containing the IDs of the file paths for which you want to delete quota rules. Ensure that each ID is valid and belongs to the specified Polarlakebase instance.
 * - A single API call can delete quotas for multiple file paths. However, limit the number of paths in a single request to avoid performance issues.
 *
 * @param request CancelPolarFsFileQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPolarFsFileQuotaResponse
 */
CancelPolarFsFileQuotaResponse Client::cancelPolarFsFileQuotaWithOptions(const CancelPolarFsFileQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFilePathIds()) {
    query["FilePathIds"] = request.getFilePathIds();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPolarFsFileQuota"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPolarFsFileQuotaResponse>();
}

/**
 * @summary Deletes quota rules for one or more file paths within a specified Polarlakebase instance.
 *
 * @description ## Request description
 * - The `PolarFsInstanceId` parameter is required. It specifies the Polarlakebase instance for the operation.
 * - The `FilePathIds` parameter is required. It accepts a string containing the IDs of the file paths for which you want to delete quota rules. Ensure that each ID is valid and belongs to the specified Polarlakebase instance.
 * - A single API call can delete quotas for multiple file paths. However, limit the number of paths in a single request to avoid performance issues.
 *
 * @param request CancelPolarFsFileQuotaRequest
 * @return CancelPolarFsFileQuotaResponse
 */
CancelPolarFsFileQuotaResponse Client::cancelPolarFsFileQuota(const CancelPolarFsFileQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPolarFsFileQuotaWithOptions(request, runtime);
}

/**
 * @summary Cancels scheduled tasks that have not started.
 *
 * @param request CancelScheduleTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelScheduleTasksResponse
 */
CancelScheduleTasksResponse Client::cancelScheduleTasksWithOptions(const CancelScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelScheduleTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelScheduleTasksResponse>();
}

/**
 * @summary Cancels scheduled tasks that have not started.
 *
 * @param request CancelScheduleTasksRequest
 * @return CancelScheduleTasksResponse
 */
CancelScheduleTasksResponse Client::cancelScheduleTasks(const CancelScheduleTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelScheduleTasksWithOptions(request, runtime);
}

/**
 * @summary Checks whether an account name is valid or unique in a cluster.
 *
 * @param request CheckAccountNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountNameResponse
 */
CheckAccountNameResponse Client::checkAccountNameWithOptions(const CheckAccountNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountName"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountNameResponse>();
}

/**
 * @summary Checks whether an account name is valid or unique in a cluster.
 *
 * @param request CheckAccountNameRequest
 * @return CheckAccountNameResponse
 */
CheckAccountNameResponse Client::checkAccountName(const CheckAccountNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountNameWithOptions(request, runtime);
}

/**
 * @summary Checks a PolarDB account name.
 *
 * @param request CheckAccountNameZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountNameZonalResponse
 */
CheckAccountNameZonalResponse Client::checkAccountNameZonalWithOptions(const CheckAccountNameZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountNameZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountNameZonalResponse>();
}

/**
 * @summary Checks a PolarDB account name.
 *
 * @param request CheckAccountNameZonalRequest
 * @return CheckAccountNameZonalResponse
 */
CheckAccountNameZonalResponse Client::checkAccountNameZonal(const CheckAccountNameZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountNameZonalWithOptions(request, runtime);
}

/**
 * @summary Checks the connection string of a cluster.
 *
 * @param request CheckConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckConnectionStringResponse
 */
CheckConnectionStringResponse Client::checkConnectionStringWithOptions(const CheckConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckConnectionString"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckConnectionStringResponse>();
}

/**
 * @summary Checks the connection string of a cluster.
 *
 * @param request CheckConnectionStringRequest
 * @return CheckConnectionStringResponse
 */
CheckConnectionStringResponse Client::checkConnectionString(const CheckConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Checks whether a database name is valid or if a database with the same name already exists in the current cluster.
 *
 * @param request CheckDBNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDBNameResponse
 */
CheckDBNameResponse Client::checkDBNameWithOptions(const CheckDBNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDBName"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDBNameResponse>();
}

/**
 * @summary Checks whether a database name is valid or if a database with the same name already exists in the current cluster.
 *
 * @param request CheckDBNameRequest
 * @return CheckDBNameResponse
 */
CheckDBNameResponse Client::checkDBName(const CheckDBNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDBNameWithOptions(request, runtime);
}

/**
 * @summary Checks the name of a database in an edge cluster for PolarDB on ENS.
 *
 * @param request CheckDBNameZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDBNameZonalResponse
 */
CheckDBNameZonalResponse Client::checkDBNameZonalWithOptions(const CheckDBNameZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDBNameZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDBNameZonalResponse>();
}

/**
 * @summary Checks the name of a database in an edge cluster for PolarDB on ENS.
 *
 * @param request CheckDBNameZonalRequest
 * @return CheckDBNameZonalResponse
 */
CheckDBNameZonalResponse Client::checkDBNameZonal(const CheckDBNameZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDBNameZonalWithOptions(request, runtime);
}

/**
 * @summary Checks whether a user is authorized to use Key Management Service (KMS).
 *
 * @param request CheckKMSAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckKMSAuthorizedResponse
 */
CheckKMSAuthorizedResponse Client::checkKMSAuthorizedWithOptions(const CheckKMSAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTDERegion()) {
    query["TDERegion"] = request.getTDERegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckKMSAuthorized"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckKMSAuthorizedResponse>();
}

/**
 * @summary Checks whether a user is authorized to use Key Management Service (KMS).
 *
 * @param request CheckKMSAuthorizedRequest
 * @return CheckKMSAuthorizedResponse
 */
CheckKMSAuthorizedResponse Client::checkKMSAuthorized(const CheckKMSAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkKMSAuthorizedWithOptions(request, runtime);
}

/**
 * @summary Checks the consistency of quota settings in a PolarFS instance.
 *
 * @description ## Description
 * This operation verifies the consistency of quota configurations within a specified PolarFS instance. These configurations include storage capacity and inode limits on directory paths. If inconsistencies are found, the operation returns a list of the inconsistent paths and any related error information.
 * ### Usage notes
 * - Ensure that the `PolarFsInstanceId` parameter correctly identifies the target PolarFS instance.
 * - When the system detects quota inconsistencies, it returns `IsConsistent=false` and populates the `InconsistentPaths` array.
 * - If the request is successful and no inconsistencies are found, the `InconsistentPaths` array is empty and `IsConsistent` is set to `true`.
 * - For errors such as insufficient permissions or a non-existent resource, see the error codes for details.
 *
 * @param request CheckPolarFsQuotaConsistencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckPolarFsQuotaConsistencyResponse
 */
CheckPolarFsQuotaConsistencyResponse Client::checkPolarFsQuotaConsistencyWithOptions(const CheckPolarFsQuotaConsistencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableRepair()) {
    query["EnableRepair"] = request.getEnableRepair();
  }

  if (!!request.hasEnableStrictCalculate()) {
    query["EnableStrictCalculate"] = request.getEnableStrictCalculate();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckPolarFsQuotaConsistency"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckPolarFsQuotaConsistencyResponse>();
}

/**
 * @summary Checks the consistency of quota settings in a PolarFS instance.
 *
 * @description ## Description
 * This operation verifies the consistency of quota configurations within a specified PolarFS instance. These configurations include storage capacity and inode limits on directory paths. If inconsistencies are found, the operation returns a list of the inconsistent paths and any related error information.
 * ### Usage notes
 * - Ensure that the `PolarFsInstanceId` parameter correctly identifies the target PolarFS instance.
 * - When the system detects quota inconsistencies, it returns `IsConsistent=false` and populates the `InconsistentPaths` array.
 * - If the request is successful and no inconsistencies are found, the `InconsistentPaths` array is empty and `IsConsistent` is set to `true`.
 * - For errors such as insufficient permissions or a non-existent resource, see the error codes for details.
 *
 * @param request CheckPolarFsQuotaConsistencyRequest
 * @return CheckPolarFsQuotaConsistencyResponse
 */
CheckPolarFsQuotaConsistencyResponse Client::checkPolarFsQuotaConsistency(const CheckPolarFsQuotaConsistencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkPolarFsQuotaConsistencyWithOptions(request, runtime);
}

/**
 * @summary Checks whether a service-linked role has been created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRoleWithOptions(const CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleResponse>();
}

/**
 * @summary Checks whether a service-linked role has been created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Clones a snapshot of a file or folder for a Basic Edition instance.
 *
 * @description ## Request description
 * - `PolarFsInstanceId` is required. It specifies the PolarDB instance for the operation.
 *
 * @param request ClonePolarFsBasicSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClonePolarFsBasicSnapshotResponse
 */
ClonePolarFsBasicSnapshotResponse Client::clonePolarFsBasicSnapshotWithOptions(const ClonePolarFsBasicSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasSourcePath()) {
    query["SourcePath"] = request.getSourcePath();
  }

  if (!!request.hasTargetPath()) {
    query["TargetPath"] = request.getTargetPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClonePolarFsBasicSnapshot"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClonePolarFsBasicSnapshotResponse>();
}

/**
 * @summary Clones a snapshot of a file or folder for a Basic Edition instance.
 *
 * @description ## Request description
 * - `PolarFsInstanceId` is required. It specifies the PolarDB instance for the operation.
 *
 * @param request ClonePolarFsBasicSnapshotRequest
 * @return ClonePolarFsBasicSnapshotResponse
 */
ClonePolarFsBasicSnapshotResponse Client::clonePolarFsBasicSnapshot(const ClonePolarFsBasicSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clonePolarFsBasicSnapshotWithOptions(request, runtime);
}

/**
 * @summary Disables the PolarDB for AI feature.
 *
 * @param request CloseAITaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseAITaskResponse
 */
CloseAITaskResponse Client::closeAITaskWithOptions(const CloseAITaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseAITask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseAITaskResponse>();
}

/**
 * @summary Disables the PolarDB for AI feature.
 *
 * @param request CloseAITaskRequest
 * @return CloseAITaskResponse
 */
CloseAITaskResponse Client::closeAITask(const CloseAITaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeAITaskWithOptions(request, runtime);
}

/**
 * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
 *
 * @description - Cancel the migration task before data migration.
 * - Perform the migration task after data migration.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html)Operation to create an upgrade task. Set the **CreationOption**Parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request CloseDBClusterMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseDBClusterMigrationResponse
 */
CloseDBClusterMigrationResponse Client::closeDBClusterMigrationWithOptions(const CloseDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinueEnableBinlog()) {
    query["ContinueEnableBinlog"] = request.getContinueEnableBinlog();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseDBClusterMigration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseDBClusterMigrationResponse>();
}

/**
 * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
 *
 * @description - Cancel the migration task before data migration.
 * - Perform the migration task after data migration.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html)Operation to create an upgrade task. Set the **CreationOption**Parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request CloseDBClusterMigrationRequest
 * @return CloseDBClusterMigrationResponse
 */
CloseDBClusterMigrationResponse Client::closeDBClusterMigration(const CloseDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary Continues the current migration or upgrade task.
 *
 * @param request ContinueDBClusterMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueDBClusterMigrationResponse
 */
ContinueDBClusterMigrationResponse Client::continueDBClusterMigrationWithOptions(const ContinueDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasForceSwitch()) {
    query["ForceSwitch"] = request.getForceSwitch();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinueDBClusterMigration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueDBClusterMigrationResponse>();
}

/**
 * @summary Continues the current migration or upgrade task.
 *
 * @param request ContinueDBClusterMigrationRequest
 * @return ContinueDBClusterMigrationResponse
 */
ContinueDBClusterMigrationResponse Client::continueDBClusterMigration(const ContinueDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to create an AI cluster.
 *
 * @param request CreateAIDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAIDBClusterResponse
 */
CreateAIDBClusterResponse Client::createAIDBClusterWithOptions(const CreateAIDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAckAdmin()) {
    query["AckAdmin"] = request.getAckAdmin();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.getExtension();
  }

  if (!!request.hasInferenceEngine()) {
    query["InferenceEngine"] = request.getInferenceEngine();
  }

  if (!!request.hasKubeClusterId()) {
    query["KubeClusterId"] = request.getKubeClusterId();
  }

  if (!!request.hasKubeConfig()) {
    query["KubeConfig"] = request.getKubeConfig();
  }

  if (!!request.hasKubeManagement()) {
    query["KubeManagement"] = request.getKubeManagement();
  }

  if (!!request.hasKubeType()) {
    query["KubeType"] = request.getKubeType();
  }

  if (!!request.hasKubernetesConfig()) {
    query["KubernetesConfig"] = request.getKubernetesConfig();
  }

  if (!!request.hasManagementMode()) {
    query["ManagementMode"] = request.getManagementMode();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasStorageSpace()) {
    query["StorageSpace"] = request.getStorageSpace();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTimeSlices()) {
    query["TimeSlices"] = request.getTimeSlices();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAIDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAIDBClusterResponse>();
}

/**
 * @summary This topic describes how to create an AI cluster.
 *
 * @param request CreateAIDBClusterRequest
 * @return CreateAIDBClusterResponse
 */
CreateAIDBClusterResponse Client::createAIDBCluster(const CreateAIDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAIDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateAIDBClusterDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAIDBClusterDatasetResponse
 */
CreateAIDBClusterDatasetResponse Client::createAIDBClusterDatasetWithOptions(const CreateAIDBClusterDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    query["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasImportMode()) {
    query["ImportMode"] = request.getImportMode();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrainMode()) {
    query["TrainMode"] = request.getTrainMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAIDBClusterDataset"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAIDBClusterDatasetResponse>();
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateAIDBClusterDatasetRequest
 * @return CreateAIDBClusterDatasetResponse
 */
CreateAIDBClusterDatasetResponse Client::createAIDBClusterDataset(const CreateAIDBClusterDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAIDBClusterDatasetWithOptions(request, runtime);
}

/**
 * @summary Creates a model operator instance.
 *
 * @param request CreateAIDBClusterTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAIDBClusterTaskResponse
 */
CreateAIDBClusterTaskResponse Client::createAIDBClusterTaskWithOptions(const CreateAIDBClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDatasetPath()) {
    query["DatasetPath"] = request.getDatasetPath();
  }

  if (!!request.hasEvalDatasetPath()) {
    query["EvalDatasetPath"] = request.getEvalDatasetPath();
  }

  if (!!request.hasKubeType()) {
    query["KubeType"] = request.getKubeType();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelSource()) {
    query["ModelSource"] = request.getModelSource();
  }

  if (!!request.hasModelType()) {
    query["ModelType"] = request.getModelType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRunningParameter()) {
    query["RunningParameter"] = request.getRunningParameter();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAIDBClusterTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAIDBClusterTaskResponse>();
}

/**
 * @summary Creates a model operator instance.
 *
 * @param request CreateAIDBClusterTaskRequest
 * @return CreateAIDBClusterTaskResponse
 */
CreateAIDBClusterTaskResponse Client::createAIDBClusterTask(const CreateAIDBClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAIDBClusterTaskWithOptions(request, runtime);
}

/**
 * @summary Creates AI nodes.
 *
 * @param request CreateAINodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAINodesResponse
 */
CreateAINodesResponse Client::createAINodesWithOptions(const CreateAINodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodes()) {
    query["DBNodes"] = request.getDBNodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAINodes"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAINodesResponse>();
}

/**
 * @summary Creates AI nodes.
 *
 * @param request CreateAINodesRequest
 * @return CreateAINodesResponse
 */
CreateAINodesResponse Client::createAINodes(const CreateAINodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAINodesWithOptions(request, runtime);
}

/**
 * @summary Creates a PolarDB database account.
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrivForAllDB()) {
    query["PrivForAllDB"] = request.getPrivForAllDB();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountResponse>();
}

/**
 * @summary Creates a PolarDB database account.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates an account for a PolarDB on ENS cluster.
 *
 * @param request CreateAccountZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountZonalResponse
 */
CreateAccountZonalResponse Client::createAccountZonalWithOptions(const CreateAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrivForAllDB()) {
    query["PrivForAllDB"] = request.getPrivForAllDB();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccountZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountZonalResponse>();
}

/**
 * @summary Creates an account for a PolarDB on ENS cluster.
 *
 * @param request CreateAccountZonalRequest
 * @return CreateAccountZonalResponse
 */
CreateAccountZonalResponse Client::createAccountZonal(const CreateAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountZonalWithOptions(request, runtime);
}

/**
 * @summary Generates activation codes for the lightweight version.
 *
 * @param request CreateActivationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateActivationCodeResponse
 */
CreateActivationCodeResponse Client::createActivationCodeWithOptions(const CreateActivationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.getAliyunOrderId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMacAddress()) {
    query["MacAddress"] = request.getMacAddress();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSystemIdentifier()) {
    query["SystemIdentifier"] = request.getSystemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateActivationCode"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateActivationCodeResponse>();
}

/**
 * @summary Generates activation codes for the lightweight version.
 *
 * @param request CreateActivationCodeRequest
 * @return CreateActivationCodeResponse
 */
CreateActivationCodeResponse Client::createActivationCode(const CreateActivationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createActivationCodeWithOptions(request, runtime);
}

/**
 * @summary Creates an AgenticDB branch.
 *
 * @param request CreateAgenticDBBranchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgenticDBBranchResponse
 */
CreateAgenticDBBranchResponse Client::createAgenticDBBranchWithOptions(const CreateAgenticDBBranchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasParentBranchId()) {
    query["ParentBranchId"] = request.getParentBranchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgenticDBBranch"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgenticDBBranchResponse>();
}

/**
 * @summary Creates an AgenticDB branch.
 *
 * @param request CreateAgenticDBBranchRequest
 * @return CreateAgenticDBBranchResponse
 */
CreateAgenticDBBranchResponse Client::createAgenticDBBranch(const CreateAgenticDBBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgenticDBBranchWithOptions(request, runtime);
}

/**
 * @summary Creates an AgenticDB project.
 *
 * @param request CreateAgenticDBProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgenticDBProjectResponse
 */
CreateAgenticDBProjectResponse Client::createAgenticDBProjectWithOptions(const CreateAgenticDBProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDefaultBranchName()) {
    query["DefaultBranchName"] = request.getDefaultBranchName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgenticDBProject"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgenticDBProjectResponse>();
}

/**
 * @summary Creates an AgenticDB project.
 *
 * @param request CreateAgenticDBProjectRequest
 * @return CreateAgenticDBProjectResponse
 */
CreateAgenticDBProjectResponse Client::createAgenticDBProject(const CreateAgenticDBProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgenticDBProjectWithOptions(request, runtime);
}

/**
 * @summary 创建 AgenticDB 租户 API Key
 *
 * @param request CreateAgenticDBTenantApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgenticDBTenantApiKeyResponse
 */
CreateAgenticDBTenantApiKeyResponse Client::createAgenticDBTenantApiKeyWithOptions(const CreateAgenticDBTenantApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantName()) {
    query["TenantName"] = request.getTenantName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgenticDBTenantApiKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgenticDBTenantApiKeyResponse>();
}

/**
 * @summary 创建 AgenticDB 租户 API Key
 *
 * @param request CreateAgenticDBTenantApiKeyRequest
 * @return CreateAgenticDBTenantApiKeyResponse
 */
CreateAgenticDBTenantApiKeyResponse Client::createAgenticDBTenantApiKey(const CreateAgenticDBTenantApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgenticDBTenantApiKeyWithOptions(request, runtime);
}

/**
 * @summary Creates an application attached to a PolarDB instance.
 *
 * @param tmpReq CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationShrinkRequest request = CreateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

  if (!!tmpReq.hasEndpoints()) {
    request.setEndpointsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndpoints(), "Endpoints", "json"));
  }

  if (!!tmpReq.hasKnowledgeApplicationSpec()) {
    request.setKnowledgeApplicationSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeApplicationSpec(), "KnowledgeApplicationSpec", "json"));
  }

  if (!!tmpReq.hasMemApplicationSpec()) {
    request.setMemApplicationSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemApplicationSpec(), "MemApplicationSpec", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasAIDBClusterId()) {
    query["AIDBClusterId"] = request.getAIDBClusterId();
  }

  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasAuthProvider()) {
    query["AuthProvider"] = request.getAuthProvider();
  }

  if (!!request.hasAuthProviderConfig()) {
    query["AuthProviderConfig"] = request.getAuthProviderConfig();
  }

  if (!!request.hasAutoAllocatePublicEip()) {
    query["AutoAllocatePublicEip"] = request.getAutoAllocatePublicEip();
  }

  if (!!request.hasAutoCreatePolarFs()) {
    query["AutoCreatePolarFs"] = request.getAutoCreatePolarFs();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasComponentsShrink()) {
    query["Components"] = request.getComponentsShrink();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointsShrink()) {
    query["Endpoints"] = request.getEndpointsShrink();
  }

  if (!!request.hasKnowledgeApplicationSpecShrink()) {
    query["KnowledgeApplicationSpec"] = request.getKnowledgeApplicationSpecShrink();
  }

  if (!!request.hasMemApplicationSpecShrink()) {
    query["MemApplicationSpec"] = request.getMemApplicationSpecShrink();
  }

  if (!!request.hasModelApi()) {
    query["ModelApi"] = request.getModelApi();
  }

  if (!!request.hasModelApiKey()) {
    query["ModelApiKey"] = request.getModelApiKey();
  }

  if (!!request.hasModelBaseUrl()) {
    query["ModelBaseUrl"] = request.getModelBaseUrl();
  }

  if (!!request.hasModelFrom()) {
    query["ModelFrom"] = request.getModelFrom();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPolarFSInstanceId()) {
    query["PolarFSInstanceId"] = request.getPolarFSInstanceId();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityIPArrayName()) {
    query["SecurityIPArrayName"] = request.getSecurityIPArrayName();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasSecurityIPType()) {
    query["SecurityIPType"] = request.getSecurityIPType();
  }

  if (!!request.hasSkillTemplateId()) {
    query["SkillTemplateId"] = request.getSkillTemplateId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application attached to a PolarDB instance.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a connection address for a specified application.
 *
 * @param request CreateApplicationEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationEndpointAddressResponse
 */
CreateApplicationEndpointAddressResponse Client::createApplicationEndpointAddressWithOptions(const CreateApplicationEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationEndpointAddress"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationEndpointAddressResponse>();
}

/**
 * @summary Creates a connection address for a specified application.
 *
 * @param request CreateApplicationEndpointAddressRequest
 * @return CreateApplicationEndpointAddressResponse
 */
CreateApplicationEndpointAddressResponse Client::createApplicationEndpointAddress(const CreateApplicationEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Creates a Prompt for an Application.
 *
 * @param request CreateApplicationPromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationPromptResponse
 */
CreateApplicationPromptResponse Client::createApplicationPromptWithOptions(const CreateApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPromptName()) {
    query["PromptName"] = request.getPromptName();
  }

  if (!!request.hasPromptType()) {
    query["PromptType"] = request.getPromptType();
  }

  if (!!request.hasPromptValue()) {
    query["PromptValue"] = request.getPromptValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationPrompt"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationPromptResponse>();
}

/**
 * @summary Creates a Prompt for an Application.
 *
 * @param request CreateApplicationPromptRequest
 * @return CreateApplicationPromptResponse
 */
CreateApplicationPromptResponse Client::createApplicationPrompt(const CreateApplicationPromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationPromptWithOptions(request, runtime);
}

/**
 * @summary Creates a full snapshot backup for a PolarDB cluster.
 *
 * @description > - Each cluster can have up to three manually created backups at a time.
 * >
 * > - If you receive the error message `Exceeding the daily backup times of this DB cluster`, this indicates that three manual backups already exist for your cluster. [Delete a backup](https://help.aliyun.com/document_detail/98101.html) before you call this operation again.
 * >
 * > - After you call this operation, a backup job is created in the background. The job may take a long time to complete if the data volume is large.
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupResponse>();
}

/**
 * @summary Creates a full snapshot backup for a PolarDB cluster.
 *
 * @description > - Each cluster can have up to three manually created backups at a time.
 * >
 * > - If you receive the error message `Exceeding the daily backup times of this DB cluster`, this indicates that three manual backups already exist for your cluster. [Delete a backup](https://help.aliyun.com/document_detail/98101.html) before you call this operation again.
 * >
 * > - After you call this operation, a backup job is created in the background. The job may take a long time to complete if the data volume is large.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates API keys in batches.
 *
 * @param request CreateBatchConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchConsumerResponse
 */
CreateBatchConsumerResponse Client::createBatchConsumerWithOptions(const CreateBatchConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConsumerGroupId()) {
    query["ConsumerGroupId"] = request.getConsumerGroupId();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBatchConsumer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchConsumerResponse>();
}

/**
 * @summary Creates API keys in batches.
 *
 * @param request CreateBatchConsumerRequest
 * @return CreateBatchConsumerResponse
 */
CreateBatchConsumerResponse Client::createBatchConsumer(const CreateBatchConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchConsumerWithOptions(request, runtime);
}

/**
 * @summary Creates a batch task.
 *
 * @param tmpReq CreateBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchTaskResponse
 */
CreateBatchTaskResponse Client::createBatchTaskWithOptions(const CreateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBatchTaskShrinkRequest request = CreateBatchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBatchTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchTaskResponse>();
}

/**
 * @summary Creates a batch task.
 *
 * @param request CreateBatchTaskRequest
 * @return CreateBatchTaskResponse
 */
CreateBatchTaskResponse Client::createBatchTask(const CreateBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a budget policy.
 *
 * @param request CreateBudgetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBudgetPolicyResponse
 */
CreateBudgetPolicyResponse Client::createBudgetPolicyWithOptions(const CreateBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertThresholdPct()) {
    query["AlertThresholdPct"] = request.getAlertThresholdPct();
  }

  if (!!request.hasBudgetDimensionRefId()) {
    query["BudgetDimensionRefId"] = request.getBudgetDimensionRefId();
  }

  if (!!request.hasBudgetPoints()) {
    query["BudgetPoints"] = request.getBudgetPoints();
  }

  if (!!request.hasBudgetType()) {
    query["BudgetType"] = request.getBudgetType();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetDayOfMonth()) {
    query["ResetDayOfMonth"] = request.getResetDayOfMonth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBudgetPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBudgetPolicyResponse>();
}

/**
 * @summary Creates a budget policy.
 *
 * @param request CreateBudgetPolicyRequest
 * @return CreateBudgetPolicyResponse
 */
CreateBudgetPolicyResponse Client::createBudgetPolicy(const CreateBudgetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBudgetPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a cold storage instance.
 *
 * @param request CreateColdStorageInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateColdStorageInstanceResponse
 */
CreateColdStorageInstanceResponse Client::createColdStorageInstanceWithOptions(const CreateColdStorageInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasColdStorageInstanceDescription()) {
    query["ColdStorageInstanceDescription"] = request.getColdStorageInstanceDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateColdStorageInstance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateColdStorageInstanceResponse>();
}

/**
 * @summary Creates a cold storage instance.
 *
 * @param request CreateColdStorageInstanceRequest
 * @return CreateColdStorageInstanceResponse
 */
CreateColdStorageInstanceResponse Client::createColdStorageInstance(const CreateColdStorageInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createColdStorageInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer.
 *
 * @param request CreateConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerResponse
 */
CreateConsumerResponse Client::createConsumerWithOptions(const CreateConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.getConsumerGroupName();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.getNickName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerResponse>();
}

/**
 * @summary Creates a consumer.
 *
 * @param request CreateConsumerRequest
 * @return CreateConsumerResponse
 */
CreateConsumerResponse Client::createConsumer(const CreateConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.getConsumerGroupName();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.getNickName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumerGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerGroupResponse>();
}

/**
 * @summary Creates a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroup(const CreateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a cost rule.
 *
 * @param request CreateCostRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCostRuleResponse
 */
CreateCostRuleResponse Client::createCostRuleWithOptions(const CreateCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheCostPointsPerMillion()) {
    query["CacheCostPointsPerMillion"] = request.getCacheCostPointsPerMillion();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasInputCostPointsPerMillion()) {
    query["InputCostPointsPerMillion"] = request.getInputCostPointsPerMillion();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.getModelServiceId();
  }

  if (!!request.hasOutputCostPointsPerMillion()) {
    query["OutputCostPointsPerMillion"] = request.getOutputCostPointsPerMillion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCostRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCostRuleResponse>();
}

/**
 * @summary Creates a cost rule.
 *
 * @param request CreateCostRuleRequest
 * @return CreateCostRuleResponse
 */
CreateCostRuleResponse Client::createCostRule(const CreateCostRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCostRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled task policy for a serverless cluster.
 *
 * @param request CreateCronJobPolicyServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCronJobPolicyServerlessResponse
 */
CreateCronJobPolicyServerlessResponse Client::createCronJobPolicyServerlessWithOptions(const CreateCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowShutDown()) {
    query["AllowShutDown"] = request.getAllowShutDown();
  }

  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.getScaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.getScaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.getScaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.getScaleRoNumMin();
  }

  if (!!request.hasSecondsUntilAutoPause()) {
    query["SecondsUntilAutoPause"] = request.getSecondsUntilAutoPause();
  }

  if (!!request.hasServerlessRuleCpuEnlargeThreshold()) {
    query["ServerlessRuleCpuEnlargeThreshold"] = request.getServerlessRuleCpuEnlargeThreshold();
  }

  if (!!request.hasServerlessRuleCpuShrinkThreshold()) {
    query["ServerlessRuleCpuShrinkThreshold"] = request.getServerlessRuleCpuShrinkThreshold();
  }

  if (!!request.hasServerlessRuleMode()) {
    query["ServerlessRuleMode"] = request.getServerlessRuleMode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCronJobPolicyServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCronJobPolicyServerlessResponse>();
}

/**
 * @summary Creates a scheduled task policy for a serverless cluster.
 *
 * @param request CreateCronJobPolicyServerlessRequest
 * @return CreateCronJobPolicyServerlessResponse
 */
CreateCronJobPolicyServerlessResponse Client::createCronJobPolicyServerless(const CreateCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary Creates a PolarDB cluster.
 *
 * @param request CreateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBClusterWithOptions(const CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticDbClusterDescription()) {
    query["AgenticDbClusterDescription"] = request.getAgenticDbClusterDescription();
  }

  if (!!request.hasAgenticDbClusterId()) {
    query["AgenticDbClusterId"] = request.getAgenticDbClusterId();
  }

  if (!!request.hasAgenticDbType()) {
    query["AgenticDbType"] = request.getAgenticDbType();
  }

  if (!!request.hasAllowShutDown()) {
    query["AllowShutDown"] = request.getAllowShutDown();
  }

  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloneDataPoint()) {
    query["CloneDataPoint"] = request.getCloneDataPoint();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasClusterNetworkType()) {
    query["ClusterNetworkType"] = request.getClusterNetworkType();
  }

  if (!!request.hasCreationCategory()) {
    query["CreationCategory"] = request.getCreationCategory();
  }

  if (!!request.hasCreationOption()) {
    query["CreationOption"] = request.getCreationOption();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBMinorVersion()) {
    query["DBMinorVersion"] = request.getDBMinorVersion();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasDBNodeNum()) {
    query["DBNodeNum"] = request.getDBNodeNum();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasDefaultTimeZone()) {
    query["DefaultTimeZone"] = request.getDefaultTimeZone();
  }

  if (!!request.hasEnsRegionId()) {
    query["EnsRegionId"] = request.getEnsRegionId();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasHotStandbyCluster()) {
    query["HotStandbyCluster"] = request.getHotStandbyCluster();
  }

  if (!!request.hasLoosePolarLogBin()) {
    query["LoosePolarLogBin"] = request.getLoosePolarLogBin();
  }

  if (!!request.hasLooseXEngine()) {
    query["LooseXEngine"] = request.getLooseXEngine();
  }

  if (!!request.hasLooseXEngineUseMemoryPct()) {
    query["LooseXEngineUseMemoryPct"] = request.getLooseXEngineUseMemoryPct();
  }

  if (!!request.hasLowerCaseTableNames()) {
    query["LowerCaseTableNames"] = request.getLowerCaseTableNames();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.getProvisionedIops();
  }

  if (!!request.hasProxyClass()) {
    query["ProxyClass"] = request.getProxyClass();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.getProxyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.getScaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.getScaleRoNumMin();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasServerlessType()) {
    query["ServerlessType"] = request.getServerlessType();
  }

  if (!!request.hasSourceResourceId()) {
    query["SourceResourceId"] = request.getSourceResourceId();
  }

  if (!!request.hasSourceUid()) {
    query["SourceUid"] = request.getSourceUid();
  }

  if (!!request.hasStandbyAZ()) {
    query["StandbyAZ"] = request.getStandbyAZ();
  }

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.getStorageAutoScale();
  }

  if (!!request.hasStorageEncryption()) {
    query["StorageEncryption"] = request.getStorageEncryption();
  }

  if (!!request.hasStorageEncryptionKey()) {
    query["StorageEncryptionKey"] = request.getStorageEncryptionKey();
  }

  if (!!request.hasStoragePayType()) {
    query["StoragePayType"] = request.getStoragePayType();
  }

  if (!!request.hasStorageSpace()) {
    query["StorageSpace"] = request.getStorageSpace();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.getStorageUpperBound();
  }

  if (!!request.hasStrictConsistency()) {
    query["StrictConsistency"] = request.getStrictConsistency();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.getTDEStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterResponse>();
}

/**
 * @summary Creates a PolarDB cluster.
 *
 * @param request CreateDBClusterRequest
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBCluster(const CreateDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a custom cluster endpoint for a PolarDB cluster.
 *
 * @param request CreateDBClusterEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterEndpointResponse
 */
CreateDBClusterEndpointResponse Client::createDBClusterEndpointWithOptions(const CreateDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAddNewNodes()) {
    query["AutoAddNewNodes"] = request.getAutoAddNewNodes();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.getDBEndpointDescription();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.getEndpointConfig();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.getNodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.getPolarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.getPolarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.getReadWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.getSccMode();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBClusterEndpoint"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterEndpointResponse>();
}

/**
 * @summary Creates a custom cluster endpoint for a PolarDB cluster.
 *
 * @param request CreateDBClusterEndpointRequest
 * @return CreateDBClusterEndpointResponse
 */
CreateDBClusterEndpointResponse Client::createDBClusterEndpoint(const CreateDBClusterEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterEndpointWithOptions(request, runtime);
}

/**
 * @summary Edge Cloud API: Create Link Address
 *
 * @param request CreateDBClusterEndpointZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterEndpointZonalResponse
 */
CreateDBClusterEndpointZonalResponse Client::createDBClusterEndpointZonalWithOptions(const CreateDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAddNewNodes()) {
    query["AutoAddNewNodes"] = request.getAutoAddNewNodes();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.getDBEndpointDescription();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.getEndpointConfig();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.getNodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.getPolarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.getPolarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.getReadWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.getSccMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBClusterEndpointZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterEndpointZonalResponse>();
}

/**
 * @summary Edge Cloud API: Create Link Address
 *
 * @param request CreateDBClusterEndpointZonalRequest
 * @return CreateDBClusterEndpointZonalResponse
 */
CreateDBClusterEndpointZonalResponse Client::createDBClusterEndpointZonal(const CreateDBClusterEndpointZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterEndpointZonalWithOptions(request, runtime);
}

/**
 * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
 *
 * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
 *
 * @param request CreateDBEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBEndpointAddressResponse
 */
CreateDBEndpointAddressResponse Client::createDBEndpointAddressWithOptions(const CreateDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasZoneInfo()) {
    query["ZoneInfo"] = request.getZoneInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBEndpointAddress"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBEndpointAddressResponse>();
}

/**
 * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
 *
 * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
 *
 * @param request CreateDBEndpointAddressRequest
 * @return CreateDBEndpointAddressResponse
 */
CreateDBEndpointAddressResponse Client::createDBEndpointAddress(const CreateDBEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Creates a DBLink.
 *
 * @description A DBLink provides connectivity between two PolarDB for PostgreSQL (Oracle-compatible) clusters, or between a PolarDB for PostgreSQL (Oracle-compatible) cluster and a self-managed PostgreSQL database on an Elastic Compute Service (ECS) instance. This lets you query data across clusters.
 * > - Each cluster supports a maximum of 10 DBLinks.
 * >
 * > - A DBLink consumes one DBLink quota from both the source cluster and the destination cluster.
 * >
 * > - The source cluster and the destination cluster or destination ECS instance must be in the same region.
 *
 * @param request CreateDBLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBLinkResponse
 */
CreateDBLinkResponse Client::createDBLinkWithOptions(const CreateDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.getDBLinkName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceDBName()) {
    query["SourceDBName"] = request.getSourceDBName();
  }

  if (!!request.hasTargetDBAccount()) {
    query["TargetDBAccount"] = request.getTargetDBAccount();
  }

  if (!!request.hasTargetDBInstanceName()) {
    query["TargetDBInstanceName"] = request.getTargetDBInstanceName();
  }

  if (!!request.hasTargetDBName()) {
    query["TargetDBName"] = request.getTargetDBName();
  }

  if (!!request.hasTargetDBPasswd()) {
    query["TargetDBPasswd"] = request.getTargetDBPasswd();
  }

  if (!!request.hasTargetIp()) {
    query["TargetIp"] = request.getTargetIp();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.getTargetPort();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBLink"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBLinkResponse>();
}

/**
 * @summary Creates a DBLink.
 *
 * @description A DBLink provides connectivity between two PolarDB for PostgreSQL (Oracle-compatible) clusters, or between a PolarDB for PostgreSQL (Oracle-compatible) cluster and a self-managed PostgreSQL database on an Elastic Compute Service (ECS) instance. This lets you query data across clusters.
 * > - Each cluster supports a maximum of 10 DBLinks.
 * >
 * > - A DBLink consumes one DBLink quota from both the source cluster and the destination cluster.
 * >
 * > - The source cluster and the destination cluster or destination ECS instance must be in the same region.
 *
 * @param request CreateDBLinkRequest
 * @return CreateDBLinkResponse
 */
CreateDBLinkResponse Client::createDBLink(const CreateDBLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBLinkWithOptions(request, runtime);
}

/**
 * @summary Adds read-only nodes to a PolarDB cluster.
 *
 * @param request CreateDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBNodesResponse
 */
CreateDBNodesResponse Client::createDBNodesWithOptions(const CreateDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.getDBNode();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.getDBNodeType();
  }

  if (!!request.hasEndpointBindList()) {
    query["EndpointBindList"] = request.getEndpointBindList();
  }

  if (!!request.hasImciSwitch()) {
    query["ImciSwitch"] = request.getImciSwitch();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBNodes"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBNodesResponse>();
}

/**
 * @summary Adds read-only nodes to a PolarDB cluster.
 *
 * @param request CreateDBNodesRequest
 * @return CreateDBNodesResponse
 */
CreateDBNodesResponse Client::createDBNodes(const CreateDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBNodesWithOptions(request, runtime);
}

/**
 * @summary Creates a database for a PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the following requirements are met:
 * *   The cluster is in the Running state.
 * *   The cluster is unlocked.
 *
 * @param request CreateDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.getCharacterSetName();
  }

  if (!!request.hasCollate()) {
    query["Collate"] = request.getCollate();
  }

  if (!!request.hasCtype()) {
    query["Ctype"] = request.getCtype();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary Creates a database for a PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the following requirements are met:
 * *   The cluster is in the Running state.
 * *   The cluster is unlocked.
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseWithOptions(request, runtime);
}

/**
 * @summary Creates a database of an edge cluster for PolarDB on ENS.
 *
 * @param request CreateDatabaseZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseZonalResponse
 */
CreateDatabaseZonalResponse Client::createDatabaseZonalWithOptions(const CreateDatabaseZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.getCharacterSetName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCollate()) {
    query["Collate"] = request.getCollate();
  }

  if (!!request.hasCtype()) {
    query["Ctype"] = request.getCtype();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabaseZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseZonalResponse>();
}

/**
 * @summary Creates a database of an edge cluster for PolarDB on ENS.
 *
 * @param request CreateDatabaseZonalRequest
 * @return CreateDatabaseZonalResponse
 */
CreateDatabaseZonalResponse Client::createDatabaseZonal(const CreateDatabaseZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseZonalWithOptions(request, runtime);
}

/**
 * @summary Creates one or more extensions.
 *
 * @param request CreateExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExtensionsResponse
 */
CreateExtensionsResponse Client::createExtensionsWithOptions(const CreateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceDBName()) {
    query["SourceDBName"] = request.getSourceDBName();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExtensions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExtensionsResponse>();
}

/**
 * @summary Creates one or more extensions.
 *
 * @param request CreateExtensionsRequest
 * @return CreateExtensionsResponse
 */
CreateExtensionsResponse Client::createExtensions(const CreateExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExtensionsWithOptions(request, runtime);
}

/**
 * @summary Creates a gateway instance.
 *
 * @param request CreateGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGatewayWithOptions(const CreateGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDBClusterClass()) {
    query["DBClusterClass"] = request.getDBClusterClass();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGateway"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayResponse>();
}

/**
 * @summary Creates a gateway instance.
 *
 * @param request CreateGatewayRequest
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGateway(const CreateGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewayWithOptions(request, runtime);
}

/**
 * @summary Create a new PolarLakeBase Global Data Network (GDN).
 *
 * @description > This API creates a PolarFileSystem (PolarFS) Global Data Network (GDN). Do not confuse it with the CreateGlobalDatabaseNetwork API, which operates on a PolarDB cluster. Ensure you are using the correct API to avoid unintended actions.
 *
 * @param request CreateGlobalDataNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalDataNetworkResponse
 */
CreateGlobalDataNetworkResponse Client::createGlobalDataNetworkWithOptions(const CreateGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationFileSystemPath()) {
    query["DestinationFileSystemPath"] = request.getDestinationFileSystemPath();
  }

  if (!!request.hasDestinationId()) {
    query["DestinationId"] = request.getDestinationId();
  }

  if (!!request.hasDestinationRegion()) {
    query["DestinationRegion"] = request.getDestinationRegion();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasFreezeSourceDuringSync()) {
    query["FreezeSourceDuringSync"] = request.getFreezeSourceDuringSync();
  }

  if (!!request.hasSourceFileSystemPath()) {
    query["SourceFileSystemPath"] = request.getSourceFileSystemPath();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.getSourceRegion();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalDataNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalDataNetworkResponse>();
}

/**
 * @summary Create a new PolarLakeBase Global Data Network (GDN).
 *
 * @description > This API creates a PolarFileSystem (PolarFS) Global Data Network (GDN). Do not confuse it with the CreateGlobalDatabaseNetwork API, which operates on a PolarDB cluster. Ensure you are using the correct API to avoid unintended actions.
 *
 * @param request CreateGlobalDataNetworkRequest
 * @return CreateGlobalDataNetworkResponse
 */
CreateGlobalDataNetworkResponse Client::createGlobalDataNetwork(const CreateGlobalDataNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalDataNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a new global database network (GDN).
 *
 * @description > A cluster can belong to only one GDN.
 *
 * @param request CreateGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalDatabaseNetworkResponse
 */
CreateGlobalDatabaseNetworkResponse Client::createGlobalDatabaseNetworkWithOptions(const CreateGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEnableGlobalDomainName()) {
    query["EnableGlobalDomainName"] = request.getEnableGlobalDomainName();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.getGDNDescription();
  }

  if (!!request.hasGDNVersion()) {
    query["GDNVersion"] = request.getGDNVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Creates a new global database network (GDN).
 *
 * @description > A cluster can belong to only one GDN.
 *
 * @param request CreateGlobalDatabaseNetworkRequest
 * @return CreateGlobalDatabaseNetworkResponse
 */
CreateGlobalDatabaseNetworkResponse Client::createGlobalDatabaseNetwork(const CreateGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a global IP whitelist template.
 *
 * @param request CreateGlobalSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalSecurityIPGroupResponse
 */
CreateGlobalSecurityIPGroupResponse Client::createGlobalSecurityIPGroupWithOptions(const CreateGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.getGIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalSecurityIPGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalSecurityIPGroupResponse>();
}

/**
 * @summary Creates a global IP whitelist template.
 *
 * @param request CreateGlobalSecurityIPGroupRequest
 * @return CreateGlobalSecurityIPGroupResponse
 */
CreateGlobalSecurityIPGroupResponse Client::createGlobalSecurityIPGroup(const CreateGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a model API.
 *
 * @param request CreateModelApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelApiResponse
 */
CreateModelApiResponse Client::createModelApiWithOptions(const CreateModelApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceModel()) {
    query["ForceModel"] = request.getForceModel();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPathPrefix()) {
    query["PathPrefix"] = request.getPathPrefix();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRecordInput()) {
    query["RecordInput"] = request.getRecordInput();
  }

  if (!!request.hasRecordOutput()) {
    query["RecordOutput"] = request.getRecordOutput();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteRules()) {
    query["RouteRules"] = request.getRouteRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelApi"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelApiResponse>();
}

/**
 * @summary Creates a model API.
 *
 * @param request CreateModelApiRequest
 * @return CreateModelApiResponse
 */
CreateModelApiResponse Client::createModelApi(const CreateModelApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelApiWithOptions(request, runtime);
}

/**
 * @summary Creates a model service.
 *
 * @param request CreateModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelServiceWithOptions(const CreateModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    query["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasInputCostPointsPerMillion()) {
    query["InputCostPointsPerMillion"] = request.getInputCostPointsPerMillion();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputCostPointsPerMillion()) {
    query["OutputCostPointsPerMillion"] = request.getOutputCostPointsPerMillion();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestCostPoints()) {
    query["RequestCostPoints"] = request.getRequestCostPoints();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelServiceResponse>();
}

/**
 * @summary Creates a model service.
 *
 * @param request CreateModelServiceRequest
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelService(const CreateModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelServiceWithOptions(request, runtime);
}

/**
 * @summary Creates a network channel.
 *
 * @param request CreateNetworkChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkChannelResponse
 */
CreateNetworkChannelResponse Client::createNetworkChannelWithOptions(const CreateNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNotes()) {
    query["Notes"] = request.getNotes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetDBClusterId()) {
    query["TargetDBClusterId"] = request.getTargetDBClusterId();
  }

  if (!!request.hasTargetIp()) {
    query["TargetIp"] = request.getTargetIp();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.getTargetPort();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkChannelResponse>();
}

/**
 * @summary Creates a network channel.
 *
 * @param request CreateNetworkChannelRequest
 * @return CreateNetworkChannelResponse
 */
CreateNetworkChannelResponse Client::createNetworkChannel(const CreateNetworkChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkChannelWithOptions(request, runtime);
}

/**
 * @summary Creates or obtains a virtual license order.
 *
 * @param request CreateOrGetVirtualLicenseOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrGetVirtualLicenseOrderResponse
 */
CreateOrGetVirtualLicenseOrderResponse Client::createOrGetVirtualLicenseOrderWithOptions(const CreateOrGetVirtualLicenseOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrGetVirtualLicenseOrder"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrGetVirtualLicenseOrderResponse>();
}

/**
 * @summary Creates or obtains a virtual license order.
 *
 * @param request CreateOrGetVirtualLicenseOrderRequest
 * @return CreateOrGetVirtualLicenseOrderResponse
 */
CreateOrGetVirtualLicenseOrderResponse Client::createOrGetVirtualLicenseOrder(const CreateOrGetVirtualLicenseOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrGetVirtualLicenseOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a PolarDB parameter template.
 *
 * @description Parameter templates allow you to manage cluster parameters in batches. You can use this feature to quickly apply parameter templates to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature is available only for PolarDB for MySQL clusters.
 *
 * @param request CreateParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroupWithOptions(const CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupDesc()) {
    query["ParameterGroupDesc"] = request.getParameterGroupDesc();
  }

  if (!!request.hasParameterGroupName()) {
    query["ParameterGroupName"] = request.getParameterGroupName();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateParameterGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParameterGroupResponse>();
}

/**
 * @summary Creates a PolarDB parameter template.
 *
 * @description Parameter templates allow you to manage cluster parameters in batches. You can use this feature to quickly apply parameter templates to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature is available only for PolarDB for MySQL clusters.
 *
 * @param request CreateParameterGroupRequest
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroup(const CreateParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a PolarClaw Agent.
 *
 * @description ## Description
 * Use this operation to create a PolarClaw Agent. You can optionally specify an `emoji` and an `avatar`.
 *
 * @param request CreatePolarClawAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolarClawAgentResponse
 */
CreatePolarClawAgentResponse Client::createPolarClawAgentWithOptions(const CreatePolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAvatar()) {
    query["Avatar"] = request.getAvatar();
  }

  if (!!request.hasEmoji()) {
    query["Emoji"] = request.getEmoji();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolarClawAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolarClawAgentResponse>();
}

/**
 * @summary Creates a PolarClaw Agent.
 *
 * @description ## Description
 * Use this operation to create a PolarClaw Agent. You can optionally specify an `emoji` and an `avatar`.
 *
 * @param request CreatePolarClawAgentRequest
 * @return CreatePolarClawAgentResponse
 */
CreatePolarClawAgentResponse Client::createPolarClawAgent(const CreatePolarClawAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolarClawAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a channel in PolarClaw.
 *
 * @description ## Request
 *
 * @param tmpReq CreatePolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolarClawChannelResponse
 */
CreatePolarClawChannelResponse Client::createPolarClawChannelWithOptions(const CreatePolarClawChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolarClawChannelShrinkRequest request = CreatePolarClawChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannelConfig()) {
    request.setChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannelConfig(), "ChannelConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelConfigShrink()) {
    query["ChannelConfig"] = request.getChannelConfigShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasNpmPackage()) {
    query["NpmPackage"] = request.getNpmPackage();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolarClawChannelResponse>();
}

/**
 * @summary Creates a channel in PolarClaw.
 *
 * @description ## Request
 *
 * @param request CreatePolarClawChannelRequest
 * @return CreatePolarClawChannelResponse
 */
CreatePolarClawChannelResponse Client::createPolarClawChannel(const CreatePolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a PolarClaw scheduled task.
 *
 * @description ## Request
 * Use this API to create a cron job. You can configure the job\\"s payload, execution frequency, timezone, target channel, recipients, and a failure alert mechanism.
 *
 * @param tmpReq CreatePolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolarClawCronJobResponse
 */
CreatePolarClawCronJobResponse Client::createPolarClawCronJobWithOptions(const CreatePolarClawCronJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolarClawCronJobShrinkRequest request = CreatePolarClawCronJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDelivery()) {
    request.setDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDelivery(), "Delivery", "json"));
  }

  if (!!tmpReq.hasFailureAlert()) {
    request.setFailureAlertShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFailureAlert(), "FailureAlert", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedule(), "Schedule", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDeleteAfterRun()) {
    query["DeleteAfterRun"] = request.getDeleteAfterRun();
  }

  if (!!request.hasDeliveryShrink()) {
    query["Delivery"] = request.getDeliveryShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFailureAlertShrink()) {
    query["FailureAlert"] = request.getFailureAlertShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasRunImmediately()) {
    query["RunImmediately"] = request.getRunImmediately();
  }

  if (!!request.hasScheduleShrink()) {
    query["Schedule"] = request.getScheduleShrink();
  }

  if (!!request.hasSessionKey()) {
    query["SessionKey"] = request.getSessionKey();
  }

  if (!!request.hasSessionTarget()) {
    query["SessionTarget"] = request.getSessionTarget();
  }

  if (!!request.hasWakeMode()) {
    query["WakeMode"] = request.getWakeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolarClawCronJobResponse>();
}

/**
 * @summary Creates a PolarClaw scheduled task.
 *
 * @description ## Request
 * Use this API to create a cron job. You can configure the job\\"s payload, execution frequency, timezone, target channel, recipients, and a failure alert mechanism.
 *
 * @param request CreatePolarClawCronJobRequest
 * @return CreatePolarClawCronJobResponse
 */
CreatePolarClawCronJobResponse Client::createPolarClawCronJob(const CreatePolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Creates a new directory in a specified PolarFS instance.
 *
 * @description ## Description
 * - **Path**: The absolute path of the directory to create.
 * - **Recursive**: Specifies whether to recursively create parent directories. The default value is `false`.
 * - This operation creates a directory structure with one or more levels in the specified PolarFS instance.
 * - Setting `Recursive` to `true` automatically creates all non-existent parent directories.
 * - Ensure that you have sufficient permissions to create the directory.
 *
 * @param request CreatePolarFsObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolarFsObjectResponse
 */
CreatePolarFsObjectResponse Client::createPolarFsObjectWithOptions(const CreatePolarFsObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolarFsObject"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolarFsObjectResponse>();
}

/**
 * @summary Creates a new directory in a specified PolarFS instance.
 *
 * @description ## Description
 * - **Path**: The absolute path of the directory to create.
 * - **Recursive**: Specifies whether to recursively create parent directories. The default value is `false`.
 * - This operation creates a directory structure with one or more levels in the specified PolarFS instance.
 * - Setting `Recursive` to `true` automatically creates all non-existent parent directories.
 * - Ensure that you have sufficient permissions to create the directory.
 *
 * @param request CreatePolarFsObjectRequest
 * @return CreatePolarFsObjectResponse
 */
CreatePolarFsObjectResponse Client::createPolarFsObject(const CreatePolarFsObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolarFsObjectWithOptions(request, runtime);
}

/**
 * @summary Creates a rate limiting policy.
 *
 * @param request CreateRateLimitPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRateLimitPolicyResponse
 */
CreateRateLimitPolicyResponse Client::createRateLimitPolicyWithOptions(const CreateRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRateLimitRpm()) {
    query["RateLimitRpm"] = request.getRateLimitRpm();
  }

  if (!!request.hasRateLimitTpm()) {
    query["RateLimitTpm"] = request.getRateLimitTpm();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeRefId()) {
    query["ScopeRefId"] = request.getScopeRefId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRateLimitPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRateLimitPolicyResponse>();
}

/**
 * @summary Creates a rate limiting policy.
 *
 * @param request CreateRateLimitPolicyRequest
 * @return CreateRateLimitPolicyResponse
 */
CreateRateLimitPolicyResponse Client::createRateLimitPolicy(const CreateRateLimitPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRateLimitPolicyWithOptions(request, runtime);
}

/**
 * @summary Ccreates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary Ccreates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Purchases a storage plan.
 *
 * @param request CreateStoragePlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStoragePlanResponse
 */
CreateStoragePlanResponse Client::createStoragePlanWithOptions(const CreateStoragePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStoragePlan"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStoragePlanResponse>();
}

/**
 * @summary Purchases a storage plan.
 *
 * @param request CreateStoragePlanRequest
 * @return CreateStoragePlanResponse
 */
CreateStoragePlanResponse Client::createStoragePlan(const CreateStoragePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStoragePlanWithOptions(request, runtime);
}

/**
 * @summary Deletes an AI cluster instance.
 *
 * @param request DeleteAIDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIDBClusterResponse
 */
DeleteAIDBClusterResponse Client::deleteAIDBClusterWithOptions(const DeleteAIDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAIDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAIDBClusterResponse>();
}

/**
 * @summary Deletes an AI cluster instance.
 *
 * @param request DeleteAIDBClusterRequest
 * @return DeleteAIDBClusterResponse
 */
DeleteAIDBClusterResponse Client::deleteAIDBCluster(const DeleteAIDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIDBClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteAIDBClusterDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIDBClusterDatasetResponse
 */
DeleteAIDBClusterDatasetResponse Client::deleteAIDBClusterDatasetWithOptions(const DeleteAIDBClusterDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAIDBClusterDataset"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAIDBClusterDatasetResponse>();
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteAIDBClusterDatasetRequest
 * @return DeleteAIDBClusterDatasetResponse
 */
DeleteAIDBClusterDatasetResponse Client::deleteAIDBClusterDataset(const DeleteAIDBClusterDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIDBClusterDatasetWithOptions(request, runtime);
}

/**
 * @summary Deletes a task instance.
 *
 * @param request DeleteAIDBClusterTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIDBClusterTaskResponse
 */
DeleteAIDBClusterTaskResponse Client::deleteAIDBClusterTaskWithOptions(const DeleteAIDBClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRelativeDBClusterId()) {
    query["RelativeDBClusterId"] = request.getRelativeDBClusterId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAIDBClusterTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAIDBClusterTaskResponse>();
}

/**
 * @summary Deletes a task instance.
 *
 * @param request DeleteAIDBClusterTaskRequest
 * @return DeleteAIDBClusterTaskResponse
 */
DeleteAIDBClusterTaskResponse Client::deleteAIDBClusterTask(const DeleteAIDBClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIDBClusterTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes child nodes of an AI instance.
 *
 * @param request DeleteAINodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAINodesResponse
 */
DeleteAINodesResponse Client::deleteAINodesWithOptions(const DeleteAINodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAINodes"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAINodesResponse>();
}

/**
 * @summary Deletes child nodes of an AI instance.
 *
 * @param request DeleteAINodesRequest
 * @return DeleteAINodesResponse
 */
DeleteAINodesResponse Client::deleteAINodes(const DeleteAINodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAINodesWithOptions(request, runtime);
}

/**
 * @summary Deletes a PolarDB database account.
 *
 * @description > The cluster must be in the running state for this operation to succeed.
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary Deletes a PolarDB database account.
 *
 * @description > The cluster must be in the running state for this operation to succeed.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes an account from an edge cluster for PolarDB on ENS.
 *
 * @param request DeleteAccountZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountZonalResponse
 */
DeleteAccountZonalResponse Client::deleteAccountZonalWithOptions(const DeleteAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccountZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountZonalResponse>();
}

/**
 * @summary Deletes an account from an edge cluster for PolarDB on ENS.
 *
 * @param request DeleteAccountZonalRequest
 * @return DeleteAccountZonalResponse
 */
DeleteAccountZonalResponse Client::deleteAccountZonal(const DeleteAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountZonalWithOptions(request, runtime);
}

/**
 * @summary Deletes an AgenticDB branch.
 *
 * @param request DeleteAgenticDBBranchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgenticDBBranchResponse
 */
DeleteAgenticDBBranchResponse Client::deleteAgenticDBBranchWithOptions(const DeleteAgenticDBBranchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchId()) {
    query["BranchId"] = request.getBranchId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgenticDBBranch"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgenticDBBranchResponse>();
}

/**
 * @summary Deletes an AgenticDB branch.
 *
 * @param request DeleteAgenticDBBranchRequest
 * @return DeleteAgenticDBBranchResponse
 */
DeleteAgenticDBBranchResponse Client::deleteAgenticDBBranch(const DeleteAgenticDBBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgenticDBBranchWithOptions(request, runtime);
}

/**
 * @summary Deletes an AgenticDB compute cluster.
 *
 * @param request DeleteAgenticDBComputeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgenticDBComputeClusterResponse
 */
DeleteAgenticDBComputeClusterResponse Client::deleteAgenticDBComputeClusterWithOptions(const DeleteAgenticDBComputeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeClusterId()) {
    query["ComputeClusterId"] = request.getComputeClusterId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgenticDBComputeCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgenticDBComputeClusterResponse>();
}

/**
 * @summary Deletes an AgenticDB compute cluster.
 *
 * @param request DeleteAgenticDBComputeClusterRequest
 * @return DeleteAgenticDBComputeClusterResponse
 */
DeleteAgenticDBComputeClusterResponse Client::deleteAgenticDBComputeCluster(const DeleteAgenticDBComputeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgenticDBComputeClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes an AgenticDB project.
 *
 * @param request DeleteAgenticDBProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgenticDBProjectResponse
 */
DeleteAgenticDBProjectResponse Client::deleteAgenticDBProjectWithOptions(const DeleteAgenticDBProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgenticDBProject"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgenticDBProjectResponse>();
}

/**
 * @summary Deletes an AgenticDB project.
 *
 * @param request DeleteAgenticDBProjectRequest
 * @return DeleteAgenticDBProjectResponse
 */
DeleteAgenticDBProjectResponse Client::deleteAgenticDBProject(const DeleteAgenticDBProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgenticDBProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes an API key for an AgenticDB tenant.
 *
 * @param request DeleteAgenticDBTenantApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgenticDBTenantApiKeyResponse
 */
DeleteAgenticDBTenantApiKeyResponse Client::deleteAgenticDBTenantApiKeyWithOptions(const DeleteAgenticDBTenantApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["ApiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgenticDBTenantApiKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgenticDBTenantApiKeyResponse>();
}

/**
 * @summary Deletes an API key for an AgenticDB tenant.
 *
 * @param request DeleteAgenticDBTenantApiKeyRequest
 * @return DeleteAgenticDBTenantApiKeyResponse
 */
DeleteAgenticDBTenantApiKeyResponse Client::deleteAgenticDBTenantApiKey(const DeleteAgenticDBTenantApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgenticDBTenantApiKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified PolarDB application. This operation does not delete the associated PolarDB instance.
 *
 * @description ## Important
 * - This operation deletes a PolarDB application but does not affect the associated PolarDB instance.
 * - The delete operation is irreversible and permanently deletes the application. Proceed with caution.
 * - Ensure that you have backed up all critical data before proceeding.Before you delete an application, make sure that you have backed up all important data.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Deletes the specified PolarDB application. This operation does not delete the associated PolarDB instance.
 *
 * @description ## Important
 * - This operation deletes a PolarDB application but does not affect the associated PolarDB instance.
 * - The delete operation is irreversible and permanently deletes the application. Proceed with caution.
 * - Ensure that you have backed up all critical data before proceeding.Before you delete an application, make sure that you have backed up all important data.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified connection address for a PolarDB application.
 *
 * @param request DeleteApplicationEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationEndpointAddressResponse
 */
DeleteApplicationEndpointAddressResponse Client::deleteApplicationEndpointAddressWithOptions(const DeleteApplicationEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationEndpointAddress"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationEndpointAddressResponse>();
}

/**
 * @summary Deletes a specified connection address for a PolarDB application.
 *
 * @param request DeleteApplicationEndpointAddressRequest
 * @return DeleteApplicationEndpointAddressResponse
 */
DeleteApplicationEndpointAddressResponse Client::deleteApplicationEndpointAddress(const DeleteApplicationEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes an application prompt.
 *
 * @param request DeleteApplicationPromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationPromptResponse
 */
DeleteApplicationPromptResponse Client::deleteApplicationPromptWithOptions(const DeleteApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPromptId()) {
    query["PromptId"] = request.getPromptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationPrompt"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationPromptResponse>();
}

/**
 * @summary Deletes an application prompt.
 *
 * @param request DeleteApplicationPromptRequest
 * @return DeleteApplicationPromptResponse
 */
DeleteApplicationPromptResponse Client::deleteApplicationPrompt(const DeleteApplicationPromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationPromptWithOptions(request, runtime);
}

/**
 * @summary Deletes the backup sets of a PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the cluster meets the following requirements:
 * *   The cluster is in the Running state.
 * *   The backup sets are in the Success state.
 * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
 * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
 *
 * @param request DeleteBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackupWithOptions(const DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupResponse>();
}

/**
 * @summary Deletes the backup sets of a PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the cluster meets the following requirements:
 * *   The cluster is in the Running state.
 * *   The backup sets are in the Success state.
 * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
 * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Deletes a cost budget policy.
 *
 * @param request DeleteBudgetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBudgetPolicyResponse
 */
DeleteBudgetPolicyResponse Client::deleteBudgetPolicyWithOptions(const DeleteBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBudgetPolicyId()) {
    query["BudgetPolicyId"] = request.getBudgetPolicyId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBudgetPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBudgetPolicyResponse>();
}

/**
 * @summary Deletes a cost budget policy.
 *
 * @param request DeleteBudgetPolicyRequest
 * @return DeleteBudgetPolicyResponse
 */
DeleteBudgetPolicyResponse Client::deleteBudgetPolicy(const DeleteBudgetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBudgetPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer.
 *
 * @param request DeleteConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerResponse
 */
DeleteConsumerResponse Client::deleteConsumerWithOptions(const DeleteConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerResponse>();
}

/**
 * @summary Deletes a consumer.
 *
 * @param request DeleteConsumerRequest
 * @return DeleteConsumerResponse
 */
DeleteConsumerResponse Client::deleteConsumer(const DeleteConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroupWithOptions(const DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.getConsumerGroupName();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupResponse>();
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerGroupRequest
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a cost rule.
 *
 * @param request DeleteCostRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCostRuleResponse
 */
DeleteCostRuleResponse Client::deleteCostRuleWithOptions(const DeleteCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCostRuleId()) {
    query["CostRuleId"] = request.getCostRuleId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCostRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCostRuleResponse>();
}

/**
 * @summary Deletes a cost rule.
 *
 * @param request DeleteCostRuleRequest
 * @return DeleteCostRuleResponse
 */
DeleteCostRuleResponse Client::deleteCostRule(const DeleteCostRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCostRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go PolarDB cluster.
 *
 * @param request DeleteDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBClusterWithOptions(const DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterResponse>();
}

/**
 * @summary Deletes a pay-as-you-go PolarDB cluster.
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom cluster endpoint for a PolarDB cluster.
 *
 * @param request DeleteDBClusterEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterEndpointResponse
 */
DeleteDBClusterEndpointResponse Client::deleteDBClusterEndpointWithOptions(const DeleteDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBClusterEndpoint"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterEndpointResponse>();
}

/**
 * @summary Deletes a custom cluster endpoint for a PolarDB cluster.
 *
 * @param request DeleteDBClusterEndpointRequest
 * @return DeleteDBClusterEndpointResponse
 */
DeleteDBClusterEndpointResponse Client::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a cluster endpoint of a PolarDB for Edge cluster.
 *
 * @param request DeleteDBClusterEndpointZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterEndpointZonalResponse
 */
DeleteDBClusterEndpointZonalResponse Client::deleteDBClusterEndpointZonalWithOptions(const DeleteDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBClusterEndpointZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterEndpointZonalResponse>();
}

/**
 * @summary Deletes a cluster endpoint of a PolarDB for Edge cluster.
 *
 * @param request DeleteDBClusterEndpointZonalRequest
 * @return DeleteDBClusterEndpointZonalResponse
 */
DeleteDBClusterEndpointZonalResponse Client::deleteDBClusterEndpointZonal(const DeleteDBClusterEndpointZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterEndpointZonalWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
 *
 * @description > - You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 * >
 * > - Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
 *
 * @param request DeleteDBEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBEndpointAddressResponse
 */
DeleteDBEndpointAddressResponse Client::deleteDBEndpointAddressWithOptions(const DeleteDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBEndpointAddress"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBEndpointAddressResponse>();
}

/**
 * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
 *
 * @description > - You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 * >
 * > - Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
 *
 * @param request DeleteDBEndpointAddressRequest
 * @return DeleteDBEndpointAddressResponse
 */
DeleteDBEndpointAddressResponse Client::deleteDBEndpointAddress(const DeleteDBEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes a DBLink from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
 *
 * @param request DeleteDBLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBLinkResponse
 */
DeleteDBLinkResponse Client::deleteDBLinkWithOptions(const DeleteDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.getDBLinkName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBLink"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBLinkResponse>();
}

/**
 * @summary Deletes a DBLink from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
 *
 * @param request DeleteDBLinkRequest
 * @return DeleteDBLinkResponse
 */
DeleteDBLinkResponse Client::deleteDBLink(const DeleteDBLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBLinkWithOptions(request, runtime);
}

/**
 * @summary Deletes read-only nodes from a PolarDB cluster.
 *
 * @param request DeleteDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBNodesResponse
 */
DeleteDBNodesResponse Client::deleteDBNodesWithOptions(const DeleteDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.getDBNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBNodes"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBNodesResponse>();
}

/**
 * @summary Deletes read-only nodes from a PolarDB cluster.
 *
 * @param request DeleteDBNodesRequest
 * @return DeleteDBNodesResponse
 */
DeleteDBNodesResponse Client::deleteDBNodes(const DeleteDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBNodesWithOptions(request, runtime);
}

/**
 * @summary Deletes a database from a PolarDB cluster.
 *
 * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
 * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
 *
 * @param request DeleteDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary Deletes a database from a PolarDB cluster.
 *
 * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
 * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a database from a PolarDB edge cloud cluster.
 *
 * @param request DeleteDatabaseZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseZonalResponse
 */
DeleteDatabaseZonalResponse Client::deleteDatabaseZonalWithOptions(const DeleteDatabaseZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabaseZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseZonalResponse>();
}

/**
 * @summary Deletes a database from a PolarDB edge cloud cluster.
 *
 * @param request DeleteDatabaseZonalRequest
 * @return DeleteDatabaseZonalResponse
 */
DeleteDatabaseZonalResponse Client::deleteDatabaseZonal(const DeleteDatabaseZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseZonalWithOptions(request, runtime);
}

/**
 * @summary Deletes a role.
 *
 * @param request DeleteEncryptionDBRolePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEncryptionDBRolePrivilegeResponse
 */
DeleteEncryptionDBRolePrivilegeResponse Client::deleteEncryptionDBRolePrivilegeWithOptions(const DeleteEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRolePrivilegeNameList()) {
    query["RolePrivilegeNameList"] = request.getRolePrivilegeNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEncryptionDBRolePrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEncryptionDBRolePrivilegeResponse>();
}

/**
 * @summary Deletes a role.
 *
 * @param request DeleteEncryptionDBRolePrivilegeRequest
 * @return DeleteEncryptionDBRolePrivilegeResponse
 */
DeleteEncryptionDBRolePrivilegeResponse Client::deleteEncryptionDBRolePrivilege(const DeleteEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Deletes an extension.
 *
 * @param request DeleteExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExtensionsResponse
 */
DeleteExtensionsResponse Client::deleteExtensionsWithOptions(const DeleteExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExtensions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExtensionsResponse>();
}

/**
 * @summary Deletes an extension.
 *
 * @param request DeleteExtensionsRequest
 * @return DeleteExtensionsResponse
 */
DeleteExtensionsResponse Client::deleteExtensions(const DeleteExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExtensionsWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified SQL firewall rules.
 *
 * @param request DeleteFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallRulesResponse
 */
DeleteFirewallRulesResponse Client::deleteFirewallRulesWithOptions(const DeleteFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallRulesResponse>();
}

/**
 * @summary Deletes the specified SQL firewall rules.
 *
 * @param request DeleteFirewallRulesRequest
 * @return DeleteFirewallRulesResponse
 */
DeleteFirewallRulesResponse Client::deleteFirewallRules(const DeleteFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a gateway instance.
 *
 * @param request DeleteGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGatewayWithOptions(const DeleteGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGateway"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayResponse>();
}

/**
 * @summary Deletes a gateway instance.
 *
 * @param request DeleteGatewayRequest
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const DeleteGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayWithOptions(request, runtime);
}

/**
 * @summary Deletes a Polarlakebase Global Data Network (GDN).
 *
 * @description > This API deletes the Global Data Network (GDN) for PolarFS. Do not confuse it with the DeleteGlobalDatabaseNetwork API, which applies to PolarDB clusters.
 *
 * @param request DeleteGlobalDataNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalDataNetworkResponse
 */
DeleteGlobalDataNetworkResponse Client::deleteGlobalDataNetworkWithOptions(const DeleteGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalDataNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGlobalDataNetworkResponse>();
}

/**
 * @summary Deletes a Polarlakebase Global Data Network (GDN).
 *
 * @description > This API deletes the Global Data Network (GDN) for PolarFS. Do not confuse it with the DeleteGlobalDatabaseNetwork API, which applies to PolarDB clusters.
 *
 * @param request DeleteGlobalDataNetworkRequest
 * @return DeleteGlobalDataNetworkResponse
 */
DeleteGlobalDataNetworkResponse Client::deleteGlobalDataNetwork(const DeleteGlobalDataNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalDataNetworkWithOptions(request, runtime);
}

/**
 * @summary Deletes a global database network (GDN).
 *
 * @description > A GDN can be deleted only if it contains a single primary cluster.
 *
 * @param request DeleteGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalDatabaseNetworkResponse
 */
DeleteGlobalDatabaseNetworkResponse Client::deleteGlobalDatabaseNetworkWithOptions(const DeleteGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Deletes a global database network (GDN).
 *
 * @description > A GDN can be deleted only if it contains a single primary cluster.
 *
 * @param request DeleteGlobalDatabaseNetworkRequest
 * @return DeleteGlobalDatabaseNetworkResponse
 */
DeleteGlobalDatabaseNetworkResponse Client::deleteGlobalDatabaseNetwork(const DeleteGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Deletes a global IP whitelist template.
 *
 * @param request DeleteGlobalSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalSecurityIPGroupResponse
 */
DeleteGlobalSecurityIPGroupResponse Client::deleteGlobalSecurityIPGroupWithOptions(const DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalSecurityIPGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGlobalSecurityIPGroupResponse>();
}

/**
 * @summary Deletes a global IP whitelist template.
 *
 * @param request DeleteGlobalSecurityIPGroupRequest
 * @return DeleteGlobalSecurityIPGroupResponse
 */
DeleteGlobalSecurityIPGroupResponse Client::deleteGlobalSecurityIPGroup(const DeleteGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified data masking rules.
 *
 * @param request DeleteMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMaskingRulesResponse
 */
DeleteMaskingRulesResponse Client::deleteMaskingRulesWithOptions(const DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.getInterfaceVersion();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMaskingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMaskingRulesResponse>();
}

/**
 * @summary Deletes the specified data masking rules.
 *
 * @param request DeleteMaskingRulesRequest
 * @return DeleteMaskingRulesResponse
 */
DeleteMaskingRulesResponse Client::deleteMaskingRules(const DeleteMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a model API.
 *
 * @param request DeleteModelApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelApiResponse
 */
DeleteModelApiResponse Client::deleteModelApiWithOptions(const DeleteModelApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelApiId()) {
    query["ModelApiId"] = request.getModelApiId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelApi"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelApiResponse>();
}

/**
 * @summary Deletes a model API.
 *
 * @param request DeleteModelApiRequest
 * @return DeleteModelApiResponse
 */
DeleteModelApiResponse Client::deleteModelApi(const DeleteModelApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelApiWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified model service.
 *
 * @param request DeleteModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelServiceWithOptions(const DeleteModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelServiceResponse>();
}

/**
 * @summary Deletes a specified model service.
 *
 * @param request DeleteModelServiceRequest
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelService(const DeleteModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a network channel.
 *
 * @param request DeleteNetworkChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkChannelResponse
 */
DeleteNetworkChannelResponse Client::deleteNetworkChannelWithOptions(const DeleteNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkChannelResponse>();
}

/**
 * @summary Deletes a network channel.
 *
 * @param request DeleteNetworkChannelRequest
 * @return DeleteNetworkChannelResponse
 */
DeleteNetworkChannelResponse Client::deleteNetworkChannel(const DeleteNetworkChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a PolarDB parameter template.
 *
 * @description Parameter templates help you manage cluster parameters in batches. You can quickly apply a template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > Deleting a parameter template does not affect PolarDB clusters to which the template has been applied.
 *
 * @param request DeleteParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroupWithOptions(const DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParameterGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterGroupResponse>();
}

/**
 * @summary Deletes a PolarDB parameter template.
 *
 * @description Parameter templates help you manage cluster parameters in batches. You can quickly apply a template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > Deleting a parameter template does not affect PolarDB clusters to which the template has been applied.
 *
 * @param request DeleteParameterGroupRequest
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroup(const DeleteParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterGroupWithOptions(request, runtime);
}

/**
 * @summary This operation removes an agent and its associated bindings from a specified PolarClaw.
 *
 * @description ## Usage notes
 * - A successful operation returns the ID of the deleted agent and the number of removed bindings.
 * - Ensure you provide the correct target `AgentId`. An incorrect ID can cause the operation to fail or affect an unintended agent.
 *
 * @param request DeletePolarClawAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarClawAgentResponse
 */
DeletePolarClawAgentResponse Client::deletePolarClawAgentWithOptions(const DeletePolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDeleteFiles()) {
    query["DeleteFiles"] = request.getDeleteFiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarClawAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarClawAgentResponse>();
}

/**
 * @summary This operation removes an agent and its associated bindings from a specified PolarClaw.
 *
 * @description ## Usage notes
 * - A successful operation returns the ID of the deleted agent and the number of removed bindings.
 * - Ensure you provide the correct target `AgentId`. An incorrect ID can cause the operation to fail or affect an unintended agent.
 *
 * @param request DeletePolarClawAgentRequest
 * @return DeletePolarClawAgentResponse
 */
DeletePolarClawAgentResponse Client::deletePolarClawAgent(const DeletePolarClawAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarClawAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes a PolarClaw Channel.
 *
 * @description ## Description
 * Use the `DeletePolarClawChannel` operation to delete a specified PolarClaw Channel. You can also uninstall the associated channel plugin. Before you delete the channel, back up all important data and ensure that no critical tasks are running on it.
 *
 * @param request DeletePolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarClawChannelResponse
 */
DeletePolarClawChannelResponse Client::deletePolarClawChannelWithOptions(const DeletePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasUninstallPlugin()) {
    query["UninstallPlugin"] = request.getUninstallPlugin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarClawChannelResponse>();
}

/**
 * @summary Deletes a PolarClaw Channel.
 *
 * @description ## Description
 * Use the `DeletePolarClawChannel` operation to delete a specified PolarClaw Channel. You can also uninstall the associated channel plugin. Before you delete the channel, back up all important data and ensure that no critical tasks are running on it.
 *
 * @param request DeletePolarClawChannelRequest
 * @return DeletePolarClawChannelResponse
 */
DeletePolarClawChannelResponse Client::deletePolarClawChannel(const DeletePolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a PolarClaw cron job.
 *
 * @description ## Description
 * To delete a PolarClaw cron job, provide its `ApplicationId` and `JobId`. Ensure that the IDs are correct to prevent accidental deletion of other jobs.
 * **Note**: This operation is irreversible. Proceed with caution.
 *
 * @param request DeletePolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarClawCronJobResponse
 */
DeletePolarClawCronJobResponse Client::deletePolarClawCronJobWithOptions(const DeletePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarClawCronJobResponse>();
}

/**
 * @summary Deletes a PolarClaw cron job.
 *
 * @description ## Description
 * To delete a PolarClaw cron job, provide its `ApplicationId` and `JobId`. Ensure that the IDs are correct to prevent accidental deletion of other jobs.
 * **Note**: This operation is irreversible. Proceed with caution.
 *
 * @param request DeletePolarClawCronJobRequest
 * @return DeletePolarClawCronJobResponse
 */
DeletePolarClawCronJobResponse Client::deletePolarClawCronJob(const DeletePolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Deletes objects from PolarLakebase. This operation supports only Basic Edition and Cold Storage Edition instances.
 *
 * @description ## 请求说明
 * - `PolarFsInstanceId` 是必须提供的参数，用来指定要操作的PolarFS实例。
 * - `DBClusterId` 参数是可选的，如果提供，则表示与特定PolarDB集群关联的操作。
 * - `Objects` 参数是一个字符串数组，列出了所有需要被删除的对象路径，并且是必需的。
 *
 * @param tmpReq DeletePolarFsObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarFsObjectsResponse
 */
DeletePolarFsObjectsResponse Client::deletePolarFsObjectsWithOptions(const DeletePolarFsObjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePolarFsObjectsShrinkRequest request = DeletePolarFsObjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectsToDelete()) {
    request.setObjectsToDeleteShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectsToDelete(), "ObjectsToDelete", "json"));
  }

  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasObjectsToDeleteShrink()) {
    query["ObjectsToDelete"] = request.getObjectsToDeleteShrink();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarFsObjects"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarFsObjectsResponse>();
}

/**
 * @summary Deletes objects from PolarLakebase. This operation supports only Basic Edition and Cold Storage Edition instances.
 *
 * @description ## 请求说明
 * - `PolarFsInstanceId` 是必须提供的参数，用来指定要操作的PolarFS实例。
 * - `DBClusterId` 参数是可选的，如果提供，则表示与特定PolarDB集群关联的操作。
 * - `Objects` 参数是一个字符串数组，列出了所有需要被删除的对象路径，并且是必需的。
 *
 * @param request DeletePolarFsObjectsRequest
 * @return DeletePolarFsObjectsResponse
 */
DeletePolarFsObjectsResponse Client::deletePolarFsObjects(const DeletePolarFsObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarFsObjectsWithOptions(request, runtime);
}

/**
 * @summary Deletes a path mapping for transparent acceleration.
 *
 * @param request DeletePolarFsPathMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarFsPathMappingResponse
 */
DeletePolarFsPathMappingResponse Client::deletePolarFsPathMappingWithOptions(const DeletePolarFsPathMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomBucketPathList()) {
    query["CustomBucketPathList"] = request.getCustomBucketPathList();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarFsPathMapping"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarFsPathMappingResponse>();
}

/**
 * @summary Deletes a path mapping for transparent acceleration.
 *
 * @param request DeletePolarFsPathMappingRequest
 * @return DeletePolarFsPathMappingResponse
 */
DeletePolarFsPathMappingResponse Client::deletePolarFsPathMapping(const DeletePolarFsPathMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarFsPathMappingWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more quota rules from a specified Polarlakebase instance.
 *
 * @description ## Request description
 * - You must specify the `PolarFsInstanceId` parameter to identify the Polarlakebase instance.
 * - The `Quotas` parameter is a list of quota rules to delete. Each rule is uniquely identified by its `Name` and `Id`. You can delete up to 21 rules in a single request.
 * - For each quota rule, provide both the `Name` and `Id`. This information must match an existing rule.
 *
 * @param request DeletePolarFsQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolarFsQuotaResponse
 */
DeletePolarFsQuotaResponse Client::deletePolarFsQuotaWithOptions(const DeletePolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasQuotas()) {
    query["Quotas"] = request.getQuotas();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolarFsQuota"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolarFsQuotaResponse>();
}

/**
 * @summary Deletes one or more quota rules from a specified Polarlakebase instance.
 *
 * @description ## Request description
 * - You must specify the `PolarFsInstanceId` parameter to identify the Polarlakebase instance.
 * - The `Quotas` parameter is a list of quota rules to delete. Each rule is uniquely identified by its `Name` and `Id`. You can delete up to 21 rules in a single request.
 * - For each quota rule, provide both the `Name` and `Id`. This information must match an existing rule.
 *
 * @param request DeletePolarFsQuotaRequest
 * @return DeletePolarFsQuotaResponse
 */
DeletePolarFsQuotaResponse Client::deletePolarFsQuota(const DeletePolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary Deletes a throttling policy.
 *
 * @param request DeleteRateLimitPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRateLimitPolicyResponse
 */
DeleteRateLimitPolicyResponse Client::deleteRateLimitPolicyWithOptions(const DeleteRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRateLimitPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRateLimitPolicyResponse>();
}

/**
 * @summary Deletes a throttling policy.
 *
 * @param request DeleteRateLimitPolicyRequest
 * @return DeleteRateLimitPolicyResponse
 */
DeleteRateLimitPolicyResponse Client::deleteRateLimitPolicy(const DeleteRateLimitPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRateLimitPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes SQL throttling rules.
 *
 * @param request DeleteSQLRateLimitingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSQLRateLimitingRulesResponse
 */
DeleteSQLRateLimitingRulesResponse Client::deleteSQLRateLimitingRulesWithOptions(const DeleteSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSQLRateLimitingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSQLRateLimitingRulesResponse>();
}

/**
 * @summary Deletes SQL throttling rules.
 *
 * @param request DeleteSQLRateLimitingRulesRequest
 * @return DeleteSQLRateLimitingRulesResponse
 */
DeleteSQLRateLimitingRulesResponse Client::deleteSQLRateLimitingRules(const DeleteSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom instance.
 *
 * @param request DescribeAIDBClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterAttributeResponse
 */
DescribeAIDBClusterAttributeResponse Client::describeAIDBClusterAttributeWithOptions(const DescribeAIDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterAttributeResponse>();
}

/**
 * @summary Queries the details of a custom instance.
 *
 * @param request DescribeAIDBClusterAttributeRequest
 * @return DescribeAIDBClusterAttributeResponse
 */
DescribeAIDBClusterAttributeResponse Client::describeAIDBClusterAttribute(const DescribeAIDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Query datasets
 *
 * @param request DescribeAIDBClusterDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterDatasetsResponse
 */
DescribeAIDBClusterDatasetsResponse Client::describeAIDBClusterDatasetsWithOptions(const DescribeAIDBClusterDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinuationToken()) {
    query["ContinuationToken"] = request.getContinuationToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetType()) {
    query["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrainMode()) {
    query["TrainMode"] = request.getTrainMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterDatasets"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterDatasetsResponse>();
}

/**
 * @summary Query datasets
 *
 * @param request DescribeAIDBClusterDatasetsRequest
 * @return DescribeAIDBClusterDatasetsResponse
 */
DescribeAIDBClusterDatasetsResponse Client::describeAIDBClusterDatasets(const DescribeAIDBClusterDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterDatasetsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the performance metrics of an AI container.
 *
 * @param request DescribeAIDBClusterPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterPerformanceResponse
 */
DescribeAIDBClusterPerformanceResponse Client::describeAIDBClusterPerformanceWithOptions(const DescribeAIDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterPerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterPerformanceResponse>();
}

/**
 * @summary Retrieves the performance metrics of an AI container.
 *
 * @param request DescribeAIDBClusterPerformanceRequest
 * @return DescribeAIDBClusterPerformanceResponse
 */
DescribeAIDBClusterPerformanceResponse Client::describeAIDBClusterPerformance(const DescribeAIDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary Get task instance details
 *
 * @param request DescribeAIDBClusterTaskAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterTaskAttributeResponse
 */
DescribeAIDBClusterTaskAttributeResponse Client::describeAIDBClusterTaskAttributeWithOptions(const DescribeAIDBClusterTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterTaskAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterTaskAttributeResponse>();
}

/**
 * @summary Get task instance details
 *
 * @param request DescribeAIDBClusterTaskAttributeRequest
 * @return DescribeAIDBClusterTaskAttributeResponse
 */
DescribeAIDBClusterTaskAttributeResponse Client::describeAIDBClusterTaskAttribute(const DescribeAIDBClusterTaskAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTaskAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of model operators.
 *
 * @param request DescribeAIDBClusterTaskLogFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterTaskLogFilesResponse
 */
DescribeAIDBClusterTaskLogFilesResponse Client::describeAIDBClusterTaskLogFilesWithOptions(const DescribeAIDBClusterTaskLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRelativeDBClusterId()) {
    query["RelativeDBClusterId"] = request.getRelativeDBClusterId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterTaskLogFiles"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterTaskLogFilesResponse>();
}

/**
 * @summary Queries the logs of model operators.
 *
 * @param request DescribeAIDBClusterTaskLogFilesRequest
 * @return DescribeAIDBClusterTaskLogFilesResponse
 */
DescribeAIDBClusterTaskLogFilesResponse Client::describeAIDBClusterTaskLogFiles(const DescribeAIDBClusterTaskLogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTaskLogFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of model operators.
 *
 * @description > For more information about kernel versions for PolarDB for MySQL clusters, see [Kernel versions](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
 *
 * @param request DescribeAIDBClusterTaskMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterTaskMetricsResponse
 */
DescribeAIDBClusterTaskMetricsResponse Client::describeAIDBClusterTaskMetricsWithOptions(const DescribeAIDBClusterTaskMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRelativeDBClusterId()) {
    query["RelativeDBClusterId"] = request.getRelativeDBClusterId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterTaskMetrics"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterTaskMetricsResponse>();
}

/**
 * @summary Queries the metrics of model operators.
 *
 * @description > For more information about kernel versions for PolarDB for MySQL clusters, see [Kernel versions](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
 *
 * @param request DescribeAIDBClusterTaskMetricsRequest
 * @return DescribeAIDBClusterTaskMetricsResponse
 */
DescribeAIDBClusterTaskMetricsResponse Client::describeAIDBClusterTaskMetrics(const DescribeAIDBClusterTaskMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTaskMetricsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of model operators for a specified PolarDB instance.
 *
 * @description ## Request
 * - This API returns a list of model operators filtered by the `RelativeDBClusterId` and `KubeType` parameters.
 * - Note: Ensure the provided `RelativeDBClusterId` matches the ID of an existing PolarDB database instance. Otherwise, no data will be returned.
 *
 * @param request DescribeAIDBClusterTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClusterTasksResponse
 */
DescribeAIDBClusterTasksResponse Client::describeAIDBClusterTasksWithOptions(const DescribeAIDBClusterTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKubeType()) {
    query["KubeType"] = request.getKubeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRelativeDBClusterId()) {
    query["RelativeDBClusterId"] = request.getRelativeDBClusterId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusterTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClusterTasksResponse>();
}

/**
 * @summary Retrieves a list of model operators for a specified PolarDB instance.
 *
 * @description ## Request
 * - This API returns a list of model operators filtered by the `RelativeDBClusterId` and `KubeType` parameters.
 * - Note: Ensure the provided `RelativeDBClusterId` matches the ID of an existing PolarDB database instance. Otherwise, no data will be returned.
 *
 * @param request DescribeAIDBClusterTasksRequest
 * @return DescribeAIDBClusterTasksResponse
 */
DescribeAIDBClusterTasksResponse Client::describeAIDBClusterTasks(const DescribeAIDBClusterTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTasksWithOptions(request, runtime);
}

/**
 * @summary View custom clusters.
 *
 * @param request DescribeAIDBClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIDBClustersResponse
 */
DescribeAIDBClustersResponse Client::describeAIDBClustersWithOptions(const DescribeAIDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAiNodeType()) {
    query["AiNodeType"] = request.getAiNodeType();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.getDBClusterStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIDBClusters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIDBClustersResponse>();
}

/**
 * @summary View custom clusters.
 *
 * @param request DescribeAIDBClustersRequest
 * @return DescribeAIDBClustersResponse
 */
DescribeAIDBClustersResponse Client::describeAIDBClusters(const DescribeAIDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClustersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of the PolarDB for AI feature.
 *
 * @param request DescribeAITaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAITaskStatusResponse
 */
DescribeAITaskStatusResponse Client::describeAITaskStatusWithOptions(const DescribeAITaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAITaskStatus"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAITaskStatusResponse>();
}

/**
 * @summary Retrieves the status of the PolarDB for AI feature.
 *
 * @param request DescribeAITaskStatusRequest
 * @return DescribeAITaskStatusResponse
 */
DescribeAITaskStatusResponse Client::describeAITaskStatus(const DescribeAITaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAITaskStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a database account of a PolarDB cluster.
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountsResponse>();
}

/**
 * @summary Queries a database account of a PolarDB cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the edge clusters for PolarDB on ENS.
 *
 * @param request DescribeAccountsZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsZonalResponse
 */
DescribeAccountsZonalResponse Client::describeAccountsZonalWithOptions(const DescribeAccountsZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountsZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountsZonalResponse>();
}

/**
 * @summary Queries the edge clusters for PolarDB on ENS.
 *
 * @param request DescribeAccountsZonalRequest
 * @return DescribeAccountsZonalResponse
 */
DescribeAccountsZonalResponse Client::describeAccountsZonal(const DescribeAccountsZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsZonalWithOptions(request, runtime);
}

/**
 * @summary Queries an activation code.
 *
 * @param request DescribeActivationCodeDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActivationCodeDetailsResponse
 */
DescribeActivationCodeDetailsResponse Client::describeActivationCodeDetailsWithOptions(const DescribeActivationCodeDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivationCodeId()) {
    query["ActivationCodeId"] = request.getActivationCodeId();
  }

  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.getAliyunOrderId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActivationCodeDetails"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActivationCodeDetailsResponse>();
}

/**
 * @summary Queries an activation code.
 *
 * @param request DescribeActivationCodeDetailsRequest
 * @return DescribeActivationCodeDetailsResponse
 */
DescribeActivationCodeDetailsResponse Client::describeActivationCodeDetails(const DescribeActivationCodeDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActivationCodeDetailsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of activation codes associated with your account. You can filter the results by order ID or specific hardware identifiers.
 *
 * @param request DescribeActivationCodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActivationCodesResponse
 */
DescribeActivationCodesResponse Client::describeActivationCodesWithOptions(const DescribeActivationCodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.getAliyunOrderId();
  }

  if (!!request.hasMacAddress()) {
    query["MacAddress"] = request.getMacAddress();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSystemIdentifier()) {
    query["SystemIdentifier"] = request.getSystemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActivationCodes"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActivationCodesResponse>();
}

/**
 * @summary Retrieves a paginated list of activation codes associated with your account. You can filter the results by order ID or specific hardware identifiers.
 *
 * @param request DescribeActivationCodesRequest
 * @return DescribeActivationCodesResponse
 */
DescribeActivationCodesResponse Client::describeActivationCodes(const DescribeActivationCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActivationCodesWithOptions(request, runtime);
}

/**
 * @summary Queries the Operations and Maintenance (O&M) configuration for a user, including the active O&M window.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConfWithOptions(const DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationMaintainConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationMaintainConfResponse>();
}

/**
 * @summary Queries the Operations and Maintenance (O&M) configuration for a user, including the active O&M window.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Queries operation and maintenance events for instances.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasksWithOptions(const DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowCancel()) {
    query["AllowCancel"] = request.getAllowCancel();
  }

  if (!!request.hasAllowChange()) {
    query["AllowChange"] = request.getAllowChange();
  }

  if (!!request.hasChangeLevel()) {
    query["ChangeLevel"] = request.getChangeLevel();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTasksResponse>();
}

/**
 * @summary Queries operation and maintenance events for instances.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an AgenticDB branch.
 *
 * @param request DescribeAgenticDBBranchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBBranchResponse
 */
DescribeAgenticDBBranchResponse Client::describeAgenticDBBranchWithOptions(const DescribeAgenticDBBranchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchId()) {
    query["BranchId"] = request.getBranchId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBBranch"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBBranchResponse>();
}

/**
 * @summary Queries the details of an AgenticDB branch.
 *
 * @param request DescribeAgenticDBBranchRequest
 * @return DescribeAgenticDBBranchResponse
 */
DescribeAgenticDBBranchResponse Client::describeAgenticDBBranch(const DescribeAgenticDBBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBBranchWithOptions(request, runtime);
}

/**
 * @summary Queries the connection information of an AgenticDB branch.
 *
 * @param request DescribeAgenticDBBranchEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBBranchEndpointsResponse
 */
DescribeAgenticDBBranchEndpointsResponse Client::describeAgenticDBBranchEndpointsWithOptions(const DescribeAgenticDBBranchEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchId()) {
    query["BranchId"] = request.getBranchId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBBranchEndpoints"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBBranchEndpointsResponse>();
}

/**
 * @summary Queries the connection information of an AgenticDB branch.
 *
 * @param request DescribeAgenticDBBranchEndpointsRequest
 * @return DescribeAgenticDBBranchEndpointsResponse
 */
DescribeAgenticDBBranchEndpointsResponse Client::describeAgenticDBBranchEndpoints(const DescribeAgenticDBBranchEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBBranchEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the branch lineage of an AgenticDB cluster.
 *
 * @param request DescribeAgenticDBBranchLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBBranchLineageResponse
 */
DescribeAgenticDBBranchLineageResponse Client::describeAgenticDBBranchLineageWithOptions(const DescribeAgenticDBBranchLineageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchId()) {
    query["BranchId"] = request.getBranchId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasIncludeDestroying()) {
    query["IncludeDestroying"] = request.getIncludeDestroying();
  }

  if (!!request.hasMaxViewDepth()) {
    query["MaxViewDepth"] = request.getMaxViewDepth();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBBranchLineage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBBranchLineageResponse>();
}

/**
 * @summary Queries the branch lineage of an AgenticDB cluster.
 *
 * @param request DescribeAgenticDBBranchLineageRequest
 * @return DescribeAgenticDBBranchLineageResponse
 */
DescribeAgenticDBBranchLineageResponse Client::describeAgenticDBBranchLineage(const DescribeAgenticDBBranchLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBBranchLineageWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AgenticDB branches.
 *
 * @param request DescribeAgenticDBBranchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBBranchesResponse
 */
DescribeAgenticDBBranchesResponse Client::describeAgenticDBBranchesWithOptions(const DescribeAgenticDBBranchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBBranches"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBBranchesResponse>();
}

/**
 * @summary Queries the list of AgenticDB branches.
 *
 * @param request DescribeAgenticDBBranchesRequest
 * @return DescribeAgenticDBBranchesResponse
 */
DescribeAgenticDBBranchesResponse Client::describeAgenticDBBranches(const DescribeAgenticDBBranchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBBranchesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Agentic Database clusters.
 *
 * @description ## Operation description
 * - This operation supports filtering and returning the list of related model operators based on the `RelativeDBClusterId` and `KubeType` parameters.
 * - Note: Ensure that the `RelativeDBClusterId` provided in the request matches an existing PolarDB database instance ID. Otherwise, data cannot be retrieved correctly.
 *
 * @param request DescribeAgenticDBClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBClustersResponse
 */
DescribeAgenticDBClustersResponse Client::describeAgenticDBClustersWithOptions(const DescribeAgenticDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticDbClusterIds()) {
    query["AgenticDbClusterIds"] = request.getAgenticDbClusterIds();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.getDBClusterStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBClusters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBClustersResponse>();
}

/**
 * @summary Queries the list of Agentic Database clusters.
 *
 * @description ## Operation description
 * - This operation supports filtering and returning the list of related model operators based on the `RelativeDBClusterId` and `KubeType` parameters.
 * - Note: Ensure that the `RelativeDBClusterId` provided in the request matches an existing PolarDB database instance ID. Otherwise, data cannot be retrieved correctly.
 *
 * @param request DescribeAgenticDBClustersRequest
 * @return DescribeAgenticDBClustersResponse
 */
DescribeAgenticDBClustersResponse Client::describeAgenticDBClusters(const DescribeAgenticDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AgenticDB compute instances.
 *
 * @param request DescribeAgenticDBComputeClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBComputeClustersResponse
 */
DescribeAgenticDBComputeClustersResponse Client::describeAgenticDBComputeClustersWithOptions(const DescribeAgenticDBComputeClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeClusterId()) {
    query["ComputeClusterId"] = request.getComputeClusterId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBComputeClusters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBComputeClustersResponse>();
}

/**
 * @summary Queries the list of AgenticDB compute instances.
 *
 * @param request DescribeAgenticDBComputeClustersRequest
 * @return DescribeAgenticDBComputeClustersResponse
 */
DescribeAgenticDBComputeClustersResponse Client::describeAgenticDBComputeClusters(const DescribeAgenticDBComputeClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBComputeClustersWithOptions(request, runtime);
}

/**
 * @summary 查询 AgenticDB 项目详情
 *
 * @param request DescribeAgenticDBProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBProjectResponse
 */
DescribeAgenticDBProjectResponse Client::describeAgenticDBProjectWithOptions(const DescribeAgenticDBProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBProject"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBProjectResponse>();
}

/**
 * @summary 查询 AgenticDB 项目详情
 *
 * @param request DescribeAgenticDBProjectRequest
 * @return DescribeAgenticDBProjectResponse
 */
DescribeAgenticDBProjectResponse Client::describeAgenticDBProject(const DescribeAgenticDBProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBProjectWithOptions(request, runtime);
}

/**
 * @summary 查询 AgenticDB 项目列表
 *
 * @param request DescribeAgenticDBProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBProjectsResponse
 */
DescribeAgenticDBProjectsResponse Client::describeAgenticDBProjectsWithOptions(const DescribeAgenticDBProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBProjects"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBProjectsResponse>();
}

/**
 * @summary 查询 AgenticDB 项目列表
 *
 * @param request DescribeAgenticDBProjectsRequest
 * @return DescribeAgenticDBProjectsResponse
 */
DescribeAgenticDBProjectsResponse Client::describeAgenticDBProjects(const DescribeAgenticDBProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of API keys for an AgenticDB tenant.
 *
 * @param request DescribeAgenticDBTenantApiKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticDBTenantApiKeysResponse
 */
DescribeAgenticDBTenantApiKeysResponse Client::describeAgenticDBTenantApiKeysWithOptions(const DescribeAgenticDBTenantApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantName()) {
    query["TenantName"] = request.getTenantName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgenticDBTenantApiKeys"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticDBTenantApiKeysResponse>();
}

/**
 * @summary Queries the list of API keys for an AgenticDB tenant.
 *
 * @param request DescribeAgenticDBTenantApiKeysRequest
 * @return DescribeAgenticDBTenantApiKeysResponse
 */
DescribeAgenticDBTenantApiKeysResponse Client::describeAgenticDBTenantApiKeys(const DescribeAgenticDBTenantApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticDBTenantApiKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified API key.
 *
 * @param request DescribeApikeyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApikeyAttributeResponse
 */
DescribeApikeyAttributeResponse Client::describeApikeyAttributeWithOptions(const DescribeApikeyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApikeyAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApikeyAttributeResponse>();
}

/**
 * @summary Queries the details of a specified API key.
 *
 * @param request DescribeApikeyAttributeRequest
 * @return DescribeApikeyAttributeResponse
 */
DescribeApikeyAttributeResponse Client::describeApikeyAttribute(const DescribeApikeyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApikeyAttributeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specific application in a PolarDB instance.
 *
 * @description Retrieves all information about a specific PolarDB application, such as component details and endpoints.
 *
 * @param request DescribeApplicationAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationAttributeResponse
 */
DescribeApplicationAttributeResponse Client::describeApplicationAttributeWithOptions(const DescribeApplicationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationAttributeResponse>();
}

/**
 * @summary Retrieves the details of a specific application in a PolarDB instance.
 *
 * @description Retrieves all information about a specific PolarDB application, such as component details and endpoints.
 *
 * @param request DescribeApplicationAttributeRequest
 * @return DescribeApplicationAttributeResponse
 */
DescribeApplicationAttributeResponse Client::describeApplicationAttribute(const DescribeApplicationAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationAttributeWithOptions(request, runtime);
}

/**
 * @summary AI Application Log Details
 *
 * @param request DescribeApplicationLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationLogsResponse
 */
DescribeApplicationLogsResponse Client::describeApplicationLogsWithOptions(const DescribeApplicationLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.getComponentName();
  }

  if (!!request.hasContainerName()) {
    query["ContainerName"] = request.getContainerName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationLogs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationLogsResponse>();
}

/**
 * @summary AI Application Log Details
 *
 * @param request DescribeApplicationLogsRequest
 * @return DescribeApplicationLogsResponse
 */
DescribeApplicationLogsResponse Client::describeApplicationLogs(const DescribeApplicationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the current parameters and template information for a specified application and its components.
 *
 * @param tmpReq DescribeApplicationParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationParametersResponse
 */
DescribeApplicationParametersResponse Client::describeApplicationParametersWithOptions(const DescribeApplicationParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeApplicationParametersShrinkRequest request = DescribeApplicationParametersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponentIdList()) {
    request.setComponentIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponentIdList(), "ComponentIdList", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasComponentIdListShrink()) {
    query["ComponentIdList"] = request.getComponentIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationParametersResponse>();
}

/**
 * @summary Retrieves the current parameters and template information for a specified application and its components.
 *
 * @param request DescribeApplicationParametersRequest
 * @return DescribeApplicationParametersResponse
 */
DescribeApplicationParametersResponse Client::describeApplicationParameters(const DescribeApplicationParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationParametersWithOptions(request, runtime);
}

/**
 * @summary Querying PolarDB AI application performance.
 *
 * @param request DescribeApplicationPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationPerformanceResponse
 */
DescribeApplicationPerformanceResponse Client::describeApplicationPerformanceWithOptions(const DescribeApplicationPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasConsumer()) {
    query["Consumer"] = request.getConsumer();
  }

  if (!!request.hasConsumerGroup()) {
    query["ConsumerGroup"] = request.getConsumerGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasModelService()) {
    query["ModelService"] = request.getModelService();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationPerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationPerformanceResponse>();
}

/**
 * @summary Querying PolarDB AI application performance.
 *
 * @param request DescribeApplicationPerformanceRequest
 * @return DescribeApplicationPerformanceResponse
 */
DescribeApplicationPerformanceResponse Client::describeApplicationPerformance(const DescribeApplicationPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationPerformanceWithOptions(request, runtime);
}

/**
 * @summary Lists the Application Prompts for a specific Application.
 *
 * @param request DescribeApplicationPromptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationPromptsResponse
 */
DescribeApplicationPromptsResponse Client::describeApplicationPromptsWithOptions(const DescribeApplicationPromptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationPrompts"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationPromptsResponse>();
}

/**
 * @summary Lists the Application Prompts for a specific Application.
 *
 * @param request DescribeApplicationPromptsRequest
 * @return DescribeApplicationPromptsResponse
 */
DescribeApplicationPromptsResponse Client::describeApplicationPrompts(const DescribeApplicationPromptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationPromptsWithOptions(request, runtime);
}

/**
 * @summary Queries the Serverless configuration for a PolarDB application.
 *
 * @param request DescribeApplicationServerlessConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationServerlessConfResponse
 */
DescribeApplicationServerlessConfResponse Client::describeApplicationServerlessConfWithOptions(const DescribeApplicationServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationServerlessConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationServerlessConfResponse>();
}

/**
 * @summary Queries the Serverless configuration for a PolarDB application.
 *
 * @param request DescribeApplicationServerlessConfRequest
 * @return DescribeApplicationServerlessConfResponse
 */
DescribeApplicationServerlessConfResponse Client::describeApplicationServerlessConf(const DescribeApplicationServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationServerlessConfWithOptions(request, runtime);
}

/**
 * @summary Gets the list of applications for all PolarDB instances in a specified region.
 *
 * @param request DescribeApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationsResponse
 */
DescribeApplicationsResponse Client::describeApplicationsWithOptions(const DescribeApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationTypes()) {
    query["ApplicationTypes"] = request.getApplicationTypes();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplications"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationsResponse>();
}

/**
 * @summary Gets the list of applications for all PolarDB instances in a specified region.
 *
 * @param request DescribeApplicationsRequest
 * @return DescribeApplicationsResponse
 */
DescribeApplicationsResponse Client::describeApplications(const DescribeApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationsWithOptions(request, runtime);
}

/**
 * @summary Describes the auto-renewal status of a subscription PolarDB cluster.
 *
 * @param request DescribeAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttributeWithOptions(const DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoRenewAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoRenewAttributeResponse>();
}

/**
 * @summary Describes the auto-renewal status of a subscription PolarDB cluster.
 *
 * @param request DescribeAutoRenewAttributeRequest
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of regions available for cross-region backup.
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegionsWithOptions(const DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableCrossRegions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableCrossRegionsResponse>();
}

/**
 * @summary Retrieves a list of regions available for cross-region backup.
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegions(const DescribeAvailableCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableCrossRegionsWithOptions(request, runtime);
}

/**
 * @summary Lists the available models in an AI cluster.
 *
 * @param request DescribeAvailableModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableModelsResponse
 */
DescribeAvailableModelsResponse Client::describeAvailableModelsWithOptions(const DescribeAvailableModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKubeType()) {
    query["KubeType"] = request.getKubeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableModels"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableModelsResponse>();
}

/**
 * @summary Lists the available models in an AI cluster.
 *
 * @param request DescribeAvailableModelsRequest
 * @return DescribeAvailableModelsResponse
 */
DescribeAvailableModelsResponse Client::describeAvailableModels(const DescribeAvailableModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableModelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backup logs and returns their download URLs.
 *
 * @param request DescribeBackupLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupLogsResponse
 */
DescribeBackupLogsResponse Client::describeBackupLogsWithOptions(const DescribeBackupLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRegion()) {
    query["BackupRegion"] = request.getBackupRegion();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupLogs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupLogsResponse>();
}

/**
 * @summary Queries a list of backup logs and returns their download URLs.
 *
 * @param request DescribeBackupLogsRequest
 * @return DescribeBackupLogsResponse
 */
DescribeBackupLogsResponse Client::describeBackupLogs(const DescribeBackupLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic backup policy of a PolarDB cluster.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPolicyResponse>();
}

/**
 * @summary Queries the automatic backup policy of a PolarDB cluster.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that store backup sets.
 *
 * @param request DescribeBackupRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupRegionsResponse
 */
DescribeBackupRegionsResponse Client::describeBackupRegionsWithOptions(const DescribeBackupRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupRegions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupRegionsResponse>();
}

/**
 * @summary Queries the regions that store backup sets.
 *
 * @param request DescribeBackupRegionsRequest
 * @return DescribeBackupRegionsResponse
 */
DescribeBackupRegionsResponse Client::describeBackupRegions(const DescribeBackupRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupRegionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of backup jobs and their details for a cluster.
 *
 * @param request DescribeBackupTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasksWithOptions(const DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupJobId()) {
    query["BackupJobId"] = request.getBackupJobId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupTasksResponse>();
}

/**
 * @summary Retrieves a list of backup jobs and their details for a cluster.
 *
 * @param request DescribeBackupTasksRequest
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasks(const DescribeBackupTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTasksWithOptions(request, runtime);
}

/**
 * @summary Queries backup information for a PolarDB cluster.
 *
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupRegion()) {
    query["BackupRegion"] = request.getBackupRegion();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.getBackupStatus();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupsResponse>();
}

/**
 * @summary Queries backup information for a PolarDB cluster.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a batch task.
 *
 * @param request DescribeBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchTaskResponse
 */
DescribeBatchTaskResponse Client::describeBatchTaskWithOptions(const DescribeBatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBatchTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchTaskResponse>();
}

/**
 * @summary Queries the status of a batch task.
 *
 * @param request DescribeBatchTaskRequest
 * @return DescribeBatchTaskResponse
 */
DescribeBatchTaskResponse Client::describeBatchTask(const DescribeBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the status of batch tasks.
 *
 * @param tmpReq DescribeBatchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchTasksResponse
 */
DescribeBatchTasksResponse Client::describeBatchTasksWithOptions(const DescribeBatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeBatchTasksShrinkRequest request = DescribeBatchTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "Status", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasStatusShrink()) {
    query["Status"] = request.getStatusShrink();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBatchTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchTasksResponse>();
}

/**
 * @summary Queries the status of batch tasks.
 *
 * @param request DescribeBatchTasksRequest
 * @return DescribeBatchTasksResponse
 */
DescribeBatchTasksResponse Client::describeBatchTasks(const DescribeBatchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchTasksWithOptions(request, runtime);
}

/**
 * @summary Querying budget policies
 *
 * @param request DescribeBudgetPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBudgetPoliciesResponse
 */
DescribeBudgetPoliciesResponse Client::describeBudgetPoliciesWithOptions(const DescribeBudgetPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBudgetDimensionRefId()) {
    query["BudgetDimensionRefId"] = request.getBudgetDimensionRefId();
  }

  if (!!request.hasBudgetDimensionType()) {
    query["BudgetDimensionType"] = request.getBudgetDimensionType();
  }

  if (!!request.hasBudgetPolicyId()) {
    query["BudgetPolicyId"] = request.getBudgetPolicyId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBudgetPolicies"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBudgetPoliciesResponse>();
}

/**
 * @summary Querying budget policies
 *
 * @param request DescribeBudgetPoliciesRequest
 * @return DescribeBudgetPoliciesResponse
 */
DescribeBudgetPoliciesResponse Client::describeBudgetPolicies(const DescribeBudgetPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBudgetPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the character sets supported by PolarDB for MySQL.
 *
 * @param request DescribeCharacterSetNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCharacterSetNameResponse
 */
DescribeCharacterSetNameResponse Client::describeCharacterSetNameWithOptions(const DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCharacterSetName"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCharacterSetNameResponse>();
}

/**
 * @summary Queries the character sets supported by PolarDB for MySQL.
 *
 * @param request DescribeCharacterSetNameRequest
 * @return DescribeCharacterSetNameResponse
 */
DescribeCharacterSetNameResponse Client::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCharacterSetNameWithOptions(request, runtime);
}

/**
 * @summary Lists the available cluster specifications.
 *
 * @param request DescribeClassListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClassListResponse
 */
DescribeClassListResponse Client::describeClassListWithOptions(const DescribeClassListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasMasterHa()) {
    query["MasterHa"] = request.getMasterHa();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClassList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClassListResponse>();
}

/**
 * @summary Lists the available cluster specifications.
 *
 * @param request DescribeClassListRequest
 * @return DescribeClassListResponse
 */
DescribeClassListResponse Client::describeClassList(const DescribeClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClassListWithOptions(request, runtime);
}

/**
 * @summary Queries cold storage instances.
 *
 * @param request DescribeColdStorageInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColdStorageInstanceResponse
 */
DescribeColdStorageInstanceResponse Client::describeColdStorageInstanceWithOptions(const DescribeColdStorageInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColdStorageInstance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColdStorageInstanceResponse>();
}

/**
 * @summary Queries cold storage instances.
 *
 * @param request DescribeColdStorageInstanceRequest
 * @return DescribeColdStorageInstanceResponse
 */
DescribeColdStorageInstanceResponse Client::describeColdStorageInstance(const DescribeColdStorageInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdStorageInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @param request DescribeConsumerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConsumerGroupsResponse
 */
DescribeConsumerGroupsResponse Client::describeConsumerGroupsWithOptions(const DescribeConsumerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupId()) {
    query["ConsumerGroupId"] = request.getConsumerGroupId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConsumerGroups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConsumerGroupsResponse>();
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @param request DescribeConsumerGroupsRequest
 * @return DescribeConsumerGroupsResponse
 */
DescribeConsumerGroupsResponse Client::describeConsumerGroups(const DescribeConsumerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConsumerGroupsWithOptions(request, runtime);
}

/**
 * @summary Returns a list of consumers.
 *
 * @param request DescribeConsumersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConsumersResponse
 */
DescribeConsumersResponse Client::describeConsumersWithOptions(const DescribeConsumersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupId()) {
    query["ConsumerGroupId"] = request.getConsumerGroupId();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConsumers"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConsumersResponse>();
}

/**
 * @summary Returns a list of consumers.
 *
 * @param request DescribeConsumersRequest
 * @return DescribeConsumersResponse
 */
DescribeConsumersResponse Client::describeConsumers(const DescribeConsumersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConsumersWithOptions(request, runtime);
}

/**
 * @summary Queries cost rules.
 *
 * @param request DescribeCostRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostRulesResponse
 */
DescribeCostRulesResponse Client::describeCostRulesWithOptions(const DescribeCostRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.getModelServiceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostRulesResponse>();
}

/**
 * @summary Queries cost rules.
 *
 * @param request DescribeCostRulesRequest
 * @return DescribeCostRulesResponse
 */
DescribeCostRulesResponse Client::describeCostRules(const DescribeCostRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the policies for automatically triggered tasks.
 *
 * @param request DescribeCronJobPolicyServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCronJobPolicyServerlessResponse
 */
DescribeCronJobPolicyServerlessResponse Client::describeCronJobPolicyServerlessWithOptions(const DescribeCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCronJobPolicyServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCronJobPolicyServerlessResponse>();
}

/**
 * @summary Queries the policies for automatically triggered tasks.
 *
 * @param request DescribeCronJobPolicyServerlessRequest
 * @return DescribeCronJobPolicyServerlessResponse
 */
DescribeCronJobPolicyServerlessResponse Client::describeCronJobPolicyServerless(const DescribeCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary Queries the supported cross-cloud specifications.
 *
 * @param request DescribeCrossCloudLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossCloudLevelsResponse
 */
DescribeCrossCloudLevelsResponse Client::describeCrossCloudLevelsWithOptions(const DescribeCrossCloudLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossCloudLevels"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossCloudLevelsResponse>();
}

/**
 * @summary Queries the supported cross-cloud specifications.
 *
 * @param request DescribeCrossCloudLevelsRequest
 * @return DescribeCrossCloudLevelsResponse
 */
DescribeCrossCloudLevelsResponse Client::describeCrossCloudLevels(const DescribeCrossCloudLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudLevelsWithOptions(request, runtime);
}

/**
 * @summary Queries cross-cloud regions.
 *
 * @param request DescribeCrossCloudRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossCloudRegionResponse
 */
DescribeCrossCloudRegionResponse Client::describeCrossCloudRegionWithOptions(const DescribeCrossCloudRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasCrossCloudRegionId()) {
    query["CrossCloudRegionId"] = request.getCrossCloudRegionId();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossCloudRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossCloudRegionResponse>();
}

/**
 * @summary Queries cross-cloud regions.
 *
 * @param request DescribeCrossCloudRegionRequest
 * @return DescribeCrossCloudRegionResponse
 */
DescribeCrossCloudRegionResponse Client::describeCrossCloudRegion(const DescribeCrossCloudRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudRegionWithOptions(request, runtime);
}

/**
 * @summary This operation queries cross-cloud region mappings.
 *
 * @param request DescribeCrossCloudRegionMappingToAliyunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossCloudRegionMappingToAliyunResponse
 */
DescribeCrossCloudRegionMappingToAliyunResponse Client::describeCrossCloudRegionMappingToAliyunWithOptions(const DescribeCrossCloudRegionMappingToAliyunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunRegionId()) {
    query["AliyunRegionId"] = request.getAliyunRegionId();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasCrossCloudRegionId()) {
    query["CrossCloudRegionId"] = request.getCrossCloudRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossCloudRegionMappingToAliyun"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossCloudRegionMappingToAliyunResponse>();
}

/**
 * @summary This operation queries cross-cloud region mappings.
 *
 * @param request DescribeCrossCloudRegionMappingToAliyunRequest
 * @return DescribeCrossCloudRegionMappingToAliyunResponse
 */
DescribeCrossCloudRegionMappingToAliyunResponse Client::describeCrossCloudRegionMappingToAliyun(const DescribeCrossCloudRegionMappingToAliyunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudRegionMappingToAliyunWithOptions(request, runtime);
}

/**
 * @summary Queries the IP whitelists and security groups that are allowed to access a database cluster.
 *
 * @param request DescribeDBClusterAccessWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAccessWhitelistResponse
 */
DescribeDBClusterAccessWhitelistResponse Client::describeDBClusterAccessWhitelistWithOptions(const DescribeDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAccessWhitelist"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAccessWhitelistResponse>();
}

/**
 * @summary Queries the IP whitelists and security groups that are allowed to access a database cluster.
 *
 * @param request DescribeDBClusterAccessWhitelistRequest
 * @return DescribeDBClusterAccessWhitelistResponse
 */
DescribeDBClusterAccessWhitelistResponse Client::describeDBClusterAccessWhitelist(const DescribeDBClusterAccessWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAccessWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the attribute information of a cluster.
 *
 * @param request DescribeDBClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttributeWithOptions(const DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAttributeResponse>();
}

/**
 * @summary Queries the attribute information of a cluster.
 *
 * @param request DescribeDBClusterAttributeRequest
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
 *
 * @param request DescribeDBClusterAuditLogCollectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAuditLogCollectorResponse
 */
DescribeDBClusterAuditLogCollectorResponse Client::describeDBClusterAuditLogCollectorWithOptions(const DescribeDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAuditLogCollector"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAuditLogCollectorResponse>();
}

/**
 * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
 *
 * @param request DescribeDBClusterAuditLogCollectorRequest
 * @return DescribeDBClusterAuditLogCollectorResponse
 */
DescribeDBClusterAuditLogCollectorResponse Client::describeDBClusterAuditLogCollector(const DescribeDBClusterAuditLogCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAuditLogCollectorWithOptions(request, runtime);
}

/**
 * @summary Queries the available resources of a PolarDB cluster.
 *
 * @param request DescribeDBClusterAvailableResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAvailableResourcesResponse
 */
DescribeDBClusterAvailableResourcesResponse Client::describeDBClusterAvailableResourcesWithOptions(const DescribeDBClusterAvailableResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAvailableResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAvailableResourcesResponse>();
}

/**
 * @summary Queries the available resources of a PolarDB cluster.
 *
 * @param request DescribeDBClusterAvailableResourcesRequest
 * @return DescribeDBClusterAvailableResourcesResponse
 */
DescribeDBClusterAvailableResourcesResponse Client::describeDBClusterAvailableResources(const DescribeDBClusterAvailableResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAvailableResourcesWithOptions(request, runtime);
}

/**
 * @summary Checks whether a database cluster is accessible from a source IP address.
 *
 * @param request DescribeDBClusterConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterConnectivityResponse
 */
DescribeDBClusterConnectivityResponse Client::describeDBClusterConnectivityWithOptions(const DescribeDBClusterConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterConnectivity"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterConnectivityResponse>();
}

/**
 * @summary Checks whether a database cluster is accessible from a source IP address.
 *
 * @param request DescribeDBClusterConnectivityRequest
 * @return DescribeDBClusterConnectivityResponse
 */
DescribeDBClusterConnectivityResponse Client::describeDBClusterConnectivity(const DescribeDBClusterConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConnectivityWithOptions(request, runtime);
}

/**
 * @summary Queries the key usage details for a specified PolarDB cluster.
 *
 * @description ## Description
 * - Query the key usage details for a PolarDB cluster, such as the key ID, status, and type.
 * - The `DBClusterId`Parameter is required. It specifies the ID of the PolarDB cluster to query.
 * - Before you call this operation, make sure that the required Resource Access Management (RAM) roles and policies are configured.
 *
 * @param request DescribeDBClusterEncryptionKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterEncryptionKeyResponse
 */
DescribeDBClusterEncryptionKeyResponse Client::describeDBClusterEncryptionKeyWithOptions(const DescribeDBClusterEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterEncryptionKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterEncryptionKeyResponse>();
}

/**
 * @summary Queries the key usage details for a specified PolarDB cluster.
 *
 * @description ## Description
 * - Query the key usage details for a PolarDB cluster, such as the key ID, status, and type.
 * - The `DBClusterId`Parameter is required. It specifies the ID of the PolarDB cluster to query.
 * - Before you call this operation, make sure that the required Resource Access Management (RAM) roles and policies are configured.
 *
 * @param request DescribeDBClusterEncryptionKeyRequest
 * @return DescribeDBClusterEncryptionKeyResponse
 */
DescribeDBClusterEncryptionKeyResponse Client::describeDBClusterEncryptionKey(const DescribeDBClusterEncryptionKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterEncryptionKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoints of a PolarDB cluster.
 *
 * @param request DescribeDBClusterEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterEndpointsResponse
 */
DescribeDBClusterEndpointsResponse Client::describeDBClusterEndpointsWithOptions(const DescribeDBClusterEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterEndpoints"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterEndpointsResponse>();
}

/**
 * @summary Queries the endpoints of a PolarDB cluster.
 *
 * @param request DescribeDBClusterEndpointsRequest
 * @return DescribeDBClusterEndpointsResponse
 */
DescribeDBClusterEndpointsResponse Client::describeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoints of an edge cluster for PolarDB on ENS.
 *
 * @param request DescribeDBClusterEndpointsZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterEndpointsZonalResponse
 */
DescribeDBClusterEndpointsZonalResponse Client::describeDBClusterEndpointsZonalWithOptions(const DescribeDBClusterEndpointsZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterEndpointsZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterEndpointsZonalResponse>();
}

/**
 * @summary Queries the endpoints of an edge cluster for PolarDB on ENS.
 *
 * @param request DescribeDBClusterEndpointsZonalRequest
 * @return DescribeDBClusterEndpointsZonalResponse
 */
DescribeDBClusterEndpointsZonalResponse Client::describeDBClusterEndpointsZonal(const DescribeDBClusterEndpointsZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterEndpointsZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the migration status of a PolarDB cluster.
 *
 * @description - You can use this operation to query the status of a one-click migration from an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
 * - Before you call this operation, you must create a one-click upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**.
 *
 * @param request DescribeDBClusterMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterMigrationResponse
 */
DescribeDBClusterMigrationResponse Client::describeDBClusterMigrationWithOptions(const DescribeDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterMigration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterMigrationResponse>();
}

/**
 * @summary Queries the migration status of a PolarDB cluster.
 *
 * @description - You can use this operation to query the status of a one-click migration from an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
 * - Before you call this operation, you must create a one-click upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**.
 *
 * @param request DescribeDBClusterMigrationRequest
 * @return DescribeDBClusterMigrationResponse
 */
DescribeDBClusterMigrationResponse Client::describeDBClusterMigration(const DescribeDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
 *
 * @param request DescribeDBClusterMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterMonitorResponse
 */
DescribeDBClusterMonitorResponse Client::describeDBClusterMonitorWithOptions(const DescribeDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterMonitor"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterMonitorResponse>();
}

/**
 * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
 *
 * @param request DescribeDBClusterMonitorRequest
 * @return DescribeDBClusterMonitorResponse
 */
DescribeDBClusterMonitorResponse Client::describeDBClusterMonitor(const DescribeDBClusterMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries database endpoints.
 *
 * @param request DescribeDBClusterNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterNetInfoResponse
 */
DescribeDBClusterNetInfoResponse Client::describeDBClusterNetInfoWithOptions(const DescribeDBClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringType()) {
    query["ConnectionStringType"] = request.getConnectionStringType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterNetInfo"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterNetInfoResponse>();
}

/**
 * @summary Queries database endpoints.
 *
 * @param request DescribeDBClusterNetInfoRequest
 * @return DescribeDBClusterNetInfoResponse
 */
DescribeDBClusterNetInfoResponse Client::describeDBClusterNetInfo(const DescribeDBClusterNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of running parameters for a PolarDB cluster.
 *
 * @param request DescribeDBClusterParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterParametersResponse
 */
DescribeDBClusterParametersResponse Client::describeDBClusterParametersWithOptions(const DescribeDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterParametersResponse>();
}

/**
 * @summary Queries the list of running parameters for a PolarDB cluster.
 *
 * @param request DescribeDBClusterParametersRequest
 * @return DescribeDBClusterParametersResponse
 */
DescribeDBClusterParametersResponse Client::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of a PolarDB cluster.
 *
 * @description - If the monitoring frequency is once every 5 seconds:
 *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * - If the monitoring frequency is once every 60 seconds:
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * > The default monitoring frequency is once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the frequency to once every 5 seconds.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformanceWithOptions(const DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSubGroupName()) {
    query["SubGroupName"] = request.getSubGroupName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterPerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterPerformanceResponse>();
}

/**
 * @summary Queries the performance data of a PolarDB cluster.
 *
 * @description - If the monitoring frequency is once every 5 seconds:
 *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * - If the monitoring frequency is once every 60 seconds:
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * > The default monitoring frequency is once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the frequency to once every 5 seconds.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries a database cluster proxy.
 *
 * @param request DescribeDBClusterProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterProxyResponse
 */
DescribeDBClusterProxyResponse Client::describeDBClusterProxyWithOptions(const DescribeDBClusterProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterProxy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterProxyResponse>();
}

/**
 * @summary Queries a database cluster proxy.
 *
 * @param request DescribeDBClusterProxyRequest
 * @return DescribeDBClusterProxyResponse
 */
DescribeDBClusterProxyResponse Client::describeDBClusterProxy(const DescribeDBClusterProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterProxyWithOptions(request, runtime);
}

/**
 * @summary Queries the SSL settings of a PolarDB cluster.
 *
 * @param request DescribeDBClusterSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSLWithOptions(const DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterSSL"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterSSLResponse>();
}

/**
 * @summary Queries the SSL settings of a PolarDB cluster.
 *
 * @param request DescribeDBClusterSSLRequest
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSL(const DescribeDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of a serverless cluster.
 *
 * @param request DescribeDBClusterServerlessConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterServerlessConfResponse
 */
DescribeDBClusterServerlessConfResponse Client::describeDBClusterServerlessConfWithOptions(const DescribeDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterServerlessConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterServerlessConfResponse>();
}

/**
 * @summary Queries the configuration of a serverless cluster.
 *
 * @param request DescribeDBClusterServerlessConfRequest
 * @return DescribeDBClusterServerlessConfResponse
 */
DescribeDBClusterServerlessConfResponse Client::describeDBClusterServerlessConf(const DescribeDBClusterServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterServerlessConfWithOptions(request, runtime);
}

/**
 * @summary Queries the transparent data encryption (TDE) settings for a specified PolarDB cluster.
 *
 * @param request DescribeDBClusterTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterTDEResponse
 */
DescribeDBClusterTDEResponse Client::describeDBClusterTDEWithOptions(const DescribeDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterTDE"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterTDEResponse>();
}

/**
 * @summary Queries the transparent data encryption (TDE) settings for a specified PolarDB cluster.
 *
 * @param request DescribeDBClusterTDERequest
 * @return DescribeDBClusterTDEResponse
 */
DescribeDBClusterTDEResponse Client::describeDBClusterTDE(const DescribeDBClusterTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterTDEWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of the current kernel version for a PolarDB for MySQL cluster.
 *
 * @description > For more information about the kernel versions of PolarDB for MySQL clusters, see [Kernel version guide](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
 *
 * @param request DescribeDBClusterVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterVersionResponse
 */
DescribeDBClusterVersionResponse Client::describeDBClusterVersionWithOptions(const DescribeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterVersion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterVersionResponse>();
}

/**
 * @summary Retrieves the details of the current kernel version for a PolarDB for MySQL cluster.
 *
 * @description > For more information about the kernel versions of PolarDB for MySQL clusters, see [Kernel version guide](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
 *
 * @param request DescribeDBClusterVersionRequest
 * @return DescribeDBClusterVersionResponse
 */
DescribeDBClusterVersionResponse Client::describeDBClusterVersion(const DescribeDBClusterVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the version of a PolarDB edge cluster.
 *
 * @param request DescribeDBClusterVersionZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterVersionZonalResponse
 */
DescribeDBClusterVersionZonalResponse Client::describeDBClusterVersionZonalWithOptions(const DescribeDBClusterVersionZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterVersionZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterVersionZonalResponse>();
}

/**
 * @summary Queries the version of a PolarDB edge cluster.
 *
 * @param request DescribeDBClusterVersionZonalRequest
 * @return DescribeDBClusterVersionZonalResponse
 */
DescribeDBClusterVersionZonalResponse Client::describeDBClusterVersionZonal(const DescribeDBClusterVersionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterVersionZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the details of PolarDB clusters or clusters authorized by RAM authorization.
 *
 * @param request DescribeDBClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClustersWithOptions(const DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.getDBClusterStatus();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRecentCreationInterval()) {
    query["RecentCreationInterval"] = request.getRecentCreationInterval();
  }

  if (!!request.hasRecentExpirationInterval()) {
    query["RecentExpirationInterval"] = request.getRecentExpirationInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClustersResponse>();
}

/**
 * @summary Queries the details of PolarDB clusters or clusters authorized by RAM authorization.
 *
 * @param request DescribeDBClustersRequest
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClusters(const DescribeDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries PolarDB clusters in a region that have backup sets.
 *
 * @param request DescribeDBClustersWithBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClustersWithBackupsResponse
 */
DescribeDBClustersWithBackupsResponse Client::describeDBClustersWithBackupsWithOptions(const DescribeDBClustersWithBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasIsDeleted()) {
    query["IsDeleted"] = request.getIsDeleted();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClustersWithBackups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClustersWithBackupsResponse>();
}

/**
 * @summary Queries PolarDB clusters in a region that have backup sets.
 *
 * @param request DescribeDBClustersWithBackupsRequest
 * @return DescribeDBClustersWithBackupsResponse
 */
DescribeDBClustersWithBackupsResponse Client::describeDBClustersWithBackups(const DescribeDBClustersWithBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithBackupsWithOptions(request, runtime);
}

/**
 * @summary Lists the PolarDB clusters in MyBase.
 *
 * @param request DescribeDBClustersZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClustersZonalResponse
 */
DescribeDBClustersZonalResponse Client::describeDBClustersZonalWithOptions(const DescribeDBClustersZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.getDBClusterStatus();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRecentCreationInterval()) {
    query["RecentCreationInterval"] = request.getRecentCreationInterval();
  }

  if (!!request.hasRecentExpirationInterval()) {
    query["RecentExpirationInterval"] = request.getRecentExpirationInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClustersZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClustersZonalResponse>();
}

/**
 * @summary Lists the PolarDB clusters in MyBase.
 *
 * @param request DescribeDBClustersZonalRequest
 * @return DescribeDBClustersZonalResponse
 */
DescribeDBClustersZonalResponse Client::describeDBClustersZonal(const DescribeDBClustersZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the supported character sets, collations, and other properties of a PolarDB database.
 *
 * @param request DescribeDBInitializeVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInitializeVariableResponse
 */
DescribeDBInitializeVariableResponse Client::describeDBInitializeVariableWithOptions(const DescribeDBInitializeVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInitializeVariable"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInitializeVariableResponse>();
}

/**
 * @summary Queries the supported character sets, collations, and other properties of a PolarDB database.
 *
 * @param request DescribeDBInitializeVariableRequest
 * @return DescribeDBInitializeVariableResponse
 */
DescribeDBInitializeVariableResponse Client::describeDBInitializeVariable(const DescribeDBInitializeVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInitializeVariableWithOptions(request, runtime);
}

/**
 * @summary Queries the performance monitoring data for a compute node.
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformanceWithOptions(const DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancePerformanceResponse>();
}

/**
 * @summary Queries the performance monitoring data for a compute node.
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the database links of a PolarDB for Oracle cluster.
 *
 * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
 *
 * @param request DescribeDBLinksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBLinksResponse
 */
DescribeDBLinksResponse Client::describeDBLinksWithOptions(const DescribeDBLinksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.getDBLinkName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBLinks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBLinksResponse>();
}

/**
 * @summary Queries the database links of a PolarDB for Oracle cluster.
 *
 * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
 *
 * @param request DescribeDBLinksRequest
 * @return DescribeDBLinksResponse
 */
DescribeDBLinksResponse Client::describeDBLinks(const DescribeDBLinksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBLinksWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a PolarDB cluster, such as primary/secondary failover logs.
 *
 * @param request DescribeDBLogFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBLogFilesResponse
 */
DescribeDBLogFilesResponse Client::describeDBLogFilesWithOptions(const DescribeDBLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasDescribeSimulateSwitchMode()) {
    query["DescribeSimulateSwitchMode"] = request.getDescribeSimulateSwitchMode();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSimulateListId()) {
    query["SimulateListId"] = request.getSimulateListId();
  }

  if (!!request.hasSimulateModeList()) {
    query["SimulateModeList"] = request.getSimulateModeList();
  }

  if (!!request.hasSimulateStatusList()) {
    query["SimulateStatusList"] = request.getSimulateStatusList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBLogFiles"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBLogFilesResponse>();
}

/**
 * @summary Queries the logs of a PolarDB cluster, such as primary/secondary failover logs.
 *
 * @param request DescribeDBLogFilesRequest
 * @return DescribeDBLogFilesResponse
 */
DescribeDBLogFilesResponse Client::describeDBLogFiles(const DescribeDBLogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBLogFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the available minor engine versions.
 *
 * @param request DescribeDBMiniEngineVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBMiniEngineVersionsResponse
 */
DescribeDBMiniEngineVersionsResponse Client::describeDBMiniEngineVersionsWithOptions(const DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasCreationCategory()) {
    query["CreationCategory"] = request.getCreationCategory();
  }

  if (!!request.hasDBMinorVersion()) {
    query["DBMinorVersion"] = request.getDBMinorVersion();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBMiniEngineVersions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBMiniEngineVersionsResponse>();
}

/**
 * @summary Queries the available minor engine versions.
 *
 * @param request DescribeDBMiniEngineVersionsRequest
 * @return DescribeDBMiniEngineVersionsResponse
 */
DescribeDBMiniEngineVersionsResponse Client::describeDBMiniEngineVersions(const DescribeDBMiniEngineVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBMiniEngineVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries performance data for a node in a PolarDB cluster.
 *
 * @description - If the monitoring frequency is 5 seconds:
 *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * - If the monitoring frequency is 60 seconds:
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * > The default monitoring frequency is 60 seconds. Call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set it to 5 seconds.
 *
 * @param request DescribeDBNodePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformanceWithOptions(const DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBNodePerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBNodePerformanceResponse>();
}

/**
 * @summary Queries performance data for a node in a PolarDB cluster.
 *
 * @description - If the monitoring frequency is 5 seconds:
 *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * - If the monitoring frequency is 60 seconds:
 *   - If the query time range is 1 day or less, the data granularity is 1 minute.
 *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
 *   - If the query time range is 30 days or less, the data granularity is 1 hour.
 *   - If the query time range is more than 30 days, the data granularity is 1 day.
 * > The default monitoring frequency is 60 seconds. Call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set it to 5 seconds.
 *
 * @param request DescribeDBNodePerformanceRequest
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodePerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters for specified nodes in a cluster.
 *
 * @param request DescribeDBNodesParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBNodesParametersResponse
 */
DescribeDBNodesParametersResponse Client::describeDBNodesParametersWithOptions(const DescribeDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBNodesParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBNodesParametersResponse>();
}

/**
 * @summary Queries the parameters for specified nodes in a cluster.
 *
 * @param request DescribeDBNodesParametersRequest
 * @return DescribeDBNodesParametersResponse
 */
DescribeDBNodesParametersResponse Client::describeDBNodesParameters(const DescribeDBNodesParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodesParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of PolarProxy.
 *
 * @description > This operation is applicable only to PolarDB for MySQL clusters.
 *
 * @param request DescribeDBProxyPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBProxyPerformanceResponse
 */
DescribeDBProxyPerformanceResponse Client::describeDBProxyPerformanceWithOptions(const DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBProxyPerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBProxyPerformanceResponse>();
}

/**
 * @summary Queries the performance data of PolarProxy.
 *
 * @description > This operation is applicable only to PolarDB for MySQL clusters.
 *
 * @param request DescribeDBProxyPerformanceRequest
 * @return DescribeDBProxyPerformanceResponse
 */
DescribeDBProxyPerformanceResponse Client::describeDBProxyPerformance(const DescribeDBProxyPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBProxyPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
 *
 * @param request DescribeDasConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDasConfigResponse
 */
DescribeDasConfigResponse Client::describeDasConfigWithOptions(const DescribeDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDasConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDasConfigResponse>();
}

/**
 * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
 *
 * @param request DescribeDasConfigRequest
 * @return DescribeDasConfigResponse
 */
DescribeDasConfigResponse Client::describeDasConfig(const DescribeDasConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDasConfigWithOptions(request, runtime);
}

/**
 * @summary Queries for the details of databases in a specified PolarDB cluster.
 *
 * @param request DescribeDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabasesResponse
 */
DescribeDatabasesResponse Client::describeDatabasesWithOptions(const DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabases"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabasesResponse>();
}

/**
 * @summary Queries for the details of databases in a specified PolarDB cluster.
 *
 * @param request DescribeDatabasesRequest
 * @return DescribeDatabasesResponse
 */
DescribeDatabasesResponse Client::describeDatabases(const DescribeDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabasesWithOptions(request, runtime);
}

/**
 * @summary Describes the databases in a PolarDB on ENS cluster.
 *
 * @param request DescribeDatabasesZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabasesZonalResponse
 */
DescribeDatabasesZonalResponse Client::describeDatabasesZonalWithOptions(const DescribeDatabasesZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabasesZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabasesZonalResponse>();
}

/**
 * @summary Describes the databases in a PolarDB on ENS cluster.
 *
 * @param request DescribeDatabasesZonalRequest
 * @return DescribeDatabasesZonalResponse
 */
DescribeDatabasesZonalResponse Client::describeDatabasesZonal(const DescribeDatabasesZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabasesZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an PolarDB on ENS cluster.
 *
 * @param request DescribeDbClusterAttributeZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbClusterAttributeZonalResponse
 */
DescribeDbClusterAttributeZonalResponse Client::describeDbClusterAttributeZonalWithOptions(const DescribeDbClusterAttributeZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.getDescribeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDbClusterAttributeZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDbClusterAttributeZonalResponse>();
}

/**
 * @summary Queries the attributes of an PolarDB on ENS cluster.
 *
 * @param request DescribeDbClusterAttributeZonalRequest
 * @return DescribeDbClusterAttributeZonalResponse
 */
DescribeDbClusterAttributeZonalResponse Client::describeDbClusterAttributeZonal(const DescribeDbClusterAttributeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbClusterAttributeZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the backup sets in a released PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
 * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
 *
 * @param request DescribeDetachedBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDetachedBackupsResponse
 */
DescribeDetachedBackupsResponse Client::describeDetachedBackupsWithOptions(const DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupRegion()) {
    query["BackupRegion"] = request.getBackupRegion();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.getBackupStatus();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDetachedBackups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDetachedBackupsResponse>();
}

/**
 * @summary Queries the information about the backup sets in a released PolarDB cluster.
 *
 * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
 * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
 *
 * @param request DescribeDetachedBackupsRequest
 * @return DescribeDetachedBackupsResponse
 */
DescribeDetachedBackupsResponse Client::describeDetachedBackups(const DescribeDetachedBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDetachedBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of permissions for a database role.
 *
 * @param request DescribeEncryptionDBRolePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEncryptionDBRolePrivilegeResponse
 */
DescribeEncryptionDBRolePrivilegeResponse Client::describeEncryptionDBRolePrivilegeWithOptions(const DescribeEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRolePrivilegeNameList()) {
    query["RolePrivilegeNameList"] = request.getRolePrivilegeNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEncryptionDBRolePrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEncryptionDBRolePrivilegeResponse>();
}

/**
 * @summary Queries a list of permissions for a database role.
 *
 * @param request DescribeEncryptionDBRolePrivilegeRequest
 * @return DescribeEncryptionDBRolePrivilegeResponse
 */
DescribeEncryptionDBRolePrivilegeResponse Client::describeEncryptionDBRolePrivilege(const DescribeEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Queries encryption key information.
 *
 * @param request DescribeEncryptionDBSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEncryptionDBSecretResponse
 */
DescribeEncryptionDBSecretResponse Client::describeEncryptionDBSecretWithOptions(const DescribeEncryptionDBSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEncryptionDBSecret"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEncryptionDBSecretResponse>();
}

/**
 * @summary Queries encryption key information.
 *
 * @param request DescribeEncryptionDBSecretRequest
 * @return DescribeEncryptionDBSecretResponse
 */
DescribeEncryptionDBSecretResponse Client::describeEncryptionDBSecret(const DescribeEncryptionDBSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionDBSecretWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of extensions.
 *
 * @param request DescribeExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExtensionsResponse
 */
DescribeExtensionsResponse Client::describeExtensionsWithOptions(const DescribeExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasExtensionName()) {
    query["ExtensionName"] = request.getExtensionName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExtensions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExtensionsResponse>();
}

/**
 * @summary Retrieves the details of extensions.
 *
 * @param request DescribeExtensionsRequest
 * @return DescribeExtensionsResponse
 */
DescribeExtensionsResponse Client::describeExtensions(const DescribeExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExtensionsWithOptions(request, runtime);
}

/**
 * @summary Describes SQL firewall rules.
 *
 * @param request DescribeFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallRulesResponse
 */
DescribeFirewallRulesResponse Client::describeFirewallRulesWithOptions(const DescribeFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallRulesResponse>();
}

/**
 * @summary Describes SQL firewall rules.
 *
 * @param request DescribeFirewallRulesRequest
 * @return DescribeFirewallRulesResponse
 */
DescribeFirewallRulesResponse Client::describeFirewallRules(const DescribeFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Queries all API keys under the current UID.
 *
 * @param request DescribeGatewayApikeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGatewayApikeyListResponse
 */
DescribeGatewayApikeyListResponse Client::describeGatewayApikeyListWithOptions(const DescribeGatewayApikeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGatewayApikeyList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGatewayApikeyListResponse>();
}

/**
 * @summary Queries all API keys under the current UID.
 *
 * @param request DescribeGatewayApikeyListRequest
 * @return DescribeGatewayApikeyListResponse
 */
DescribeGatewayApikeyListResponse Client::describeGatewayApikeyList(const DescribeGatewayApikeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGatewayApikeyListWithOptions(request, runtime);
}

/**
 * @summary Viewing gateway instance details
 *
 * @param request DescribeGatewayAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGatewayAttributeResponse
 */
DescribeGatewayAttributeResponse Client::describeGatewayAttributeWithOptions(const DescribeGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGatewayAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGatewayAttributeResponse>();
}

/**
 * @summary Viewing gateway instance details
 *
 * @param request DescribeGatewayAttributeRequest
 * @return DescribeGatewayAttributeResponse
 */
DescribeGatewayAttributeResponse Client::describeGatewayAttribute(const DescribeGatewayAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGatewayAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of gateway instances.
 *
 * @param request DescribeGatewayListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGatewayListResponse
 */
DescribeGatewayListResponse Client::describeGatewayListWithOptions(const DescribeGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasGwDescription()) {
    query["GwDescription"] = request.getGwDescription();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGatewayList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGatewayListResponse>();
}

/**
 * @summary Queries a list of gateway instances.
 *
 * @param request DescribeGatewayListRequest
 * @return DescribeGatewayListResponse
 */
DescribeGatewayListResponse Client::describeGatewayList(const DescribeGatewayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGatewayListWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for Polarlakebase Global Data Networks (GDNs) across all regions in your account.
 *
 * @param request DescribeGlobalDataNetworkListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDataNetworkListResponse
 */
DescribeGlobalDataNetworkListResponse Client::describeGlobalDataNetworkListWithOptions(const DescribeGlobalDataNetworkListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDataNetworkList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalDataNetworkListResponse>();
}

/**
 * @summary Retrieves details for Polarlakebase Global Data Networks (GDNs) across all regions in your account.
 *
 * @param request DescribeGlobalDataNetworkListRequest
 * @return DescribeGlobalDataNetworkListResponse
 */
DescribeGlobalDataNetworkListResponse Client::describeGlobalDataNetworkList(const DescribeGlobalDataNetworkListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDataNetworkListWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a Global Database Network (GDN).
 *
 * @param request DescribeGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDatabaseNetworkResponse
 */
DescribeGlobalDatabaseNetworkResponse Client::describeGlobalDatabaseNetworkWithOptions(const DescribeGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Retrieves details for a Global Database Network (GDN).
 *
 * @param request DescribeGlobalDatabaseNetworkRequest
 * @return DescribeGlobalDatabaseNetworkResponse
 */
DescribeGlobalDatabaseNetworkResponse Client::describeGlobalDatabaseNetwork(const DescribeGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary View details for all Global Database Networks (GDNs) in your account.
 *
 * @param request DescribeGlobalDatabaseNetworksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDatabaseNetworksResponse
 */
DescribeGlobalDatabaseNetworksResponse Client::describeGlobalDatabaseNetworksWithOptions(const DescribeGlobalDatabaseNetworksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFilterRegion()) {
    query["FilterRegion"] = request.getFilterRegion();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.getGDNDescription();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDatabaseNetworks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalDatabaseNetworksResponse>();
}

/**
 * @summary View details for all Global Database Networks (GDNs) in your account.
 *
 * @param request DescribeGlobalDatabaseNetworksRequest
 * @return DescribeGlobalDatabaseNetworksResponse
 */
DescribeGlobalDatabaseNetworksResponse Client::describeGlobalDatabaseNetworks(const DescribeGlobalDatabaseNetworksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDatabaseNetworksWithOptions(request, runtime);
}

/**
 * @summary Queries the list of global IP allowlist templates.
 *
 * @param request DescribeGlobalSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalSecurityIPGroupResponse
 */
DescribeGlobalSecurityIPGroupResponse Client::describeGlobalSecurityIPGroupWithOptions(const DescribeGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalSecurityIPGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalSecurityIPGroupResponse>();
}

/**
 * @summary Queries the list of global IP allowlist templates.
 *
 * @param request DescribeGlobalSecurityIPGroupRequest
 * @return DescribeGlobalSecurityIPGroupResponse
 */
DescribeGlobalSecurityIPGroupResponse Client::describeGlobalSecurityIPGroup(const DescribeGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the relationship between a cluster and a global IP whitelist template.
 *
 * @param request DescribeGlobalSecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalSecurityIPGroupRelationResponse
 */
DescribeGlobalSecurityIPGroupRelationResponse Client::describeGlobalSecurityIPGroupRelationWithOptions(const DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalSecurityIPGroupRelation"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalSecurityIPGroupRelationResponse>();
}

/**
 * @summary Queries the relationship between a cluster and a global IP whitelist template.
 *
 * @param request DescribeGlobalSecurityIPGroupRelationRequest
 * @return DescribeGlobalSecurityIPGroupRelationResponse
 */
DescribeGlobalSecurityIPGroupRelationResponse Client::describeGlobalSecurityIPGroupRelation(const DescribeGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Queries high availability (HA) logs for an instance.
 *
 * @description > - Only PolarDB for MySQL supports this operation.
 *
 * @param request DescribeHALogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHALogsResponse
 */
DescribeHALogsResponse Client::describeHALogsWithOptions(const DescribeHALogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHALogs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHALogsResponse>();
}

/**
 * @summary Queries high availability (HA) logs for an instance.
 *
 * @description > - Only PolarDB for MySQL supports this operation.
 *
 * @param request DescribeHALogsRequest
 * @return DescribeHALogsResponse
 */
DescribeHALogsResponse Client::describeHALogs(const DescribeHALogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHALogsWithOptions(request, runtime);
}

/**
 * @summary Lists the historical events in Event Center.
 *
 * @param request DescribeHistoryEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEventsWithOptions(const DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveStatus()) {
    query["ArchiveStatus"] = request.getArchiveStatus();
  }

  if (!!request.hasEventCategory()) {
    query["EventCategory"] = request.getEventCategory();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.getEventLevel();
  }

  if (!!request.hasEventStatus()) {
    query["EventStatus"] = request.getEventStatus();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEvents"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryEventsResponse>();
}

/**
 * @summary Lists the historical events in Event Center.
 *
 * @param request DescribeHistoryEventsRequest
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEvents(const DescribeHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of historical administrative tasks for PolarDB for MySQL instances, such as parameter changes, and instance restarts.
 *
 * @param request DescribeHistoryTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasksWithOptions(const DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.getFromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.getToExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksResponse>();
}

/**
 * @summary Retrieves a list of historical administrative tasks for PolarDB for MySQL instances, such as parameter changes, and instance restarts.
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary Queries task statistics in Task Center.
 *
 * @param request DescribeHistoryTasksStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStatWithOptions(const DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.getFromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.getToExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasksStat"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksStatResponse>();
}

/**
 * @summary Queries task statistics in Task Center.
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Queries a license order.
 *
 * @param request DescribeLicenseOrderDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLicenseOrderDetailsResponse
 */
DescribeLicenseOrderDetailsResponse Client::describeLicenseOrderDetailsWithOptions(const DescribeLicenseOrderDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.getAliyunOrderId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLicenseOrderDetails"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLicenseOrderDetailsResponse>();
}

/**
 * @summary Queries a license order.
 *
 * @param request DescribeLicenseOrderDetailsRequest
 * @return DescribeLicenseOrderDetailsResponse
 */
DescribeLicenseOrderDetailsResponse Client::describeLicenseOrderDetails(const DescribeLicenseOrderDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseOrderDetailsWithOptions(request, runtime);
}

/**
 * @summary This operation queries a list of license orders.
 *
 * @param request DescribeLicenseOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLicenseOrdersResponse
 */
DescribeLicenseOrdersResponse Client::describeLicenseOrdersWithOptions(const DescribeLicenseOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.getAliyunOrderId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPurchaseChannel()) {
    query["PurchaseChannel"] = request.getPurchaseChannel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVirtualOrder()) {
    query["VirtualOrder"] = request.getVirtualOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLicenseOrders"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLicenseOrdersResponse>();
}

/**
 * @summary This operation queries a list of license orders.
 *
 * @param request DescribeLicenseOrdersRequest
 * @return DescribeLicenseOrdersResponse
 */
DescribeLicenseOrdersResponse Client::describeLicenseOrders(const DescribeLicenseOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries the available time range to recover from a backup.
 *
 * @param request DescribeLocalAvailableRecoveryTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLocalAvailableRecoveryTimeResponse
 */
DescribeLocalAvailableRecoveryTimeResponse Client::describeLocalAvailableRecoveryTimeWithOptions(const DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLocalAvailableRecoveryTime"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLocalAvailableRecoveryTimeResponse>();
}

/**
 * @summary Queries the available time range to recover from a backup.
 *
 * @param request DescribeLocalAvailableRecoveryTimeRequest
 * @return DescribeLocalAvailableRecoveryTimeResponse
 */
DescribeLocalAvailableRecoveryTimeResponse Client::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLocalAvailableRecoveryTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the data retention policy for the log backups of a PolarDB cluster.
 *
 * @param request DescribeLogBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogBackupPolicyResponse
 */
DescribeLogBackupPolicyResponse Client::describeLogBackupPolicyWithOptions(const DescribeLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogBackupPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogBackupPolicyResponse>();
}

/**
 * @summary Queries the data retention policy for the log backups of a PolarDB cluster.
 *
 * @param request DescribeLogBackupPolicyRequest
 * @return DescribeLogBackupPolicyResponse
 */
DescribeLogBackupPolicyResponse Client::describeLogBackupPolicy(const DescribeLogBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
 *
 * @param request DescribeMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMaskingRulesResponse
 */
DescribeMaskingRulesResponse Client::describeMaskingRulesWithOptions(const DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.getInterfaceVersion();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMaskingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMaskingRulesResponse>();
}

/**
 * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
 *
 * @param request DescribeMaskingRulesRequest
 * @return DescribeMaskingRulesResponse
 */
DescribeMaskingRulesResponse Client::describeMaskingRules(const DescribeMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries recoverable databases and tables.
 *
 * @param request DescribeMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaListResponse
 */
DescribeMetaListResponse Client::describeMetaListWithOptions(const DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasGetDbName()) {
    query["GetDbName"] = request.getGetDbName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetaList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetaListResponse>();
}

/**
 * @summary Queries recoverable databases and tables.
 *
 * @param request DescribeMetaListRequest
 * @return DescribeMetaListResponse
 */
DescribeMetaListResponse Client::describeMetaList(const DescribeMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaListWithOptions(request, runtime);
}

/**
 * @summary Model Query API
 *
 * @param request DescribeModelApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelApisResponse
 */
DescribeModelApisResponse Client::describeModelApisWithOptions(const DescribeModelApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelApiIds()) {
    query["ModelApiIds"] = request.getModelApiIds();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPathPrefix()) {
    query["PathPrefix"] = request.getPathPrefix();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelApis"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelApisResponse>();
}

/**
 * @summary Model Query API
 *
 * @param request DescribeModelApisRequest
 * @return DescribeModelApisResponse
 */
DescribeModelApisResponse Client::describeModelApis(const DescribeModelApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelApisWithOptions(request, runtime);
}

/**
 * @summary List model services
 *
 * @param request DescribeModelServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelServicesResponse
 */
DescribeModelServicesResponse Client::describeModelServicesWithOptions(const DescribeModelServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasModelServiceIds()) {
    query["ModelServiceIds"] = request.getModelServiceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelServices"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelServicesResponse>();
}

/**
 * @summary List model services
 *
 * @param request DescribeModelServicesRequest
 * @return DescribeModelServicesResponse
 */
DescribeModelServicesResponse Client::describeModelServices(const DescribeModelServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelServicesWithOptions(request, runtime);
}

/**
 * @summary Queries the modification history of parameters.
 *
 * @param request DescribeModifyParameterLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLogWithOptions(const DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModifyParameterLog"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModifyParameterLogResponse>();
}

/**
 * @summary Queries the modification history of parameters.
 *
 * @param request DescribeModifyParameterLogRequest
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModifyParameterLogWithOptions(request, runtime);
}

/**
 * @summary Queries network channels.
 *
 * @param request DescribeNetworkChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkChannelResponse
 */
DescribeNetworkChannelResponse Client::describeNetworkChannelWithOptions(const DescribeNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkChannelResponse>();
}

/**
 * @summary Queries network channels.
 *
 * @param request DescribeNetworkChannelRequest
 * @return DescribeNetworkChannelResponse
 */
DescribeNetworkChannelResponse Client::describeNetworkChannel(const DescribeNetworkChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkChannelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified parameter template.
 *
 * @description Parameter templates let you centrally manage parameters for multiple clusters. You can quickly apply a parameter template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature currently supports only PolarDB for MySQL clusters.
 *
 * @param request DescribeParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroupWithOptions(const DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupResponse>();
}

/**
 * @summary Retrieves the details of a specified parameter template.
 *
 * @description Parameter templates let you centrally manage parameters for multiple clusters. You can quickly apply a parameter template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature currently supports only PolarDB for MySQL clusters.
 *
 * @param request DescribeParameterGroupRequest
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroup(const DescribeParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupWithOptions(request, runtime);
}

/**
 * @summary This operation queries the parameter templates in a specified region.
 *
 * @description Parameter templates allow you to manage cluster parameters in batches and quickly apply them to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature is available only for PolarDB for MySQL clusters.
 *
 * @param request DescribeParameterGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroupsWithOptions(const DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterGroups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupsResponse>();
}

/**
 * @summary This operation queries the parameter templates in a specified region.
 *
 * @description Parameter templates allow you to manage cluster parameters in batches and quickly apply them to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > This feature is available only for PolarDB for MySQL clusters.
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the default parameters of a database cluster.
 *
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterTemplates"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterTemplatesResponse>();
}

/**
 * @summary Queries the default parameters of a database cluster.
 *
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a pending event.
 *
 * @param request DescribePendingMaintenanceActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePendingMaintenanceActionResponse
 */
DescribePendingMaintenanceActionResponse Client::describePendingMaintenanceActionWithOptions(const DescribePendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsHistory()) {
    query["IsHistory"] = request.getIsHistory();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePendingMaintenanceAction"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePendingMaintenanceActionResponse>();
}

/**
 * @summary Queries the information about a pending event.
 *
 * @param request DescribePendingMaintenanceActionRequest
 * @return DescribePendingMaintenanceActionResponse
 */
DescribePendingMaintenanceActionResponse Client::describePendingMaintenanceAction(const DescribePendingMaintenanceActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePendingMaintenanceActionWithOptions(request, runtime);
}

/**
 * @summary Retrieves a count of pending events for various task types.
 *
 * @param request DescribePendingMaintenanceActionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePendingMaintenanceActionsResponse
 */
DescribePendingMaintenanceActionsResponse Client::describePendingMaintenanceActionsWithOptions(const DescribePendingMaintenanceActionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsHistory()) {
    query["IsHistory"] = request.getIsHistory();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePendingMaintenanceActions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePendingMaintenanceActionsResponse>();
}

/**
 * @summary Retrieves a count of pending events for various task types.
 *
 * @param request DescribePendingMaintenanceActionsRequest
 * @return DescribePendingMaintenanceActionsResponse
 */
DescribePendingMaintenanceActionsResponse Client::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePendingMaintenanceActionsWithOptions(request, runtime);
}

/**
 * @summary Queries the chat records of a specified session.
 *
 * @param request DescribePolarAgentChatRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarAgentChatRecordsResponse
 */
DescribePolarAgentChatRecordsResponse Client::describePolarAgentChatRecordsWithOptions(const DescribePolarAgentChatRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarAgentChatRecords"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarAgentChatRecordsResponse>();
}

/**
 * @summary Queries the chat records of a specified session.
 *
 * @param request DescribePolarAgentChatRecordsRequest
 * @return DescribePolarAgentChatRecordsResponse
 */
DescribePolarAgentChatRecordsResponse Client::describePolarAgentChatRecords(const DescribePolarAgentChatRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarAgentChatRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a session.
 *
 * @param request DescribePolarAgentSessionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarAgentSessionStatusResponse
 */
DescribePolarAgentSessionStatusResponse Client::describePolarAgentSessionStatusWithOptions(const DescribePolarAgentSessionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarAgentSessionStatus"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarAgentSessionStatusResponse>();
}

/**
 * @summary Queries the status of a session.
 *
 * @param request DescribePolarAgentSessionStatusRequest
 * @return DescribePolarAgentSessionStatusResponse
 */
DescribePolarAgentSessionStatusResponse Client::describePolarAgentSessionStatus(const DescribePolarAgentSessionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarAgentSessionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries historical session records.
 *
 * @param request DescribePolarAgentUserSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarAgentUserSessionsResponse
 */
DescribePolarAgentUserSessionsResponse Client::describePolarAgentUserSessionsWithOptions(const DescribePolarAgentUserSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarAgentUserSessions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarAgentUserSessionsResponse>();
}

/**
 * @summary Queries historical session records.
 *
 * @param request DescribePolarAgentUserSessionsRequest
 * @return DescribePolarAgentUserSessionsResponse
 */
DescribePolarAgentUserSessionsResponse Client::describePolarAgentUserSessions(const DescribePolarAgentUserSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarAgentUserSessionsWithOptions(request, runtime);
}

/**
 * @summary Queries a PolarClaw Agent file.
 *
 * @param request DescribePolarClawAgentFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawAgentFileResponse
 */
DescribePolarClawAgentFileResponse Client::describePolarClawAgentFileWithOptions(const DescribePolarClawAgentFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawAgentFile"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawAgentFileResponse>();
}

/**
 * @summary Queries a PolarClaw Agent file.
 *
 * @param request DescribePolarClawAgentFileRequest
 * @return DescribePolarClawAgentFileResponse
 */
DescribePolarClawAgentFileResponse Client::describePolarClawAgentFile(const DescribePolarClawAgentFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawAgentFileWithOptions(request, runtime);
}

/**
 * @summary Queries the PolarClaw Agent tool catalog.
 *
 * @param request DescribePolarClawAgentToolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawAgentToolsResponse
 */
DescribePolarClawAgentToolsResponse Client::describePolarClawAgentToolsWithOptions(const DescribePolarClawAgentToolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasIncludePlugins()) {
    query["IncludePlugins"] = request.getIncludePlugins();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawAgentTools"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawAgentToolsResponse>();
}

/**
 * @summary Queries the PolarClaw Agent tool catalog.
 *
 * @param request DescribePolarClawAgentToolsRequest
 * @return DescribePolarClawAgentToolsResponse
 */
DescribePolarClawAgentToolsResponse Client::describePolarClawAgentTools(const DescribePolarClawAgentToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawAgentToolsWithOptions(request, runtime);
}

/**
 * @summary Queries all installed plug-ins and their status information under a specified application.
 *
 * @param tmpReq DescribePolarClawAgentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawAgentsResponse
 */
DescribePolarClawAgentsResponse Client::describePolarClawAgentsWithOptions(const DescribePolarClawAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePolarClawAgentsShrinkRequest request = DescribePolarClawAgentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentList()) {
    request.setAgentListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentList(), "AgentList", "json"));
  }

  json query = {};
  if (!!request.hasAgentListShrink()) {
    query["AgentList"] = request.getAgentListShrink();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawAgents"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawAgentsResponse>();
}

/**
 * @summary Queries all installed plug-ins and their status information under a specified application.
 *
 * @param request DescribePolarClawAgentsRequest
 * @return DescribePolarClawAgentsResponse
 */
DescribePolarClawAgentsResponse Client::describePolarClawAgents(const DescribePolarClawAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawAgentsWithOptions(request, runtime);
}

/**
 * @summary Lists all installed PolarClaw channels and their status information.
 *
 * @param tmpReq DescribePolarClawChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawChannelsResponse
 */
DescribePolarClawChannelsResponse Client::describePolarClawChannelsWithOptions(const DescribePolarClawChannelsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePolarClawChannelsShrinkRequest request = DescribePolarClawChannelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannelList()) {
    request.setChannelListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannelList(), "ChannelList", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelListShrink()) {
    query["ChannelList"] = request.getChannelListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawChannels"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawChannelsResponse>();
}

/**
 * @summary Lists all installed PolarClaw channels and their status information.
 *
 * @param request DescribePolarClawChannelsRequest
 * @return DescribePolarClawChannelsResponse
 */
DescribePolarClawChannelsResponse Client::describePolarClawChannels(const DescribePolarClawChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawChannelsWithOptions(request, runtime);
}

/**
 * @summary Query all or specific scheduled tasks in PolarClaw and their details.
 *
 * @description ## Request description
 * - You can use this API to retrieve all scheduled tasks in a PolarClaw application or filter specific tasks using the `JobIdList` parameter.
 * - If you do not specify the `JobIdList` parameter, the API returns all scheduled tasks in the application.
 *
 * @param tmpReq DescribePolarClawCronJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawCronJobsResponse
 */
DescribePolarClawCronJobsResponse Client::describePolarClawCronJobsWithOptions(const DescribePolarClawCronJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePolarClawCronJobsShrinkRequest request = DescribePolarClawCronJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIdList()) {
    request.setJobIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIdList(), "JobIdList", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasIncludeDisabled()) {
    query["IncludeDisabled"] = request.getIncludeDisabled();
  }

  if (!!request.hasIncludeRuns()) {
    query["IncludeRuns"] = request.getIncludeRuns();
  }

  if (!!request.hasJobIdListShrink()) {
    query["JobIdList"] = request.getJobIdListShrink();
  }

  if (!!request.hasRunLimit()) {
    query["RunLimit"] = request.getRunLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawCronJobs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawCronJobsResponse>();
}

/**
 * @summary Query all or specific scheduled tasks in PolarClaw and their details.
 *
 * @description ## Request description
 * - You can use this API to retrieve all scheduled tasks in a PolarClaw application or filter specific tasks using the `JobIdList` parameter.
 * - If you do not specify the `JobIdList` parameter, the API returns all scheduled tasks in the application.
 *
 * @param request DescribePolarClawCronJobsRequest
 * @return DescribePolarClawCronJobsResponse
 */
DescribePolarClawCronJobsResponse Client::describePolarClawCronJobs(const DescribePolarClawCronJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawCronJobsWithOptions(request, runtime);
}

/**
 * @summary Lists all installed PolarClaw MCP services and their configurations.
 *
 * @param request DescribePolarClawMCPServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawMCPServersResponse
 */
DescribePolarClawMCPServersResponse Client::describePolarClawMCPServersWithOptions(const DescribePolarClawMCPServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasServerList()) {
    query["ServerList"] = request.getServerList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawMCPServers"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawMCPServersResponse>();
}

/**
 * @summary Lists all installed PolarClaw MCP services and their configurations.
 *
 * @param request DescribePolarClawMCPServersRequest
 * @return DescribePolarClawMCPServersResponse
 */
DescribePolarClawMCPServersResponse Client::describePolarClawMCPServers(const DescribePolarClawMCPServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawMCPServersWithOptions(request, runtime);
}

/**
 * @summary Lists all installed PolarClaw plugins and their status.
 *
 * @description ## Request
 * - This API gets information about all plugins for a given application, including built-in and user-installed plugins.
 * - Use the `PluginList` parameter to request information for specific plugins. If you omit this parameter, the API returns details for all plugins.
 *
 * @param request DescribePolarClawPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawPluginsResponse
 */
DescribePolarClawPluginsResponse Client::describePolarClawPluginsWithOptions(const DescribePolarClawPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPluginList()) {
    query["PluginList"] = request.getPluginList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawPlugins"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawPluginsResponse>();
}

/**
 * @summary Lists all installed PolarClaw plugins and their status.
 *
 * @description ## Request
 * - This API gets information about all plugins for a given application, including built-in and user-installed plugins.
 * - Use the `PluginList` parameter to request information for specific plugins. If you omit this parameter, the API returns details for all plugins.
 *
 * @param request DescribePolarClawPluginsRequest
 * @return DescribePolarClawPluginsResponse
 */
DescribePolarClawPluginsResponse Client::describePolarClawPlugins(const DescribePolarClawPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawPluginsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a PolarClaw Skill.
 *
 * @param request DescribePolarClawSkillDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawSkillDetailResponse
 */
DescribePolarClawSkillDetailResponse Client::describePolarClawSkillDetailWithOptions(const DescribePolarClawSkillDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasSlug()) {
    query["Slug"] = request.getSlug();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawSkillDetail"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawSkillDetailResponse>();
}

/**
 * @summary Queries the details of a PolarClaw Skill.
 *
 * @param request DescribePolarClawSkillDetailRequest
 * @return DescribePolarClawSkillDetailResponse
 */
DescribePolarClawSkillDetailResponse Client::describePolarClawSkillDetail(const DescribePolarClawSkillDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawSkillDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a PolarClaw asynchronous task.
 *
 * @param request DescribePolarClawTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarClawTaskResponse
 */
DescribePolarClawTaskResponse Client::describePolarClawTaskWithOptions(const DescribePolarClawTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarClawTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarClawTaskResponse>();
}

/**
 * @summary Queries the status of a PolarClaw asynchronous task.
 *
 * @param request DescribePolarClawTaskRequest
 * @return DescribePolarClawTaskResponse
 */
DescribePolarClawTaskResponse Client::describePolarClawTask(const DescribePolarClawTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarClawTaskWithOptions(request, runtime);
}

/**
 * @summary 查看polarfs信息
 *
 * @param request DescribePolarFsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarFsResponse
 */
DescribePolarFsResponse Client::describePolarFsWithOptions(const DescribePolarFsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolarFsInstanceDescription()) {
    query["PolarFsInstanceDescription"] = request.getPolarFsInstanceDescription();
  }

  if (!!request.hasPolarFsInstanceIds()) {
    query["PolarFsInstanceIds"] = request.getPolarFsInstanceIds();
  }

  if (!!request.hasPolarFsType()) {
    query["PolarFsType"] = request.getPolarFsType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRelativeDbClusterId()) {
    query["RelativeDbClusterId"] = request.getRelativeDbClusterId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarFs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarFsResponse>();
}

/**
 * @summary 查看polarfs信息
 *
 * @param request DescribePolarFsRequest
 * @return DescribePolarFsResponse
 */
DescribePolarFsResponse Client::describePolarFs(const DescribePolarFsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a PolarLakebase instance.
 *
 * @param request DescribePolarFsAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarFsAttributeResponse
 */
DescribePolarFsAttributeResponse Client::describePolarFsAttributeWithOptions(const DescribePolarFsAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasQueryFuseMountInfo()) {
    query["QueryFuseMountInfo"] = request.getQueryFuseMountInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarFsAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarFsAttributeResponse>();
}

/**
 * @summary Retrieves the details of a PolarLakebase instance.
 *
 * @param request DescribePolarFsAttributeRequest
 * @return DescribePolarFsAttributeResponse
 */
DescribePolarFsAttributeResponse Client::describePolarFsAttribute(const DescribePolarFsAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsAttributeWithOptions(request, runtime);
}

/**
 * @summary Lists the files and subdirectories under a specified path.
 *
 * @description ## 请求说明
 * - **Path** 参数必须提供一个绝对路径。
 * - **Recursive** 参数默认为 `false`，如果设置为 `true`，则会递归列出所有子目录的内容。
 * - **Depth** 参数用于限制递归深度，默认值为 `1`。
 * - **Filter** 参数支持通配符或正则表达式过滤结果。
 *
 * @param request DescribePolarFsObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarFsObjectsResponse
 */
DescribePolarFsObjectsResponse Client::describePolarFsObjectsWithOptions(const DescribePolarFsObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarFsObjects"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarFsObjectsResponse>();
}

/**
 * @summary Lists the files and subdirectories under a specified path.
 *
 * @description ## 请求说明
 * - **Path** 参数必须提供一个绝对路径。
 * - **Recursive** 参数默认为 `false`，如果设置为 `true`，则会递归列出所有子目录的内容。
 * - **Depth** 参数用于限制递归深度，默认值为 `1`。
 * - **Filter** 参数支持通配符或正则表达式过滤结果。
 *
 * @param request DescribePolarFsObjectsRequest
 * @return DescribePolarFsObjectsResponse
 */
DescribePolarFsObjectsResponse Client::describePolarFsObjects(const DescribePolarFsObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsObjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves all quota rules for a specified PolarFileSystem (PolarFS) instance.
 *
 * @description ## Request
 * - This operation queries all quota rules for a specific PolarFS instance. It supports wildcard matching with the `QuotaNameMatch` and `PatternMatch` parameters.
 * - Paging is not yet available and will be released in a future kernel update.
 * - The `PolarFsInstanceId` parameter is required to specify the PolarFS instance to query.
 * - You can use optional parameters, such as `QuotaNameMatch` and `PatternMatch`, to filter quota rules.
 * - The returned data includes the total number of quota rules, the number of rules on the current page, and details for each rule, such as the rule ID, name, description, and capacity limit.
 *
 * @param request DescribePolarFsQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarFsQuotaResponse
 */
DescribePolarFsQuotaResponse Client::describePolarFsQuotaWithOptions(const DescribePolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasQuotaType()) {
    query["QuotaType"] = request.getQuotaType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarFsQuota"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarFsQuotaResponse>();
}

/**
 * @summary Retrieves all quota rules for a specified PolarFileSystem (PolarFS) instance.
 *
 * @description ## Request
 * - This operation queries all quota rules for a specific PolarFS instance. It supports wildcard matching with the `QuotaNameMatch` and `PatternMatch` parameters.
 * - Paging is not yet available and will be released in a future kernel update.
 * - The `PolarFsInstanceId` parameter is required to specify the PolarFS instance to query.
 * - You can use optional parameters, such as `QuotaNameMatch` and `PatternMatch`, to filter quota rules.
 * - The returned data includes the total number of quota rules, the number of rules on the current page, and details for each rule, such as the rule ID, name, description, and capacity limit.
 *
 * @param request DescribePolarFsQuotaRequest
 * @return DescribePolarFsQuotaResponse
 */
DescribePolarFsQuotaResponse Client::describePolarFsQuota(const DescribePolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quota list.
 *
 * @param request DescribePolarFsQuotaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarFsQuotaListResponse
 */
DescribePolarFsQuotaListResponse Client::describePolarFsQuotaListWithOptions(const DescribePolarFsQuotaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  if (!!request.hasQuotaMode()) {
    query["QuotaMode"] = request.getQuotaMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarFsQuotaList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarFsQuotaListResponse>();
}

/**
 * @summary Retrieves the quota list.
 *
 * @param request DescribePolarFsQuotaListRequest
 * @return DescribePolarFsQuotaListResponse
 */
DescribePolarFsQuotaListResponse Client::describePolarFsQuotaList(const DescribePolarFsQuotaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsQuotaListWithOptions(request, runtime);
}

/**
 * @summary Checks whether the SQL Explorer feature is enabled for a target cluster.
 *
 * @description **Note:**
 * This API operation is deprecated. Use [Query the configurations of DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778837.html) instead.
 *
 * @param request DescribePolarSQLCollectorPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarSQLCollectorPolicyResponse
 */
DescribePolarSQLCollectorPolicyResponse Client::describePolarSQLCollectorPolicyWithOptions(const DescribePolarSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarSQLCollectorPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarSQLCollectorPolicyResponse>();
}

/**
 * @summary Checks whether the SQL Explorer feature is enabled for a target cluster.
 *
 * @description **Note:**
 * This API operation is deprecated. Use [Query the configurations of DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778837.html) instead.
 *
 * @param request DescribePolarSQLCollectorPolicyRequest
 * @return DescribePolarSQLCollectorPolicyResponse
 */
DescribePolarSQLCollectorPolicyResponse Client::describePolarSQLCollectorPolicy(const DescribePolarSQLCollectorPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarSQLCollectorPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries rate limit policies.
 *
 * @param request DescribeRateLimitPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRateLimitPolicyResponse
 */
DescribeRateLimitPolicyResponse Client::describeRateLimitPolicyWithOptions(const DescribeRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeRefId()) {
    query["ScopeRefId"] = request.getScopeRefId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRateLimitPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRateLimitPolicyResponse>();
}

/**
 * @summary Queries rate limit policies.
 *
 * @param request DescribeRateLimitPolicyRequest
 * @return DescribeRateLimitPolicyResponse
 */
DescribeRateLimitPolicyResponse Client::describeRateLimitPolicy(const DescribeRateLimitPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRateLimitPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries a list of vSwitches.
 *
 * @param request DescribeRdsVSwitchsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchsWithOptions(const DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVSwitchs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVSwitchsResponse>();
}

/**
 * @summary Queries a list of vSwitches.
 *
 * @param request DescribeRdsVSwitchsRequest
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

/**
 * @summary Describes a list of VPCs.
 *
 * @param request DescribeRdsVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcsWithOptions(const DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVpcs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVpcsResponse>();
}

/**
 * @summary Describes a list of VPCs.
 *
 * @param request DescribeRdsVpcsRequest
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the regions and zones that are supported by PolarDB.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions and zones that are supported by PolarDB.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Describes cross-cloud resource plans.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourcePackagesResponse
 */
DescribeResourcePackagesResponse Client::describeResourcePackagesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeResourcePackages"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourcePackagesResponse>();
}

/**
 * @summary Describes cross-cloud resource plans.
 *
 * @return DescribeResourcePackagesResponse
 */
DescribeResourcePackagesResponse Client::describeResourcePackages() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourcePackagesWithOptions(runtime);
}

/**
 * @summary Returns the details of SQL throttling rules.
 *
 * @param request DescribeSQLRateLimitingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLRateLimitingRulesResponse
 */
DescribeSQLRateLimitingRulesResponse Client::describeSQLRateLimitingRulesWithOptions(const DescribeSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLRateLimitingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLRateLimitingRulesResponse>();
}

/**
 * @summary Returns the details of SQL throttling rules.
 *
 * @param request DescribeSQLRateLimitingRulesRequest
 * @return DescribeSQLRateLimitingRulesResponse
 */
DescribeSQLRateLimitingRulesResponse Client::describeSQLRateLimitingRules(const DescribeSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of all scheduled tasks.
 *
 * @param request DescribeScheduleTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScheduleTasksResponse
 */
DescribeScheduleTasksResponse Client::describeScheduleTasksWithOptions(const DescribeScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScheduleTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScheduleTasksResponse>();
}

/**
 * @summary Retrieves the details of all scheduled tasks.
 *
 * @param request DescribeScheduleTasksRequest
 * @return DescribeScheduleTasksResponse
 */
DescribeScheduleTasksResponse Client::describeScheduleTasks(const DescribeScheduleTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScheduleTasksWithOptions(request, runtime);
}

/**
 * @summary Queries shared backup sets.
 *
 * @param request DescribeSharedBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSharedBackupsResponse
 */
DescribeSharedBackupsResponse Client::describeSharedBackupsWithOptions(const DescribeSharedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.getShareType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSharedBackups"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSharedBackupsResponse>();
}

/**
 * @summary Queries shared backup sets.
 *
 * @param request DescribeSharedBackupsRequest
 * @return DescribeSharedBackupsResponse
 */
DescribeSharedBackupsResponse Client::describeSharedBackups(const DescribeSharedBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSharedBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of slow query logs for a PolarDB cluster.
 *
 * @description > - This operation is supported only for PolarDB for MySQL clusters.
 * >
 * > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible) clusters, use the [DAS API to query slow log records](https://help.aliyun.com/document_detail/2922426.html).
 * >
 * > - Starting September 1, 2024, the value of the `SQLHash` field will change due to an optimization of the SQL templating algorithm. For more information, see [[Notice\\] Optimization of the templating algorithm for slow SQL queries](~~2845725~~).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSQLHASH()) {
    query["SQLHASH"] = request.getSQLHASH();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogRecordsResponse>();
}

/**
 * @summary Queries the details of slow query logs for a PolarDB cluster.
 *
 * @description > - This operation is supported only for PolarDB for MySQL clusters.
 * >
 * > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible) clusters, use the [DAS API to query slow log records](https://help.aliyun.com/document_detail/2922426.html).
 * >
 * > - Starting September 1, 2024, the value of the `SQLHash` field will change due to an optimization of the SQL templating algorithm. For more information, see [[Notice\\] Optimization of the templating algorithm for slow SQL queries](~~2845725~~).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the slow query log statistics for a PolarDB cluster.
 *
 * @description > - This API is available only for PolarDB for MySQL.
 * >
 * > - Effective September 1, 2024, the SQLHash field value will change when you call this API due to an optimization to the SQL templating algorithm. For more information, see [Optimization of the templating algorithm for slow SQL queries](https://help.aliyun.com/document_detail/2845725.html).
 *
 * @param request DescribeSlowLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogsResponse
 */
DescribeSlowLogsResponse Client::describeSlowLogsWithOptions(const DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogsResponse>();
}

/**
 * @summary Queries the slow query log statistics for a PolarDB cluster.
 *
 * @description > - This API is available only for PolarDB for MySQL.
 * >
 * > - Effective September 1, 2024, the SQLHash field value will change when you call this API due to an optimization to the SQL templating algorithm. For more information, see [Optimization of the templating algorithm for slow SQL queries](https://help.aliyun.com/document_detail/2845725.html).
 *
 * @param request DescribeSlowLogsRequest
 * @return DescribeSlowLogsResponse
 */
DescribeSlowLogsResponse Client::describeSlowLogs(const DescribeSlowLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the progress details of tasks generated by API calls, such as creating a cluster.
 *
 * @description - You can view the progress details of tasks generated by either direct API calls, such as [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html), or operations in the PolarDB console, such as [creating a cluster](https://help.aliyun.com/document_detail/58769.html).
 * - Currently, this operation supports viewing the progress details only for tasks generated when you create a cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation, provided that the `CreationOption` parameter is not set to `CreateGdnStandby`.
 *
 * @param request DescribeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTasksResponse>();
}

/**
 * @summary Queries the progress details of tasks generated by API calls, such as creating a cluster.
 *
 * @description - You can view the progress details of tasks generated by either direct API calls, such as [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html), or operations in the PolarDB console, such as [creating a cluster](https://help.aliyun.com/document_detail/58769.html).
 * - Currently, this operation supports viewing the progress details only for tasks generated when you create a cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation, provided that the `CreationOption` parameter is not set to `CreateGdnStandby`.
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the verification reports.
 *
 * @param request DescribeUpgradeReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpgradeReportResponse
 */
DescribeUpgradeReportResponse Client::describeUpgradeReportWithOptions(const DescribeUpgradeReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationCategory()) {
    query["CreationCategory"] = request.getCreationCategory();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceDBClusterId()) {
    query["SourceDBClusterId"] = request.getSourceDBClusterId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpgradeReport"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpgradeReportResponse>();
}

/**
 * @summary Queries the verification reports.
 *
 * @param request DescribeUpgradeReportRequest
 * @return DescribeUpgradeReportResponse
 */
DescribeUpgradeReportResponse Client::describeUpgradeReport(const DescribeUpgradeReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpgradeReportWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyListWithOptions(const DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTDERegion()) {
    query["TDERegion"] = request.getTDERegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEncryptionKeyList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserEncryptionKeyListResponse>();
}

/**
 * @summary Retrieves a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about vSwitches.
 *
 * @param request DescribeVSwitchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchListResponse
 */
DescribeVSwitchListResponse Client::describeVSwitchListWithOptions(const DescribeVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitchList"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchListResponse>();
}

/**
 * @summary Retrieves information about vSwitches.
 *
 * @param request DescribeVSwitchListRequest
 * @return DescribeVSwitchListResponse
 */
DescribeVSwitchListResponse Client::describeVSwitchList(const DescribeVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchListWithOptions(request, runtime);
}

/**
 * @summary Queries one or more vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitches"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchesResponse>();
}

/**
 * @summary Queries one or more vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary Queries one or more VPCs.
 *
 * @param request DescribeVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcsWithOptions(const DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcsResponse>();
}

/**
 * @summary Queries one or more VPCs.
 *
 * @param request DescribeVpcsRequest
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcs(const DescribeVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the available zones.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasExtra()) {
    query["Extra"] = request.getExtra();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries the available zones.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Disables DynamoDB compatibility.
 *
 * @param request DisableDBClusterDynamoDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDBClusterDynamoDBResponse
 */
DisableDBClusterDynamoDBResponse Client::disableDBClusterDynamoDBWithOptions(const DisableDBClusterDynamoDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDBClusterDynamoDB"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDBClusterDynamoDBResponse>();
}

/**
 * @summary Disables DynamoDB compatibility.
 *
 * @param request DisableDBClusterDynamoDBRequest
 * @return DisableDBClusterDynamoDBResponse
 */
DisableDBClusterDynamoDBResponse Client::disableDBClusterDynamoDB(const DisableDBClusterDynamoDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBClusterDynamoDBWithOptions(request, runtime);
}

/**
 * @summary Disables the Orca (Redis-compatible) feature for a PolarDB cluster.
 *
 * @param request DisableDBClusterOrcaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDBClusterOrcaResponse
 */
DisableDBClusterOrcaResponse Client::disableDBClusterOrcaWithOptions(const DisableDBClusterOrcaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCleanData()) {
    query["CleanData"] = request.getCleanData();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDBClusterOrca"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDBClusterOrcaResponse>();
}

/**
 * @summary Disables the Orca (Redis-compatible) feature for a PolarDB cluster.
 *
 * @param request DisableDBClusterOrcaRequest
 * @return DisableDBClusterOrcaResponse
 */
DisableDBClusterOrcaResponse Client::disableDBClusterOrca(const DisableDBClusterOrcaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBClusterOrcaWithOptions(request, runtime);
}

/**
 * @summary Disables steady-state serverless.
 *
 * @param request DisableDBClusterServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDBClusterServerlessResponse
 */
DisableDBClusterServerlessResponse Client::disableDBClusterServerlessWithOptions(const DisableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDBClusterServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDBClusterServerlessResponse>();
}

/**
 * @summary Disables steady-state serverless.
 *
 * @param request DisableDBClusterServerlessRequest
 * @return DisableDBClusterServerlessResponse
 */
DisableDBClusterServerlessResponse Client::disableDBClusterServerless(const DisableDBClusterServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBClusterServerlessWithOptions(request, runtime);
}

/**
 * @summary This API disables a specified PolarClaw channel.
 *
 * @description ## Description
 * Call the`DisablePolarClawChannel` API to disable a PolarClaw channel for a specific application. Before you perform this operation, make sure you have the target channel ID and the application ID.
 *
 * @param request DisablePolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisablePolarClawChannelResponse
 */
DisablePolarClawChannelResponse Client::disablePolarClawChannelWithOptions(const DisablePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisablePolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisablePolarClawChannelResponse>();
}

/**
 * @summary This API disables a specified PolarClaw channel.
 *
 * @description ## Description
 * Call the`DisablePolarClawChannel` API to disable a PolarClaw channel for a specific application. Before you perform this operation, make sure you have the target channel ID and the application ID.
 *
 * @param request DisablePolarClawChannelRequest
 * @return DisablePolarClawChannelResponse
 */
DisablePolarClawChannelResponse Client::disablePolarClawChannel(const DisablePolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disablePolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Disables a PolarClaw cron job.
 *
 * @param request DisablePolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisablePolarClawCronJobResponse
 */
DisablePolarClawCronJobResponse Client::disablePolarClawCronJobWithOptions(const DisablePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisablePolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisablePolarClawCronJobResponse>();
}

/**
 * @summary Disables a PolarClaw cron job.
 *
 * @param request DisablePolarClawCronJobRequest
 * @return DisablePolarClawCronJobResponse
 */
DisablePolarClawCronJobResponse Client::disablePolarClawCronJob(const DisablePolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disablePolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Disables the PolarClaw plugin.
 *
 * @param request DisablePolarClawPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisablePolarClawPluginResponse
 */
DisablePolarClawPluginResponse Client::disablePolarClawPluginWithOptions(const DisablePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisablePolarClawPlugin"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisablePolarClawPluginResponse>();
}

/**
 * @summary Disables the PolarClaw plugin.
 *
 * @param request DisablePolarClawPluginRequest
 * @return DisablePolarClawPluginResponse
 */
DisablePolarClawPluginResponse Client::disablePolarClawPlugin(const DisablePolarClawPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disablePolarClawPluginWithOptions(request, runtime);
}

/**
 * @summary Enables DynamoDB compatibility.
 *
 * @param request EnableDBClusterDynamoDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDBClusterDynamoDBResponse
 */
EnableDBClusterDynamoDBResponse Client::enableDBClusterDynamoDBWithOptions(const EnableDBClusterDynamoDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDBClusterDynamoDB"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDBClusterDynamoDBResponse>();
}

/**
 * @summary Enables DynamoDB compatibility.
 *
 * @param request EnableDBClusterDynamoDBRequest
 * @return EnableDBClusterDynamoDBResponse
 */
EnableDBClusterDynamoDBResponse Client::enableDBClusterDynamoDB(const EnableDBClusterDynamoDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDBClusterDynamoDBWithOptions(request, runtime);
}

/**
 * @summary Enables the Orca (Redis-compatible) feature for a PolarDB cluster.
 *
 * @param request EnableDBClusterOrcaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDBClusterOrcaResponse
 */
EnableDBClusterOrcaResponse Client::enableDBClusterOrcaWithOptions(const EnableDBClusterOrcaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDBClusterOrca"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDBClusterOrcaResponse>();
}

/**
 * @summary Enables the Orca (Redis-compatible) feature for a PolarDB cluster.
 *
 * @param request EnableDBClusterOrcaRequest
 * @return EnableDBClusterOrcaResponse
 */
EnableDBClusterOrcaResponse Client::enableDBClusterOrca(const EnableDBClusterOrcaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDBClusterOrcaWithOptions(request, runtime);
}

/**
 * @summary Enables steady-state serverless.
 *
 * @param request EnableDBClusterServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDBClusterServerlessResponse
 */
EnableDBClusterServerlessResponse Client::enableDBClusterServerlessWithOptions(const EnableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.getScaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.getScaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.getScaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.getScaleRoNumMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDBClusterServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDBClusterServerlessResponse>();
}

/**
 * @summary Enables steady-state serverless.
 *
 * @param request EnableDBClusterServerlessRequest
 * @return EnableDBClusterServerlessResponse
 */
EnableDBClusterServerlessResponse Client::enableDBClusterServerless(const EnableDBClusterServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDBClusterServerlessWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of SQL firewall rules for a cluster.
 *
 * @param request EnableFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFirewallRulesResponse
 */
EnableFirewallRulesResponse Client::enableFirewallRulesWithOptions(const EnableFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableFirewallRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableFirewallRulesResponse>();
}

/**
 * @summary Modifies the status of SQL firewall rules for a cluster.
 *
 * @param request EnableFirewallRulesRequest
 * @return EnableFirewallRulesResponse
 */
EnableFirewallRulesResponse Client::enableFirewallRules(const EnableFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Enables a PolarClaw channel.
 *
 * @param request EnablePolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnablePolarClawChannelResponse
 */
EnablePolarClawChannelResponse Client::enablePolarClawChannelWithOptions(const EnablePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnablePolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnablePolarClawChannelResponse>();
}

/**
 * @summary Enables a PolarClaw channel.
 *
 * @param request EnablePolarClawChannelRequest
 * @return EnablePolarClawChannelResponse
 */
EnablePolarClawChannelResponse Client::enablePolarClawChannel(const EnablePolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enablePolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Enables a cron job in PolarClaw.
 *
 * @description ## Request
 * This operation enables a cron job in a PolarClaw application to run tasks on a schedule. Specify the correct `ApplicationId` to associate the job with the target application.
 *
 * @param request EnablePolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnablePolarClawCronJobResponse
 */
EnablePolarClawCronJobResponse Client::enablePolarClawCronJobWithOptions(const EnablePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnablePolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnablePolarClawCronJobResponse>();
}

/**
 * @summary Enables a cron job in PolarClaw.
 *
 * @description ## Request
 * This operation enables a cron job in a PolarClaw application to run tasks on a schedule. Specify the correct `ApplicationId` to associate the job with the target application.
 *
 * @param request EnablePolarClawCronJobRequest
 * @return EnablePolarClawCronJobResponse
 */
EnablePolarClawCronJobResponse Client::enablePolarClawCronJob(const EnablePolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enablePolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Enables a PolarClaw plugin.
 *
 * @param request EnablePolarClawPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnablePolarClawPluginResponse
 */
EnablePolarClawPluginResponse Client::enablePolarClawPluginWithOptions(const EnablePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnablePolarClawPlugin"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnablePolarClawPluginResponse>();
}

/**
 * @summary Enables a PolarClaw plugin.
 *
 * @param request EnablePolarClawPluginRequest
 * @return EnablePolarClawPluginResponse
 */
EnablePolarClawPluginResponse Client::enablePolarClawPlugin(const EnablePolarClawPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enablePolarClawPluginWithOptions(request, runtime);
}

/**
 * @summary Enables or disables SQL throttling rules.
 *
 * @param request EnableSQLRateLimitingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSQLRateLimitingRulesResponse
 */
EnableSQLRateLimitingRulesResponse Client::enableSQLRateLimitingRulesWithOptions(const EnableSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSQLRateLimitingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSQLRateLimitingRulesResponse>();
}

/**
 * @summary Enables or disables SQL throttling rules.
 *
 * @param request EnableSQLRateLimitingRulesRequest
 * @return EnableSQLRateLimitingRulesResponse
 */
EnableSQLRateLimitingRulesResponse Client::enableSQLRateLimitingRules(const EnableSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Evaluates the resources in a region.
 *
 * @param request EvaluateRegionResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateRegionResourceResponse
 */
EvaluateRegionResourceResponse Client::evaluateRegionResourceWithOptions(const EvaluateRegionResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceConnType()) {
    query["DBInstanceConnType"] = request.getDBInstanceConnType();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasDispenseMode()) {
    query["DispenseMode"] = request.getDispenseMode();
  }

  if (!!request.hasNeedMaxScaleLink()) {
    query["NeedMaxScaleLink"] = request.getNeedMaxScaleLink();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EvaluateRegionResource"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluateRegionResourceResponse>();
}

/**
 * @summary Evaluates the resources in a region.
 *
 * @param request EvaluateRegionResourceRequest
 * @return EvaluateRegionResourceResponse
 */
EvaluateRegionResourceResponse Client::evaluateRegionResource(const EvaluateRegionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateRegionResourceWithOptions(request, runtime);
}

/**
 * @summary Calls a cross-cloud OpenAPI.
 *
 * @param request ExecuteCrossCloudOpenAPIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteCrossCloudOpenAPIResponse
 */
ExecuteCrossCloudOpenAPIResponse Client::executeCrossCloudOpenAPIWithOptions(const ExecuteCrossCloudOpenAPIRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProxyInfo()) {
    query["ProxyInfo"] = request.getProxyInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteCrossCloudOpenAPI"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteCrossCloudOpenAPIResponse>();
}

/**
 * @summary Calls a cross-cloud OpenAPI.
 *
 * @param request ExecuteCrossCloudOpenAPIRequest
 * @return ExecuteCrossCloudOpenAPIResponse
 */
ExecuteCrossCloudOpenAPIResponse Client::executeCrossCloudOpenAPI(const ExecuteCrossCloudOpenAPIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeCrossCloudOpenAPIWithOptions(request, runtime);
}

/**
 * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
 *
 * @param request FailoverDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverDBClusterResponse
 */
FailoverDBClusterResponse Client::failoverDBClusterWithOptions(const FailoverDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRollBackForDisaster()) {
    query["RollBackForDisaster"] = request.getRollBackForDisaster();
  }

  if (!!request.hasTargetDBNodeId()) {
    query["TargetDBNodeId"] = request.getTargetDBNodeId();
  }

  if (!!request.hasTargetZoneType()) {
    query["TargetZoneType"] = request.getTargetZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverDBClusterResponse>();
}

/**
 * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
 *
 * @param request FailoverDBClusterRequest
 * @return FailoverDBClusterResponse
 */
FailoverDBClusterResponse Client::failoverDBCluster(const FailoverDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverDBClusterWithOptions(request, runtime);
}

/**
 * @summary Initiates a zonal failover for a PolarDB cluster, promoting a secondary node to primary.
 *
 * @param request FailoverDBClusterZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverDBClusterZonalResponse
 */
FailoverDBClusterZonalResponse Client::failoverDBClusterZonalWithOptions(const FailoverDBClusterZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRollBackForDisaster()) {
    query["RollBackForDisaster"] = request.getRollBackForDisaster();
  }

  if (!!request.hasTargetDBNodeId()) {
    query["TargetDBNodeId"] = request.getTargetDBNodeId();
  }

  if (!!request.hasTargetZoneType()) {
    query["TargetZoneType"] = request.getTargetZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverDBClusterZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverDBClusterZonalResponse>();
}

/**
 * @summary Initiates a zonal failover for a PolarDB cluster, promoting a secondary node to primary.
 *
 * @param request FailoverDBClusterZonalRequest
 * @return FailoverDBClusterZonalResponse
 */
FailoverDBClusterZonalResponse Client::failoverDBClusterZonal(const FailoverDBClusterZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverDBClusterZonalWithOptions(request, runtime);
}

/**
 * @summary Generates a report for a pre-upgrade check.
 *
 * @param request GenerateUpgradeReportForSyncCloneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUpgradeReportForSyncCloneResponse
 */
GenerateUpgradeReportForSyncCloneResponse Client::generateUpgradeReportForSyncCloneWithOptions(const GenerateUpgradeReportForSyncCloneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationCategory()) {
    query["CreationCategory"] = request.getCreationCategory();
  }

  if (!!request.hasCreationOption()) {
    query["CreationOption"] = request.getCreationOption();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.getDBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.getDBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReserve()) {
    query["Reserve"] = request.getReserve();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceDBClusterId()) {
    query["SourceDBClusterId"] = request.getSourceDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUpgradeReportForSyncClone"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUpgradeReportForSyncCloneResponse>();
}

/**
 * @summary Generates a report for a pre-upgrade check.
 *
 * @param request GenerateUpgradeReportForSyncCloneRequest
 * @return GenerateUpgradeReportForSyncCloneResponse
 */
GenerateUpgradeReportForSyncCloneResponse Client::generateUpgradeReportForSyncClone(const GenerateUpgradeReportForSyncCloneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUpgradeReportForSyncCloneWithOptions(request, runtime);
}

/**
 * @summary Creates a chat record.
 *
 * @param request GetPolarAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolarAgentResponse
 */
FutureGenerator<GetPolarAgentResponse> Client::getPolarAgentWithSSE(const GetPolarAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolarAgent"},
    {"version" , "2017-08-01"},
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<GetPolarAgentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Creates a chat record.
 *
 * @param request GetPolarAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolarAgentResponse
 */
GetPolarAgentResponse Client::getPolarAgentWithOptions(const GetPolarAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolarAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolarAgentResponse>();
}

/**
 * @summary Creates a chat record.
 *
 * @param request GetPolarAgentRequest
 * @return GetPolarAgentResponse
 */
GetPolarAgentResponse Client::getPolarAgent(const GetPolarAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolarAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the PolarClaw configuration.
 *
 * @param request GetPolarClawConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolarClawConfigResponse
 */
GetPolarClawConfigResponse Client::getPolarClawConfigWithOptions(const GetPolarClawConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasConfigPath()) {
    query["ConfigPath"] = request.getConfigPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolarClawConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolarClawConfigResponse>();
}

/**
 * @summary Retrieves the PolarClaw configuration.
 *
 * @param request GetPolarClawConfigRequest
 * @return GetPolarClawConfigResponse
 */
GetPolarClawConfigResponse Client::getPolarClawConfig(const GetPolarClawConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolarClawConfigWithOptions(request, runtime);
}

/**
 * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
 *
 * @description > - An account can be authorized to access one or more databases.
 * >
 * > - If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
 * >
 * > - Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
 * >
 * > - This operation is supported only for PolarDB for MySQL clusters.
 * >
 * > - By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
 *
 * @param request GrantAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilegeWithOptions(const GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantAccountPrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantAccountPrivilegeResponse>();
}

/**
 * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
 *
 * @description > - An account can be authorized to access one or more databases.
 * >
 * > - If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
 * >
 * > - Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
 * >
 * > - This operation is supported only for PolarDB for MySQL clusters.
 * >
 * > - By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
 *
 * @param request GrantAccountPrivilegeRequest
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary Modifies the account permissions on a PolarDB for Xscale cluster.
 *
 * @param request GrantAccountPrivilegeZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantAccountPrivilegeZonalResponse
 */
GrantAccountPrivilegeZonalResponse Client::grantAccountPrivilegeZonalWithOptions(const GrantAccountPrivilegeZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantAccountPrivilegeZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantAccountPrivilegeZonalResponse>();
}

/**
 * @summary Modifies the account permissions on a PolarDB for Xscale cluster.
 *
 * @param request GrantAccountPrivilegeZonalRequest
 * @return GrantAccountPrivilegeZonalResponse
 */
GrantAccountPrivilegeZonalResponse Client::grantAccountPrivilegeZonal(const GrantAccountPrivilegeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeZonalWithOptions(request, runtime);
}

/**
 * @summary Installs a PolarClaw plugin.
 *
 * @param request InstallPolarClawPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallPolarClawPluginResponse
 */
InstallPolarClawPluginResponse Client::installPolarClawPluginWithOptions(const InstallPolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasNpmPackage()) {
    query["NpmPackage"] = request.getNpmPackage();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallPolarClawPlugin"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallPolarClawPluginResponse>();
}

/**
 * @summary Installs a PolarClaw plugin.
 *
 * @param request InstallPolarClawPluginRequest
 * @return InstallPolarClawPluginResponse
 */
InstallPolarClawPluginResponse Client::installPolarClawPlugin(const InstallPolarClawPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installPolarClawPluginWithOptions(request, runtime);
}

/**
 * @summary Installs a PolarClaw Skill.
 *
 * @param request InstallPolarClawSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallPolarClawSkillResponse
 */
InstallPolarClawSkillResponse Client::installPolarClawSkillWithOptions(const InstallPolarClawSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  if (!!request.hasSlug()) {
    query["Slug"] = request.getSlug();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallPolarClawSkill"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallPolarClawSkillResponse>();
}

/**
 * @summary Installs a PolarClaw Skill.
 *
 * @param request InstallPolarClawSkillRequest
 * @return InstallPolarClawSkillResponse
 */
InstallPolarClawSkillResponse Client::installPolarClawSkill(const InstallPolarClawSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installPolarClawSkillWithOptions(request, runtime);
}

/**
 * @summary Queries a list of orders.
 *
 * @param request ListOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrdersResponse
 */
ListOrdersResponse Client::listOrdersWithOptions(const ListOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrders"},
    {"version" , "2017-08-01"},
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
 * @summary Queries a list of orders.
 *
 * @param request ListOrdersRequest
 * @return ListOrdersResponse
 */
ListOrdersResponse Client::listOrders(const ListOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrdersWithOptions(request, runtime);
}

/**
 * @summary Lists PolarClaw bindings.
 *
 * @param tmpReq ListPolarClawBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolarClawBindingsResponse
 */
ListPolarClawBindingsResponse Client::listPolarClawBindingsWithOptions(const ListPolarClawBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPolarClawBindingsShrinkRequest request = ListPolarClawBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentList()) {
    request.setAgentListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentList(), "AgentList", "json"));
  }

  json query = {};
  if (!!request.hasAgentListShrink()) {
    query["AgentList"] = request.getAgentListShrink();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolarClawBindings"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolarClawBindingsResponse>();
}

/**
 * @summary Lists PolarClaw bindings.
 *
 * @param request ListPolarClawBindingsRequest
 * @return ListPolarClawBindingsResponse
 */
ListPolarClawBindingsResponse Client::listPolarClawBindings(const ListPolarClawBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolarClawBindingsWithOptions(request, runtime);
}

/**
 * @summary List PolarClaw device pairings
 *
 * @param request ListPolarClawDevicePairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolarClawDevicePairsResponse
 */
ListPolarClawDevicePairsResponse Client::listPolarClawDevicePairsWithOptions(const ListPolarClawDevicePairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolarClawDevicePairs"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolarClawDevicePairsResponse>();
}

/**
 * @summary List PolarClaw device pairings
 *
 * @param request ListPolarClawDevicePairsRequest
 * @return ListPolarClawDevicePairsResponse
 */
ListPolarClawDevicePairsResponse Client::listPolarClawDevicePairs(const ListPolarClawDevicePairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolarClawDevicePairsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to one or more PolarDB clusters, or the PolarDB clusters that are attached to one or more tags.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are attached to one or more PolarDB clusters, or the PolarDB clusters that are attached to one or more tags.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to resources in a specified region.
 *
 * @param request ListTagResourcesForRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesForRegionResponse
 */
ListTagResourcesForRegionResponse Client::listTagResourcesForRegionWithOptions(const ListTagResourcesForRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResourcesForRegion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesForRegionResponse>();
}

/**
 * @summary Queries the tags that are attached to resources in a specified region.
 *
 * @param request ListTagResourcesForRegionRequest
 * @return ListTagResourcesForRegionResponse
 */
ListTagResourcesForRegionResponse Client::listTagResourcesForRegion(const ListTagResourcesForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesForRegionWithOptions(request, runtime);
}

/**
 * @summary Logs into a PolarClaw channel.
 *
 * @param request LoginPolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoginPolarClawChannelResponse
 */
LoginPolarClawChannelResponse Client::loginPolarClawChannelWithOptions(const LoginPolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoginPolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoginPolarClawChannelResponse>();
}

/**
 * @summary Logs into a PolarClaw channel.
 *
 * @param request LoginPolarClawChannelRequest
 * @return LoginPolarClawChannelResponse
 */
LoginPolarClawChannelResponse Client::loginPolarClawChannel(const LoginPolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loginPolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Starts a DB cluster.
 *
 * @param request ManuallyStartDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManuallyStartDBClusterResponse
 */
ManuallyStartDBClusterResponse Client::manuallyStartDBClusterWithOptions(const ManuallyStartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManuallyStartDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManuallyStartDBClusterResponse>();
}

/**
 * @summary Starts a DB cluster.
 *
 * @param request ManuallyStartDBClusterRequest
 * @return ManuallyStartDBClusterResponse
 */
ManuallyStartDBClusterResponse Client::manuallyStartDBCluster(const ManuallyStartDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manuallyStartDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modify the name of an AI instance
 *
 * @param request ModifyAIDBClusterDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAIDBClusterDescriptionResponse
 */
ModifyAIDBClusterDescriptionResponse Client::modifyAIDBClusterDescriptionWithOptions(const ModifyAIDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAIDBClusterDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAIDBClusterDescriptionResponse>();
}

/**
 * @summary Modify the name of an AI instance
 *
 * @param request ModifyAIDBClusterDescriptionRequest
 * @return ModifyAIDBClusterDescriptionResponse
 */
ModifyAIDBClusterDescriptionResponse Client::modifyAIDBClusterDescription(const ModifyAIDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAIDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a PolarDB database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountDescriptionResponse>();
}

/**
 * @summary Modifies the description of a PolarDB database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a PolarDB on ENS account.
 *
 * @param request ModifyAccountDescriptionZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionZonalResponse
 */
ModifyAccountDescriptionZonalResponse Client::modifyAccountDescriptionZonalWithOptions(const ModifyAccountDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescriptionZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountDescriptionZonalResponse>();
}

/**
 * @summary Modifies the description of a PolarDB on ENS account.
 *
 * @param request ModifyAccountDescriptionZonalRequest
 * @return ModifyAccountDescriptionZonalResponse
 */
ModifyAccountDescriptionZonalResponse Client::modifyAccountDescriptionZonal(const ModifyAccountDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionZonalWithOptions(request, runtime);
}

/**
 * @summary Changes the lock status of a PolarDB database account.
 *
 * @param request ModifyAccountLockStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountLockStateResponse
 */
ModifyAccountLockStateResponse Client::modifyAccountLockStateWithOptions(const ModifyAccountLockStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountLockState()) {
    query["AccountLockState"] = request.getAccountLockState();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPasswordValidTime()) {
    query["AccountPasswordValidTime"] = request.getAccountPasswordValidTime();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountLockState"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountLockStateResponse>();
}

/**
 * @summary Changes the lock status of a PolarDB database account.
 *
 * @param request ModifyAccountLockStateRequest
 * @return ModifyAccountLockStateResponse
 */
ModifyAccountLockStateResponse Client::modifyAccountLockState(const ModifyAccountLockStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountLockStateWithOptions(request, runtime);
}

/**
 * @summary Changes the password of a database account for a specified PolarDB cluster.
 *
 * @param request ModifyAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPasswordResponse
 */
ModifyAccountPasswordResponse Client::modifyAccountPasswordWithOptions(const ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNewAccountPassword()) {
    query["NewAccountPassword"] = request.getNewAccountPassword();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPasswordType()) {
    query["PasswordType"] = request.getPasswordType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPassword"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountPasswordResponse>();
}

/**
 * @summary Changes the password of a database account for a specified PolarDB cluster.
 *
 * @param request ModifyAccountPasswordRequest
 * @return ModifyAccountPasswordResponse
 */
ModifyAccountPasswordResponse Client::modifyAccountPassword(const ModifyAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the password of an account in a PolarDB for Xscale cluster.
 *
 * @param request ModifyAccountPasswordZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPasswordZonalResponse
 */
ModifyAccountPasswordZonalResponse Client::modifyAccountPasswordZonalWithOptions(const ModifyAccountPasswordZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNewAccountPassword()) {
    query["NewAccountPassword"] = request.getNewAccountPassword();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPasswordType()) {
    query["PasswordType"] = request.getPasswordType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPasswordZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountPasswordZonalResponse>();
}

/**
 * @summary Modifies the password of an account in a PolarDB for Xscale cluster.
 *
 * @param request ModifyAccountPasswordZonalRequest
 * @return ModifyAccountPasswordZonalResponse
 */
ModifyAccountPasswordZonalResponse Client::modifyAccountPasswordZonal(const ModifyAccountPasswordZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPasswordZonalWithOptions(request, runtime);
}

/**
 * @summary Configures the operations and maintenance (O&M) settings for a user. These settings include the active maintenance window.
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConfWithOptions(const ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasCycleTime()) {
    query["CycleTime"] = request.getCycleTime();
  }

  if (!!request.hasCycleType()) {
    query["CycleType"] = request.getCycleType();
  }

  if (!!request.hasMaintainEndTime()) {
    query["MaintainEndTime"] = request.getMaintainEndTime();
  }

  if (!!request.hasMaintainStartTime()) {
    query["MaintainStartTime"] = request.getMaintainStartTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationMaintainConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationMaintainConfResponse>();
}

/**
 * @summary Configures the operations and maintenance (O&M) settings for a user. These settings include the active maintenance window.
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasksWithOptions(const ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImmediateStart()) {
    query["ImmediateStart"] = request.getImmediateStart();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationTasksResponse>();
}

/**
 * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a PolarDB application.
 *
 * @param request ModifyApplicationDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationDescriptionResponse
 */
ModifyApplicationDescriptionResponse Client::modifyApplicationDescriptionWithOptions(const ModifyApplicationDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationDescriptionResponse>();
}

/**
 * @summary Updates the description of a PolarDB application.
 *
 * @param request ModifyApplicationDescriptionRequest
 * @return ModifyApplicationDescriptionResponse
 */
ModifyApplicationDescriptionResponse Client::modifyApplicationDescription(const ModifyApplicationDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration parameters of a sub-component within a specified PolarDB application.
 *
 * @param tmpReq ModifyApplicationParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationParameterResponse
 */
ModifyApplicationParameterResponse Client::modifyApplicationParameterWithOptions(const ModifyApplicationParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyApplicationParameterShrinkRequest request = ModifyApplicationParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasParameterName()) {
    query["ParameterName"] = request.getParameterName();
  }

  if (!!request.hasParameterValue()) {
    query["ParameterValue"] = request.getParameterValue();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationParameter"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationParameterResponse>();
}

/**
 * @summary Modifies the configuration parameters of a sub-component within a specified PolarDB application.
 *
 * @param request ModifyApplicationParameterRequest
 * @return ModifyApplicationParameterResponse
 */
ModifyApplicationParameterResponse Client::modifyApplicationParameter(const ModifyApplicationParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationParameterWithOptions(request, runtime);
}

/**
 * @summary Modifies the prompt for a specified application.
 *
 * @param request ModifyApplicationPromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationPromptResponse
 */
ModifyApplicationPromptResponse Client::modifyApplicationPromptWithOptions(const ModifyApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPromptId()) {
    query["PromptId"] = request.getPromptId();
  }

  if (!!request.hasPromptName()) {
    query["PromptName"] = request.getPromptName();
  }

  if (!!request.hasPromptValue()) {
    query["PromptValue"] = request.getPromptValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationPrompt"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationPromptResponse>();
}

/**
 * @summary Modifies the prompt for a specified application.
 *
 * @param request ModifyApplicationPromptRequest
 * @return ModifyApplicationPromptResponse
 */
ModifyApplicationPromptResponse Client::modifyApplicationPrompt(const ModifyApplicationPromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationPromptWithOptions(request, runtime);
}

/**
 * @summary Modifies the Serverless configuration of a PolarDB application.
 *
 * @param request ModifyApplicationServerlessConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationServerlessConfResponse
 */
ModifyApplicationServerlessConfResponse Client::modifyApplicationServerlessConfWithOptions(const ModifyApplicationServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasServerlessConfList()) {
    query["ServerlessConfList"] = request.getServerlessConfList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationServerlessConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationServerlessConfResponse>();
}

/**
 * @summary Modifies the Serverless configuration of a PolarDB application.
 *
 * @param request ModifyApplicationServerlessConfRequest
 * @return ModifyApplicationServerlessConfResponse
 */
ModifyApplicationServerlessConfResponse Client::modifyApplicationServerlessConf(const ModifyApplicationServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationServerlessConfWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist and security group configuration for a PolarDB application.
 *
 * @param request ModifyApplicationWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationWhitelistResponse
 */
ModifyApplicationWhitelistResponse Client::modifyApplicationWhitelistWithOptions(const ModifyApplicationWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasComponentId()) {
    query["ComponentId"] = request.getComponentId();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasSecurityGroups()) {
    query["SecurityGroups"] = request.getSecurityGroups();
  }

  if (!!request.hasSecurityIPArrayName()) {
    query["SecurityIPArrayName"] = request.getSecurityIPArrayName();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationWhitelist"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationWhitelistResponse>();
}

/**
 * @summary Modifies the IP address whitelist and security group configuration for a PolarDB application.
 *
 * @param request ModifyApplicationWhitelistRequest
 * @return ModifyApplicationWhitelistResponse
 */
ModifyApplicationWhitelistResponse Client::modifyApplicationWhitelist(const ModifyApplicationWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationWhitelistWithOptions(request, runtime);
}

/**
 * @summary Sets the auto-renewal status for a subscription PolarDB cluster.
 *
 * @param request ModifyAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttributeWithOptions(const ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.getDBClusterIds();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoRenewAttribute"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoRenewAttributeResponse>();
}

/**
 * @summary Sets the auto-renewal status for a subscription PolarDB cluster.
 *
 * @param request ModifyAutoRenewAttributeRequest
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic backup policy for a PolarDB cluster.
 *
 * @description > You can also modify the automatic backup policy for a PolarDB cluster in the console. For more information, see [backup settings](https://help.aliyun.com/document_detail/280422.html).
 *
 * @param tmpReq ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBackupPolicyShrinkRequest request = ModifyBackupPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedDataPolicies()) {
    request.setAdvancedDataPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvancedDataPolicies(), "AdvancedDataPolicies", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedDataPoliciesShrink()) {
    query["AdvancedDataPolicies"] = request.getAdvancedDataPoliciesShrink();
  }

  if (!!request.hasBackupFrequency()) {
    query["BackupFrequency"] = request.getBackupFrequency();
  }

  if (!!request.hasBackupPolicyLevel()) {
    query["BackupPolicyLevel"] = request.getBackupPolicyLevel();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDataLevel1BackupFrequency()) {
    query["DataLevel1BackupFrequency"] = request.getDataLevel1BackupFrequency();
  }

  if (!!request.hasDataLevel1BackupPeriod()) {
    query["DataLevel1BackupPeriod"] = request.getDataLevel1BackupPeriod();
  }

  if (!!request.hasDataLevel1BackupRetentionPeriod()) {
    query["DataLevel1BackupRetentionPeriod"] = request.getDataLevel1BackupRetentionPeriod();
  }

  if (!!request.hasDataLevel1BackupTime()) {
    query["DataLevel1BackupTime"] = request.getDataLevel1BackupTime();
  }

  if (!!request.hasDataLevel2BackupAnotherRegionRegion()) {
    query["DataLevel2BackupAnotherRegionRegion"] = request.getDataLevel2BackupAnotherRegionRegion();
  }

  if (!!request.hasDataLevel2BackupAnotherRegionRetentionPeriod()) {
    query["DataLevel2BackupAnotherRegionRetentionPeriod"] = request.getDataLevel2BackupAnotherRegionRetentionPeriod();
  }

  if (!!request.hasDataLevel2BackupPeriod()) {
    query["DataLevel2BackupPeriod"] = request.getDataLevel2BackupPeriod();
  }

  if (!!request.hasDataLevel2BackupRetentionPeriod()) {
    query["DataLevel2BackupRetentionPeriod"] = request.getDataLevel2BackupRetentionPeriod();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPolicyResponse>();
}

/**
 * @summary Modifies the automatic backup policy for a PolarDB cluster.
 *
 * @description > You can also modify the automatic backup policy for a PolarDB cluster in the console. For more information, see [backup settings](https://help.aliyun.com/document_detail/280422.html).
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a budget policy.
 *
 * @param request ModifyBudgetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBudgetPolicyResponse
 */
ModifyBudgetPolicyResponse Client::modifyBudgetPolicyWithOptions(const ModifyBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertThresholdPct()) {
    query["AlertThresholdPct"] = request.getAlertThresholdPct();
  }

  if (!!request.hasBudgetPoints()) {
    query["BudgetPoints"] = request.getBudgetPoints();
  }

  if (!!request.hasBudgetPolicyId()) {
    query["BudgetPolicyId"] = request.getBudgetPolicyId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetDayOfMonth()) {
    query["ResetDayOfMonth"] = request.getResetDayOfMonth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBudgetPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBudgetPolicyResponse>();
}

/**
 * @summary Modifies a budget policy.
 *
 * @param request ModifyBudgetPolicyRequest
 * @return ModifyBudgetPolicyResponse
 */
ModifyBudgetPolicyResponse Client::modifyBudgetPolicy(const ModifyBudgetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBudgetPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of a consumer.
 *
 * @param request ModifyConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConsumerResponse
 */
ModifyConsumerResponse Client::modifyConsumerWithOptions(const ModifyConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.getConsumerGroupName();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConsumer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConsumerResponse>();
}

/**
 * @summary Modifies the properties of a consumer.
 *
 * @param request ModifyConsumerRequest
 * @return ModifyConsumerResponse
 */
ModifyConsumerResponse Client::modifyConsumer(const ModifyConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConsumerWithOptions(request, runtime);
}

/**
 * @summary Modifies a consumer group.
 *
 * @param request ModifyConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConsumerGroupResponse
 */
ModifyConsumerGroupResponse Client::modifyConsumerGroupWithOptions(const ModifyConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.getConsumerGroupName();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.getNickName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConsumerGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConsumerGroupResponse>();
}

/**
 * @summary Modifies a consumer group.
 *
 * @param request ModifyConsumerGroupRequest
 * @return ModifyConsumerGroupResponse
 */
ModifyConsumerGroupResponse Client::modifyConsumerGroup(const ModifyConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a cost rule.
 *
 * @param request ModifyCostRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCostRuleResponse
 */
ModifyCostRuleResponse Client::modifyCostRuleWithOptions(const ModifyCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheCostPointsPerMillion()) {
    query["CacheCostPointsPerMillion"] = request.getCacheCostPointsPerMillion();
  }

  if (!!request.hasCostRuleId()) {
    query["CostRuleId"] = request.getCostRuleId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasInputCostPointsPerMillion()) {
    query["InputCostPointsPerMillion"] = request.getInputCostPointsPerMillion();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.getModelServiceId();
  }

  if (!!request.hasOutputCostPointsPerMillion()) {
    query["OutputCostPointsPerMillion"] = request.getOutputCostPointsPerMillion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCostRule"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCostRuleResponse>();
}

/**
 * @summary Modifies a cost rule.
 *
 * @param request ModifyCostRuleRequest
 * @return ModifyCostRuleResponse
 */
ModifyCostRuleResponse Client::modifyCostRule(const ModifyCostRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCostRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the policy for a scheduled task.
 *
 * @param request ModifyCronJobPolicyServerlessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCronJobPolicyServerlessResponse
 */
ModifyCronJobPolicyServerlessResponse Client::modifyCronJobPolicyServerlessWithOptions(const ModifyCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowShutDown()) {
    query["AllowShutDown"] = request.getAllowShutDown();
  }

  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.getScaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.getScaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.getScaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.getScaleRoNumMin();
  }

  if (!!request.hasSecondsUntilAutoPause()) {
    query["SecondsUntilAutoPause"] = request.getSecondsUntilAutoPause();
  }

  if (!!request.hasServerlessRuleCpuEnlargeThreshold()) {
    query["ServerlessRuleCpuEnlargeThreshold"] = request.getServerlessRuleCpuEnlargeThreshold();
  }

  if (!!request.hasServerlessRuleCpuShrinkThreshold()) {
    query["ServerlessRuleCpuShrinkThreshold"] = request.getServerlessRuleCpuShrinkThreshold();
  }

  if (!!request.hasServerlessRuleMode()) {
    query["ServerlessRuleMode"] = request.getServerlessRuleMode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCronJobPolicyServerless"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCronJobPolicyServerlessResponse>();
}

/**
 * @summary Modifies the policy for a scheduled task.
 *
 * @param request ModifyCronJobPolicyServerlessRequest
 * @return ModifyCronJobPolicyServerlessResponse
 */
ModifyCronJobPolicyServerlessResponse Client::modifyCronJobPolicyServerless(const ModifyCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary Modifies the feature configurations of a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBClusterWithOptions(const ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompressStorage()) {
    query["CompressStorage"] = request.getCompressStorage();
  }

  if (!!request.hasConnectionResourceQuota()) {
    query["ConnectionResourceQuota"] = request.getConnectionResourceQuota();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeCrashList()) {
    query["DBNodeCrashList"] = request.getDBNodeCrashList();
  }

  if (!!request.hasDataSyncMode()) {
    query["DataSyncMode"] = request.getDataSyncMode();
  }

  if (!!request.hasFaultInjectionType()) {
    query["FaultInjectionType"] = request.getFaultInjectionType();
  }

  if (!!request.hasFaultSimulateMode()) {
    query["FaultSimulateMode"] = request.getFaultSimulateMode();
  }

  if (!!request.hasImciAutoIndex()) {
    query["ImciAutoIndex"] = request.getImciAutoIndex();
  }

  if (!!request.hasModifyRowCompression()) {
    query["ModifyRowCompression"] = request.getModifyRowCompression();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStandbyHAMode()) {
    query["StandbyHAMode"] = request.getStandbyHAMode();
  }

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.getStorageAutoScale();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.getStorageUpperBound();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.getTableMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBCluster"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterResponse>();
}

/**
 * @summary Modifies the feature configurations of a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies the access whitelist for a cluster. The whitelist can be an IP address whitelist or a security group.
 *
 * @param request ModifyDBClusterAccessWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterAccessWhitelistResponse
 */
ModifyDBClusterAccessWhitelistResponse Client::modifyDBClusterAccessWhitelistWithOptions(const ModifyDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterIPArrayAttribute()) {
    query["DBClusterIPArrayAttribute"] = request.getDBClusterIPArrayAttribute();
  }

  if (!!request.hasDBClusterIPArrayName()) {
    query["DBClusterIPArrayName"] = request.getDBClusterIPArrayName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.getSecurityIps();
  }

  if (!!request.hasWhiteListType()) {
    query["WhiteListType"] = request.getWhiteListType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterAccessWhitelist"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterAccessWhitelistResponse>();
}

/**
 * @summary Creates or modifies the access whitelist for a cluster. The whitelist can be an IP address whitelist or a security group.
 *
 * @param request ModifyDBClusterAccessWhitelistRequest
 * @return ModifyDBClusterAccessWhitelistResponse
 */
ModifyDBClusterAccessWhitelistResponse Client::modifyDBClusterAccessWhitelist(const ModifyDBClusterAccessWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAccessWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modify cluster parameters and apply them to specified nodes.
 *
 * @param request ModifyDBClusterAndNodesParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterAndNodesParametersResponse
 */
ModifyDBClusterAndNodesParametersResponse Client::modifyDBClusterAndNodesParametersWithOptions(const ModifyDBClusterAndNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClearBinlog()) {
    query["ClearBinlog"] = request.getClearBinlog();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStandbyClusterIdListNeedToSync()) {
    query["StandbyClusterIdListNeedToSync"] = request.getStandbyClusterIdListNeedToSync();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterAndNodesParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterAndNodesParametersResponse>();
}

/**
 * @summary Modify cluster parameters and apply them to specified nodes.
 *
 * @param request ModifyDBClusterAndNodesParametersRequest
 * @return ModifyDBClusterAndNodesParametersResponse
 */
ModifyDBClusterAndNodesParametersResponse Client::modifyDBClusterAndNodesParameters(const ModifyDBClusterAndNodesParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAndNodesParametersWithOptions(request, runtime);
}

/**
 * @summary Modifies the high-availability mode of a cluster.
 *
 * @param request ModifyDBClusterArchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterArchResponse
 */
ModifyDBClusterArchResponse Client::modifyDBClusterArchWithOptions(const ModifyDBClusterArchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasHotStandbyCluster()) {
    query["HotStandbyCluster"] = request.getHotStandbyCluster();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStandbyAZ()) {
    query["StandbyAZ"] = request.getStandbyAZ();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterArch"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterArchResponse>();
}

/**
 * @summary Modifies the high-availability mode of a cluster.
 *
 * @param request ModifyDBClusterArchRequest
 * @return ModifyDBClusterArchResponse
 */
ModifyDBClusterArchResponse Client::modifyDBClusterArch(const ModifyDBClusterArchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterArchWithOptions(request, runtime);
}

/**
 * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
 *
 * @description **Note:** This API has been deprecated and is no longer maintained. We recommend that you use [Enable or configure DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778835.html).
 * > If DAS Enterprise Edition is available in the region of the cluster, calling this API to enable SQL Audit automatically enables the latest DAS Enterprise Edition available in that region. For information about database engines and regions supported by each DAS Enterprise Edition version, see [Supported database engines and regions for DAS Enterprise Edition](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifyDBClusterAuditLogCollectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterAuditLogCollectorResponse
 */
ModifyDBClusterAuditLogCollectorResponse Client::modifyDBClusterAuditLogCollectorWithOptions(const ModifyDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollectorStatus()) {
    query["CollectorStatus"] = request.getCollectorStatus();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterAuditLogCollector"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterAuditLogCollectorResponse>();
}

/**
 * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
 *
 * @description **Note:** This API has been deprecated and is no longer maintained. We recommend that you use [Enable or configure DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778835.html).
 * > If DAS Enterprise Edition is available in the region of the cluster, calling this API to enable SQL Audit automatically enables the latest DAS Enterprise Edition available in that region. For information about database engines and regions supported by each DAS Enterprise Edition version, see [Supported database engines and regions for DAS Enterprise Edition](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifyDBClusterAuditLogCollectorRequest
 * @return ModifyDBClusterAuditLogCollectorResponse
 */
ModifyDBClusterAuditLogCollectorResponse Client::modifyDBClusterAuditLogCollector(const ModifyDBClusterAuditLogCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAuditLogCollectorWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the cluster lock.
 *
 * @param request ModifyDBClusterDeletionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterDeletionResponse
 */
ModifyDBClusterDeletionResponse Client::modifyDBClusterDeletionWithOptions(const ModifyDBClusterDeletionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProtection()) {
    query["Protection"] = request.getProtection();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterDeletion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterDeletionResponse>();
}

/**
 * @summary Enables or disables the cluster lock.
 *
 * @param request ModifyDBClusterDeletionRequest
 * @return ModifyDBClusterDeletionResponse
 */
ModifyDBClusterDeletionResponse Client::modifyDBClusterDeletion(const ModifyDBClusterDeletionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDeletionWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a PolarDB cluster.
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescriptionWithOptions(const ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterDescriptionResponse>();
}

/**
 * @summary Modifies the description of a PolarDB cluster.
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a cluster.
 *
 * @param request ModifyDBClusterDescriptionZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterDescriptionZonalResponse
 */
ModifyDBClusterDescriptionZonalResponse Client::modifyDBClusterDescriptionZonalWithOptions(const ModifyDBClusterDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterDescriptionZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterDescriptionZonalResponse>();
}

/**
 * @summary Modifies the description of a cluster.
 *
 * @param request ModifyDBClusterDescriptionZonalRequest
 * @return ModifyDBClusterDescriptionZonalResponse
 */
ModifyDBClusterDescriptionZonalResponse Client::modifyDBClusterDescriptionZonal(const ModifyDBClusterDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionZonalWithOptions(request, runtime);
}

/**
 * @summary This operation modifies the properties of a PolarDB cluster endpoint. You can configure settings such as the read/write mode, automatic node addition, consistency level, transaction splitting, the connection pool, and whether the primary node accepts read requests.
 *
 * @param request ModifyDBClusterEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterEndpointResponse
 */
ModifyDBClusterEndpointResponse Client::modifyDBClusterEndpointWithOptions(const ModifyDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAddNewNodes()) {
    query["AutoAddNewNodes"] = request.getAutoAddNewNodes();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.getDBEndpointDescription();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.getEndpointConfig();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.getNodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.getPolarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.getPolarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.getReadWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.getSccMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterEndpoint"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterEndpointResponse>();
}

/**
 * @summary This operation modifies the properties of a PolarDB cluster endpoint. You can configure settings such as the read/write mode, automatic node addition, consistency level, transaction splitting, the connection pool, and whether the primary node accepts read requests.
 *
 * @param request ModifyDBClusterEndpointRequest
 * @return ModifyDBClusterEndpointResponse
 */
ModifyDBClusterEndpointResponse Client::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection string for an edge cluster for PolarDB on ENS.
 *
 * @param request ModifyDBClusterEndpointZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterEndpointZonalResponse
 */
ModifyDBClusterEndpointZonalResponse Client::modifyDBClusterEndpointZonalWithOptions(const ModifyDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAddNewNodes()) {
    query["AutoAddNewNodes"] = request.getAutoAddNewNodes();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.getDBEndpointDescription();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.getEndpointConfig();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.getNodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.getPolarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.getPolarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.getReadWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.getSccMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterEndpointZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterEndpointZonalResponse>();
}

/**
 * @summary Modifies the connection string for an edge cluster for PolarDB on ENS.
 *
 * @param request ModifyDBClusterEndpointZonalRequest
 * @return ModifyDBClusterEndpointZonalResponse
 */
ModifyDBClusterEndpointZonalResponse Client::modifyDBClusterEndpointZonal(const ModifyDBClusterEndpointZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterEndpointZonalWithOptions(request, runtime);
}

/**
 * @summary Modifies the routine maintenance window for a PolarDB cluster.
 *
 * @description > Set the routine maintenance window for the cluster to a time during off-peak hours. Alibaba Cloud performs cluster maintenance during this window to minimize the impact on your business.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTimeWithOptions(const ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.getMaintainTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMaintainTime"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterMaintainTimeResponse>();
}

/**
 * @summary Modifies the routine maintenance window for a PolarDB cluster.
 *
 * @description > Set the routine maintenance window for the cluster to a time during off-peak hours. Alibaba Cloud performs cluster maintenance during this window to minimize the impact on your business.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Switches or rolls back a migration task for a one-click upgrade from RDS to PolarDB.
 *
 * @description - If this operation is called before the switchover, it performs a switchover.
 * - If this operation is called after the switchover is complete, it performs a rollback.
 * > A one-click upgrade task must be created for the cluster before you call this operation. To create the task, call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [One-click upgrade from RDS MySQL to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request ModifyDBClusterMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMigrationResponse
 */
ModifyDBClusterMigrationResponse Client::modifyDBClusterMigrationWithOptions(const ModifyDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStrings()) {
    query["ConnectionStrings"] = request.getConnectionStrings();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNewMasterInstanceId()) {
    query["NewMasterInstanceId"] = request.getNewMasterInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSourceRDSDBInstanceId()) {
    query["SourceRDSDBInstanceId"] = request.getSourceRDSDBInstanceId();
  }

  if (!!request.hasSwapConnectionString()) {
    query["SwapConnectionString"] = request.getSwapConnectionString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMigration"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterMigrationResponse>();
}

/**
 * @summary Switches or rolls back a migration task for a one-click upgrade from RDS to PolarDB.
 *
 * @description - If this operation is called before the switchover, it performs a switchover.
 * - If this operation is called after the switchover is complete, it performs a rollback.
 * > A one-click upgrade task must be created for the cluster before you call this operation. To create the task, call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [One-click upgrade from RDS MySQL to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request ModifyDBClusterMigrationRequest
 * @return ModifyDBClusterMigrationResponse
 */
ModifyDBClusterMigrationResponse Client::modifyDBClusterMigration(const ModifyDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary Modifies the source and target instances of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDBClusterMigrationEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMigrationEndpointResponse
 */
ModifyDBClusterMigrationEndpointResponse Client::modifyDBClusterMigrationEndpointWithOptions(const ModifyDBClusterMigrationEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasMigrationConfig()) {
    query["MigrationConfig"] = request.getMigrationConfig();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMigrationEndpoint"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterMigrationEndpointResponse>();
}

/**
 * @summary Modifies the source and target instances of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDBClusterMigrationEndpointRequest
 * @return ModifyDBClusterMigrationEndpointResponse
 */
ModifyDBClusterMigrationEndpointResponse Client::modifyDBClusterMigrationEndpoint(const ModifyDBClusterMigrationEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMigrationEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
 *
 * @description *   When the monitoring data is collected every 5 seconds:
 *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
 *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
 *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
 *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
 *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
 * *   When the monitoring data is collected every 60 seconds:
 *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
 *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
 *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
 *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
 *
 * @param request ModifyDBClusterMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMonitorResponse
 */
ModifyDBClusterMonitorResponse Client::modifyDBClusterMonitorWithOptions(const ModifyDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMonitor"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterMonitorResponse>();
}

/**
 * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
 *
 * @description *   When the monitoring data is collected every 5 seconds:
 *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
 *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
 *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
 *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
 *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
 * *   When the monitoring data is collected every 60 seconds:
 *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
 *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
 *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
 *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
 *
 * @param request ModifyDBClusterMonitorRequest
 * @return ModifyDBClusterMonitorResponse
 */
ModifyDBClusterMonitorResponse Client::modifyDBClusterMonitor(const ModifyDBClusterMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMonitorWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameters of a PolarDB cluster or applies an existing parameter template to a destination cluster.
 *
 * @description The parameter template feature in PolarDB lets you centrally manage parameters and apply them to your clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > The parameter template feature is available only for PolarDB for MySQL.
 *
 * @param request ModifyDBClusterParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterParametersResponse
 */
ModifyDBClusterParametersResponse Client::modifyDBClusterParametersWithOptions(const ModifyDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClearBinlog()) {
    query["ClearBinlog"] = request.getClearBinlog();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterParametersResponse>();
}

/**
 * @summary Modifies the parameters of a PolarDB cluster or applies an existing parameter template to a destination cluster.
 *
 * @description The parameter template feature in PolarDB lets you centrally manage parameters and apply them to your clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
 * > The parameter template feature is available only for PolarDB for MySQL.
 *
 * @param request ModifyDBClusterParametersRequest
 * @return ModifyDBClusterParametersResponse
 */
ModifyDBClusterParametersResponse Client::modifyDBClusterParameters(const ModifyDBClusterParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterParametersWithOptions(request, runtime);
}

/**
 * @summary Changes the primary zone of a PolarDB cluster.
 *
 * @param request ModifyDBClusterPrimaryZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterPrimaryZoneResponse
 */
ModifyDBClusterPrimaryZoneResponse Client::modifyDBClusterPrimaryZoneWithOptions(const ModifyDBClusterPrimaryZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasIsSwitchOverForDisaster()) {
    query["IsSwitchOverForDisaster"] = request.getIsSwitchOverForDisaster();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasZoneType()) {
    query["ZoneType"] = request.getZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterPrimaryZone"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterPrimaryZoneResponse>();
}

/**
 * @summary Changes the primary zone of a PolarDB cluster.
 *
 * @param request ModifyDBClusterPrimaryZoneRequest
 * @return ModifyDBClusterPrimaryZoneResponse
 */
ModifyDBClusterPrimaryZoneResponse Client::modifyDBClusterPrimaryZone(const ModifyDBClusterPrimaryZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterPrimaryZoneWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group of a database cluster.
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroupWithOptions(const ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterResourceGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterResourceGroupResponse>();
}

/**
 * @summary Modifies the resource group of a database cluster.
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroup(const ModifyDBClusterResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Enables or disables SSL encryption for a PolarDB cluster, or updates its CA certificate.
 *
 * @param request ModifyDBClusterSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSLWithOptions(const ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSSLAutoRotate()) {
    query["SSLAutoRotate"] = request.getSSLAutoRotate();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.getSSLEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterSSL"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterSSLResponse>();
}

/**
 * @summary Enables or disables SSL encryption for a PolarDB cluster, or updates its CA certificate.
 *
 * @param request ModifyDBClusterSSLRequest
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSL(const ModifyDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a serverless cluster.
 *
 * @param request ModifyDBClusterServerlessConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterServerlessConfResponse
 */
ModifyDBClusterServerlessConfResponse Client::modifyDBClusterServerlessConfWithOptions(const ModifyDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowShutDown()) {
    query["AllowShutDown"] = request.getAllowShutDown();
  }

  if (!!request.hasCrontabJobId()) {
    query["CrontabJobId"] = request.getCrontabJobId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.getScaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.getScaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.getScaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.getScaleRoNumMin();
  }

  if (!!request.hasSecondsUntilAutoPause()) {
    query["SecondsUntilAutoPause"] = request.getSecondsUntilAutoPause();
  }

  if (!!request.hasServerlessRuleCpuEnlargeThreshold()) {
    query["ServerlessRuleCpuEnlargeThreshold"] = request.getServerlessRuleCpuEnlargeThreshold();
  }

  if (!!request.hasServerlessRuleCpuShrinkThreshold()) {
    query["ServerlessRuleCpuShrinkThreshold"] = request.getServerlessRuleCpuShrinkThreshold();
  }

  if (!!request.hasServerlessRuleMode()) {
    query["ServerlessRuleMode"] = request.getServerlessRuleMode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterServerlessConf"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterServerlessConfResponse>();
}

/**
 * @summary Modifies the configuration of a serverless cluster.
 *
 * @param request ModifyDBClusterServerlessConfRequest
 * @return ModifyDBClusterServerlessConfResponse
 */
ModifyDBClusterServerlessConfResponse Client::modifyDBClusterServerlessConf(const ModifyDBClusterServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterServerlessConfWithOptions(request, runtime);
}

/**
 * @summary Modifies the storage performance of a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBClusterStoragePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterStoragePerformanceResponse
 */
ModifyDBClusterStoragePerformanceResponse Client::modifyDBClusterStoragePerformanceWithOptions(const ModifyDBClusterStoragePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.getProvisionedIops();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterStoragePerformance"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterStoragePerformanceResponse>();
}

/**
 * @summary Modifies the storage performance of a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBClusterStoragePerformanceRequest
 * @return ModifyDBClusterStoragePerformanceResponse
 */
ModifyDBClusterStoragePerformanceResponse Client::modifyDBClusterStoragePerformance(const ModifyDBClusterStoragePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterStoragePerformanceWithOptions(request, runtime);
}

/**
 * @summary This operation modifies the storage space for pay-as-you-go enterprise edition and standard edition clusters.
 *
 * @description > You cannot scale down the storage space of PolarDB for PostgreSQL clusters.
 *
 * @param request ModifyDBClusterStorageSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterStorageSpaceResponse
 */
ModifyDBClusterStorageSpaceResponse Client::modifyDBClusterStorageSpaceWithOptions(const ModifyDBClusterStorageSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStorageSpace()) {
    query["StorageSpace"] = request.getStorageSpace();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.getSubCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterStorageSpace"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterStorageSpaceResponse>();
}

/**
 * @summary This operation modifies the storage space for pay-as-you-go enterprise edition and standard edition clusters.
 *
 * @description > You cannot scale down the storage space of PolarDB for PostgreSQL clusters.
 *
 * @param request ModifyDBClusterStorageSpaceRequest
 * @return ModifyDBClusterStorageSpaceResponse
 */
ModifyDBClusterStorageSpaceResponse Client::modifyDBClusterStorageSpace(const ModifyDBClusterStorageSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterStorageSpaceWithOptions(request, runtime);
}

/**
 * @summary ModifyDBClusterTDE
 *
 * @description > - You must activate Key Management Service (KMS) before you perform this operation. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
 * >
 * > - You cannot disable transparent data encryption (TDE) after you enable it.
 *
 * @param request ModifyDBClusterTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterTDEResponse
 */
ModifyDBClusterTDEResponse Client::modifyDBClusterTDEWithOptions(const ModifyDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEnableAutomaticRotation()) {
    query["EnableAutomaticRotation"] = request.getEnableAutomaticRotation();
  }

  if (!!request.hasEncryptNewTables()) {
    query["EncryptNewTables"] = request.getEncryptNewTables();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.getTDEStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterTDE"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterTDEResponse>();
}

/**
 * @summary ModifyDBClusterTDE
 *
 * @description > - You must activate Key Management Service (KMS) before you perform this operation. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
 * >
 * > - You cannot disable transparent data encryption (TDE) after you enable it.
 *
 * @param request ModifyDBClusterTDERequest
 * @return ModifyDBClusterTDEResponse
 */
ModifyDBClusterTDEResponse Client::modifyDBClusterTDE(const ModifyDBClusterTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterTDEWithOptions(request, runtime);
}

/**
 * @summary Modifies the vSwitch parameters for a cluster.
 *
 * @param request ModifyDBClusterVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterVpcResponse
 */
ModifyDBClusterVpcResponse Client::modifyDBClusterVpcWithOptions(const ModifyDBClusterVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasExistedEndpointSwitchType()) {
    query["ExistedEndpointSwitchType"] = request.getExistedEndpointSwitchType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterVpc"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterVpcResponse>();
}

/**
 * @summary Modifies the vSwitch parameters for a cluster.
 *
 * @param request ModifyDBClusterVpcRequest
 * @return ModifyDBClusterVpcResponse
 */
ModifyDBClusterVpcResponse Client::modifyDBClusterVpc(const ModifyDBClusterVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterVpcWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBDescriptionResponse
 */
ModifyDBDescriptionResponse Client::modifyDBDescriptionWithOptions(const ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBDescriptionResponse>();
}

/**
 * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBDescriptionRequest
 * @return ModifyDBDescriptionResponse
 */
ModifyDBDescriptionResponse Client::modifyDBDescription(const ModifyDBDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the database description of an edge cluster for PolarDB on ENS.
 *
 * @param request ModifyDBDescriptionZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBDescriptionZonalResponse
 */
ModifyDBDescriptionZonalResponse Client::modifyDBDescriptionZonalWithOptions(const ModifyDBDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBDescriptionZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBDescriptionZonalResponse>();
}

/**
 * @summary Modifies the database description of an edge cluster for PolarDB on ENS.
 *
 * @param request ModifyDBDescriptionZonalRequest
 * @return ModifyDBDescriptionZonalResponse
 */
ModifyDBDescriptionZonalResponse Client::modifyDBDescriptionZonal(const ModifyDBDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBDescriptionZonalWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection address of a PolarDB cluster. The address can be a primary address, default cluster address, custom cluster address, or private domain name.
 *
 * @param request ModifyDBEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBEndpointAddressResponse
 */
ModifyDBEndpointAddressResponse Client::modifyDBEndpointAddressWithOptions(const ModifyDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.getDBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateZoneAddressPrefix()) {
    query["PrivateZoneAddressPrefix"] = request.getPrivateZoneAddressPrefix();
  }

  if (!!request.hasPrivateZoneName()) {
    query["PrivateZoneName"] = request.getPrivateZoneName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBEndpointAddress"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBEndpointAddressResponse>();
}

/**
 * @summary Modifies the connection address of a PolarDB cluster. The address can be a primary address, default cluster address, custom cluster address, or private domain name.
 *
 * @param request ModifyDBEndpointAddressRequest
 * @return ModifyDBEndpointAddressResponse
 */
ModifyDBEndpointAddressResponse Client::modifyDBEndpointAddress(const ModifyDBEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Changes the node specifications of a PolarDB cluster.
 *
 * @param request ModifyDBNodeClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeClassResponse
 */
ModifyDBNodeClassResponse Client::modifyDBNodeClassWithOptions(const ModifyDBNodeClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeTargetClass()) {
    query["DBNodeTargetClass"] = request.getDBNodeTargetClass();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.getDBNodeType();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedFlashingOffTime()) {
    query["PlannedFlashingOffTime"] = request.getPlannedFlashingOffTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.getSubCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodeClass"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeClassResponse>();
}

/**
 * @summary Changes the node specifications of a PolarDB cluster.
 *
 * @param request ModifyDBNodeClassRequest
 * @return ModifyDBNodeClassResponse
 */
ModifyDBNodeClassResponse Client::modifyDBNodeClass(const ModifyDBNodeClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeConfigResponse
 */
ModifyDBNodeConfigResponse Client::modifyDBNodeConfigWithOptions(const ModifyDBNodeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodeConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeConfigResponse>();
}

/**
 * @summary Modifies the configuration of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeConfigRequest
 * @return ModifyDBNodeConfigResponse
 */
ModifyDBNodeConfigResponse Client::modifyDBNodeConfig(const ModifyDBNodeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeDescriptionResponse
 */
ModifyDBNodeDescriptionResponse Client::modifyDBNodeDescriptionWithOptions(const ModifyDBNodeDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeDescription()) {
    query["DBNodeDescription"] = request.getDBNodeDescription();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodeDescription"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeDescriptionResponse>();
}

/**
 * @summary Modifies the name of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeDescriptionRequest
 * @return ModifyDBNodeDescriptionResponse
 */
ModifyDBNodeDescriptionResponse Client::modifyDBNodeDescription(const ModifyDBNodeDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeDescriptionWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
 *
 * @param request ModifyDBNodeHotReplicaModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeHotReplicaModeResponse
 */
ModifyDBNodeHotReplicaModeResponse Client::modifyDBNodeHotReplicaModeWithOptions(const ModifyDBNodeHotReplicaModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasHotReplicaMode()) {
    query["HotReplicaMode"] = request.getHotReplicaMode();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodeHotReplicaMode"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeHotReplicaModeResponse>();
}

/**
 * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
 *
 * @param request ModifyDBNodeHotReplicaModeRequest
 * @return ModifyDBNodeHotReplicaModeResponse
 */
ModifyDBNodeHotReplicaModeResponse Client::modifyDBNodeHotReplicaMode(const ModifyDBNodeHotReplicaModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeHotReplicaModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the Snapshot Consistency Cluster (SCC) mode for a specified node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeSccModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeSccModeResponse
 */
ModifyDBNodeSccModeResponse Client::modifyDBNodeSccModeWithOptions(const ModifyDBNodeSccModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.getSccMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodeSccMode"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeSccModeResponse>();
}

/**
 * @summary Modifies the Snapshot Consistency Cluster (SCC) mode for a specified node in a PolarDB cluster.
 *
 * @param request ModifyDBNodeSccModeRequest
 * @return ModifyDBNodeSccModeResponse
 */
ModifyDBNodeSccModeResponse Client::modifyDBNodeSccMode(const ModifyDBNodeSccModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeSccModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications of a single node in a PolarDB cluster.
 *
 * @param request ModifyDBNodesClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodesClassResponse
 */
ModifyDBNodesClassResponse Client::modifyDBNodesClassWithOptions(const ModifyDBNodesClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudProvider()) {
    query["CloudProvider"] = request.getCloudProvider();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.getDBNode();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedFlashingOffTime()) {
    query["PlannedFlashingOffTime"] = request.getPlannedFlashingOffTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.getSubCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodesClass"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodesClassResponse>();
}

/**
 * @summary Modifies the specifications of a single node in a PolarDB cluster.
 *
 * @param request ModifyDBNodesClassRequest
 * @return ModifyDBNodesClassResponse
 */
ModifyDBNodesClassResponse Client::modifyDBNodesClass(const ModifyDBNodesClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodesClassWithOptions(request, runtime);
}

/**
 * @summary Modifies and applies the parameters of one or more nodes.
 *
 * @param request ModifyDBNodesParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodesParametersResponse
 */
ModifyDBNodesParametersResponse Client::modifyDBNodesParametersWithOptions(const ModifyDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNodesParameters"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodesParametersResponse>();
}

/**
 * @summary Modifies and applies the parameters of one or more nodes.
 *
 * @param request ModifyDBNodesParametersRequest
 * @return ModifyDBNodesParametersResponse
 */
ModifyDBNodesParametersResponse Client::modifyDBNodesParameters(const ModifyDBNodesParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodesParametersWithOptions(request, runtime);
}

/**
 * @summary Modifies role permissions.
 *
 * @param request ModifyEncryptionDBRolePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEncryptionDBRolePrivilegeResponse
 */
ModifyEncryptionDBRolePrivilegeResponse Client::modifyEncryptionDBRolePrivilegeWithOptions(const ModifyEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRolePrivilegeConfig()) {
    query["RolePrivilegeConfig"] = request.getRolePrivilegeConfig();
  }

  if (!!request.hasRolePrivilegeName()) {
    query["RolePrivilegeName"] = request.getRolePrivilegeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEncryptionDBRolePrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEncryptionDBRolePrivilegeResponse>();
}

/**
 * @summary Modifies role permissions.
 *
 * @param request ModifyEncryptionDBRolePrivilegeRequest
 * @return ModifyEncryptionDBRolePrivilegeResponse
 */
ModifyEncryptionDBRolePrivilegeResponse Client::modifyEncryptionDBRolePrivilege(const ModifyEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Modifies an encryption policy.
 *
 * @param request ModifyEncryptionDBSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEncryptionDBSecretResponse
 */
ModifyEncryptionDBSecretResponse Client::modifyEncryptionDBSecretWithOptions(const ModifyEncryptionDBSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEncryptionDBStatus()) {
    query["EncryptionDBStatus"] = request.getEncryptionDBStatus();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEncryptionDBSecret"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEncryptionDBSecretResponse>();
}

/**
 * @summary Modifies an encryption policy.
 *
 * @param request ModifyEncryptionDBSecretRequest
 * @return ModifyEncryptionDBSecretResponse
 */
ModifyEncryptionDBSecretResponse Client::modifyEncryptionDBSecret(const ModifyEncryptionDBSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEncryptionDBSecretWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of the SQL firewall.
 *
 * @param request ModifyFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirewallRulesResponse
 */
ModifyFirewallRulesResponse Client::modifyFirewallRulesWithOptions(const ModifyFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFirewallRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFirewallRulesResponse>();
}

/**
 * @summary Modifies the configuration of the SQL firewall.
 *
 * @param request ModifyFirewallRulesRequest
 * @return ModifyFirewallRulesResponse
 */
ModifyFirewallRulesResponse Client::modifyFirewallRules(const ModifyFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies a global database network (GDN).
 *
 * @param request ModifyGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalDatabaseNetworkResponse
 */
ModifyGlobalDatabaseNetworkResponse Client::modifyGlobalDatabaseNetworkWithOptions(const ModifyGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableGlobalDomainName()) {
    query["EnableGlobalDomainName"] = request.getEnableGlobalDomainName();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.getGDNDescription();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Modifies a global database network (GDN).
 *
 * @param request ModifyGlobalDatabaseNetworkRequest
 * @return ModifyGlobalDatabaseNetworkResponse
 */
ModifyGlobalDatabaseNetworkResponse Client::modifyGlobalDatabaseNetwork(const ModifyGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Modifies an IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalSecurityIPGroupResponse
 */
ModifyGlobalSecurityIPGroupResponse Client::modifyGlobalSecurityIPGroupWithOptions(const ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.getGIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGlobalSecurityIPGroup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGlobalSecurityIPGroupResponse>();
}

/**
 * @summary Modifies an IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRequest
 * @return ModifyGlobalSecurityIPGroupResponse
 */
ModifyGlobalSecurityIPGroupResponse Client::modifyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a global IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalSecurityIPGroupNameResponse
 */
ModifyGlobalSecurityIPGroupNameResponse Client::modifyGlobalSecurityIPGroupNameWithOptions(const ModifyGlobalSecurityIPGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGlobalSecurityIPGroupName"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGlobalSecurityIPGroupNameResponse>();
}

/**
 * @summary Modifies the name of a global IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupNameRequest
 * @return ModifyGlobalSecurityIPGroupNameResponse
 */
ModifyGlobalSecurityIPGroupNameResponse Client::modifyGlobalSecurityIPGroupName(const ModifyGlobalSecurityIPGroupNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the association between a cluster and a global IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalSecurityIPGroupRelationResponse
 */
ModifyGlobalSecurityIPGroupRelationResponse Client::modifyGlobalSecurityIPGroupRelationWithOptions(const ModifyGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGlobalSecurityIPGroupRelation"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGlobalSecurityIPGroupRelationResponse>();
}

/**
 * @summary Modifies the association between a cluster and a global IP address whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRelationRequest
 * @return ModifyGlobalSecurityIPGroupRelationResponse
 */
ModifyGlobalSecurityIPGroupRelationResponse Client::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Modifies the log backup retention policy for a PolarDB cluster.
 *
 * @param tmpReq ModifyLogBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogBackupPolicyResponse
 */
ModifyLogBackupPolicyResponse Client::modifyLogBackupPolicyWithOptions(const ModifyLogBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyLogBackupPolicyShrinkRequest request = ModifyLogBackupPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedLogPolicies()) {
    request.setAdvancedLogPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvancedLogPolicies(), "AdvancedLogPolicies", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedLogPoliciesShrink()) {
    query["AdvancedLogPolicies"] = request.getAdvancedLogPoliciesShrink();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasLogBackupAnotherRegionRegion()) {
    query["LogBackupAnotherRegionRegion"] = request.getLogBackupAnotherRegionRegion();
  }

  if (!!request.hasLogBackupAnotherRegionRetentionPeriod()) {
    query["LogBackupAnotherRegionRetentionPeriod"] = request.getLogBackupAnotherRegionRetentionPeriod();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.getLogBackupRetentionPeriod();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLogBackupPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLogBackupPolicyResponse>();
}

/**
 * @summary Modifies the log backup retention policy for a PolarDB cluster.
 *
 * @param request ModifyLogBackupPolicyRequest
 * @return ModifyLogBackupPolicyResponse
 */
ModifyLogBackupPolicyResponse Client::modifyLogBackupPolicy(const ModifyLogBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies or creates data masking rules.
 *
 * @param request ModifyMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaskingRulesResponse
 */
ModifyMaskingRulesResponse Client::modifyMaskingRulesWithOptions(const ModifyMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDefaultAlgo()) {
    query["DefaultAlgo"] = request.getDefaultAlgo();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.getInterfaceVersion();
  }

  if (!!request.hasMaskingAlgo()) {
    query["MaskingAlgo"] = request.getMaskingAlgo();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.getRuleNameList();
  }

  if (!!request.hasRuleVersion()) {
    query["RuleVersion"] = request.getRuleVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaskingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaskingRulesResponse>();
}

/**
 * @summary Modifies or creates data masking rules.
 *
 * @param request ModifyMaskingRulesRequest
 * @return ModifyMaskingRulesResponse
 */
ModifyMaskingRulesResponse Client::modifyMaskingRules(const ModifyMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies a model API.
 *
 * @param request ModifyModelApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyModelApiResponse
 */
ModifyModelApiResponse Client::modifyModelApiWithOptions(const ModifyModelApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasModelApiId()) {
    query["ModelApiId"] = request.getModelApiId();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasPathPrefix()) {
    query["PathPrefix"] = request.getPathPrefix();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRecordInput()) {
    query["RecordInput"] = request.getRecordInput();
  }

  if (!!request.hasRecordOutput()) {
    query["RecordOutput"] = request.getRecordOutput();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteRules()) {
    query["RouteRules"] = request.getRouteRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyModelApi"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyModelApiResponse>();
}

/**
 * @summary Modifies a model API.
 *
 * @param request ModifyModelApiRequest
 * @return ModifyModelApiResponse
 */
ModifyModelApiResponse Client::modifyModelApi(const ModifyModelApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyModelApiWithOptions(request, runtime);
}

/**
 * @summary Modifies a model service.
 *
 * @param request ModifyModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyModelServiceResponse
 */
ModifyModelServiceResponse Client::modifyModelServiceWithOptions(const ModifyModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    query["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasInputCostPointsPerMillion()) {
    query["InputCostPointsPerMillion"] = request.getInputCostPointsPerMillion();
  }

  if (!!request.hasModelCategory()) {
    query["ModelCategory"] = request.getModelCategory();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.getModelServiceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputCostPointsPerMillion()) {
    query["OutputCostPointsPerMillion"] = request.getOutputCostPointsPerMillion();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestCostPoints()) {
    query["RequestCostPoints"] = request.getRequestCostPoints();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyModelService"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyModelServiceResponse>();
}

/**
 * @summary Modifies a model service.
 *
 * @param request ModifyModelServiceRequest
 * @return ModifyModelServiceResponse
 */
ModifyModelServiceResponse Client::modifyModelService(const ModifyModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyModelServiceWithOptions(request, runtime);
}

/**
 * @summary Modifies the switching time of a pending event.
 *
 * @param request ModifyPendingMaintenanceActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPendingMaintenanceActionResponse
 */
ModifyPendingMaintenanceActionResponse Client::modifyPendingMaintenanceActionWithOptions(const ModifyPendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPendingMaintenanceAction"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPendingMaintenanceActionResponse>();
}

/**
 * @summary Modifies the switching time of a pending event.
 *
 * @param request ModifyPendingMaintenanceActionRequest
 * @return ModifyPendingMaintenanceActionResponse
 */
ModifyPendingMaintenanceActionResponse Client::modifyPendingMaintenanceAction(const ModifyPendingMaintenanceActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPendingMaintenanceActionWithOptions(request, runtime);
}

/**
 * @summary Modifies a rate limit policy.
 *
 * @param request ModifyRateLimitPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRateLimitPolicyResponse
 */
ModifyRateLimitPolicyResponse Client::modifyRateLimitPolicyWithOptions(const ModifyRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRateLimitRpm()) {
    query["RateLimitRpm"] = request.getRateLimitRpm();
  }

  if (!!request.hasRateLimitTpm()) {
    query["RateLimitTpm"] = request.getRateLimitTpm();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRateLimitPolicy"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRateLimitPolicyResponse>();
}

/**
 * @summary Modifies a rate limit policy.
 *
 * @param request ModifyRateLimitPolicyRequest
 * @return ModifyRateLimitPolicyResponse
 */
ModifyRateLimitPolicyResponse Client::modifyRateLimitPolicy(const ModifyRateLimitPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRateLimitPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a cross-cloud resource plan.
 *
 * @param request ModifyResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourcePackageResponse
 */
ModifyResourcePackageResponse Client::modifyResourcePackageWithOptions(const ModifyResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoQuota()) {
    query["AutoQuota"] = request.getAutoQuota();
  }

  if (!!request.hasResourcePackageId()) {
    query["ResourcePackageId"] = request.getResourcePackageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourcePackage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourcePackageResponse>();
}

/**
 * @summary Modifies a cross-cloud resource plan.
 *
 * @param request ModifyResourcePackageRequest
 * @return ModifyResourcePackageResponse
 */
ModifyResourcePackageResponse Client::modifyResourcePackage(const ModifyResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourcePackageWithOptions(request, runtime);
}

/**
 * @summary Modifies SQL throttling rules.
 *
 * @param request ModifySQLRateLimitingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySQLRateLimitingRulesResponse
 */
ModifySQLRateLimitingRulesResponse Client::modifySQLRateLimitingRulesWithOptions(const ModifySQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySQLRateLimitingRules"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySQLRateLimitingRulesResponse>();
}

/**
 * @summary Modifies SQL throttling rules.
 *
 * @param request ModifySQLRateLimitingRulesRequest
 * @return ModifySQLRateLimitingRulesResponse
 */
ModifySQLRateLimitingRulesResponse Client::modifySQLRateLimitingRules(const ModifySQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies the specified scheduled task.
 *
 * @param request ModifyScheduleTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduleTaskResponse
 */
ModifyScheduleTaskResponse Client::modifyScheduleTaskWithOptions(const ModifyScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduleTask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduleTaskResponse>();
}

/**
 * @summary Modifies the specified scheduled task.
 *
 * @param request ModifyScheduleTaskRequest
 * @return ModifyScheduleTaskResponse
 */
ModifyScheduleTaskResponse Client::modifyScheduleTask(const ModifyScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduleTaskWithOptions(request, runtime);
}

/**
 * @summary Renames or moves files in a PolarFs instance.
 *
 * @param request MovePolarFsObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MovePolarFsObjectsResponse
 */
MovePolarFsObjectsResponse Client::movePolarFsObjectsWithOptions(const MovePolarFsObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectsToMove()) {
    query["ObjectsToMove"] = request.getObjectsToMove();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MovePolarFsObjects"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MovePolarFsObjectsResponse>();
}

/**
 * @summary Renames or moves files in a PolarFs instance.
 *
 * @param request MovePolarFsObjectsRequest
 * @return MovePolarFsObjectsResponse
 */
MovePolarFsObjectsResponse Client::movePolarFsObjects(const MovePolarFsObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return movePolarFsObjectsWithOptions(request, runtime);
}

/**
 * @summary Enables the PolarDB for AI feature.
 *
 * @param request OpenAITaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenAITaskResponse
 */
OpenAITaskResponse Client::openAITaskWithOptions(const OpenAITaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenAITask"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenAITaskResponse>();
}

/**
 * @summary Enables the PolarDB for AI feature.
 *
 * @param request OpenAITaskRequest
 * @return OpenAITaskResponse
 */
OpenAITaskResponse Client::openAITask(const OpenAITaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openAITaskWithOptions(request, runtime);
}

/**
 * @summary Restarts, pauses, or starts an application on a PolarDB instance without deleting the instance.
 *
 * @param request OperateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateApplicationResponse
 */
OperateApplicationResponse Client::operateApplicationWithOptions(const OperateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateApplication"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateApplicationResponse>();
}

/**
 * @summary Restarts, pauses, or starts an application on a PolarDB instance without deleting the instance.
 *
 * @param request OperateApplicationRequest
 * @return OperateApplicationResponse
 */
OperateApplicationResponse Client::operateApplication(const OperateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateApplicationWithOptions(request, runtime);
}

/**
 * @summary Updates a PolarClaw configuration.
 *
 * @param tmpReq PatchPolarClawConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchPolarClawConfigResponse
 */
PatchPolarClawConfigResponse Client::patchPolarClawConfigWithOptions(const PatchPolarClawConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PatchPolarClawConfigShrinkRequest request = PatchPolarClawConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigPatch()) {
    request.setConfigPatchShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigPatch(), "ConfigPatch", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasConfigPatchShrink()) {
    query["ConfigPatch"] = request.getConfigPatchShrink();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PatchPolarClawConfig"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PatchPolarClawConfigResponse>();
}

/**
 * @summary Updates a PolarClaw configuration.
 *
 * @param request PatchPolarClawConfigRequest
 * @return PatchPolarClawConfigResponse
 */
PatchPolarClawConfigResponse Client::patchPolarClawConfig(const PatchPolarClawConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return patchPolarClawConfigWithOptions(request, runtime);
}

/**
 * @summary Reactivates the backup feature.
 *
 * @param request ReactivateDBClusterBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReactivateDBClusterBackupResponse
 */
ReactivateDBClusterBackupResponse Client::reactivateDBClusterBackupWithOptions(const ReactivateDBClusterBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReactivateDBClusterBackup"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReactivateDBClusterBackupResponse>();
}

/**
 * @summary Reactivates the backup feature.
 *
 * @param request ReactivateDBClusterBackupRequest
 * @return ReactivateDBClusterBackupResponse
 */
ReactivateDBClusterBackupResponse Client::reactivateDBClusterBackup(const ReactivateDBClusterBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reactivateDBClusterBackupWithOptions(request, runtime);
}

/**
 * @summary Refreshes the storage usage for a cluster instance.
 *
 * @param request RefreshDBClusterStorageUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDBClusterStorageUsageResponse
 */
RefreshDBClusterStorageUsageResponse Client::refreshDBClusterStorageUsageWithOptions(const RefreshDBClusterStorageUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSyncRealTime()) {
    query["SyncRealTime"] = request.getSyncRealTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshDBClusterStorageUsage"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDBClusterStorageUsageResponse>();
}

/**
 * @summary Refreshes the storage usage for a cluster instance.
 *
 * @param request RefreshDBClusterStorageUsageRequest
 * @return RefreshDBClusterStorageUsageResponse
 */
RefreshDBClusterStorageUsageResponse Client::refreshDBClusterStorageUsage(const RefreshDBClusterStorageUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDBClusterStorageUsageWithOptions(request, runtime);
}

/**
 * @summary Rejects a PolarClaw device pairing request.
 *
 * @param request RejectPolarClawDevicePairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectPolarClawDevicePairResponse
 */
RejectPolarClawDevicePairResponse Client::rejectPolarClawDevicePairWithOptions(const RejectPolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPairRequestId()) {
    query["PairRequestId"] = request.getPairRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectPolarClawDevicePair"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectPolarClawDevicePairResponse>();
}

/**
 * @summary Rejects a PolarClaw device pairing request.
 *
 * @param request RejectPolarClawDevicePairRequest
 * @return RejectPolarClawDevicePairResponse
 */
RejectPolarClawDevicePairResponse Client::rejectPolarClawDevicePair(const RejectPolarClawDevicePairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectPolarClawDevicePairWithOptions(request, runtime);
}

/**
 * @summary Removes application environment variables. This operation supports only PolarClaw.
 *
 * @param tmpReq RemoveApplicationEnvironmentVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApplicationEnvironmentVariablesResponse
 */
RemoveApplicationEnvironmentVariablesResponse Client::removeApplicationEnvironmentVariablesWithOptions(const RemoveApplicationEnvironmentVariablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveApplicationEnvironmentVariablesShrinkRequest request = RemoveApplicationEnvironmentVariablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVariableNames()) {
    request.setVariableNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVariableNames(), "VariableNames", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasVariableNamesShrink()) {
    query["VariableNames"] = request.getVariableNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApplicationEnvironmentVariables"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApplicationEnvironmentVariablesResponse>();
}

/**
 * @summary Removes application environment variables. This operation supports only PolarClaw.
 *
 * @param request RemoveApplicationEnvironmentVariablesRequest
 * @return RemoveApplicationEnvironmentVariablesResponse
 */
RemoveApplicationEnvironmentVariablesResponse Client::removeApplicationEnvironmentVariables(const RemoveApplicationEnvironmentVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApplicationEnvironmentVariablesWithOptions(request, runtime);
}

/**
 * @summary Removes a secondary cluster from a Global Database Network (GDN).
 *
 * @description > The primary cluster in a GDN cannot be removed.
 *
 * @param request RemoveDBClusterFromGDNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDBClusterFromGDNResponse
 */
RemoveDBClusterFromGDNResponse Client::removeDBClusterFromGDNWithOptions(const RemoveDBClusterFromGDNRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTargetDBClusterId()) {
    query["TargetDBClusterId"] = request.getTargetDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDBClusterFromGDN"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDBClusterFromGDNResponse>();
}

/**
 * @summary Removes a secondary cluster from a Global Database Network (GDN).
 *
 * @description > The primary cluster in a GDN cannot be removed.
 *
 * @param request RemoveDBClusterFromGDNRequest
 * @return RemoveDBClusterFromGDNResponse
 */
RemoveDBClusterFromGDNResponse Client::removeDBClusterFromGDN(const RemoveDBClusterFromGDNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDBClusterFromGDNWithOptions(request, runtime);
}

/**
 * @summary Unpairs a PolarClaw device.
 *
 * @param request RemovePolarClawDevicePairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePolarClawDevicePairResponse
 */
RemovePolarClawDevicePairResponse Client::removePolarClawDevicePairWithOptions(const RemovePolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePolarClawDevicePair"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePolarClawDevicePairResponse>();
}

/**
 * @summary Unpairs a PolarClaw device.
 *
 * @param request RemovePolarClawDevicePairRequest
 * @return RemovePolarClawDevicePairResponse
 */
RemovePolarClawDevicePairResponse Client::removePolarClawDevicePair(const RemovePolarClawDevicePairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePolarClawDevicePairWithOptions(request, runtime);
}

/**
 * @summary Deletes a PolarClaw MCP server.
 *
 * @param request RemovePolarClawMCPServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePolarClawMCPServerResponse
 */
RemovePolarClawMCPServerResponse Client::removePolarClawMCPServerWithOptions(const RemovePolarClawMCPServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasServerName()) {
    query["ServerName"] = request.getServerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePolarClawMCPServer"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePolarClawMCPServerResponse>();
}

/**
 * @summary Deletes a PolarClaw MCP server.
 *
 * @param request RemovePolarClawMCPServerRequest
 * @return RemovePolarClawMCPServerResponse
 */
RemovePolarClawMCPServerResponse Client::removePolarClawMCPServer(const RemovePolarClawMCPServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePolarClawMCPServerWithOptions(request, runtime);
}

/**
 * @summary Resets the permissions of a privileged account for a PolarDB cluster.
 *
 * @description > - Only PolarDB for MySQL clusters support this operation.
 * >
 * > - If the privileged account of your cluster encounters exceptions, you can reset the permissions by using this operation. For example, the permissions are accidentally revoked.
 *
 * @param request ResetAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountResponse
 */
ResetAccountResponse Client::resetAccountWithOptions(const ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccount"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountResponse>();
}

/**
 * @summary Resets the permissions of a privileged account for a PolarDB cluster.
 *
 * @description > - Only PolarDB for MySQL clusters support this operation.
 * >
 * > - If the privileged account of your cluster encounters exceptions, you can reset the permissions by using this operation. For example, the permissions are accidentally revoked.
 *
 * @param request ResetAccountRequest
 * @return ResetAccountResponse
 */
ResetAccountResponse Client::resetAccount(const ResetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountWithOptions(request, runtime);
}

/**
 * @summary Resets the password for a PolarDB database account.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordResponse>();
}

/**
 * @summary Resets the password for a PolarDB database account.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Resets an account in a PolarDB for Xscale cluster.
 *
 * @param request ResetAccountZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountZonalResponse
 */
ResetAccountZonalResponse Client::resetAccountZonalWithOptions(const ResetAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountZonalResponse>();
}

/**
 * @summary Resets an account in a PolarDB for Xscale cluster.
 *
 * @param request ResetAccountZonalRequest
 * @return ResetAccountZonalResponse
 */
ResetAccountZonalResponse Client::resetAccountZonal(const ResetAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountZonalWithOptions(request, runtime);
}

/**
 * @summary Resets the API key of an AgenticDB tenant.
 *
 * @param request ResetAgenticDBTenantApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAgenticDBTenantApiKeyResponse
 */
ResetAgenticDBTenantApiKeyResponse Client::resetAgenticDBTenantApiKeyWithOptions(const ResetAgenticDBTenantApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["ApiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAgenticDBTenantApiKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAgenticDBTenantApiKeyResponse>();
}

/**
 * @summary Resets the API key of an AgenticDB tenant.
 *
 * @param request ResetAgenticDBTenantApiKeyRequest
 * @return ResetAgenticDBTenantApiKeyResponse
 */
ResetAgenticDBTenantApiKeyResponse Client::resetAgenticDBTenantApiKey(const ResetAgenticDBTenantApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAgenticDBTenantApiKeyWithOptions(request, runtime);
}

/**
 * @summary Resets an api key.
 *
 * @param request ResetConsumerApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetConsumerApiKeyResponse
 */
ResetConsumerApiKeyResponse Client::resetConsumerApiKeyWithOptions(const ResetConsumerApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGwClusterId()) {
    query["GwClusterId"] = request.getGwClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetConsumerApiKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetConsumerApiKeyResponse>();
}

/**
 * @summary Resets an api key.
 *
 * @param request ResetConsumerApiKeyRequest
 * @return ResetConsumerApiKeyResponse
 */
ResetConsumerApiKeyResponse Client::resetConsumerApiKey(const ResetConsumerApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetConsumerApiKeyWithOptions(request, runtime);
}

/**
 * @summary Resets the network of a secondary cluster in a Global Database Network (GDN).
 *
 * @param request ResetGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetGlobalDatabaseNetworkResponse
 */
ResetGlobalDatabaseNetworkResponse Client::resetGlobalDatabaseNetworkWithOptions(const ResetGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Resets the network of a secondary cluster in a Global Database Network (GDN).
 *
 * @param request ResetGlobalDatabaseNetworkRequest
 * @return ResetGlobalDatabaseNetworkResponse
 */
ResetGlobalDatabaseNetworkResponse Client::resetGlobalDatabaseNetwork(const ResetGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Restarts database links.
 *
 * @param request RestartDBLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBLinkResponse
 */
RestartDBLinkResponse Client::restartDBLinkWithOptions(const RestartDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBLink"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBLinkResponse>();
}

/**
 * @summary Restarts database links.
 *
 * @param request RestartDBLinkRequest
 * @return RestartDBLinkResponse
 */
RestartDBLinkResponse Client::restartDBLink(const RestartDBLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBLinkWithOptions(request, runtime);
}

/**
 * @summary Restarts a node of a PolarDB cluster.
 *
 * @param request RestartDBNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBNodeResponse
 */
RestartDBNodeResponse Client::restartDBNodeWithOptions(const RestartDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBNode"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBNodeResponse>();
}

/**
 * @summary Restarts a node of a PolarDB cluster.
 *
 * @param request RestartDBNodeRequest
 * @return RestartDBNodeResponse
 */
RestartDBNodeResponse Client::restartDBNode(const RestartDBNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBNodeWithOptions(request, runtime);
}

/**
 * @summary Restarts a node of an edge cluster for PolarDB on ENS.
 *
 * @param request RestartDBNodeZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBNodeZonalResponse
 */
RestartDBNodeZonalResponse Client::restartDBNodeZonalWithOptions(const RestartDBNodeZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.getDBNodeId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBNodeZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBNodeZonalResponse>();
}

/**
 * @summary Restarts a node of an edge cluster for PolarDB on ENS.
 *
 * @param request RestartDBNodeZonalRequest
 * @return RestartDBNodeZonalResponse
 */
RestartDBNodeZonalResponse Client::restartDBNodeZonal(const RestartDBNodeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBNodeZonalWithOptions(request, runtime);
}

/**
 * @summary Restores databases or tables to a PolarDB cluster.
 *
 * @param request RestoreTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreTableResponse
 */
RestoreTableResponse Client::restoreTableWithOptions(const RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.getTableMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreTable"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreTableResponse>();
}

/**
 * @summary Restores databases or tables to a PolarDB cluster.
 *
 * @param request RestoreTableRequest
 * @return RestoreTableResponse
 */
RestoreTableResponse Client::restoreTable(const RestoreTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreTableWithOptions(request, runtime);
}

/**
 * @summary Revokes access permissions on a database from a PolarDB standard account.
 *
 * @param request RevokeAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAccountPrivilegeResponse
 */
RevokeAccountPrivilegeResponse Client::revokeAccountPrivilegeWithOptions(const RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeAccountPrivilege"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAccountPrivilegeResponse>();
}

/**
 * @summary Revokes access permissions on a database from a PolarDB standard account.
 *
 * @param request RevokeAccountPrivilegeRequest
 * @return RevokeAccountPrivilegeResponse
 */
RevokeAccountPrivilegeResponse Client::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions from an account.
 *
 * @param request RevokeAccountPrivilegeZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAccountPrivilegeZonalResponse
 */
RevokeAccountPrivilegeZonalResponse Client::revokeAccountPrivilegeZonalWithOptions(const RevokeAccountPrivilegeZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeAccountPrivilegeZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAccountPrivilegeZonalResponse>();
}

/**
 * @summary Revokes permissions from an account.
 *
 * @param request RevokeAccountPrivilegeZonalRequest
 * @return RevokeAccountPrivilegeZonalResponse
 */
RevokeAccountPrivilegeZonalResponse Client::revokeAccountPrivilegeZonal(const RevokeAccountPrivilegeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAccountPrivilegeZonalWithOptions(request, runtime);
}

/**
 * @summary Runs a PolarClaw cron job.
 *
 * @param request RunPolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPolarClawCronJobResponse
 */
RunPolarClawCronJobResponse Client::runPolarClawCronJobWithOptions(const RunPolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunPolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPolarClawCronJobResponse>();
}

/**
 * @summary Runs a PolarClaw cron job.
 *
 * @param request RunPolarClawCronJobRequest
 * @return RunPolarClawCronJobResponse
 */
RunPolarClawCronJobResponse Client::runPolarClawCronJob(const RunPolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runPolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves memories based on a search query.
 *
 * @param request SearchMemoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemoriesWithOptions(const SearchMemoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasCreateTimeBegin()) {
    query["CreateTimeBegin"] = request.getCreateTimeBegin();
  }

  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasMemoryAgentId()) {
    query["MemoryAgentId"] = request.getMemoryAgentId();
  }

  if (!!request.hasMemoryUserId()) {
    query["MemoryUserId"] = request.getMemoryUserId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMemories"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMemoriesResponse>();
}

/**
 * @summary Retrieves memories based on a search query.
 *
 * @param request SearchMemoriesRequest
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemories(const SearchMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMemoriesWithOptions(request, runtime);
}

/**
 * @summary Searches for PolarClaw Skills.
 *
 * @param request SearchPolarClawSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchPolarClawSkillsResponse
 */
SearchPolarClawSkillsResponse Client::searchPolarClawSkillsWithOptions(const SearchPolarClawSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchPolarClawSkills"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchPolarClawSkillsResponse>();
}

/**
 * @summary Searches for PolarClaw Skills.
 *
 * @param request SearchPolarClawSkillsRequest
 * @return SearchPolarClawSkillsResponse
 */
SearchPolarClawSkillsResponse Client::searchPolarClawSkills(const SearchPolarClawSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchPolarClawSkillsWithOptions(request, runtime);
}

/**
 * @summary Sets file quota rules for specific directories in a PolarFS instance.
 *
 * @description ## Request
 * This operation sets file quota rules for specific directories in a PolarFS instance. Use the `FilePathQuotas` parameter to define the target directories and their properties. The path for `FilePathId` must be an absolute path from the root directory, not from a mount target. The `Strategy` parameter controls how the rule applies to existing files. By default, the operation applies a rule only if one does not already exist.
 * ### Notes
 * - The `FilePathQuotas` list can contain up to 21 items.
 * - To apply the rule to subdirectories at multiple levels under `FilePathId`, set the `MaxDepth` parameter. To traverse to the deepest level, set this value to 0.
 *
 * @param request SetPolarFsFileQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolarFsFileQuotaResponse
 */
SetPolarFsFileQuotaResponse Client::setPolarFsFileQuotaWithOptions(const SetPolarFsFileQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFilePathQuotas()) {
    query["FilePathQuotas"] = request.getFilePathQuotas();
  }

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolarFsFileQuota"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolarFsFileQuotaResponse>();
}

/**
 * @summary Sets file quota rules for specific directories in a PolarFS instance.
 *
 * @description ## Request
 * This operation sets file quota rules for specific directories in a PolarFS instance. Use the `FilePathQuotas` parameter to define the target directories and their properties. The path for `FilePathId` must be an absolute path from the root directory, not from a mount target. The `Strategy` parameter controls how the rule applies to existing files. By default, the operation applies a rule only if one does not already exist.
 * ### Notes
 * - The `FilePathQuotas` list can contain up to 21 items.
 * - To apply the rule to subdirectories at multiple levels under `FilePathId`, set the `MaxDepth` parameter. To traverse to the deepest level, set this value to 0.
 *
 * @param request SetPolarFsFileQuotaRequest
 * @return SetPolarFsFileQuotaResponse
 */
SetPolarFsFileQuotaResponse Client::setPolarFsFileQuota(const SetPolarFsFileQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolarFsFileQuotaWithOptions(request, runtime);
}

/**
 * @summary Switches over the primary and secondary clusters in a global database network (GDN).
 *
 * @param request SwitchOverGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchOverGlobalDatabaseNetworkResponse
 */
SwitchOverGlobalDatabaseNetworkResponse Client::switchOverGlobalDatabaseNetworkWithOptions(const SwitchOverGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasForced()) {
    query["Forced"] = request.getForced();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchOverGlobalDatabaseNetwork"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchOverGlobalDatabaseNetworkResponse>();
}

/**
 * @summary Switches over the primary and secondary clusters in a global database network (GDN).
 *
 * @param request SwitchOverGlobalDatabaseNetworkRequest
 * @return SwitchOverGlobalDatabaseNetworkResponse
 */
SwitchOverGlobalDatabaseNetworkResponse Client::switchOverGlobalDatabaseNetwork(const SwitchOverGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchOverGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Adds tags to PolarDB clusters.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to PolarDB clusters.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Temporarily Modifies the configuration of a node.
 *
 * @param request TempModifyDBNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempModifyDBNodeResponse
 */
TempModifyDBNodeResponse Client::tempModifyDBNodeWithOptions(const TempModifyDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.getDBNode();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TempModifyDBNode"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempModifyDBNodeResponse>();
}

/**
 * @summary Temporarily Modifies the configuration of a node.
 *
 * @param request TempModifyDBNodeRequest
 * @return TempModifyDBNodeResponse
 */
TempModifyDBNodeResponse Client::tempModifyDBNode(const TempModifyDBNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempModifyDBNodeWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a PolarDB cluster.
 *
 * @description > - PolarDB clusters support two billing methods: subscription and pay-as-you-go. You can change the billing method of a cluster from subscription to pay-as-you-go, or from pay-as-you-go to subscription. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
 * >
 * > - You cannot change the billing method from pay-as-you-go to subscription if your Alibaba Cloud account has an insufficient balance.
 * >
 * > - When you change the billing method from subscription to pay-as-you-go, the system automatically refunds your remaining prepaid fees.
 *
 * @param request TransformDBClusterPayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformDBClusterPayTypeResponse
 */
TransformDBClusterPayTypeResponse Client::transformDBClusterPayTypeWithOptions(const TransformDBClusterPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformDBClusterPayType"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformDBClusterPayTypeResponse>();
}

/**
 * @summary Changes the billing method of a PolarDB cluster.
 *
 * @description > - PolarDB clusters support two billing methods: subscription and pay-as-you-go. You can change the billing method of a cluster from subscription to pay-as-you-go, or from pay-as-you-go to subscription. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
 * >
 * > - You cannot change the billing method from pay-as-you-go to subscription if your Alibaba Cloud account has an insufficient balance.
 * >
 * > - When you change the billing method from subscription to pay-as-you-go, the system automatically refunds your remaining prepaid fees.
 *
 * @param request TransformDBClusterPayTypeRequest
 * @return TransformDBClusterPayTypeResponse
 */
TransformDBClusterPayTypeResponse Client::transformDBClusterPayType(const TransformDBClusterPayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformDBClusterPayTypeWithOptions(request, runtime);
}

/**
 * @summary Unbinds a PolarClaw Agent.
 *
 * @param request UnbindPolarClawAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPolarClawAgentResponse
 */
UnbindPolarClawAgentResponse Client::unbindPolarClawAgentWithOptions(const UnbindPolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasChannelAccountId()) {
    query["ChannelAccountId"] = request.getChannelAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindPolarClawAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindPolarClawAgentResponse>();
}

/**
 * @summary Unbinds a PolarClaw Agent.
 *
 * @param request UnbindPolarClawAgentRequest
 * @return UnbindPolarClawAgentResponse
 */
UnbindPolarClawAgentResponse Client::unbindPolarClawAgent(const UnbindPolarClawAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPolarClawAgentWithOptions(request, runtime);
}

/**
 * @summary Uninstalls a PolarClaw plugin.
 *
 * @param request UninstallPolarClawPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallPolarClawPluginResponse
 */
UninstallPolarClawPluginResponse Client::uninstallPolarClawPluginWithOptions(const UninstallPolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallPolarClawPlugin"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallPolarClawPluginResponse>();
}

/**
 * @summary Uninstalls a PolarClaw plugin.
 *
 * @param request UninstallPolarClawPluginRequest
 * @return UninstallPolarClawPluginResponse
 */
UninstallPolarClawPluginResponse Client::uninstallPolarClawPlugin(const UninstallPolarClawPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallPolarClawPluginWithOptions(request, runtime);
}

/**
 * @summary Detaches tags from a PolarDB cluster.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Detaches tags from a PolarDB cluster.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the environment variables of an application. This operation is only supported for PolarClaw.
 *
 * @param tmpReq UpdateApplicationEnvironmentVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationEnvironmentVariablesResponse
 */
UpdateApplicationEnvironmentVariablesResponse Client::updateApplicationEnvironmentVariablesWithOptions(const UpdateApplicationEnvironmentVariablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationEnvironmentVariablesShrinkRequest request = UpdateApplicationEnvironmentVariablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVariables(), "Variables", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasVariablesShrink()) {
    query["Variables"] = request.getVariablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationEnvironmentVariables"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationEnvironmentVariablesResponse>();
}

/**
 * @summary Updates the environment variables of an application. This operation is only supported for PolarClaw.
 *
 * @param request UpdateApplicationEnvironmentVariablesRequest
 * @return UpdateApplicationEnvironmentVariablesResponse
 */
UpdateApplicationEnvironmentVariablesResponse Client::updateApplicationEnvironmentVariables(const UpdateApplicationEnvironmentVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationEnvironmentVariablesWithOptions(request, runtime);
}

/**
 * @summary Updates one or more extensions.
 *
 * @param request UpdateExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExtensionsResponse
 */
UpdateExtensionsResponse Client::updateExtensionsWithOptions(const UpdateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateExtensions"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtensionsResponse>();
}

/**
 * @summary Updates one or more extensions.
 *
 * @param request UpdateExtensionsRequest
 * @return UpdateExtensionsResponse
 */
UpdateExtensionsResponse Client::updateExtensions(const UpdateExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExtensionsWithOptions(request, runtime);
}

/**
 * @summary Updates a PolarClaw agent.
 *
 * @param tmpReq UpdatePolarClawAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarClawAgentResponse
 */
UpdatePolarClawAgentResponse Client::updatePolarClawAgentWithOptions(const UpdatePolarClawAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolarClawAgentShrinkRequest request = UpdatePolarClawAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAvatar()) {
    query["Avatar"] = request.getAvatar();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.getFilesShrink();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasKeepWorkspaceFiles()) {
    query["KeepWorkspaceFiles"] = request.getKeepWorkspaceFiles();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarClawAgent"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarClawAgentResponse>();
}

/**
 * @summary Updates a PolarClaw agent.
 *
 * @param request UpdatePolarClawAgentRequest
 * @return UpdatePolarClawAgentResponse
 */
UpdatePolarClawAgentResponse Client::updatePolarClawAgent(const UpdatePolarClawAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarClawAgentWithOptions(request, runtime);
}

/**
 * @summary Updates the skills of a PolarClaw Agent.
 *
 * @param tmpReq UpdatePolarClawAgentSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarClawAgentSkillsResponse
 */
UpdatePolarClawAgentSkillsResponse Client::updatePolarClawAgentSkillsWithOptions(const UpdatePolarClawAgentSkillsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolarClawAgentSkillsShrinkRequest request = UpdatePolarClawAgentSkillsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSkills()) {
    request.setSkillsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkills(), "Skills", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasSkillsShrink()) {
    query["Skills"] = request.getSkillsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarClawAgentSkills"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarClawAgentSkillsResponse>();
}

/**
 * @summary Updates the skills of a PolarClaw Agent.
 *
 * @param request UpdatePolarClawAgentSkillsRequest
 * @return UpdatePolarClawAgentSkillsResponse
 */
UpdatePolarClawAgentSkillsResponse Client::updatePolarClawAgentSkills(const UpdatePolarClawAgentSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarClawAgentSkillsWithOptions(request, runtime);
}

/**
 * @summary Updates the tool configuration of a PolarClaw Agent.
 *
 * @param tmpReq UpdatePolarClawAgentToolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarClawAgentToolsResponse
 */
UpdatePolarClawAgentToolsResponse Client::updatePolarClawAgentToolsWithOptions(const UpdatePolarClawAgentToolsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolarClawAgentToolsShrinkRequest request = UpdatePolarClawAgentToolsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllow()) {
    request.setAllowShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllow(), "Allow", "json"));
  }

  if (!!tmpReq.hasAlsoAllow()) {
    request.setAlsoAllowShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlsoAllow(), "AlsoAllow", "json"));
  }

  if (!!tmpReq.hasDeny()) {
    request.setDenyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeny(), "Deny", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAllowShrink()) {
    query["Allow"] = request.getAllowShrink();
  }

  if (!!request.hasAlsoAllowShrink()) {
    query["AlsoAllow"] = request.getAlsoAllowShrink();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDenyShrink()) {
    query["Deny"] = request.getDenyShrink();
  }

  if (!!request.hasProfile()) {
    query["Profile"] = request.getProfile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarClawAgentTools"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarClawAgentToolsResponse>();
}

/**
 * @summary Updates the tool configuration of a PolarClaw Agent.
 *
 * @param request UpdatePolarClawAgentToolsRequest
 * @return UpdatePolarClawAgentToolsResponse
 */
UpdatePolarClawAgentToolsResponse Client::updatePolarClawAgentTools(const UpdatePolarClawAgentToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarClawAgentToolsWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a PolarClaw scheduled task, allowing for partial field updates.
 *
 * @param tmpReq UpdatePolarClawCronJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarClawCronJobResponse
 */
UpdatePolarClawCronJobResponse Client::updatePolarClawCronJobWithOptions(const UpdatePolarClawCronJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolarClawCronJobShrinkRequest request = UpdatePolarClawCronJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDelivery()) {
    request.setDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDelivery(), "Delivery", "json"));
  }

  if (!!tmpReq.hasFailureAlert()) {
    request.setFailureAlertShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFailureAlert(), "FailureAlert", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedule(), "Schedule", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDeleteAfterRun()) {
    query["DeleteAfterRun"] = request.getDeleteAfterRun();
  }

  if (!!request.hasDeliveryShrink()) {
    query["Delivery"] = request.getDeliveryShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFailureAlertShrink()) {
    query["FailureAlert"] = request.getFailureAlertShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  if (!!request.hasScheduleShrink()) {
    query["Schedule"] = request.getScheduleShrink();
  }

  if (!!request.hasSessionKey()) {
    query["SessionKey"] = request.getSessionKey();
  }

  if (!!request.hasSessionTarget()) {
    query["SessionTarget"] = request.getSessionTarget();
  }

  if (!!request.hasWakeMode()) {
    query["WakeMode"] = request.getWakeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarClawCronJob"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarClawCronJobResponse>();
}

/**
 * @summary Updates the configuration of a PolarClaw scheduled task, allowing for partial field updates.
 *
 * @param request UpdatePolarClawCronJobRequest
 * @return UpdatePolarClawCronJobResponse
 */
UpdatePolarClawCronJobResponse Client::updatePolarClawCronJob(const UpdatePolarClawCronJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarClawCronJobWithOptions(request, runtime);
}

/**
 * @summary Updates the PolarClaw Skill configuration.
 *
 * @param tmpReq UpdatePolarClawSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarClawSkillResponse
 */
UpdatePolarClawSkillResponse Client::updatePolarClawSkillWithOptions(const UpdatePolarClawSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolarClawSkillShrinkRequest request = UpdatePolarClawSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnv()) {
    request.setEnvShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnv(), "Env", "json"));
  }

  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEnvShrink()) {
    query["Env"] = request.getEnvShrink();
  }

  if (!!request.hasSkillKey()) {
    query["SkillKey"] = request.getSkillKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarClawSkill"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarClawSkillResponse>();
}

/**
 * @summary Updates the PolarClaw Skill configuration.
 *
 * @param request UpdatePolarClawSkillRequest
 * @return UpdatePolarClawSkillResponse
 */
UpdatePolarClawSkillResponse Client::updatePolarClawSkill(const UpdatePolarClawSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarClawSkillWithOptions(request, runtime);
}

/**
 * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
 *
 * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
 * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
 *
 * @param request UpgradeDBClusterVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBClusterVersionResponse
 */
UpgradeDBClusterVersionResponse Client::upgradeDBClusterVersionWithOptions(const UpgradeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetDBRevisionVersionCode()) {
    query["TargetDBRevisionVersionCode"] = request.getTargetDBRevisionVersionCode();
  }

  if (!!request.hasTargetProxyRevisionVersionCode()) {
    query["TargetProxyRevisionVersionCode"] = request.getTargetProxyRevisionVersionCode();
  }

  if (!!request.hasUpgradeLabel()) {
    query["UpgradeLabel"] = request.getUpgradeLabel();
  }

  if (!!request.hasUpgradePolicy()) {
    query["UpgradePolicy"] = request.getUpgradePolicy();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBClusterVersion"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBClusterVersionResponse>();
}

/**
 * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
 *
 * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
 * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
 *
 * @param request UpgradeDBClusterVersionRequest
 * @return UpgradeDBClusterVersionResponse
 */
UpgradeDBClusterVersionResponse Client::upgradeDBClusterVersion(const UpgradeDBClusterVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBClusterVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of a PolarDB cluster.
 *
 * @param request UpgradeDBClusterVersionZonalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBClusterVersionZonalResponse
 */
UpgradeDBClusterVersionZonalResponse Client::upgradeDBClusterVersionZonalWithOptions(const UpgradeDBClusterVersionZonalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.getFromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.getPlannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.getPlannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetDBRevisionVersionCode()) {
    query["TargetDBRevisionVersionCode"] = request.getTargetDBRevisionVersionCode();
  }

  if (!!request.hasTargetProxyRevisionVersionCode()) {
    query["TargetProxyRevisionVersionCode"] = request.getTargetProxyRevisionVersionCode();
  }

  if (!!request.hasUpgradeLabel()) {
    query["UpgradeLabel"] = request.getUpgradeLabel();
  }

  if (!!request.hasUpgradePolicy()) {
    query["UpgradePolicy"] = request.getUpgradePolicy();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBClusterVersionZonal"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBClusterVersionZonalResponse>();
}

/**
 * @summary Upgrades the minor version of a PolarDB cluster.
 *
 * @param request UpgradeDBClusterVersionZonalRequest
 * @return UpgradeDBClusterVersionZonalResponse
 */
UpgradeDBClusterVersionZonalResponse Client::upgradeDBClusterVersionZonal(const UpgradeDBClusterVersionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBClusterVersionZonalWithOptions(request, runtime);
}

/**
 * @summary Upgrades a PolarClaw channel.
 *
 * @param tmpReq UpgradePolarClawChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePolarClawChannelResponse
 */
UpgradePolarClawChannelResponse Client::upgradePolarClawChannelWithOptions(const UpgradePolarClawChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradePolarClawChannelShrinkRequest request = UpgradePolarClawChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannelConfig()) {
    request.setChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannelConfig(), "ChannelConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasChannelConfigShrink()) {
    query["ChannelConfig"] = request.getChannelConfigShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasNpmPackage()) {
    query["NpmPackage"] = request.getNpmPackage();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePolarClawChannel"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePolarClawChannelResponse>();
}

/**
 * @summary Upgrades a PolarClaw channel.
 *
 * @param request UpgradePolarClawChannelRequest
 * @return UpgradePolarClawChannelResponse
 */
UpgradePolarClawChannelResponse Client::upgradePolarClawChannel(const UpgradePolarClawChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePolarClawChannelWithOptions(request, runtime);
}

/**
 * @summary Upgrades a PolarClaw plugin.
 *
 * @param request UpgradePolarClawPluginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePolarClawPluginResponse
 */
UpgradePolarClawPluginResponse Client::upgradePolarClawPluginWithOptions(const UpgradePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasNpmPackage()) {
    query["NpmPackage"] = request.getNpmPackage();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePolarClawPlugin"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePolarClawPluginResponse>();
}

/**
 * @summary Upgrades a PolarClaw plugin.
 *
 * @param request UpgradePolarClawPluginRequest
 * @return UpgradePolarClawPluginResponse
 */
UpgradePolarClawPluginResponse Client::upgradePolarClawPlugin(const UpgradePolarClawPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePolarClawPluginWithOptions(request, runtime);
}

/**
 * @summary Upgrades the PolarClaw feature.
 *
 * @param request UpgradePolarClawSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePolarClawSkillsResponse
 */
UpgradePolarClawSkillsResponse Client::upgradePolarClawSkillsWithOptions(const UpgradePolarClawSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUpgradeMethod()) {
    query["UpgradeMethod"] = request.getUpgradeMethod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePolarClawSkills"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePolarClawSkillsResponse>();
}

/**
 * @summary Upgrades the PolarClaw feature.
 *
 * @param request UpgradePolarClawSkillsRequest
 * @return UpgradePolarClawSkillsResponse
 */
UpgradePolarClawSkillsResponse Client::upgradePolarClawSkills(const UpgradePolarClawSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePolarClawSkillsWithOptions(request, runtime);
}

/**
 * @summary Validates an AgenticDB tenant API key.
 *
 * @param request VerifyAgenticDBTenantApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyAgenticDBTenantApiKeyResponse
 */
VerifyAgenticDBTenantApiKeyResponse Client::verifyAgenticDBTenantApiKeyWithOptions(const VerifyAgenticDBTenantApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyAgenticDBTenantApiKey"},
    {"version" , "2017-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyAgenticDBTenantApiKeyResponse>();
}

/**
 * @summary Validates an AgenticDB tenant API key.
 *
 * @param request VerifyAgenticDBTenantApiKeyRequest
 * @return VerifyAgenticDBTenantApiKeyResponse
 */
VerifyAgenticDBTenantApiKeyResponse Client::verifyAgenticDBTenantApiKey(const VerifyAgenticDBTenantApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyAgenticDBTenantApiKeyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Polardb20170801