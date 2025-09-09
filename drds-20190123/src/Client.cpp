#include <darabonba/Core.hpp>
#include <alibabacloud/Drds20190123.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Drds20190123::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Drds20190123
{

AlibabaCloud::Drds20190123::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop" , "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "drds.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "drds.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "drds.aliyuncs.com"},
    {"cn-beijing-gov-1" , "drds.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "drds.aliyuncs.com"},
    {"cn-chengdu" , "drds.aliyuncs.com"},
    {"cn-edge-1" , "drds.aliyuncs.com"},
    {"cn-fujian" , "drds.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "drds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "drds.aliyuncs.com"},
    {"cn-hangzhou-finance" , "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "drds.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "drds.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "drds.aliyuncs.com"},
    {"cn-qingdao-nebula" , "drds.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "drds.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "drds.aliyuncs.com"},
    {"cn-shanghai-inner" , "drds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "drds.aliyuncs.com"},
    {"cn-shenzhen-inner" , "drds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "drds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "drds.aliyuncs.com"},
    {"cn-wuhan" , "drds.aliyuncs.com"},
    {"cn-yushanfang" , "drds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "drds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "drds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "drds.aliyuncs.com"},
    {"eu-central-1" , "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs" , "drds.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "drds.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "drds.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "drds.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("drds", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request ChangeAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAccountPasswordResponse
 */
ChangeAccountPasswordResponse Client::changeAccountPasswordWithOptions(const ChangeAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAccountPassword"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAccountPasswordResponse>();
}

/**
 * @param request ChangeAccountPasswordRequest
 * @return ChangeAccountPasswordResponse
 */
ChangeAccountPasswordResponse Client::changeAccountPassword(const ChangeAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAccountPasswordWithOptions(request, runtime);
}

/**
 * @param request ChangeInstanceAzoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeInstanceAzoneResponse
 */
ChangeInstanceAzoneResponse Client::changeInstanceAzoneWithOptions(const ChangeInstanceAzoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeVSwitch()) {
    query["ChangeVSwitch"] = request.changeVSwitch();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasDrdsRegionId()) {
    query["DrdsRegionId"] = request.drdsRegionId();
  }

  if (!!request.hasNewVSwitch()) {
    query["NewVSwitch"] = request.newVSwitch();
  }

  if (!!request.hasOriginAzoneId()) {
    query["OriginAzoneId"] = request.originAzoneId();
  }

  if (!!request.hasTargetAzoneId()) {
    query["TargetAzoneId"] = request.targetAzoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeInstanceAzone"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeInstanceAzoneResponse>();
}

/**
 * @param request ChangeInstanceAzoneRequest
 * @return ChangeInstanceAzoneResponse
 */
ChangeInstanceAzoneResponse Client::changeInstanceAzone(const ChangeInstanceAzoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeInstanceAzoneWithOptions(request, runtime);
}

/**
 * @param request CheckDrdsDbNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDrdsDbNameResponse
 */
CheckDrdsDbNameResponse Client::checkDrdsDbNameWithOptions(const CheckDrdsDbNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDrdsDbName"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDrdsDbNameResponse>();
}

/**
 * @param request CheckDrdsDbNameRequest
 * @return CheckDrdsDbNameResponse
 */
CheckDrdsDbNameResponse Client::checkDrdsDbName(const CheckDrdsDbNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDrdsDbNameWithOptions(request, runtime);
}

/**
 * @summary Verifies whether scale-out operations such as smooth scale-out can be performed on a PolarDB-X database.
 *
 * @param request CheckExpandStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckExpandStatusResponse
 */
CheckExpandStatusResponse Client::checkExpandStatusWithOptions(const CheckExpandStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckExpandStatus"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckExpandStatusResponse>();
}

/**
 * @summary Verifies whether scale-out operations such as smooth scale-out can be performed on a PolarDB-X database.
 *
 * @param request CheckExpandStatusRequest
 * @return CheckExpandStatusResponse
 */
CheckExpandStatusResponse Client::checkExpandStatus(const CheckExpandStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkExpandStatusWithOptions(request, runtime);
}

/**
 * @summary Checks whether the SQL audit feature is enabled for the logical database of a PolarDB-X 1.0 instance.
 *
 * @param request CheckSqlAuditEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSqlAuditEnableStatusResponse
 */
CheckSqlAuditEnableStatusResponse Client::checkSqlAuditEnableStatusWithOptions(const CheckSqlAuditEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSqlAuditEnableStatus"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSqlAuditEnableStatusResponse>();
}

/**
 * @summary Checks whether the SQL audit feature is enabled for the logical database of a PolarDB-X 1.0 instance.
 *
 * @param request CheckSqlAuditEnableStatusRequest
 * @return CheckSqlAuditEnableStatusResponse
 */
CheckSqlAuditEnableStatusResponse Client::checkSqlAuditEnableStatus(const CheckSqlAuditEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSqlAuditEnableStatusWithOptions(request, runtime);
}

/**
 * @param request CreateDrdsDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDrdsDBResponse
 */
CreateDrdsDBResponse Client::createDrdsDBWithOptions(const CreateDrdsDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDbInstanceIsCreating()) {
    query["DbInstanceIsCreating"] = request.dbInstanceIsCreating();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEncode()) {
    query["Encode"] = request.encode();
  }

  if (!!request.hasInstDbName()) {
    query["InstDbName"] = request.instDbName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRdsInstance()) {
    query["RdsInstance"] = request.rdsInstance();
  }

  if (!!request.hasRdsSuperAccount()) {
    query["RdsSuperAccount"] = request.rdsSuperAccount();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDrdsDB"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDrdsDBResponse>();
}

/**
 * @param request CreateDrdsDBRequest
 * @return CreateDrdsDBResponse
 */
CreateDrdsDBResponse Client::createDrdsDB(const CreateDrdsDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDrdsDBWithOptions(request, runtime);
}

/**
 * @param request CreateDrdsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDrdsInstanceResponse
 */
CreateDrdsInstanceResponse Client::createDrdsInstanceWithOptions(const CreateDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasInstanceSeries()) {
    query["InstanceSeries"] = request.instanceSeries();
  }

  if (!!request.hasIsAutoRenew()) {
    query["IsAutoRenew"] = request.isAutoRenew();
  }

  if (!!request.hasMasterInstId()) {
    query["MasterInstId"] = request.masterInstId();
  }

  if (!!request.hasMySQLVersion()) {
    query["MySQLVersion"] = request.mySQLVersion();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.quantity();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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

  if (!!request.hasIsHa()) {
    query["isHa"] = request.isHa();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDrdsInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDrdsInstanceResponse>();
}

/**
 * @param request CreateDrdsInstanceRequest
 * @return CreateDrdsInstanceResponse
 */
CreateDrdsInstanceResponse Client::createDrdsInstance(const CreateDrdsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDrdsInstanceWithOptions(request, runtime);
}

/**
 * @param request CreateInstanceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceAccountResponse
 */
CreateInstanceAccountResponse Client::createInstanceAccountWithOptions(const CreateInstanceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDbPrivilege()) {
    query["DbPrivilege"] = request.dbPrivilege();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceAccount"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceAccountResponse>();
}

/**
 * @param request CreateInstanceAccountRequest
 * @return CreateInstanceAccountResponse
 */
CreateInstanceAccountResponse Client::createInstanceAccount(const CreateInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceAccountWithOptions(request, runtime);
}

/**
 * @param request CreateInstanceInternetAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceInternetAddressResponse
 */
CreateInstanceInternetAddressResponse Client::createInstanceInternetAddressWithOptions(const CreateInstanceInternetAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceInternetAddress"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceInternetAddressResponse>();
}

/**
 * @param request CreateInstanceInternetAddressRequest
 * @return CreateInstanceInternetAddressResponse
 */
CreateInstanceInternetAddressResponse Client::createInstanceInternetAddress(const CreateInstanceInternetAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceInternetAddressWithOptions(request, runtime);
}

/**
 * @summary Creates an order to purchase an ApsaraDB RDS for MySQL instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of PolarDB-X 1.0. For more information, visit the [pricing page](https://www.aliyun.com/price/product#/rds/detail).
 *
 * @param request CreateOrderForRdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderForRdsResponse
 */
CreateOrderForRdsResponse Client::createOrderForRdsWithOptions(const CreateOrderForRdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrderForRds"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderForRdsResponse>();
}

/**
 * @summary Creates an order to purchase an ApsaraDB RDS for MySQL instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and pricing of PolarDB-X 1.0. For more information, visit the [pricing page](https://www.aliyun.com/price/product#/rds/detail).
 *
 * @param request CreateOrderForRdsRequest
 * @return CreateOrderForRdsResponse
 */
CreateOrderForRdsResponse Client::createOrderForRds(const CreateOrderForRdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderForRdsWithOptions(request, runtime);
}

/**
 * @param request CreateShardTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateShardTaskResponse
 */
CreateShardTaskResponse Client::createShardTaskWithOptions(const CreateShardTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceTableName()) {
    query["SourceTableName"] = request.sourceTableName();
  }

  if (!!request.hasTargetTableName()) {
    query["TargetTableName"] = request.targetTableName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateShardTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateShardTaskResponse>();
}

/**
 * @param request CreateShardTaskRequest
 * @return CreateShardTaskResponse
 */
CreateShardTaskResponse Client::createShardTask(const CreateShardTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createShardTaskWithOptions(request, runtime);
}

/**
 * @param request DescribeBackMenuRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackMenuResponse
 */
DescribeBackMenuResponse Client::describeBackMenuWithOptions(const DescribeBackMenuRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackMenu"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackMenuResponse>();
}

/**
 * @param request DescribeBackMenuRequest
 * @return DescribeBackMenuResponse
 */
DescribeBackMenuResponse Client::describeBackMenu(const DescribeBackMenuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackMenuWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupDbsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupDbsResponse
 */
DescribeBackupDbsResponse Client::describeBackupDbsWithOptions(const DescribeBackupDbsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPreferredRestoreTime()) {
    query["PreferredRestoreTime"] = request.preferredRestoreTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupDbs"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupDbsResponse>();
}

/**
 * @param request DescribeBackupDbsRequest
 * @return DescribeBackupDbsResponse
 */
DescribeBackupDbsResponse Client::describeBackupDbs(const DescribeBackupDbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupDbsWithOptions(request, runtime);
}

/**
 * @summary Queries the backup settings of local logs.
 *
 * @param request DescribeBackupLocalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupLocalResponse
 */
DescribeBackupLocalResponse Client::describeBackupLocalWithOptions(const DescribeBackupLocalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupLocal"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupLocalResponse>();
}

/**
 * @summary Queries the backup settings of local logs.
 *
 * @param request DescribeBackupLocalRequest
 * @return DescribeBackupLocalResponse
 */
DescribeBackupLocalResponse Client::describeBackupLocal(const DescribeBackupLocalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupLocalWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a backup policy.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2019-01-23"},
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
 * @summary Queries the information about a backup policy.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetsResponse
 */
DescribeBackupSetsResponse Client::describeBackupSetsWithOptions(const DescribeBackupSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupSets"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupSetsResponse>();
}

/**
 * @param request DescribeBackupSetsRequest
 * @return DescribeBackupSetsResponse
 */
DescribeBackupSetsResponse Client::describeBackupSets(const DescribeBackupSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetsWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupTimesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupTimesResponse
 */
DescribeBackupTimesResponse Client::describeBackupTimesWithOptions(const DescribeBackupTimesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupTimes"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupTimesResponse>();
}

/**
 * @param request DescribeBackupTimesRequest
 * @return DescribeBackupTimesResponse
 */
DescribeBackupTimesResponse Client::describeBackupTimes(const DescribeBackupTimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTimesWithOptions(request, runtime);
}

/**
 * @param request DescribeBroadcastTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBroadcastTablesResponse
 */
DescribeBroadcastTablesResponse Client::describeBroadcastTablesWithOptions(const DescribeBroadcastTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBroadcastTables"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBroadcastTablesResponse>();
}

/**
 * @param request DescribeBroadcastTablesRequest
 * @return DescribeBroadcastTablesResponse
 */
DescribeBroadcastTablesResponse Client::describeBroadcastTables(const DescribeBroadcastTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBroadcastTablesWithOptions(request, runtime);
}

/**
 * @param request DescribeDbInstanceDbsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbInstanceDbsResponse
 */
DescribeDbInstanceDbsResponse Client::describeDbInstanceDbsWithOptions(const DescribeDbInstanceDbsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.dbInstanceId();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDbInstanceDbs"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDbInstanceDbsResponse>();
}

/**
 * @param request DescribeDbInstanceDbsRequest
 * @return DescribeDbInstanceDbsResponse
 */
DescribeDbInstanceDbsResponse Client::describeDbInstanceDbs(const DescribeDbInstanceDbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbInstanceDbsWithOptions(request, runtime);
}

/**
 * @summary Queries DescribeDbInstances of the storage layer, such as RDS or PolarDB.
 *
 * @param request DescribeDbInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbInstancesResponse
 */
DescribeDbInstancesResponse Client::describeDbInstancesWithOptions(const DescribeDbInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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

  if (!!request.hasSearch()) {
    query["Search"] = request.search();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDbInstances"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDbInstancesResponse>();
}

/**
 * @summary Queries DescribeDbInstances of the storage layer, such as RDS or PolarDB.
 *
 * @param request DescribeDbInstancesRequest
 * @return DescribeDbInstancesResponse
 */
DescribeDbInstancesResponse Client::describeDbInstances(const DescribeDbInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbInstancesWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDBResponse
 */
DescribeDrdsDBResponse Client::describeDrdsDBWithOptions(const DescribeDrdsDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDB"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDBResponse>();
}

/**
 * @param request DescribeDrdsDBRequest
 * @return DescribeDrdsDBResponse
 */
DescribeDrdsDBResponse Client::describeDrdsDB(const DescribeDrdsDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDBWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query the information of the PolarDB cluster in the DRDS logical database.
 *
 * @param request DescribeDrdsDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDBClusterResponse
 */
DescribeDrdsDBClusterResponse Client::describeDrdsDBClusterWithOptions(const DescribeDrdsDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.dbInstanceId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDBCluster"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDBClusterResponse>();
}

/**
 * @summary You can call this operation to query the information of the PolarDB cluster in the DRDS logical database.
 *
 * @param request DescribeDrdsDBClusterRequest
 * @return DescribeDrdsDBClusterResponse
 */
DescribeDrdsDBClusterResponse Client::describeDrdsDBCluster(const DescribeDrdsDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDBClusterWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsDBIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDBIpWhiteListResponse
 */
DescribeDrdsDBIpWhiteListResponse Client::describeDrdsDBIpWhiteListWithOptions(const DescribeDrdsDBIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDBIpWhiteList"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDBIpWhiteListResponse>();
}

/**
 * @param request DescribeDrdsDBIpWhiteListRequest
 * @return DescribeDrdsDBIpWhiteListResponse
 */
DescribeDrdsDBIpWhiteListResponse Client::describeDrdsDBIpWhiteList(const DescribeDrdsDBIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDBIpWhiteListWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsDBsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDBsResponse
 */
DescribeDrdsDBsResponse Client::describeDrdsDBsWithOptions(const DescribeDrdsDBsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDBs"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDBsResponse>();
}

/**
 * @param request DescribeDrdsDBsRequest
 * @return DescribeDrdsDBsResponse
 */
DescribeDrdsDBsResponse Client::describeDrdsDBs(const DescribeDrdsDBsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDBsWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsDbInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDbInstanceResponse
 */
DescribeDrdsDbInstanceResponse Client::describeDrdsDbInstanceWithOptions(const DescribeDrdsDbInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.dbInstanceId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDbInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDbInstanceResponse>();
}

/**
 * @param request DescribeDrdsDbInstanceRequest
 * @return DescribeDrdsDbInstanceResponse
 */
DescribeDrdsDbInstanceResponse Client::describeDrdsDbInstance(const DescribeDrdsDbInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDbInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries ApsaraDB RDS for MySQL instances that are used to store the data of a database.
 *
 * @param request DescribeDrdsDbInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDbInstancesResponse
 */
DescribeDrdsDbInstancesResponse Client::describeDrdsDbInstancesWithOptions(const DescribeDrdsDbInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDbInstances"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDbInstancesResponse>();
}

/**
 * @summary Queries ApsaraDB RDS for MySQL instances that are used to store the data of a database.
 *
 * @param request DescribeDrdsDbInstancesRequest
 * @return DescribeDrdsDbInstancesResponse
 */
DescribeDrdsDbInstancesResponse Client::describeDrdsDbInstances(const DescribeDrdsDbInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDbInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询存储实例列表
 *
 * @param request DescribeDrdsDbRdsNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsDbRdsNameListResponse
 */
DescribeDrdsDbRdsNameListResponse Client::describeDrdsDbRdsNameListWithOptions(const DescribeDrdsDbRdsNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsDbRdsNameList"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsDbRdsNameListResponse>();
}

/**
 * @summary 查询存储实例列表
 *
 * @param request DescribeDrdsDbRdsNameListRequest
 * @return DescribeDrdsDbRdsNameListResponse
 */
DescribeDrdsDbRdsNameListResponse Client::describeDrdsDbRdsNameList(const DescribeDrdsDbRdsNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsDbRdsNameListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstanceResponse
 */
DescribeDrdsInstanceResponse Client::describeDrdsInstanceWithOptions(const DescribeDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstanceResponse>();
}

/**
 * @summary Queries the details of a PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsInstanceRequest
 * @return DescribeDrdsInstanceResponse
 */
DescribeDrdsInstanceResponse Client::describeDrdsInstance(const DescribeDrdsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstanceWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsInstanceDbMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstanceDbMonitorResponse
 */
DescribeDrdsInstanceDbMonitorResponse Client::describeDrdsInstanceDbMonitorWithOptions(const DescribeDrdsInstanceDbMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
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
    {"action" , "DescribeDrdsInstanceDbMonitor"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstanceDbMonitorResponse>();
}

/**
 * @param request DescribeDrdsInstanceDbMonitorRequest
 * @return DescribeDrdsInstanceDbMonitorResponse
 */
DescribeDrdsInstanceDbMonitorResponse Client::describeDrdsInstanceDbMonitor(const DescribeDrdsInstanceDbMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstanceDbMonitorWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsInstanceLevelTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstanceLevelTasksResponse
 */
DescribeDrdsInstanceLevelTasksResponse Client::describeDrdsInstanceLevelTasksWithOptions(const DescribeDrdsInstanceLevelTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsInstanceLevelTasks"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstanceLevelTasksResponse>();
}

/**
 * @param request DescribeDrdsInstanceLevelTasksRequest
 * @return DescribeDrdsInstanceLevelTasksResponse
 */
DescribeDrdsInstanceLevelTasksResponse Client::describeDrdsInstanceLevelTasks(const DescribeDrdsInstanceLevelTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstanceLevelTasksWithOptions(request, runtime);
}

/**
 * @summary 查询监控数据
 *
 * @param request DescribeDrdsInstanceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstanceMonitorResponse
 */
DescribeDrdsInstanceMonitorResponse Client::describeDrdsInstanceMonitorWithOptions(const DescribeDrdsInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasPeriodMultiple()) {
    query["PeriodMultiple"] = request.periodMultiple();
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
    {"action" , "DescribeDrdsInstanceMonitor"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstanceMonitorResponse>();
}

/**
 * @summary 查询监控数据
 *
 * @param request DescribeDrdsInstanceMonitorRequest
 * @return DescribeDrdsInstanceMonitorResponse
 */
DescribeDrdsInstanceMonitorResponse Client::describeDrdsInstanceMonitor(const DescribeDrdsInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstanceMonitorWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsInstanceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstanceVersionResponse
 */
DescribeDrdsInstanceVersionResponse Client::describeDrdsInstanceVersionWithOptions(const DescribeDrdsInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsInstanceVersion"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstanceVersionResponse>();
}

/**
 * @param request DescribeDrdsInstanceVersionRequest
 * @return DescribeDrdsInstanceVersionResponse
 */
DescribeDrdsInstanceVersionResponse Client::describeDrdsInstanceVersion(const DescribeDrdsInstanceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstanceVersionWithOptions(request, runtime);
}

/**
 * @summary Queries instances that meet the specified conditions.
 *
 * @param request DescribeDrdsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsInstancesResponse
 */
DescribeDrdsInstancesResponse Client::describeDrdsInstancesWithOptions(const DescribeDrdsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.expired();
  }

  if (!!request.hasMix()) {
    query["Mix"] = request.mix();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductVersion()) {
    query["ProductVersion"] = request.productVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsInstances"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsInstancesResponse>();
}

/**
 * @summary Queries instances that meet the specified conditions.
 *
 * @param request DescribeDrdsInstancesRequest
 * @return DescribeDrdsInstancesResponse
 */
DescribeDrdsInstancesResponse Client::describeDrdsInstances(const DescribeDrdsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsInstancesWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsParamsResponse
 */
DescribeDrdsParamsResponse Client::describeDrdsParamsWithOptions(const DescribeDrdsParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.paramLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsParams"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsParamsResponse>();
}

/**
 * @param request DescribeDrdsParamsRequest
 * @return DescribeDrdsParamsResponse
 */
DescribeDrdsParamsResponse Client::describeDrdsParams(const DescribeDrdsParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsParamsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all custom ApsaraDB RDS for MySQL instances in a PolarDB-X instance.
 *
 * @param request DescribeDrdsRdsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsRdsInstancesResponse
 */
DescribeDrdsRdsInstancesResponse Client::describeDrdsRdsInstancesWithOptions(const DescribeDrdsRdsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsRdsInstances"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsRdsInstancesResponse>();
}

/**
 * @summary Queries the information about all custom ApsaraDB RDS for MySQL instances in a PolarDB-X instance.
 *
 * @param request DescribeDrdsRdsInstancesRequest
 * @return DescribeDrdsRdsInstancesResponse
 */
DescribeDrdsRdsInstancesResponse Client::describeDrdsRdsInstances(const DescribeDrdsRdsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsRdsInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the database shards of an PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsShardingDbsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsShardingDbsResponse
 */
DescribeDrdsShardingDbsResponse Client::describeDrdsShardingDbsWithOptions(const DescribeDrdsShardingDbsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDbNamePattern()) {
    query["DbNamePattern"] = request.dbNamePattern();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsShardingDbs"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsShardingDbsResponse>();
}

/**
 * @summary Queries the database shards of an PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsShardingDbsRequest
 * @return DescribeDrdsShardingDbsResponse
 */
DescribeDrdsShardingDbsResponse Client::describeDrdsShardingDbs(const DescribeDrdsShardingDbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsShardingDbsWithOptions(request, runtime);
}

/**
 * @summary Queries a slow SQL query.
 *
 * @param request DescribeDrdsSlowSqlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsSlowSqlsResponse
 */
DescribeDrdsSlowSqlsResponse Client::describeDrdsSlowSqlsWithOptions(const DescribeDrdsSlowSqlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExeTime()) {
    query["ExeTime"] = request.exeTime();
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
    {"action" , "DescribeDrdsSlowSqls"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsSlowSqlsResponse>();
}

/**
 * @summary Queries a slow SQL query.
 *
 * @param request DescribeDrdsSlowSqlsRequest
 * @return DescribeDrdsSlowSqlsResponse
 */
DescribeDrdsSlowSqlsResponse Client::describeDrdsSlowSqls(const DescribeDrdsSlowSqlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsSlowSqlsWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL audit details of a PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsSqlAuditStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsSqlAuditStatusResponse
 */
DescribeDrdsSqlAuditStatusResponse Client::describeDrdsSqlAuditStatusWithOptions(const DescribeDrdsSqlAuditStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsSqlAuditStatus"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsSqlAuditStatusResponse>();
}

/**
 * @summary Queries the SQL audit details of a PolarDB-X 1.0 instance.
 *
 * @param request DescribeDrdsSqlAuditStatusRequest
 * @return DescribeDrdsSqlAuditStatusResponse
 */
DescribeDrdsSqlAuditStatusResponse Client::describeDrdsSqlAuditStatus(const DescribeDrdsSqlAuditStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsSqlAuditStatusWithOptions(request, runtime);
}

/**
 * @param request DescribeDrdsTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrdsTasksResponse
 */
DescribeDrdsTasksResponse Client::describeDrdsTasksWithOptions(const DescribeDrdsTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrdsTasks"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrdsTasksResponse>();
}

/**
 * @param request DescribeDrdsTasksRequest
 * @return DescribeDrdsTasksResponse
 */
DescribeDrdsTasksResponse Client::describeDrdsTasks(const DescribeDrdsTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrdsTasksWithOptions(request, runtime);
}

/**
 * @param request DescribeExpandLogicTableInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpandLogicTableInfoListResponse
 */
DescribeExpandLogicTableInfoListResponse Client::describeExpandLogicTableInfoListWithOptions(const DescribeExpandLogicTableInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpandLogicTableInfoList"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpandLogicTableInfoListResponse>();
}

/**
 * @param request DescribeExpandLogicTableInfoListRequest
 * @return DescribeExpandLogicTableInfoListResponse
 */
DescribeExpandLogicTableInfoListResponse Client::describeExpandLogicTableInfoList(const DescribeExpandLogicTableInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpandLogicTableInfoListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about databases on which hots-pot scale-out is performed.
 *
 * @param request DescribeHotDbListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHotDbListResponse
 */
DescribeHotDbListResponse Client::describeHotDbListWithOptions(const DescribeHotDbListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHotDbList"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHotDbListResponse>();
}

/**
 * @summary Queries the information about databases on which hots-pot scale-out is performed.
 *
 * @param request DescribeHotDbListRequest
 * @return DescribeHotDbListResponse
 */
DescribeHotDbListResponse Client::describeHotDbList(const DescribeHotDbListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHotDbListWithOptions(request, runtime);
}

/**
 * @param request DescribeInstDbLogInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstDbLogInfoResponse
 */
DescribeInstDbLogInfoResponse Client::describeInstDbLogInfoWithOptions(const DescribeInstDbLogInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstDbLogInfo"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstDbLogInfoResponse>();
}

/**
 * @param request DescribeInstDbLogInfoRequest
 * @return DescribeInstDbLogInfoResponse
 */
DescribeInstDbLogInfoResponse Client::describeInstDbLogInfo(const DescribeInstDbLogInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstDbLogInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the names of the Log Service project and the Logstore used by the SQL audit feature.
 *
 * @param request DescribeInstDbSlsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstDbSlsInfoResponse
 */
DescribeInstDbSlsInfoResponse Client::describeInstDbSlsInfoWithOptions(const DescribeInstDbSlsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstDbSlsInfo"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstDbSlsInfoResponse>();
}

/**
 * @summary Queries the names of the Log Service project and the Logstore used by the SQL audit feature.
 *
 * @param request DescribeInstDbSlsInfoRequest
 * @return DescribeInstDbSlsInfoResponse
 */
DescribeInstDbSlsInfoResponse Client::describeInstDbSlsInfo(const DescribeInstDbSlsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstDbSlsInfoWithOptions(request, runtime);
}

/**
 * @summary Queries information about an instance account.
 *
 * @param request DescribeInstanceAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAccountsResponse
 */
DescribeInstanceAccountsResponse Client::describeInstanceAccountsWithOptions(const DescribeInstanceAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAccounts"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAccountsResponse>();
}

/**
 * @summary Queries information about an instance account.
 *
 * @param request DescribeInstanceAccountsRequest
 * @return DescribeInstanceAccountsResponse
 */
DescribeInstanceAccountsResponse Client::describeInstanceAccounts(const DescribeInstanceAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAccountsWithOptions(request, runtime);
}

/**
 * @summary Check whether zone switching is enabled
 *
 * @param request DescribeInstanceSwitchAzoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSwitchAzoneResponse
 */
DescribeInstanceSwitchAzoneResponse Client::describeInstanceSwitchAzoneWithOptions(const DescribeInstanceSwitchAzoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSwitchAzone"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSwitchAzoneResponse>();
}

/**
 * @summary Check whether zone switching is enabled
 *
 * @param request DescribeInstanceSwitchAzoneRequest
 * @return DescribeInstanceSwitchAzoneResponse
 */
DescribeInstanceSwitchAzoneResponse Client::describeInstanceSwitchAzone(const DescribeInstanceSwitchAzoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSwitchAzoneWithOptions(request, runtime);
}

/**
 * @summary Queries whether you can change the network type of a PolarDB-X 1.0 instance.
 *
 * @description ****
 *
 * @param request DescribeInstanceSwitchNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSwitchNetworkResponse
 */
DescribeInstanceSwitchNetworkResponse Client::describeInstanceSwitchNetworkWithOptions(const DescribeInstanceSwitchNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSwitchNetwork"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSwitchNetworkResponse>();
}

/**
 * @summary Queries whether you can change the network type of a PolarDB-X 1.0 instance.
 *
 * @description ****
 *
 * @param request DescribeInstanceSwitchNetworkRequest
 * @return DescribeInstanceSwitchNetworkResponse
 */
DescribeInstanceSwitchNetworkResponse Client::describeInstanceSwitchNetwork(const DescribeInstanceSwitchNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSwitchNetworkWithOptions(request, runtime);
}

/**
 * @param request DescribePreCheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreCheckResultResponse
 */
DescribePreCheckResultResponse Client::describePreCheckResultWithOptions(const DescribePreCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreCheckResult"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreCheckResultResponse>();
}

/**
 * @param request DescribePreCheckResultRequest
 * @return DescribePreCheckResultResponse
 */
DescribePreCheckResultResponse Client::describePreCheckResult(const DescribePreCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreCheckResultWithOptions(request, runtime);
}

/**
 * @param request DescribeRDSPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRDSPerformanceResponse
 */
DescribeRDSPerformanceResponse Client::describeRDSPerformanceWithOptions(const DescribeRDSPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeys()) {
    query["Keys"] = request.keys();
  }

  if (!!request.hasRdsInstanceId()) {
    query["RdsInstanceId"] = request.rdsInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRDSPerformance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRDSPerformanceResponse>();
}

/**
 * @param request DescribeRDSPerformanceRequest
 * @return DescribeRDSPerformanceResponse
 */
DescribeRDSPerformanceResponse Client::describeRDSPerformance(const DescribeRDSPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRDSPerformanceWithOptions(request, runtime);
}

/**
 * @param request DescribeRdsCommodityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsCommodityResponse
 */
DescribeRdsCommodityResponse Client::describeRdsCommodityWithOptions(const DescribeRdsCommodityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsCommodity"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsCommodityResponse>();
}

/**
 * @param request DescribeRdsCommodityRequest
 * @return DescribeRdsCommodityResponse
 */
DescribeRdsCommodityResponse Client::describeRdsCommodity(const DescribeRdsCommodityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsCommodityWithOptions(request, runtime);
}

/**
 * @param request DescribeRdsPerformanceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsPerformanceSummaryResponse
 */
DescribeRdsPerformanceSummaryResponse Client::describeRdsPerformanceSummaryWithOptions(const DescribeRdsPerformanceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRdsInstanceId()) {
    query["RdsInstanceId"] = request.rdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsPerformanceSummary"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsPerformanceSummaryResponse>();
}

/**
 * @param request DescribeRdsPerformanceSummaryRequest
 * @return DescribeRdsPerformanceSummaryResponse
 */
DescribeRdsPerformanceSummaryResponse Client::describeRdsPerformanceSummary(const DescribeRdsPerformanceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsPerformanceSummaryWithOptions(request, runtime);
}

/**
 * @param request DescribeRdsSuperAccountInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsSuperAccountInstancesResponse
 */
DescribeRdsSuperAccountInstancesResponse Client::describeRdsSuperAccountInstancesWithOptions(const DescribeRdsSuperAccountInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRdsInstance()) {
    query["RdsInstance"] = request.rdsInstance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsSuperAccountInstances"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsSuperAccountInstancesResponse>();
}

/**
 * @param request DescribeRdsSuperAccountInstancesRequest
 * @return DescribeRdsSuperAccountInstancesResponse
 */
DescribeRdsSuperAccountInstancesResponse Client::describeRdsSuperAccountInstances(const DescribeRdsSuperAccountInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsSuperAccountInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the table recycle bin.
 *
 * @param request DescribeRecycleBinStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecycleBinStatusResponse
 */
DescribeRecycleBinStatusResponse Client::describeRecycleBinStatusWithOptions(const DescribeRecycleBinStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecycleBinStatus"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecycleBinStatusResponse>();
}

/**
 * @summary Queries the status of the table recycle bin.
 *
 * @param request DescribeRecycleBinStatusRequest
 * @return DescribeRecycleBinStatusResponse
 */
DescribeRecycleBinStatusResponse Client::describeRecycleBinStatus(const DescribeRecycleBinStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecycleBinStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the tables that can be restored in the recycle bin.
 *
 * @param request DescribeRecycleBinTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecycleBinTablesResponse
 */
DescribeRecycleBinTablesResponse Client::describeRecycleBinTablesWithOptions(const DescribeRecycleBinTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecycleBinTables"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecycleBinTablesResponse>();
}

/**
 * @summary Queries the tables that can be restored in the recycle bin.
 *
 * @param request DescribeRecycleBinTablesRequest
 * @return DescribeRecycleBinTablesResponse
 */
DescribeRecycleBinTablesResponse Client::describeRecycleBinTables(const DescribeRecycleBinTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecycleBinTablesWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeRestoreOrder operation to view the details of the order.
 *
 * @param request DescribeRestoreOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreOrderResponse
 */
DescribeRestoreOrderResponse Client::describeRestoreOrderWithOptions(const DescribeRestoreOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupDbNames()) {
    query["BackupDbNames"] = request.backupDbNames();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupLevel()) {
    query["BackupLevel"] = request.backupLevel();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreOrder"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreOrderResponse>();
}

/**
 * @summary You can call the DescribeRestoreOrder operation to view the details of the order.
 *
 * @param request DescribeRestoreOrderRequest
 * @return DescribeRestoreOrderResponse
 */
DescribeRestoreOrderResponse Client::describeRestoreOrder(const DescribeRestoreOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreOrderWithOptions(request, runtime);
}

/**
 * @param request DescribeShardTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeShardTaskInfoResponse
 */
DescribeShardTaskInfoResponse Client::describeShardTaskInfoWithOptions(const DescribeShardTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceTableName()) {
    query["SourceTableName"] = request.sourceTableName();
  }

  if (!!request.hasTargetTableName()) {
    query["TargetTableName"] = request.targetTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeShardTaskInfo"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeShardTaskInfoResponse>();
}

/**
 * @param request DescribeShardTaskInfoRequest
 * @return DescribeShardTaskInfoResponse
 */
DescribeShardTaskInfoResponse Client::describeShardTaskInfo(const DescribeShardTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeShardTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the flashback tasks that are performed on a PolarDB-X 1.0 instance.
 *
 * @param request DescribeSqlFlashbakTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlFlashbakTaskResponse
 */
DescribeSqlFlashbakTaskResponse Client::describeSqlFlashbakTaskWithOptions(const DescribeSqlFlashbakTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSqlFlashbakTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlFlashbakTaskResponse>();
}

/**
 * @summary Queries the flashback tasks that are performed on a PolarDB-X 1.0 instance.
 *
 * @param request DescribeSqlFlashbakTaskRequest
 * @return DescribeSqlFlashbakTaskResponse
 */
DescribeSqlFlashbakTaskResponse Client::describeSqlFlashbakTask(const DescribeSqlFlashbakTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlFlashbakTaskWithOptions(request, runtime);
}

/**
 * @summary Queries information about the schema of a table.
 *
 * @param request DescribeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableResponse
 */
DescribeTableResponse Client::describeTableWithOptions(const DescribeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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
    {"action" , "DescribeTable"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableResponse>();
}

/**
 * @summary Queries information about the schema of a table.
 *
 * @param request DescribeTableRequest
 * @return DescribeTableResponse
 */
DescribeTableResponse Client::describeTable(const DescribeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableWithOptions(request, runtime);
}

/**
 * @param request DescribeTableListByTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableListByTypeResponse
 */
DescribeTableListByTypeResponse Client::describeTableListByTypeWithOptions(const DescribeTableListByTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTableListByType"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableListByTypeResponse>();
}

/**
 * @param request DescribeTableListByTypeRequest
 * @return DescribeTableListByTypeResponse
 */
DescribeTableListByTypeResponse Client::describeTableListByType(const DescribeTableListByTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableListByTypeWithOptions(request, runtime);
}

/**
 * @summary DescribeTables文档变更
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

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTables"},
    {"version" , "2019-01-23"},
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
 * @summary DescribeTables文档变更
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Disables the SQL audit feature for a database.
 *
 * @param request DisableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAuditWithOptions(const DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSqlAudit"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSqlAuditResponse>();
}

/**
 * @summary Disables the SQL audit feature for a database.
 *
 * @param request DisableSqlAuditRequest
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAudit(const DisableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSqlAuditWithOptions(request, runtime);
}

/**
 * @summary Creates an IPv6 address.
 *
 * @param request EnableInstanceIpv6AddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInstanceIpv6AddressResponse
 */
EnableInstanceIpv6AddressResponse Client::enableInstanceIpv6AddressWithOptions(const EnableInstanceIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInstanceIpv6Address"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInstanceIpv6AddressResponse>();
}

/**
 * @summary Creates an IPv6 address.
 *
 * @param request EnableInstanceIpv6AddressRequest
 * @return EnableInstanceIpv6AddressResponse
 */
EnableInstanceIpv6AddressResponse Client::enableInstanceIpv6Address(const EnableInstanceIpv6AddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInstanceIpv6AddressWithOptions(request, runtime);
}

/**
 * @summary Enables the SQL audit feature for a database.
 *
 * @param request EnableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAuditWithOptions(const EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasIsRecall()) {
    query["IsRecall"] = request.isRecall();
  }

  if (!!request.hasRecallEndTimestamp()) {
    query["RecallEndTimestamp"] = request.recallEndTimestamp();
  }

  if (!!request.hasRecallStartTimestamp()) {
    query["RecallStartTimestamp"] = request.recallStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSqlAudit"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSqlAuditResponse>();
}

/**
 * @summary Enables the SQL audit feature for a database.
 *
 * @param request EnableSqlAuditRequest
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAudit(const EnableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSqlAuditWithOptions(request, runtime);
}

/**
 * @param request EnableSqlFlashbackMatchSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlFlashbackMatchSwitchResponse
 */
EnableSqlFlashbackMatchSwitchResponse Client::enableSqlFlashbackMatchSwitchWithOptions(const EnableSqlFlashbackMatchSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSqlFlashbackMatchSwitch"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSqlFlashbackMatchSwitchResponse>();
}

/**
 * @param request EnableSqlFlashbackMatchSwitchRequest
 * @return EnableSqlFlashbackMatchSwitchResponse
 */
EnableSqlFlashbackMatchSwitchResponse Client::enableSqlFlashbackMatchSwitch(const EnableSqlFlashbackMatchSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSqlFlashbackMatchSwitchWithOptions(request, runtime);
}

/**
 * @summary Restores a logical table that is deleted.
 *
 * @param request FlashbackRecycleBinTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlashbackRecycleBinTableResponse
 */
FlashbackRecycleBinTableResponse Client::flashbackRecycleBinTableWithOptions(const FlashbackRecycleBinTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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
    {"action" , "FlashbackRecycleBinTable"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlashbackRecycleBinTableResponse>();
}

/**
 * @summary Restores a logical table that is deleted.
 *
 * @param request FlashbackRecycleBinTableRequest
 * @return FlashbackRecycleBinTableResponse
 */
FlashbackRecycleBinTableResponse Client::flashbackRecycleBinTable(const FlashbackRecycleBinTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flashbackRecycleBinTableWithOptions(request, runtime);
}

/**
 * @param request GetDrdsDbRdsRelationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDrdsDbRdsRelationInfoResponse
 */
GetDrdsDbRdsRelationInfoResponse Client::getDrdsDbRdsRelationInfoWithOptions(const GetDrdsDbRdsRelationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDrdsDbRdsRelationInfo"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDrdsDbRdsRelationInfoResponse>();
}

/**
 * @param request GetDrdsDbRdsRelationInfoRequest
 * @return GetDrdsDbRdsRelationInfoResponse
 */
GetDrdsDbRdsRelationInfoResponse Client::getDrdsDbRdsRelationInfo(const GetDrdsDbRdsRelationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDrdsDbRdsRelationInfoWithOptions(request, runtime);
}

/**
 * @summary 查看Tag标签
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-01-23"},
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
 * @summary 查看Tag标签
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Manages a custom ApsaraDB RDS instance at the storage layer.
 *
 * @param request ManagePrivateRdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManagePrivateRdsResponse
 */
ManagePrivateRdsResponse Client::managePrivateRdsWithOptions(const ManagePrivateRdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRdsAction()) {
    query["RdsAction"] = request.rdsAction();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManagePrivateRds"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManagePrivateRdsResponse>();
}

/**
 * @summary Manages a custom ApsaraDB RDS instance at the storage layer.
 *
 * @param request ManagePrivateRdsRequest
 * @return ManagePrivateRdsResponse
 */
ManagePrivateRdsResponse Client::managePrivateRds(const ManagePrivateRdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return managePrivateRdsWithOptions(request, runtime);
}

/**
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2019-01-23"},
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
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @param request ModifyAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPrivilegeResponse
 */
ModifyAccountPrivilegeResponse Client::modifyAccountPrivilegeWithOptions(const ModifyAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDbPrivilege()) {
    query["DbPrivilege"] = request.dbPrivilege();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPrivilege"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountPrivilegeResponse>();
}

/**
 * @param request ModifyAccountPrivilegeRequest
 * @return ModifyAccountPrivilegeResponse
 */
ModifyAccountPrivilegeResponse Client::modifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @param request ModifyDrdsInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDrdsInstanceDescriptionResponse
 */
ModifyDrdsInstanceDescriptionResponse Client::modifyDrdsInstanceDescriptionWithOptions(const ModifyDrdsInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDrdsInstanceDescription"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDrdsInstanceDescriptionResponse>();
}

/**
 * @param request ModifyDrdsInstanceDescriptionRequest
 * @return ModifyDrdsInstanceDescriptionResponse
 */
ModifyDrdsInstanceDescriptionResponse Client::modifyDrdsInstanceDescription(const ModifyDrdsInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDrdsInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @param request ModifyDrdsIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDrdsIpWhiteListResponse
 */
ModifyDrdsIpWhiteListResponse Client::modifyDrdsIpWhiteListWithOptions(const ModifyDrdsIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasGroupAttribute()) {
    query["GroupAttribute"] = request.groupAttribute();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasIpWhiteList()) {
    query["IpWhiteList"] = request.ipWhiteList();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDrdsIpWhiteList"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDrdsIpWhiteListResponse>();
}

/**
 * @param request ModifyDrdsIpWhiteListRequest
 * @return ModifyDrdsIpWhiteListResponse
 */
ModifyDrdsIpWhiteListResponse Client::modifyDrdsIpWhiteList(const ModifyDrdsIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDrdsIpWhiteListWithOptions(request, runtime);
}

/**
 * @param request ModifyPolarDbReadWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolarDbReadWeightResponse
 */
ModifyPolarDbReadWeightResponse Client::modifyPolarDbReadWeightWithOptions(const ModifyPolarDbReadWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.dbInstanceId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDbNodeIds()) {
    query["DbNodeIds"] = request.dbNodeIds();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasWeights()) {
    query["Weights"] = request.weights();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolarDbReadWeight"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolarDbReadWeightResponse>();
}

/**
 * @param request ModifyPolarDbReadWeightRequest
 * @return ModifyPolarDbReadWeightResponse
 */
ModifyPolarDbReadWeightResponse Client::modifyPolarDbReadWeight(const ModifyPolarDbReadWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolarDbReadWeightWithOptions(request, runtime);
}

/**
 * @param request ModifyRdsReadWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRdsReadWeightResponse
 */
ModifyRdsReadWeightResponse Client::modifyRdsReadWeightWithOptions(const ModifyRdsReadWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasInstanceNames()) {
    query["InstanceNames"] = request.instanceNames();
  }

  if (!!request.hasWeights()) {
    query["Weights"] = request.weights();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRdsReadWeight"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRdsReadWeightResponse>();
}

/**
 * @param request ModifyRdsReadWeightRequest
 * @return ModifyRdsReadWeightResponse
 */
ModifyRdsReadWeightResponse Client::modifyRdsReadWeight(const ModifyRdsReadWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRdsReadWeightWithOptions(request, runtime);
}

/**
 * @param request PutStartBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutStartBackupResponse
 */
PutStartBackupResponse Client::putStartBackupWithOptions(const PutStartBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupDbNames()) {
    query["BackupDbNames"] = request.backupDbNames();
  }

  if (!!request.hasBackupLevel()) {
    query["BackupLevel"] = request.backupLevel();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutStartBackup"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutStartBackupResponse>();
}

/**
 * @param request PutStartBackupRequest
 * @return PutStartBackupResponse
 */
PutStartBackupResponse Client::putStartBackup(const PutStartBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putStartBackupWithOptions(request, runtime);
}

/**
 * @param request RefreshDrdsAtomUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDrdsAtomUrlResponse
 */
RefreshDrdsAtomUrlResponse Client::refreshDrdsAtomUrlWithOptions(const RefreshDrdsAtomUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshDrdsAtomUrl"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDrdsAtomUrlResponse>();
}

/**
 * @param request RefreshDrdsAtomUrlRequest
 * @return RefreshDrdsAtomUrlResponse
 */
RefreshDrdsAtomUrlResponse Client::refreshDrdsAtomUrl(const RefreshDrdsAtomUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDrdsAtomUrlWithOptions(request, runtime);
}

/**
 * @param request ReleaseInstanceInternetAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceInternetAddressResponse
 */
ReleaseInstanceInternetAddressResponse Client::releaseInstanceInternetAddressWithOptions(const ReleaseInstanceInternetAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstanceInternetAddress"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceInternetAddressResponse>();
}

/**
 * @param request ReleaseInstanceInternetAddressRequest
 * @return ReleaseInstanceInternetAddressResponse
 */
ReleaseInstanceInternetAddressResponse Client::releaseInstanceInternetAddress(const ReleaseInstanceInternetAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceInternetAddressWithOptions(request, runtime);
}

/**
 * @param request RemoveBackupsSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBackupsSetResponse
 */
RemoveBackupsSetResponse Client::removeBackupsSetWithOptions(const RemoveBackupsSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveBackupsSet"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveBackupsSetResponse>();
}

/**
 * @param request RemoveBackupsSetRequest
 * @return RemoveBackupsSetResponse
 */
RemoveBackupsSetResponse Client::removeBackupsSet(const RemoveBackupsSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBackupsSetWithOptions(request, runtime);
}

/**
 * @param request RemoveDrdsDbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDrdsDbResponse
 */
RemoveDrdsDbResponse Client::removeDrdsDbWithOptions(const RemoveDrdsDbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDrdsDb"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDrdsDbResponse>();
}

/**
 * @param request RemoveDrdsDbRequest
 * @return RemoveDrdsDbResponse
 */
RemoveDrdsDbResponse Client::removeDrdsDb(const RemoveDrdsDbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDrdsDbWithOptions(request, runtime);
}

/**
 * @param request RemoveDrdsDbFailedRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDrdsDbFailedRecordResponse
 */
RemoveDrdsDbFailedRecordResponse Client::removeDrdsDbFailedRecordWithOptions(const RemoveDrdsDbFailedRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDrdsDbFailedRecord"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDrdsDbFailedRecordResponse>();
}

/**
 * @param request RemoveDrdsDbFailedRecordRequest
 * @return RemoveDrdsDbFailedRecordResponse
 */
RemoveDrdsDbFailedRecordResponse Client::removeDrdsDbFailedRecord(const RemoveDrdsDbFailedRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDrdsDbFailedRecordWithOptions(request, runtime);
}

/**
 * @summary Releases an instance.
 *
 * @description > *   You can call this operation to release an instance that is charged based on only the pay-as-you-go billing method.
 * >*   If the specifications of the instance are being changed, or one or more databases exist in the instance, you cannot call this operation to release the instance.
 *
 * @param request RemoveDrdsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDrdsInstanceResponse
 */
RemoveDrdsInstanceResponse Client::removeDrdsInstanceWithOptions(const RemoveDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDrdsInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDrdsInstanceResponse>();
}

/**
 * @summary Releases an instance.
 *
 * @description > *   You can call this operation to release an instance that is charged based on only the pay-as-you-go billing method.
 * >*   If the specifications of the instance are being changed, or one or more databases exist in the instance, you cannot call this operation to release the instance.
 *
 * @param request RemoveDrdsInstanceRequest
 * @return RemoveDrdsInstanceResponse
 */
RemoveDrdsInstanceResponse Client::removeDrdsInstance(const RemoveDrdsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDrdsInstanceWithOptions(request, runtime);
}

/**
 * @param request RemoveInstanceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInstanceAccountResponse
 */
RemoveInstanceAccountResponse Client::removeInstanceAccountWithOptions(const RemoveInstanceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInstanceAccount"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInstanceAccountResponse>();
}

/**
 * @param request RemoveInstanceAccountRequest
 * @return RemoveInstanceAccountResponse
 */
RemoveInstanceAccountResponse Client::removeInstanceAccount(const RemoveInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeInstanceAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a table in the recycle bin.
 *
 * @param request RemoveRecycleBinTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveRecycleBinTableResponse
 */
RemoveRecycleBinTableResponse Client::removeRecycleBinTableWithOptions(const RemoveRecycleBinTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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
    {"action" , "RemoveRecycleBinTable"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveRecycleBinTableResponse>();
}

/**
 * @summary Deletes a table in the recycle bin.
 *
 * @param request RemoveRecycleBinTableRequest
 * @return RemoveRecycleBinTableResponse
 */
RemoveRecycleBinTableResponse Client::removeRecycleBinTable(const RemoveRecycleBinTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeRecycleBinTableWithOptions(request, runtime);
}

/**
 * @param request RestartDrdsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDrdsInstanceResponse
 */
RestartDrdsInstanceResponse Client::restartDrdsInstanceWithOptions(const RestartDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDrdsInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDrdsInstanceResponse>();
}

/**
 * @param request RestartDrdsInstanceRequest
 * @return RestartDrdsInstanceResponse
 */
RestartDrdsInstanceResponse Client::restartDrdsInstance(const RestartDrdsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDrdsInstanceWithOptions(request, runtime);
}

/**
 * @param request RollbackInstanceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackInstanceVersionResponse
 */
RollbackInstanceVersionResponse Client::rollbackInstanceVersionWithOptions(const RollbackInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackInstanceVersion"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackInstanceVersionResponse>();
}

/**
 * @param request RollbackInstanceVersionRequest
 * @return RollbackInstanceVersionResponse
 */
RollbackInstanceVersionResponse Client::rollbackInstanceVersion(const RollbackInstanceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackInstanceVersionWithOptions(request, runtime);
}

/**
 * @summary Modifies a backup policy.
 *
 * @param request SetBackupLocalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetBackupLocalResponse
 */
SetBackupLocalResponse Client::setBackupLocalWithOptions(const SetBackupLocalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasHighSpaceUsageProtection()) {
    query["HighSpaceUsageProtection"] = request.highSpaceUsageProtection();
  }

  if (!!request.hasLocalLogRetentionHours()) {
    query["LocalLogRetentionHours"] = request.localLogRetentionHours();
  }

  if (!!request.hasLocalLogRetentionSpace()) {
    query["LocalLogRetentionSpace"] = request.localLogRetentionSpace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetBackupLocal"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetBackupLocalResponse>();
}

/**
 * @summary Modifies a backup policy.
 *
 * @param request SetBackupLocalRequest
 * @return SetBackupLocalResponse
 */
SetBackupLocalResponse Client::setBackupLocal(const SetBackupLocalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setBackupLocalWithOptions(request, runtime);
}

/**
 * @param request SetBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetBackupPolicyResponse
 */
SetBackupPolicyResponse Client::setBackupPolicyWithOptions(const SetBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupDbNames()) {
    query["BackupDbNames"] = request.backupDbNames();
  }

  if (!!request.hasBackupLevel()) {
    query["BackupLevel"] = request.backupLevel();
  }

  if (!!request.hasBackupLog()) {
    query["BackupLog"] = request.backupLog();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasDataBackupRetentionPeriod()) {
    query["DataBackupRetentionPeriod"] = request.dataBackupRetentionPeriod();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.logBackupRetentionPeriod();
  }

  if (!!request.hasPreferredBackupEndTime()) {
    query["PreferredBackupEndTime"] = request.preferredBackupEndTime();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupStartTime()) {
    query["PreferredBackupStartTime"] = request.preferredBackupStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetBackupPolicy"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetBackupPolicyResponse>();
}

/**
 * @param request SetBackupPolicyRequest
 * @return SetBackupPolicyResponse
 */
SetBackupPolicyResponse Client::setBackupPolicy(const SetBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures a broadcast table for a database.
 *
 * @param request SetupBroadcastTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupBroadcastTablesResponse
 */
SetupBroadcastTablesResponse Client::setupBroadcastTablesWithOptions(const SetupBroadcastTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.active();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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
    {"action" , "SetupBroadcastTables"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetupBroadcastTablesResponse>();
}

/**
 * @summary Configures a broadcast table for a database.
 *
 * @param request SetupBroadcastTablesRequest
 * @return SetupBroadcastTablesResponse
 */
SetupBroadcastTablesResponse Client::setupBroadcastTables(const SetupBroadcastTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupBroadcastTablesWithOptions(request, runtime);
}

/**
 * @param request SetupDrdsParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupDrdsParamsResponse
 */
SetupDrdsParamsResponse Client::setupDrdsParamsWithOptions(const SetupDrdsParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.paramLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetupDrdsParams"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetupDrdsParamsResponse>();
}

/**
 * @param request SetupDrdsParamsRequest
 * @return SetupDrdsParamsResponse
 */
SetupDrdsParamsResponse Client::setupDrdsParams(const SetupDrdsParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupDrdsParamsWithOptions(request, runtime);
}

/**
 * @summary Enables the table recycle bin for a database.
 *
 * @param request SetupRecycleBinStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupRecycleBinStatusResponse
 */
SetupRecycleBinStatusResponse Client::setupRecycleBinStatusWithOptions(const SetupRecycleBinStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatusAction()) {
    query["StatusAction"] = request.statusAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetupRecycleBinStatus"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetupRecycleBinStatusResponse>();
}

/**
 * @summary Enables the table recycle bin for a database.
 *
 * @param request SetupRecycleBinStatusRequest
 * @return SetupRecycleBinStatusResponse
 */
SetupRecycleBinStatusResponse Client::setupRecycleBinStatus(const SetupRecycleBinStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupRecycleBinStatusWithOptions(request, runtime);
}

/**
 * @param request SetupTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupTableResponse
 */
SetupTableResponse Client::setupTableWithOptions(const SetupTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowFullTableScan()) {
    query["AllowFullTableScan"] = request.allowFullTableScan();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
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
    {"action" , "SetupTable"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetupTableResponse>();
}

/**
 * @param request SetupTableRequest
 * @return SetupTableResponse
 */
SetupTableResponse Client::setupTable(const SetupTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupTableWithOptions(request, runtime);
}

/**
 * @param request StartRestoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRestoreResponse
 */
StartRestoreResponse Client::startRestoreWithOptions(const StartRestoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupDbNames()) {
    query["BackupDbNames"] = request.backupDbNames();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupLevel()) {
    query["BackupLevel"] = request.backupLevel();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRestore"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRestoreResponse>();
}

/**
 * @param request StartRestoreRequest
 * @return StartRestoreResponse
 */
StartRestoreResponse Client::startRestore(const StartRestoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRestoreWithOptions(request, runtime);
}

/**
 * @summary Submits a cleanup task for the scale-out of a PolarDB-X database.
 *
 * @param request SubmitCleanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCleanTaskResponse
 */
SubmitCleanTaskResponse Client::submitCleanTaskWithOptions(const SubmitCleanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasExpandType()) {
    query["ExpandType"] = request.expandType();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasParentJobId()) {
    query["ParentJobId"] = request.parentJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCleanTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCleanTaskResponse>();
}

/**
 * @summary Submits a cleanup task for the scale-out of a PolarDB-X database.
 *
 * @param request SubmitCleanTaskRequest
 * @return SubmitCleanTaskResponse
 */
SubmitCleanTaskResponse Client::submitCleanTask(const SubmitCleanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCleanTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a precheck task for the hot-spot scale-out of a PolarDB-X database. The task is used to check the table that does not contain the primary key.
 *
 * @param request SubmitHotExpandPreCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHotExpandPreCheckTaskResponse
 */
SubmitHotExpandPreCheckTaskResponse Client::submitHotExpandPreCheckTaskWithOptions(const SubmitHotExpandPreCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasTableList()) {
    query["TableList"] = request.tableList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitHotExpandPreCheckTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHotExpandPreCheckTaskResponse>();
}

/**
 * @summary Submits a precheck task for the hot-spot scale-out of a PolarDB-X database. The task is used to check the table that does not contain the primary key.
 *
 * @param request SubmitHotExpandPreCheckTaskRequest
 * @return SubmitHotExpandPreCheckTaskResponse
 */
SubmitHotExpandPreCheckTaskResponse Client::submitHotExpandPreCheckTask(const SubmitHotExpandPreCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitHotExpandPreCheckTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a hot-spot scale-out task for a database.
 *
 * @param request SubmitHotExpandTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHotExpandTaskResponse
 */
SubmitHotExpandTaskResponse Client::submitHotExpandTaskWithOptions(const SubmitHotExpandTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasExtendedMapping()) {
    query["ExtendedMapping"] = request.extendedMapping();
  }

  if (!!request.hasInstanceDbMapping()) {
    query["InstanceDbMapping"] = request.instanceDbMapping();
  }

  if (!!request.hasMapping()) {
    query["Mapping"] = request.mapping();
  }

  if (!!request.hasSupperAccountMapping()) {
    query["SupperAccountMapping"] = request.supperAccountMapping();
  }

  if (!!request.hasTaskDesc()) {
    query["TaskDesc"] = request.taskDesc();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitHotExpandTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHotExpandTaskResponse>();
}

/**
 * @summary Submits a hot-spot scale-out task for a database.
 *
 * @param request SubmitHotExpandTaskRequest
 * @return SubmitHotExpandTaskResponse
 */
SubmitHotExpandTaskResponse Client::submitHotExpandTask(const SubmitHotExpandTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitHotExpandTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X database.
 *
 * @param request SubmitSmoothExpandPreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmoothExpandPreCheckResponse
 */
SubmitSmoothExpandPreCheckResponse Client::submitSmoothExpandPreCheckWithOptions(const SubmitSmoothExpandPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstType()) {
    query["DbInstType"] = request.dbInstType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSmoothExpandPreCheck"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmoothExpandPreCheckResponse>();
}

/**
 * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X database.
 *
 * @param request SubmitSmoothExpandPreCheckRequest
 * @return SubmitSmoothExpandPreCheckResponse
 */
SubmitSmoothExpandPreCheckResponse Client::submitSmoothExpandPreCheck(const SubmitSmoothExpandPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmoothExpandPreCheckWithOptions(request, runtime);
}

/**
 * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X 1.0 database.
 *
 * @param request SubmitSmoothExpandPreCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmoothExpandPreCheckTaskResponse
 */
SubmitSmoothExpandPreCheckTaskResponse Client::submitSmoothExpandPreCheckTaskWithOptions(const SubmitSmoothExpandPreCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSmoothExpandPreCheckTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmoothExpandPreCheckTaskResponse>();
}

/**
 * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X 1.0 database.
 *
 * @param request SubmitSmoothExpandPreCheckTaskRequest
 * @return SubmitSmoothExpandPreCheckTaskResponse
 */
SubmitSmoothExpandPreCheckTaskResponse Client::submitSmoothExpandPreCheckTask(const SubmitSmoothExpandPreCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmoothExpandPreCheckTaskWithOptions(request, runtime);
}

/**
 * @param request SubmitSqlFlashbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSqlFlashbackTaskResponse
 */
SubmitSqlFlashbackTaskResponse Client::submitSqlFlashbackTaskWithOptions(const SubmitSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRecallRestoreType()) {
    query["RecallRestoreType"] = request.recallRestoreType();
  }

  if (!!request.hasRecallType()) {
    query["RecallType"] = request.recallType();
  }

  if (!!request.hasSqlPk()) {
    query["SqlPk"] = request.sqlPk();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.traceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSqlFlashbackTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSqlFlashbackTaskResponse>();
}

/**
 * @param request SubmitSqlFlashbackTaskRequest
 * @return SubmitSqlFlashbackTaskResponse
 */
SubmitSqlFlashbackTaskResponse Client::submitSqlFlashbackTask(const SubmitSqlFlashbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSqlFlashbackTaskWithOptions(request, runtime);
}

/**
 * @summary Switches the mode of broadcast tables from the multi-write mode to the asynchronous link mode.
 *
 * @param request SwitchGlobalBroadcastTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchGlobalBroadcastTypeResponse
 */
SwitchGlobalBroadcastTypeResponse Client::switchGlobalBroadcastTypeWithOptions(const SwitchGlobalBroadcastTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchGlobalBroadcastType"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchGlobalBroadcastTypeResponse>();
}

/**
 * @summary Switches the mode of broadcast tables from the multi-write mode to the asynchronous link mode.
 *
 * @param request SwitchGlobalBroadcastTypeRequest
 * @return SwitchGlobalBroadcastTypeResponse
 */
SwitchGlobalBroadcastTypeResponse Client::switchGlobalBroadcastType(const SwitchGlobalBroadcastTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchGlobalBroadcastTypeWithOptions(request, runtime);
}

/**
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-01-23"},
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
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-01-23"},
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
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the network type of a PolarDB-X 1.0 instance.
 *
 * @param request UpdateInstanceNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNetworkResponse
 */
UpdateInstanceNetworkResponse Client::updateInstanceNetworkWithOptions(const UpdateInstanceNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.classicExpiredDays();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRetainClassic()) {
    query["RetainClassic"] = request.retainClassic();
  }

  if (!!request.hasSrcInstanceNetworkType()) {
    query["SrcInstanceNetworkType"] = request.srcInstanceNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceNetwork"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNetworkResponse>();
}

/**
 * @summary Changes the network type of a PolarDB-X 1.0 instance.
 *
 * @param request UpdateInstanceNetworkRequest
 * @return UpdateInstanceNetworkResponse
 */
UpdateInstanceNetworkResponse Client::updateInstanceNetwork(const UpdateInstanceNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceNetworkWithOptions(request, runtime);
}

/**
 * @summary Updates the specifications of a custom ApsaraDB RDS instance at the storage layer.
 *
 * @param request UpdatePrivateRdsClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivateRdsClassResponse
 */
UpdatePrivateRdsClassResponse Client::updatePrivateRdsClassWithOptions(const UpdatePrivateRdsClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.autoUseCoupon();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasPrePayDuration()) {
    query["PrePayDuration"] = request.prePayDuration();
  }

  if (!!request.hasRdsClass()) {
    query["RdsClass"] = request.rdsClass();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.storage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrivateRdsClass"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateRdsClassResponse>();
}

/**
 * @summary Updates the specifications of a custom ApsaraDB RDS instance at the storage layer.
 *
 * @param request UpdatePrivateRdsClassRequest
 * @return UpdatePrivateRdsClassResponse
 */
UpdatePrivateRdsClassResponse Client::updatePrivateRdsClass(const UpdatePrivateRdsClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateRdsClassWithOptions(request, runtime);
}

/**
 * @param request UpdateResourceGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupAttributeResponse
 */
UpdateResourceGroupAttributeResponse Client::updateResourceGroupAttributeWithOptions(const UpdateResourceGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResourceGroupAttribute"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceGroupAttributeResponse>();
}

/**
 * @param request UpdateResourceGroupAttributeRequest
 * @return UpdateResourceGroupAttributeResponse
 */
UpdateResourceGroupAttributeResponse Client::updateResourceGroupAttribute(const UpdateResourceGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Upgrades the version of a column-oriented storage instance of a PolarDB-X 1.0 instance.
 *
 * @param request UpgradeHiStoreInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeHiStoreInstanceResponse
 */
UpgradeHiStoreInstanceResponse Client::upgradeHiStoreInstanceWithOptions(const UpgradeHiStoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasHistoreInstanceId()) {
    query["HistoreInstanceId"] = request.historeInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeHiStoreInstance"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeHiStoreInstanceResponse>();
}

/**
 * @summary Upgrades the version of a column-oriented storage instance of a PolarDB-X 1.0 instance.
 *
 * @param request UpgradeHiStoreInstanceRequest
 * @return UpgradeHiStoreInstanceResponse
 */
UpgradeHiStoreInstanceResponse Client::upgradeHiStoreInstance(const UpgradeHiStoreInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeHiStoreInstanceWithOptions(request, runtime);
}

/**
 * @param request UpgradeInstanceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeInstanceVersionResponse
 */
UpgradeInstanceVersionResponse Client::upgradeInstanceVersionWithOptions(const UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRpm()) {
    query["Rpm"] = request.rpm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeInstanceVersion"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeInstanceVersionResponse>();
}

/**
 * @param request UpgradeInstanceVersionRequest
 * @return UpgradeInstanceVersionResponse
 */
UpgradeInstanceVersionResponse Client::upgradeInstanceVersion(const UpgradeInstanceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

/**
 * @param request ValidateShardTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateShardTaskResponse
 */
ValidateShardTaskResponse Client::validateShardTaskWithOptions(const ValidateShardTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDrdsInstanceId()) {
    query["DrdsInstanceId"] = request.drdsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceTableName()) {
    query["SourceTableName"] = request.sourceTableName();
  }

  if (!!request.hasTargetTableName()) {
    query["TargetTableName"] = request.targetTableName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateShardTask"},
    {"version" , "2019-01-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateShardTaskResponse>();
}

/**
 * @param request ValidateShardTaskRequest
 * @return ValidateShardTaskResponse
 */
ValidateShardTaskResponse Client::validateShardTask(const ValidateShardTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateShardTaskWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Drds20190123