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
    {"rus-west-1-pop" , "polardb.aliyuncs.com"}
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
 * @param request AbortDBClusterMigrationRequest
 * @return AbortDBClusterMigrationResponse
 */
AbortDBClusterMigrationResponse Client::abortDBClusterMigration(const AbortDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary 添加角色权限
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
 * @summary 添加角色权限
 *
 * @param request AddEncryptionDBRolePrivilegeRequest
 * @return AddEncryptionDBRolePrivilegeResponse
 */
AddEncryptionDBRolePrivilegeResponse Client::addEncryptionDBRolePrivilege(const AddEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary 添加sql防火墙配置
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
 * @summary 添加sql防火墙配置
 *
 * @param request AddFirewallRulesRequest
 * @return AddFirewallRulesResponse
 */
AddFirewallRulesResponse Client::addFirewallRules(const AddFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary 新增PolarFs Quota规则
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
 * @summary 新增PolarFs Quota规则
 *
 * @param request AddPolarFsQuotaRequest
 * @return AddPolarFsQuotaResponse
 */
AddPolarFsQuotaResponse Client::addPolarFsQuota(const AddPolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary 添加SQL限流规则
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
 * @summary 添加SQL限流规则
 *
 * @param request AddSQLRateLimitingRulesRequest
 * @return AddSQLRateLimitingRulesResponse
 */
AddSQLRateLimitingRulesResponse Client::addSQLRateLimitingRules(const AddSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary 挂载PolarFS到PolarDB应用
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
 * @summary 挂载PolarFS到PolarDB应用
 *
 * @param request AttachApplicationPolarFSRequest
 * @return AttachApplicationPolarFSResponse
 */
AttachApplicationPolarFSResponse Client::attachApplicationPolarFS(const AttachApplicationPolarFSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachApplicationPolarFSWithOptions(request, runtime);
}

/**
 * @summary Cancels O\\&M events at a time.
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
 * @summary Cancels O\\&M events at a time.
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 取消周期任务策略
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
 * @summary 取消周期任务策略
 *
 * @param request CancelCronJobPolicyServerlessRequest
 * @return CancelCronJobPolicyServerlessResponse
 */
CancelCronJobPolicyServerlessResponse Client::cancelCronJobPolicyServerless(const CancelCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary 取消目录的配额
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
 * @summary 取消目录的配额
 *
 * @param request CancelPolarFsFileQuotaRequest
 * @return CancelPolarFsFileQuotaResponse
 */
CancelPolarFsFileQuotaResponse Client::cancelPolarFsFileQuota(const CancelPolarFsFileQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPolarFsFileQuotaWithOptions(request, runtime);
}

/**
 * @summary Cancels scheduled tasks that are not yet started.
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
 * @summary Cancels scheduled tasks that are not yet started.
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
 * @summary 检查PolarDB账号名称
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
 * @summary 检查PolarDB账号名称
 *
 * @param request CheckAccountNameZonalRequest
 * @return CheckAccountNameZonalResponse
 */
CheckAccountNameZonalResponse Client::checkAccountNameZonal(const CheckAccountNameZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountNameZonalWithOptions(request, runtime);
}

/**
 * @summary 检查连接串
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
 * @summary 检查连接串
 *
 * @param request CheckConnectionStringRequest
 * @return CheckConnectionStringResponse
 */
CheckConnectionStringResponse Client::checkConnectionString(const CheckConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Checks whether a database name is valid or whether the name is already used by another database in the current cluster.
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
 * @summary Checks whether a database name is valid or whether the name is already used by another database in the current cluster.
 *
 * @param request CheckDBNameRequest
 * @return CheckDBNameResponse
 */
CheckDBNameResponse Client::checkDBName(const CheckDBNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDBNameWithOptions(request, runtime);
}

/**
 * @summary 检查PolarDB边缘云数据库名
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
 * @summary 检查PolarDB边缘云数据库名
 *
 * @param request CheckDBNameZonalRequest
 * @return CheckDBNameZonalResponse
 */
CheckDBNameZonalResponse Client::checkDBNameZonal(const CheckDBNameZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDBNameZonalWithOptions(request, runtime);
}

/**
 * @summary Queries whether the cluster is authorized to use Key Management Service (KMS).
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
 * @summary Queries whether the cluster is authorized to use Key Management Service (KMS).
 *
 * @param request CheckKMSAuthorizedRequest
 * @return CheckKMSAuthorizedResponse
 */
CheckKMSAuthorizedResponse Client::checkKMSAuthorized(const CheckKMSAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkKMSAuthorizedWithOptions(request, runtime);
}

/**
 * @summary Checks whether a service-linked role (SLR) is created.
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
 * @summary Checks whether a service-linked role (SLR) is created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary 支持基础版支持clone文件或目录快照
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
 * @summary 支持基础版支持clone文件或目录快照
 *
 * @param request ClonePolarFsBasicSnapshotRequest
 * @return ClonePolarFsBasicSnapshotResponse
 */
ClonePolarFsBasicSnapshotResponse Client::clonePolarFsBasicSnapshot(const ClonePolarFsBasicSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clonePolarFsBasicSnapshotWithOptions(request, runtime);
}

/**
 * @summary 关闭DB4AI
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
 * @summary 关闭DB4AI
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
 * @description *   You can call this operation to cancel the migration task before data migration.
 * *   You can call this operation to perform the migration task after data migration.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
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
 * @description *   You can call this operation to cancel the migration task before data migration.
 * *   You can call this operation to perform the migration task after data migration.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request CloseDBClusterMigrationRequest
 * @return CloseDBClusterMigrationResponse
 */
CloseDBClusterMigrationResponse Client::closeDBClusterMigration(const CloseDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeDBClusterMigrationWithOptions(request, runtime);
}

/**
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
 * @param request ContinueDBClusterMigrationRequest
 * @return ContinueDBClusterMigrationResponse
 */
ContinueDBClusterMigrationResponse Client::continueDBClusterMigration(const ContinueDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary 创建AI节点
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
 * @summary 创建AI节点
 *
 * @param request CreateAINodesRequest
 * @return CreateAINodesResponse
 */
CreateAINodesResponse Client::createAINodes(const CreateAINodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAINodesWithOptions(request, runtime);
}

/**
 * @summary Creates a database account for a PolarDB cluster.
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
 * @summary Creates a database account for a PolarDB cluster.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary 创建边缘云账号
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
 * @summary 创建边缘云账号
 *
 * @param request CreateAccountZonalRequest
 * @return CreateAccountZonalResponse
 */
CreateAccountZonalResponse Client::createAccountZonal(const CreateAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountZonalWithOptions(request, runtime);
}

/**
 * @summary Generates a lightweight license activation code.
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
 * @summary Generates a lightweight license activation code.
 *
 * @param request CreateActivationCodeRequest
 * @return CreateActivationCodeResponse
 */
CreateActivationCodeResponse Client::createActivationCode(const CreateActivationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createActivationCodeWithOptions(request, runtime);
}

/**
 * @summary 创建PolarDB应用
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

  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
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
 * @summary 创建PolarDB应用
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary 创建PolarDB应用终端节点地址
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
 * @summary 创建PolarDB应用终端节点地址
 *
 * @param request CreateApplicationEndpointAddressRequest
 * @return CreateApplicationEndpointAddressResponse
 */
CreateApplicationEndpointAddressResponse Client::createApplicationEndpointAddress(const CreateApplicationEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Creates a full snapshot backup for a PolarDB cluster.
 *
 * @description > 
 * *   You can manually create up to three backups for each cluster.
 * *   The `Exceeding the daily backup times of this DB cluster` error message indicates that three manual backups already exist in your cluster. You must delete existing backups before you call this operation to manually create backups. For more information about how to delete backups, see [Delete backups](https://help.aliyun.com/document_detail/98101.html).
 * *   After you call this operation, a backup task is created in the backend. The task may be time-consuming if you want to back up large amounts of data.
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
 * @description > 
 * *   You can manually create up to three backups for each cluster.
 * *   The `Exceeding the daily backup times of this DB cluster` error message indicates that three manual backups already exist in your cluster. You must delete existing backups before you call this operation to manually create backups. For more information about how to delete backups, see [Delete backups](https://help.aliyun.com/document_detail/98101.html).
 * *   After you call this operation, a backup task is created in the backend. The task may be time-consuming if you want to back up large amounts of data.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates a cluster that is used to store cold data.
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
 * @summary Creates a cluster that is used to store cold data.
 *
 * @param request CreateColdStorageInstanceRequest
 * @return CreateColdStorageInstanceResponse
 */
CreateColdStorageInstanceResponse Client::createColdStorageInstance(const CreateColdStorageInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createColdStorageInstanceWithOptions(request, runtime);
}

/**
 * @summary serverless创建周期任务策略
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
 * @summary serverless创建周期任务策略
 *
 * @param request CreateCronJobPolicyServerlessRequest
 * @return CreateCronJobPolicyServerlessResponse
 */
CreateCronJobPolicyServerlessResponse Client::createCronJobPolicyServerless(const CreateCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary CreateDBCluster.
 *
 * @param request CreateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBClusterWithOptions(const CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary CreateDBCluster.
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
 * @summary 边缘云创建链接地址接口
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
 * @summary 边缘云创建链接地址接口
 *
 * @param request CreateDBClusterEndpointZonalRequest
 * @return CreateDBClusterEndpointZonalResponse
 */
CreateDBClusterEndpointZonalResponse Client::createDBClusterEndpointZonal(const CreateDBClusterEndpointZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterEndpointZonalWithOptions(request, runtime);
}

/**
 * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 *
 * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
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
 * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 *
 * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 *
 * @param request CreateDBEndpointAddressRequest
 * @return CreateDBEndpointAddressResponse
 */
CreateDBEndpointAddressResponse Client::createDBEndpointAddress(const CreateDBEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Creates a database link.
 *
 * @description A database link can be used to connect two PolarDB for PostgreSQL(Compatible with Oracle) clusters, or connect a PolarDB for PostgreSQL(Compatible with Oracle) cluster to a user-created PostgreSQL database that is hosted on an Elastic Compute Service (ECS) instance. You can use database links to query data across clusters.
 * > *   You can create up to 10 database links for a cluster.
 * > *   Each database link connects a source cluster and a destination cluster.
 * > *   The source cluster and the destination cluster or the destination ECS instance must be located in the same region.
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
 * @summary Creates a database link.
 *
 * @description A database link can be used to connect two PolarDB for PostgreSQL(Compatible with Oracle) clusters, or connect a PolarDB for PostgreSQL(Compatible with Oracle) cluster to a user-created PostgreSQL database that is hosted on an Elastic Compute Service (ECS) instance. You can use database links to query data across clusters.
 * > *   You can create up to 10 database links for a cluster.
 * > *   Each database link connects a source cluster and a destination cluster.
 * > *   The source cluster and the destination cluster or the destination ECS instance must be located in the same region.
 *
 * @param request CreateDBLinkRequest
 * @return CreateDBLinkResponse
 */
CreateDBLinkResponse Client::createDBLink(const CreateDBLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBLinkWithOptions(request, runtime);
}

/**
 * @summary Adds a read-only node to a PolarDB cluster.
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
 * @summary Adds a read-only node to a PolarDB cluster.
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
 * @summary 创建PolarDB边缘云数据库
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
 * @summary 创建PolarDB边缘云数据库
 *
 * @param request CreateDatabaseZonalRequest
 * @return CreateDatabaseZonalResponse
 */
CreateDatabaseZonalResponse Client::createDatabaseZonal(const CreateDatabaseZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseZonalWithOptions(request, runtime);
}

/**
 * @summary 创建插件
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
 * @summary 创建插件
 *
 * @param request CreateExtensionsRequest
 * @return CreateExtensionsResponse
 */
CreateExtensionsResponse Client::createExtensions(const CreateExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExtensionsWithOptions(request, runtime);
}

/**
 * @summary 创建全球数据网络
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
 * @summary 创建全球数据网络
 *
 * @param request CreateGlobalDataNetworkRequest
 * @return CreateGlobalDataNetworkResponse
 */
CreateGlobalDataNetworkResponse Client::createGlobalDataNetwork(const CreateGlobalDataNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalDataNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a global database network (GDN).
 *
 * @description >  A cluster belongs to only one GDN.
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
 * @summary Creates a global database network (GDN).
 *
 * @description >  A cluster belongs to only one GDN.
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
 * @summary 创建网络通道
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
 * @summary 创建网络通道
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
 * @summary Creates a parameter template.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > You can call this operation only on a PolarDB for MySQL cluster.
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
 * @summary Creates a parameter template.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > You can call this operation only on a PolarDB for MySQL cluster.
 *
 * @param request CreateParameterGroupRequest
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroup(const CreateParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role (SLR).
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
 * @summary Creates a service-linked role (SLR).
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
 * @summary 删除AI集群实例
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
 * @summary 删除AI集群实例
 *
 * @param request DeleteAIDBClusterRequest
 * @return DeleteAIDBClusterResponse
 */
DeleteAIDBClusterResponse Client::deleteAIDBCluster(const DeleteAIDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIDBClusterWithOptions(request, runtime);
}

/**
 * @summary 删除ai实例子节点
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
 * @summary 删除ai实例子节点
 *
 * @param request DeleteAINodesRequest
 * @return DeleteAINodesResponse
 */
DeleteAINodesResponse Client::deleteAINodes(const DeleteAINodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAINodesWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account for a PolarDB cluster.
 *
 * @description > Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
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
 * @summary Deletes a database account for a PolarDB cluster.
 *
 * @description > Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary 删除PolarDB边缘云集群账号
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
 * @summary 删除PolarDB边缘云集群账号
 *
 * @param request DeleteAccountZonalRequest
 * @return DeleteAccountZonalResponse
 */
DeleteAccountZonalResponse Client::deleteAccountZonal(const DeleteAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountZonalWithOptions(request, runtime);
}

/**
 * @summary 删除PolarDB应用
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
 * @summary 删除PolarDB应用
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary 删除PolarDB应用终端地址
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
 * @summary 删除PolarDB应用终端地址
 *
 * @param request DeleteApplicationEndpointAddressRequest
 * @return DeleteApplicationEndpointAddressResponse
 */
DeleteApplicationEndpointAddressResponse Client::deleteApplicationEndpointAddress(const DeleteApplicationEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationEndpointAddressWithOptions(request, runtime);
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
 * @summary Releases a pay-as-you-go PolarDB cluster.
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
 * @summary Releases a pay-as-you-go PolarDB cluster.
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Releases a custom cluster endpoint of a PolarDB cluster.
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
 * @summary Releases a custom cluster endpoint of a PolarDB cluster.
 *
 * @param request DeleteDBClusterEndpointRequest
 * @return DeleteDBClusterEndpointResponse
 */
DeleteDBClusterEndpointResponse Client::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterEndpointWithOptions(request, runtime);
}

/**
 * @summary 删除PolarDB 边缘云集群的链接地址
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
 * @summary 删除PolarDB 边缘云集群的链接地址
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
 * @description > *   You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 * > *   Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
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
 * @description > *   You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
 * > *   Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
 *
 * @param request DeleteDBEndpointAddressRequest
 * @return DeleteDBEndpointAddressResponse
 */
DeleteDBEndpointAddressResponse Client::deleteDBEndpointAddress(const DeleteDBEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes a database link from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
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
 * @summary Deletes a database link from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
 *
 * @param request DeleteDBLinkRequest
 * @return DeleteDBLinkResponse
 */
DeleteDBLinkResponse Client::deleteDBLink(const DeleteDBLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBLinkWithOptions(request, runtime);
}

/**
 * @summary Deletes a read-only node from a PolarDB cluster.
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
 * @summary Deletes a read-only node from a PolarDB cluster.
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
 * @summary 删除PolarDB边缘云集群数据库
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
 * @summary 删除PolarDB边缘云集群数据库
 *
 * @param request DeleteDatabaseZonalRequest
 * @return DeleteDatabaseZonalResponse
 */
DeleteDatabaseZonalResponse Client::deleteDatabaseZonal(const DeleteDatabaseZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseZonalWithOptions(request, runtime);
}

/**
 * @summary 删除角色
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
 * @summary 删除角色
 *
 * @param request DeleteEncryptionDBRolePrivilegeRequest
 * @return DeleteEncryptionDBRolePrivilegeResponse
 */
DeleteEncryptionDBRolePrivilegeResponse Client::deleteEncryptionDBRolePrivilege(const DeleteEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary 删除插件
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
 * @summary 删除插件
 *
 * @param request DeleteExtensionsRequest
 * @return DeleteExtensionsResponse
 */
DeleteExtensionsResponse Client::deleteExtensions(const DeleteExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExtensionsWithOptions(request, runtime);
}

/**
 * @summary 删除sql防火墙
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
 * @summary 删除sql防火墙
 *
 * @param request DeleteFirewallRulesRequest
 * @return DeleteFirewallRulesResponse
 */
DeleteFirewallRulesResponse Client::deleteFirewallRules(const DeleteFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary DeleteGlobalDataNetwork
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
 * @summary DeleteGlobalDataNetwork
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
 * @description >  You can delete a GDN only when the GDN includes only a primary cluster.
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
 * @description >  You can delete a GDN only when the GDN includes only a primary cluster.
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
 * @summary Deletes a data masking rule.
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
 * @summary Deletes a data masking rule.
 *
 * @param request DeleteMaskingRulesRequest
 * @return DeleteMaskingRulesResponse
 */
DeleteMaskingRulesResponse Client::deleteMaskingRules(const DeleteMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary 删除网络通道
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
 * @summary 删除网络通道
 *
 * @param request DeleteNetworkChannelRequest
 * @return DeleteNetworkChannelResponse
 */
DeleteNetworkChannelResponse Client::deleteNetworkChannel(const DeleteNetworkChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a parameter template of a PolarDB cluster.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and quickly apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * >  When you delete a parameter template, the parameter settings that are applied to PolarDB clusters are not affected.
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
 * @summary Deletes a parameter template of a PolarDB cluster.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and quickly apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * >  When you delete a parameter template, the parameter settings that are applied to PolarDB clusters are not affected.
 *
 * @param request DeleteParameterGroupRequest
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroup(const DeleteParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterGroupWithOptions(request, runtime);
}

/**
 * @summary 删除PolarFs Quota规则
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
 * @summary 删除PolarFs Quota规则
 *
 * @param request DeletePolarFsQuotaRequest
 * @return DeletePolarFsQuotaResponse
 */
DeletePolarFsQuotaResponse Client::deletePolarFsQuota(const DeletePolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary 删除SQL限流规则
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
 * @summary 删除SQL限流规则
 *
 * @param request DeleteSQLRateLimitingRulesRequest
 * @return DeleteSQLRateLimitingRulesResponse
 */
DeleteSQLRateLimitingRulesResponse Client::deleteSQLRateLimitingRules(const DeleteSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary 查看custom实例详情
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
 * @summary 查看custom实例详情
 *
 * @param request DescribeAIDBClusterAttributeRequest
 * @return DescribeAIDBClusterAttributeResponse
 */
DescribeAIDBClusterAttributeResponse Client::describeAIDBClusterAttribute(const DescribeAIDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary 获取ai容器性能指标
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
 * @summary 获取ai容器性能指标
 *
 * @param request DescribeAIDBClusterPerformanceRequest
 * @return DescribeAIDBClusterPerformanceResponse
 */
DescribeAIDBClusterPerformanceResponse Client::describeAIDBClusterPerformance(const DescribeAIDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary 查询模型算子日志
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
 * @summary 查询模型算子日志
 *
 * @param request DescribeAIDBClusterTaskLogFilesRequest
 * @return DescribeAIDBClusterTaskLogFilesResponse
 */
DescribeAIDBClusterTaskLogFilesResponse Client::describeAIDBClusterTaskLogFiles(const DescribeAIDBClusterTaskLogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTaskLogFilesWithOptions(request, runtime);
}

/**
 * @summary 查询模型算子指标
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
 * @summary 查询模型算子指标
 *
 * @param request DescribeAIDBClusterTaskMetricsRequest
 * @return DescribeAIDBClusterTaskMetricsResponse
 */
DescribeAIDBClusterTaskMetricsResponse Client::describeAIDBClusterTaskMetrics(const DescribeAIDBClusterTaskMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClusterTaskMetricsWithOptions(request, runtime);
}

/**
 * @summary 查看custom集群列表
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
 * @summary 查看custom集群列表
 *
 * @param request DescribeAIDBClustersRequest
 * @return DescribeAIDBClustersResponse
 */
DescribeAIDBClustersResponse Client::describeAIDBClusters(const DescribeAIDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the PolarDB for AI feature.
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
 * @summary Queries the status of the PolarDB for AI feature.
 *
 * @param request DescribeAITaskStatusRequest
 * @return DescribeAITaskStatusResponse
 */
DescribeAITaskStatusResponse Client::describeAITaskStatus(const DescribeAITaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAITaskStatusWithOptions(request, runtime);
}

/**
 * @summary Queries information about a database account of a PolarDB cluster.
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
 * @summary Queries information about a database account of a PolarDB cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary 查询PolarDB边缘云集群列表
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
 * @summary 查询PolarDB边缘云集群列表
 *
 * @param request DescribeAccountsZonalRequest
 * @return DescribeAccountsZonalResponse
 */
DescribeAccountsZonalResponse Client::describeAccountsZonal(const DescribeAccountsZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsZonalWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an activation code.
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
 * @summary Queries the details of an activation code.
 *
 * @param request DescribeActivationCodeDetailsRequest
 * @return DescribeActivationCodeDetailsResponse
 */
DescribeActivationCodeDetailsResponse Client::describeActivationCodeDetails(const DescribeActivationCodeDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActivationCodeDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of activation codes.
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
 * @summary Queries a list of activation codes.
 *
 * @param request DescribeActivationCodesRequest
 * @return DescribeActivationCodesResponse
 */
DescribeActivationCodesResponse Client::describeActivationCodes(const DescribeActivationCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActivationCodesWithOptions(request, runtime);
}

/**
 * @summary 获取用户的运维配置信息，目前包括主动运维窗口信息
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
 * @summary 获取用户的运维配置信息，目前包括主动运维窗口信息
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary 用户侧查询运维任务
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
 * @summary 用户侧查询运维任务
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 获取应用详情
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
 * @summary 获取应用详情
 *
 * @param request DescribeApplicationAttributeRequest
 * @return DescribeApplicationAttributeResponse
 */
DescribeApplicationAttributeResponse Client::describeApplicationAttribute(const DescribeApplicationAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationAttributeWithOptions(request, runtime);
}

/**
 * @summary 获取应用组件参数
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
 * @summary 获取应用组件参数
 *
 * @param request DescribeApplicationParametersRequest
 * @return DescribeApplicationParametersResponse
 */
DescribeApplicationParametersResponse Client::describeApplicationParameters(const DescribeApplicationParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationParametersWithOptions(request, runtime);
}

/**
 * @summary 获取应用serverless配置
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
 * @summary 获取应用serverless配置
 *
 * @param request DescribeApplicationServerlessConfRequest
 * @return DescribeApplicationServerlessConfResponse
 */
DescribeApplicationServerlessConfResponse Client::describeApplicationServerlessConf(const DescribeApplicationServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationServerlessConfWithOptions(request, runtime);
}

/**
 * @summary 获取当前地域所有PolarDB实例的应用列表
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
 * @summary 获取当前地域所有PolarDB实例的应用列表
 *
 * @param request DescribeApplicationsRequest
 * @return DescribeApplicationsResponse
 */
DescribeApplicationsResponse Client::describeApplications(const DescribeApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the auto-renewal attributes of a subscription PolarDB cluster.
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
 * @summary Queries the auto-renewal attributes of a subscription PolarDB cluster.
 *
 * @param request DescribeAutoRenewAttributeRequest
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询可用跨地域备份地域列表
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
 * @summary 查询可用跨地域备份地域列表
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegions(const DescribeAvailableCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableCrossRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries backup logs and the URLs to download the backup logs.
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
 * @summary Queries backup logs and the URLs to download the backup logs.
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
 * @summary 查询备份集所在地域信息
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
 * @summary 查询备份集所在地域信息
 *
 * @param request DescribeBackupRegionsRequest
 * @return DescribeBackupRegionsResponse
 */
DescribeBackupRegionsResponse Client::describeBackupRegions(const DescribeBackupRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the backup tasks of a PolarDB cluster.
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
 * @summary Queries the backup tasks of a PolarDB cluster.
 *
 * @param request DescribeBackupTasksRequest
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasks(const DescribeBackupTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the backup details of a PolarDB cluster.
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
 * @summary Queries the backup details of a PolarDB cluster.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries character sets that are supported by a PolarDB for MySQL cluster.
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
 * @summary Queries character sets that are supported by a PolarDB for MySQL cluster.
 *
 * @param request DescribeCharacterSetNameRequest
 * @return DescribeCharacterSetNameResponse
 */
DescribeCharacterSetNameResponse Client::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCharacterSetNameWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of a cluster.
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
 * @summary Queries the specifications of a cluster.
 *
 * @param request DescribeClassListRequest
 * @return DescribeClassListResponse
 */
DescribeClassListResponse Client::describeClassList(const DescribeClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClassListWithOptions(request, runtime);
}

/**
 * @summary 查询冷存储实例信息
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
 * @summary 查询冷存储实例信息
 *
 * @param request DescribeColdStorageInstanceRequest
 * @return DescribeColdStorageInstanceResponse
 */
DescribeColdStorageInstanceResponse Client::describeColdStorageInstance(const DescribeColdStorageInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdStorageInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询周期任务策略
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
 * @summary 查询周期任务策略
 *
 * @param request DescribeCronJobPolicyServerlessRequest
 * @return DescribeCronJobPolicyServerlessResponse
 */
DescribeCronJobPolicyServerlessResponse Client::describeCronJobPolicyServerless(const DescribeCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary 查询跨云支持的规格列表
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
 * @summary 查询跨云支持的规格列表
 *
 * @param request DescribeCrossCloudLevelsRequest
 * @return DescribeCrossCloudLevelsResponse
 */
DescribeCrossCloudLevelsResponse Client::describeCrossCloudLevels(const DescribeCrossCloudLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudLevelsWithOptions(request, runtime);
}

/**
 * @summary 查看跨云开区信息
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
 * @summary 查看跨云开区信息
 *
 * @param request DescribeCrossCloudRegionRequest
 * @return DescribeCrossCloudRegionResponse
 */
DescribeCrossCloudRegionResponse Client::describeCrossCloudRegion(const DescribeCrossCloudRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudRegionWithOptions(request, runtime);
}

/**
 * @summary 查询跨云地域映射
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
 * @summary 查询跨云地域映射
 *
 * @param request DescribeCrossCloudRegionMappingToAliyunRequest
 * @return DescribeCrossCloudRegionMappingToAliyunResponse
 */
DescribeCrossCloudRegionMappingToAliyunResponse Client::describeCrossCloudRegionMappingToAliyun(const DescribeCrossCloudRegionMappingToAliyunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossCloudRegionMappingToAliyunWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelists and security groups of a PolarDB cluster.
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
 * @summary Queries the IP address whitelists and security groups of a PolarDB cluster.
 *
 * @param request DescribeDBClusterAccessWhitelistRequest
 * @return DescribeDBClusterAccessWhitelistResponse
 */
DescribeDBClusterAccessWhitelistResponse Client::describeDBClusterAccessWhitelist(const DescribeDBClusterAccessWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAccessWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries information about a PolarDB cluster.
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
 * @summary Queries information about a PolarDB cluster.
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
 * @summary Queries available resources in a PolarDB cluster.
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
 * @summary Queries available resources in a PolarDB cluster.
 *
 * @param request DescribeDBClusterAvailableResourcesRequest
 * @return DescribeDBClusterAvailableResourcesResponse
 */
DescribeDBClusterAvailableResourcesResponse Client::describeDBClusterAvailableResources(const DescribeDBClusterAvailableResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAvailableResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries whether the source IP address can access a cluster.
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
 * @summary Queries whether the source IP address can access a cluster.
 *
 * @param request DescribeDBClusterConnectivityRequest
 * @return DescribeDBClusterConnectivityResponse
 */
DescribeDBClusterConnectivityResponse Client::describeDBClusterConnectivity(const DescribeDBClusterConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConnectivityWithOptions(request, runtime);
}

/**
 * @summary DescribeDBClusterEncryptionKey
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
 * @summary DescribeDBClusterEncryptionKey
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
 * @summary 查询PolarDB边缘集群的链接地址
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
 * @summary 查询PolarDB边缘集群的链接地址
 *
 * @param request DescribeDBClusterEndpointsZonalRequest
 * @return DescribeDBClusterEndpointsZonalResponse
 */
DescribeDBClusterEndpointsZonalResponse Client::describeDBClusterEndpointsZonal(const DescribeDBClusterEndpointsZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterEndpointsZonalWithOptions(request, runtime);
}

/**
 * @summary The ID of the synchronous task.
 *
 * @description The ID of the request.
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
 * @summary The ID of the synchronous task.
 *
 * @description The ID of the request.
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
 * @param request DescribeDBClusterNetInfoRequest
 * @return DescribeDBClusterNetInfoResponse
 */
DescribeDBClusterNetInfoResponse Client::describeDBClusterNetInfo(const DescribeDBClusterNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters of a PolarDB cluster.
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
 * @summary Queries the parameters of a PolarDB cluster.
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
 * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
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
 * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary 查询代理详情
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
 * @summary 查询代理详情
 *
 * @param request DescribeDBClusterProxyRequest
 * @return DescribeDBClusterProxyResponse
 */
DescribeDBClusterProxyResponse Client::describeDBClusterProxy(const DescribeDBClusterProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterProxyWithOptions(request, runtime);
}

/**
 * @summary Queries the Secure Sockets Layer (SSL) settings of a PolarDB cluster.
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
 * @summary Queries the Secure Sockets Layer (SSL) settings of a PolarDB cluster.
 *
 * @param request DescribeDBClusterSSLRequest
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSL(const DescribeDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the serverless configurations of a serverless cluster.
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
 * @summary Queries the serverless configurations of a serverless cluster.
 *
 * @param request DescribeDBClusterServerlessConfRequest
 * @return DescribeDBClusterServerlessConfResponse
 */
DescribeDBClusterServerlessConfResponse Client::describeDBClusterServerlessConf(const DescribeDBClusterServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterServerlessConfWithOptions(request, runtime);
}

/**
 * @summary Queries the transparent data encryption (TDE) settings of a PolarDB cluster.
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
 * @summary Queries the transparent data encryption (TDE) settings of a PolarDB cluster.
 *
 * @param request DescribeDBClusterTDERequest
 * @return DescribeDBClusterTDEResponse
 */
DescribeDBClusterTDEResponse Client::describeDBClusterTDE(const DescribeDBClusterTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterTDEWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the database engine version of a PolarDB for MySQL cluster.
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
 * @summary Queries the information about the database engine version of a PolarDB for MySQL cluster.
 *
 * @param request DescribeDBClusterVersionRequest
 * @return DescribeDBClusterVersionResponse
 */
DescribeDBClusterVersionResponse Client::describeDBClusterVersion(const DescribeDBClusterVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterVersionWithOptions(request, runtime);
}

/**
 * @summary PolarDB边缘集群查询版本
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
 * @summary PolarDB边缘集群查询版本
 *
 * @param request DescribeDBClusterVersionZonalRequest
 * @return DescribeDBClusterVersionZonalResponse
 */
DescribeDBClusterVersionZonalResponse Client::describeDBClusterVersionZonal(const DescribeDBClusterVersionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterVersionZonalWithOptions(request, runtime);
}

/**
 * @summary Queries PolarDB clusters or the clusters that can be accessed by an authorized RAM user.
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
 * @summary Queries PolarDB clusters or the clusters that can be accessed by an authorized RAM user.
 *
 * @param request DescribeDBClustersRequest
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClusters(const DescribeDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about PolarDB clusters that contain backup sets in a region.
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
 * @summary Queries the information about PolarDB clusters that contain backup sets in a region.
 *
 * @param request DescribeDBClustersWithBackupsRequest
 * @return DescribeDBClustersWithBackupsResponse
 */
DescribeDBClustersWithBackupsResponse Client::describeDBClustersWithBackups(const DescribeDBClustersWithBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithBackupsWithOptions(request, runtime);
}

/**
 * @summary MyBase中的PolarDB列表
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
 * @summary MyBase中的PolarDB列表
 *
 * @param request DescribeDBClustersZonalRequest
 * @return DescribeDBClustersZonalResponse
 */
DescribeDBClustersZonalResponse Client::describeDBClustersZonal(const DescribeDBClustersZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersZonalWithOptions(request, runtime);
}

/**
 * @summary Queries attributes such as character sets and collations supported by a database in a PolarDB cluster.
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
 * @summary Queries attributes such as character sets and collations supported by a database in a PolarDB cluster.
 *
 * @param request DescribeDBInitializeVariableRequest
 * @return DescribeDBInitializeVariableResponse
 */
DescribeDBInitializeVariableResponse Client::describeDBInitializeVariable(const DescribeDBInitializeVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInitializeVariableWithOptions(request, runtime);
}

/**
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
 * @param request DescribeDBInstancePerformanceRequest
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the database links of a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
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
 * @summary Queries the database links of a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
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
 * @summary 查询实例日志
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
 * @summary 查询实例日志
 *
 * @param request DescribeDBLogFilesRequest
 * @return DescribeDBLogFilesResponse
 */
DescribeDBLogFilesResponse Client::describeDBLogFiles(const DescribeDBLogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBLogFilesWithOptions(request, runtime);
}

/**
 * @summary 查询可用内核小版本列表
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
 * @summary 查询可用内核小版本列表
 *
 * @param request DescribeDBMiniEngineVersionsRequest
 * @return DescribeDBMiniEngineVersionsResponse
 */
DescribeDBMiniEngineVersionsResponse Client::describeDBMiniEngineVersions(const DescribeDBMiniEngineVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBMiniEngineVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of a node in a PolarDB cluster.
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
 * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
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
 * @summary Queries the performance data of a node in a PolarDB cluster.
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
 * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
 *
 * @param request DescribeDBNodePerformanceRequest
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodePerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters of a specified node in a cluster.
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
 * @summary Queries the parameters of a specified node in a cluster.
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
 * @summary Queries the information about databases in a PolarDB cluster.
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
 * @summary Queries the information about databases in a PolarDB cluster.
 *
 * @param request DescribeDatabasesRequest
 * @return DescribeDatabasesResponse
 */
DescribeDatabasesResponse Client::describeDatabases(const DescribeDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabasesWithOptions(request, runtime);
}

/**
 * @summary 查询PolarDB边缘云数据库
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
 * @summary 查询PolarDB边缘云数据库
 *
 * @param request DescribeDatabasesZonalRequest
 * @return DescribeDatabasesZonalResponse
 */
DescribeDatabasesZonalResponse Client::describeDatabasesZonal(const DescribeDatabasesZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabasesZonalWithOptions(request, runtime);
}

/**
 * @summary PolarDB的MyBase集群
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
 * @summary PolarDB的MyBase集群
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
 * @summary 获取角色权限列表
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
 * @summary 获取角色权限列表
 *
 * @param request DescribeEncryptionDBRolePrivilegeRequest
 * @return DescribeEncryptionDBRolePrivilegeResponse
 */
DescribeEncryptionDBRolePrivilegeResponse Client::describeEncryptionDBRolePrivilege(const DescribeEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary 获取加密信息
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
 * @summary 获取加密信息
 *
 * @param request DescribeEncryptionDBSecretRequest
 * @return DescribeEncryptionDBSecretResponse
 */
DescribeEncryptionDBSecretResponse Client::describeEncryptionDBSecret(const DescribeEncryptionDBSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionDBSecretWithOptions(request, runtime);
}

/**
 * @summary 查询插件详情
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
 * @summary 查询插件详情
 *
 * @param request DescribeExtensionsRequest
 * @return DescribeExtensionsResponse
 */
DescribeExtensionsResponse Client::describeExtensions(const DescribeExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExtensionsWithOptions(request, runtime);
}

/**
 * @summary 查询sql防火墙信息
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
 * @summary 查询sql防火墙信息
 *
 * @param request DescribeFirewallRulesRequest
 * @return DescribeFirewallRulesResponse
 */
DescribeFirewallRulesResponse Client::describeFirewallRules(const DescribeFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary DescribeGlobalDataNetworkList
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
 * @summary DescribeGlobalDataNetworkList
 *
 * @param request DescribeGlobalDataNetworkListRequest
 * @return DescribeGlobalDataNetworkListResponse
 */
DescribeGlobalDataNetworkListResponse Client::describeGlobalDataNetworkList(const DescribeGlobalDataNetworkListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDataNetworkListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Global Database Network (GDN).
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
 * @summary Queries the information about a Global Database Network (GDN).
 *
 * @param request DescribeGlobalDatabaseNetworkRequest
 * @return DescribeGlobalDatabaseNetworkResponse
 */
DescribeGlobalDatabaseNetworkResponse Client::describeGlobalDatabaseNetwork(const DescribeGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all Global Database Networks (GDNs) that belong to an account.
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
 * @summary Queries the information about all Global Database Networks (GDNs) that belong to an account.
 *
 * @param request DescribeGlobalDatabaseNetworksRequest
 * @return DescribeGlobalDatabaseNetworksResponse
 */
DescribeGlobalDatabaseNetworksResponse Client::describeGlobalDatabaseNetworks(const DescribeGlobalDatabaseNetworksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDatabaseNetworksWithOptions(request, runtime);
}

/**
 * @summary Queries global IP whitelist templates.
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
 * @summary Queries global IP whitelist templates.
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
 * @summary 查询实例高可用相关日志
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
 * @summary 查询实例高可用相关日志
 *
 * @param request DescribeHALogsRequest
 * @return DescribeHALogsResponse
 */
DescribeHALogsResponse Client::describeHALogs(const DescribeHALogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHALogsWithOptions(request, runtime);
}

/**
 * @summary 事件中心事件列表
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
 * @summary 事件中心事件列表
 *
 * @param request DescribeHistoryEventsRequest
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEvents(const DescribeHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务列表
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
 * @summary 任务中心任务列表
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务统计
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
 * @summary 任务中心任务统计
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a license order.
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
 * @summary Queries the information of a license order.
 *
 * @param request DescribeLicenseOrderDetailsRequest
 * @return DescribeLicenseOrderDetailsResponse
 */
DescribeLicenseOrderDetailsResponse Client::describeLicenseOrderDetails(const DescribeLicenseOrderDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseOrderDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of license orders.
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
 * @summary Queries a list of license orders.
 *
 * @param request DescribeLicenseOrdersRequest
 * @return DescribeLicenseOrdersResponse
 */
DescribeLicenseOrdersResponse Client::describeLicenseOrders(const DescribeLicenseOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLicenseOrdersWithOptions(request, runtime);
}

/**
 * @summary 查询库表恢复可恢复时间范围
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
 * @summary 查询库表恢复可恢复时间范围
 *
 * @param request DescribeLocalAvailableRecoveryTimeRequest
 * @return DescribeLocalAvailableRecoveryTimeResponse
 */
DescribeLocalAvailableRecoveryTimeResponse Client::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLocalAvailableRecoveryTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the retention policy of log backups in a PolarDB cluster.
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
 * @summary Queries the retention policy of log backups in a PolarDB cluster.
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
 * @summary Queries the details of the databases or tables that can be restored.
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
 * @summary Queries the details of the databases or tables that can be restored.
 *
 * @param request DescribeMetaListRequest
 * @return DescribeMetaListResponse
 */
DescribeMetaListResponse Client::describeMetaList(const DescribeMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaListWithOptions(request, runtime);
}

/**
 * @summary 查询参数修改历史
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
 * @summary 查询参数修改历史
 *
 * @param request DescribeModifyParameterLogRequest
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModifyParameterLogWithOptions(request, runtime);
}

/**
 * @summary 查询网络通道
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
 * @summary 查询网络通道
 *
 * @param request DescribeNetworkChannelRequest
 * @return DescribeNetworkChannelResponse
 */
DescribeNetworkChannelResponse Client::describeNetworkChannel(const DescribeNetworkChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a parameter template.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > This parameter is valid only for a PolarDB for MySQL cluster.
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
 * @summary Queries the information about a parameter template.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > This parameter is valid only for a PolarDB for MySQL cluster.
 *
 * @param request DescribeParameterGroupRequest
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroup(const DescribeParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Queries parameter templates that are available in a specified region.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > This operation is applicable only to PolarDB for MySQL clusters.
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
 * @summary Queries parameter templates that are available in a specified region.
 *
 * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * > This operation is applicable only to PolarDB for MySQL clusters.
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the default parameters in a cluster.
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
 * @summary Queries the default parameters in a cluster.
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
 * @summary Queries the numbers of scheduled events for different types of tasks.
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
 * @summary Queries the numbers of scheduled events for different types of tasks.
 *
 * @param request DescribePendingMaintenanceActionsRequest
 * @return DescribePendingMaintenanceActionsResponse
 */
DescribePendingMaintenanceActionsResponse Client::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePendingMaintenanceActionsWithOptions(request, runtime);
}

/**
 * @summary 获取PolarFS实例详情
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
 * @summary 获取PolarFS实例详情
 *
 * @param request DescribePolarFsAttributeRequest
 * @return DescribePolarFsAttributeResponse
 */
DescribePolarFsAttributeResponse Client::describePolarFsAttribute(const DescribePolarFsAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询配额规则
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

  if (!!request.hasPolarFsInstanceId()) {
    query["PolarFsInstanceId"] = request.getPolarFsInstanceId();
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
 * @summary 查询配额规则
 *
 * @param request DescribePolarFsQuotaRequest
 * @return DescribePolarFsQuotaResponse
 */
DescribePolarFsQuotaResponse Client::describePolarFsQuota(const DescribePolarFsQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarFsQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries whether the SQL Explorer feature is enabled for the cluster.
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
 * @summary Queries whether the SQL Explorer feature is enabled for the cluster.
 *
 * @param request DescribePolarSQLCollectorPolicyRequest
 * @return DescribePolarSQLCollectorPolicyResponse
 */
DescribePolarSQLCollectorPolicyResponse Client::describePolarSQLCollectorPolicy(const DescribePolarSQLCollectorPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarSQLCollectorPolicyWithOptions(request, runtime);
}

/**
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
 * @param request DescribeRdsVSwitchsRequest
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

/**
 * @summary 查询vpc
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
 * @summary 查询vpc
 *
 * @param request DescribeRdsVpcsRequest
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the regions and zones available for PolarDB.
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
 * @summary Queries the regions and zones available for PolarDB.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 查询资源包列表
 *
 * @param request DescribeResourcePackagesRequest
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
 * @summary 查询资源包列表
 *
 * @return DescribeResourcePackagesResponse
 */
DescribeResourcePackagesResponse Client::describeResourcePackages() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourcePackagesWithOptions(runtime);
}

/**
 * @summary 查询SQL限流规则信息
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
 * @summary 查询SQL限流规则信息
 *
 * @param request DescribeSQLRateLimitingRulesRequest
 * @return DescribeSQLRateLimitingRulesResponse
 */
DescribeSQLRateLimitingRulesResponse Client::describeSQLRateLimitingRules(const DescribeSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all scheduled tasks.
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
 * @summary Queries the details of all scheduled tasks.
 *
 * @param request DescribeScheduleTasksRequest
 * @return DescribeScheduleTasksResponse
 */
DescribeScheduleTasksResponse Client::describeScheduleTasks(const DescribeScheduleTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScheduleTasksWithOptions(request, runtime);
}

/**
 * @summary Slow Log Details
 *
 * @description >- Only PolarDB MySQL Edition clusters support calling this interface.
 * >- Starting from September 1, 2024, due to the optimization of the SQL template algorithm, when calling this interface, the value of the SQLHash field will change. For more details, please refer to [Notice] Optimization of Slow SQL Template Algorithm (~~2845725~~).
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
 * @summary Slow Log Details
 *
 * @description >- Only PolarDB MySQL Edition clusters support calling this interface.
 * >- Starting from September 1, 2024, due to the optimization of the SQL template algorithm, when calling this interface, the value of the SQLHash field will change. For more details, please refer to [Notice] Optimization of Slow SQL Template Algorithm (~~2845725~~).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics about the slow query logs of a PolarDB cluster.
 *
 * @description > This operation is applicable only to PolarDB for MySQL clusters.
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
 * @summary Queries the statistics about the slow query logs of a PolarDB cluster.
 *
 * @description > This operation is applicable only to PolarDB for MySQL clusters.
 *
 * @param request DescribeSlowLogsRequest
 * @return DescribeSlowLogsResponse
 */
DescribeSlowLogsResponse Client::describeSlowLogs(const DescribeSlowLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the tasks that are generated based on API operations, such as the status of instance creation tasks.
 *
 * @description *   You can call this operation to view the details of a task that is generated by a specific API operation or in the PolarDB console. The system calls the specific API operation when you perform an operation in the PolarDB console. For example, you can view the details of the task when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation or [create a cluster](https://help.aliyun.com/document_detail/58769.html) in the PolarDB console.
 * *   You can view the details of tasks that are generated only when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create a cluster and `CreationOption` is not set to `CreateGdnStandby`.
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
 * @summary Queries the status of the tasks that are generated based on API operations, such as the status of instance creation tasks.
 *
 * @description *   You can call this operation to view the details of a task that is generated by a specific API operation or in the PolarDB console. The system calls the specific API operation when you perform an operation in the PolarDB console. For example, you can view the details of the task when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation or [create a cluster](https://help.aliyun.com/document_detail/58769.html) in the PolarDB console.
 * *   You can view the details of tasks that are generated only when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create a cluster and `CreationOption` is not set to `CreateGdnStandby`.
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary 查询校验报告
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
 * @summary 查询校验报告
 *
 * @param request DescribeUpgradeReportRequest
 * @return DescribeUpgradeReportResponse
 */
DescribeUpgradeReportResponse Client::describeUpgradeReport(const DescribeUpgradeReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpgradeReportWithOptions(request, runtime);
}

/**
 * @summary Queries the Key Management Service (KMS)-managed customer master keys (CMKs) that are used to encrypt data in a PolarDB cluster.
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
 * @summary Queries the Key Management Service (KMS)-managed customer master keys (CMKs) that are used to encrypt data in a PolarDB cluster.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @summary 查询交换机信息
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
 * @summary 查询交换机信息
 *
 * @param request DescribeVSwitchListRequest
 * @return DescribeVSwitchListResponse
 */
DescribeVSwitchListResponse Client::describeVSwitchList(const DescribeVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchListWithOptions(request, runtime);
}

/**
 * @summary Queries a vSwitch.
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
 * @summary Queries a vSwitch.
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary 查询vpc
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
 * @summary 查询vpc
 *
 * @param request DescribeVpcsRequest
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcs(const DescribeVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsWithOptions(request, runtime);
}

/**
 * @summary 获取可用区
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
 * @summary 获取可用区
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary 关闭集群的关系性
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
 * @summary 关闭集群的关系性
 *
 * @param request DisableDBClusterOrcaRequest
 * @return DisableDBClusterOrcaResponse
 */
DisableDBClusterOrcaResponse Client::disableDBClusterOrca(const DisableDBClusterOrcaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBClusterOrcaWithOptions(request, runtime);
}

/**
 * @summary Disables a stable serverless cluster.
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
 * @summary Disables a stable serverless cluster.
 *
 * @param request DisableDBClusterServerlessRequest
 * @return DisableDBClusterServerlessResponse
 */
DisableDBClusterServerlessResponse Client::disableDBClusterServerless(const DisableDBClusterServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBClusterServerlessWithOptions(request, runtime);
}

/**
 * @summary 开启集群的关系性
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
 * @summary 开启集群的关系性
 *
 * @param request EnableDBClusterOrcaRequest
 * @return EnableDBClusterOrcaResponse
 */
EnableDBClusterOrcaResponse Client::enableDBClusterOrca(const EnableDBClusterOrcaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDBClusterOrcaWithOptions(request, runtime);
}

/**
 * @summary Enables a stable serverless cluster.
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
 * @summary Enables a stable serverless cluster.
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
 * @summary 启用/禁用SQL限流规则
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
 * @summary 启用/禁用SQL限流规则
 *
 * @param request EnableSQLRateLimitingRulesRequest
 * @return EnableSQLRateLimitingRulesResponse
 */
EnableSQLRateLimitingRulesResponse Client::enableSQLRateLimitingRules(const EnableSQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary Evaluates available resources.
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
 * @summary Evaluates available resources.
 *
 * @param request EvaluateRegionResourceRequest
 * @return EvaluateRegionResourceResponse
 */
EvaluateRegionResourceResponse Client::evaluateRegionResource(const EvaluateRegionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateRegionResourceWithOptions(request, runtime);
}

/**
 * @summary 调用跨云 OpenAPI
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
 * @summary 调用跨云 OpenAPI
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
 * @summary 角色切换
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
 * @summary 角色切换
 *
 * @param request FailoverDBClusterZonalRequest
 * @return FailoverDBClusterZonalResponse
 */
FailoverDBClusterZonalResponse Client::failoverDBClusterZonal(const FailoverDBClusterZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverDBClusterZonalWithOptions(request, runtime);
}

/**
 * @summary 生成校验报告
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
 * @summary 生成校验报告
 *
 * @param request GenerateUpgradeReportForSyncCloneRequest
 * @return GenerateUpgradeReportForSyncCloneResponse
 */
GenerateUpgradeReportForSyncCloneResponse Client::generateUpgradeReportForSyncClone(const GenerateUpgradeReportForSyncCloneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUpgradeReportForSyncCloneWithOptions(request, runtime);
}

/**
 * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
 *
 * @description > *   An account can be authorized to access one or more databases.
 * > *   If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
 * > *   Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
 * > *   You can call this operation only on a PolarDB for MySQL cluster.
 * > *   By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
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
 * @description > *   An account can be authorized to access one or more databases.
 * > *   If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
 * > *   Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
 * > *   You can call this operation only on a PolarDB for MySQL cluster.
 * > *   By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
 *
 * @param request GrantAccountPrivilegeRequest
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 修改PolarDB边缘集群的账号权限
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
 * @summary 修改PolarDB边缘集群的账号权限
 *
 * @param request GrantAccountPrivilegeZonalRequest
 * @return GrantAccountPrivilegeZonalResponse
 */
GrantAccountPrivilegeZonalResponse Client::grantAccountPrivilegeZonal(const GrantAccountPrivilegeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeZonalWithOptions(request, runtime);
}

/**
 * @summary 查询订单
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
 * @summary 查询订单
 *
 * @param request ListOrdersRequest
 * @return ListOrdersResponse
 */
ListOrdersResponse Client::listOrders(const ListOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to one or more PolarDB clusters, or the PolarDB clusters to which one or more tags are added.
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
 * @summary Queries the tags that are added to one or more PolarDB clusters, or the PolarDB clusters to which one or more tags are added.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
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
 * @param request ListTagResourcesForRegionRequest
 * @return ListTagResourcesForRegionResponse
 */
ListTagResourcesForRegionResponse Client::listTagResourcesForRegion(const ListTagResourcesForRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesForRegionWithOptions(request, runtime);
}

/**
 * @summary Manually starts a cluster.
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
 * @summary Manually starts a cluster.
 *
 * @param request ManuallyStartDBClusterRequest
 * @return ManuallyStartDBClusterResponse
 */
ManuallyStartDBClusterResponse Client::manuallyStartDBCluster(const ManuallyStartDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manuallyStartDBClusterWithOptions(request, runtime);
}

/**
 * @summary 修改AI实例名称
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
 * @summary 修改AI实例名称
 *
 * @param request ModifyAIDBClusterDescriptionRequest
 * @return ModifyAIDBClusterDescriptionResponse
 */
ModifyAIDBClusterDescriptionResponse Client::modifyAIDBClusterDescription(const ModifyAIDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAIDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account of a PolarDB cluster.
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
 * @summary Modifies the description of a database account of a PolarDB cluster.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改PolarDB边缘云账号的描述
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
 * @summary 修改PolarDB边缘云账号的描述
 *
 * @param request ModifyAccountDescriptionZonalRequest
 * @return ModifyAccountDescriptionZonalResponse
 */
ModifyAccountDescriptionZonalResponse Client::modifyAccountDescriptionZonal(const ModifyAccountDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionZonalWithOptions(request, runtime);
}

/**
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
 * @summary 修改PolarDB边缘的账号密码
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
 * @summary 修改PolarDB边缘的账号密码
 *
 * @param request ModifyAccountPasswordZonalRequest
 * @return ModifyAccountPasswordZonalResponse
 */
ModifyAccountPasswordZonalResponse Client::modifyAccountPasswordZonal(const ModifyAccountPasswordZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPasswordZonalWithOptions(request, runtime);
}

/**
 * @summary 配置用户的运维信息，目前包括主动运维窗口信息
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
 * @summary 配置用户的运维信息，目前包括主动运维窗口信息
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Modifies the switching time of scheduled O\\&M events for an instance.
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
 * @summary Modifies the switching time of scheduled O\\&M events for an instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 修改应用描述
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
 * @summary 修改应用描述
 *
 * @param request ModifyApplicationDescriptionRequest
 * @return ModifyApplicationDescriptionResponse
 */
ModifyApplicationDescriptionResponse Client::modifyApplicationDescription(const ModifyApplicationDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改PolarDB应用参数
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
 * @summary 修改PolarDB应用参数
 *
 * @param request ModifyApplicationParameterRequest
 * @return ModifyApplicationParameterResponse
 */
ModifyApplicationParameterResponse Client::modifyApplicationParameter(const ModifyApplicationParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationParameterWithOptions(request, runtime);
}

/**
 * @summary 修改应用serverless配置
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
 * @summary 修改应用serverless配置
 *
 * @param request ModifyApplicationServerlessConfRequest
 * @return ModifyApplicationServerlessConfResponse
 */
ModifyApplicationServerlessConfResponse Client::modifyApplicationServerlessConf(const ModifyApplicationServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationServerlessConfWithOptions(request, runtime);
}

/**
 * @summary 修改应用白名单
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
 * @summary 修改应用白名单
 *
 * @param request ModifyApplicationWhitelistRequest
 * @return ModifyApplicationWhitelistResponse
 */
ModifyApplicationWhitelistResponse Client::modifyApplicationWhitelist(const ModifyApplicationWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the auto-renewal attributes of a subscription PolarDB cluster.
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
 * @summary Modifies the auto-renewal attributes of a subscription PolarDB cluster.
 *
 * @param request ModifyAutoRenewAttributeRequest
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic backup policy of a PolarDB cluster.
 *
 * @description > You can also modify the automatic backup policy of a PolarDB cluster in the console. For more information, see [Backup settings](https://help.aliyun.com/document_detail/280422.html).
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
 * @summary Modifies the automatic backup policy of a PolarDB cluster.
 *
 * @description > You can also modify the automatic backup policy of a PolarDB cluster in the console. For more information, see [Backup settings](https://help.aliyun.com/document_detail/280422.html).
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改周期任务策略
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
 * @summary 修改周期任务策略
 *
 * @param request ModifyCronJobPolicyServerlessRequest
 * @return ModifyCronJobPolicyServerlessResponse
 */
ModifyCronJobPolicyServerlessResponse Client::modifyCronJobPolicyServerless(const ModifyCronJobPolicyServerlessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCronJobPolicyServerlessWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a PolarDB for MySQL cluster.
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
 * @summary Modifies the configurations of a PolarDB for MySQL cluster.
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies the whitelists (IP whitelists and security groups) of a specified cluster.
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
 * @summary Creates or modifies the whitelists (IP whitelists and security groups) of a specified cluster.
 *
 * @param request ModifyDBClusterAccessWhitelistRequest
 * @return ModifyDBClusterAccessWhitelistResponse
 */
ModifyDBClusterAccessWhitelistResponse Client::modifyDBClusterAccessWhitelist(const ModifyDBClusterAccessWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAccessWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies cluster parameters and applies them to specified nodes.
 *
 * @param request ModifyDBClusterAndNodesParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterAndNodesParametersResponse
 */
ModifyDBClusterAndNodesParametersResponse Client::modifyDBClusterAndNodesParametersWithOptions(const ModifyDBClusterAndNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Modifies cluster parameters and applies them to specified nodes.
 *
 * @param request ModifyDBClusterAndNodesParametersRequest
 * @return ModifyDBClusterAndNodesParametersResponse
 */
ModifyDBClusterAndNodesParametersResponse Client::modifyDBClusterAndNodesParameters(const ModifyDBClusterAndNodesParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAndNodesParametersWithOptions(request, runtime);
}

/**
 * @summary Changes the high availability mode of the cluster.
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
 * @summary Changes the high availability mode of the cluster.
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
 * @param request ModifyDBClusterAuditLogCollectorRequest
 * @return ModifyDBClusterAuditLogCollectorResponse
 */
ModifyDBClusterAuditLogCollectorResponse Client::modifyDBClusterAuditLogCollector(const ModifyDBClusterAuditLogCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAuditLogCollectorWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the cluster lock feature for a PolarDB cluster.
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
 * @summary Enables or disables the cluster lock feature for a PolarDB cluster.
 *
 * @param request ModifyDBClusterDeletionRequest
 * @return ModifyDBClusterDeletionResponse
 */
ModifyDBClusterDeletionResponse Client::modifyDBClusterDeletion(const ModifyDBClusterDeletionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDeletionWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a PolarDB cluster.
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
 * @summary Modifies the name of a PolarDB cluster.
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改集群描述
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
 * @summary 修改集群描述
 *
 * @param request ModifyDBClusterDescriptionZonalRequest
 * @return ModifyDBClusterDescriptionZonalResponse
 */
ModifyDBClusterDescriptionZonalResponse Client::modifyDBClusterDescriptionZonal(const ModifyDBClusterDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionZonalWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a specified PolarDB cluster endpoint. For example, you can modify the following attributes for the specified cluster endpoint: read/write mode, consistency level, transaction splitting, primary node accepts read requests, and connection pool. You can also call the operation to specify whether newly added nodes are automatically associated with the specified cluster endpoint.
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
 * @summary Modifies the attributes of a specified PolarDB cluster endpoint. For example, you can modify the following attributes for the specified cluster endpoint: read/write mode, consistency level, transaction splitting, primary node accepts read requests, and connection pool. You can also call the operation to specify whether newly added nodes are automatically associated with the specified cluster endpoint.
 *
 * @param request ModifyDBClusterEndpointRequest
 * @return ModifyDBClusterEndpointResponse
 */
ModifyDBClusterEndpointResponse Client::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterEndpointWithOptions(request, runtime);
}

/**
 * @summary PolarDB边缘集群修改链接地址
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
 * @summary PolarDB边缘集群修改链接地址
 *
 * @param request ModifyDBClusterEndpointZonalRequest
 * @return ModifyDBClusterEndpointZonalResponse
 */
ModifyDBClusterEndpointZonalResponse Client::modifyDBClusterEndpointZonal(const ModifyDBClusterEndpointZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterEndpointZonalWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of a PolarDB cluster.
 *
 * @description >  We recommend that you set the routine maintenance window to off-peak hours. Alibaba Cloud maintains your cluster within the specified maintenance window to minimize the negative impacts on your business.
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
 * @summary Modifies the maintenance window of a PolarDB cluster.
 *
 * @description >  We recommend that you set the routine maintenance window to off-peak hours. Alibaba Cloud maintains your cluster within the specified maintenance window to minimize the negative impacts on your business.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Switches or rolls back the task that migrates data from ApsaraDB for RDS to PolarDB.
 *
 * @description *   You can call this operation to switch the task that migrates data from ApsaraDB for RDS to PolarDB.
 * *   You can call this operation to roll back the task that migrates data from ApsaraDB for RDS to PolarDB.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
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
 * @summary Switches or rolls back the task that migrates data from ApsaraDB for RDS to PolarDB.
 *
 * @description *   You can call this operation to switch the task that migrates data from ApsaraDB for RDS to PolarDB.
 * *   You can call this operation to roll back the task that migrates data from ApsaraDB for RDS to PolarDB.
 * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
 *
 * @param request ModifyDBClusterMigrationRequest
 * @return ModifyDBClusterMigrationResponse
 */
ModifyDBClusterMigrationResponse Client::modifyDBClusterMigration(const ModifyDBClusterMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMigrationWithOptions(request, runtime);
}

/**
 * @summary 修改dts源实例、目标实例
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
 * @summary 修改dts源实例、目标实例
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
 * @summary Modifies the parameters of a specified PolarDB cluster or applies existing parameter templates to a specified cluster.
 *
 * @description PolarDB supports the parameter template feature to centrally manage clusters. You can configure a number of parameters at a time by using a parameter template and apply the template to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * **
 * **Only PolarDB for MySQL clusters support parameter templates.
 *
 * @param request ModifyDBClusterParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterParametersResponse
 */
ModifyDBClusterParametersResponse Client::modifyDBClusterParametersWithOptions(const ModifyDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Modifies the parameters of a specified PolarDB cluster or applies existing parameter templates to a specified cluster.
 *
 * @description PolarDB supports the parameter template feature to centrally manage clusters. You can configure a number of parameters at a time by using a parameter template and apply the template to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
 * **
 * **Only PolarDB for MySQL clusters support parameter templates.
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
 * @summary Modifies the configurations of a resource group for a database cluster.
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
 * @summary Modifies the configurations of a resource group for a database cluster.
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroup(const ModifyDBClusterResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the SSL encryption feature for a PolarDB cluster, or updates the CA certificate of the cluster.
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
 * @summary Enables or disables the SSL encryption feature for a PolarDB cluster, or updates the CA certificate of the cluster.
 *
 * @param request ModifyDBClusterSSLRequest
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSL(const ModifyDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a serverless cluster.
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
 * @summary Modifies the configurations of a serverless cluster.
 *
 * @param request ModifyDBClusterServerlessConfRequest
 * @return ModifyDBClusterServerlessConfResponse
 */
ModifyDBClusterServerlessConfResponse Client::modifyDBClusterServerlessConf(const ModifyDBClusterServerlessConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterServerlessConfWithOptions(request, runtime);
}

/**
 * @summary 修改存储性能
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
 * @summary 修改存储性能
 *
 * @param request ModifyDBClusterStoragePerformanceRequest
 * @return ModifyDBClusterStoragePerformanceResponse
 */
ModifyDBClusterStoragePerformanceResponse Client::modifyDBClusterStoragePerformance(const ModifyDBClusterStoragePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterStoragePerformanceWithOptions(request, runtime);
}

/**
 * @summary Changes the storage capacity of a pay-as-you-go cluster of Enterprise Edition or a cluster of Standard Edition.
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
 * @summary Changes the storage capacity of a pay-as-you-go cluster of Enterprise Edition or a cluster of Standard Edition.
 *
 * @param request ModifyDBClusterStorageSpaceRequest
 * @return ModifyDBClusterStorageSpaceResponse
 */
ModifyDBClusterStorageSpaceResponse Client::modifyDBClusterStorageSpace(const ModifyDBClusterStorageSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterStorageSpaceWithOptions(request, runtime);
}

/**
 * @summary Enables the transparent data encryption (TDE) feature for a PolarDB cluster.
 *
 * @description > *   To perform this operation, you must activate KMS first. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
 * > *   After TDE is enabled, you cannot disable TDE.
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
 * @summary Enables the transparent data encryption (TDE) feature for a PolarDB cluster.
 *
 * @description > *   To perform this operation, you must activate KMS first. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
 * > *   After TDE is enabled, you cannot disable TDE.
 *
 * @param request ModifyDBClusterTDERequest
 * @return ModifyDBClusterTDEResponse
 */
ModifyDBClusterTDEResponse Client::modifyDBClusterTDE(const ModifyDBClusterTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterTDEWithOptions(request, runtime);
}

/**
 * @summary 修改集群VSwitch参数
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
 * @summary 修改集群VSwitch参数
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
 * @summary 修改PolarDB边缘云集群数据库描述
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
 * @summary 修改PolarDB边缘云集群数据库描述
 *
 * @param request ModifyDBDescriptionZonalRequest
 * @return ModifyDBDescriptionZonalResponse
 */
ModifyDBDescriptionZonalResponse Client::modifyDBDescriptionZonal(const ModifyDBDescriptionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBDescriptionZonalWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, custom cluster endpoint, and private domain name.
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
 * @summary Modifies the endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, custom cluster endpoint, and private domain name.
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
 * @param request ModifyDBNodeConfigRequest
 * @return ModifyDBNodeConfigResponse
 */
ModifyDBNodeConfigResponse Client::modifyDBNodeConfig(const ModifyDBNodeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeConfigWithOptions(request, runtime);
}

/**
 * @summary 修改物理节点描述
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
 * @summary 修改物理节点描述
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
 * @summary 修改节点的Scc
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
 * @summary 修改节点的Scc
 *
 * @param request ModifyDBNodeSccModeRequest
 * @return ModifyDBNodeSccModeResponse
 */
ModifyDBNodeSccModeResponse Client::modifyDBNodeSccMode(const ModifyDBNodeSccModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeSccModeWithOptions(request, runtime);
}

/**
 * @summary Changes the specifications of a node in a PolarDB cluster.
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
 * @summary Changes the specifications of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodesClassRequest
 * @return ModifyDBNodesClassResponse
 */
ModifyDBNodesClassResponse Client::modifyDBNodesClass(const ModifyDBNodesClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodesClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameters of a node and applies them to specified nodes.
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
 * @summary Modifies the parameters of a node and applies them to specified nodes.
 *
 * @param request ModifyDBNodesParametersRequest
 * @return ModifyDBNodesParametersResponse
 */
ModifyDBNodesParametersResponse Client::modifyDBNodesParameters(const ModifyDBNodesParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodesParametersWithOptions(request, runtime);
}

/**
 * @summary 变更角色权限
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
 * @summary 变更角色权限
 *
 * @param request ModifyEncryptionDBRolePrivilegeRequest
 * @return ModifyEncryptionDBRolePrivilegeResponse
 */
ModifyEncryptionDBRolePrivilegeResponse Client::modifyEncryptionDBRolePrivilege(const ModifyEncryptionDBRolePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEncryptionDBRolePrivilegeWithOptions(request, runtime);
}

/**
 * @summary 变更加密策略
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
 * @summary 变更加密策略
 *
 * @param request ModifyEncryptionDBSecretRequest
 * @return ModifyEncryptionDBSecretResponse
 */
ModifyEncryptionDBSecretResponse Client::modifyEncryptionDBSecret(const ModifyEncryptionDBSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEncryptionDBSecretWithOptions(request, runtime);
}

/**
 * @summary 修改sql防火墙配置
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
 * @summary 修改sql防火墙配置
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
 * @summary Modifies an IP whitelist template.
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
 * @summary Modifies an IP whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRequest
 * @return ModifyGlobalSecurityIPGroupResponse
 */
ModifyGlobalSecurityIPGroupResponse Client::modifyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a global IP whitelist template.
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
 * @summary Modifies the name of a global IP whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupNameRequest
 * @return ModifyGlobalSecurityIPGroupNameResponse
 */
ModifyGlobalSecurityIPGroupNameResponse Client::modifyGlobalSecurityIPGroupName(const ModifyGlobalSecurityIPGroupNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the relationship between a cluster and a global IP whitelist template.
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
 * @summary Modifies the relationship between a cluster and a global IP whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRelationRequest
 * @return ModifyGlobalSecurityIPGroupRelationResponse
 */
ModifyGlobalSecurityIPGroupRelationResponse Client::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Modifies the retention policy of the log backups in a PolarDB cluster.
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
 * @summary Modifies the retention policy of the log backups in a PolarDB cluster.
 *
 * @param request ModifyLogBackupPolicyRequest
 * @return ModifyLogBackupPolicyResponse
 */
ModifyLogBackupPolicyResponse Client::modifyLogBackupPolicy(const ModifyLogBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies or adds a data masking rule.
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
 * @summary Modifies or adds a data masking rule.
 *
 * @param request ModifyMaskingRulesRequest
 * @return ModifyMaskingRulesResponse
 */
ModifyMaskingRulesResponse Client::modifyMaskingRules(const ModifyMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaskingRulesWithOptions(request, runtime);
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
 * @summary 配置资源包
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
 * @summary 配置资源包
 *
 * @param request ModifyResourcePackageRequest
 * @return ModifyResourcePackageResponse
 */
ModifyResourcePackageResponse Client::modifyResourcePackage(const ModifyResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourcePackageWithOptions(request, runtime);
}

/**
 * @summary 修改SQL限流规则
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
 * @summary 修改SQL限流规则
 *
 * @param request ModifySQLRateLimitingRulesRequest
 * @return ModifySQLRateLimitingRulesResponse
 */
ModifySQLRateLimitingRulesResponse Client::modifySQLRateLimitingRules(const ModifySQLRateLimitingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQLRateLimitingRulesWithOptions(request, runtime);
}

/**
 * @summary 修改目标计划任务
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
 * @summary 修改目标计划任务
 *
 * @param request ModifyScheduleTaskRequest
 * @return ModifyScheduleTaskResponse
 */
ModifyScheduleTaskResponse Client::modifyScheduleTask(const ModifyScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduleTaskWithOptions(request, runtime);
}

/**
 * @summary Enables the PolarDB for AI feature for a cluster.
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
 * @summary Enables the PolarDB for AI feature for a cluster.
 *
 * @param request OpenAITaskRequest
 * @return OpenAITaskResponse
 */
OpenAITaskResponse Client::openAITask(const OpenAITaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openAITaskWithOptions(request, runtime);
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
 * @summary Updates the storage usage of a cluster.
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
 * @summary Updates the storage usage of a cluster.
 *
 * @param request RefreshDBClusterStorageUsageRequest
 * @return RefreshDBClusterStorageUsageResponse
 */
RefreshDBClusterStorageUsageResponse Client::refreshDBClusterStorageUsage(const RefreshDBClusterStorageUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDBClusterStorageUsageWithOptions(request, runtime);
}

/**
 * @summary Removes a secondary cluster from a GDN.
 *
 * @description >  You cannot remove the primary cluster from a GDN.
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
 * @summary Removes a secondary cluster from a GDN.
 *
 * @description >  You cannot remove the primary cluster from a GDN.
 *
 * @param request RemoveDBClusterFromGDNRequest
 * @return RemoveDBClusterFromGDNResponse
 */
RemoveDBClusterFromGDNResponse Client::removeDBClusterFromGDN(const RemoveDBClusterFromGDNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDBClusterFromGDNWithOptions(request, runtime);
}

/**
 * @summary Resets the permissions of a privileged account for a PolarDB cluster.
 *
 * @description >- Only PolarDB for MySQL clusters support this operation.
 * >- If the privileged account of your cluster encounters exceptions, you can call this operation to reset the permissions. For example, the permissions are accidentally revoked.
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
 * @description >- Only PolarDB for MySQL clusters support this operation.
 * >- If the privileged account of your cluster encounters exceptions, you can call this operation to reset the permissions. For example, the permissions are accidentally revoked.
 *
 * @param request ResetAccountRequest
 * @return ResetAccountResponse
 */
ResetAccountResponse Client::resetAccount(const ResetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountWithOptions(request, runtime);
}

/**
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
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary 重置PolarDB边缘集群账号
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
 * @summary 重置PolarDB边缘集群账号
 *
 * @param request ResetAccountZonalRequest
 * @return ResetAccountZonalResponse
 */
ResetAccountZonalResponse Client::resetAccountZonal(const ResetAccountZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountZonalWithOptions(request, runtime);
}

/**
 * @summary Rebuilds a secondary cluster in a Global Database Network (GDN).
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
 * @summary Rebuilds a secondary cluster in a Global Database Network (GDN).
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
 * @summary Restarts a node in a PolarDB cluster.
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
 * @summary Restarts a node in a PolarDB cluster.
 *
 * @param request RestartDBNodeRequest
 * @return RestartDBNodeResponse
 */
RestartDBNodeResponse Client::restartDBNode(const RestartDBNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBNodeWithOptions(request, runtime);
}

/**
 * @summary 重启poalrdb边缘云集群节点
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
 * @summary 重启poalrdb边缘云集群节点
 *
 * @param request RestartDBNodeZonalRequest
 * @return RestartDBNodeZonalResponse
 */
RestartDBNodeZonalResponse Client::restartDBNodeZonal(const RestartDBNodeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBNodeZonalWithOptions(request, runtime);
}

/**
 * @summary Restores PolarDB databases and tables.
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
 * @summary Restores PolarDB databases and tables.
 *
 * @param request RestoreTableRequest
 * @return RestoreTableResponse
 */
RestoreTableResponse Client::restoreTable(const RestoreTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreTableWithOptions(request, runtime);
}

/**
 * @summary Revokes the access permissions on one or more databases from a specified PolarDB standard account.
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
 * @summary Revokes the access permissions on one or more databases from a specified PolarDB standard account.
 *
 * @param request RevokeAccountPrivilegeRequest
 * @return RevokeAccountPrivilegeResponse
 */
RevokeAccountPrivilegeResponse Client::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 撤销账号权限
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
 * @summary 撤销账号权限
 *
 * @param request RevokeAccountPrivilegeZonalRequest
 * @return RevokeAccountPrivilegeZonalResponse
 */
RevokeAccountPrivilegeZonalResponse Client::revokeAccountPrivilegeZonal(const RevokeAccountPrivilegeZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAccountPrivilegeZonalWithOptions(request, runtime);
}

/**
 * @summary 为目录应用配额规则
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
 * @summary 为目录应用配额规则
 *
 * @param request SetPolarFsFileQuotaRequest
 * @return SetPolarFsFileQuotaResponse
 */
SetPolarFsFileQuotaResponse Client::setPolarFsFileQuota(const SetPolarFsFileQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolarFsFileQuotaWithOptions(request, runtime);
}

/**
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
 * @param request SwitchOverGlobalDatabaseNetworkRequest
 * @return SwitchOverGlobalDatabaseNetworkResponse
 */
SwitchOverGlobalDatabaseNetworkResponse Client::switchOverGlobalDatabaseNetwork(const SwitchOverGlobalDatabaseNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchOverGlobalDatabaseNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates tags for a PolarDB cluster.
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
 * @summary Creates tags for a PolarDB cluster.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Temporarily changes the node configurations.
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
 * @summary Temporarily changes the node configurations.
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
 * @description > 
 * *   PolarDB clusters support the subscription and pay-as-you-go billing methods. You can change the billing method from subscription to pay-as-you-go or from pay-as-you-go to subscription based on your business requirements. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
 * *   You cannot change the billing method from pay-as-you-go to subscription if your account balance is insufficient.
 * *   If you change the billing method from subscription to pay-as-you-go, the system automatically refunds the balance of the prepaid subscription fees.
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
 * @description > 
 * *   PolarDB clusters support the subscription and pay-as-you-go billing methods. You can change the billing method from subscription to pay-as-you-go or from pay-as-you-go to subscription based on your business requirements. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
 * *   You cannot change the billing method from pay-as-you-go to subscription if your account balance is insufficient.
 * *   If you change the billing method from subscription to pay-as-you-go, the system automatically refunds the balance of the prepaid subscription fees.
 *
 * @param request TransformDBClusterPayTypeRequest
 * @return TransformDBClusterPayTypeResponse
 */
TransformDBClusterPayTypeResponse Client::transformDBClusterPayType(const TransformDBClusterPayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformDBClusterPayTypeWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from PolarDB clusters.
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
 * @summary Unbinds tags from PolarDB clusters.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 更新插件
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
 * @summary 更新插件
 *
 * @param request UpdateExtensionsRequest
 * @return UpdateExtensionsResponse
 */
UpdateExtensionsResponse Client::updateExtensions(const UpdateExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExtensionsWithOptions(request, runtime);
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
 * @summary PolarDB边缘云集群小版本升级
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
 * @summary PolarDB边缘云集群小版本升级
 *
 * @param request UpgradeDBClusterVersionZonalRequest
 * @return UpgradeDBClusterVersionZonalResponse
 */
UpgradeDBClusterVersionZonalResponse Client::upgradeDBClusterVersionZonal(const UpgradeDBClusterVersionZonalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBClusterVersionZonalWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Polardb20170801