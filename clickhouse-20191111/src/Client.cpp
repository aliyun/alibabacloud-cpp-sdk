#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20191111.hpp>
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
using namespace AlibabaCloud::Clickhouse20191111::Models;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{

AlibabaCloud::Clickhouse20191111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "clickhouse.aliyuncs.com"},
    {"ap-southeast-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-gov-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "clickhouse.aliyuncs.com"},
    {"cn-edge-1" , "clickhouse.aliyuncs.com"},
    {"cn-fujian" , "clickhouse.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-finance" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "clickhouse.aliyuncs.com"},
    {"cn-hongkong" , "clickhouse.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "clickhouse.aliyuncs.com"},
    {"cn-north-2-gov-1" , "clickhouse.aliyuncs.com"},
    {"cn-qingdao" , "clickhouse.aliyuncs.com"},
    {"cn-qingdao-nebula" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-inner" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-inner" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "clickhouse.aliyuncs.com"},
    {"cn-wuhan" , "clickhouse.aliyuncs.com"},
    {"cn-yushanfang" , "clickhouse.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "clickhouse.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "clickhouse.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "clickhouse.aliyuncs.com"},
    {"eu-west-1-oxs" , "clickhouse.aliyuncs.com"},
    {"me-east-1" , "clickhouse.aliyuncs.com"},
    {"rus-west-1-pop" , "clickhouse.aliyuncs.com"},
    {"us-east-1" , "clickhouse.aliyuncs.com"},
    {"us-west-1" , "clickhouse.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("clickhouse", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a public endpoint for an ApsaraDB for ClickHouse cluster.
 *
 * @param request AllocateClusterPublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateClusterPublicConnectionResponse
 */
AllocateClusterPublicConnectionResponse Client::allocateClusterPublicConnectionWithOptions(const AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateClusterPublicConnection"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateClusterPublicConnectionResponse>();
}

/**
 * @summary Creates a public endpoint for an ApsaraDB for ClickHouse cluster.
 *
 * @param request AllocateClusterPublicConnectionRequest
 * @return AllocateClusterPublicConnectionResponse
 */
AllocateClusterPublicConnectionResponse Client::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary 取消预约重启
 *
 * @param request CancelRestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRestartInstanceResponse
 */
CancelRestartInstanceResponse Client::cancelRestartInstanceWithOptions(const CancelRestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRestartTime()) {
    query["RestartTime"] = request.restartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRestartInstance"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRestartInstanceResponse>();
}

/**
 * @summary 取消预约重启
 *
 * @param request CancelRestartInstanceRequest
 * @return CancelRestartInstanceResponse
 */
CancelRestartInstanceResponse Client::cancelRestartInstance(const CancelRestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRestartInstanceWithOptions(request, runtime);
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
 *
 * @param request CheckClickhouseToRDSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckClickhouseToRDSResponse
 */
CheckClickhouseToRDSResponse Client::checkClickhouseToRDSWithOptions(const CheckClickhouseToRDSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCkPassword()) {
    query["CkPassword"] = request.ckPassword();
  }

  if (!!request.hasCkUserName()) {
    query["CkUserName"] = request.ckUserName();
  }

  if (!!request.hasClickhousePort()) {
    query["ClickhousePort"] = request.clickhousePort();
  }

  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRdsId()) {
    query["RdsId"] = request.rdsId();
  }

  if (!!request.hasRdsPassword()) {
    query["RdsPassword"] = request.rdsPassword();
  }

  if (!!request.hasRdsPort()) {
    query["RdsPort"] = request.rdsPort();
  }

  if (!!request.hasRdsUserName()) {
    query["RdsUserName"] = request.rdsUserName();
  }

  if (!!request.hasRdsVpcId()) {
    query["RdsVpcId"] = request.rdsVpcId();
  }

  if (!!request.hasRdsVpcUrl()) {
    query["RdsVpcUrl"] = request.rdsVpcUrl();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckClickhouseToRDS"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckClickhouseToRDSResponse>();
}

/**
 * @summary Checks the connectivity between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
 *
 * @param request CheckClickhouseToRDSRequest
 * @return CheckClickhouseToRDSResponse
 */
CheckClickhouseToRDSResponse Client::checkClickhouseToRDS(const CheckClickhouseToRDSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkClickhouseToRDSWithOptions(request, runtime);
}

/**
 * @summary Queries whether an ApsaraDB for ClickHouse cluster needs to be restarted after you change the values of the configuration parameters in XML mode.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request CheckModifyConfigNeedRestartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckModifyConfigNeedRestartResponse
 */
CheckModifyConfigNeedRestartResponse Client::checkModifyConfigNeedRestartWithOptions(const CheckModifyConfigNeedRestartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckModifyConfigNeedRestart"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckModifyConfigNeedRestartResponse>();
}

/**
 * @summary Queries whether an ApsaraDB for ClickHouse cluster needs to be restarted after you change the values of the configuration parameters in XML mode.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request CheckModifyConfigNeedRestartRequest
 * @return CheckModifyConfigNeedRestartResponse
 */
CheckModifyConfigNeedRestartResponse Client::checkModifyConfigNeedRestart(const CheckModifyConfigNeedRestartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkModifyConfigNeedRestartWithOptions(request, runtime);
}

/**
 * @summary Checks whether the monitoring and alerting feature that is provided by Application Real-Time Monitoring Service (ARMS) is enabled for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CheckMonitorAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMonitorAlertResponse
 */
CheckMonitorAlertResponse Client::checkMonitorAlertWithOptions(const CheckMonitorAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckMonitorAlert"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMonitorAlertResponse>();
}

/**
 * @summary Checks whether the monitoring and alerting feature that is provided by Application Real-Time Monitoring Service (ARMS) is enabled for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CheckMonitorAlertRequest
 * @return CheckMonitorAlertResponse
 */
CheckMonitorAlertResponse Client::checkMonitorAlert(const CheckMonitorAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMonitorAlertWithOptions(request, runtime);
}

/**
 * @summary Performs migration and scale-out detection on an ApsaraDB for ClickHouse cluster.
 *
 * @param request CheckScaleOutBalancedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckScaleOutBalancedResponse
 */
CheckScaleOutBalancedResponse Client::checkScaleOutBalancedWithOptions(const CheckScaleOutBalancedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckScaleOutBalanced"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckScaleOutBalancedResponse>();
}

/**
 * @summary Performs migration and scale-out detection on an ApsaraDB for ClickHouse cluster.
 *
 * @param request CheckScaleOutBalancedRequest
 * @return CheckScaleOutBalancedResponse
 */
CheckScaleOutBalancedResponse Client::checkScaleOutBalanced(const CheckScaleOutBalancedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkScaleOutBalancedWithOptions(request, runtime);
}

/**
 * @summary Queries the service-linked role of ApsaraDB for ClickHouse.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRoleWithOptions(const CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the service-linked role of ApsaraDB for ClickHouse.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a database account for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2019-11-11"},
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
 * @summary Creates a database account for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates an account and grants permissions to the account.
 *
 * @param request CreateAccountAndAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountAndAuthorityResponse
 */
CreateAccountAndAuthorityResponse Client::createAccountAndAuthorityWithOptions(const CreateAccountAndAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasAllowDatabases()) {
    query["AllowDatabases"] = request.allowDatabases();
  }

  if (!!request.hasAllowDictionaries()) {
    query["AllowDictionaries"] = request.allowDictionaries();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDdlAuthority()) {
    query["DdlAuthority"] = request.ddlAuthority();
  }

  if (!!request.hasDmlAuthority()) {
    query["DmlAuthority"] = request.dmlAuthority();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTotalDatabases()) {
    query["TotalDatabases"] = request.totalDatabases();
  }

  if (!!request.hasTotalDictionaries()) {
    query["TotalDictionaries"] = request.totalDictionaries();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccountAndAuthority"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountAndAuthorityResponse>();
}

/**
 * @summary Creates an account and grants permissions to the account.
 *
 * @param request CreateAccountAndAuthorityRequest
 * @return CreateAccountAndAuthorityResponse
 */
CreateAccountAndAuthorityResponse Client::createAccountAndAuthority(const CreateAccountAndAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountAndAuthorityWithOptions(request, runtime);
}

/**
 * @summary Creates a backup policy.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request CreateBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPolicyResponse
 */
CreateBackupPolicyResponse Client::createBackupPolicyWithOptions(const CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupPolicy"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupPolicyResponse>();
}

/**
 * @summary Creates a backup policy.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request CreateBackupPolicyRequest
 * @return CreateBackupPolicyResponse
 */
CreateBackupPolicyResponse Client::createBackupPolicy(const CreateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for ClickHouse cluster.
 *
 * @description Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
 *
 * @param request CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBackupSetID()) {
    query["BackupSetID"] = request.backupSetID();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterCategory()) {
    query["DBClusterCategory"] = request.DBClusterCategory();
  }

  if (!!request.hasDBClusterClass()) {
    query["DBClusterClass"] = request.DBClusterClass();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterNetworkType()) {
    query["DBClusterNetworkType"] = request.DBClusterNetworkType();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
  }

  if (!!request.hasDBNodeGroupCount()) {
    query["DBNodeGroupCount"] = request.DBNodeGroupCount();
  }

  if (!!request.hasDBNodeStorage()) {
    query["DBNodeStorage"] = request.DBNodeStorage();
  }

  if (!!request.hasDbNodeStorageType()) {
    query["DbNodeStorageType"] = request.dbNodeStorageType();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.encryptionKey();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.encryptionType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceDBClusterId()) {
    query["SourceDBClusterId"] = request.sourceDBClusterId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchBak()) {
    query["VSwitchBak"] = request.vSwitchBak();
  }

  if (!!request.hasVSwitchBak2()) {
    query["VSwitchBak2"] = request.vSwitchBak2();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZondIdBak2()) {
    query["ZondIdBak2"] = request.zondIdBak2();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  if (!!request.hasZoneIdBak()) {
    query["ZoneIdBak"] = request.zoneIdBak();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceResponse>();
}

/**
 * @summary Creates an ApsaraDB for ClickHouse cluster.
 *
 * @description Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a monitoring data report for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CreateMonitorDataReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorDataReportResponse
 */
CreateMonitorDataReportResponse Client::createMonitorDataReportWithOptions(const CreateMonitorDataReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorDataReport"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorDataReportResponse>();
}

/**
 * @summary Creates a monitoring data report for an ApsaraDB for ClickHouse cluster.
 *
 * @param request CreateMonitorDataReportRequest
 * @return CreateMonitorDataReportResponse
 */
CreateMonitorDataReportResponse Client::createMonitorDataReport(const CreateMonitorDataReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorDataReportWithOptions(request, runtime);
}

/**
 * @summary Creates a storage task for cold data.
 *
 * @description Only an ApsaraDB for ClickHouse cluster of V20.8 or later supports tiered storage of hot data and cold data. If your data is in an ApsaraDB for ClickHouse cluster of a version earlier than V20.8 and you want to use tiered storage of hot data and cold data to store the data, you can migrate the data to an ApsaraDB for ClickHouse cluster of V20.8 or later and use tiered storage of hot data and cold data. For more information about how to migrate data between ApsaraDB for ClickHouse clusters, see [Migrate data between ApsaraDB for ClickHouse clusters](https://help.aliyun.com/document_detail/276926.html).
 *
 * @param request CreateOSSStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOSSStorageResponse
 */
CreateOSSStorageResponse Client::createOSSStorageWithOptions(const CreateOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOSSStorage"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOSSStorageResponse>();
}

/**
 * @summary Creates a storage task for cold data.
 *
 * @description Only an ApsaraDB for ClickHouse cluster of V20.8 or later supports tiered storage of hot data and cold data. If your data is in an ApsaraDB for ClickHouse cluster of a version earlier than V20.8 and you want to use tiered storage of hot data and cold data to store the data, you can migrate the data to an ApsaraDB for ClickHouse cluster of V20.8 or later and use tiered storage of hot data and cold data. For more information about how to migrate data between ApsaraDB for ClickHouse clusters, see [Migrate data between ApsaraDB for ClickHouse clusters](https://help.aliyun.com/document_detail/276926.html).
 *
 * @param request CreateOSSStorageRequest
 * @return CreateOSSStorageResponse
 */
CreateOSSStorageResponse Client::createOSSStorage(const CreateOSSStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOSSStorageWithOptions(request, runtime);
}

/**
 * @summary Enables the MySQL port for an ApsaraDB for ClickHouse cluster.
 *
 * @description >  For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created before December 1, 2021, you must manually enable the MySQL port. For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created after December 1, 2021, the MySQL port is automatically enabled.
 *
 * @param request CreatePortsForClickHouseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePortsForClickHouseResponse
 */
CreatePortsForClickHouseResponse Client::createPortsForClickHouseWithOptions(const CreatePortsForClickHouseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPortType()) {
    query["PortType"] = request.portType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePortsForClickHouse"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePortsForClickHouseResponse>();
}

/**
 * @summary Enables the MySQL port for an ApsaraDB for ClickHouse cluster.
 *
 * @description >  For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created before December 1, 2021, you must manually enable the MySQL port. For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created after December 1, 2021, the MySQL port is automatically enabled.
 *
 * @param request CreatePortsForClickHouseRequest
 * @return CreatePortsForClickHouseResponse
 */
CreatePortsForClickHouseResponse Client::createPortsForClickHouse(const CreatePortsForClickHouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPortsForClickHouseWithOptions(request, runtime);
}

/**
 * @summary Creates a task to synchronize data from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is only applicable to ApsaraDB for ClickHouse clusters.
 *
 * @param request CreateRDSToClickhouseDbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRDSToClickhouseDbResponse
 */
CreateRDSToClickhouseDbResponse Client::createRDSToClickhouseDbWithOptions(const CreateRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCkPassword()) {
    query["CkPassword"] = request.ckPassword();
  }

  if (!!request.hasCkUserName()) {
    query["CkUserName"] = request.ckUserName();
  }

  if (!!request.hasClickhousePort()) {
    query["ClickhousePort"] = request.clickhousePort();
  }

  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasLimitUpper()) {
    query["LimitUpper"] = request.limitUpper();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRdsId()) {
    query["RdsId"] = request.rdsId();
  }

  if (!!request.hasRdsPassword()) {
    query["RdsPassword"] = request.rdsPassword();
  }

  if (!!request.hasRdsPort()) {
    query["RdsPort"] = request.rdsPort();
  }

  if (!!request.hasRdsUserName()) {
    query["RdsUserName"] = request.rdsUserName();
  }

  if (!!request.hasRdsVpcId()) {
    query["RdsVpcId"] = request.rdsVpcId();
  }

  if (!!request.hasRdsVpcUrl()) {
    query["RdsVpcUrl"] = request.rdsVpcUrl();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSkipUnsupported()) {
    query["SkipUnsupported"] = request.skipUnsupported();
  }

  if (!!request.hasSynDbTables()) {
    query["SynDbTables"] = request.synDbTables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRDSToClickhouseDb"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRDSToClickhouseDbResponse>();
}

/**
 * @summary Creates a task to synchronize data from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is only applicable to ApsaraDB for ClickHouse clusters.
 *
 * @param request CreateRDSToClickhouseDbRequest
 * @return CreateRDSToClickhouseDbResponse
 */
CreateRDSToClickhouseDbResponse Client::createRDSToClickhouseDb(const CreateRDSToClickhouseDbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRDSToClickhouseDbWithOptions(request, runtime);
}

/**
 * @summary Mounts a Server Load Balancer (SLB) instance to an ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Description
 * An ApsaraDB for ClickHouse cluster is dependent on an SLB instance at the network layer. You can bind a domain name to the IP address of an ApsaraDB for ClickHouse node to provide external connectivity service and provide failover capabilities. The SLB instance forwards requests to the nodes in the ApsaraDB for ClickHouse cluster and balances the request traffic among the nodes. The SLB instance checks the availability of backend nodes. If the SLB instance detects that a node is unavailable by checking the health status of all nodes, the SLB instance automatically isolates the unavailable node. This ensures that the request traffic is balanced among available nodes.
 *
 * @param request CreateSLBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSLBResponse
 */
CreateSLBResponse Client::createSLBWithOptions(const CreateSLBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSLB"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSLBResponse>();
}

/**
 * @summary Mounts a Server Load Balancer (SLB) instance to an ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Description
 * An ApsaraDB for ClickHouse cluster is dependent on an SLB instance at the network layer. You can bind a domain name to the IP address of an ApsaraDB for ClickHouse node to provide external connectivity service and provide failover capabilities. The SLB instance forwards requests to the nodes in the ApsaraDB for ClickHouse cluster and balances the request traffic among the nodes. The SLB instance checks the availability of backend nodes. If the SLB instance detects that a node is unavailable by checking the health status of all nodes, the SLB instance automatically isolates the unavailable node. This ensures that the request traffic is balanced among available nodes.
 *
 * @param request CreateSLBRequest
 * @return CreateSLBResponse
 */
CreateSLBResponse Client::createSLB(const CreateSLBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSLBWithOptions(request, runtime);
}

/**
 * @summary Creates a privileged account or a standard account for an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters of V20.8 or later that were created after December 1, 2021,
 *
 * @param request CreateSQLAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSQLAccountResponse
 */
CreateSQLAccountResponse Client::createSQLAccountWithOptions(const CreateSQLAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSQLAccount"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSQLAccountResponse>();
}

/**
 * @summary Creates a privileged account or a standard account for an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters of V20.8 or later that were created after December 1, 2021,
 *
 * @param request CreateSQLAccountRequest
 * @return CreateSQLAccountResponse
 */
CreateSQLAccountResponse Client::createSQLAccount(const CreateSQLAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSQLAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2019-11-11"},
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
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  After you delete a database account, you cannot use the account to log on to the ApsaraDB for ClickHouse cluster. Exercise caution when performing this operation.
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2019-11-11"},
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
 * @summary Deletes a database account of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  After you delete a database account, you cannot use the account to log on to the ApsaraDB for ClickHouse cluster. Exercise caution when performing this operation.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary 删除备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicyWithOptions(const DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupPolicy"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupPolicyResponse>();
}

/**
 * @summary 删除备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicy(const DeleteBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go ApsaraDB for ClickHouse cluster.
 *
 * @description **Warning** After an ApsaraDB for ClickHouse cluster is deleted, all data in the cluster is deleted and cannot be recovered. Exercise caution when performing this operation.
 *
 * @param request DeleteDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBClusterWithOptions(const DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBCluster"},
    {"version" , "2019-11-11"},
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
 * @summary Releases a pay-as-you-go ApsaraDB for ClickHouse cluster.
 *
 * @description **Warning** After an ApsaraDB for ClickHouse cluster is deleted, all data in the cluster is deleted and cannot be recovered. Exercise caution when performing this operation.
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Removes a Server Load Balancer (SLB) instance from an ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Description
 * After an SLB instance is released, simple load balancing is performed on inbound traffic based on the domain name. The health status of all nodes is no longer checked. As a result, unavailable nodes may fail to be detected, and normal requests may be routed to the unavailable nodes. This causes the failures of some read and write requests.
 *
 * @param request DeleteSLBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSLBResponse
 */
DeleteSLBResponse Client::deleteSLBWithOptions(const DeleteSLBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSLB"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSLBResponse>();
}

/**
 * @summary Removes a Server Load Balancer (SLB) instance from an ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Description
 * After an SLB instance is released, simple load balancing is performed on inbound traffic based on the domain name. The health status of all nodes is no longer checked. As a result, unavailable nodes may fail to be detected, and normal requests may be routed to the unavailable nodes. This causes the failures of some read and write requests.
 *
 * @param request DeleteSLBRequest
 * @return DeleteSLBResponse
 */
DeleteSLBResponse Client::deleteSLB(const DeleteSLBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSLBWithOptions(request, runtime);
}

/**
 * @summary Deletes a database used for data synchronization.
 *
 * @param request DeleteSyndbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSyndbResponse
 */
DeleteSyndbResponse Client::deleteSyndbWithOptions(const DeleteSyndbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSynDb()) {
    query["SynDb"] = request.synDb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSyndb"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSyndbResponse>();
}

/**
 * @summary Deletes a database used for data synchronization.
 *
 * @param request DeleteSyndbRequest
 * @return DeleteSyndbResponse
 */
DeleteSyndbResponse Client::deleteSyndb(const DeleteSyndbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSyndbWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of an account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthorityWithOptions(const DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountAuthority"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountAuthorityResponse>();
}

/**
 * @summary Queries the permissions of an account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthority(const DescribeAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the database accounts of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the information about the database accounts of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases, tables, and columns in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAllDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSourceWithOptions(const DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDataSource"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllDataSourceResponse>();
}

/**
 * @summary Queries a list of databases, tables, and columns in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAllDataSourceRequest
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSource(const DescribeAllDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the data sources of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAllDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDataSourcesResponse
 */
DescribeAllDataSourcesResponse Client::describeAllDataSourcesWithOptions(const DescribeAllDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDataSources"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllDataSourcesResponse>();
}

/**
 * @summary Queries the data sources of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAllDataSourcesRequest
 * @return DescribeAllDataSourcesResponse
 */
DescribeAllDataSourcesResponse Client::describeAllDataSources(const DescribeAllDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourcesWithOptions(request, runtime);
}

/**
 * @param request DescribeAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttributeWithOptions(const DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoRenewAttribute"},
    {"version" , "2019-11-11"},
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
 * @param request DescribeAutoRenewAttributeRequest
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the backup settings of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the backup settings of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the backup sets of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for ApsaraDB for ClickHouse clusters of version 21.8 and later.
 *
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the backup sets of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for ApsaraDB for ClickHouse clusters of version 21.8 and later.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries information about columns.
 *
 * @param request DescribeColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumnsWithOptions(const DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumns"},
    {"version" , "2019-11-11"},
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
 * @summary Queries information about columns.
 *
 * @param request DescribeColumnsRequest
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumns(const DescribeColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the change records of the configuration parameters of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeConfigHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigHistoryResponse
 */
DescribeConfigHistoryResponse Client::describeConfigHistoryWithOptions(const DescribeConfigHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigHistory"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigHistoryResponse>();
}

/**
 * @summary Queries the change records of the configuration parameters of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeConfigHistoryRequest
 * @return DescribeConfigHistoryResponse
 */
DescribeConfigHistoryResponse Client::describeConfigHistory(const DescribeConfigHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfigHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the values of the configuration parameters of an ApsaraDB for ClickHouse cluster before and after the values of the configuration parameters are changed.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeConfigVersionDifferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigVersionDifferenceResponse
 */
DescribeConfigVersionDifferenceResponse Client::describeConfigVersionDifferenceWithOptions(const DescribeConfigVersionDifferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigVersionDifference"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigVersionDifferenceResponse>();
}

/**
 * @summary Queries the values of the configuration parameters of an ApsaraDB for ClickHouse cluster before and after the values of the configuration parameters are changed.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeConfigVersionDifferenceRequest
 * @return DescribeConfigVersionDifferenceResponse
 */
DescribeConfigVersionDifferenceResponse Client::describeConfigVersionDifference(const DescribeConfigVersionDifferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfigVersionDifferenceWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterAccessWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAccessWhiteListResponse
 */
DescribeDBClusterAccessWhiteListResponse Client::describeDBClusterAccessWhiteListWithOptions(const DescribeDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAccessWhiteList"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAccessWhiteListResponse>();
}

/**
 * @summary Queries the IP address whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterAccessWhiteListRequest
 * @return DescribeDBClusterAccessWhiteListResponse
 */
DescribeDBClusterAccessWhiteListResponse Client::describeDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttributeWithOptions(const DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAttribute"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterAttributeRequest
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries information about the parameter settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterConfigResponse
 */
DescribeDBClusterConfigResponse Client::describeDBClusterConfigWithOptions(const DescribeDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterConfig"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterConfigResponse>();
}

/**
 * @summary Queries information about the parameter settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterConfigRequest
 * @return DescribeDBClusterConfigResponse
 */
DescribeDBClusterConfigResponse Client::describeDBClusterConfig(const DescribeDBClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the values of the configuration parameters in the config.xml file of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeDBClusterConfigInXMLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterConfigInXMLResponse
 */
DescribeDBClusterConfigInXMLResponse Client::describeDBClusterConfigInXMLWithOptions(const DescribeDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterConfigInXML"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterConfigInXMLResponse>();
}

/**
 * @summary Queries the values of the configuration parameters in the config.xml file of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request DescribeDBClusterConfigInXMLRequest
 * @return DescribeDBClusterConfigInXMLResponse
 */
DescribeDBClusterConfigInXMLResponse Client::describeDBClusterConfigInXML(const DescribeDBClusterConfigInXMLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConfigInXMLWithOptions(request, runtime);
}

/**
 * @summary Queries the network information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterNetInfoItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterNetInfoItemsResponse
 */
DescribeDBClusterNetInfoItemsResponse Client::describeDBClusterNetInfoItemsWithOptions(const DescribeDBClusterNetInfoItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterNetInfoItems"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterNetInfoItemsResponse>();
}

/**
 * @summary Queries the network information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBClusterNetInfoItemsRequest
 * @return DescribeDBClusterNetInfoItemsResponse
 */
DescribeDBClusterNetInfoItemsResponse Client::describeDBClusterNetInfoItems(const DescribeDBClusterNetInfoItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterNetInfoItemsWithOptions(request, runtime);
}

/**
 * @summary Queries performance data about an ApsaraDB for ClickHouse cluster.
 *
 * @description You can query the performance data of a specified cluster over a specific time range based on the performance metrics. The data is collected every 30 seconds.
 * >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created before December 1, 2021.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformanceWithOptions(const DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterPerformance"},
    {"version" , "2019-11-11"},
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
 * @summary Queries performance data about an ApsaraDB for ClickHouse cluster.
 *
 * @description You can query the performance data of a specified cluster over a specific time range based on the performance metrics. The data is collected every 30 seconds.
 * >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created before December 1, 2021.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about ApsaraDB for ClickHouse clusters in a region.
 *
 * @param request DescribeDBClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClustersWithOptions(const DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.DBClusterStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusters"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the information about ApsaraDB for ClickHouse clusters in a region.
 *
 * @param request DescribeDBClustersRequest
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClusters(const DescribeDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries configuration information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBConfigResponse
 */
DescribeDBConfigResponse Client::describeDBConfigWithOptions(const DescribeDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBConfig"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBConfigResponse>();
}

/**
 * @summary Queries configuration information about an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeDBConfigRequest
 * @return DescribeDBConfigResponse
 */
DescribeDBConfigResponse Client::describeDBConfig(const DescribeDBConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the storage of cold data.
 *
 * @param request DescribeOSSStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOSSStorageResponse
 */
DescribeOSSStorageResponse Client::describeOSSStorageWithOptions(const DescribeOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOSSStorage"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOSSStorageResponse>();
}

/**
 * @summary Queries the storage of cold data.
 *
 * @param request DescribeOSSStorageRequest
 * @return DescribeOSSStorageResponse
 */
DescribeOSSStorageResponse Client::describeOSSStorage(const DescribeOSSStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOSSStorageWithOptions(request, runtime);
}

/**
 * @summary Queries the details of queries that are being executed in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeProcessListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessListWithOptions(const DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasInitialQueryId()) {
    query["InitialQueryId"] = request.initialQueryId();
  }

  if (!!request.hasInitialUser()) {
    query["InitialUser"] = request.initialUser();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.queryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessList"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProcessListResponse>();
}

/**
 * @summary Queries the details of queries that are being executed in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeProcessListRequest
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessList(const DescribeProcessListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all regions and zones of ApsaraDB for ClickHouse clusters.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the information about all regions and zones of ApsaraDB for ClickHouse clusters.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of all databases in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSchemasResponse
 */
DescribeSchemasResponse Client::describeSchemasWithOptions(const DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSchemas"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSchemasResponse>();
}

/**
 * @summary Queries a list of all databases in an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSchemasRequest
 * @return DescribeSchemasResponse
 */
DescribeSchemasResponse Client::describeSchemas(const DescribeSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries the details about slow query logs.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.queryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the details about slow query logs.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @param request DescribeSlowLogTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrendWithOptions(const DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.queryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogTrend"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogTrendResponse>();
}

/**
 * @param request DescribeSlowLogTrendRequest
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrend(const DescribeSlowLogTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogTrendWithOptions(request, runtime);
}

/**
 * @summary Queries information about tables that are synchronized from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSynDbTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynDbTablesResponse
 */
DescribeSynDbTablesResponse Client::describeSynDbTablesWithOptions(const DescribeSynDbTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSynDb()) {
    query["SynDb"] = request.synDb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynDbTables"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynDbTablesResponse>();
}

/**
 * @summary Queries information about tables that are synchronized from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSynDbTablesRequest
 * @return DescribeSynDbTablesResponse
 */
DescribeSynDbTablesResponse Client::describeSynDbTables(const DescribeSynDbTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynDbTablesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about data synchronization between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
 *
 * @param request DescribeSynDbsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynDbsResponse
 */
DescribeSynDbsResponse Client::describeSynDbsWithOptions(const DescribeSynDbsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynDbs"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynDbsResponse>();
}

/**
 * @summary Queries the information about data synchronization between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
 *
 * @param request DescribeSynDbsRequest
 * @return DescribeSynDbsResponse
 */
DescribeSynDbsResponse Client::describeSynDbs(const DescribeSynDbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynDbsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about tables in a database of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTablesWithOptions(const DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTables"},
    {"version" , "2019-11-11"},
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
 * @summary Queries the information about tables in a database of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Queries information about data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version
 *
 * @description >  You can call this operation to query information about only data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version.
 *
 * @param request DescribeTransferHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransferHistoryResponse
 */
DescribeTransferHistoryResponse Client::describeTransferHistoryWithOptions(const DescribeTransferHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransferHistory"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransferHistoryResponse>();
}

/**
 * @summary Queries information about data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version
 *
 * @description >  You can call this operation to query information about only data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version.
 *
 * @param request DescribeTransferHistoryRequest
 * @return DescribeTransferHistoryResponse
 */
DescribeTransferHistoryResponse Client::describeTransferHistory(const DescribeTransferHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransferHistoryWithOptions(request, runtime);
}

/**
 * @summary Terminates an ongoing task.
 *
 * @param request KillProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcessWithOptions(const KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasInitialQueryId()) {
    query["InitialQueryId"] = request.initialQueryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KillProcess"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillProcessResponse>();
}

/**
 * @summary Terminates an ongoing task.
 *
 * @param request KillProcessRequest
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcess(const KillProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killProcessWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of an account.
 *
 * @param request ModifyAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthorityWithOptions(const ModifyAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAllowDatabases()) {
    query["AllowDatabases"] = request.allowDatabases();
  }

  if (!!request.hasAllowDictionaries()) {
    query["AllowDictionaries"] = request.allowDictionaries();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDdlAuthority()) {
    query["DdlAuthority"] = request.ddlAuthority();
  }

  if (!!request.hasDmlAuthority()) {
    query["DmlAuthority"] = request.dmlAuthority();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTotalDatabases()) {
    query["TotalDatabases"] = request.totalDatabases();
  }

  if (!!request.hasTotalDictionaries()) {
    query["TotalDictionaries"] = request.totalDictionaries();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountAuthority"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountAuthorityResponse>();
}

/**
 * @summary Modifies the permissions of an account.
 *
 * @param request ModifyAccountAuthorityRequest
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthority(const ModifyAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2019-11-11"},
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
 * @summary Modifies the description of a database account of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @param request ModifyAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttributeWithOptions(const ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.renewalStatus();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoRenewAttribute"},
    {"version" , "2019-11-11"},
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
 * @param request ModifyAutoRenewAttributeRequest
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup settings of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2019-11-11"},
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
 * @summary Modifies the backup settings of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBClusterWithOptions(const ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterClass()) {
    query["DBClusterClass"] = request.DBClusterClass();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeGroupCount()) {
    query["DBNodeGroupCount"] = request.DBNodeGroupCount();
  }

  if (!!request.hasDBNodeStorage()) {
    query["DBNodeStorage"] = request.DBNodeStorage();
  }

  if (!!request.hasDbNodeStorageType()) {
    query["DbNodeStorageType"] = request.dbNodeStorageType();
  }

  if (!!request.hasDisableWriteWindows()) {
    query["DisableWriteWindows"] = request.disableWriteWindows();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBCluster"},
    {"version" , "2019-11-11"},
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
 * @summary Upgrades or downgrades an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterAccessWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterAccessWhiteListResponse
 */
ModifyDBClusterAccessWhiteListResponse Client::modifyDBClusterAccessWhiteListWithOptions(const ModifyDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterIPArrayAttribute()) {
    query["DBClusterIPArrayAttribute"] = request.DBClusterIPArrayAttribute();
  }

  if (!!request.hasDBClusterIPArrayName()) {
    query["DBClusterIPArrayName"] = request.DBClusterIPArrayName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.securityIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterAccessWhiteList"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterAccessWhiteListResponse>();
}

/**
 * @summary Modifies the IP address whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterAccessWhiteListRequest
 * @return ModifyDBClusterAccessWhiteListResponse
 */
ModifyDBClusterAccessWhiteListResponse Client::modifyDBClusterAccessWhiteList(const ModifyDBClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterConfigResponse
 */
ModifyDBClusterConfigResponse Client::modifyDBClusterConfigWithOptions(const ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserConfig()) {
    query["UserConfig"] = request.userConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterConfig"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterConfigResponse>();
}

/**
 * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterConfigRequest
 * @return ModifyDBClusterConfigResponse
 */
ModifyDBClusterConfigResponse Client::modifyDBClusterConfig(const ModifyDBClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Changes the configuration parameters of an ApsaraDB for ClickHouse cluster that runs Community-compatible Edition.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request ModifyDBClusterConfigInXMLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterConfigInXMLResponse
 */
ModifyDBClusterConfigInXMLResponse Client::modifyDBClusterConfigInXMLWithOptions(const ModifyDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterConfigInXML"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterConfigInXMLResponse>();
}

/**
 * @summary Changes the configuration parameters of an ApsaraDB for ClickHouse cluster that runs Community-compatible Edition.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
 *
 * @param request ModifyDBClusterConfigInXMLRequest
 * @return ModifyDBClusterConfigInXMLResponse
 */
ModifyDBClusterConfigInXMLResponse Client::modifyDBClusterConfigInXML(const ModifyDBClusterConfigInXMLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterConfigInXMLWithOptions(request, runtime);
}

/**
 * @summary Changes the name of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescriptionWithOptions(const ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterDescription"},
    {"version" , "2019-11-11"},
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
 * @summary Changes the name of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTimeWithOptions(const ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.maintainTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMaintainTime"},
    {"version" , "2019-11-11"},
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
 * @summary Modifies the maintenance window of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the dictionary configuration of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBConfigResponse
 */
ModifyDBConfigResponse Client::modifyDBConfigWithOptions(const ModifyDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBConfig"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBConfigResponse>();
}

/**
 * @summary Modifies the dictionary configuration of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBConfigRequest
 * @return ModifyDBConfigResponse
 */
ModifyDBConfigResponse Client::modifyDBConfig(const ModifyDBConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the type of a minor version update in ApsaraDB for ClickHouse.
 *
 * @param request ModifyMinorVersionGreadeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMinorVersionGreadeTypeResponse
 */
ModifyMinorVersionGreadeTypeResponse Client::modifyMinorVersionGreadeTypeWithOptions(const ModifyMinorVersionGreadeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMaintainAutoType()) {
    query["MaintainAutoType"] = request.maintainAutoType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMinorVersionGreadeType"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMinorVersionGreadeTypeResponse>();
}

/**
 * @summary Modifies the type of a minor version update in ApsaraDB for ClickHouse.
 *
 * @param request ModifyMinorVersionGreadeTypeRequest
 * @return ModifyMinorVersionGreadeTypeResponse
 */
ModifyMinorVersionGreadeTypeResponse Client::modifyMinorVersionGreadeType(const ModifyMinorVersionGreadeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMinorVersionGreadeTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the synchronization task of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters.
 *
 * @param request ModifyRDSToClickhouseDbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRDSToClickhouseDbResponse
 */
ModifyRDSToClickhouseDbResponse Client::modifyRDSToClickhouseDbWithOptions(const ModifyRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCkPassword()) {
    query["CkPassword"] = request.ckPassword();
  }

  if (!!request.hasCkUserName()) {
    query["CkUserName"] = request.ckUserName();
  }

  if (!!request.hasClickhousePort()) {
    query["ClickhousePort"] = request.clickhousePort();
  }

  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasLimitUpper()) {
    query["LimitUpper"] = request.limitUpper();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRdsId()) {
    query["RdsId"] = request.rdsId();
  }

  if (!!request.hasRdsPassword()) {
    query["RdsPassword"] = request.rdsPassword();
  }

  if (!!request.hasRdsPort()) {
    query["RdsPort"] = request.rdsPort();
  }

  if (!!request.hasRdsSynDb()) {
    query["RdsSynDb"] = request.rdsSynDb();
  }

  if (!!request.hasRdsSynTables()) {
    query["RdsSynTables"] = request.rdsSynTables();
  }

  if (!!request.hasRdsUserName()) {
    query["RdsUserName"] = request.rdsUserName();
  }

  if (!!request.hasRdsVpcId()) {
    query["RdsVpcId"] = request.rdsVpcId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSkipUnsupported()) {
    query["SkipUnsupported"] = request.skipUnsupported();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRDSToClickhouseDb"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRDSToClickhouseDbResponse>();
}

/**
 * @summary Modifies the synchronization task of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters.
 *
 * @param request ModifyRDSToClickhouseDbRequest
 * @return ModifyRDSToClickhouseDbResponse
 */
ModifyRDSToClickhouseDbResponse Client::modifyRDSToClickhouseDb(const ModifyRDSToClickhouseDbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRDSToClickhouseDbWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ReleaseClusterPublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseClusterPublicConnectionResponse
 */
ReleaseClusterPublicConnectionResponse Client::releaseClusterPublicConnectionWithOptions(const ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseClusterPublicConnection"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseClusterPublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ReleaseClusterPublicConnectionRequest
 * @return ReleaseClusterPublicConnectionResponse
 */
ReleaseClusterPublicConnectionResponse Client::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2019-11-11"},
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
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse cluster.
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRestartTime()) {
    query["RestartTime"] = request.restartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse cluster.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary Migrates the data of a source ApsaraDB for ClickHouse cluster to a destination ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Prerequisites
 * *   The IP address of the source ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the destination ApsaraDB for ClickHouse cluster.
 * *   The IP address of the destination ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the source ApsaraDB for ClickHouse cluster.
 * >  You can execute the `select * from system.clusters;` statement to query the IP address of an ApsaraDB for ClickHouse cluster.
 *
 * @param request TransferVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferVersionResponse
 */
TransferVersionResponse Client::transferVersionWithOptions(const TransferVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDisableWriteWindows()) {
    query["DisableWriteWindows"] = request.disableWriteWindows();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceAccount()) {
    query["SourceAccount"] = request.sourceAccount();
  }

  if (!!request.hasSourceClusterName()) {
    query["SourceClusterName"] = request.sourceClusterName();
  }

  if (!!request.hasSourcePassword()) {
    query["SourcePassword"] = request.sourcePassword();
  }

  if (!!request.hasSourceShards()) {
    query["SourceShards"] = request.sourceShards();
  }

  if (!!request.hasTargetAccount()) {
    query["TargetAccount"] = request.targetAccount();
  }

  if (!!request.hasTargetDbClusterId()) {
    query["TargetDbClusterId"] = request.targetDbClusterId();
  }

  if (!!request.hasTargetPassword()) {
    query["TargetPassword"] = request.targetPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferVersion"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferVersionResponse>();
}

/**
 * @summary Migrates the data of a source ApsaraDB for ClickHouse cluster to a destination ApsaraDB for ClickHouse cluster.
 *
 * @description ## [](#)Prerequisites
 * *   The IP address of the source ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the destination ApsaraDB for ClickHouse cluster.
 * *   The IP address of the destination ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the source ApsaraDB for ClickHouse cluster.
 * >  You can execute the `select * from system.clusters;` statement to query the IP address of an ApsaraDB for ClickHouse cluster.
 *
 * @param request TransferVersionRequest
 * @return TransferVersionResponse
 */
TransferVersionResponse Client::transferVersion(const TransferVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferVersionWithOptions(request, runtime);
}

/**
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were purchased after December 1, 2021.
 *
 * @param request UpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersionWithOptions(const UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUpgradeImmediately()) {
    query["UpgradeImmediately"] = request.upgradeImmediately();
  }

  if (!!request.hasUpgradeTime()) {
    query["UpgradeTime"] = request.upgradeTime();
  }

  if (!!request.hasUpgradeVersion()) {
    query["UpgradeVersion"] = request.upgradeVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMinorVersion"},
    {"version" , "2019-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMinorVersionResponse>();
}

/**
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster.
 *
 * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were purchased after December 1, 2021.
 *
 * @param request UpgradeMinorVersionRequest
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMinorVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Clickhouse20191111