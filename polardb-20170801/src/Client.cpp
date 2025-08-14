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
    {"cn-shenzhen" , "polardb.aliyuncs.com"},
    {"cn-guangzhou" , "polardb.aliyuncs.com"},
    {"cn-hongkong" , "polardb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "polardb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "polardb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "polardb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "polardb.aliyuncs.com"},
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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

  if (!!request.hasTDERegion()) {
    query["TDERegion"] = request.TDERegion();
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
    query["ContinueEnableBinlog"] = request.continueEnableBinlog();
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
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.accountPrivilege();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrivForAllDB()) {
    query["PrivForAllDB"] = request.privForAllDB();
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
    query["AliyunOrderId"] = request.aliyunOrderId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasMacAddress()) {
    query["MacAddress"] = request.macAddress();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasSystemIdentifier()) {
    query["SystemIdentifier"] = request.systemIdentifier();
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
    query["ClientToken"] = request.clientToken();
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
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasColdStorageInstanceDescription()) {
    query["ColdStorageInstanceDescription"] = request.coldStorageInstanceDescription();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["AllowShutDown"] = request.allowShutDown();
  }

  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.architecture();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.backupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.burstingEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCloneDataPoint()) {
    query["CloneDataPoint"] = request.cloneDataPoint();
  }

  if (!!request.hasClusterNetworkType()) {
    query["ClusterNetworkType"] = request.clusterNetworkType();
  }

  if (!!request.hasCreationCategory()) {
    query["CreationCategory"] = request.creationCategory();
  }

  if (!!request.hasCreationOption()) {
    query["CreationOption"] = request.creationOption();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBMinorVersion()) {
    query["DBMinorVersion"] = request.DBMinorVersion();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.DBNodeClass();
  }

  if (!!request.hasDBNodeNum()) {
    query["DBNodeNum"] = request.DBNodeNum();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasDefaultTimeZone()) {
    query["DefaultTimeZone"] = request.defaultTimeZone();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
  }

  if (!!request.hasHotStandbyCluster()) {
    query["HotStandbyCluster"] = request.hotStandbyCluster();
  }

  if (!!request.hasLoosePolarLogBin()) {
    query["LoosePolarLogBin"] = request.loosePolarLogBin();
  }

  if (!!request.hasLooseXEngine()) {
    query["LooseXEngine"] = request.looseXEngine();
  }

  if (!!request.hasLooseXEngineUseMemoryPct()) {
    query["LooseXEngineUseMemoryPct"] = request.looseXEngineUseMemoryPct();
  }

  if (!!request.hasLowerCaseTableNames()) {
    query["LowerCaseTableNames"] = request.lowerCaseTableNames();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.provisionedIops();
  }

  if (!!request.hasProxyClass()) {
    query["ProxyClass"] = request.proxyClass();
  }

  if (!!request.hasProxyType()) {
    query["ProxyType"] = request.proxyType();
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

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.scaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.scaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.scaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.scaleRoNumMin();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  if (!!request.hasServerlessType()) {
    query["ServerlessType"] = request.serverlessType();
  }

  if (!!request.hasSourceResourceId()) {
    query["SourceResourceId"] = request.sourceResourceId();
  }

  if (!!request.hasStandbyAZ()) {
    query["StandbyAZ"] = request.standbyAZ();
  }

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.storageAutoScale();
  }

  if (!!request.hasStorageEncryption()) {
    query["StorageEncryption"] = request.storageEncryption();
  }

  if (!!request.hasStorageEncryptionKey()) {
    query["StorageEncryptionKey"] = request.storageEncryptionKey();
  }

  if (!!request.hasStoragePayType()) {
    query["StoragePayType"] = request.storagePayType();
  }

  if (!!request.hasStorageSpace()) {
    query["StorageSpace"] = request.storageSpace();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.storageUpperBound();
  }

  if (!!request.hasStrictConsistency()) {
    query["StrictConsistency"] = request.strictConsistency();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.TDEStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.targetMinorVersion();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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
    query["AutoAddNewNodes"] = request.autoAddNewNodes();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.DBEndpointDescription();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.endpointConfig();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.nodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.polarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.polarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.readWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.sccMode();
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
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
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

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasZoneInfo()) {
    query["ZoneInfo"] = request.zoneInfo();
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
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.DBLinkName();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceDBName()) {
    query["SourceDBName"] = request.sourceDBName();
  }

  if (!!request.hasTargetDBAccount()) {
    query["TargetDBAccount"] = request.targetDBAccount();
  }

  if (!!request.hasTargetDBInstanceName()) {
    query["TargetDBInstanceName"] = request.targetDBInstanceName();
  }

  if (!!request.hasTargetDBName()) {
    query["TargetDBName"] = request.targetDBName();
  }

  if (!!request.hasTargetDBPasswd()) {
    query["TargetDBPasswd"] = request.targetDBPasswd();
  }

  if (!!request.hasTargetIp()) {
    query["TargetIp"] = request.targetIp();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.targetPort();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.DBNode();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.DBNodeType();
  }

  if (!!request.hasEndpointBindList()) {
    query["EndpointBindList"] = request.endpointBindList();
  }

  if (!!request.hasImciSwitch()) {
    query["ImciSwitch"] = request.imciSwitch();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.accountPrivilege();
  }

  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.characterSetName();
  }

  if (!!request.hasCollate()) {
    query["Collate"] = request.collate();
  }

  if (!!request.hasCtype()) {
    query["Ctype"] = request.ctype();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.DBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["Description"] = request.description();
  }

  if (!!request.hasDestinationFileSystemPath()) {
    query["DestinationFileSystemPath"] = request.destinationFileSystemPath();
  }

  if (!!request.hasDestinationId()) {
    query["DestinationId"] = request.destinationId();
  }

  if (!!request.hasDestinationRegion()) {
    query["DestinationRegion"] = request.destinationRegion();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasFreezeSourceDuringSync()) {
    query["FreezeSourceDuringSync"] = request.freezeSourceDuringSync();
  }

  if (!!request.hasSourceFileSystemPath()) {
    query["SourceFileSystemPath"] = request.sourceFileSystemPath();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.sourceRegion();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableGlobalDomainName()) {
    query["EnableGlobalDomainName"] = request.enableGlobalDomainName();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.GDNDescription();
  }

  if (!!request.hasGDNVersion()) {
    query["GDNVersion"] = request.GDNVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["GIpList"] = request.GIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.globalIgName();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["Engine"] = request.engine();
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
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupDesc()) {
    query["ParameterGroupDesc"] = request.parameterGroupDesc();
  }

  if (!!request.hasParameterGroupName()) {
    query["ParameterGroupName"] = request.parameterGroupName();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.storageClass();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
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
    query["ApplicationId"] = request.applicationId();
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
    query["BackupId"] = request.backupId();
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
    query["BackupRetentionPolicyOnClusterDeletion"] = request.backupRetentionPolicyOnClusterDeletion();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.DBLinkName();
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
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.DBNodeType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["NetworkId"] = request.networkId();
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
    query["GDNId"] = request.GDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["GlobalIgName"] = request.globalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.interfaceVersion();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.ruleNameList();
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
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
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
    query["ActivationCodeId"] = request.activationCodeId();
  }

  if (!!request.hasAliyunOrderId()) {
    query["AliyunOrderId"] = request.aliyunOrderId();
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
    query["AliyunOrderId"] = request.aliyunOrderId();
  }

  if (!!request.hasMacAddress()) {
    query["MacAddress"] = request.macAddress();
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

  if (!!request.hasSystemIdentifier()) {
    query["SystemIdentifier"] = request.systemIdentifier();
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
    query["AllowCancel"] = request.allowCancel();
  }

  if (!!request.hasAllowChange()) {
    query["AllowChange"] = request.allowChange();
  }

  if (!!request.hasChangeLevel()) {
    query["ChangeLevel"] = request.changeLevel();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @summary Queries the auto-renewal attributes of a subscription PolarDB cluster.
 *
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["BackupRegion"] = request.backupRegion();
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
    query["BackupJobId"] = request.backupJobId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
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
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasBackupRegion()) {
    query["BackupRegion"] = request.backupRegion();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.backupStatus();
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
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasMasterHa()) {
    query["MasterHa"] = request.masterHa();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.describeType();
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
    query["DBNodeClass"] = request.DBNodeClass();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.sourceIpAddress();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.describeType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.describeType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.describeType();
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
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.DBClusterStatus();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasDescribeType()) {
    query["DescribeType"] = request.describeType();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.expired();
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

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRecentCreationInterval()) {
    query["RecentCreationInterval"] = request.recentCreationInterval();
  }

  if (!!request.hasRecentExpirationInterval()) {
    query["RecentExpirationInterval"] = request.recentExpirationInterval();
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
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasIsDeleted()) {
    query["IsDeleted"] = request.isDeleted();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBLinkName()) {
    query["DBLinkName"] = request.DBLinkName();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasBackupRegion()) {
    query["BackupRegion"] = request.backupRegion();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.backupStatus();
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
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["GDNId"] = request.GDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFilterRegion()) {
    query["FilterRegion"] = request.filterRegion();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.GDNDescription();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.logType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    query["FromExecTime"] = request.fromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.fromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.toExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.toStartTime();
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
    query["AliyunOrderId"] = request.aliyunOrderId();
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
    query["AliyunOrderId"] = request.aliyunOrderId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPurchaseChannel()) {
    query["PurchaseChannel"] = request.purchaseChannel();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVirtualOrder()) {
    query["VirtualOrder"] = request.virtualOrder();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.interfaceVersion();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.ruleNameList();
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
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGetDbName()) {
    query["GetDbName"] = request.getDbName();
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

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.regionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBType"] = request.DBType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
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
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    query["IsHistory"] = request.isHistory();
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

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
    query["IsHistory"] = request.isHistory();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
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

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.taskAction();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
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

  if (!!request.hasSQLHASH()) {
    query["SQLHASH"] = request.SQLHASH();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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

  if (!!request.hasTDERegion()) {
    query["TDERegion"] = request.TDERegion();
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
    query["DedicatedHostGroupId"] = request.dedicatedHostGroupId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.scaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.scaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.scaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.scaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.scaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.scaleRoNumMin();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
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

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.ruleNameList();
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
    query["DBInstanceConnType"] = request.DBInstanceConnType();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.DBNodeClass();
  }

  if (!!request.hasDBType()) {
    query["DBType"] = request.DBType();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasDispenseMode()) {
    query["DispenseMode"] = request.dispenseMode();
  }

  if (!!request.hasNeedMaxScaleLink()) {
    query["NeedMaxScaleLink"] = request.needMaxScaleLink();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.subDomain();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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
    query["ClientToken"] = request.clientToken();
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

  if (!!request.hasRollBackForDisaster()) {
    query["RollBackForDisaster"] = request.rollBackForDisaster();
  }

  if (!!request.hasTargetDBNodeId()) {
    query["TargetDBNodeId"] = request.targetDBNodeId();
  }

  if (!!request.hasTargetZoneType()) {
    query["TargetZoneType"] = request.targetZoneType();
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.accountPrivilege();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["NextToken"] = request.nextToken();
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNewAccountPassword()) {
    query["NewAccountPassword"] = request.newAccountPassword();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPasswordType()) {
    query["PasswordType"] = request.passwordType();
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
    query["ImmediateStart"] = request.immediateStart();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
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
 * @summary Modifies the auto-renewal attributes of a subscription PolarDB cluster.
 *
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    request.setAdvancedDataPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.advancedDataPolicies(), "AdvancedDataPolicies", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedDataPoliciesShrink()) {
    query["AdvancedDataPolicies"] = request.advancedDataPoliciesShrink();
  }

  if (!!request.hasBackupFrequency()) {
    query["BackupFrequency"] = request.backupFrequency();
  }

  if (!!request.hasBackupPolicyLevel()) {
    query["BackupPolicyLevel"] = request.backupPolicyLevel();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.backupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDataLevel1BackupFrequency()) {
    query["DataLevel1BackupFrequency"] = request.dataLevel1BackupFrequency();
  }

  if (!!request.hasDataLevel1BackupPeriod()) {
    query["DataLevel1BackupPeriod"] = request.dataLevel1BackupPeriod();
  }

  if (!!request.hasDataLevel1BackupRetentionPeriod()) {
    query["DataLevel1BackupRetentionPeriod"] = request.dataLevel1BackupRetentionPeriod();
  }

  if (!!request.hasDataLevel1BackupTime()) {
    query["DataLevel1BackupTime"] = request.dataLevel1BackupTime();
  }

  if (!!request.hasDataLevel2BackupAnotherRegionRegion()) {
    query["DataLevel2BackupAnotherRegionRegion"] = request.dataLevel2BackupAnotherRegionRegion();
  }

  if (!!request.hasDataLevel2BackupAnotherRegionRetentionPeriod()) {
    query["DataLevel2BackupAnotherRegionRetentionPeriod"] = request.dataLevel2BackupAnotherRegionRetentionPeriod();
  }

  if (!!request.hasDataLevel2BackupPeriod()) {
    query["DataLevel2BackupPeriod"] = request.dataLevel2BackupPeriod();
  }

  if (!!request.hasDataLevel2BackupRetentionPeriod()) {
    query["DataLevel2BackupRetentionPeriod"] = request.dataLevel2BackupRetentionPeriod();
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
    query["CompressStorage"] = request.compressStorage();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeCrashList()) {
    query["DBNodeCrashList"] = request.DBNodeCrashList();
  }

  if (!!request.hasDataSyncMode()) {
    query["DataSyncMode"] = request.dataSyncMode();
  }

  if (!!request.hasFaultInjectionType()) {
    query["FaultInjectionType"] = request.faultInjectionType();
  }

  if (!!request.hasFaultSimulateMode()) {
    query["FaultSimulateMode"] = request.faultSimulateMode();
  }

  if (!!request.hasImciAutoIndex()) {
    query["ImciAutoIndex"] = request.imciAutoIndex();
  }

  if (!!request.hasModifyRowCompression()) {
    query["ModifyRowCompression"] = request.modifyRowCompression();
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

  if (!!request.hasStandbyHAMode()) {
    query["StandbyHAMode"] = request.standbyHAMode();
  }

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.storageAutoScale();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.storageUpperBound();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.tableMeta();
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

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.securityGroupIds();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.securityIps();
  }

  if (!!request.hasWhiteListType()) {
    query["WhiteListType"] = request.whiteListType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStandbyClusterIdListNeedToSync()) {
    query["StandbyClusterIdListNeedToSync"] = request.standbyClusterIdListNeedToSync();
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
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasHotStandbyCluster()) {
    query["HotStandbyCluster"] = request.hotStandbyCluster();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStandbyAZ()) {
    query["StandbyAZ"] = request.standbyAZ();
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
    query["CollectorStatus"] = request.collectorStatus();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProtection()) {
    query["Protection"] = request.protection();
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
    query["AutoAddNewNodes"] = request.autoAddNewNodes();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointDescription()) {
    query["DBEndpointDescription"] = request.DBEndpointDescription();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasEndpointConfig()) {
    query["EndpointConfig"] = request.endpointConfig();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.nodes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPolarSccTimeoutAction()) {
    query["PolarSccTimeoutAction"] = request.polarSccTimeoutAction();
  }

  if (!!request.hasPolarSccWaitTimeout()) {
    query["PolarSccWaitTimeout"] = request.polarSccWaitTimeout();
  }

  if (!!request.hasReadWriteMode()) {
    query["ReadWriteMode"] = request.readWriteMode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSccMode()) {
    query["SccMode"] = request.sccMode();
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
    query["ConnectionStrings"] = request.connectionStrings();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNewMasterInstanceId()) {
    query["NewMasterInstanceId"] = request.newMasterInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSourceRDSDBInstanceId()) {
    query["SourceRDSDBInstanceId"] = request.sourceRDSDBInstanceId();
  }

  if (!!request.hasSwapConnectionString()) {
    query["SwapConnectionString"] = request.swapConnectionString();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasIsSwitchOverForDisaster()) {
    query["IsSwitchOverForDisaster"] = request.isSwitchOverForDisaster();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  if (!!request.hasZoneType()) {
    query["ZoneType"] = request.zoneType();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
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

  if (!!request.hasSSLAutoRotate()) {
    query["SSLAutoRotate"] = request.SSLAutoRotate();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.SSLEnabled();
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
    query["AllowShutDown"] = request.allowShutDown();
  }

  if (!!request.hasCrontabJobId()) {
    query["CrontabJobId"] = request.crontabJobId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScaleApRoNumMax()) {
    query["ScaleApRoNumMax"] = request.scaleApRoNumMax();
  }

  if (!!request.hasScaleApRoNumMin()) {
    query["ScaleApRoNumMin"] = request.scaleApRoNumMin();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.scaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.scaleMin();
  }

  if (!!request.hasScaleRoNumMax()) {
    query["ScaleRoNumMax"] = request.scaleRoNumMax();
  }

  if (!!request.hasScaleRoNumMin()) {
    query["ScaleRoNumMin"] = request.scaleRoNumMin();
  }

  if (!!request.hasSecondsUntilAutoPause()) {
    query["SecondsUntilAutoPause"] = request.secondsUntilAutoPause();
  }

  if (!!request.hasServerlessRuleCpuEnlargeThreshold()) {
    query["ServerlessRuleCpuEnlargeThreshold"] = request.serverlessRuleCpuEnlargeThreshold();
  }

  if (!!request.hasServerlessRuleCpuShrinkThreshold()) {
    query["ServerlessRuleCpuShrinkThreshold"] = request.serverlessRuleCpuShrinkThreshold();
  }

  if (!!request.hasServerlessRuleMode()) {
    query["ServerlessRuleMode"] = request.serverlessRuleMode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.burstingEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.provisionedIops();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStorageSpace()) {
    query["StorageSpace"] = request.storageSpace();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.subCategory();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableAutomaticRotation()) {
    query["EnableAutomaticRotation"] = request.enableAutomaticRotation();
  }

  if (!!request.hasEncryptNewTables()) {
    query["EncryptNewTables"] = request.encryptNewTables();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.encryptionKey();
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

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.roleArn();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.TDEStatus();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.DBDescription();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBEndpointId()) {
    query["DBEndpointId"] = request.DBEndpointId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPrivateZoneAddressPrefix()) {
    query["PrivateZoneAddressPrefix"] = request.privateZoneAddressPrefix();
  }

  if (!!request.hasPrivateZoneName()) {
    query["PrivateZoneName"] = request.privateZoneName();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeTargetClass()) {
    query["DBNodeTargetClass"] = request.DBNodeTargetClass();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.DBNodeType();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedFlashingOffTime()) {
    query["PlannedFlashingOffTime"] = request.plannedFlashingOffTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.subCategory();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeId()) {
    query["DBNodeId"] = request.DBNodeId();
  }

  if (!!request.hasHotReplicaMode()) {
    query["HotReplicaMode"] = request.hotReplicaMode();
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
 * @summary Changes the specifications of a node in a PolarDB cluster.
 *
 * @param request ModifyDBNodesClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodesClassResponse
 */
ModifyDBNodesClassResponse Client::modifyDBNodesClassWithOptions(const ModifyDBNodesClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.DBNode();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedFlashingOffTime()) {
    query["PlannedFlashingOffTime"] = request.plannedFlashingOffTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubCategory()) {
    query["SubCategory"] = request.subCategory();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
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
    query["EnableGlobalDomainName"] = request.enableGlobalDomainName();
  }

  if (!!request.hasGDNDescription()) {
    query["GDNDescription"] = request.GDNDescription();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["GIpList"] = request.GIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.globalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["GlobalIgName"] = request.globalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
 * @param request ModifyLogBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogBackupPolicyResponse
 */
ModifyLogBackupPolicyResponse Client::modifyLogBackupPolicyWithOptions(const ModifyLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLogBackupAnotherRegionRegion()) {
    query["LogBackupAnotherRegionRegion"] = request.logBackupAnotherRegionRegion();
  }

  if (!!request.hasLogBackupAnotherRegionRetentionPeriod()) {
    query["LogBackupAnotherRegionRetentionPeriod"] = request.logBackupAnotherRegionRetentionPeriod();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.logBackupRetentionPeriod();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDefaultAlgo()) {
    query["DefaultAlgo"] = request.defaultAlgo();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasInterfaceVersion()) {
    query["InterfaceVersion"] = request.interfaceVersion();
  }

  if (!!request.hasMaskingAlgo()) {
    query["MaskingAlgo"] = request.maskingAlgo();
  }

  if (!!request.hasRuleConfig()) {
    query["RuleConfig"] = request.ruleConfig();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleNameList()) {
    query["RuleNameList"] = request.ruleNameList();
  }

  if (!!request.hasRuleVersion()) {
    query["RuleVersion"] = request.ruleVersion();
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
    query["Ids"] = request.ids();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
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

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
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
    query["DBClusterId"] = request.DBClusterId();
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

  if (!!request.hasSyncRealTime()) {
    query["SyncRealTime"] = request.syncRealTime();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["DBNodeId"] = request.DBNodeId();
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
    query["BackupId"] = request.backupId();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.tableMeta();
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
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
 * @param request SwitchOverGlobalDatabaseNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchOverGlobalDatabaseNetworkResponse
 */
SwitchOverGlobalDatabaseNetworkResponse Client::switchOverGlobalDatabaseNetworkWithOptions(const SwitchOverGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasForced()) {
    query["Forced"] = request.forced();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
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
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNode()) {
    query["DBNode"] = request.DBNode();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
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
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
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
    query["All"] = request.all();
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFromTimeService()) {
    query["FromTimeService"] = request.fromTimeService();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlannedEndTime()) {
    query["PlannedEndTime"] = request.plannedEndTime();
  }

  if (!!request.hasPlannedStartTime()) {
    query["PlannedStartTime"] = request.plannedStartTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTargetDBRevisionVersionCode()) {
    query["TargetDBRevisionVersionCode"] = request.targetDBRevisionVersionCode();
  }

  if (!!request.hasTargetProxyRevisionVersionCode()) {
    query["TargetProxyRevisionVersionCode"] = request.targetProxyRevisionVersionCode();
  }

  if (!!request.hasUpgradeLabel()) {
    query["UpgradeLabel"] = request.upgradeLabel();
  }

  if (!!request.hasUpgradePolicy()) {
    query["UpgradePolicy"] = request.upgradePolicy();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.upgradeType();
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
} // namespace AlibabaCloud
} // namespace Polardb20170801