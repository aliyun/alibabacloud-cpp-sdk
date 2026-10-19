#include <darabonba/Core.hpp>
#include <alibabacloud/RKvstore20150101.hpp>
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
using namespace AlibabaCloud::RKvstore20150101::Models;
namespace AlibabaCloud
{
namespace RKvstore20150101
{

AlibabaCloud::RKvstore20150101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-finance" , "r-kvstore.aliyuncs.com"},
    {"ap-northeast-2-pop" , "r-kvstore.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "r-kvstore.aliyuncs.com"},
    {"cn-beijing-gov-1" , "r-kvstore.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-edge-1" , "r-kvstore.aliyuncs.com"},
    {"cn-fujian" , "r-kvstore.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "r-kvstore.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "r-kvstore.aliyuncs.com"},
    {"cn-qingdao-nebula" , "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-inner" , "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-inner" , "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-wuhan" , "r-kvstore.aliyuncs.com"},
    {"cn-yushanfang" , "r-kvstore.aliyuncs.com"},
    {"cn-zhangbei" , "r-kvstore.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "r-kvstore.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "r-kvstore.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "r-kvstore.aliyuncs.com"},
    {"eu-west-1-oxs" , "r-kvstore.aliyuncs.com"},
    {"rus-west-1-pop" , "r-kvstore.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("r-kvstore", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds data shard nodes to a cluster instance. This operation supports only cloud-native Cluster Edition instances.
 *
 * @param request AddShardingNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddShardingNodeResponse
 */
AddShardingNodeResponse Client::addShardingNodeWithOptions(const AddShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasForceTrans()) {
    query["ForceTrans"] = request.getForceTrans();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddShardingNode"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddShardingNodeResponse>();
}

/**
 * @summary Adds data shard nodes to a cluster instance. This operation supports only cloud-native Cluster Edition instances.
 *
 * @param request AddShardingNodeRequest
 * @return AddShardingNodeResponse
 */
AddShardingNodeResponse Client::addShardingNode(const AddShardingNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addShardingNodeWithOptions(request, runtime);
}

/**
 * @summary Applies for a direct connection endpoint for an ApsaraDB Tair (Redis® OSS-Compatible) database cluster instance.
 *
 * @description Clients can use the direct connection endpoint to bypass the proxy and connect to the cluster instance in the same way as they connect to a native Redis cluster. This reduces link overhead and further improves the response speed of the ApsaraDB Tair (Redis® OSS-Compatible) database service.
 * The instance for which you invoke this operation must meet the following conditions:
 * * The instance uses the cluster architecture.
 * * The deployment pattern is classic.
 * * The network type of the instance is VPC. If the instance is connected to the classic network, you can invoke the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to switch the network type to VPC.
 * * The Secure Sockets Layer (SSL) encryption feature is disabled for the instance. If the Secure Sockets Layer (SSL) encryption feature is enabled, you can invoke the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation for shutdown.
 *
 * @param request AllocateDirectConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateDirectConnectionResponse
 */
AllocateDirectConnectionResponse Client::allocateDirectConnectionWithOptions(const AllocateDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "AllocateDirectConnection"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateDirectConnectionResponse>();
}

/**
 * @summary Applies for a direct connection endpoint for an ApsaraDB Tair (Redis® OSS-Compatible) database cluster instance.
 *
 * @description Clients can use the direct connection endpoint to bypass the proxy and connect to the cluster instance in the same way as they connect to a native Redis cluster. This reduces link overhead and further improves the response speed of the ApsaraDB Tair (Redis® OSS-Compatible) database service.
 * The instance for which you invoke this operation must meet the following conditions:
 * * The instance uses the cluster architecture.
 * * The deployment pattern is classic.
 * * The network type of the instance is VPC. If the instance is connected to the classic network, you can invoke the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to switch the network type to VPC.
 * * The Secure Sockets Layer (SSL) encryption feature is disabled for the instance. If the Secure Sockets Layer (SSL) encryption feature is enabled, you can invoke the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation for shutdown.
 *
 * @param request AllocateDirectConnectionRequest
 * @return AllocateDirectConnectionResponse
 */
AllocateDirectConnectionResponse Client::allocateDirectConnection(const AllocateDirectConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateDirectConnectionWithOptions(request, runtime);
}

/**
 * @summary Applies for a public endpoint for a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, see [Apply for a public endpoint](https://help.aliyun.com/document_detail/124920.html).
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnectionWithOptions(const AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "AllocateInstancePublicConnection"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateInstancePublicConnectionResponse>();
}

/**
 * @summary Applies for a public endpoint for a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, see [Apply for a public endpoint](https://help.aliyun.com/document_detail/124920.html).
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Cancels O&M events in batches.
 *
 * @description Scenarios in which O&M events cannot be canceled
 * - allowCancel is 0.
 * - The current time is later than the start time of the O&M event.
 * - The status of the O&M event is not 3 (waiting for execution).
 *
 * @param request CancelActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasksWithOptions(const CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2015-01-01"},
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
 * @summary Cancels O&M events in batches.
 *
 * @description Scenarios in which O&M events cannot be canceled
 * - allowCancel is 0.
 * - The current time is later than the start time of the O&M event.
 * - The status of the O&M event is not 3 (waiting for execution).
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Disables an AI assistant inspection task.
 *
 * @param request CancelInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelInspectionTaskResponse
 */
CancelInspectionTaskResponse Client::cancelInspectionTaskWithOptions(const CancelInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelInspectionTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelInspectionTaskResponse>();
}

/**
 * @summary Disables an AI assistant inspection task.
 *
 * @param request CancelInspectionTaskRequest
 * @return CancelInspectionTaskResponse
 */
CancelInspectionTaskResponse Client::cancelInspectionTask(const CancelInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Queries whether an ApsaraDB for Redis (Tair) instance has been granted authorization to use the Key Management Service (KMS).
 *
 * @description * For more information about Transparent Data Encryption (TDE) and related precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 * * After you call this operation to confirm that the authorization is complete, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorizedWithOptions(const CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCloudResourceAuthorized"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCloudResourceAuthorizedResponse>();
}

/**
 * @summary Queries whether an ApsaraDB for Redis (Tair) instance has been granted authorization to use the Key Management Service (KMS).
 *
 * @description * For more information about Transparent Data Encryption (TDE) and related precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 * * After you call this operation to confirm that the authorization is complete, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

/**
 * @summary Creates an account for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * This operation supports only instances that are compatible with Redis 4.0 or later.
 *  * The instance status must be Running when you call this operation. 
 *  * You can create up to 18 accounts for each instance.
 * > For the console operation that corresponds to this API operation, see [Account management](https://help.aliyun.com/document_detail/92665.html).
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2015-01-01"},
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
 * @summary Creates an account for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * This operation supports only instances that are compatible with Redis 4.0 or later.
 *  * The instance status must be Running when you call this operation. 
 *  * You can create up to 18 accounts for each instance.
 * > For the console operation that corresponds to this API operation, see [Account management](https://help.aliyun.com/document_detail/92665.html).
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a data backup for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "CreateBackup"},
    {"version" , "2015-01-01"},
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
 * @summary Creates a data backup for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Manually initiates a cache analysis task for an instance.
 *
 * @description This operation is no longer recommended. Use the new operation [Real-time Top Key Statistics and Offline Full Key Analysis](https://help.aliyun.com/document_detail/184226.html) instead.
 *
 * @param request CreateCacheAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCacheAnalysisTaskResponse
 */
CreateCacheAnalysisTaskResponse Client::createCacheAnalysisTaskWithOptions(const CreateCacheAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "CreateCacheAnalysisTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCacheAnalysisTaskResponse>();
}

/**
 * @summary Manually initiates a cache analysis task for an instance.
 *
 * @description This operation is no longer recommended. Use the new operation [Real-time Top Key Statistics and Offline Full Key Analysis](https://help.aliyun.com/document_detail/184226.html) instead.
 *
 * @param request CreateCacheAnalysisTaskRequest
 * @return CreateCacheAnalysisTaskResponse
 */
CreateCacheAnalysisTaskResponse Client::createCacheAnalysisTask(const CreateCacheAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCacheAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Converts an existing Tair memory-optimized (Classic Edition) instance into the first child instance of a distributed instance.
 *
 * @description You can call this operation to convert an existing instance into the first child instance of a distributed instance. After the conversion, the distributed instance to which the instance belongs is created.
 * The instance to be converted must meet the following requirements:
 * * The instance is a Tair [memory-optimized](https://help.aliyun.com/document_detail/126164.html) (Classic Edition) instance.
 * * If the instance uses a cluster architecture, you must disable the direct connection mode. For more information, see [Release a direct connection endpoint](https://help.aliyun.com/document_detail/150047.html).
 * > You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which it belongs is created.
 *
 * @param request CreateGlobalDistributeCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalDistributeCacheResponse
 */
CreateGlobalDistributeCacheResponse Client::createGlobalDistributeCacheWithOptions(const CreateGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
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

  if (!!request.hasSeedSubInstanceId()) {
    query["SeedSubInstanceId"] = request.getSeedSubInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalDistributeCache"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalDistributeCacheResponse>();
}

/**
 * @summary Converts an existing Tair memory-optimized (Classic Edition) instance into the first child instance of a distributed instance.
 *
 * @description You can call this operation to convert an existing instance into the first child instance of a distributed instance. After the conversion, the distributed instance to which the instance belongs is created.
 * The instance to be converted must meet the following requirements:
 * * The instance is a Tair [memory-optimized](https://help.aliyun.com/document_detail/126164.html) (Classic Edition) instance.
 * * If the instance uses a cluster architecture, you must disable the direct connection mode. For more information, see [Release a direct connection endpoint](https://help.aliyun.com/document_detail/150047.html).
 * > You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which it belongs is created.
 *
 * @param request CreateGlobalDistributeCacheRequest
 * @return CreateGlobalDistributeCacheResponse
 */
CreateGlobalDistributeCacheResponse Client::createGlobalDistributeCache(const CreateGlobalDistributeCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalDistributeCacheWithOptions(request, runtime);
}

/**
 * @summary Creates a global IP address whitelist template.
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
    {"version" , "2015-01-01"},
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
 * @summary Creates a global IP address whitelist template.
 *
 * @param request CreateGlobalSecurityIPGroupRequest
 * @return CreateGlobalSecurityIPGroupResponse
 */
CreateGlobalSecurityIPGroupResponse Client::createGlobalSecurityIPGroup(const CreateGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled inspection task configuration.
 *
 * @param request CreateInspectionScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInspectionScheduleResponse
 */
CreateInspectionScheduleResponse Client::createInspectionScheduleWithOptions(const CreateInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInspectionWindow()) {
    query["InspectionWindow"] = request.getInspectionWindow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasScheduleName()) {
    query["ScheduleName"] = request.getScheduleName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInspectionSchedule"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInspectionScheduleResponse>();
}

/**
 * @summary Creates a scheduled inspection task configuration.
 *
 * @param request CreateInspectionScheduleRequest
 * @return CreateInspectionScheduleResponse
 */
CreateInspectionScheduleResponse Client::createInspectionSchedule(const CreateInspectionScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInspectionScheduleWithOptions(request, runtime);
}

/**
 * @summary Creates a manual inspection task.
 *
 * @param request CreateInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInspectionTaskResponse
 */
CreateInspectionTaskResponse Client::createInspectionTaskWithOptions(const CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInspectionTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInspectionTaskResponse>();
}

/**
 * @summary Creates a manual inspection task.
 *
 * @param request CreateInspectionTaskRequest
 * @return CreateInspectionTaskResponse
 */
CreateInspectionTaskResponse Client::createInspectionTask(const CreateInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for Redis Community Edition instance with the classic or cloud-native architecture, or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the CreateTairInstance operation.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
 * This operation can be used to create an ApsaraDB for Redis Community Edition instance or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
 * > For information about how to create an ApsaraDB for Redis instance in the console and how to select an instance type, see [Create an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/26351.html).
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppendonly()) {
    query["Appendonly"] = request.getAppendonly();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClusterBackupId()) {
    query["ClusterBackupId"] = request.getClusterBackupId();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGlobalInstance()) {
    query["GlobalInstance"] = request.getGlobalInstance();
  }

  if (!!request.hasGlobalInstanceId()) {
    query["GlobalInstanceId"] = request.getGlobalInstanceId();
  }

  if (!!request.hasGlobalSecurityGroupIds()) {
    query["GlobalSecurityGroupIds"] = request.getGlobalSecurityGroupIds();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceEndpointType()) {
    query["InstanceEndpointType"] = request.getInstanceEndpointType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMaintainEndTime()) {
    query["MaintainEndTime"] = request.getMaintainEndTime();
  }

  if (!!request.hasMaintainStartTime()) {
    query["MaintainStartTime"] = request.getMaintainStartTime();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  if (!!request.hasParamGroupId()) {
    query["ParamGroupId"] = request.getParamGroupId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasReadOnlyCount()) {
    query["ReadOnlyCount"] = request.getReadOnlyCount();
  }

  if (!!request.hasRecoverConfigMode()) {
    query["RecoverConfigMode"] = request.getRecoverConfigMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicaCount()) {
    query["ReplicaCount"] = request.getReplicaCount();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasSlaveReadOnlyCount()) {
    query["SlaveReadOnlyCount"] = request.getSlaveReadOnlyCount();
  }

  if (!!request.hasSlaveReplicaCount()) {
    query["SlaveReplicaCount"] = request.getSlaveReplicaCount();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.getSrcDBInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
    {"action" , "CreateInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an ApsaraDB for Redis Community Edition instance with the classic or cloud-native architecture, or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the CreateTairInstance operation.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
 * This operation can be used to create an ApsaraDB for Redis Community Edition instance or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
 * > For information about how to create an ApsaraDB for Redis instance in the console and how to select an instance type, see [Create an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/26351.html).
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates multiple VIPs for an instance.
 *
 * @param request CreateInstanceMultiVIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceMultiVIPResponse
 */
CreateInstanceMultiVIPResponse Client::createInstanceMultiVIPWithOptions(const CreateInstanceMultiVIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddCount()) {
    query["AddCount"] = request.getAddCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "CreateInstanceMultiVIP"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceMultiVIPResponse>();
}

/**
 * @summary Creates multiple VIPs for an instance.
 *
 * @param request CreateInstanceMultiVIPRequest
 * @return CreateInstanceMultiVIPResponse
 */
CreateInstanceMultiVIPResponse Client::createInstanceMultiVIP(const CreateInstanceMultiVIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceMultiVIPWithOptions(request, runtime);
}

/**
 * @summary Creates multiple ApsaraDB for Tair (Redis OSS-compatible) database Classic Edition instances.
 *
 * @description Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the ApsaraDB for Tair (Redis OSS-compatible) database before you call this API operation.
 * > This API operation only supports creating Classic Edition instances.
 * Use the following operations to create a single instance:
 * > - [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates an open-source Redis instance or a Tair memory-optimized Classic Edition instance.
 * > - [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair cloud-native instance (including memory-optimized, persistent memory-optimized, and disk-optimized instances).
 *
 * @param request CreateInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstancesResponse
 */
CreateInstancesResponse Client::createInstancesWithOptions(const CreateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRebuildInstance()) {
    query["RebuildInstance"] = request.getRebuildInstance();
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

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstances"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstancesResponse>();
}

/**
 * @summary Creates multiple ApsaraDB for Tair (Redis OSS-compatible) database Classic Edition instances.
 *
 * @description Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the ApsaraDB for Tair (Redis OSS-compatible) database before you call this API operation.
 * > This API operation only supports creating Classic Edition instances.
 * Use the following operations to create a single instance:
 * > - [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates an open-source Redis instance or a Tair memory-optimized Classic Edition instance.
 * > - [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair cloud-native instance (including memory-optimized, persistent memory-optimized, and disk-optimized instances).
 *
 * @param request CreateInstancesRequest
 * @return CreateInstancesResponse
 */
CreateInstancesResponse Client::createInstances(const CreateInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstancesWithOptions(request, runtime);
}

/**
 * @summary Creates a parameter template.
 *
 * @description Parameter templates are applicable only to instances deployed in cloud-native deployment mode (formerly cloud disk instances).
 *
 * @param request CreateParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroupWithOptions(const CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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
    {"action" , "CreateParameterGroup"},
    {"version" , "2015-01-01"},
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
 * @description Parameter templates are applicable only to instances deployed in cloud-native deployment mode (formerly cloud disk instances).
 *
 * @param request CreateParameterGroupRequest
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroup(const CreateParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterGroupWithOptions(request, runtime);
}

/**
 * @summary 创建TairCustom实例
 *
 * @param request CreateTCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTCInstanceResponse
 */
CreateTCInstanceResponse Client::createTCInstanceWithOptions(const CreateTCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDataDisk()) {
    query["DataDisk"] = request.getDataDisk();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNeedEni()) {
    query["NeedEni"] = request.getNeedEni();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
    {"action" , "CreateTCInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTCInstanceResponse>();
}

/**
 * @summary 创建TairCustom实例
 *
 * @param request CreateTCInstanceRequest
 * @return CreateTCInstanceResponse
 */
CreateTCInstanceResponse Client::createTCInstance(const CreateTCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTCInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud-native Tair (Enterprise Edition) instance.
 *
 * @description For selection reference, see [Must-read for selecting Tair database (Redis OSS-Compatible)](https://help.aliyun.com/document_detail/223808.html).
 * Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair database (Redis OSS-Compatible) before you invoke this operation.
 * > * For instructions on how to perform this operation in the console, see [Create a Tair instance](https://help.aliyun.com/document_detail/26351.html).
 * > * To create other types of instances, such as open-source instances or [Tair memory-optimized](https://help.aliyun.com/document_detail/126164.html) classic instances, you can invoke the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
 *
 * @param request CreateTairInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTairInstanceResponse
 */
CreateTairInstanceResponse Client::createTairInstanceWithOptions(const CreateTairInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterBackupId()) {
    query["ClusterBackupId"] = request.getClusterBackupId();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGlobalInstanceId()) {
    query["GlobalInstanceId"] = request.getGlobalInstanceId();
  }

  if (!!request.hasGlobalSecurityGroupIds()) {
    query["GlobalSecurityGroupIds"] = request.getGlobalSecurityGroupIds();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceEndpointType()) {
    query["InstanceEndpointType"] = request.getInstanceEndpointType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasParamGroupId()) {
    query["ParamGroupId"] = request.getParamGroupId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasReadOnlyCount()) {
    query["ReadOnlyCount"] = request.getReadOnlyCount();
  }

  if (!!request.hasRecoverConfigMode()) {
    query["RecoverConfigMode"] = request.getRecoverConfigMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicaCount()) {
    query["ReplicaCount"] = request.getReplicaCount();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasShardType()) {
    query["ShardType"] = request.getShardType();
  }

  if (!!request.hasSlaveReadOnlyCount()) {
    query["SlaveReadOnlyCount"] = request.getSlaveReadOnlyCount();
  }

  if (!!request.hasSlaveReplicaCount()) {
    query["SlaveReplicaCount"] = request.getSlaveReplicaCount();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.getSrcDBInstanceId();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
    {"action" , "CreateTairInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTairInstanceResponse>();
}

/**
 * @summary Creates a cloud-native Tair (Enterprise Edition) instance.
 *
 * @description For selection reference, see [Must-read for selecting Tair database (Redis OSS-Compatible)](https://help.aliyun.com/document_detail/223808.html).
 * Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair database (Redis OSS-Compatible) before you invoke this operation.
 * > * For instructions on how to perform this operation in the console, see [Create a Tair instance](https://help.aliyun.com/document_detail/26351.html).
 * > * To create other types of instances, such as open-source instances or [Tair memory-optimized](https://help.aliyun.com/document_detail/126164.html) classic instances, you can invoke the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
 *
 * @param request CreateTairInstanceRequest
 * @return CreateTairInstanceResponse
 */
CreateTairInstanceResponse Client::createTairInstance(const CreateTairInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTairInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a Tair VNode virtual node instance.
 *
 * @param request CreateTairKVCacheVNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTairKVCacheVNodeResponse
 */
CreateTairKVCacheVNodeResponse Client::createTairKVCacheVNodeWithOptions(const CreateTairKVCacheVNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComputeUnitNum()) {
    query["ComputeUnitNum"] = request.getComputeUnitNum();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasElasticTimeRange()) {
    query["ElasticTimeRange"] = request.getElasticTimeRange();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVNodeType()) {
    query["VNodeType"] = request.getVNodeType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVkName()) {
    query["VkName"] = request.getVkName();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTairKVCacheVNode"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTairKVCacheVNodeResponse>();
}

/**
 * @summary Creates a Tair VNode virtual node instance.
 *
 * @param request CreateTairKVCacheVNodeRequest
 * @return CreateTairKVCacheVNodeResponse
 */
CreateTairKVCacheVNodeResponse Client::createTairKVCacheVNode(const CreateTairKVCacheVNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTairKVCacheVNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a Tair Serverless KV table instance.
 *
 * @description ## Operation description
 * - Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
 *
 * @param request CreateTairSkvDdbTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTairSkvDdbTableResponse
 */
CreateTairSkvDdbTableResponse Client::createTairSkvDdbTableWithOptions(const CreateTairSkvDdbTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.getSchema();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.getSrcDBInstanceId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTtlSpec()) {
    query["TtlSpec"] = request.getTtlSpec();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTairSkvDdbTable"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTairSkvDdbTableResponse>();
}

/**
 * @summary Creates a Tair Serverless KV table instance.
 *
 * @description ## Operation description
 * - Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
 *
 * @param request CreateTairSkvDdbTableRequest
 * @return CreateTairSkvDdbTableResponse
 */
CreateTairSkvDdbTableResponse Client::createTairSkvDdbTable(const CreateTairSkvDdbTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTairSkvDdbTableWithOptions(request, runtime);
}

/**
 * @summary Creates a Tair Serverless KV workspace instance.
 *
 * @description ## Request description
 * - Before you call this operation, make sure that you understand the billing methods and [pricing details](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
 * - To create a Tair Serverless KV table instance, call the `CreateTairSkvDdbTable` operation.
 *
 * @param request CreateTairSkvDdbWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTairSkvDdbWorkspaceResponse
 */
CreateTairSkvDdbWorkspaceResponse Client::createTairSkvDdbWorkspaceWithOptions(const CreateTairSkvDdbWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
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
    {"action" , "CreateTairSkvDdbWorkspace"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTairSkvDdbWorkspaceResponse>();
}

/**
 * @summary Creates a Tair Serverless KV workspace instance.
 *
 * @description ## Request description
 * - Before you call this operation, make sure that you understand the billing methods and [pricing details](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
 * - To create a Tair Serverless KV table instance, call the `CreateTairSkvDdbTable` operation.
 *
 * @param request CreateTairSkvDdbWorkspaceRequest
 * @return CreateTairSkvDdbWorkspaceResponse
 */
CreateTairSkvDdbWorkspaceResponse Client::createTairSkvDdbWorkspace(const CreateTairSkvDdbWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTairSkvDdbWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes an account of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * This API operation supports only instances that are compatible with Redis 4.0 or later.
 * * You can call this API operation only when the instance is in the Running state.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2015-01-01"},
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
 * @summary Deletes an account of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * This API operation supports only instances that are compatible with Redis 4.0 or later.
 * * You can call this API operation only when the instance is in the Running state.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified backup set. Only manual backup sets can be deleted.
 *
 * @description * This operation supports only cloud-native edition instances.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"version" , "2015-01-01"},
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
 * @summary Deletes a specified backup set. Only manual backup sets can be deleted.
 *
 * @description * This operation supports only cloud-native edition instances.
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Deletes a global IP address whitelist template.
 *
 * @description Before you delete an IP whitelist template, dissociate all instances that are associated with the template.
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
    {"version" , "2015-01-01"},
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
 * @summary Deletes a global IP address whitelist template.
 *
 * @description Before you delete an IP whitelist template, dissociate all instances that are associated with the template.
 *
 * @param request DeleteGlobalSecurityIPGroupRequest
 * @return DeleteGlobalSecurityIPGroupResponse
 */
DeleteGlobalSecurityIPGroupResponse Client::deleteGlobalSecurityIPGroup(const DeleteGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduled inspection task.
 *
 * @description For the console operation that corresponds to this API, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * * The instance status is Running.
 * * The payer of the instance is pay-as-you-go.
 * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release when they expire. To release a subscription instance in advance, perform the operation in the console.
 *
 * @param request DeleteInspectionScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInspectionScheduleResponse
 */
DeleteInspectionScheduleResponse Client::deleteInspectionScheduleWithOptions(const DeleteInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScheduleId()) {
    query["ScheduleId"] = request.getScheduleId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInspectionSchedule"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInspectionScheduleResponse>();
}

/**
 * @summary Deletes a scheduled inspection task.
 *
 * @description For the console operation that corresponds to this API, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * * The instance status is Running.
 * * The payer of the instance is pay-as-you-go.
 * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release when they expire. To release a subscription instance in advance, perform the operation in the console.
 *
 * @param request DeleteInspectionScheduleRequest
 * @return DeleteInspectionScheduleResponse
 */
DeleteInspectionScheduleResponse Client::deleteInspectionSchedule(const DeleteInspectionScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInspectionScheduleWithOptions(request, runtime);
}

/**
 * @summary Releases an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * * The instance status is Running.
 * * The payer uses the pay-as-you-go billing method.
 * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release after they expire. To release a subscription instance in advance, perform the operation in the console.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalInstanceId()) {
    query["GlobalInstanceId"] = request.getGlobalInstanceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DeleteInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Releases an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * * The instance status is Running.
 * * The payer uses the pay-as-you-go billing method.
 * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release after they expire. To release a subscription instance in advance, perform the operation in the console.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a parameter template.
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
    {"action" , "DeleteParameterGroup"},
    {"version" , "2015-01-01"},
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
 * @summary Deletes a parameter template.
 *
 * @param request DeleteParameterGroupRequest
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroup(const DeleteParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes data shard nodes from a cluster instance. This operation is supported only for cloud-native instances in the cluster architecture.
 *
 * @param request DeleteShardingNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteShardingNodeResponse
 */
DeleteShardingNodeResponse Client::deleteShardingNodeWithOptions(const DeleteShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasForceTrans()) {
    query["ForceTrans"] = request.getForceTrans();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteShardingNode"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteShardingNodeResponse>();
}

/**
 * @summary Deletes data shard nodes from a cluster instance. This operation is supported only for cloud-native instances in the cluster architecture.
 *
 * @param request DeleteShardingNodeRequest
 * @return DeleteShardingNodeResponse
 */
DeleteShardingNodeResponse Client::deleteShardingNode(const DeleteShardingNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteShardingNodeWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an account in a specified ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSearchAccountName()) {
    query["SearchAccountName"] = request.getSearchAccountName();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the information about an account in a specified ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the O&M task configuration of an instance.
 *
 * @param request DescribeActiveOperationMaintenanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintenanceConfigResponse
 */
DescribeActiveOperationMaintenanceConfigResponse Client::describeActiveOperationMaintenanceConfigWithOptions(const DescribeActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationMaintenanceConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationMaintenanceConfigResponse>();
}

/**
 * @summary Queries the O&M task configuration of an instance.
 *
 * @param request DescribeActiveOperationMaintenanceConfigRequest
 * @return DescribeActiveOperationMaintenanceConfigResponse
 */
DescribeActiveOperationMaintenanceConfigResponse Client::describeActiveOperationMaintenanceConfig(const DescribeActiveOperationMaintenanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintenanceConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of O&M tasks for an ApsaraDB for Redis (Tair) instance.
 *
 * @description After you call this operation to check whether O&M tasks exist, you can call [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) to modify the scheduled switchover time of an O&M task.
 *
 * @param request DescribeActiveOperationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskResponse
 */
DescribeActiveOperationTaskResponse Client::describeActiveOperationTaskWithOptions(const DescribeActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeActiveOperationTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskResponse>();
}

/**
 * @summary Queries the details of O&M tasks for an ApsaraDB for Redis (Tair) instance.
 *
 * @description After you call this operation to check whether O&M tasks exist, you can call [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) to modify the scheduled switchover time of an O&M task.
 *
 * @param request DescribeActiveOperationTaskRequest
 * @return DescribeActiveOperationTaskResponse
 */
DescribeActiveOperationTaskResponse Client::describeActiveOperationTask(const DescribeActiveOperationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the number of O&M tasks for a Tair instance.
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCountWithOptions(const DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTaskCount"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskCountResponse>();
}

/**
 * @summary Queries the number of O&M tasks for a Tair instance.
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskCountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of O&M events for an instance.
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

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasInsName()) {
    query["InsName"] = request.getInsName();
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

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
    {"version" , "2015-01-01"},
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
 * @summary Queries the details of O&M events for an instance.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the audit log configuration of a Tair (Redis® OSS-Compatible) instance, such as whether audit logging is enabled and the log retention period.
 *
 * @description Before calling this operation, audit logging must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Audit logs](https://help.aliyun.com/document_detail/102015.html).
 *
 * @param request DescribeAuditLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogConfigResponse
 */
DescribeAuditLogConfigResponse Client::describeAuditLogConfigWithOptions(const DescribeAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeAuditLogConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogConfigResponse>();
}

/**
 * @summary Queries the audit log configuration of a Tair (Redis® OSS-Compatible) instance, such as whether audit logging is enabled and the log retention period.
 *
 * @description Before calling this operation, audit logging must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Audit logs](https://help.aliyun.com/document_detail/102015.html).
 *
 * @param request DescribeAuditLogConfigRequest
 * @return DescribeAuditLogConfigResponse
 */
DescribeAuditLogConfigResponse Client::describeAuditLogConfig(const DescribeAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the audit logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description When you call this operation, the audit log feature must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
 *
 * @param request DescribeAuditRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditRecordsResponse
 */
DescribeAuditRecordsResponse Client::describeAuditRecordsWithOptions(const DescribeAuditRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.getQueryKeywords();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditRecords"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditRecordsResponse>();
}

/**
 * @summary Queries the audit logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description When you call this operation, the audit log feature must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
 *
 * @param request DescribeAuditRecordsRequest
 * @return DescribeAuditRecordsResponse
 */
DescribeAuditRecordsResponse Client::describeAuditRecords(const DescribeAuditRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the instance types available for creation in a specified zone.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceScene()) {
    query["InstanceScene"] = request.getInstanceScene();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
    {"action" , "DescribeAvailableResource"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourceResponse>();
}

/**
 * @summary Queries the instance types available for creation in a specified zone.
 *
 * @param request DescribeAvailableResourceRequest
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource(const DescribeAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the backup policy of a Tair (Redis® OSS-Compatible) instance, including the backup cycle and backup time.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the backup policy of a Tair (Redis® OSS-Compatible) instance, including the backup cycle and backup time.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of backup tasks for a Tair (Redis® OSS-Compatible) database instance.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobMode()) {
    query["JobMode"] = request.getJobMode();
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
    {"action" , "DescribeBackupTasks"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the execution status of backup tasks for a Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeBackupTasksRequest
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasks(const DescribeBackupTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the backup file information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is not applicable to cloud-native cluster architecture instances. If needed, use the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation.
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

  if (!!request.hasBackupJobId()) {
    query["BackupJobId"] = request.getBackupJobId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedAof()) {
    query["NeedAof"] = request.getNeedAof();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the backup file information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is not applicable to cloud-native cluster architecture instances. If needed, use the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the cache analysis report for an instance on a specified date.
 *
 * @description This API operation is deprecated. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html) instead.
 *
 * @param request DescribeCacheAnalysisReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisReportResponse
 */
DescribeCacheAnalysisReportResponse Client::describeCacheAnalysisReportWithOptions(const DescribeCacheAnalysisReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisType()) {
    query["AnalysisType"] = request.getAnalysisType();
  }

  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasPageNumbers()) {
    query["PageNumbers"] = request.getPageNumbers();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheAnalysisReport"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheAnalysisReportResponse>();
}

/**
 * @summary Retrieves the cache analysis report for an instance on a specified date.
 *
 * @description This API operation is deprecated. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html) instead.
 *
 * @param request DescribeCacheAnalysisReportRequest
 * @return DescribeCacheAnalysisReportResponse
 */
DescribeCacheAnalysisReportResponse Client::describeCacheAnalysisReport(const DescribeCacheAnalysisReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheAnalysisReportWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cache analysis reports of an instance.
 *
 * @description This operation is no longer recommended. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html).
 *
 * @param request DescribeCacheAnalysisReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisReportListResponse
 */
DescribeCacheAnalysisReportListResponse Client::describeCacheAnalysisReportListWithOptions(const DescribeCacheAnalysisReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasPageNumbers()) {
    query["PageNumbers"] = request.getPageNumbers();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheAnalysisReportList"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheAnalysisReportListResponse>();
}

/**
 * @summary Queries the list of cache analysis reports of an instance.
 *
 * @description This operation is no longer recommended. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html).
 *
 * @param request DescribeCacheAnalysisReportListRequest
 * @return DescribeCacheAnalysisReportListResponse
 */
DescribeCacheAnalysisReportListResponse Client::describeCacheAnalysisReportList(const DescribeCacheAnalysisReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheAnalysisReportListWithOptions(request, runtime);
}

/**
 * @summary Queries the backup list of an ApsaraDB for Tair (Redis-compatible) database cluster instance.
 *
 * @description This operation is applicable only to cloud-native instances.
 *
 * @param request DescribeClusterBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterBackupListResponse
 */
DescribeClusterBackupListResponse Client::describeClusterBackupListWithOptions(const DescribeClusterBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterBackupList"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterBackupListResponse>();
}

/**
 * @summary Queries the backup list of an ApsaraDB for Tair (Redis-compatible) database cluster instance.
 *
 * @description This operation is applicable only to cloud-native instances.
 *
 * @param request DescribeClusterBackupListRequest
 * @return DescribeClusterBackupListResponse
 */
DescribeClusterBackupListResponse Client::describeClusterBackupList(const DescribeClusterBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterBackupListWithOptions(request, runtime);
}

/**
 * @summary Queries the node configuration information of a Tair (Redis® OSS-Compatible) cluster instance, such as specifications and maximum connections.
 *
 * @description > This operation is applicable only to [cloud-native instances](https://help.aliyun.com/document_detail/188068.html) in the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
 *
 * @param request DescribeClusterMemberInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterMemberInfoResponse
 */
DescribeClusterMemberInfoResponse Client::describeClusterMemberInfoWithOptions(const DescribeClusterMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterMemberInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterMemberInfoResponse>();
}

/**
 * @summary Queries the node configuration information of a Tair (Redis® OSS-Compatible) cluster instance, such as specifications and maximum connections.
 *
 * @description > This operation is applicable only to [cloud-native instances](https://help.aliyun.com/document_detail/188068.html) in the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
 *
 * @param request DescribeClusterMemberInfoRequest
 * @return DescribeClusterMemberInfoResponse
 */
DescribeClusterMemberInfoResponse Client::describeClusterMemberInfo(const DescribeClusterMemberInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterMemberInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring collection granularity of a Tair instance.
 *
 * @param request DescribeDBInstanceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceMonitorResponse
 */
DescribeDBInstanceMonitorResponse Client::describeDBInstanceMonitorWithOptions(const DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeDBInstanceMonitor"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceMonitorResponse>();
}

/**
 * @summary Queries the monitoring collection granularity of a Tair instance.
 *
 * @param request DescribeDBInstanceMonitorRequest
 * @return DescribeDBInstanceMonitorResponse
 */
DescribeDBInstanceMonitorResponse Client::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the network information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfoWithOptions(const DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceNetInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceNetInfoResponse>();
}

/**
 * @summary Queries the network information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual IP address (VIP) information of the child instances of a cluster instance in direct connection mode.
 *
 * @description <notice>Only cloud-native instances support this operation.</notice>
 *
 * @param request DescribeDBNodeDirectVipInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBNodeDirectVipInfoResponse
 */
DescribeDBNodeDirectVipInfoResponse Client::describeDBNodeDirectVipInfoWithOptions(const DescribeDBNodeDirectVipInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeDBNodeDirectVipInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBNodeDirectVipInfoResponse>();
}

/**
 * @summary Queries the virtual IP address (VIP) information of the child instances of a cluster instance in direct connection mode.
 *
 * @description <notice>Only cloud-native instances support this operation.</notice>
 *
 * @param request DescribeDBNodeDirectVipInfoRequest
 * @return DescribeDBNodeDirectVipInfoResponse
 */
DescribeDBNodeDirectVipInfoResponse Client::describeDBNodeDirectVipInfo(const DescribeDBNodeDirectVipInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodeDirectVipInfoWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity from a source client IP address to an instance.
 *
 * @param request DescribeDbInstanceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbInstanceConnectivityResponse
 */
DescribeDbInstanceConnectivityResponse Client::describeDbInstanceConnectivityWithOptions(const DescribeDbInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDbInstanceConnectivity"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDbInstanceConnectivityResponse>();
}

/**
 * @summary Checks the connectivity from a source client IP address to an instance.
 *
 * @param request DescribeDbInstanceConnectivityRequest
 * @return DescribeDbInstanceConnectivityResponse
 */
DescribeDbInstanceConnectivityResponse Client::describeDbInstanceConnectivity(const DescribeDbInstanceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbInstanceConnectivityWithOptions(request, runtime);
}

/**
 * @summary Queries the information about ApsaraDB for Tair (Redis-compatible) database instances in a dedicated cluster.
 *
 * @description > To query the information about instances that are not in a dedicated cluster, call [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html).
 *
 * @param request DescribeDedicatedClusterInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedClusterInstanceListResponse
 */
DescribeDedicatedClusterInstanceListResponse Client::describeDedicatedClusterInstanceListWithOptions(const DescribeDedicatedClusterInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDedicatedHostName()) {
    query["DedicatedHostName"] = request.getDedicatedHostName();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceNetType()) {
    query["InstanceNetType"] = request.getInstanceNetType();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedClusterInstanceList"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedClusterInstanceListResponse>();
}

/**
 * @summary Queries the information about ApsaraDB for Tair (Redis-compatible) database instances in a dedicated cluster.
 *
 * @description > To query the information about instances that are not in a dedicated cluster, call [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html).
 *
 * @param request DescribeDedicatedClusterInstanceListRequest
 * @return DescribeDedicatedClusterInstanceListResponse
 */
DescribeDedicatedClusterInstanceListResponse Client::describeDedicatedClusterInstanceList(const DescribeDedicatedClusterInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedClusterInstanceListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom Transparent Data Encryption (TDE) key for an ApsaraDB for Redis (Tair) instance.
 *
 * @description Before you call this operation, make sure that TDE (Transparent Data Encryption) has been enabled for the instance by using a custom key. For more information about the related operation, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
 * > For more information about TDE and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request DescribeEncryptionKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEncryptionKeyResponse
 */
DescribeEncryptionKeyResponse Client::describeEncryptionKeyWithOptions(const DescribeEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeEncryptionKey"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEncryptionKeyResponse>();
}

/**
 * @summary Queries the details of a custom Transparent Data Encryption (TDE) key for an ApsaraDB for Redis (Tair) instance.
 *
 * @description Before you call this operation, make sure that TDE (Transparent Data Encryption) has been enabled for the instance by using a custom key. For more information about the related operation, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
 * > For more information about TDE and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request DescribeEncryptionKeyRequest
 * @return DescribeEncryptionKeyResponse
 */
DescribeEncryptionKeyResponse Client::describeEncryptionKey(const DescribeEncryptionKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of custom keys used by an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * When you invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable transparent data encryption (TDE), you can use a custom key. This operation helps you query the custom keys used by an instance. To create a custom key, invoke the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service.
 * * For more information about transparent data encryption (TDE) and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request DescribeEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEncryptionKeyListResponse
 */
DescribeEncryptionKeyListResponse Client::describeEncryptionKeyListWithOptions(const DescribeEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeEncryptionKeyList"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEncryptionKeyListResponse>();
}

/**
 * @summary Queries the list of custom keys used by an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description * When you invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable transparent data encryption (TDE), you can use a custom key. This operation helps you query the custom keys used by an instance. To create a custom key, invoke the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service.
 * * For more information about transparent data encryption (TDE) and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request DescribeEncryptionKeyListRequest
 * @return DescribeEncryptionKeyListResponse
 */
DescribeEncryptionKeyListResponse Client::describeEncryptionKeyList(const DescribeEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @summary Queries the major and minor version information of a Tair (Redis® OSS-Compatible) database instance, as well as the release notes for the minor version.
 *
 * @param request DescribeEngineVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEngineVersionResponse
 */
DescribeEngineVersionResponse Client::describeEngineVersionWithOptions(const DescribeEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeEngineVersion"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEngineVersionResponse>();
}

/**
 * @summary Queries the major and minor version information of a Tair (Redis® OSS-Compatible) database instance, as well as the release notes for the minor version.
 *
 * @param request DescribeEngineVersionRequest
 * @return DescribeEngineVersionResponse
 */
DescribeEngineVersionResponse Client::describeEngineVersion(const DescribeEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEngineVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a distributed instance.
 *
 * @param request DescribeGlobalDistributeCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDistributeCacheResponse
 */
DescribeGlobalDistributeCacheResponse Client::describeGlobalDistributeCacheWithOptions(const DescribeGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalInstanceId()) {
    query["GlobalInstanceId"] = request.getGlobalInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSubInstanceId()) {
    query["SubInstanceId"] = request.getSubInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDistributeCache"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalDistributeCacheResponse>();
}

/**
 * @summary Queries the details of a distributed instance.
 *
 * @param request DescribeGlobalDistributeCacheRequest
 * @return DescribeGlobalDistributeCacheResponse
 */
DescribeGlobalDistributeCacheResponse Client::describeGlobalDistributeCache(const DescribeGlobalDistributeCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDistributeCacheWithOptions(request, runtime);
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
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
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
    {"action" , "DescribeGlobalSecurityIPGroup"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the information about global IP whitelist templates associated with an instance.
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
    {"version" , "2015-01-01"},
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
 * @summary Queries the information about global IP whitelist templates associated with an instance.
 *
 * @param request DescribeGlobalSecurityIPGroupRelationRequest
 * @return DescribeGlobalSecurityIPGroupRelationResponse
 */
DescribeGlobalSecurityIPGroupRelationResponse Client::describeGlobalSecurityIPGroupRelation(const DescribeGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Queries historical events in Event Center.
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
    {"version" , "2015-01-01"},
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
 * @summary Queries historical events in Event Center.
 *
 * @param request DescribeHistoryEventsRequest
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEvents(const DescribeHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary Queries historical event statistics.
 *
 * @param request DescribeHistoryEventsStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStatWithOptions(const DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveStatus()) {
    query["ArchiveStatus"] = request.getArchiveStatus();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
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

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEventsStat"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryEventsStatResponse>();
}

/**
 * @summary Queries historical event statistics.
 *
 * @param request DescribeHistoryEventsStatRequest
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStat(const DescribeHistoryEventsStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsStatWithOptions(request, runtime);
}

/**
 * @summary Queries the performance monitoring information of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API, see [Performance monitoring](https://help.aliyun.com/document_detail/43887.html).
 *
 * @param request DescribeHistoryMonitorValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryMonitorValuesResponse
 */
DescribeHistoryMonitorValuesResponse Client::describeHistoryMonitorValuesWithOptions(const DescribeHistoryMonitorValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntervalForHistory()) {
    query["IntervalForHistory"] = request.getIntervalForHistory();
  }

  if (!!request.hasMonitorKeys()) {
    query["MonitorKeys"] = request.getMonitorKeys();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasNodeRole()) {
    query["NodeRole"] = request.getNodeRole();
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
    {"action" , "DescribeHistoryMonitorValues"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryMonitorValuesResponse>();
}

/**
 * @summary Queries the performance monitoring information of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API, see [Performance monitoring](https://help.aliyun.com/document_detail/43887.html).
 *
 * @param request DescribeHistoryMonitorValuesRequest
 * @return DescribeHistoryMonitorValuesResponse
 */
DescribeHistoryMonitorValuesResponse Client::describeHistoryMonitorValues(const DescribeHistoryMonitorValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryMonitorValuesWithOptions(request, runtime);
}

/**
 * @summary Queries the task list in the task center.
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
    {"version" , "2015-01-01"},
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
 * @summary Queries the task list in the task center.
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary Queries task statistics in the task center.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    {"version" , "2015-01-01"},
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
 * @summary Queries task statistics in the task center.
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Queries the historical inspection reports for timed scheduling.
 *
 * @param request DescribeInspectionScheduleReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInspectionScheduleReportsResponse
 */
DescribeInspectionScheduleReportsResponse Client::describeInspectionScheduleReportsWithOptions(const DescribeInspectionScheduleReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScheduleId()) {
    query["ScheduleId"] = request.getScheduleId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInspectionScheduleReports"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInspectionScheduleReportsResponse>();
}

/**
 * @summary Queries the historical inspection reports for timed scheduling.
 *
 * @param request DescribeInspectionScheduleReportsRequest
 * @return DescribeInspectionScheduleReportsResponse
 */
DescribeInspectionScheduleReportsResponse Client::describeInspectionScheduleReports(const DescribeInspectionScheduleReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInspectionScheduleReportsWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of scheduled inspection tasks.
 *
 * @param request DescribeInspectionSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInspectionSchedulesResponse
 */
DescribeInspectionSchedulesResponse Client::describeInspectionSchedulesWithOptions(const DescribeInspectionSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScheduleId()) {
    query["ScheduleId"] = request.getScheduleId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInspectionSchedules"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInspectionSchedulesResponse>();
}

/**
 * @summary Queries the configurations of scheduled inspection tasks.
 *
 * @param request DescribeInspectionSchedulesRequest
 * @return DescribeInspectionSchedulesResponse
 */
DescribeInspectionSchedulesResponse Client::describeInspectionSchedules(const DescribeInspectionSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInspectionSchedulesWithOptions(request, runtime);
}

/**
 * @summary Queries the report of a specific inspection task.
 *
 * @param request DescribeInspectionTaskReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInspectionTaskReportResponse
 */
DescribeInspectionTaskReportResponse Client::describeInspectionTaskReportWithOptions(const DescribeInspectionTaskReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionInsId()) {
    query["InspectionInsId"] = request.getInspectionInsId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInspectionTaskReport"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInspectionTaskReportResponse>();
}

/**
 * @summary Queries the report of a specific inspection task.
 *
 * @param request DescribeInspectionTaskReportRequest
 * @return DescribeInspectionTaskReportResponse
 */
DescribeInspectionTaskReportResponse Client::describeInspectionTaskReport(const DescribeInspectionTaskReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInspectionTaskReportWithOptions(request, runtime);
}

/**
 * @summary Query the list of smart inspection tasks
 *
 * @param request DescribeInspectionTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInspectionTasksResponse
 */
DescribeInspectionTasksResponse Client::describeInspectionTasksWithOptions(const DescribeInspectionTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInspectionTasks"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInspectionTasksResponse>();
}

/**
 * @summary Query the list of smart inspection tasks
 *
 * @param request DescribeInspectionTasksRequest
 * @return DescribeInspectionTasksResponse
 */
DescribeInspectionTasksResponse Client::describeInspectionTasks(const DescribeInspectionTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInspectionTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttributeWithOptions(const DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeInstanceAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAttributeResponse>();
}

/**
 * @summary Queries the detailed information of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceAttributeRequest
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries whether auto-renewal is enabled for a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttributeWithOptions(const DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeInstanceAutoRenewalAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAutoRenewalAttributeResponse>();
}

/**
 * @summary Queries whether auto-renewal is enabled for a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries some default configuration parameters of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceConfigResponse
 */
DescribeInstanceConfigResponse Client::describeInstanceConfigWithOptions(const DescribeInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeInstanceConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceConfigResponse>();
}

/**
 * @summary Queries some default configuration parameters of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeInstanceConfigRequest
 * @return DescribeInstanceConfigResponse
 */
DescribeInstanceConfigResponse Client::describeInstanceConfig(const DescribeInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the load balancer (LB) information of an instance.
 *
 * @description For more information about multiple LBs, see.
 *
 * @param request DescribeInstanceMultiVIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceMultiVIPResponse
 */
DescribeInstanceMultiVIPResponse Client::describeInstanceMultiVIPWithOptions(const DescribeInstanceMultiVIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeInstanceMultiVIP"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceMultiVIPResponse>();
}

/**
 * @summary Queries the load balancer (LB) information of an instance.
 *
 * @description For more information about multiple LBs, see.
 *
 * @param request DescribeInstanceMultiVIPRequest
 * @return DescribeInstanceMultiVIPResponse
 */
DescribeInstanceMultiVIPResponse Client::describeInstanceMultiVIP(const DescribeInstanceMultiVIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceMultiVIPWithOptions(request, runtime);
}

/**
 * @summary Queries whether TLS (SSL) encryption authentication is enabled for a Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSLWithOptions(const DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeInstanceSSL"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSSLResponse>();
}

/**
 * @summary Queries whether TLS (SSL) encryption authentication is enabled for a Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeInstanceSSLRequest
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSL(const DescribeInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Queries whether the TDE data encryption feature is enabled for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For more information about the transparent data encryption (TDE) feature and precautions, see [Enable transparent data encryption TDE](https://help.aliyun.com/document_detail/265913.html).
 * > You can invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or shutdown the TDE encrypt feature.
 *
 * @param request DescribeInstanceTDEStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceTDEStatusResponse
 */
DescribeInstanceTDEStatusResponse Client::describeInstanceTDEStatusWithOptions(const DescribeInstanceTDEStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeInstanceTDEStatus"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceTDEStatusResponse>();
}

/**
 * @summary Queries whether the TDE data encryption feature is enabled for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For more information about the transparent data encryption (TDE) feature and precautions, see [Enable transparent data encryption TDE](https://help.aliyun.com/document_detail/265913.html).
 * > You can invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or shutdown the TDE encrypt feature.
 *
 * @param request DescribeInstanceTDEStatusRequest
 * @return DescribeInstanceTDEStatusResponse
 */
DescribeInstanceTDEStatusResponse Client::describeInstanceTDEStatus(const DescribeInstanceTDEStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceTDEStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information of one or more Tair (Redis® OSS-Compatible) instances.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchitectureType()) {
    query["ArchitectureType"] = request.getArchitectureType();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasEditionType()) {
    query["EditionType"] = request.getEditionType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasGlobalInstance()) {
    query["GlobalInstance"] = request.getGlobalInstance();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  if (!!request.hasPrivateIp()) {
    query["PrivateIp"] = request.getPrivateIp();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
    {"action" , "DescribeInstances"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the information of one or more Tair (Redis® OSS-Compatible) instances.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the overview information of one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description If you do not specify any request parameters, the overview information of all instances is returned.
 * > This operation does not support pagination for the returned results.
 *
 * @param request DescribeInstancesOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesOverviewResponse
 */
DescribeInstancesOverviewResponse Client::describeInstancesOverviewWithOptions(const DescribeInstancesOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchitectureType()) {
    query["ArchitectureType"] = request.getArchitectureType();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasEditionType()) {
    query["EditionType"] = request.getEditionType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  if (!!request.hasPrivateIp()) {
    query["PrivateIp"] = request.getPrivateIp();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
    {"action" , "DescribeInstancesOverview"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesOverviewResponse>();
}

/**
 * @summary Queries the overview information of one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description If you do not specify any request parameters, the overview information of all instances is returned.
 * > This operation does not support pagination for the returned results.
 *
 * @param request DescribeInstancesOverviewRequest
 * @return DescribeInstancesOverviewResponse
 */
DescribeInstancesOverviewResponse Client::describeInstancesOverview(const DescribeInstancesOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the current bandwidth of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
 *
 * @param request DescribeIntranetAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntranetAttributeResponse
 */
DescribeIntranetAttributeResponse Client::describeIntranetAttributeWithOptions(const DescribeIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeIntranetAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntranetAttributeResponse>();
}

/**
 * @summary Queries the current bandwidth of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
 *
 * @param request DescribeIntranetAttributeRequest
 * @return DescribeIntranetAttributeResponse
 */
DescribeIntranetAttributeResponse Client::describeIntranetAttribute(const DescribeIntranetAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntranetAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the logical topology structure of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is supported only for cluster and read/write splitting instances.
 *
 * @param request DescribeLogicInstanceTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogicInstanceTopologyResponse
 */
DescribeLogicInstanceTopologyResponse Client::describeLogicInstanceTopologyWithOptions(const DescribeLogicInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeLogicInstanceTopology"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogicInstanceTopologyResponse>();
}

/**
 * @summary Queries the logical topology structure of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is supported only for cluster and read/write splitting instances.
 *
 * @param request DescribeLogicInstanceTopologyRequest
 * @return DescribeLogicInstanceTopologyResponse
 */
DescribeLogicInstanceTopologyResponse Client::describeLogicInstanceTopology(const DescribeLogicInstanceTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogicInstanceTopologyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of monitoring items supported by a Tair (Redis® OSS-Compatible) instance.
 *
 * @description > To improve user experience, Tair (Redis® OSS-Compatible) has upgraded its performance monitoring. This operation will be taken offline. For more information, see [Notice: Tair (Redis® OSS-Compatible) DescribeMonitorItems operation offline](https://help.aliyun.com/document_detail/189893.html).
 * After you call this operation to obtain the list of monitoring items, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the historical monitoring information of an instance.
 *
 * @param request DescribeMonitorItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorItemsResponse
 */
DescribeMonitorItemsResponse Client::describeMonitorItemsWithOptions(const DescribeMonitorItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorItems"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorItemsResponse>();
}

/**
 * @summary Queries the list of monitoring items supported by a Tair (Redis® OSS-Compatible) instance.
 *
 * @description > To improve user experience, Tair (Redis® OSS-Compatible) has upgraded its performance monitoring. This operation will be taken offline. For more information, see [Notice: Tair (Redis® OSS-Compatible) DescribeMonitorItems operation offline](https://help.aliyun.com/document_detail/189893.html).
 * After you call this operation to obtain the list of monitoring items, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the historical monitoring information of an instance.
 *
 * @param request DescribeMonitorItemsRequest
 * @return DescribeMonitorItemsResponse
 */
DescribeMonitorItemsResponse Client::describeMonitorItems(const DescribeMonitorItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorItemsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about a query parameter template.
 *
 * @param request DescribeParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroupWithOptions(const DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeParameterGroup"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the basic information about a query parameter template.
 *
 * @param request DescribeParameterGroupRequest
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroup(const DescribeParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the list of parameters that can be configured in parameter templates of different versions.
 *
 * @param request DescribeParameterGroupSupportParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupSupportParamResponse
 */
DescribeParameterGroupSupportParamResponse Client::describeParameterGroupSupportParamWithOptions(const DescribeParameterGroupSupportParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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
    {"action" , "DescribeParameterGroupSupportParam"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupSupportParamResponse>();
}

/**
 * @summary Queries the list of parameters that can be configured in parameter templates of different versions.
 *
 * @param request DescribeParameterGroupSupportParamRequest
 * @return DescribeParameterGroupSupportParamResponse
 */
DescribeParameterGroupSupportParamResponse Client::describeParameterGroupSupportParam(const DescribeParameterGroupSupportParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupSupportParamWithOptions(request, runtime);
}

/**
 * @summary Queries the details of configurable query parameters in a parameter template, such as default values, value ranges, and descriptions.
 *
 * @param request DescribeParameterGroupTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupTemplateListResponse
 */
DescribeParameterGroupTemplateListResponse Client::describeParameterGroupTemplateListWithOptions(const DescribeParameterGroupTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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
    {"action" , "DescribeParameterGroupTemplateList"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupTemplateListResponse>();
}

/**
 * @summary Queries the details of configurable query parameters in a parameter template, such as default values, value ranges, and descriptions.
 *
 * @param request DescribeParameterGroupTemplateListRequest
 * @return DescribeParameterGroupTemplateListResponse
 */
DescribeParameterGroupTemplateListResponse Client::describeParameterGroupTemplateList(const DescribeParameterGroupTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries available parameter templates.
 *
 * @param request DescribeParameterGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroupsWithOptions(const DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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
    {"action" , "DescribeParameterGroups"},
    {"version" , "2015-01-01"},
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
 * @summary Queries available parameter templates.
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter modification history of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeParameterModificationHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterModificationHistoryResponse
 */
DescribeParameterModificationHistoryResponse Client::describeParameterModificationHistoryWithOptions(const DescribeParameterModificationHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasParameterName()) {
    query["ParameterName"] = request.getParameterName();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterModificationHistory"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterModificationHistoryResponse>();
}

/**
 * @summary Queries the parameter modification history of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeParameterModificationHistoryRequest
 * @return DescribeParameterModificationHistoryResponse
 */
DescribeParameterModificationHistoryResponse Client::describeParameterModificationHistory(const DescribeParameterModificationHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterModificationHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters and default values of ApsaraDB Tair (Redis® OSS-Compatible) database instances across different architectures and major engine versions.
 *
 * @description After you call this operation to retrieve the parameter list and default values, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the parameters of a Redis instance as needed.
 *
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterCategory()) {
    query["ParameterCategory"] = request.getParameterCategory();
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
    {"action" , "DescribeParameterTemplates"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the parameters and default values of ApsaraDB Tair (Redis® OSS-Compatible) database instances across different architectures and major engine versions.
 *
 * @description After you call this operation to retrieve the parameter list and default values, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the parameters of a Redis instance as needed.
 *
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration parameters and running parameters of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParametersWithOptions(const DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeParameters"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParametersResponse>();
}

/**
 * @summary Queries the configuration parameters and running parameters of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeParametersRequest
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the fees generated by operations such as creating a Tair (Redis® OSS-Compatible) database instance, upgrading the instance configuration, or renewing the instance.
 *
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasForceUpgrade()) {
    query["ForceUpgrade"] = request.getForceUpgrade();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOrderParamOut()) {
    query["OrderParamOut"] = request.getOrderParamOut();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
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

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary Queries the fees generated by operations such as creating a Tair (Redis® OSS-Compatible) database instance, upgrading the instance configuration, or renewing the instance.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Queries all regions and their corresponding active zones supported by ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
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
    {"action" , "DescribeRegions"},
    {"version" , "2015-01-01"},
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
 * @summary Queries all regions and their corresponding active zones supported by ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the roles, types, minor versions, and zones of nodes in a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeRoleZoneInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoleZoneInfoResponse
 */
DescribeRoleZoneInfoResponse Client::describeRoleZoneInfoWithOptions(const DescribeRoleZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
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
    {"action" , "DescribeRoleZoneInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoleZoneInfoResponse>();
}

/**
 * @summary Queries the roles, types, minor versions, and zones of nodes in a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeRoleZoneInfoRequest
 * @return DescribeRoleZoneInfoResponse
 */
DescribeRoleZoneInfoResponse Client::describeRoleZoneInfo(const DescribeRoleZoneInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoleZoneInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the running logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the corresponding console operation of this API, see [Query running logs](https://help.aliyun.com/document_detail/101713.html). The maximum call frequency of DescribeRunningLogRecords is 100 calls per minute.
 *
 * @param request DescribeRunningLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRunningLogRecordsResponse
 */
DescribeRunningLogRecordsResponse Client::describeRunningLogRecordsWithOptions(const DescribeRunningLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.getQueryKeyword();
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

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.getRoleType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRunningLogRecords"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRunningLogRecordsResponse>();
}

/**
 * @summary Queries the running logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the corresponding console operation of this API, see [Query running logs](https://help.aliyun.com/document_detail/101713.html). The maximum call frequency of DescribeRunningLogRecords is 100 calls per minute.
 *
 * @param request DescribeRunningLogRecordsRequest
 * @return DescribeRunningLogRecordsResponse
 */
DescribeRunningLogRecordsResponse Client::describeRunningLogRecords(const DescribeRunningLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRunningLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the security groups in the Settings of the whitelist for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfigurationWithOptions(const DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeSecurityGroupConfiguration"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupConfigurationResponse>();
}

/**
 * @summary Queries the security groups in the Settings of the whitelist for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIpsWithOptions(const DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeSecurityIps"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIpsResponse>();
}

/**
 * @summary Queries the IP address whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIps(const DescribeSecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Queries whether the service-linked role has been authorized for Tair (Redis® OSS-Compatible).
 *
 * @description Call this operation to query whether the associated role named AliyunServiceRoleForKvstore has been authorized for use by Tair (Redis® OSS-Compatible) database under the current account. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
 *
 * @param request DescribeServiceLinkedRoleExistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceLinkedRoleExistsResponse
 */
DescribeServiceLinkedRoleExistsResponse Client::describeServiceLinkedRoleExistsWithOptions(const DescribeServiceLinkedRoleExistsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeServiceLinkedRoleExists"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceLinkedRoleExistsResponse>();
}

/**
 * @summary Queries whether the service-linked role has been authorized for Tair (Redis® OSS-Compatible).
 *
 * @description Call this operation to query whether the associated role named AliyunServiceRoleForKvstore has been authorized for use by Tair (Redis® OSS-Compatible) database under the current account. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
 *
 * @param request DescribeServiceLinkedRoleExistsRequest
 * @return DescribeServiceLinkedRoleExistsResponse
 */
DescribeServiceLinkedRoleExistsResponse Client::describeServiceLinkedRoleExists(const DescribeServiceLinkedRoleExistsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceLinkedRoleExistsWithOptions(request, runtime);
}

/**
 * @summary Queries the slow query logs generated by a Tair (Redis® OSS-Compatible) database instance within a specified time period.
 *
 * @description For the corresponding console operation, see [Query slow query logs](https://help.aliyun.com/document_detail/95874.html).
 * The maximum number of calls to DescribeSlowLogRecords is 100 per minute.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.getQueryKeyword();
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

  if (!!request.hasSlowLogRecordType()) {
    query["SlowLogRecordType"] = request.getSlowLogRecordType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the slow query logs generated by a Tair (Redis® OSS-Compatible) database instance within a specified time period.
 *
 * @description For the corresponding console operation, see [Query slow query logs](https://help.aliyun.com/document_detail/95874.html).
 * The maximum number of calls to DescribeSlowLogRecords is 100 per minute.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries all tags in the specified region.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeTags"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @summary Queries all tags in the specified region.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary 查看TairCustom实例
 *
 * @param request DescribeTairKVCacheCustomInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairKVCacheCustomInstanceAttributeResponse
 */
DescribeTairKVCacheCustomInstanceAttributeResponse Client::describeTairKVCacheCustomInstanceAttributeWithOptions(const DescribeTairKVCacheCustomInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairKVCacheCustomInstanceAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairKVCacheCustomInstanceAttributeResponse>();
}

/**
 * @summary 查看TairCustom实例
 *
 * @param request DescribeTairKVCacheCustomInstanceAttributeRequest
 * @return DescribeTairKVCacheCustomInstanceAttributeResponse
 */
DescribeTairKVCacheCustomInstanceAttributeResponse Client::describeTairKVCacheCustomInstanceAttribute(const DescribeTairKVCacheCustomInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairKVCacheCustomInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询TairCustom主机监控
 *
 * @param request DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse
 */
DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse Client::describeTairKVCacheCustomInstanceHistoryMonitorValuesWithOptions(const DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairKVCacheCustomInstanceHistoryMonitorValues"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse>();
}

/**
 * @summary 查询TairCustom主机监控
 *
 * @param request DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest
 * @return DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse
 */
DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse Client::describeTairKVCacheCustomInstanceHistoryMonitorValues(const DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairKVCacheCustomInstanceHistoryMonitorValuesWithOptions(request, runtime);
}

/**
 * @summary 查看TairCustom实例
 *
 * @param request DescribeTairKVCacheCustomInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairKVCacheCustomInstancesResponse
 */
DescribeTairKVCacheCustomInstancesResponse Client::describeTairKVCacheCustomInstancesWithOptions(const DescribeTairKVCacheCustomInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairKVCacheCustomInstances"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairKVCacheCustomInstancesResponse>();
}

/**
 * @summary 查看TairCustom实例
 *
 * @param request DescribeTairKVCacheCustomInstancesRequest
 * @return DescribeTairKVCacheCustomInstancesResponse
 */
DescribeTairKVCacheCustomInstancesResponse Client::describeTairKVCacheCustomInstances(const DescribeTairKVCacheCustomInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairKVCacheCustomInstancesWithOptions(request, runtime);
}

/**
 * @summary 查看TairInfer实例
 *
 * @param request DescribeTairKVCacheInferInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairKVCacheInferInstanceAttributeResponse
 */
DescribeTairKVCacheInferInstanceAttributeResponse Client::describeTairKVCacheInferInstanceAttributeWithOptions(const DescribeTairKVCacheInferInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairKVCacheInferInstanceAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairKVCacheInferInstanceAttributeResponse>();
}

/**
 * @summary 查看TairInfer实例
 *
 * @param request DescribeTairKVCacheInferInstanceAttributeRequest
 * @return DescribeTairKVCacheInferInstanceAttributeResponse
 */
DescribeTairKVCacheInferInstanceAttributeResponse Client::describeTairKVCacheInferInstanceAttribute(const DescribeTairKVCacheInferInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairKVCacheInferInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more Tair KVCache instances.
 *
 * @description This operation queries inference operator instances, virtual cluster instances, and cache service instances of Tair KVCache.
 *
 * @param request DescribeTairKVCacheInferInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairKVCacheInferInstancesResponse
 */
DescribeTairKVCacheInferInstancesResponse Client::describeTairKVCacheInferInstancesWithOptions(const DescribeTairKVCacheInferInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairKVCacheInferInstances"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairKVCacheInferInstancesResponse>();
}

/**
 * @summary Queries the details of one or more Tair KVCache instances.
 *
 * @description This operation queries inference operator instances, virtual cluster instances, and cache service instances of Tair KVCache.
 *
 * @param request DescribeTairKVCacheInferInstancesRequest
 * @return DescribeTairKVCacheInferInstancesResponse
 */
DescribeTairKVCacheInferInstancesResponse Client::describeTairKVCacheInferInstances(const DescribeTairKVCacheInferInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairKVCacheInferInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries all Tair Serverless KV table instances in a specified workspace.
 *
 * @description ## Operation description
 * - You must specify the `InstanceId` parameter when you call this operation.
 * - The response includes basic information about each table, such as the table ID, name, bandwidth, and maximum number of connections.
 *
 * @param request DescribeTairSkvDdbTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairSkvDdbTableResponse
 */
DescribeTairSkvDdbTableResponse Client::describeTairSkvDdbTableWithOptions(const DescribeTairSkvDdbTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTairSkvDdbTable"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairSkvDdbTableResponse>();
}

/**
 * @summary Queries all Tair Serverless KV table instances in a specified workspace.
 *
 * @description ## Operation description
 * - You must specify the `InstanceId` parameter when you call this operation.
 * - The response includes basic information about each table, such as the table ID, name, bandwidth, and maximum number of connections.
 *
 * @param request DescribeTairSkvDdbTableRequest
 * @return DescribeTairSkvDdbTableResponse
 */
DescribeTairSkvDdbTableResponse Client::describeTairSkvDdbTable(const DescribeTairSkvDdbTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairSkvDdbTableWithOptions(request, runtime);
}

/**
 * @summary Retrieves the table schema and configuration information of a specified instance.
 *
 * @description ## Operation description
 * - This operation queries the table schema configuration of a Tair Serverless KV table instance.
 * - When you invoke this operation, you must specify the InstanceId parameter. The value of this parameter is the instance ID of the instance that you want to query.
 * - The BackupId parameter specifies the backup set of the table to query.
 * - The response packet includes the time-to-live (TTL) specifications and detailed table structure definition.
 *
 * @param request DescribeTairSkvDdbTableSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTairSkvDdbTableSchemaResponse
 */
DescribeTairSkvDdbTableSchemaResponse Client::describeTairSkvDdbTableSchemaWithOptions(const DescribeTairSkvDdbTableSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DescribeTairSkvDdbTableSchema"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTairSkvDdbTableSchemaResponse>();
}

/**
 * @summary Retrieves the table schema and configuration information of a specified instance.
 *
 * @description ## Operation description
 * - This operation queries the table schema configuration of a Tair Serverless KV table instance.
 * - When you invoke this operation, you must specify the InstanceId parameter. The value of this parameter is the instance ID of the instance that you want to query.
 * - The BackupId parameter specifies the backup set of the table to query.
 * - The response packet includes the time-to-live (TTL) specifications and detailed table structure definition.
 *
 * @param request DescribeTairSkvDdbTableSchemaRequest
 * @return DescribeTairSkvDdbTableSchemaResponse
 */
DescribeTairSkvDdbTableSchemaResponse Client::describeTairSkvDdbTableSchema(const DescribeTairSkvDdbTableSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTairSkvDdbTableSchemaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a node.
 *
 * @param request DescribeTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskDetailResponse
 */
DescribeTaskDetailResponse Client::describeTaskDetailWithOptions(const DescribeTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskDetail"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskDetailResponse>();
}

/**
 * @summary Queries the details of a node.
 *
 * @param request DescribeTaskDetailRequest
 * @return DescribeTaskDetailResponse
 */
DescribeTaskDetailResponse Client::describeTaskDetail(const DescribeTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the zones supported by Tair (Redis® OSS-Compatible) in a specified region. To query the zones that are active for purchase, call the DescribeAvailableResource operation.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
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
    {"action" , "DescribeZones"},
    {"version" , "2015-01-01"},
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
 * @summary Queries the zones supported by Tair (Redis® OSS-Compatible) in a specified region. To query the zones that are active for purchase, call the DescribeAvailableResource operation.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Permanently destroys an instance and its data backups from the recycle bin.
 *
 * @description When you call this operation, the instance must exist in the recycle bin. For more information, see [Cluster recycle bin](https://help.aliyun.com/document_detail/86114.html).
 * > After you call this operation, the instance and its data backups in the recycle bin are permanently deleted.
 * <danger>After this operation is performed, the data of the instance is permanently deleted and cannot be recovered. Proceed with caution.
 *
 * @param request DestroyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DestroyInstanceResponse
 */
DestroyInstanceResponse Client::destroyInstanceWithOptions(const DestroyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "DestroyInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DestroyInstanceResponse>();
}

/**
 * @summary Permanently destroys an instance and its data backups from the recycle bin.
 *
 * @description When you call this operation, the instance must exist in the recycle bin. For more information, see [Cluster recycle bin](https://help.aliyun.com/document_detail/86114.html).
 * > After you call this operation, the instance and its data backups in the recycle bin are permanently deleted.
 * <danger>After this operation is performed, the data of the instance is permanently deleted and cannot be recovered. Proceed with caution.
 *
 * @param request DestroyInstanceRequest
 * @return DestroyInstanceResponse
 */
DestroyInstanceResponse Client::destroyInstance(const DestroyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyInstanceWithOptions(request, runtime);
}

/**
 * @summary Adjusts the bandwidth of an ApsaraDB Tair (Redis® OSS-Compatible) instance. Currently, only the pay-as-you-go billing method is supported. You only need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
 *
 * @description If you enable the elastic elastic scaling feature for the instance while calling this operation, the instance preferentially uses the elastic elastic scaling feature. When the bandwidth is elastically scaled down, it is scaled down to the default bandwidth of the instance specifications. For more information about the limits, billing, and FAQ of this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
 * > Before you call this operation, you can call [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) to query the current bandwidth of each data node in the instance.
 *
 * @param request EnableAdditionalBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAdditionalBandwidthResponse
 */
EnableAdditionalBandwidthResponse Client::enableAdditionalBandwidthWithOptions(const EnableAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasBandWidthBurst()) {
    query["BandWidthBurst"] = request.getBandWidthBurst();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderTimeLength()) {
    query["OrderTimeLength"] = request.getOrderTimeLength();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAdditionalBandwidth"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAdditionalBandwidthResponse>();
}

/**
 * @summary Adjusts the bandwidth of an ApsaraDB Tair (Redis® OSS-Compatible) instance. Currently, only the pay-as-you-go billing method is supported. You only need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
 *
 * @description If you enable the elastic elastic scaling feature for the instance while calling this operation, the instance preferentially uses the elastic elastic scaling feature. When the bandwidth is elastically scaled down, it is scaled down to the default bandwidth of the instance specifications. For more information about the limits, billing, and FAQ of this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
 * > Before you call this operation, you can call [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) to query the current bandwidth of each data node in the instance.
 *
 * @param request EnableAdditionalBandwidthRequest
 * @return EnableAdditionalBandwidthResponse
 */
EnableAdditionalBandwidthResponse Client::enableAdditionalBandwidth(const EnableAdditionalBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAdditionalBandwidthWithOptions(request, runtime);
}

/**
 * @summary Purges expired keys from a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
 * > Expired keys cannot be recovered after they are cleared. Use this API operation with caution.
 *
 * @param request FlushExpireKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlushExpireKeysResponse
 */
FlushExpireKeysResponse Client::flushExpireKeysWithOptions(const FlushExpireKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "FlushExpireKeys"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlushExpireKeysResponse>();
}

/**
 * @summary Purges expired keys from a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
 * > Expired keys cannot be recovered after they are cleared. Use this API operation with caution.
 *
 * @param request FlushExpireKeysRequest
 * @return FlushExpireKeysResponse
 */
FlushExpireKeysResponse Client::flushExpireKeys(const FlushExpireKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flushExpireKeysWithOptions(request, runtime);
}

/**
 * @summary Flushes all data from an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. The data cannot be recovered.
 *
 * @description For the corresponding console operation, refer to [Purge data](https://help.aliyun.com/document_detail/43881.html).
 * > Before calling this API to delete data, back up your data or confirm that a backup is not required.
 *
 * @param request FlushInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlushInstanceResponse
 */
FlushInstanceResponse Client::flushInstanceWithOptions(const FlushInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "FlushInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlushInstanceResponse>();
}

/**
 * @summary Flushes all data from an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. The data cannot be recovered.
 *
 * @description For the corresponding console operation, refer to [Purge data](https://help.aliyun.com/document_detail/43881.html).
 * > Before calling this API to delete data, back up your data or confirm that a backup is not required.
 *
 * @param request FlushInstanceRequest
 * @return FlushInstanceResponse
 */
FlushInstanceResponse Client::flushInstance(const FlushInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flushInstanceWithOptions(request, runtime);
}

/**
 * @summary Clears data from a specified database in an ApsaraDB for Tair (Redis® OSS-Compatible) instance.
 *
 * @description ApsaraDB for Tair (Redis® OSS-Compatible) instances support 256 databases, from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity available to a database is subject to the total memory limit of the instance. You can run the `SELECT` command to switch between databases. For more information, see [Tair DB](https://help.aliyun.com/document_detail/38688.html).
 * > This operation supports only cloud-native instances (formerly cloud disk-based instances) in cluster architecture.
 *
 * @param request FlushInstanceForDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlushInstanceForDBResponse
 */
FlushInstanceForDBResponse Client::flushInstanceForDBWithOptions(const FlushInstanceForDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbIndex()) {
    query["DbIndex"] = request.getDbIndex();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "FlushInstanceForDB"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlushInstanceForDBResponse>();
}

/**
 * @summary Clears data from a specified database in an ApsaraDB for Tair (Redis® OSS-Compatible) instance.
 *
 * @description ApsaraDB for Tair (Redis® OSS-Compatible) instances support 256 databases, from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity available to a database is subject to the total memory limit of the instance. You can run the `SELECT` command to switch between databases. For more information, see [Tair DB](https://help.aliyun.com/document_detail/38688.html).
 * > This operation supports only cloud-native instances (formerly cloud disk-based instances) in cluster architecture.
 *
 * @param request FlushInstanceForDBRequest
 * @return FlushInstanceForDBResponse
 */
FlushInstanceForDBResponse Client::flushInstanceForDB(const FlushInstanceForDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flushInstanceForDBWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantAccountPrivilege"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the permissions of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
 *
 * @param request GrantAccountPrivilegeRequest
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary Associates the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database.
 *
 * @description The Log Management feature of Tair (Redis® OSS-Compatible) database requires resources from [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). Before using the Log Management feature, call this operation to associate the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
 *
 * @param request InitializeKvstorePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeKvstorePermissionResponse
 */
InitializeKvstorePermissionResponse Client::initializeKvstorePermissionWithOptions(const InitializeKvstorePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitializeKvstorePermission"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeKvstorePermissionResponse>();
}

/**
 * @summary Associates the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database.
 *
 * @description The Log Management feature of Tair (Redis® OSS-Compatible) database requires resources from [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). Before using the Log Management feature, call this operation to associate the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
 *
 * @param request InitializeKvstorePermissionRequest
 * @return InitializeKvstorePermissionResponse
 */
InitializeKvstorePermissionResponse Client::initializeKvstorePermission(const InitializeKvstorePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeKvstorePermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the labels you attach to ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description For the corresponding console operations of this API, refer to [Filter instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
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
    {"version" , "2015-01-01"},
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
 * @summary Queries the labels you attach to ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description For the corresponding console operations of this API, refer to [Filter instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Locks an instance so that it supports only data reads and does not support writes.
 *
 * @param request LockDBInstanceWriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockDBInstanceWriteResponse
 */
LockDBInstanceWriteResponse Client::lockDBInstanceWriteWithOptions(const LockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasLockReason()) {
    query["LockReason"] = request.getLockReason();
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
    {"action" , "LockDBInstanceWrite"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockDBInstanceWriteResponse>();
}

/**
 * @summary Locks an instance so that it supports only data reads and does not support writes.
 *
 * @param request LockDBInstanceWriteRequest
 * @return LockDBInstanceWriteResponse
 */
LockDBInstanceWriteResponse Client::lockDBInstanceWrite(const LockDBInstanceWriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockDBInstanceWriteWithOptions(request, runtime);
}

/**
 * @summary Simulates a failure of a specified data node or proxy node in Tair (Redis® OSS-Compatible). The instance automatically performs a primary/secondary switchover to ensure high availability.
 *
 * @description - When you call this operation, the specified node is shut down. The instance automatically triggers a primary/secondary switchover to promote the secondary node to the primary node.
 * - The node with the simulated failure automatically recovers later.
 * - This operation is not supported for single-node (single-replica) instances.
 *
 * @param request MasterNodeShutDownFailOverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MasterNodeShutDownFailOverResponse
 */
MasterNodeShutDownFailOverResponse Client::masterNodeShutDownFailOverWithOptions(const MasterNodeShutDownFailOverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDBFaultMode()) {
    query["DBFaultMode"] = request.getDBFaultMode();
  }

  if (!!request.hasDBNodes()) {
    query["DBNodes"] = request.getDBNodes();
  }

  if (!!request.hasFailMode()) {
    query["FailMode"] = request.getFailMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProxyFaultMode()) {
    query["ProxyFaultMode"] = request.getProxyFaultMode();
  }

  if (!!request.hasProxyInstanceIds()) {
    query["ProxyInstanceIds"] = request.getProxyInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MasterNodeShutDownFailOver"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MasterNodeShutDownFailOverResponse>();
}

/**
 * @summary Simulates a failure of a specified data node or proxy node in Tair (Redis® OSS-Compatible). The instance automatically performs a primary/secondary switchover to ensure high availability.
 *
 * @description - When you call this operation, the specified node is shut down. The instance automatically triggers a primary/secondary switchover to promote the secondary node to the primary node.
 * - The node with the simulated failure automatically recovers later.
 * - This operation is not supported for single-node (single-replica) instances.
 *
 * @param request MasterNodeShutDownFailOverRequest
 * @return MasterNodeShutDownFailOverResponse
 */
MasterNodeShutDownFailOverResponse Client::masterNodeShutDownFailOver(const MasterNodeShutDownFailOverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return masterNodeShutDownFailOverWithOptions(request, runtime);
}

/**
 * @summary Migrates an ApsaraDB Tair (Redis OSS-Compatible) instance to another zone in the same region.
 *
 * @description Before you call this operation, you must release the public endpoint. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
 * > * If the instance was switched from the classic network to a VPC and retains the classic network endpoint, you must wait until the classic network endpoint expires and is released before you can migrate the instance across zones.
 * > * After the migration, the endpoint of the instance remains unchanged, but the virtual IP address (VIP) changes. Use the endpoint instead of the VIP to connect to the instance in your business applications.
 *
 * @param request MigrateToOtherZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZoneWithOptions(const MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReadOnlyCount()) {
    query["ReadOnlyCount"] = request.getReadOnlyCount();
  }

  if (!!request.hasReplicaCount()) {
    query["ReplicaCount"] = request.getReplicaCount();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSlaveReadOnlyCount()) {
    query["SlaveReadOnlyCount"] = request.getSlaveReadOnlyCount();
  }

  if (!!request.hasSlaveReplicaCount()) {
    query["SlaveReplicaCount"] = request.getSlaveReplicaCount();
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
    {"action" , "MigrateToOtherZone"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateToOtherZoneResponse>();
}

/**
 * @summary Migrates an ApsaraDB Tair (Redis OSS-Compatible) instance to another zone in the same region.
 *
 * @description Before you call this operation, you must release the public endpoint. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
 * > * If the instance was switched from the classic network to a VPC and retains the classic network endpoint, you must wait until the classic network endpoint expires and is released before you can migrate the instance across zones.
 * > * After the migration, the endpoint of the instance remains unchanged, but the virtual IP address (VIP) changes. Use the endpoint instead of the VIP to connect to the instance in your business applications.
 *
 * @param request MigrateToOtherZoneRequest
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZone(const MigrateToOtherZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateToOtherZoneWithOptions(request, runtime);
}

/**
 * @summary Modifies the account description of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This API operation supports only instances that are compatible with Redis 4.0 or later.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the account description of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This API operation supports only instances that are compatible with Redis 4.0 or later.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies account parameters.
 *
 * @description Currently, only Tair Serverless KV instances are supported.
 *
 * @param request ModifyAccountParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountParameterResponse
 */
ModifyAccountParameterResponse Client::modifyAccountParameterWithOptions(const ModifyAccountParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountParameter"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountParameterResponse>();
}

/**
 * @summary Modifies account parameters.
 *
 * @description Currently, only Tair Serverless KV instances are supported.
 *
 * @param request ModifyAccountParameterRequest
 * @return ModifyAccountParameterResponse
 */
ModifyAccountParameterResponse Client::modifyAccountParameter(const ModifyAccountParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountParameterWithOptions(request, runtime);
}

/**
 * @summary Modifies the password of a specified account in a Tair (Redis® OSS-Compatible) instance.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNewAccountPassword()) {
    query["NewAccountPassword"] = request.getNewAccountPassword();
  }

  if (!!request.hasOldAccountPassword()) {
    query["OldAccountPassword"] = request.getOldAccountPassword();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPassword"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the password of a specified account in a Tair (Redis® OSS-Compatible) instance.
 *
 * @param request ModifyAccountPasswordRequest
 * @return ModifyAccountPasswordResponse
 */
ModifyAccountPasswordResponse Client::modifyAccountPassword(const ModifyAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of an O&M task.
 *
 * @param request ModifyActiveOperationMaintainConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationMaintainConfigResponse
 */
ModifyActiveOperationMaintainConfigResponse Client::modifyActiveOperationMaintainConfigWithOptions(const ModifyActiveOperationMaintainConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "ModifyActiveOperationMaintainConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationMaintainConfigResponse>();
}

/**
 * @summary Modifies the configuration of an O&M task.
 *
 * @param request ModifyActiveOperationMaintainConfigRequest
 * @return ModifyActiveOperationMaintainConfigResponse
 */
ModifyActiveOperationMaintainConfigResponse Client::modifyActiveOperationMaintainConfig(const ModifyActiveOperationMaintainConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the scheduled switchover time of an O&M task.
 *
 * @description O&M events of Tair (Redis® OSS-Compatible) instances, such as instance migration and version upgrades, are notified through text messages, phone calls, emails, or internal messages, and are also displayed in the console. In addition to invoking this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
 *
 * @param request ModifyActiveOperationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationTaskResponse
 */
ModifyActiveOperationTaskResponse Client::modifyActiveOperationTaskWithOptions(const ModifyActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ModifyActiveOperationTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationTaskResponse>();
}

/**
 * @summary Modifies the scheduled switchover time of an O&M task.
 *
 * @description O&M events of Tair (Redis® OSS-Compatible) instances, such as instance migration and version upgrades, are notified through text messages, phone calls, emails, or internal messages, and are also displayed in the console. In addition to invoking this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
 *
 * @param request ModifyActiveOperationTaskRequest
 * @return ModifyActiveOperationTaskResponse
 */
ModifyActiveOperationTaskResponse Client::modifyActiveOperationTask(const ModifyActiveOperationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies the switchover time of scheduled O&M events for an instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasksWithOptions(const ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasImmediateStart()) {
    query["ImmediateStart"] = request.getImmediateStart();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the switchover time of scheduled O&M events for an instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Enables or modifies the audit log settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing and [pricing](https://help.aliyun.com/document_detail/54532.html) of audit logs.
 *
 * @param request ModifyAuditLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfigWithOptions(const ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbAudit()) {
    query["DbAudit"] = request.getDbAudit();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAuditLogConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAuditLogConfigResponse>();
}

/**
 * @summary Enables or modifies the audit log settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing and [pricing](https://help.aliyun.com/document_detail/54532.html) of audit logs.
 *
 * @param request ModifyAuditLogConfigRequest
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

/**
 * @summary Extends the expiration time of manual backup data.
 *
 * @param request ModifyBackupExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupExpireTimeResponse
 */
ModifyBackupExpireTimeResponse Client::modifyBackupExpireTimeWithOptions(const ModifyBackupExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasExpectExpireTime()) {
    query["ExpectExpireTime"] = request.getExpectExpireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyBackupExpireTime"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupExpireTimeResponse>();
}

/**
 * @summary Extends the expiration time of manual backup data.
 *
 * @param request ModifyBackupExpireTimeRequest
 * @return ModifyBackupExpireTimeResponse
 */
ModifyBackupExpireTimeResponse Client::modifyBackupExpireTime(const ModifyBackupExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupExpireTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic backup policy of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.getEnableBackupLog();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the automatic backup policy of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic minor engine version update switch for an instance.
 *
 * @param request ModifyDBInstanceAutoUpgradeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAutoUpgradeResponse
 */
ModifyDBInstanceAutoUpgradeResponse Client::modifyDBInstanceAutoUpgradeWithOptions(const ModifyDBInstanceAutoUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceAutoUpgrade"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceAutoUpgradeResponse>();
}

/**
 * @summary Modifies the automatic minor engine version update switch for an instance.
 *
 * @param request ModifyDBInstanceAutoUpgradeRequest
 * @return ModifyDBInstanceAutoUpgradeResponse
 */
ModifyDBInstanceAutoUpgradeResponse Client::modifyDBInstanceAutoUpgrade(const ModifyDBInstanceAutoUpgradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAutoUpgradeWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoint and port of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Modify an endpoint](https://help.aliyun.com/document_detail/85683.html).
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasNewConnectionString()) {
    query["NewConnectionString"] = request.getNewConnectionString();
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
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2015-01-01"},
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
 * @summary Modifies the endpoint and port of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Modify an endpoint](https://help.aliyun.com/document_detail/85683.html).
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Modifies the monitoring collection granularity of a Tair instance.
 *
 * @param request ModifyDBInstanceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMonitorResponse
 */
ModifyDBInstanceMonitorResponse Client::modifyDBInstanceMonitorWithOptions(const ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
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
    {"action" , "ModifyDBInstanceMonitor"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMonitorResponse>();
}

/**
 * @summary Modifies the monitoring collection granularity of a Tair instance.
 *
 * @param request ModifyDBInstanceMonitorRequest
 * @return ModifyDBInstanceMonitorResponse
 */
ModifyDBInstanceMonitorResponse Client::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary Modifies event information.
 *
 * @param request ModifyEventInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventInfoResponse
 */
ModifyEventInfoResponse Client::modifyEventInfoWithOptions(const ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.getActionParams();
  }

  if (!!request.hasEventAction()) {
    query["EventAction"] = request.getEventAction();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEventInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventInfoResponse>();
}

/**
 * @summary Modifies event information.
 *
 * @param request ModifyEventInfoRequest
 * @return ModifyEventInfoResponse
 */
ModifyEventInfoResponse Client::modifyEventInfo(const ModifyEventInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies a global IP address whitelist template.
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
    {"version" , "2015-01-01"},
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
 * @summary Modifies a global IP address whitelist template.
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
    {"version" , "2015-01-01"},
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
 * @summary Adds a specified instance to a specified IP whitelist template.
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
    {"version" , "2015-01-01"},
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
 * @summary Adds a specified instance to a specified IP whitelist template.
 *
 * @param request ModifyGlobalSecurityIPGroupRelationRequest
 * @return ModifyGlobalSecurityIPGroupRelationResponse
 */
ModifyGlobalSecurityIPGroupRelationResponse Client::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Modifies the scheduled inspection configuration.
 *
 * @param request ModifyInspectionScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInspectionScheduleResponse
 */
ModifyInspectionScheduleResponse Client::modifyInspectionScheduleWithOptions(const ModifyInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInspectionWindow()) {
    query["InspectionWindow"] = request.getInspectionWindow();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasScheduleId()) {
    query["ScheduleId"] = request.getScheduleId();
  }

  if (!!request.hasScheduleName()) {
    query["ScheduleName"] = request.getScheduleName();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInspectionSchedule"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInspectionScheduleResponse>();
}

/**
 * @summary Modifies the scheduled inspection configuration.
 *
 * @param request ModifyInspectionScheduleRequest
 * @return ModifyInspectionScheduleResponse
 */
ModifyInspectionScheduleResponse Client::modifyInspectionSchedule(const ModifyInspectionScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInspectionScheduleWithOptions(request, runtime);
}

/**
 * @summary Modifies partial information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, including the instance password and name.
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceReleaseProtection()) {
    query["InstanceReleaseProtection"] = request.getInstanceReleaseProtection();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
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
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Modifies partial information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, including the instance password and name.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the auto-renewal feature for a Tair (Redis® OSS-Compatible) instance before it expires.
 *
 * @description > Auto-renewal is triggered 7 days before the instance expires.
 *
 * @param request ModifyInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAutoRenewalAttributeResponse
 */
ModifyInstanceAutoRenewalAttributeResponse Client::modifyInstanceAutoRenewalAttributeWithOptions(const ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
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
    {"action" , "ModifyInstanceAutoRenewalAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAutoRenewalAttributeResponse>();
}

/**
 * @summary Enables or disables the auto-renewal feature for a Tair (Redis® OSS-Compatible) instance before it expires.
 *
 * @description > Auto-renewal is triggered 7 days before the instance expires.
 *
 * @param request ModifyInstanceAutoRenewalAttributeRequest
 * @return ModifyInstanceAutoRenewalAttributeResponse
 */
ModifyInstanceAutoRenewalAttributeResponse Client::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary Sets the target bandwidth value for a Tair (Redis® OSS-Compatible) database instance.
 *
 * @description - Before calling this operation, make sure that you fully understand the bandwidth billing method and pricing of the instance. Tair (Redis® OSS-Compatible) charges fees on an hourly basis based on the increased bandwidth and usage duration. The pricing varies by region. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
 * - The bandwidth of an instance (or a single shard) can be increased by up to 6 times the default bandwidth of the instance, with a maximum increase of 192 MB/s. For example, the default bandwidth of a Tair memory-optimized 2 GB standard architecture instance is 96 MB/s. The bandwidth of this instance type can be increased by up to 192 MB/s, resulting in a maximum bandwidth of 288 MB/s. The default bandwidth of a Redis Community Edition 256 MB standard architecture instance is 10 MB/s. The bandwidth of this instance type can be increased by up to 60 MB/s, resulting in a maximum bandwidth of 70 MB/s.
 *
 * @param request ModifyInstanceBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceBandwidthResponse
 */
ModifyInstanceBandwidthResponse Client::modifyInstanceBandwidthWithOptions(const ModifyInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasTargetIntranetBandwidth()) {
    query["TargetIntranetBandwidth"] = request.getTargetIntranetBandwidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceBandwidth"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceBandwidthResponse>();
}

/**
 * @summary Sets the target bandwidth value for a Tair (Redis® OSS-Compatible) database instance.
 *
 * @description - Before calling this operation, make sure that you fully understand the bandwidth billing method and pricing of the instance. Tair (Redis® OSS-Compatible) charges fees on an hourly basis based on the increased bandwidth and usage duration. The pricing varies by region. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
 * - The bandwidth of an instance (or a single shard) can be increased by up to 6 times the default bandwidth of the instance, with a maximum increase of 192 MB/s. For example, the default bandwidth of a Tair memory-optimized 2 GB standard architecture instance is 96 MB/s. The bandwidth of this instance type can be increased by up to 192 MB/s, resulting in a maximum bandwidth of 288 MB/s. The default bandwidth of a Redis Community Edition 256 MB standard architecture instance is 10 MB/s. The bandwidth of this instance type can be increased by up to 60 MB/s, resulting in a maximum bandwidth of 70 MB/s.
 *
 * @param request ModifyInstanceBandwidthRequest
 * @return ModifyInstanceBandwidthResponse
 */
ModifyInstanceBandwidthResponse Client::modifyInstanceBandwidth(const ModifyInstanceBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceBandwidthWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameter settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request ModifyInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParamNoLooseSentinelEnabled()) {
    query["ParamNoLooseSentinelEnabled"] = request.getParamNoLooseSentinelEnabled();
  }

  if (!!request.hasParamNoLooseSentinelPasswordFreeAccess()) {
    query["ParamNoLooseSentinelPasswordFreeAccess"] = request.getParamNoLooseSentinelPasswordFreeAccess();
  }

  if (!!request.hasParamNoLooseSentinelPasswordFreeCommands()) {
    query["ParamNoLooseSentinelPasswordFreeCommands"] = request.getParamNoLooseSentinelPasswordFreeCommands();
  }

  if (!!request.hasParamReplMode()) {
    query["ParamReplMode"] = request.getParamReplMode();
  }

  if (!!request.hasParamSemisyncReplTimeout()) {
    query["ParamSemisyncReplTimeout"] = request.getParamSemisyncReplTimeout();
  }

  if (!!request.hasParamSentinelCompatEnable()) {
    query["ParamSentinelCompatEnable"] = request.getParamSentinelCompatEnable();
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
    {"action" , "ModifyInstanceConfig"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceConfigResponse>();
}

/**
 * @summary Modifies the parameter settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. Alibaba Cloud performs routine maintenance on the instance within the specified maintenance window.
 *
 * @description For the console operation that corresponds to this API operation, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTimeWithOptions(const ModifyInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyInstanceMaintainTime"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMaintainTimeResponse>();
}

/**
 * @summary Modifies the maintenance window of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. Alibaba Cloud performs routine maintenance on the instance within the specified maintenance window.
 *
 * @description For the console operation that corresponds to this API operation, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Upgrades the major engine version of a Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the precautions and impacts of this API operation, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
 *
 * @param request ModifyInstanceMajorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMajorVersionResponse
 */
ModifyInstanceMajorVersionResponse Client::modifyInstanceMajorVersionWithOptions(const ModifyInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMajorVersion()) {
    query["MajorVersion"] = request.getMajorVersion();
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
    {"action" , "ModifyInstanceMajorVersion"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMajorVersionResponse>();
}

/**
 * @summary Upgrades the major engine version of a Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the precautions and impacts of this API operation, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
 *
 * @param request ModifyInstanceMajorVersionRequest
 * @return ModifyInstanceMajorVersionResponse
 */
ModifyInstanceMajorVersionResponse Client::modifyInstanceMajorVersion(const ModifyInstanceMajorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMajorVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
 *
 * @description The upgrade process varies by architecture. For more information, see [How minor version upgrades work](https://help.aliyun.com/document_detail/56450.html).
 * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the instance.
 * > * During an instance switchover or primary/secondary switchover, the instance enters a read-only state for up to 60 seconds to wait for full data synchronization. Transient disconnections that last for a few seconds may also occur. Perform the upgrade during off-peak hours and ensure that your application has a reconnection mechanism.
 *
 * @param request ModifyInstanceMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMinorVersionResponse
 */
ModifyInstanceMinorVersionResponse Client::modifyInstanceMinorVersionWithOptions(const ModifyInstanceMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinorversion()) {
    query["Minorversion"] = request.getMinorversion();
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
    {"action" , "ModifyInstanceMinorVersion"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMinorVersionResponse>();
}

/**
 * @summary Upgrades the minor version of an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
 *
 * @description The upgrade process varies by architecture. For more information, see [How minor version upgrades work](https://help.aliyun.com/document_detail/56450.html).
 * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the instance.
 * > * During an instance switchover or primary/secondary switchover, the instance enters a read-only state for up to 60 seconds to wait for full data synchronization. Transient disconnections that last for a few seconds may also occur. Perform the upgrade during off-peak hours and ensure that your application has a reconnection mechanism.
 *
 * @param request ModifyInstanceMinorVersionRequest
 * @return ModifyInstanceMinorVersionResponse
 */
ModifyInstanceMinorVersionResponse Client::modifyInstanceMinorVersion(const ModifyInstanceMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMinorVersionWithOptions(request, runtime);
}

/**
 * @summary Extends the retention period of the classic network endpoint for a Tair (Redis® OSS-Compatible) database instance that retains the classic network endpoint after a switch from the classic network to a VPC.
 *
 * @description For the corresponding console operation of this API, refer to [Modify the retention period of the original classic network endpoint](https://help.aliyun.com/document_detail/60062.html).
 * > For information about how to switch an instance from the classic network to a VPC, refer to [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
 *
 * @param request ModifyInstanceNetExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceNetExpireTimeResponse
 */
ModifyInstanceNetExpireTimeResponse Client::modifyInstanceNetExpireTimeWithOptions(const ModifyInstanceNetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.getClassicExpiredDays();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyInstanceNetExpireTime"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceNetExpireTimeResponse>();
}

/**
 * @summary Extends the retention period of the classic network endpoint for a Tair (Redis® OSS-Compatible) database instance that retains the classic network endpoint after a switch from the classic network to a VPC.
 *
 * @description For the corresponding console operation of this API, refer to [Modify the retention period of the original classic network endpoint](https://help.aliyun.com/document_detail/60062.html).
 * > For information about how to switch an instance from the classic network to a VPC, refer to [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
 *
 * @param request ModifyInstanceNetExpireTimeRequest
 * @return ModifyInstanceNetExpireTimeResponse
 */
ModifyInstanceNetExpireTimeResponse Client::modifyInstanceNetExpireTime(const ModifyInstanceNetExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceNetExpireTimeWithOptions(request, runtime);
}

/**
 * @summary Applies a parameter template to a specified instance. This assigns the parameter values from the template to the specified instance. After you modify a parameter template, you must reapply it to the specified instance for the modified parameter values to take effect.
 *
 * @param request ModifyInstanceParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceParameterResponse
 */
ModifyInstanceParameterResponse Client::modifyInstanceParameterWithOptions(const ModifyInstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyInstanceParameter"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceParameterResponse>();
}

/**
 * @summary Applies a parameter template to a specified instance. This assigns the parameter values from the template to the specified instance. After you modify a parameter template, you must reapply it to the specified instance for the modified parameter values to take effect.
 *
 * @param request ModifyInstanceParameterRequest
 * @return ModifyInstanceParameterResponse
 */
ModifyInstanceParameterResponse Client::modifyInstanceParameter(const ModifyInstanceParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceParameterWithOptions(request, runtime);
}

/**
 * @summary Enables the Transport Layer Security (TLS) encryption protocol for an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the corresponding console operation, see [Secure Sockets Layer (SSL) encryption settings](https://help.aliyun.com/document_detail/84898.html).
 * > To specify the minimum SSL version, you can invoke the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the relevant parameter.
 *
 * @param request ModifyInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSLWithOptions(const ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.getSSLEnabled();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceSSL"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceSSLResponse>();
}

/**
 * @summary Enables the Transport Layer Security (TLS) encryption protocol for an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
 *
 * @description For the corresponding console operation, see [Secure Sockets Layer (SSL) encryption settings](https://help.aliyun.com/document_detail/84898.html).
 * > To specify the minimum SSL version, you can invoke the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the relevant parameter.
 *
 * @param request ModifyInstanceSSLRequest
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications of an ApsaraDB Tair (Redis OSS-Compatible) instance.
 *
 * @description > For information about the execution process, impacts, feature limits, and billing of modifying instance specifications, refer to [Change instance configurations](https://help.aliyun.com/document_detail/26353.html).
 *
 * @param request ModifyInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpecWithOptions(const ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasForceTrans()) {
    query["ForceTrans"] = request.getForceTrans();
  }

  if (!!request.hasForceUpgrade()) {
    query["ForceUpgrade"] = request.getForceUpgrade();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMajorVersion()) {
    query["MajorVersion"] = request.getMajorVersion();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
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

  if (!!request.hasReadOnlyCount()) {
    query["ReadOnlyCount"] = request.getReadOnlyCount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicaCount()) {
    query["ReplicaCount"] = request.getReplicaCount();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasSlaveReadOnlyCount()) {
    query["SlaveReadOnlyCount"] = request.getSlaveReadOnlyCount();
  }

  if (!!request.hasSlaveReplicaCount()) {
    query["SlaveReplicaCount"] = request.getSlaveReplicaCount();
  }

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceSpec"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceSpecResponse>();
}

/**
 * @summary Modifies the specifications of an ApsaraDB Tair (Redis OSS-Compatible) instance.
 *
 * @description > For information about the execution process, impacts, feature limits, and billing of modifying instance specifications, refer to [Change instance configurations](https://help.aliyun.com/document_detail/26353.html).
 *
 * @param request ModifyInstanceSpecRequest
 * @return ModifyInstanceSpecResponse
 */
ModifyInstanceSpecResponse Client::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Enables the transparent data encryption (TDE) feature for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, with support for custom keys.
 *
 * @description > For more information about Transparent Data Encryption (TDE) and the impacts of enabling TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request ModifyInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceTDEResponse
 */
ModifyInstanceTDEResponse Client::modifyInstanceTDEWithOptions(const ModifyInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEncryptionName()) {
    query["EncryptionName"] = request.getEncryptionName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.getTDEStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceTDE"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceTDEResponse>();
}

/**
 * @summary Enables the transparent data encryption (TDE) feature for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, with support for custom keys.
 *
 * @description > For more information about Transparent Data Encryption (TDE) and the impacts of enabling TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
 *
 * @param request ModifyInstanceTDERequest
 * @return ModifyInstanceTDEResponse
 */
ModifyInstanceTDEResponse Client::modifyInstanceTDE(const ModifyInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary Enables or initiates a shutdown of password-free access over a VPC. After this feature is enabled, cloud servers in the same VPC can connect to the ApsaraDB for Tair (Redis® OSS-Compatible) database instance without a password. Connections using a username and password are still supported.
 *
 * @description For information about how to perform this operation in the console, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
 *
 * @param request ModifyInstanceVpcAuthModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceVpcAuthModeResponse
 */
ModifyInstanceVpcAuthModeResponse Client::modifyInstanceVpcAuthModeWithOptions(const ModifyInstanceVpcAuthModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasVpcAuthMode()) {
    query["VpcAuthMode"] = request.getVpcAuthMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceVpcAuthMode"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceVpcAuthModeResponse>();
}

/**
 * @summary Enables or initiates a shutdown of password-free access over a VPC. After this feature is enabled, cloud servers in the same VPC can connect to the ApsaraDB for Tair (Redis® OSS-Compatible) database instance without a password. Connections using a username and password are still supported.
 *
 * @description For information about how to perform this operation in the console, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
 *
 * @param request ModifyInstanceVpcAuthModeRequest
 * @return ModifyInstanceVpcAuthModeResponse
 */
ModifyInstanceVpcAuthModeResponse Client::modifyInstanceVpcAuthMode(const ModifyInstanceVpcAuthModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVpcAuthModeWithOptions(request, runtime);
}

/**
 * @summary Temporarily adjusts the internal network bandwidth of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance in a dedicated cluster.
 *
 * @description > * This operation applies only to instances created in dedicated clusters<props="china">. For information about the related console operations and limits, see [Modify bandwidth policy](https://help.aliyun.com/document_detail/206257.html). To adjust the bandwidth of a regular instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
 *
 * @param request ModifyIntranetAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIntranetAttributeResponse
 */
ModifyIntranetAttributeResponse Client::modifyIntranetAttributeWithOptions(const ModifyIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandWidth()) {
    query["BandWidth"] = request.getBandWidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyIntranetAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIntranetAttributeResponse>();
}

/**
 * @summary Temporarily adjusts the internal network bandwidth of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance in a dedicated cluster.
 *
 * @description > * This operation applies only to instances created in dedicated clusters<props="china">. For information about the related console operations and limits, see [Modify bandwidth policy](https://help.aliyun.com/document_detail/206257.html). To adjust the bandwidth of a regular instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
 *
 * @param request ModifyIntranetAttributeRequest
 * @return ModifyIntranetAttributeResponse
 */
ModifyIntranetAttributeResponse Client::modifyIntranetAttribute(const ModifyIntranetAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIntranetAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of a parameter template.
 *
 * @param request ModifyParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterGroupResponse
 */
ModifyParameterGroupResponse Client::modifyParameterGroupWithOptions(const ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
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

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
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
    {"action" , "ModifyParameterGroup"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParameterGroupResponse>();
}

/**
 * @summary Modifies the settings of a parameter template.
 *
 * @param request ModifyParameterGroupRequest
 * @return ModifyParameterGroupResponse
 */
ModifyParameterGroupResponse Client::modifyParameterGroup(const ModifyParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which a Tair (Redis® OSS-Compatible) instance belongs.
 *
 * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
 * > A resource group is a mechanism for managing resources in groups within an Alibaba Cloud account. Resource groups help you address the complexity of resource grouping and authorization management within a single Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroupWithOptions(const ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ModifyResourceGroup"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceGroupResponse>();
}

/**
 * @summary Modifies the resource group to which a Tair (Redis® OSS-Compatible) instance belongs.
 *
 * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
 * > A resource group is a mechanism for managing resources in groups within an Alibaba Cloud account. Resource groups help you address the complexity of resource grouping and authorization management within a single Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyResourceGroupRequest
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroup(const ModifyResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Settings the security groups in the whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description This operation overwrites the existing security groups in the instance whitelist and adds the security groups specified by the **SecurityGroupId** parameter to the whitelist. For the corresponding console operation, see [Add a security group](https://help.aliyun.com/document_detail/148267.html).
 *
 * @param request ModifySecurityGroupConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityGroupConfigurationResponse
 */
ModifySecurityGroupConfigurationResponse Client::modifySecurityGroupConfigurationWithOptions(const ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroupConfiguration"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityGroupConfigurationResponse>();
}

/**
 * @summary Settings the security groups in the whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description This operation overwrites the existing security groups in the instance whitelist and adds the security groups specified by the **SecurityGroupId** parameter to the whitelist. For the corresponding console operation, see [Add a security group](https://help.aliyun.com/document_detail/148267.html).
 *
 * @param request ModifySecurityGroupConfigurationRequest
 * @return ModifySecurityGroupConfigurationResponse
 */
ModifySecurityGroupConfigurationResponse Client::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary Configures the IP whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Configure an IP whitelist](https://help.aliyun.com/document_detail/56464.html).
 *
 * @param request ModifySecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityIpGroupAttribute()) {
    query["SecurityIpGroupAttribute"] = request.getSecurityIpGroupAttribute();
  }

  if (!!request.hasSecurityIpGroupName()) {
    query["SecurityIpGroupName"] = request.getSecurityIpGroupName();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.getSecurityIps();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIps"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIpsResponse>();
}

/**
 * @summary Configures the IP whitelist of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the console operation that corresponds to this API operation, see [Configure an IP whitelist](https://help.aliyun.com/document_detail/56464.html).
 *
 * @param request ModifySecurityIpsRequest
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary 修改TairCustom实例基本参数
 *
 * @param request ModifyTairKVCacheCustomInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTairKVCacheCustomInstanceAttributeResponse
 */
ModifyTairKVCacheCustomInstanceAttributeResponse Client::modifyTairKVCacheCustomInstanceAttributeWithOptions(const ModifyTairKVCacheCustomInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTairKVCacheCustomInstanceAttribute"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTairKVCacheCustomInstanceAttributeResponse>();
}

/**
 * @summary 修改TairCustom实例基本参数
 *
 * @param request ModifyTairKVCacheCustomInstanceAttributeRequest
 * @return ModifyTairKVCacheCustomInstanceAttributeResponse
 */
ModifyTairKVCacheCustomInstanceAttributeResponse Client::modifyTairKVCacheCustomInstanceAttribute(const ModifyTairKVCacheCustomInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTairKVCacheCustomInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Performs a node operation. Currently, this operation supports modifying the execution time of a node.
 *
 * @param request ModifyTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTaskInfoResponse
 */
ModifyTaskInfoResponse Client::modifyTaskInfoWithOptions(const ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.getActionParams();
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

  if (!!request.hasStepName()) {
    query["StepName"] = request.getStepName();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTaskInfo"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTaskInfoResponse>();
}

/**
 * @summary Performs a node operation. Currently, this operation supports modifying the execution time of a node.
 *
 * @param request ModifyTaskInfoRequest
 * @return ModifyTaskInfoResponse
 */
ModifyTaskInfoResponse Client::modifyTaskInfo(const ModifyTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Restarts the proxy nodes of a running Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is supported only for instances that use the cluster architecture in proxy mode or the read/write splitting architecture. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
 *
 * @param request RebootProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootProxyResponse
 */
RebootProxyResponse Client::rebootProxyWithOptions(const RebootProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProxyList()) {
    query["ProxyList"] = request.getProxyList();
  }

  if (!!request.hasProxyNodeList()) {
    query["ProxyNodeList"] = request.getProxyNodeList();
  }

  if (!!request.hasRebootMode()) {
    query["RebootMode"] = request.getRebootMode();
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
    {"action" , "RebootProxy"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootProxyResponse>();
}

/**
 * @summary Restarts the proxy nodes of a running Tair (Redis® OSS-Compatible) database instance.
 *
 * @description This operation is supported only for instances that use the cluster architecture in proxy mode or the read/write splitting architecture. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
 *
 * @param request RebootProxyRequest
 * @return RebootProxyResponse
 */
RebootProxyResponse Client::rebootProxy(const RebootProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootProxyWithOptions(request, runtime);
}

/**
 * @summary Releases the direct connection address of a Tair (Redis® OSS-Compatible) cluster instance.
 *
 * @description A client can use the direct connection address to bypass the proxy and connect to a Tair (Redis® OSS-Compatible) database cluster in the same way as connecting to a native Redis cluster. This reduces link overhead and further improves the response speed of the instance. For more information, see [Enable direct connection access](https://help.aliyun.com/document_detail/146901.html).
 *
 * @param request ReleaseDirectConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseDirectConnectionResponse
 */
ReleaseDirectConnectionResponse Client::releaseDirectConnectionWithOptions(const ReleaseDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ReleaseDirectConnection"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseDirectConnectionResponse>();
}

/**
 * @summary Releases the direct connection address of a Tair (Redis® OSS-Compatible) cluster instance.
 *
 * @description A client can use the direct connection address to bypass the proxy and connect to a Tair (Redis® OSS-Compatible) database cluster in the same way as connecting to a native Redis cluster. This reduces link overhead and further improves the response speed of the instance. For more information, see [Enable direct connection access](https://help.aliyun.com/document_detail/146901.html).
 *
 * @param request ReleaseDirectConnectionRequest
 * @return ReleaseDirectConnectionResponse
 */
ReleaseDirectConnectionResponse Client::releaseDirectConnection(const ReleaseDirectConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseDirectConnectionWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, refer to [Release a public endpoint](https://help.aliyun.com/document_detail/125424.html).
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnectionWithOptions(const ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ReleaseInstancePublicConnection"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstancePublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of a Tair (Redis® OSS-Compatible) instance.
 *
 * @description For the corresponding console operation, refer to [Release a public endpoint](https://help.aliyun.com/document_detail/125424.html).
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Removes a child instance from a distributed instance and converts it to a standard instance. Data is retained.
 *
 * @description > After the conversion is complete, the child instance becomes a standard instance. You can find and manage the instance in the instance list of the corresponding region.
 *
 * @param request RemoveSubInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSubInstanceResponse
 */
RemoveSubInstanceResponse Client::removeSubInstanceWithOptions(const RemoveSubInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "RemoveSubInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSubInstanceResponse>();
}

/**
 * @summary Removes a child instance from a distributed instance and converts it to a standard instance. Data is retained.
 *
 * @description > After the conversion is complete, the child instance becomes a standard instance. You can find and manage the instance in the instance list of the corresponding region.
 *
 * @param request RemoveSubInstanceRequest
 * @return RemoveSubInstanceResponse
 */
RemoveSubInstanceResponse Client::removeSubInstance(const RemoveSubInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSubInstanceWithOptions(request, runtime);
}

/**
 * @summary The bandwidth of ApsaraDB for Tair (Redis® OSS-Compatible) database instances has been upgraded to the pay-as-you-go pattern. This operation is no longer recommended.
 *
 * @description This operation is no longer recommended. You can adjust instance bandwidth through the console ([Modify instance bandwidth](https://help.aliyun.com/document_detail/102588.html)) or by calling [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html).
 *
 * @param request RenewAdditionalBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAdditionalBandwidthResponse
 */
RenewAdditionalBandwidthResponse Client::renewAdditionalBandwidthWithOptions(const RenewAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderTimeLength()) {
    query["OrderTimeLength"] = request.getOrderTimeLength();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAdditionalBandwidth"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAdditionalBandwidthResponse>();
}

/**
 * @summary The bandwidth of ApsaraDB for Tair (Redis® OSS-Compatible) database instances has been upgraded to the pay-as-you-go pattern. This operation is no longer recommended.
 *
 * @description This operation is no longer recommended. You can adjust instance bandwidth through the console ([Modify instance bandwidth](https://help.aliyun.com/document_detail/102588.html)) or by calling [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html).
 *
 * @param request RenewAdditionalBandwidthRequest
 * @return RenewAdditionalBandwidthResponse
 */
RenewAdditionalBandwidthResponse Client::renewAdditionalBandwidth(const RenewAdditionalBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAdditionalBandwidthWithOptions(request, runtime);
}

/**
 * @summary Creates a renewal order for a subscription ApsaraDB for Tair (Redis OSS-Compatible) instance.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Creates a renewal order for a subscription ApsaraDB for Tair (Redis OSS-Compatible) instance.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the password of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
 *
 * @description > This operation is supported only for Redis instances that run version 4.0 or later.
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

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2015-01-01"},
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
 * @summary Resets the password of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
 *
 * @description > This operation is supported only for Redis instances that run version 4.0 or later.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary 重置TairCustom上主机密码
 *
 * @param request ResetTairKVCacheCustomInstancePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetTairKVCacheCustomInstancePasswordResponse
 */
ResetTairKVCacheCustomInstancePasswordResponse Client::resetTairKVCacheCustomInstancePasswordWithOptions(const ResetTairKVCacheCustomInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetTairKVCacheCustomInstancePassword"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetTairKVCacheCustomInstancePasswordResponse>();
}

/**
 * @summary 重置TairCustom上主机密码
 *
 * @param request ResetTairKVCacheCustomInstancePasswordRequest
 * @return ResetTairKVCacheCustomInstancePasswordResponse
 */
ResetTairKVCacheCustomInstancePasswordResponse Client::resetTairKVCacheCustomInstancePassword(const ResetTairKVCacheCustomInstancePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetTairKVCacheCustomInstancePasswordWithOptions(request, runtime);
}

/**
 * @summary 变配TairCustom的主机的磁盘
 *
 * @param request ResizeTairKVCacheCustomInstanceDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeTairKVCacheCustomInstanceDiskResponse
 */
ResizeTairKVCacheCustomInstanceDiskResponse Client::resizeTairKVCacheCustomInstanceDiskWithOptions(const ResizeTairKVCacheCustomInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ResizeTairKVCacheCustomInstanceDisk"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeTairKVCacheCustomInstanceDiskResponse>();
}

/**
 * @summary 变配TairCustom的主机的磁盘
 *
 * @param request ResizeTairKVCacheCustomInstanceDiskRequest
 * @return ResizeTairKVCacheCustomInstanceDiskResponse
 */
ResizeTairKVCacheCustomInstanceDiskResponse Client::resizeTairKVCacheCustomInstanceDisk(const ResizeTairKVCacheCustomInstanceDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeTairKVCacheCustomInstanceDiskWithOptions(request, runtime);
}

/**
 * @summary Restarts a running Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasUpgradeMinorVersion()) {
    query["UpgradeMinorVersion"] = request.getUpgradeMinorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2015-01-01"},
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
 * @summary Restarts a running Tair (Redis® OSS-Compatible) database instance.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary 重启TairCustom的主机
 *
 * @param request RestartTairKVCacheCustomInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartTairKVCacheCustomInstanceResponse
 */
RestartTairKVCacheCustomInstanceResponse Client::restartTairKVCacheCustomInstanceWithOptions(const RestartTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "RestartTairKVCacheCustomInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartTairKVCacheCustomInstanceResponse>();
}

/**
 * @summary 重启TairCustom的主机
 *
 * @param request RestartTairKVCacheCustomInstanceRequest
 * @return RestartTairKVCacheCustomInstanceResponse
 */
RestartTairKVCacheCustomInstanceResponse Client::restartTairKVCacheCustomInstance(const RestartTairKVCacheCustomInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartTairKVCacheCustomInstanceWithOptions(request, runtime);
}

/**
 * @summary Restores data from a specified backup file to a Tair (Redis OSS-Compatible) database instance.
 *
 * @description * If your instance is a Tair (Enterprise Edition) memory-optimized instance of the classic architecture, you can call this operation to restore specified keys in the current instance to a specific point in time accurate to seconds. This enables more fine-grained data restoration.
 * * For instances other than the preceding type, call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore backup data to a new instance.
 *
 * @param request RestoreInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstanceWithOptions(const RestoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasFilterKey()) {
    query["FilterKey"] = request.getFilterKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTimeShift()) {
    query["TimeShift"] = request.getTimeShift();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreInstanceResponse>();
}

/**
 * @summary Restores data from a specified backup file to a Tair (Redis OSS-Compatible) database instance.
 *
 * @description * If your instance is a Tair (Enterprise Edition) memory-optimized instance of the classic architecture, you can call this operation to restore specified keys in the current instance to a specific point in time accurate to seconds. This enables more fine-grained data restoration.
 * * For instances other than the preceding type, call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore backup data to a new instance.
 *
 * @param request RestoreInstanceRequest
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstance(const RestoreInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreInstanceWithOptions(request, runtime);
}

/**
 * @summary Manually retries an inspection task.
 *
 * @param request RetryInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryInspectionTaskResponse
 */
RetryInspectionTaskResponse Client::retryInspectionTaskWithOptions(const RetryInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryInspectionTask"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryInspectionTaskResponse>();
}

/**
 * @summary Manually retries an inspection task.
 *
 * @param request RetryInspectionTaskRequest
 * @return RetryInspectionTaskResponse
 */
RetryInspectionTaskResponse Client::retryInspectionTask(const RetryInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary 启动TairCustom的主机
 *
 * @param request StartTairKVCacheCustomInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTairKVCacheCustomInstanceResponse
 */
StartTairKVCacheCustomInstanceResponse Client::startTairKVCacheCustomInstanceWithOptions(const StartTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "StartTairKVCacheCustomInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTairKVCacheCustomInstanceResponse>();
}

/**
 * @summary 启动TairCustom的主机
 *
 * @param request StartTairKVCacheCustomInstanceRequest
 * @return StartTairKVCacheCustomInstanceResponse
 */
StartTairKVCacheCustomInstanceResponse Client::startTairKVCacheCustomInstance(const StartTairKVCacheCustomInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTairKVCacheCustomInstanceWithOptions(request, runtime);
}

/**
 * @summary 停止TairCustom的主机
 *
 * @param request StopTairKVCacheCustomInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTairKVCacheCustomInstanceResponse
 */
StopTairKVCacheCustomInstanceResponse Client::stopTairKVCacheCustomInstanceWithOptions(const StopTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "StopTairKVCacheCustomInstance"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTairKVCacheCustomInstanceResponse>();
}

/**
 * @summary 停止TairCustom的主机
 *
 * @param request StopTairKVCacheCustomInstanceRequest
 * @return StopTairKVCacheCustomInstanceResponse
 */
StopTairKVCacheCustomInstanceResponse Client::stopTairKVCacheCustomInstance(const StopTairKVCacheCustomInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTairKVCacheCustomInstanceWithOptions(request, runtime);
}

/**
 * @summary Performs a primary/secondary switchover to switch node roles. This operation is applicable to scenarios such as disaster recovery drills and nearest access for applications in multi-zone deployments.
 *
 * @description > For more information about nearest access for applications in multi-zone deployment scenarios, see [Scenario examples](https://help.aliyun.com/document_detail/164222.html).
 * When you call this operation, the instance must be of the high-availability or dual-replica type.
 * Calling this operation has the following impacts:
 * * After the node role switchover is triggered, the data node on which the switchover is performed will enter a read-only state for a few seconds and experience transient disconnections. Make sure that your application has a reconnection mechanism.
 * * While the instance is in the switching state, you cannot perform instance-level operations, such as changing configurations or migrating zones.
 *
 * @param request SwitchInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchInstanceHAResponse
 */
SwitchInstanceHAResponse Client::switchInstanceHAWithOptions(const SwitchInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSourceNodeId()) {
    query["SourceNodeId"] = request.getSourceNodeId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  if (!!request.hasSwitchType()) {
    query["SwitchType"] = request.getSwitchType();
  }

  if (!!request.hasTargetNodeId()) {
    query["TargetNodeId"] = request.getTargetNodeId();
  }

  if (!!request.hasTargetShardName()) {
    query["TargetShardName"] = request.getTargetShardName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchInstanceHA"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchInstanceHAResponse>();
}

/**
 * @summary Performs a primary/secondary switchover to switch node roles. This operation is applicable to scenarios such as disaster recovery drills and nearest access for applications in multi-zone deployments.
 *
 * @description > For more information about nearest access for applications in multi-zone deployment scenarios, see [Scenario examples](https://help.aliyun.com/document_detail/164222.html).
 * When you call this operation, the instance must be of the high-availability or dual-replica type.
 * Calling this operation has the following impacts:
 * * After the node role switchover is triggered, the data node on which the switchover is performed will enter a read-only state for a few seconds and experience transient disconnections. Make sure that your application has a reconnection mechanism.
 * * While the instance is in the switching state, you cannot perform instance-level operations, such as changing configurations or migrating zones.
 *
 * @param request SwitchInstanceHARequest
 * @return SwitchInstanceHAResponse
 */
SwitchInstanceHAResponse Client::switchInstanceHA(const SwitchInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchInstanceHAWithOptions(request, runtime);
}

/**
 * @summary Enables or shuts down the proxy mode for a Tair (Redis® OSS-Compatible) database cluster instance in a dedicated cluster.
 *
 * @description For more information about the proxy mode, see [Proxy features](https://help.aliyun.com/document_detail/142959.html).
 * Before calling this operation, ensure that the following conditions are met:
 * * The instance is created in a dedicated cluster. For more information, see [ApsaraDB MyBase dedicated cluster](https://help.aliyun.com/document_detail/141455.html).
 * * The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
 * > Before calling this operation, call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and check the value of the **ProxyCount** response parameter to determine whether the proxy mode is enabled for the instance. For example, a value of 0 indicates that the proxy mode is disabled. A value greater than 0 indicates that the proxy mode is enabled.
 *
 * @param request SwitchInstanceProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchInstanceProxyResponse
 */
SwitchInstanceProxyResponse Client::switchInstanceProxyWithOptions(const SwitchInstanceProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "SwitchInstanceProxy"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchInstanceProxyResponse>();
}

/**
 * @summary Enables or shuts down the proxy mode for a Tair (Redis® OSS-Compatible) database cluster instance in a dedicated cluster.
 *
 * @description For more information about the proxy mode, see [Proxy features](https://help.aliyun.com/document_detail/142959.html).
 * Before calling this operation, ensure that the following conditions are met:
 * * The instance is created in a dedicated cluster. For more information, see [ApsaraDB MyBase dedicated cluster](https://help.aliyun.com/document_detail/141455.html).
 * * The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
 * > Before calling this operation, call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and check the value of the **ProxyCount** response parameter to determine whether the proxy mode is enabled for the instance. For example, a value of 0 indicates that the proxy mode is disabled. A value greater than 0 indicates that the proxy mode is enabled.
 *
 * @param request SwitchInstanceProxyRequest
 * @return SwitchInstanceProxyResponse
 */
SwitchInstanceProxyResponse Client::switchInstanceProxy(const SwitchInstanceProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchInstanceProxyWithOptions(request, runtime);
}

/**
 * @summary Switches an instance to a specified zone.
 *
 * @description This operation is supported only for cloud-native architecture instances.
 *
 * @param request SwitchInstanceToTargetZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchInstanceToTargetZoneResponse
 */
SwitchInstanceToTargetZoneResponse Client::switchInstanceToTargetZoneWithOptions(const SwitchInstanceToTargetZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSwitchType()) {
    query["SwitchType"] = request.getSwitchType();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchInstanceToTargetZone"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchInstanceToTargetZoneResponse>();
}

/**
 * @summary Switches an instance to a specified zone.
 *
 * @description This operation is supported only for cloud-native architecture instances.
 *
 * @param request SwitchInstanceToTargetZoneRequest
 * @return SwitchInstanceToTargetZoneResponse
 */
SwitchInstanceToTargetZoneResponse Client::switchInstanceToTargetZone(const SwitchInstanceToTargetZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchInstanceToTargetZoneWithOptions(request, runtime);
}

/**
 * @summary Performs an impersonation of a zone-level failure of an active ApsaraDB for Tair (Redis® OSS-Compatible) cluster architecture database instance, triggering an automatic switchover to the secondary zone.
 *
 * @description - This operation applies only to active multi-zone (dual-zone) cluster architecture instances.
 * - The node subjected to failure impersonation automatically recovers later. However, the primary node is located in the secondary zone and the secondary node is located in the primary zone. This may cause cross-data-center access between the instance and other services. To resolve this issue, you can perform a manual switchover of zones on the Service Availability page in the console.
 *
 * @param request SwitchInstanceZoneFailOverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchInstanceZoneFailOverResponse
 */
SwitchInstanceZoneFailOverResponse Client::switchInstanceZoneFailOverWithOptions(const SwitchInstanceZoneFailOverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSiteFaultTime()) {
    query["SiteFaultTime"] = request.getSiteFaultTime();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchInstanceZoneFailOver"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchInstanceZoneFailOverResponse>();
}

/**
 * @summary Performs an impersonation of a zone-level failure of an active ApsaraDB for Tair (Redis® OSS-Compatible) cluster architecture database instance, triggering an automatic switchover to the secondary zone.
 *
 * @description - This operation applies only to active multi-zone (dual-zone) cluster architecture instances.
 * - The node subjected to failure impersonation automatically recovers later. However, the primary node is located in the secondary zone and the secondary node is located in the primary zone. This may cause cross-data-center access between the instance and other services. To resolve this issue, you can perform a manual switchover of zones on the Service Availability page in the console.
 *
 * @param request SwitchInstanceZoneFailOverRequest
 * @return SwitchInstanceZoneFailOverResponse
 */
SwitchInstanceZoneFailOverResponse Client::switchInstanceZoneFailOver(const SwitchInstanceZoneFailOverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchInstanceZoneFailOverWithOptions(request, runtime);
}

/**
 * @summary Switches the virtual private cloud (VPC) or vSwitch of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. If the instance uses the classic network, the instance is switched to a VPC.
 *
 * @param request SwitchNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchNetworkResponse
 */
SwitchNetworkResponse Client::switchNetworkWithOptions(const SwitchNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.getClassicExpiredDays();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRetainClassic()) {
    query["RetainClassic"] = request.getRetainClassic();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTargetNetworkType()) {
    query["TargetNetworkType"] = request.getTargetNetworkType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchNetwork"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchNetworkResponse>();
}

/**
 * @summary Switches the virtual private cloud (VPC) or vSwitch of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. If the instance uses the classic network, the instance is switched to a VPC.
 *
 * @param request SwitchNetworkRequest
 * @return SwitchNetworkResponse
 */
SwitchNetworkResponse Client::switchNetwork(const SwitchNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchNetworkWithOptions(request, runtime);
}

/**
 * @summary Before you use Data Transmission Service (DTS) to migrate or synchronize data of an ApsaraDB for Tair (Redis OSS-Compatible) database instance, you can invoke this operation to restrict the instance so that it does not execute Upgrade/Downgrade operations. This prevents data migration or synchronization nodes from becoming failed due to Upgrade/Downgrade.
 *
 * @description - This operation applies only to Classic Edition instances.
 * - After the data migration or synchronization task is completed, you can call this operation again to remove the specification change restrictions.
 *
 * @param request SyncDtsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDtsStatusResponse
 */
SyncDtsStatusResponse Client::syncDtsStatusWithOptions(const SyncDtsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "SyncDtsStatus"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDtsStatusResponse>();
}

/**
 * @summary Before you use Data Transmission Service (DTS) to migrate or synchronize data of an ApsaraDB for Tair (Redis OSS-Compatible) database instance, you can invoke this operation to restrict the instance so that it does not execute Upgrade/Downgrade operations. This prevents data migration or synchronization nodes from becoming failed due to Upgrade/Downgrade.
 *
 * @description - This operation applies only to Classic Edition instances.
 * - After the data migration or synchronization task is completed, you can call this operation again to remove the specification change restrictions.
 *
 * @param request SyncDtsStatusRequest
 * @return SyncDtsStatusResponse
 */
SyncDtsStatusResponse Client::syncDtsStatus(const SyncDtsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDtsStatusWithOptions(request, runtime);
}

/**
 * @summary Attaches labels to one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description If you have a large number of instances, you can create multiple labels and attach different labels to the instances for categorization. You can then filter instances by label.
 * * A label consists of a key-value pair. The key must be unique within the same account and region, while the value has no such restriction.
 * * If the label in Settings does not exist, automatic creation of the label is performed and it is attached to the target instance.
 * * If the instance is already attached to a label with the same key, the new label overwrites the existing one.
 * * You can attach up to 20 labels to each instance.
 * * You can attach labels to up to 50 instances each time you invoke the API.
 * For the corresponding console operation, see [Create a label](https://help.aliyun.com/document_detail/118779.html).
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
    {"version" , "2015-01-01"},
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
 * @summary Attaches labels to one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
 *
 * @description If you have a large number of instances, you can create multiple labels and attach different labels to the instances for categorization. You can then filter instances by label.
 * * A label consists of a key-value pair. The key must be unique within the same account and region, while the value has no such restriction.
 * * If the label in Settings does not exist, automatic creation of the label is performed and it is attached to the target instance.
 * * If the instance is already attached to a label with the same key, the new label overwrites the existing one.
 * * You can attach up to 20 labels to each instance.
 * * You can attach labels to up to 50 instances each time you invoke the API.
 * For the corresponding console operation, see [Create a label](https://help.aliyun.com/document_detail/118779.html).
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a Tair (Redis® OSS-Compatible) database instance. You can switch between the pay-as-you-go and subscription billing methods.
 *
 * @description Before you call this operation, make sure that you understand the precautions and billing instructions. For more information, see:
 * * [Switch from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/54542.html).
 * * [Switch from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
 *
 * @param request TransformInstanceChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformInstanceChargeTypeResponse
 */
TransformInstanceChargeTypeResponse Client::transformInstanceChargeTypeWithOptions(const TransformInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformInstanceChargeType"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformInstanceChargeTypeResponse>();
}

/**
 * @summary Changes the billing method of a Tair (Redis® OSS-Compatible) database instance. You can switch between the pay-as-you-go and subscription billing methods.
 *
 * @description Before you call this operation, make sure that you understand the precautions and billing instructions. For more information, see:
 * * [Switch from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/54542.html).
 * * [Switch from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
 *
 * @param request TransformInstanceChargeTypeRequest
 * @return TransformInstanceChargeTypeResponse
 */
TransformInstanceChargeTypeResponse Client::transformInstanceChargeType(const TransformInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Converts a classic architecture instance to cloud-native.
 *
 * @param request TransformToEcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformToEcsResponse
 */
TransformToEcsResponse Client::transformToEcsWithOptions(const TransformToEcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsAcrossZone()) {
    query["IsAcrossZone"] = request.getIsAcrossZone();
  }

  if (!!request.hasIzNo()) {
    query["IzNo"] = request.getIzNo();
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

  if (!!request.hasSecondaryIzNo()) {
    query["SecondaryIzNo"] = request.getSecondaryIzNo();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformToEcs"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformToEcsResponse>();
}

/**
 * @summary Converts a classic architecture instance to cloud-native.
 *
 * @param request TransformToEcsRequest
 * @return TransformToEcsResponse
 */
TransformToEcsResponse Client::transformToEcs(const TransformToEcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformToEcsWithOptions(request, runtime);
}

/**
 * @summary Transforms a pay-as-you-go Tair (Redis® OSS-Compatible) database instance into a subscription instance.
 *
 * @description For the corresponding console operation, see [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
 *
 * @param request TransformToPrePaidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformToPrePaidResponse
 */
TransformToPrePaidResponse Client::transformToPrePaidWithOptions(const TransformToPrePaidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformToPrePaid"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformToPrePaidResponse>();
}

/**
 * @summary Transforms a pay-as-you-go Tair (Redis® OSS-Compatible) database instance into a subscription instance.
 *
 * @description For the corresponding console operation, see [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
 *
 * @param request TransformToPrePaidRequest
 * @return TransformToPrePaidResponse
 */
TransformToPrePaidResponse Client::transformToPrePaid(const TransformToPrePaidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformToPrePaidWithOptions(request, runtime);
}

/**
 * @summary Unlocks a write-locked instance. After the instance is unlocked, the instance supports both reading and writing data.
 *
 * @param request UnlockDBInstanceWriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockDBInstanceWriteResponse
 */
UnlockDBInstanceWriteResponse Client::unlockDBInstanceWriteWithOptions(const UnlockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "UnlockDBInstanceWrite"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockDBInstanceWriteResponse>();
}

/**
 * @summary Unlocks a write-locked instance. After the instance is unlocked, the instance supports both reading and writing data.
 *
 * @param request UnlockDBInstanceWriteRequest
 * @return UnlockDBInstanceWriteResponse
 */
UnlockDBInstanceWriteResponse Client::unlockDBInstanceWrite(const UnlockDBInstanceWriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockDBInstanceWriteWithOptions(request, runtime);
}

/**
 * @summary Removes labels from an ApsaraDB for Tair (Redis OSS-compatible) database instance.
 *
 * @description * You can remove up to 20 tags at a time.
 * * If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
 * For the corresponding console operation, see [Remove tags](https://help.aliyun.com/document_detail/119157.html).
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
    {"version" , "2015-01-01"},
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
 * @summary Removes labels from an ApsaraDB for Tair (Redis OSS-compatible) database instance.
 *
 * @description * You can remove up to 20 tags at a time.
 * * If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
 * For the corresponding console operation, see [Remove tags](https://help.aliyun.com/document_detail/119157.html).
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades the proxy nodes of a cluster instance to the latest version.
 *
 * @description The upgrade process and impact vary depending on the architecture. For more information, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
 * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the proxy nodes.
 * > * The upgrade causes connection interruptions. Perform the upgrade during off-peak hours and make sure that your application has a reconnection mechanism. For more information about the impact, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
 *
 * @param request UpgradeProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeProxyResponse
 */
UpgradeProxyResponse Client::upgradeProxyWithOptions(const UpgradeProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProxyInstanceIds()) {
    query["ProxyInstanceIds"] = request.getProxyInstanceIds();
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

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeProxy"},
    {"version" , "2015-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeProxyResponse>();
}

/**
 * @summary Upgrades the proxy nodes of a cluster instance to the latest version.
 *
 * @description The upgrade process and impact vary depending on the architecture. For more information, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
 * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the proxy nodes.
 * > * The upgrade causes connection interruptions. Perform the upgrade during off-peak hours and make sure that your application has a reconnection mechanism. For more information about the impact, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
 *
 * @param request UpgradeProxyRequest
 * @return UpgradeProxyResponse
 */
UpgradeProxyResponse Client::upgradeProxy(const UpgradeProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeProxyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RKvstore20150101