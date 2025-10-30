#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20230522.hpp>
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
using namespace AlibabaCloud::Clickhouse20230522::Models;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{

AlibabaCloud::Clickhouse20230522::Client::Client(Config &config): OpenApiClient(config){
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-05-22"},
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
 * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param tmpReq CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAccountShrinkRequest request = CreateAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDmlAuthSetting()) {
    request.setDmlAuthSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dmlAuthSetting(), "DmlAuthSetting", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDmlAuthSettingShrink()) {
    query["DmlAuthSetting"] = request.dmlAuthSettingShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2023-05-22"},
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
 * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a backup policy for a specified ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary Creates a backup policy for a specified ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request CreateBackupPolicyRequest
 * @return CreateBackupPolicyResponse
 */
CreateBackupPolicyResponse Client::createBackupPolicy(const CreateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for ClickHouse database.
 *
 * @param request CreateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDBWithOptions(const CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDB"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResponse>();
}

/**
 * @summary Creates an ApsaraDB for ClickHouse database.
 *
 * @param request CreateDBRequest
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDB(const CreateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param tmpReq CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceShrinkRequest request = CreateDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMultiZone()) {
    request.setMultiZoneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.multiZone(), "MultiZone", "json"));
  }

  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBTimeZone()) {
    query["DBTimeZone"] = request.DBTimeZone();
  }

  if (!!request.hasDeploySchema()) {
    query["DeploySchema"] = request.deploySchema();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.engineVersion();
  }

  if (!!request.hasMultiZoneShrink()) {
    query["MultiZone"] = request.multiZoneShrink();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.nodeCount();
  }

  if (!!request.hasNodeScaleMax()) {
    query["NodeScaleMax"] = request.nodeScaleMax();
  }

  if (!!request.hasNodeScaleMin()) {
    query["NodeScaleMin"] = request.nodeScaleMin();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.scaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.scaleMin();
  }

  if (!!request.hasSourceDBInstanceId()) {
    query["SourceDBInstanceId"] = request.sourceDBInstanceId();
  }

  if (!!request.hasStorageQuota()) {
    query["StorageQuota"] = request.storageQuota();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2023-05-22"},
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
 * @summary Creates an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Applies for a public endpoint.
 *
 * @param request CreateEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpointWithOptions(const CreateEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasConnectionPrefix()) {
    query["ConnectionPrefix"] = request.connectionPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.DBInstanceNetType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEndpoint"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointResponse>();
}

/**
 * @summary Applies for a public endpoint.
 *
 * @param request CreateEndpointRequest
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpoint(const CreateEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2023-05-22"},
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
 * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary 修改备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicyWithOptions(const DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary 修改备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicy(const DeleteBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an ApsaraDB for ClickHouse database.
 *
 * @param request DeleteDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDBWithOptions(const DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDB"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResponse>();
}

/**
 * @summary Deletes an ApsaraDB for ClickHouse database.
 *
 * @param request DeleteDBRequest
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDB(const DeleteDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBWithOptions(request, runtime);
}

/**
 * @summary Releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceResponse>();
}

/**
 * @summary Releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases a public endpoint.
 *
 * @param request DeleteEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpointWithOptions(const DeleteEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.DBInstanceNetType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpoint"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointResponse>();
}

/**
 * @summary Releases a public endpoint.
 *
 * @param request DeleteEndpointRequest
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpoint(const DeleteEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of a database account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthorityWithOptions(const DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountAuthority"},
    {"version" , "2023-05-22"},
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
 * @summary Queries the permissions of a database account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthority(const DescribeAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2023-05-22"},
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
 * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary 创建备份策略
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary 创建备份策略
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询备份集
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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2023-05-22"},
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
 * @summary 查询备份集
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceAttributeResponse>();
}

/**
 * @summary Queries the details of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询实例参数配置
 *
 * @param request DescribeDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfigWithOptions(const DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConfigResponse>();
}

/**
 * @summary 查询实例参数配置
 *
 * @param request DescribeDBInstanceConfigRequest
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 查询实例参数配置记录
 *
 * @param request DescribeDBInstanceConfigChangeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigChangeLogResponse
 */
DescribeDBInstanceConfigChangeLogResponse Client::describeDBInstanceConfigChangeLogWithOptions(const DescribeDBInstanceConfigChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConfigChangeLog"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConfigChangeLogResponse>();
}

/**
 * @summary 查询实例参数配置记录
 *
 * @param request DescribeDBInstanceConfigChangeLogRequest
 * @return DescribeDBInstanceConfigChangeLogResponse
 */
DescribeDBInstanceConfigChangeLogResponse Client::describeDBInstanceConfigChangeLog(const DescribeDBInstanceConfigChangeLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigChangeLogWithOptions(request, runtime);
}

/**
 * @summary Queries the schema of a database or a table.
 *
 * @param request DescribeDBInstanceDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceDataSourcesResponse
 */
DescribeDBInstanceDataSourcesResponse Client::describeDBInstanceDataSourcesWithOptions(const DescribeDBInstanceDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDataSources"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDataSourcesResponse>();
}

/**
 * @summary Queries the schema of a database or a table.
 *
 * @param request DescribeDBInstanceDataSourcesRequest
 * @return DescribeDBInstanceDataSourcesResponse
 */
DescribeDBInstanceDataSourcesResponse Client::describeDBInstanceDataSources(const DescribeDBInstanceDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ApsaraDB for ClickHouse clusters.
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.DBInstanceIds();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.DBInstanceStatus();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesResponse>();
}

/**
 * @summary Queries a list of ApsaraDB for ClickHouse clusters.
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpointsWithOptions(const DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpoints"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointsResponse>();
}

/**
 * @summary Queries the endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeEndpointsRequest
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpoints(const DescribeEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndpointsWithOptions(request, runtime);
}

/**
 * @summary Views running queries.
 *
 * @param request DescribeProcessListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessListWithOptions(const DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.queryDurationMs();
  }

  if (!!request.hasQueryOrder()) {
    query["QueryOrder"] = request.queryOrder();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessList"},
    {"version" , "2023-05-22"},
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
 * @summary Views running queries.
 *
 * @param request DescribeProcessListRequest
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessList(const DescribeProcessListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessListWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPListWithOptions(const DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIPListResponse>();
}

/**
 * @summary Queries the whitelist of an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeSecurityIPListRequest
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPList(const DescribeSecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of slow query logs.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2023-05-22"},
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
 * @summary Queries the details of slow query logs.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of slow query logs.
 *
 * @param request DescribeSlowLogTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrendWithOptions(const DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.queryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogTrend"},
    {"version" , "2023-05-22"},
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
 * @summary Queries the trend of slow query logs.
 *
 * @param request DescribeSlowLogTrendRequest
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrend(const DescribeSlowLogTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogTrendWithOptions(request, runtime);
}

/**
 * @summary Terminates an ongoing query.
 *
 * @param request KillProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcessWithOptions(const KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasInitialQueryId()) {
    query["InitialQueryId"] = request.initialQueryId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KillProcess"},
    {"version" , "2023-05-22"},
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
 * @summary Terminates an ongoing query.
 *
 * @param request KillProcessRequest
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcess(const KillProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killProcessWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a database account.
 *
 * @param tmpReq ModifyAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthorityWithOptions(const ModifyAccountAuthorityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAccountAuthorityShrinkRequest request = ModifyAccountAuthorityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDmlAuthSetting()) {
    request.setDmlAuthSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dmlAuthSetting(), "DmlAuthSetting", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDmlAuthSettingShrink()) {
    query["DmlAuthSetting"] = request.dmlAuthSettingShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountAuthority"},
    {"version" , "2023-05-22"},
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
 * @summary Modifies the permissions of a database account.
 *
 * @param request ModifyAccountAuthorityRequest
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthority(const ModifyAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2023-05-22"},
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
 * @summary Modifies the description of a database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改备份策略
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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary 修改备份策略
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttributeWithOptions(const ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttributeType()) {
    query["AttributeType"] = request.attributeType();
  }

  if (!!request.hasAttributeValue()) {
    query["AttributeValue"] = request.attributeValue();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceAttributeResponse>();
}

/**
 * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the elastic scaling settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClassWithOptions(const ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.nodeCount();
  }

  if (!!request.hasNodeScaleMax()) {
    query["NodeScaleMax"] = request.nodeScaleMax();
  }

  if (!!request.hasNodeScaleMin()) {
    query["NodeScaleMin"] = request.nodeScaleMin();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.scaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.scaleMin();
  }

  if (!!request.hasStorageQuota()) {
    query["StorageQuota"] = request.storageQuota();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceClass"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceClassResponse>();
}

/**
 * @summary Modifies the elastic scaling settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceClassRequest
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

/**
 * @summary 修改实例参数配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConfigResponse>();
}

/**
 * @summary 修改实例参数配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.computingGroupId();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.DBInstanceNetType();
  }

  if (!!request.hasDisablePorts()) {
    query["DisablePorts"] = request.disablePorts();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConnectionStringResponse>();
}

/**
 * @summary Modifies the endpoint of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifySecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPListWithOptions(const ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIPListResponse>();
}

/**
 * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifySecurityIPListRequest
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPList(const ModifySecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2023-05-22"},
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
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBInstanceResponse>();
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstanceWithOptions(const StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDBInstanceResponse>();
}

/**
 * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StartDBInstanceRequest
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstance(const StartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StopDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstanceWithOptions(const StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDBInstanceResponse>();
}

/**
 * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StopDBInstanceRequest
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstance(const StopDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request UpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersionWithOptions(const UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.switchTimeMode();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.targetMinorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMinorVersion"},
    {"version" , "2023-05-22"},
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
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request UpgradeMinorVersionRequest
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMinorVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Clickhouse20230522