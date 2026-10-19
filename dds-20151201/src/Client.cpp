#include <darabonba/Core.hpp>
#include <alibabacloud/Dds20151201.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Dds20151201::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dds20151201
{

AlibabaCloud::Dds20151201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "mongodb.cn-qingdao.aliyuncs.com"},
    {"cn-beijing" , "mongodb.aliyuncs.com"},
    {"cn-zhangjiakou" , "mongodb.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote" , "mongodb.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou" , "mongodb.aliyuncs.com"},
    {"cn-shanghai" , "mongodb.aliyuncs.com"},
    {"cn-shenzhen" , "mongodb.cn-shenzhen.aliyuncs.com"},
    {"cn-heyuan" , "mongodb.aliyuncs.com"},
    {"cn-guangzhou" , "mongodb.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "mongodb.cn-chengdu.aliyuncs.com"},
    {"cn-hongkong" , "mongodb.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1" , "mongodb.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "mongodb.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "mongodb.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "mongodb.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "mongodb.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "mongodb.us-east-1.aliyuncs.com"},
    {"us-west-1" , "mongodb.us-west-1.aliyuncs.com"},
    {"eu-west-1" , "mongodb.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "mongodb.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "mongodb.ap-south-1.aliyuncs.com"},
    {"me-east-1" , "mongodb.me-east-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "mongodb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "mongodb.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "mongodb.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1" , "mongodb.cn-north-2-gov-1.aliyuncs.com"},
    {"ap-northeast-2-pop" , "mongodb.aliyuncs.com"},
    {"cn-beijing-finance-1" , "mongodb.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "mongodb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "mongodb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "mongodb.aliyuncs.com"},
    {"cn-edge-1" , "mongodb.aliyuncs.com"},
    {"cn-fujian" , "mongodb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "mongodb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "mongodb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "mongodb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "mongodb.aliyuncs.com"},
    {"cn-qingdao-nebula" , "mongodb.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "mongodb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "mongodb.aliyuncs.com"},
    {"cn-shanghai-inner" , "mongodb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "mongodb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "mongodb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "mongodb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "mongodb.aliyuncs.com"},
    {"cn-wuhan" , "mongodb.aliyuncs.com"},
    {"cn-yushanfang" , "mongodb.aliyuncs.com"},
    {"cn-zhangbei" , "mongodb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "mongodb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "mongodb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "mongodb.aliyuncs.com"},
    {"eu-west-1-oxs" , "mongodb.aliyuncs.com"},
    {"rus-west-1-pop" , "mongodb.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "mongodb.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-wuhan-lr" , "mongodb.cn-wuhan-lr.aliyuncs.com"},
    {"cn-nanjing" , "mongodb.cn-nanjing.aliyuncs.com"},
    {"ap-northeast-2" , "mongodb.ap-northeast-2.aliyuncs.com"},
    {"cn-fuzhou" , "mongodb.cn-fuzhou.aliyuncs.com"},
    {"ap-southeast-6" , "mongodb.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-7" , "mongodb.ap-southeast-7.aliyuncs.com"},
    {"us-southeast-1" , "mongodb.us-southeast-1.aliyuncs.com"},
    {"sa-east-1" , "mongodb.sa-east-1.aliyuncs.com"},
    {"na-south-1" , "mongodb.na-south-1.aliyuncs.com"},
    {"me-central-1" , "mongodb.me-central-1.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "mongodb.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-wulanchabu-gic-1" , "mongodb.cn-wulanchabu-gic-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dds", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Applies for an SRV address for an ApsaraDB for MongoDB instance.
 *
 * @description This operation applies only to replica set instances and sharded cluster instances that use cloud disks.
 *
 * @param request AllocateDBInstanceSrvNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateDBInstanceSrvNetworkAddressResponse
 */
AllocateDBInstanceSrvNetworkAddressResponse Client::allocateDBInstanceSrvNetworkAddressWithOptions(const AllocateDBInstanceSrvNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSrvConnectionType()) {
    query["SrvConnectionType"] = request.getSrvConnectionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateDBInstanceSrvNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateDBInstanceSrvNetworkAddressResponse>();
}

/**
 * @summary Applies for an SRV address for an ApsaraDB for MongoDB instance.
 *
 * @description This operation applies only to replica set instances and sharded cluster instances that use cloud disks.
 *
 * @param request AllocateDBInstanceSrvNetworkAddressRequest
 * @return AllocateDBInstanceSrvNetworkAddressResponse
 */
AllocateDBInstanceSrvNetworkAddressResponse Client::allocateDBInstanceSrvNetworkAddress(const AllocateDBInstanceSrvNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateDBInstanceSrvNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Applies for an internal network endpoint for a shard or ConfigServer node of an ApsaraDB for MongoDB database sharded cluster instance.
 *
 * @description This operation applies only to sharded cluster instances. For more details, see [Apply for an endpoint for a shard or ConfigServer node](https://help.aliyun.com/document_detail/134037.html).
 * > The allocated endpoint supports only internal network access. If you require public network access, invoke the [AllocatePublicNetworkAddress](https://help.aliyun.com/document_detail/67602.html) operation to apply for a public endpoint.
 *
 * @param request AllocateNodePrivateNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateNodePrivateNetworkAddressResponse
 */
AllocateNodePrivateNetworkAddressResponse Client::allocateNodePrivateNetworkAddressWithOptions(const AllocateNodePrivateNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

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
    {"action" , "AllocateNodePrivateNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateNodePrivateNetworkAddressResponse>();
}

/**
 * @summary Applies for an internal network endpoint for a shard or ConfigServer node of an ApsaraDB for MongoDB database sharded cluster instance.
 *
 * @description This operation applies only to sharded cluster instances. For more details, see [Apply for an endpoint for a shard or ConfigServer node](https://help.aliyun.com/document_detail/134037.html).
 * > The allocated endpoint supports only internal network access. If you require public network access, invoke the [AllocatePublicNetworkAddress](https://help.aliyun.com/document_detail/67602.html) operation to apply for a public endpoint.
 *
 * @param request AllocateNodePrivateNetworkAddressRequest
 * @return AllocateNodePrivateNetworkAddressResponse
 */
AllocateNodePrivateNetworkAddressResponse Client::allocateNodePrivateNetworkAddress(const AllocateNodePrivateNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateNodePrivateNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Allocates a public endpoint.
 *
 * @param request AllocatePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddressWithOptions(const AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "AllocatePublicNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocatePublicNetworkAddressResponse>();
}

/**
 * @summary Allocates a public endpoint.
 *
 * @param request AllocatePublicNetworkAddressRequest
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddress(const AllocatePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocatePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Cancels multiple O&M events in batches.
 *
 * @description Scenarios where O&M events cannot be canceled:
 * - The event cannot be canceled (AllowCancel is 0).
 * - The current time is later than the start time of the O&M event.
 * - The status of the O&M event is not Pending Execution (Status is not 3).
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
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2015-12-01"},
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
 * @summary Cancels multiple O&M events in batches.
 *
 * @description Scenarios where O&M events cannot be canceled:
 * - The event cannot be canceled (AllowCancel is 0).
 * - The current time is later than the start time of the O&M event.
 * - The status of the O&M event is not Pending Execution (Status is not 3).
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries whether a Key Management Service (KMS) key is authorized for a MongoDB instance.
 *
 * @description Before you invoke the [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) operation to enable transparent data encryption (TDE), invoke this operation to query the authorization of the KMS key for the MongoDB instance.
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorizedWithOptions(const CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.getTargetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCloudResourceAuthorized"},
    {"version" , "2015-12-01"},
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
 * @summary Queries whether a Key Management Service (KMS) key is authorized for a MongoDB instance.
 *
 * @description Before you invoke the [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) operation to enable transparent data encryption (TDE), invoke this operation to query the authorization of the KMS key for the MongoDB instance.
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

/**
 * @summary Checks whether a MongoDB instance meets the conditions for data restoration.
 *
 * @description This operation is applicable to replica set instances or sharded cluster instances.
 * > After you call this operation to confirm that the conditions for data restoration are met, you can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore data to a new instance.
 *
 * @param request CheckRecoveryConditionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckRecoveryConditionResponse
 */
CheckRecoveryConditionResponse Client::checkRecoveryConditionWithOptions(const CheckRecoveryConditionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDatabaseNames()) {
    query["DatabaseNames"] = request.getDatabaseNames();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSourceDBInstance()) {
    query["SourceDBInstance"] = request.getSourceDBInstance();
  }

  if (!!request.hasSourceDBInstance()) {
    query["SourceDBInstance"] = request.getSourceDBInstance();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckRecoveryCondition"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckRecoveryConditionResponse>();
}

/**
 * @summary Checks whether a MongoDB instance meets the conditions for data restoration.
 *
 * @description This operation is applicable to replica set instances or sharded cluster instances.
 * > After you call this operation to confirm that the conditions for data restoration are met, you can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore data to a new instance.
 *
 * @param request CheckRecoveryConditionRequest
 * @return CheckRecoveryConditionResponse
 */
CheckRecoveryConditionResponse Client::checkRecoveryCondition(const CheckRecoveryConditionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkRecoveryConditionWithOptions(request, runtime);
}

/**
 * @summary Queries whether a service-linked role (SLR) has been created.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2015-12-01"},
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
 * @summary Queries whether a service-linked role (SLR) has been created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a read-only shard account for an ApsaraDB for MongoDB sharded cluster instance with cloud disks.
 *
 * @description - Shard accounts can be created only for ApsaraDB for MongoDB sharded cluster instances with cloud disks.
 * - Shard accounts are granted fixed read-only permissions.
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

  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasRoles()) {
    query["Roles"] = request.getRoles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2015-12-01"},
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
 * @summary Creates a read-only shard account for an ApsaraDB for MongoDB sharded cluster instance with cloud disks.
 *
 * @description - Shard accounts can be created only for ApsaraDB for MongoDB sharded cluster instances with cloud disks.
 * - Shard accounts are granted fixed read-only permissions.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a backup for an ApsaraDB for MongoDB instance.
 *
 * @description The instance status must be running when you invoke the CreateBackup operation.
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
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
    {"version" , "2015-12-01"},
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
 * @summary Creates a backup for an ApsaraDB for MongoDB instance.
 *
 * @description The instance status must be running when you invoke the CreateBackup operation.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates or clones an ApsaraDB for MongoDB replica set instance.
 *
 * @description Before using this operation, make sure you understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * For information about instance specifications, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
 * To create a sharded cluster instance, call the [CreateShardingDBInstance](https://help.aliyun.com/document_detail/61884.html) operation.
 *
 * @param request CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
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

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDatabaseNames()) {
    query["DatabaseNames"] = request.getDatabaseNames();
  }

  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGlobalSecurityGroupIds()) {
    query["GlobalSecurityGroupIds"] = request.getGlobalSecurityGroupIds();
  }

  if (!!request.hasHiddenZoneId()) {
    query["HiddenZoneId"] = request.getHiddenZoneId();
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

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.getProvisionedIops();
  }

  if (!!request.hasReadonlyReplicas()) {
    query["ReadonlyReplicas"] = request.getReadonlyReplicas();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
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

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.getSrcDBInstanceId();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  if (!!request.hasStorageEngine()) {
    query["StorageEngine"] = request.getStorageEngine();
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
    {"action" , "CreateDBInstance"},
    {"version" , "2015-12-01"},
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
 * @summary Creates or clones an ApsaraDB for MongoDB replica set instance.
 *
 * @description Before using this operation, make sure you understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * For information about instance specifications, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
 * To create a sharded cluster instance, call the [CreateShardingDBInstance](https://help.aliyun.com/document_detail/61884.html) operation.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
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
    {"version" , "2015-12-01"},
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
 * @summary Adds a shard node or a mongos node to an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * This operation is applicable only to sharded cluster instances.
 *
 * @param request CreateNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNodeWithOptions(const CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeClass()) {
    query["NodeClass"] = request.getNodeClass();
  }

  if (!!request.hasNodeStorage()) {
    query["NodeStorage"] = request.getNodeStorage();
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

  if (!!request.hasReadonlyReplicas()) {
    query["ReadonlyReplicas"] = request.getReadonlyReplicas();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSearchDBInstanceClass()) {
    query["SearchDBInstanceClass"] = request.getSearchDBInstanceClass();
  }

  if (!!request.hasSearchNodeCount()) {
    query["SearchNodeCount"] = request.getSearchNodeCount();
  }

  if (!!request.hasSearchStorage()) {
    query["SearchStorage"] = request.getSearchStorage();
  }

  if (!!request.hasShardDirect()) {
    query["ShardDirect"] = request.getShardDirect();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNode"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeResponse>();
}

/**
 * @summary Adds a shard node or a mongos node to an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * This operation is applicable only to sharded cluster instances.
 *
 * @param request CreateNodeRequest
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNode(const CreateNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeWithOptions(request, runtime);
}

/**
 * @summary Adds multiple Mongos or shard nodes to an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
 *
 * @param request CreateNodeBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeBatchResponse
 */
CreateNodeBatchResponse Client::createNodeBatchWithOptions(const CreateNodeBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasNodesInfo()) {
    query["NodesInfo"] = request.getNodesInfo();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasShardDirect()) {
    query["ShardDirect"] = request.getShardDirect();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNodeBatch"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeBatchResponse>();
}

/**
 * @summary Adds multiple Mongos or shard nodes to an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
 *
 * @param request CreateNodeBatchRequest
 * @return CreateNodeBatchResponse
 */
CreateNodeBatchResponse Client::createNodeBatch(const CreateNodeBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeBatchWithOptions(request, runtime);
}

/**
 * @summary Creates a role tag for an instance node.
 *
 * @param request CreateNodeRoleTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeRoleTagResponse
 */
CreateNodeRoleTagResponse Client::createNodeRoleTagWithOptions(const CreateNodeRoleTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasShardList()) {
    query["ShardList"] = request.getShardList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNodeRoleTag"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeRoleTagResponse>();
}

/**
 * @summary Creates a role tag for an instance node.
 *
 * @param request CreateNodeRoleTagRequest
 * @return CreateNodeRoleTagResponse
 */
CreateNodeRoleTagResponse Client::createNodeRoleTag(const CreateNodeRoleTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeRoleTagWithOptions(request, runtime);
}

/**
 * @summary Creates or clones an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description - Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * - For more information about the specifications of ApsaraDB for MongoDB instances, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
 * - To create a standalone instance or a replica set instance, call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation.
 *
 * @param request CreateShardingDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateShardingDBInstanceResponse
 */
CreateShardingDBInstanceResponse Client::createShardingDBInstanceWithOptions(const CreateShardingDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigServer()) {
    query["ConfigServer"] = request.getConfigServer();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGlobalSecurityGroupIds()) {
    query["GlobalSecurityGroupIds"] = request.getGlobalSecurityGroupIds();
  }

  if (!!request.hasHiddenZoneId()) {
    query["HiddenZoneId"] = request.getHiddenZoneId();
  }

  if (!!request.hasMongos()) {
    query["Mongos"] = request.getMongos();
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

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.getProvisionedIops();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicaSet()) {
    query["ReplicaSet"] = request.getReplicaSet();
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

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.getSrcDBInstanceId();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  if (!!request.hasStorageEngine()) {
    query["StorageEngine"] = request.getStorageEngine();
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
    {"action" , "CreateShardingDBInstance"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateShardingDBInstanceResponse>();
}

/**
 * @summary Creates or clones an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description - Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * - For more information about the specifications of ApsaraDB for MongoDB instances, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
 * - To create a standalone instance or a replica set instance, call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation.
 *
 * @param request CreateShardingDBInstanceRequest
 * @return CreateShardingDBInstanceResponse
 */
CreateShardingDBInstanceResponse Client::createShardingDBInstance(const CreateShardingDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createShardingDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a MongoDB backup set.
 *
 * @description Only manual backups can be deleted.
 * Only MongoDB instances with cloud disks are supported.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2015-12-01"},
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
 * @summary Deletes a MongoDB backup set.
 *
 * @description Only manual backups can be deleted.
 * Only MongoDB instances with cloud disks are supported.
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go MongoDB instance.
 *
 * @description The instance must meet the following conditions:
 * - The instance status is running.
 * - The billing method of the instance is pay-as-you-go.
 * > After an instance is released, its data cannot be recovered. Proceed with caution.
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteDBInstance"},
    {"version" , "2015-12-01"},
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
 * @summary Releases a pay-as-you-go MongoDB instance.
 *
 * @description The instance must meet the following conditions:
 * - The instance status is running.
 * - The billing method of the instance is pay-as-you-go.
 * > After an instance is released, its data cannot be recovered. Proceed with caution.
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a global IP address whitelist template.
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
    {"version" , "2015-12-01"},
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
 * @param request DeleteGlobalSecurityIPGroupRequest
 * @return DeleteGlobalSecurityIPGroupResponse
 */
DeleteGlobalSecurityIPGroupResponse Client::deleteGlobalSecurityIPGroup(const DeleteGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a shard or mongos node from an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description When you invoke this operation, the instance must meet the following requirements: 
 * - The instance status is Running.
 * - The instance is a sharded cluster instance.
 * - The billing method of the instance is pay-as-you-go.
 * - The number of shard or mongos nodes in the instance is greater than 2.
 *
 * @param request DeleteNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNodeWithOptions(const DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

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
    {"action" , "DeleteNode"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNodeResponse>();
}

/**
 * @summary Deletes a shard or mongos node from an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description When you invoke this operation, the instance must meet the following requirements: 
 * - The instance status is Running.
 * - The instance is a sharded cluster instance.
 * - The billing method of the instance is pay-as-you-go.
 * - The number of shard or mongos nodes in the instance is greater than 2.
 *
 * @param request DeleteNodeRequest
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNode(const DeleteNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeWithOptions(request, runtime);
}

/**
 * @summary Queries the database account information of an ApsaraDB for MongoDB instance.
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

  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeAccounts"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the database account information of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the Operation and Maintenance (O&M) task configuration for a MongoDB instance.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationMaintenanceConfig"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the Operation and Maintenance (O&M) task configuration for a MongoDB instance.
 *
 * @param request DescribeActiveOperationMaintenanceConfigRequest
 * @return DescribeActiveOperationMaintenanceConfigResponse
 */
DescribeActiveOperationMaintenanceConfigResponse Client::describeActiveOperationMaintenanceConfig(const DescribeActiveOperationMaintenanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintenanceConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of O&M tasks.
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

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTask"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the details of O&M tasks.
 *
 * @param request DescribeActiveOperationTaskRequest
 * @return DescribeActiveOperationTaskResponse
 */
DescribeActiveOperationTaskResponse Client::describeActiveOperationTask(const DescribeActiveOperationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the number of operation and maintenance tasks on an ApsaraDB for MongoDB instance.
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
    {"action" , "DescribeActiveOperationTaskCount"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the number of operation and maintenance tasks on an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskCountWithOptions(request, runtime);
}

/**
 * @summary Queries the types and number of O&M tasks for a MongoDB instance.
 *
 * @param request DescribeActiveOperationTaskRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskRegionResponse
 */
DescribeActiveOperationTaskRegionResponse Client::describeActiveOperationTaskRegionWithOptions(const DescribeActiveOperationTaskRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTaskRegion"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskRegionResponse>();
}

/**
 * @summary Queries the types and number of O&M tasks for a MongoDB instance.
 *
 * @param request DescribeActiveOperationTaskRegionRequest
 * @return DescribeActiveOperationTaskRegionResponse
 */
DescribeActiveOperationTaskRegionResponse Client::describeActiveOperationTaskRegion(const DescribeActiveOperationTaskRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the types of Operation and Maintenance tasks and the number of tasks of each type for an ApsaraDB for MongoDB instance.
 *
 * @description This operation is no longer updated and will be unavailable.
 *
 * @param request DescribeActiveOperationTaskTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskTypeResponse
 */
DescribeActiveOperationTaskTypeResponse Client::describeActiveOperationTaskTypeWithOptions(const DescribeActiveOperationTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeActiveOperationTaskType"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskTypeResponse>();
}

/**
 * @summary Queries the types of Operation and Maintenance tasks and the number of tasks of each type for an ApsaraDB for MongoDB instance.
 *
 * @description This operation is no longer updated and will be unavailable.
 *
 * @param request DescribeActiveOperationTaskTypeRequest
 * @return DescribeActiveOperationTaskTypeResponse
 */
DescribeActiveOperationTaskTypeResponse Client::describeActiveOperationTaskType(const DescribeActiveOperationTaskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskTypeWithOptions(request, runtime);
}

/**
 * @summary Queries O&M task details for MongoDB instances.
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

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTasks"},
    {"version" , "2015-12-01"},
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
 * @summary Queries O&M task details for MongoDB instances.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries advanced backup policies.
 *
 * @description Queries advanced backup policies. This operation is supported only for cloud disk replica set and cloud disk sharded cluster instances.
 *
 * @param request DescribeAdvancedBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvancedBackupPolicyResponse
 */
DescribeAdvancedBackupPolicyResponse Client::describeAdvancedBackupPolicyWithOptions(const DescribeAdvancedBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvancedBackupPolicy"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvancedBackupPolicyResponse>();
}

/**
 * @summary Queries advanced backup policies.
 *
 * @description Queries advanced backup policies. This operation is supported only for cloud disk replica set and cloud disk sharded cluster instances.
 *
 * @param request DescribeAdvancedBackupPolicyRequest
 * @return DescribeAdvancedBackupPolicyResponse
 */
DescribeAdvancedBackupPolicyResponse Client::describeAdvancedBackupPolicy(const DescribeAdvancedBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvancedBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries whether advanced backup is enabled.
 *
 * @description Queries whether advanced backup is enabled. This operation supports only cloud disk replica set instances and cloud disk sharded cluster instances.
 *
 * @param request DescribeAdvancedBackupStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvancedBackupStatusResponse
 */
DescribeAdvancedBackupStatusResponse Client::describeAdvancedBackupStatusWithOptions(const DescribeAdvancedBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvancedBackupStatus"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvancedBackupStatusResponse>();
}

/**
 * @summary Queries whether advanced backup is enabled.
 *
 * @description Queries whether advanced backup is enabled. This operation supports only cloud disk replica set instances and cloud disk sharded cluster instances.
 *
 * @param request DescribeAdvancedBackupStatusRequest
 * @return DescribeAdvancedBackupStatusResponse
 */
DescribeAdvancedBackupStatusResponse Client::describeAdvancedBackupStatus(const DescribeAdvancedBackupStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvancedBackupStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the audit log types collected for a MongoDB instance.
 *
 * @description - The instance must be in the running state when you call this operation.
 * - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
 * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditLogFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogFilterResponse
 */
DescribeAuditLogFilterResponse Client::describeAuditLogFilterWithOptions(const DescribeAuditLogFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditLogFilter"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogFilterResponse>();
}

/**
 * @summary Queries the audit log types collected for a MongoDB instance.
 *
 * @description - The instance must be in the running state when you call this operation.
 * - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
 * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditLogFilterRequest
 * @return DescribeAuditLogFilterResponse
 */
DescribeAuditLogFilterResponse Client::describeAuditLogFilter(const DescribeAuditLogFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogFilterWithOptions(request, runtime);
}

/**
 * @summary Checks whether audit logging is enabled for a MongoDB instance.
 *
 * @description - The instance must be in the running state.
 * - This operation is available only for **General-purpose Local Disk Edition** and **Dedicated Local Disk Edition** instances.
 * - You can call this operation up to 30 times per minute. Calls that exceed this limit are throttled. To make frequent calls, use Log Service. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditPolicyResponse
 */
DescribeAuditPolicyResponse Client::describeAuditPolicyWithOptions(const DescribeAuditPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditPolicy"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditPolicyResponse>();
}

/**
 * @summary Checks whether audit logging is enabled for a MongoDB instance.
 *
 * @description - The instance must be in the running state.
 * - This operation is available only for **General-purpose Local Disk Edition** and **Dedicated Local Disk Edition** instances.
 * - You can call this operation up to 30 times per minute. Calls that exceed this limit are throttled. To make frequent calls, use Log Service. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditPolicyRequest
 * @return DescribeAuditPolicyResponse
 */
DescribeAuditPolicyResponse Client::describeAuditPolicy(const DescribeAuditPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the audit logs of a MongoDB instance.
 *
 * @description - The audit log feature must be enabled for the instance before you call this operation. Otherwise, the returned audit log content is empty.
 * - This operation applies to instances of the **General-purpose local disk** and **Dedicated local disk** specification types.
 * - This operation can be called up to 30 times per minute. Calls that exceed this limit are throttled. Do not call this operation at a high frequency. If high-frequency calls are required, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditRecordsResponse
 */
DescribeAuditRecordsResponse Client::describeAuditRecordsWithOptions(const DescribeAuditRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.getDatabase();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.getForm();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.getLogicalOperator();
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

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.getQueryKeywords();
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

  if (!!request.hasUser()) {
    query["User"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditRecords"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the audit logs of a MongoDB instance.
 *
 * @description - The audit log feature must be enabled for the instance before you call this operation. Otherwise, the returned audit log content is empty.
 * - This operation applies to instances of the **General-purpose local disk** and **Dedicated local disk** specification types.
 * - This operation can be called up to 30 times per minute. Calls that exceed this limit are throttled. Do not call this operation at a high frequency. If high-frequency calls are required, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeAuditRecordsRequest
 * @return DescribeAuditRecordsResponse
 */
DescribeAuditRecordsResponse Client::describeAuditRecords(const DescribeAuditRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the zones that are supported by an ApsaraDB for MongoDB instance.
 *
 * @description Queries the zones in which an ApsaraDB for MongoDB instance can be deployed under specified purchase conditions. The region ID is required in the purchase condition.
 *
 * @param request DescribeAvailabilityZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailabilityZonesResponse
 */
DescribeAvailabilityZonesResponse Client::describeAvailabilityZonesWithOptions(const DescribeAvailabilityZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExcludeSecondaryZoneId()) {
    query["ExcludeSecondaryZoneId"] = request.getExcludeSecondaryZoneId();
  }

  if (!!request.hasExcludeZoneId()) {
    query["ExcludeZoneId"] = request.getExcludeZoneId();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMongoType()) {
    query["MongoType"] = request.getMongoType();
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

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
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

  if (!!request.hasStorageSupport()) {
    query["StorageSupport"] = request.getStorageSupport();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailabilityZones"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailabilityZonesResponse>();
}

/**
 * @summary Queries a list of the zones that are supported by an ApsaraDB for MongoDB instance.
 *
 * @description Queries the zones in which an ApsaraDB for MongoDB instance can be deployed under specified purchase conditions. The region ID is required in the purchase condition.
 *
 * @param request DescribeAvailabilityZonesRequest
 * @return DescribeAvailabilityZonesResponse
 */
DescribeAvailabilityZonesResponse Client::describeAvailabilityZones(const DescribeAvailabilityZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailabilityZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the engine versions to which an ApsaraDB for MongoDB instance can be upgraded.
 *
 * @param request DescribeAvailableEngineVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableEngineVersionResponse
 */
DescribeAvailableEngineVersionResponse Client::describeAvailableEngineVersionWithOptions(const DescribeAvailableEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableEngineVersion"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableEngineVersionResponse>();
}

/**
 * @summary Queries the engine versions to which an ApsaraDB for MongoDB instance can be upgraded.
 *
 * @param request DescribeAvailableEngineVersionRequest
 * @return DescribeAvailableEngineVersionResponse
 */
DescribeAvailableEngineVersionResponse Client::describeAvailableEngineVersion(const DescribeAvailableEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableEngineVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the available resources in the specified zone.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
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

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
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

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableResource"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the available resources in the specified zone.
 *
 * @param request DescribeAvailableResourceRequest
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource(const DescribeAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the databases at a specified time or the databases in a specified backup set before you restore a database for an ApsaraDB for MongoDB instance.
 *
 * @description You can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore a database for an ApsaraDB for MongoDB instance. For more information, see [Restore one database of an ApsaraDB for MongoDB instance](https://help.aliyun.com/document_detail/112274.html).
 * Before you call this operation, make sure that the instance meets the following requirements:
 * - The instance was created after March 26, 2019.
 * - The instance is located in the China (Qingdao), China (Beijing), China (Zhangjiakou), China (Hohhot), China (Hangzhou), China (Shanghai), China (Shenzhen), or Singapore region. Other regions are not supported.
 * - The instance is a replica set instance.
 * - The instance runs MongoDB 3.4, MongoDB 4.0, or MongoDB 4.2. In addition, the instance uses local disks to store data.
 * - The storage engine of the instance is WiredTiger.
 *
 * @param request DescribeBackupDBsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupDBsResponse
 */
DescribeBackupDBsResponse Client::describeBackupDBsWithOptions(const DescribeBackupDBsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSourceDBInstance()) {
    query["SourceDBInstance"] = request.getSourceDBInstance();
  }

  if (!!request.hasSourceDBInstance()) {
    query["SourceDBInstance"] = request.getSourceDBInstance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupDBs"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupDBsResponse>();
}

/**
 * @summary Queries the databases at a specified time or the databases in a specified backup set before you restore a database for an ApsaraDB for MongoDB instance.
 *
 * @description You can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore a database for an ApsaraDB for MongoDB instance. For more information, see [Restore one database of an ApsaraDB for MongoDB instance](https://help.aliyun.com/document_detail/112274.html).
 * Before you call this operation, make sure that the instance meets the following requirements:
 * - The instance was created after March 26, 2019.
 * - The instance is located in the China (Qingdao), China (Beijing), China (Zhangjiakou), China (Hohhot), China (Hangzhou), China (Shanghai), China (Shenzhen), or Singapore region. Other regions are not supported.
 * - The instance is a replica set instance.
 * - The instance runs MongoDB 3.4, MongoDB 4.0, or MongoDB 4.2. In addition, the instance uses local disks to store data.
 * - The storage engine of the instance is WiredTiger.
 *
 * @param request DescribeBackupDBsRequest
 * @return DescribeBackupDBsResponse
 */
DescribeBackupDBsResponse Client::describeBackupDBs(const DescribeBackupDBsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupDBsWithOptions(request, runtime);
}

/**
 * @summary Queries the backup policy of a MongoDB instance.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the backup policy of a MongoDB instance.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the backup usage for a MongoDB replica set or sharded cluster instance that uses cloud disks.
 *
 * @description Backup usage for a sharded cluster is billed on a per-shard basis. You can use this operation to query the backup usage for a single shard.
 *
 * @param request DescribeBackupStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupStorageResponse
 */
DescribeBackupStorageResponse Client::describeBackupStorageWithOptions(const DescribeBackupStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupStorage"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupStorageResponse>();
}

/**
 * @summary Queries the backup usage for a MongoDB replica set or sharded cluster instance that uses cloud disks.
 *
 * @description Backup usage for a sharded cluster is billed on a per-shard basis. You can use this operation to query the backup usage for a single shard.
 *
 * @param request DescribeBackupStorageRequest
 * @return DescribeBackupStorageResponse
 */
DescribeBackupStorageResponse Client::describeBackupStorage(const DescribeBackupStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupStorageWithOptions(request, runtime);
}

/**
 * @summary Queries ongoing backup jobs for MongoDB ReplicaSet or sharded cluster instances that use cloud disks.
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
    {"action" , "DescribeBackupTasks"},
    {"version" , "2015-12-01"},
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
 * @summary Queries ongoing backup jobs for MongoDB ReplicaSet or sharded cluster instances that use cloud disks.
 *
 * @param request DescribeBackupTasksRequest
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasks(const DescribeBackupTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the backup list of an ApsaraDB for MongoDB instance.
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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the backup list of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Query log backup files for an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeBinlogFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBinlogFilesResponse
 */
DescribeBinlogFilesResponse Client::describeBinlogFilesWithOptions(const DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBinlogId()) {
    query["BinlogId"] = request.getBinlogId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBinlogFiles"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBinlogFilesResponse>();
}

/**
 * @summary Query log backup files for an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeBinlogFilesRequest
 * @return DescribeBinlogFilesResponse
 */
DescribeBinlogFilesResponse Client::describeBinlogFiles(const DescribeBinlogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBinlogFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the cluster backup sets for an ApsaraDB for MongoDB sharded cluster instance that uses cloud disks.
 *
 * @description For sharded cluster instances that use cloud disks and were created before October 19, 2023, you must first call the [TransferClusterBackup](https://help.aliyun.com/document_detail/2587931.html) operation to convert shard backups to cluster backups.
 * Sharded cluster instances that use cloud disks and were created after October 19, 2023 use cluster backups by default.
 *
 * @param request DescribeClusterBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterBackupsResponse
 */
DescribeClusterBackupsResponse Client::describeClusterBackupsWithOptions(const DescribeClusterBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupJobId()) {
    query["BackupJobId"] = request.getBackupJobId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsOnlyGetClusterBackUp()) {
    query["IsOnlyGetClusterBackUp"] = request.getIsOnlyGetClusterBackUp();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
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

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterBackups"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterBackupsResponse>();
}

/**
 * @summary Queries the cluster backup sets for an ApsaraDB for MongoDB sharded cluster instance that uses cloud disks.
 *
 * @description For sharded cluster instances that use cloud disks and were created before October 19, 2023, you must first call the [TransferClusterBackup](https://help.aliyun.com/document_detail/2587931.html) operation to convert shard backups to cluster backups.
 * Sharded cluster instances that use cloud disks and were created after October 19, 2023 use cluster backups by default.
 *
 * @param request DescribeClusterBackupsRequest
 * @return DescribeClusterBackupsResponse
 */
DescribeClusterBackupsResponse Client::describeClusterBackups(const DescribeClusterBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the restorable time range of a sharded cluster instance that uses cloud disks in ApsaraDB for MongoDB.
 *
 * @description - The MongoDB instance must be a sharded cluster instance that runs major engine version 4.4 or later and uses standard SSDs as the storage pattern.
 * - Only instances created before October 19, 2023 need to invoke the TransferClusterBackup operation to switch to the cluster backup mode. Instances that have been switched to the cluster backup mode or sharded cluster instances with cloud disks created on or after October 19, 2023 can directly invoke this operation.
 *
 * @param request DescribeClusterRecoverTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterRecoverTimeResponse
 */
DescribeClusterRecoverTimeResponse Client::describeClusterRecoverTimeWithOptions(const DescribeClusterRecoverTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasOnlyDbTableRecovery()) {
    query["OnlyDbTableRecovery"] = request.getOnlyDbTableRecovery();
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

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterRecoverTime"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterRecoverTimeResponse>();
}

/**
 * @summary Queries the restorable time range of a sharded cluster instance that uses cloud disks in ApsaraDB for MongoDB.
 *
 * @description - The MongoDB instance must be a sharded cluster instance that runs major engine version 4.4 or later and uses standard SSDs as the storage pattern.
 * - Only instances created before October 19, 2023 need to invoke the TransferClusterBackup operation to switch to the cluster backup mode. Instances that have been switched to the cluster backup mode or sharded cluster instances with cloud disks created on or after October 19, 2023 can directly invoke this operation.
 *
 * @param request DescribeClusterRecoverTimeRequest
 * @return DescribeClusterRecoverTimeResponse
 */
DescribeClusterRecoverTimeResponse Client::describeClusterRecoverTime(const DescribeClusterRecoverTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterRecoverTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasIsDelete()) {
    query["IsDelete"] = request.getIsDelete();
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
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the information of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific key for a MongoDB instance.
 *
 * @description When you invoke the DescribeDBInstanceEncryptionKey operation, transparent data encryption (TDE) must be enabled for the instance by using Bring Your Own Key (BYOK). You can invoke [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) to enable TDE.
 *
 * @param request DescribeDBInstanceEncryptionKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceEncryptionKeyResponse
 */
DescribeDBInstanceEncryptionKeyResponse Client::describeDBInstanceEncryptionKeyWithOptions(const DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.getEncryptionType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

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
    {"action" , "DescribeDBInstanceEncryptionKey"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceEncryptionKeyResponse>();
}

/**
 * @summary Queries the details of a specific key for a MongoDB instance.
 *
 * @description When you invoke the DescribeDBInstanceEncryptionKey operation, transparent data encryption (TDE) must be enabled for the instance by using Bring Your Own Key (BYOK). You can invoke [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) to enable TDE.
 *
 * @param request DescribeDBInstanceEncryptionKeyRequest
 * @return DescribeDBInstanceEncryptionKeyResponse
 */
DescribeDBInstanceEncryptionKeyResponse Client::describeDBInstanceEncryptionKey(const DescribeDBInstanceEncryptionKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceEncryptionKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the collection frequency of monitoring data for an ApsaraDB for MongoDB instance.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceMonitor"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the collection frequency of monitoring data for an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeDBInstanceMonitorRequest
 * @return DescribeDBInstanceMonitorResponse
 */
DescribeDBInstanceMonitorResponse Client::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of a MongoDB instance.
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

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
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

  if (!!request.hasReplicaSetRole()) {
    query["ReplicaSetRole"] = request.getReplicaSetRole();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasSearchId()) {
    query["SearchId"] = request.getSearchId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePerformance"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the performance data of a MongoDB instance.
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

/**
 * @summary Query SSL configuration details for a MongoDB instance.
 *
 * @description To use this operation, the instance must meet the following requirements:
 * - The instance status is Running.
 * - The instance is a replica set instance or a sharded cluster instance.
 *   - The replica set instance must be version 3.4 or later.
 *   - The sharded cluster instance must use Enhanced SSDs (ESSDs).
 *
 * @param request DescribeDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSLWithOptions(const DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSSL"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSSLResponse>();
}

/**
 * @summary Query SSL configuration details for a MongoDB instance.
 *
 * @description To use this operation, the instance must meet the following requirements:
 * - The instance status is Running.
 * - The instance is a replica set instance or a sharded cluster instance.
 *   - The replica set instance must be version 3.4 or later.
 *   - The sharded cluster instance must use Enhanced SSDs (ESSDs).
 *
 * @param request DescribeDBInstanceSSLRequest
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Gets instance type details.
 *
 * @param request DescribeDBInstanceSpecInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSpecInfoResponse
 */
DescribeDBInstanceSpecInfoResponse Client::describeDBInstanceSpecInfoWithOptions(const DescribeDBInstanceSpecInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

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
    {"action" , "DescribeDBInstanceSpecInfo"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSpecInfoResponse>();
}

/**
 * @summary Gets instance type details.
 *
 * @param request DescribeDBInstanceSpecInfoRequest
 * @return DescribeDBInstanceSpecInfoResponse
 */
DescribeDBInstanceSpecInfoResponse Client::describeDBInstanceSpecInfo(const DescribeDBInstanceSpecInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSpecInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the primary/secondary switching logs of an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is a replica set or sharded cluster instance.
 * - The instance uses local physical disks to store data.
 *
 * @param request DescribeDBInstanceSwitchLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSwitchLogResponse
 */
DescribeDBInstanceSwitchLogResponse Client::describeDBInstanceSwitchLogWithOptions(const DescribeDBInstanceSwitchLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
    {"action" , "DescribeDBInstanceSwitchLog"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSwitchLogResponse>();
}

/**
 * @summary Queries the primary/secondary switching logs of an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is a replica set or sharded cluster instance.
 * - The instance uses local physical disks to store data.
 *
 * @param request DescribeDBInstanceSwitchLogRequest
 * @return DescribeDBInstanceSwitchLogResponse
 */
DescribeDBInstanceSwitchLogResponse Client::describeDBInstanceSwitchLog(const DescribeDBInstanceSwitchLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSwitchLogWithOptions(request, runtime);
}

/**
 * @summary Queries whether Transparent Data Encryption (TDE) is enabled for an ApsaraDB for MongoDB instance.
 *
 * @description > For more information about this feature, see [Settings for transparent data encryption TDE](https://help.aliyun.com/document_detail/131048.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * - The instance is a replica set instance or a sharded cluster instance.
 * - The storage DPI engine of the instance is WiredTiger.
 * - The database DPI engine version of the instance is 4.0 or 4.2. If the database DPI engine version is earlier than the required version, you can invoke the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database DPI engine version.
 *
 * @param request DescribeDBInstanceTDEInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTDEInfoResponse
 */
DescribeDBInstanceTDEInfoResponse Client::describeDBInstanceTDEInfoWithOptions(const DescribeDBInstanceTDEInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceTDEInfo"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceTDEInfoResponse>();
}

/**
 * @summary Queries whether Transparent Data Encryption (TDE) is enabled for an ApsaraDB for MongoDB instance.
 *
 * @description > For more information about this feature, see [Settings for transparent data encryption TDE](https://help.aliyun.com/document_detail/131048.html).
 * When you invoke this operation, the instance must meet the following conditions:
 * - The instance is a replica set instance or a sharded cluster instance.
 * - The storage DPI engine of the instance is WiredTiger.
 * - The database DPI engine version of the instance is 4.0 or 4.2. If the database DPI engine version is earlier than the required version, you can invoke the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database DPI engine version.
 *
 * @param request DescribeDBInstanceTDEInfoRequest
 * @return DescribeDBInstanceTDEInfoResponse
 */
DescribeDBInstanceTDEInfoResponse Client::describeDBInstanceTDEInfo(const DescribeDBInstanceTDEInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTDEInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of MongoDB instances.
 *
 * @description <props="china">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**. To query the list of Serverless instances, set **DBInstanceType** to **serverless**.
 * <props="intl">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**.
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasConnectionDomain()) {
    query["ConnectionDomain"] = request.getConnectionDomain();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.getDBInstanceStatus();
  }

  if (!!request.hasDBInstanceType()) {
    query["DBInstanceType"] = request.getDBInstanceType();
  }

  if (!!request.hasDBNodeType()) {
    query["DBNodeType"] = request.getDBNodeType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
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
    {"action" , "DescribeDBInstances"},
    {"version" , "2015-12-01"},
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
 * @summary Queries a list of MongoDB instances.
 *
 * @description <props="china">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**. To query the list of Serverless instances, set **DBInstanceType** to **serverless**.
 * <props="intl">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**.
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the overview of one or more ApsaraDB for MongoDB instances.
 *
 * @description - If you do not specify any instances, the operation returns overview information for all instances in the destination region associated with your Alibaba Cloud account.
 * - The results of this operation are not paginated.
 *
 * @param request DescribeDBInstancesOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesOverviewResponse
 */
DescribeDBInstancesOverviewResponse Client::describeDBInstancesOverviewWithOptions(const DescribeDBInstancesOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
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

  if (!!request.hasShowTags()) {
    query["ShowTags"] = request.getShowTags();
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
    {"action" , "DescribeDBInstancesOverview"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesOverviewResponse>();
}

/**
 * @summary Queries the overview of one or more ApsaraDB for MongoDB instances.
 *
 * @description - If you do not specify any instances, the operation returns overview information for all instances in the destination region associated with your Alibaba Cloud account.
 * - The results of this operation are not paginated.
 *
 * @param request DescribeDBInstancesOverviewRequest
 * @return DescribeDBInstancesOverviewResponse
 */
DescribeDBInstancesOverviewResponse Client::describeDBInstancesOverview(const DescribeDBInstancesOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the error logs of a MongoDB instance.
 *
 * @description - This operation applies to instances of the **General-purpose Local Disk** and **Dedicated Local Disk** specification types.
 * - This operation is limited to 30 calls per minute. Exceeding this limit triggers throttling. Do not call this operation at a high frequency. For high-frequency access, use Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeErrorLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecordsWithOptions(const DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.getLogicalOperator();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeErrorLogRecords"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeErrorLogRecordsResponse>();
}

/**
 * @summary Queries the error logs of a MongoDB instance.
 *
 * @description - This operation applies to instances of the **General-purpose Local Disk** and **Dedicated Local Disk** specification types.
 * - This operation is limited to 30 calls per minute. Exceeding this limit triggers throttling. Do not call this operation at a high frequency. For high-frequency access, use Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeErrorLogRecordsRequest
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecords(const DescribeErrorLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeErrorLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the global IP whitelist templates.
 *
 * @param request DescribeGlobalSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalSecurityIPGroupResponse
 */
DescribeGlobalSecurityIPGroupResponse Client::describeGlobalSecurityIPGroupWithOptions(const DescribeGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalSecurityIPGroup"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalSecurityIPGroupResponse>();
}

/**
 * @summary Queries the global IP whitelist templates.
 *
 * @param request DescribeGlobalSecurityIPGroupRequest
 * @return DescribeGlobalSecurityIPGroupResponse
 */
DescribeGlobalSecurityIPGroupResponse Client::describeGlobalSecurityIPGroup(const DescribeGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the mapping between an instance and a global IP address whitelist template.
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
    {"action" , "DescribeGlobalSecurityIPGroupRelation"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the mapping between an instance and a global IP address whitelist template.
 *
 * @param request DescribeGlobalSecurityIPGroupRelationRequest
 * @return DescribeGlobalSecurityIPGroupRelationResponse
 */
DescribeGlobalSecurityIPGroupRelationResponse Client::describeGlobalSecurityIPGroupRelation(const DescribeGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tasks in the task center.
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
    {"version" , "2015-12-01"},
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
 * @summary Queries a list of tasks in the task center.
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the overview of a task in the task center.
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
    {"version" , "2015-12-01"},
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
 * @summary Queries the overview of a task in the task center.
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Queries the auto-renewal status of MongoDB instances.
 *
 * @description This operation is applicable to subscription instances.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttributeWithOptions(const DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceType()) {
    query["DBInstanceType"] = request.getDBInstanceType();
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
    {"version" , "2015-12-01"},
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
 * @summary Queries the auto-renewal status of MongoDB instances.
 *
 * @description This operation is applicable to subscription instances.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the restorable time ranges of an ApsaraDB for MongoDB replica set instance with cloud disks.
 *
 * @param request DescribeInstanceRecoverTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRecoverTimeResponse
 */
DescribeInstanceRecoverTimeResponse Client::describeInstanceRecoverTimeWithOptions(const DescribeInstanceRecoverTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasOnlyDbTableRecovery()) {
    query["OnlyDbTableRecovery"] = request.getOnlyDbTableRecovery();
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

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceRecoverTime"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceRecoverTimeResponse>();
}

/**
 * @summary Queries the restorable time ranges of an ApsaraDB for MongoDB replica set instance with cloud disks.
 *
 * @param request DescribeInstanceRecoverTimeRequest
 * @return DescribeInstanceRecoverTimeResponse
 */
DescribeInstanceRecoverTimeResponse Client::describeInstanceRecoverTime(const DescribeInstanceRecoverTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRecoverTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the release notes of minor engine versions for a MongoDB instance.
 *
 * @param request DescribeKernelReleaseNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKernelReleaseNotesResponse
 */
DescribeKernelReleaseNotesResponse Client::describeKernelReleaseNotesWithOptions(const DescribeKernelReleaseNotesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKernelVersion()) {
    query["KernelVersion"] = request.getKernelVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

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
    {"action" , "DescribeKernelReleaseNotes"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKernelReleaseNotesResponse>();
}

/**
 * @summary Queries the release notes of minor engine versions for a MongoDB instance.
 *
 * @param request DescribeKernelReleaseNotesRequest
 * @return DescribeKernelReleaseNotesResponse
 */
DescribeKernelReleaseNotesResponse Client::describeKernelReleaseNotes(const DescribeKernelReleaseNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKernelReleaseNotesWithOptions(request, runtime);
}

/**
 * @summary Queries Key Management Service (KMS) keys that are available for disk encryption.
 *
 * @description Queried keys are available only for disk encryption.
 *
 * @param request DescribeKmsKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeysWithOptions(const DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
    {"action" , "DescribeKmsKeys"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKmsKeysResponse>();
}

/**
 * @summary Queries Key Management Service (KMS) keys that are available for disk encryption.
 *
 * @description Queried keys are available only for disk encryption.
 *
 * @param request DescribeKmsKeysRequest
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeys(const DescribeKmsKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKmsKeysWithOptions(request, runtime);
}

/**
 * @summary You can view the configuration of MongoDB Log Service.
 *
 * @description This API applies to General-purpose and Dedicated instances that use local disks.
 * You can enable the audit log feature for ApsaraDB for MongoDB as needed. For more information, see [Enable audit logs](https://help.aliyun.com/document_detail/59903.html).
 * - As of January 6, 2022, the official version of the audit log feature is being rolled out to all regions. New requests for the free trial version are no longer accepted. For more information, see [[Notice\\] ApsaraDB for MongoDB launches pay-as-you-go audit logs and discontinues the free trial](~~377480~~).
 * - The official version of the audit log feature is pay-as-you-go. Charges are based on storage usage and retention period. For pricing details, see <props="china">[ApsaraDB for MongoDB pricing](https://www.aliyun.com/price/product?#/mongodb/detail/badds)<props="intl">[ApsaraDB for MongoDB pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 *
 * @param request DescribeMongoDBLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMongoDBLogConfigResponse
 */
DescribeMongoDBLogConfigResponse Client::describeMongoDBLogConfigWithOptions(const DescribeMongoDBLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMongoDBLogConfig"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMongoDBLogConfigResponse>();
}

/**
 * @summary You can view the configuration of MongoDB Log Service.
 *
 * @description This API applies to General-purpose and Dedicated instances that use local disks.
 * You can enable the audit log feature for ApsaraDB for MongoDB as needed. For more information, see [Enable audit logs](https://help.aliyun.com/document_detail/59903.html).
 * - As of January 6, 2022, the official version of the audit log feature is being rolled out to all regions. New requests for the free trial version are no longer accepted. For more information, see [[Notice\\] ApsaraDB for MongoDB launches pay-as-you-go audit logs and discontinues the free trial](~~377480~~).
 * - The official version of the audit log feature is pay-as-you-go. Charges are based on storage usage and retention period. For pricing details, see <props="china">[ApsaraDB for MongoDB pricing](https://www.aliyun.com/price/product?#/mongodb/detail/badds)<props="intl">[ApsaraDB for MongoDB pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 *
 * @param request DescribeMongoDBLogConfigRequest
 * @return DescribeMongoDBLogConfigResponse
 */
DescribeMongoDBLogConfigResponse Client::describeMongoDBLogConfig(const DescribeMongoDBLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMongoDBLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter modification records of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeParameterModificationHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterModificationHistoryResponse
 */
DescribeParameterModificationHistoryResponse Client::describeParameterModificationHistoryWithOptions(const DescribeParameterModificationHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeParameterModificationHistory"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the parameter modification records of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeParameterModificationHistoryRequest
 * @return DescribeParameterModificationHistoryResponse
 */
DescribeParameterModificationHistoryResponse Client::describeParameterModificationHistory(const DescribeParameterModificationHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterModificationHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the default parameter templates for MongoDB instances.
 *
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
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

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterTemplates"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the default parameter templates for MongoDB instances.
 *
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter settings of a MongoDB instance.
 *
 * @param request DescribeParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParametersWithOptions(const DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExtraParam()) {
    query["ExtraParam"] = request.getExtraParam();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameters"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the parameter settings of a MongoDB instance.
 *
 * @param request DescribeParametersRequest
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary Queries pricing information.
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

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDBInstances()) {
    query["DBInstances"] = request.getDBInstances();
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

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
    {"action" , "DescribePrice"},
    {"version" , "2015-12-01"},
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
 * @summary Queries pricing information.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of vSwitches.
 *
 * @description Queries the vSwitches that are available in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a vSwitch.
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVSwitchs"},
    {"version" , "2015-12-01"},
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
 * @summary Retrieves a list of vSwitches.
 *
 * @description Queries the vSwitches that are available in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a vSwitch.
 *
 * @param request DescribeRdsVSwitchsRequest
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of VPCs.
 *
 * @description Queries available VPCs in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a VPC.
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"action" , "DescribeRdsVpcs"},
    {"version" , "2015-12-01"},
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
 * @summary Retrieves a list of VPCs.
 *
 * @description Queries available VPCs in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a VPC.
 *
 * @param request DescribeRdsVpcsRequest
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries all regions and zones supported for an ApsaraDB for MongoDB instance.
 *
 * @description > To query available regions and zones in which an ApsaraDB for MongoDB instance can be created, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation.
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
    {"action" , "DescribeRegions"},
    {"version" , "2015-12-01"},
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
 * @summary Queries all regions and zones supported for an ApsaraDB for MongoDB instance.
 *
 * @description > To query available regions and zones in which an ApsaraDB for MongoDB instance can be created, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Get the price to renew a specific MongoDB instance for one month.
 *
 * @description This operation applies to subscription MongoDB instances.
 *
 * @param request DescribeRenewalPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPriceWithOptions(const DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
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
    {"action" , "DescribeRenewalPrice"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenewalPriceResponse>();
}

/**
 * @summary Get the price to renew a specific MongoDB instance for one month.
 *
 * @description This operation applies to subscription MongoDB instances.
 *
 * @param request DescribeRenewalPriceRequest
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPrice(const DescribeRenewalPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenewalPriceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the role information and connection details for a MongoDB instance.
 *
 * @description This operation applies to replica set instances and single-node instances. It does not apply to sharded cluster instances.
 *
 * @param request DescribeReplicaSetRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReplicaSetRoleResponse
 */
DescribeReplicaSetRoleResponse Client::describeReplicaSetRoleWithOptions(const DescribeReplicaSetRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeReplicaSetRole"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReplicaSetRoleResponse>();
}

/**
 * @summary Retrieves the role information and connection details for a MongoDB instance.
 *
 * @description This operation applies to replica set instances and single-node instances. It does not apply to sharded cluster instances.
 *
 * @param request DescribeReplicaSetRoleRequest
 * @return DescribeReplicaSetRoleResponse
 */
DescribeReplicaSetRoleResponse Client::describeReplicaSetRole(const DescribeReplicaSetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReplicaSetRoleWithOptions(request, runtime);
}

/**
 * @summary Queries the backup and restoration instances of a MongoDB instance within the last 7 days.
 *
 * @param request DescribeRestoreDBInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreDBInstanceListResponse
 */
DescribeRestoreDBInstanceListResponse Client::describeRestoreDBInstanceListWithOptions(const DescribeRestoreDBInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationTimeAfter()) {
    query["CreationTimeAfter"] = request.getCreationTimeAfter();
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
    {"action" , "DescribeRestoreDBInstanceList"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreDBInstanceListResponse>();
}

/**
 * @summary Queries the backup and restoration instances of a MongoDB instance within the last 7 days.
 *
 * @param request DescribeRestoreDBInstanceListRequest
 * @return DescribeRestoreDBInstanceListResponse
 */
DescribeRestoreDBInstanceListResponse Client::describeRestoreDBInstanceList(const DescribeRestoreDBInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreDBInstanceListWithOptions(request, runtime);
}

/**
 * @summary Describes the status of a tag for a node.
 *
 * @param request DescribeRoleTagStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoleTagStatusResponse
 */
DescribeRoleTagStatusResponse Client::describeRoleTagStatusWithOptions(const DescribeRoleTagStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRoleTagStatus"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoleTagStatusResponse>();
}

/**
 * @summary Describes the status of a tag for a node.
 *
 * @param request DescribeRoleTagStatusRequest
 * @return DescribeRoleTagStatusResponse
 */
DescribeRoleTagStatusResponse Client::describeRoleTagStatus(const DescribeRoleTagStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoleTagStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the roles and zones of each node in a MongoDB instance.
 *
 * @description > For more information, see [View the zone of a node](https://help.aliyun.com/document_detail/123825.html).
 * This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
 *
 * @param request DescribeRoleZoneInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoleZoneInfoResponse
 */
DescribeRoleZoneInfoResponse Client::describeRoleZoneInfoWithOptions(const DescribeRoleZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRoleZoneInfo"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the roles and zones of each node in a MongoDB instance.
 *
 * @description > For more information, see [View the zone of a node](https://help.aliyun.com/document_detail/123825.html).
 * This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
 *
 * @param request DescribeRoleZoneInfoRequest
 * @return DescribeRoleZoneInfoResponse
 */
DescribeRoleZoneInfoResponse Client::describeRoleZoneInfo(const DescribeRoleZoneInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoleZoneInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the running logs of an ApsaraDB for MongoDB instance.
 *
 * @description - This operation is applicable to instances of the **shared local disk**, **dedicated local disk**, and **cloud disk** specification types.
 * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not call this operation at a high frequency. If you need to call this operation at a high frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeRunningLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRunningLogRecordsResponse
 */
DescribeRunningLogRecordsResponse Client::describeRunningLogRecordsWithOptions(const DescribeRunningLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.getLogicalOperator();
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

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.getQueryKeywords();
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

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasRoleType()) {
    query["RoleType"] = request.getRoleType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRunningLogRecords"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the running logs of an ApsaraDB for MongoDB instance.
 *
 * @description - This operation is applicable to instances of the **shared local disk**, **dedicated local disk**, and **cloud disk** specification types.
 * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not call this operation at a high frequency. If you need to call this operation at a high frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeRunningLogRecordsRequest
 * @return DescribeRunningLogRecordsResponse
 */
DescribeRunningLogRecordsResponse Client::describeRunningLogRecords(const DescribeRunningLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRunningLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the Elastic Compute Service (ECS) security groups that are associated with an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfigurationWithOptions(const DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroupConfiguration"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the Elastic Compute Service (ECS) security groups that are associated with an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the IP whitelists of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIpsWithOptions(const DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasShowHDMIps()) {
    query["ShowHDMIps"] = request.getShowHDMIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIps"},
    {"version" , "2015-12-01"},
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
 * @summary Retrieves the IP whitelists of an ApsaraDB for MongoDB instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIps(const DescribeSecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the connection information for a MongoDB sharded cluster instance.
 *
 * @description This API is for sharded cluster instances only.
 *
 * @param request DescribeShardingNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeShardingNetworkAddressResponse
 */
DescribeShardingNetworkAddressResponse Client::describeShardingNetworkAddressWithOptions(const DescribeShardingNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeShardingNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeShardingNetworkAddressResponse>();
}

/**
 * @summary Retrieves the connection information for a MongoDB sharded cluster instance.
 *
 * @description This API is for sharded cluster instances only.
 *
 * @param request DescribeShardingNetworkAddressRequest
 * @return DescribeShardingNetworkAddressResponse
 */
DescribeShardingNetworkAddressResponse Client::describeShardingNetworkAddress(const DescribeShardingNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeShardingNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Queries slow query log entries for a MongoDB instance.
 *
 * @description - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
 * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.getLogicalOperator();
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

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.getQueryKeywords();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2015-12-01"},
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
 * @summary Queries slow query log entries for a MongoDB instance.
 *
 * @description - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
 * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries all tags in a specified region.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2015-12-01"},
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
 * @summary Queries all tags in a specified region.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the custom key list of an instance.
 *
 * @description You can use the custom keys obtained by calling DescribeUserEncryptionKeyList to enable transparent data encryption (TDE). For more information, see [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html).
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyListWithOptions(const DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRoleARN()) {
    query["RoleARN"] = request.getRoleARN();
  }

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.getTargetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEncryptionKeyList"},
    {"version" , "2015-12-01"},
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
 * @summary Queries the custom key list of an instance.
 *
 * @description You can use the custom keys obtained by calling DescribeUserEncryptionKeyList to enable transparent data encryption (TDE). For more information, see [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html).
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of VPCs.
 *
 * @param request DescribeVpcsForMongoDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcsForMongoDBResponse
 */
DescribeVpcsForMongoDBResponse Client::describeVpcsForMongoDBWithOptions(const DescribeVpcsForMongoDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"action" , "DescribeVpcsForMongoDB"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcsForMongoDBResponse>();
}

/**
 * @summary Retrieves a paginated list of VPCs.
 *
 * @param request DescribeVpcsForMongoDBRequest
 * @return DescribeVpcsForMongoDBResponse
 */
DescribeVpcsForMongoDBResponse Client::describeVpcsForMongoDB(const DescribeVpcsForMongoDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsForMongoDBWithOptions(request, runtime);
}

/**
 * @summary Destroys an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the instance meets the following requirements:
 * *   The instance is a replica set instance or a sharded cluster instance that uses local disks.
 * *   The billing method of the instance is subscription.
 * *   The instance has expired and is in the **Locking** state.
 * **
 * **Warning** Data cannot be restored after the instance is destroyed. Proceed with caution.
 *
 * @param request DestroyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DestroyInstanceResponse
 */
DestroyInstanceResponse Client::destroyInstanceWithOptions(const DestroyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DestroyInstance"},
    {"version" , "2015-12-01"},
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
 * @summary Destroys an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the instance meets the following requirements:
 * *   The instance is a replica set instance or a sharded cluster instance that uses local disks.
 * *   The billing method of the instance is subscription.
 * *   The instance has expired and is in the **Locking** state.
 * **
 * **Warning** Data cannot be restored after the instance is destroyed. Proceed with caution.
 *
 * @param request DestroyInstanceRequest
 * @return DestroyInstanceResponse
 */
DestroyInstanceResponse Client::destroyInstance(const DestroyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyInstanceWithOptions(request, runtime);
}

/**
 * @summary Evaluates whether sufficient resources are available before you create an instance or change the specifications of an instance.
 *
 * @description This operation evaluates resources for ApsaraDB for MongoDB replica set and sharded cluster instances. It supports resource evaluation for creating replica set and sharded cluster instances, changing instance specifications, and adding nodes to sharded cluster instances.
 * > You can call this operation up to 200 times per minute. Exceeding this limit triggers throttling.
 *
 * @param request EvaluateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateResourceResponse
 */
EvaluateResourceResponse Client::evaluateResourceWithOptions(const EvaluateResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
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

  if (!!request.hasReadonlyReplicas()) {
    query["ReadonlyReplicas"] = request.getReadonlyReplicas();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasShardsInfo()) {
    query["ShardsInfo"] = request.getShardsInfo();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EvaluateResource"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluateResourceResponse>();
}

/**
 * @summary Evaluates whether sufficient resources are available before you create an instance or change the specifications of an instance.
 *
 * @description This operation evaluates resources for ApsaraDB for MongoDB replica set and sharded cluster instances. It supports resource evaluation for creating replica set and sharded cluster instances, changing instance specifications, and adding nodes to sharded cluster instances.
 * > You can call this operation up to 200 times per minute. Exceeding this limit triggers throttling.
 *
 * @param request EvaluateResourceRequest
 * @return EvaluateResourceResponse
 */
EvaluateResourceResponse Client::evaluateResource(const EvaluateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the relationship between ApsaraDB for MongoDB instances and tags.
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
    {"version" , "2015-12-01"},
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
 * @summary Queries the relationship between ApsaraDB for MongoDB instances and tags.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Migrates the zone of a MongoDB instance.
 *
 * @description - The MigrateAvailableZone operation does not support standalone instances. It is applicable to active cloud disk instances and local disk instances.
 * - The transparent data encryption (TDE) feature is not enabled for the instance.
 * - The destination zone and the current zone of the instance are in the same region.
 * - If the instance is deployed in a VPC, make sure that a vSwitch is created in the destination zone before you migrate the zone. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
 *
 * @param request MigrateAvailableZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateAvailableZoneResponse
 */
MigrateAvailableZoneResponse Client::migrateAvailableZoneWithOptions(const MigrateAvailableZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasHiddenZoneId()) {
    query["HiddenZoneId"] = request.getHiddenZoneId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasVswitch()) {
    query["Vswitch"] = request.getVswitch();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateAvailableZone"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateAvailableZoneResponse>();
}

/**
 * @summary Migrates the zone of a MongoDB instance.
 *
 * @description - The MigrateAvailableZone operation does not support standalone instances. It is applicable to active cloud disk instances and local disk instances.
 * - The transparent data encryption (TDE) feature is not enabled for the instance.
 * - The destination zone and the current zone of the instance are in the same region.
 * - If the instance is deployed in a VPC, make sure that a vSwitch is created in the destination zone before you migrate the zone. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
 *
 * @param request MigrateAvailableZoneRequest
 * @return MigrateAvailableZoneResponse
 */
MigrateAvailableZoneResponse Client::migrateAvailableZone(const MigrateAvailableZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateAvailableZoneWithOptions(request, runtime);
}

/**
 * @summary Migrates a MongoDB instance to another zone.
 *
 * @description - This operation is applicable to replica set instances. Standalone instances and sharded cluster instances are not supported.
 * - Transparent Data Encryption (TDE) is not enabled for the instance.
 * - The destination zone and the current zone of the instance must be in the same region.
 * - If the instance is deployed in a virtual private cloud (VPC), make sure that a vSwitch is created in the destination zone before you migrate the instance. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
 *
 * @param request MigrateToOtherZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZoneWithOptions(const MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"version" , "2015-12-01"},
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
 * @summary Migrates a MongoDB instance to another zone.
 *
 * @description - This operation is applicable to replica set instances. Standalone instances and sharded cluster instances are not supported.
 * - Transparent Data Encryption (TDE) is not enabled for the instance.
 * - The destination zone and the current zone of the instance must be in the same region.
 * - If the instance is deployed in a virtual private cloud (VPC), make sure that a vSwitch is created in the destination zone before you migrate the instance. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
 *
 * @param request MigrateToOtherZoneRequest
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZone(const MigrateToOtherZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateToOtherZoneWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of the root account in an ApsaraDB for MongoDB instance.
 *
 * @description This operation is not supported for sharded cluster instances.
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

  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "ModifyAccountDescription"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the description of the root account in an ApsaraDB for MongoDB instance.
 *
 * @description This operation is not supported for sharded cluster instances.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the O&M task configuration of a MongoDB instance.
 *
 * @param request ModifyActiveOperationMaintenanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationMaintenanceConfigResponse
 */
ModifyActiveOperationMaintenanceConfigResponse Client::modifyActiveOperationMaintenanceConfigWithOptions(const ModifyActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationMaintenanceConfig"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationMaintenanceConfigResponse>();
}

/**
 * @summary Modifies the O&M task configuration of a MongoDB instance.
 *
 * @param request ModifyActiveOperationMaintenanceConfigRequest
 * @return ModifyActiveOperationMaintenanceConfigResponse
 */
ModifyActiveOperationMaintenanceConfigResponse Client::modifyActiveOperationMaintenanceConfig(const ModifyActiveOperationMaintenanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintenanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB for MongoDB instance.
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Modifies the advanced backup policy.
 *
 * @description Geo-redundancy applies only to cloud disk replica set and cloud disk sharded instances.
 *
 * @param tmpReq ModifyAdvancedBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAdvancedBackupPolicyResponse
 */
ModifyAdvancedBackupPolicyResponse Client::modifyAdvancedBackupPolicyWithOptions(const ModifyAdvancedBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAdvancedBackupPolicyShrinkRequest request = ModifyAdvancedBackupPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedBackupDataPolicies()) {
    request.setAdvancedBackupDataPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvancedBackupDataPolicies(), "AdvancedBackupDataPolicies", "json"));
  }

  if (!!tmpReq.hasAdvancedBackupLogPolicies()) {
    request.setAdvancedBackupLogPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvancedBackupLogPolicies(), "AdvancedBackupLogPolicies", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedBackupDataPoliciesShrink()) {
    query["AdvancedBackupDataPolicies"] = request.getAdvancedBackupDataPoliciesShrink();
  }

  if (!!request.hasAdvancedBackupLogPoliciesShrink()) {
    query["AdvancedBackupLogPolicies"] = request.getAdvancedBackupLogPoliciesShrink();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasSnapshotBackupType()) {
    query["SnapshotBackupType"] = request.getSnapshotBackupType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAdvancedBackupPolicy"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAdvancedBackupPolicyResponse>();
}

/**
 * @summary Modifies the advanced backup policy.
 *
 * @description Geo-redundancy applies only to cloud disk replica set and cloud disk sharded instances.
 *
 * @param request ModifyAdvancedBackupPolicyRequest
 * @return ModifyAdvancedBackupPolicyResponse
 */
ModifyAdvancedBackupPolicyResponse Client::modifyAdvancedBackupPolicy(const ModifyAdvancedBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAdvancedBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables advanced backup.
 *
 * @description Enables advanced backup. This feature is supported only for cloud disk replica set and sharded cluster instances.
 *
 * @param request ModifyAdvancedBackupStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAdvancedBackupStatusResponse
 */
ModifyAdvancedBackupStatusResponse Client::modifyAdvancedBackupStatusWithOptions(const ModifyAdvancedBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAdvancedBackupStatus"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAdvancedBackupStatusResponse>();
}

/**
 * @summary Enables advanced backup.
 *
 * @description Enables advanced backup. This feature is supported only for cloud disk replica set and sharded cluster instances.
 *
 * @param request ModifyAdvancedBackupStatusRequest
 * @return ModifyAdvancedBackupStatusResponse
 */
ModifyAdvancedBackupStatusResponse Client::modifyAdvancedBackupStatus(const ModifyAdvancedBackupStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAdvancedBackupStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the collection types of audit logs for an ApsaraDB for MongoDB instance.
 *
 * @description - The instance must be in the Running instance status when you invoke this operation.
 * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not invoke this operation at a high frequency. If you require high-frequency calls, use a Logstore. For details, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request ModifyAuditLogFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAuditLogFilterResponse
 */
ModifyAuditLogFilterResponse Client::modifyAuditLogFilterWithOptions(const ModifyAuditLogFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAuditLogFilter"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAuditLogFilterResponse>();
}

/**
 * @summary Modifies the collection types of audit logs for an ApsaraDB for MongoDB instance.
 *
 * @description - The instance must be in the Running instance status when you invoke this operation.
 * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not invoke this operation at a high frequency. If you require high-frequency calls, use a Logstore. For details, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request ModifyAuditLogFilterRequest
 * @return ModifyAuditLogFilterResponse
 */
ModifyAuditLogFilterResponse Client::modifyAuditLogFilter(const ModifyAuditLogFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAuditLogFilterWithOptions(request, runtime);
}

/**
 * @summary Settings the audit log switch or log storage duration for an ApsaraDB for MongoDB instance.
 *
 * @description - This operation is limited to 30 calls per minute. If this limit is exceeded, the request is throttled. Do not call this operation at a high frequency. For high-frequency calls, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request ModifyAuditPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAuditPolicyResponse
 */
ModifyAuditPolicyResponse Client::modifyAuditPolicyWithOptions(const ModifyAuditPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditLogSwitchSource()) {
    query["AuditLogSwitchSource"] = request.getAuditLogSwitchSource();
  }

  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasHotStoragePeriod()) {
    query["HotStoragePeriod"] = request.getHotStoragePeriod();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasStoragePeriod()) {
    query["StoragePeriod"] = request.getStoragePeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAuditPolicy"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAuditPolicyResponse>();
}

/**
 * @summary Settings the audit log switch or log storage duration for an ApsaraDB for MongoDB instance.
 *
 * @description - This operation is limited to 30 calls per minute. If this limit is exceeded, the request is throttled. Do not call this operation at a high frequency. For high-frequency calls, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
 *
 * @param request ModifyAuditPolicyRequest
 * @return ModifyAuditPolicyResponse
 */
ModifyAuditPolicyResponse Client::modifyAuditPolicy(const ModifyAuditPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAuditPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the time-to-live (TTL) of a MongoDB backup set.
 *
 * @description You can modify the TTL only for manual backups.
 * This operation is applicable only to MongoDB instances that use cloud disks.
 *
 * @param request ModifyBackupExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupExpireTimeResponse
 */
ModifyBackupExpireTimeResponse Client::modifyBackupExpireTimeWithOptions(const ModifyBackupExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupExpireTime()) {
    query["BackupExpireTime"] = request.getBackupExpireTime();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
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
    {"version" , "2015-12-01"},
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
 * @summary Modifies the time-to-live (TTL) of a MongoDB backup set.
 *
 * @description You can modify the TTL only for manual backups.
 * This operation is applicable only to MongoDB instances that use cloud disks.
 *
 * @param request ModifyBackupExpireTimeRequest
 * @return ModifyBackupExpireTimeResponse
 */
ModifyBackupExpireTimeResponse Client::modifyBackupExpireTime(const ModifyBackupExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupExpireTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup policy of a MongoDB instance.
 *
 * @description Cross-region backup is applicable only to replica set and sharded cluster instances that use cloud disks.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupInterval()) {
    query["BackupInterval"] = request.getBackupInterval();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasCrossBackupPeriod()) {
    query["CrossBackupPeriod"] = request.getCrossBackupPeriod();
  }

  if (!!request.hasCrossBackupType()) {
    query["CrossBackupType"] = request.getCrossBackupType();
  }

  if (!!request.hasCrossLogRetentionType()) {
    query["CrossLogRetentionType"] = request.getCrossLogRetentionType();
  }

  if (!!request.hasCrossLogRetentionValue()) {
    query["CrossLogRetentionValue"] = request.getCrossLogRetentionValue();
  }

  if (!!request.hasCrossRetentionType()) {
    query["CrossRetentionType"] = request.getCrossRetentionType();
  }

  if (!!request.hasCrossRetentionValue()) {
    query["CrossRetentionValue"] = request.getCrossRetentionValue();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.getDestRegion();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.getEnableBackupLog();
  }

  if (!!request.hasEnableCrossLogBackup()) {
    query["EnableCrossLogBackup"] = request.getEnableCrossLogBackup();
  }

  if (!!request.hasHighFrequencyBackupRetention()) {
    query["HighFrequencyBackupRetention"] = request.getHighFrequencyBackupRetention();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasPreserveOneEachHour()) {
    query["PreserveOneEachHour"] = request.getPreserveOneEachHour();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSnapshotBackupType()) {
    query["SnapshotBackupType"] = request.getSnapshotBackupType();
  }

  if (!!request.hasSrcRegion()) {
    query["SrcRegion"] = request.getSrcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the backup policy of a MongoDB instance.
 *
 * @description Cross-region backup is applicable only to replica set and sharded cluster instances that use cloud disks.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies instance release protection configuration.
 *
 * @description This operation is applicable only to pay-as-you-go instances.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttributeWithOptions(const ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceReleaseProtection()) {
    query["DBInstanceReleaseProtection"] = request.getDBInstanceReleaseProtection();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

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
    {"action" , "ModifyDBInstanceAttribute"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies instance release protection configuration.
 *
 * @description This operation is applicable only to pay-as-you-go instances.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies instance configuration
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
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
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies instance configuration
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoint and port of an ApsaraDB for MongoDB instance.
 *
 * @description The instance types that support modifying the endpoint and port are as follows:
 * - You can modify the endpoints of instances with local disks and cloud disks.
 * - For sharded cluster instances, you can modify only the endpoints of Mongos nodes.
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

  if (!!request.hasForceModifySuffix()) {
    query["ForceModifySuffix"] = request.getForceModifySuffix();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasNewConnectionString()) {
    query["NewConnectionString"] = request.getNewConnectionString();
  }

  if (!!request.hasNewPort()) {
    query["NewPort"] = request.getNewPort();
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

  if (!!request.hasPortModifyOnly()) {
    query["PortModifyOnly"] = request.getPortModifyOnly();
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
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the endpoint and port of an ApsaraDB for MongoDB instance.
 *
 * @description The instance types that support modifying the endpoint and port are as follows:
 * - You can modify the endpoints of instances with local disks and cloud disks.
 * - For sharded cluster instances, you can modify only the endpoints of Mongos nodes.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyDBInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescriptionWithOptions(const ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

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
    {"action" , "ModifyDBInstanceDescription"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDescriptionResponse>();
}

/**
 * @summary Modifies the name of an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyDBInstanceDescriptionRequest
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the disk type of an ApsaraDB for MongoDB instance.
 *
 * @description - This feature is not supported for instances with less than 40 GB of disk space.
 * - You can change the disk type only to an ESSD AutoPL disk (cloud_auto).
 * - The interval between two consecutive modifications to the provisioned input/output operations per second (IOPS) of an instance must be longer than one hour. For more information, see [Modify the performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
 *
 * @param request ModifyDBInstanceDiskTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDiskTypeResponse
 */
ModifyDBInstanceDiskTypeResponse Client::modifyDBInstanceDiskTypeWithOptions(const ModifyDBInstanceDiskTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDbInstanceStorageType()) {
    query["DbInstanceStorageType"] = request.getDbInstanceStorageType();
  }

  if (!!request.hasExtraParam()) {
    query["ExtraParam"] = request.getExtraParam();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasProvisionedIops()) {
    query["ProvisionedIops"] = request.getProvisionedIops();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDiskType"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDiskTypeResponse>();
}

/**
 * @summary Modifies the disk type of an ApsaraDB for MongoDB instance.
 *
 * @description - This feature is not supported for instances with less than 40 GB of disk space.
 * - You can change the disk type only to an ESSD AutoPL disk (cloud_auto).
 * - The interval between two consecutive modifications to the provisioned input/output operations per second (IOPS) of an instance must be longer than one hour. For more information, see [Modify the performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
 *
 * @param request ModifyDBInstanceDiskTypeRequest
 * @return ModifyDBInstanceDiskTypeResponse
 */
ModifyDBInstanceDiskTypeResponse Client::modifyDBInstanceDiskType(const ModifyDBInstanceDiskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDiskTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTimeWithOptions(const ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMaintainTime"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMaintainTimeResponse>();
}

/**
 * @summary Modifies the maintenance window of an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Set the monitoring collection granularity for a MongoDB instance.
 *
 * @description > Due to changes in the monitoring collection granularity adjustment feature, this operation is only applicable to the previous version of the MongoDB console.
 * To use this operation, the instance must meet the following requirements:
 * - A replica set or sharded cluster instance is used.
 * - MongoDB 3.4 (the latest minor version) or MongoDB 4.0 is selected.
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

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

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
    {"action" , "ModifyDBInstanceMonitor"},
    {"version" , "2015-12-01"},
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
 * @summary Set the monitoring collection granularity for a MongoDB instance.
 *
 * @description > Due to changes in the monitoring collection granularity adjustment feature, this operation is only applicable to the previous version of the MongoDB console.
 * To use this operation, the instance must meet the following requirements:
 * - A replica set or sharded cluster instance is used.
 * - MongoDB 3.4 (the latest minor version) or MongoDB 4.0 is selected.
 *
 * @param request ModifyDBInstanceMonitorRequest
 * @return ModifyDBInstanceMonitorResponse
 */
ModifyDBInstanceMonitorResponse Client::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary Extends the classic network retention period for a MongoDB instance.
 *
 * @description When you call this operation, the instance must meet the following conditions:
 * * The instance is in the Running state.
 * * The network type of the instance is hybrid access mode.
 * > This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
 *
 * @param request ModifyDBInstanceNetExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceNetExpireTimeResponse
 */
ModifyDBInstanceNetExpireTimeResponse Client::modifyDBInstanceNetExpireTimeWithOptions(const ModifyDBInstanceNetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpendExpiredDays()) {
    query["ClassicExpendExpiredDays"] = request.getClassicExpendExpiredDays();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
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
    {"action" , "ModifyDBInstanceNetExpireTime"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceNetExpireTimeResponse>();
}

/**
 * @summary Extends the classic network retention period for a MongoDB instance.
 *
 * @description When you call this operation, the instance must meet the following conditions:
 * * The instance is in the Running state.
 * * The network type of the instance is hybrid access mode.
 * > This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
 *
 * @param request ModifyDBInstanceNetExpireTimeRequest
 * @return ModifyDBInstanceNetExpireTimeResponse
 */
ModifyDBInstanceNetExpireTimeResponse Client::modifyDBInstanceNetExpireTime(const ModifyDBInstanceNetExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceNetExpireTimeWithOptions(request, runtime);
}

/**
 * @summary Switches the network type of a MongoDB instance.
 *
 * @description - This operation applies to replica set instances and sharded cluster instances. Single-node instances are not supported. Only the transform from the classic network type to the VPC network type is supported.
 * - This operation supports only instances that run MongoDB 4.2 or earlier and use local disks.
 *
 * @param request ModifyDBInstanceNetworkTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceNetworkTypeResponse
 */
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkTypeWithOptions(const ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.getClassicExpiredDays();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetainClassic()) {
    query["RetainClassic"] = request.getRetainClassic();
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
    {"action" , "ModifyDBInstanceNetworkType"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceNetworkTypeResponse>();
}

/**
 * @summary Switches the network type of a MongoDB instance.
 *
 * @description - This operation applies to replica set instances and sharded cluster instances. Single-node instances are not supported. Only the transform from the classic network type to the VPC network type is supported.
 * - This operation supports only instances that run MongoDB 4.2 or earlier and use local disks.
 *
 * @param request ModifyDBInstanceNetworkTypeRequest
 * @return ModifyDBInstanceNetworkTypeResponse
 */
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the SSL configuration of a MongoDB instance.
 *
 * @description When you call the ModifyDBInstanceSSL operation, the instance must meet the following conditions: 
 * - The instance is in the Running state.
 * - The instance is a replica set or sharded cluster instance.
 *   - The MongoDB version of a replica set instance must be 3.4 or later.
 *   - The storage mode of a sharded cluster instance must be ESSD cloud disk.
 * > When you enable, update, or disable SSL, the instance restarts once. Perform this operation during off-peak hours.
 *
 * @param request ModifyDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSLWithOptions(const ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasForceEncryption()) {
    query["ForceEncryption"] = request.getForceEncryption();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSSLAction()) {
    query["SSLAction"] = request.getSSLAction();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSSL"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSSLResponse>();
}

/**
 * @summary Modifies the SSL configuration of a MongoDB instance.
 *
 * @description When you call the ModifyDBInstanceSSL operation, the instance must meet the following conditions: 
 * - The instance is in the Running state.
 * - The instance is a replica set or sharded cluster instance.
 *   - The MongoDB version of a replica set instance must be 3.4 or later.
 *   - The storage mode of a sharded cluster instance must be ESSD cloud disk.
 * > When you enable, update, or disable SSL, the instance restarts once. Perform this operation during off-peak hours.
 *
 * @param request ModifyDBInstanceSSLRequest
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications or storage space of ApsaraDB for MongoDB standalone instances, replica set instances, and serverless instances. Serverless instances are supported only on the Alibaba Cloud China site.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * This operation is applicable only to ApsaraDB for MongoDB <props="china"><ph>standalone instances, replica set instances, and serverless instances</ph><props="intl"><ph>standalone instances and replica set instances</ph>. To modify the configurations of a sharded cluster instance, call the [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html), [CreateNode](https://help.aliyun.com/document_detail/61911.html), [DeleteNode](https://help.aliyun.com/document_detail/61922.html), or [ModifyNodeSpecBatch](https://help.aliyun.com/document_detail/61816.html) operation based on your business requirements.
 *
 * @param request ModifyDBInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSpecResponse
 */
ModifyDBInstanceSpecResponse Client::modifyDBInstanceSpecWithOptions(const ModifyDBInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlignPrimaryZone()) {
    query["AlignPrimaryZone"] = request.getAlignPrimaryZone();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasExtraParam()) {
    query["ExtraParam"] = request.getExtraParam();
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

  if (!!request.hasReadonlyReplicas()) {
    query["ReadonlyReplicas"] = request.getReadonlyReplicas();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSearchNodeClass()) {
    query["SearchNodeClass"] = request.getSearchNodeClass();
  }

  if (!!request.hasSearchNodeCount()) {
    query["SearchNodeCount"] = request.getSearchNodeCount();
  }

  if (!!request.hasSearchNodeStorage()) {
    query["SearchNodeStorage"] = request.getSearchNodeStorage();
  }

  if (!!request.hasTargetHiddenZoneId()) {
    query["TargetHiddenZoneId"] = request.getTargetHiddenZoneId();
  }

  if (!!request.hasTargetSecondaryZoneId()) {
    query["TargetSecondaryZoneId"] = request.getTargetSecondaryZoneId();
  }

  if (!!request.hasTargetVswitchId()) {
    query["TargetVswitchId"] = request.getTargetVswitchId();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSpec"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSpecResponse>();
}

/**
 * @summary Modifies the specifications or storage space of ApsaraDB for MongoDB standalone instances, replica set instances, and serverless instances. Serverless instances are supported only on the Alibaba Cloud China site.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 * This operation is applicable only to ApsaraDB for MongoDB <props="china"><ph>standalone instances, replica set instances, and serverless instances</ph><props="intl"><ph>standalone instances and replica set instances</ph>. To modify the configurations of a sharded cluster instance, call the [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html), [CreateNode](https://help.aliyun.com/document_detail/61911.html), [DeleteNode](https://help.aliyun.com/document_detail/61922.html), or [ModifyNodeSpecBatch](https://help.aliyun.com/document_detail/61816.html) operation based on your business requirements.
 *
 * @param request ModifyDBInstanceSpecRequest
 * @return ModifyDBInstanceSpecResponse
 */
ModifyDBInstanceSpecResponse Client::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modifies the Transparent Data Encryption (TDE) status of a MongoDB instance.
 *
 * @description Transparent Data Encryption (TDE) performs real-time I/O encryption and decryption on data files. Data is encrypted before it is written to the disk and decrypted when it is read from the disk into the memory. For more information, see [Configure TDE](https://help.aliyun.com/document_detail/131048.html).
 * > You cannot disable TDE after it is enabled.
 * When you call this operation, the instance must meet the following requirements:
 * - The instance is a replica set instance or a sharded cluster instance.
 * - The storage engine of the instance is WiredTiger.
 * - The storage type of the instance is local disk.
 * - The database version of the instance is 4.0 or 4.2. If the database version is earlier than 4.0, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database version.
 *
 * @param request ModifyDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceTDEResponse
 */
ModifyDBInstanceTDEResponse Client::modifyDBInstanceTDEWithOptions(const ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEncryptorName()) {
    query["EncryptorName"] = request.getEncryptorName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleARN()) {
    query["RoleARN"] = request.getRoleARN();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.getTDEStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceTDE"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceTDEResponse>();
}

/**
 * @summary Modifies the Transparent Data Encryption (TDE) status of a MongoDB instance.
 *
 * @description Transparent Data Encryption (TDE) performs real-time I/O encryption and decryption on data files. Data is encrypted before it is written to the disk and decrypted when it is read from the disk into the memory. For more information, see [Configure TDE](https://help.aliyun.com/document_detail/131048.html).
 * > You cannot disable TDE after it is enabled.
 * When you call this operation, the instance must meet the following requirements:
 * - The instance is a replica set instance or a sharded cluster instance.
 * - The storage engine of the instance is WiredTiger.
 * - The storage type of the instance is local disk.
 * - The database version of the instance is 4.0 or 4.2. If the database version is earlier than 4.0, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database version.
 *
 * @param request ModifyDBInstanceTDERequest
 * @return ModifyDBInstanceTDEResponse
 */
ModifyDBInstanceTDEResponse Client::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary Modifies the global IP whitelist template associated with an ApsaraDB for MongoDB instance.
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
    {"action" , "ModifyGlobalSecurityIPGroup"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the global IP whitelist template associated with an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyGlobalSecurityIPGroupRequest
 * @return ModifyGlobalSecurityIPGroupResponse
 */
ModifyGlobalSecurityIPGroupResponse Client::modifyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a global IP whitelist template associated with an ApsaraDB for MongoDB instance.
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
    {"action" , "ModifyGlobalSecurityIPGroupName"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the name of a global IP whitelist template associated with an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyGlobalSecurityIPGroupNameRequest
 * @return ModifyGlobalSecurityIPGroupNameResponse
 */
ModifyGlobalSecurityIPGroupNameResponse Client::modifyGlobalSecurityIPGroupName(const ModifyGlobalSecurityIPGroupNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the mapping between a global whitelist template and an ApsaraDB for MongoDB instance.
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
    {"action" , "ModifyGlobalSecurityIPGroupRelation"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the mapping between a global whitelist template and an ApsaraDB for MongoDB instance.
 *
 * @param request ModifyGlobalSecurityIPGroupRelationRequest
 * @return ModifyGlobalSecurityIPGroupRelationResponse
 */
ModifyGlobalSecurityIPGroupRelationResponse Client::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Enables or disables auto-renewal for an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * This operation is applicable to subscription instances.
 * >  When auto-renewal is enabled, your payment will be collected nine days before the expiration date of ApsaraDB for MongoDB. Ensure that your account has sufficient balance.
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
    {"action" , "ModifyInstanceAutoRenewalAttribute"},
    {"version" , "2015-12-01"},
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
 * @summary Enables or disables auto-renewal for an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * This operation is applicable to subscription instances.
 * >  When auto-renewal is enabled, your payment will be collected nine days before the expiration date of ApsaraDB for MongoDB. Ensure that your account has sufficient balance.
 *
 * @param request ModifyInstanceAutoRenewalAttributeRequest
 * @return ModifyInstanceAutoRenewalAttributeResponse
 */
ModifyInstanceAutoRenewalAttributeResponse Client::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary Disables password-free access over Virtual Private Cloud (VPC) for an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is a replica set or sharded cluster instance.
 * - The database engine version of the instance is 4.0 (with the minor version of mongodb_20190408_3.0.11 or later) or 4.2. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to view the database engine version of the instance. If necessary, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database engine version of the instance.
 * - The network type of the instance must be VPC. If the network type of the instance is classic network, you must call the [ModifyDBInstanceNetworkType](https://help.aliyun.com/document_detail/62138.html) operation to change the network type to VPC.
 * - You can only disable but not enable password-free access over VPC.
 *
 * @param request ModifyInstanceVpcAuthModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceVpcAuthModeResponse
 */
ModifyInstanceVpcAuthModeResponse Client::modifyInstanceVpcAuthModeWithOptions(const ModifyInstanceVpcAuthModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVpcAuthMode()) {
    query["VpcAuthMode"] = request.getVpcAuthMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceVpcAuthMode"},
    {"version" , "2015-12-01"},
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
 * @summary Disables password-free access over Virtual Private Cloud (VPC) for an ApsaraDB for MongoDB instance.
 *
 * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is a replica set or sharded cluster instance.
 * - The database engine version of the instance is 4.0 (with the minor version of mongodb_20190408_3.0.11 or later) or 4.2. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to view the database engine version of the instance. If necessary, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database engine version of the instance.
 * - The network type of the instance must be VPC. If the network type of the instance is classic network, you must call the [ModifyDBInstanceNetworkType](https://help.aliyun.com/document_detail/62138.html) operation to change the network type to VPC.
 * - You can only disable but not enable password-free access over VPC.
 *
 * @param request ModifyInstanceVpcAuthModeRequest
 * @return ModifyInstanceVpcAuthModeResponse
 */
ModifyInstanceVpcAuthModeResponse Client::modifyInstanceVpcAuthMode(const ModifyInstanceVpcAuthModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVpcAuthModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications and storage space of nodes in a MongoDB sharded cluster instance.
 *
 * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * > This operation is applicable only to sharded cluster instances.
 *
 * @param request ModifyNodeSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodeSpecResponse
 */
ModifyNodeSpecResponse Client::modifyNodeSpecWithOptions(const ModifyNodeSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlignPrimaryZone()) {
    query["AlignPrimaryZone"] = request.getAlignPrimaryZone();
  }

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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasNodeClass()) {
    query["NodeClass"] = request.getNodeClass();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasNodeStorage()) {
    query["NodeStorage"] = request.getNodeStorage();
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

  if (!!request.hasReadonlyReplicas()) {
    query["ReadonlyReplicas"] = request.getReadonlyReplicas();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTargetHiddenZoneId()) {
    query["TargetHiddenZoneId"] = request.getTargetHiddenZoneId();
  }

  if (!!request.hasTargetSecondaryZoneId()) {
    query["TargetSecondaryZoneId"] = request.getTargetSecondaryZoneId();
  }

  if (!!request.hasTargetVswitchId()) {
    query["TargetVswitchId"] = request.getTargetVswitchId();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNodeSpec"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodeSpecResponse>();
}

/**
 * @summary Modifies the specifications and storage space of nodes in a MongoDB sharded cluster instance.
 *
 * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * > This operation is applicable only to sharded cluster instances.
 *
 * @param request ModifyNodeSpecRequest
 * @return ModifyNodeSpecResponse
 */
ModifyNodeSpecResponse Client::modifyNodeSpec(const ModifyNodeSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodeSpecWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of one or more Mongos or shard nodes in an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 *  This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
 * When you perform batch upgrade or decrease the quota on multiple sharded cluster instances, the target specifications are subject to certain constraints. For example, for storage capacity expansion, the target capacity must be greater than or equal to the current capacity. If the specifications of multiple sharded cluster instances are inconsistent, the system randomly selects the specifications of one sharded cluster instance to construct the constraints, which may cause the upgrade or decrease the quota to fail.
 * If the batch upgrade or decrease the quota process is not Normal, we recommend that you use the ModifyNodeSpec operation to perform an Upgrade/Downgrade on a single sharded cluster instance.
 *
 * @param request ModifyNodeSpecBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodeSpecBatchResponse
 */
ModifyNodeSpecBatchResponse Client::modifyNodeSpecBatchWithOptions(const ModifyNodeSpecBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlignPrimaryZone()) {
    query["AlignPrimaryZone"] = request.getAlignPrimaryZone();
  }

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

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasNodesInfo()) {
    query["NodesInfo"] = request.getNodesInfo();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetHiddenZoneId()) {
    query["TargetHiddenZoneId"] = request.getTargetHiddenZoneId();
  }

  if (!!request.hasTargetSecondaryZoneId()) {
    query["TargetSecondaryZoneId"] = request.getTargetSecondaryZoneId();
  }

  if (!!request.hasTargetVswitchId()) {
    query["TargetVswitchId"] = request.getTargetVswitchId();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNodeSpecBatch"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodeSpecBatchResponse>();
}

/**
 * @summary Modifies the configurations of one or more Mongos or shard nodes in an ApsaraDB for MongoDB sharded cluster instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
 *  This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
 * When you perform batch upgrade or decrease the quota on multiple sharded cluster instances, the target specifications are subject to certain constraints. For example, for storage capacity expansion, the target capacity must be greater than or equal to the current capacity. If the specifications of multiple sharded cluster instances are inconsistent, the system randomly selects the specifications of one sharded cluster instance to construct the constraints, which may cause the upgrade or decrease the quota to fail.
 * If the batch upgrade or decrease the quota process is not Normal, we recommend that you use the ModifyNodeSpec operation to perform an Upgrade/Downgrade on a single sharded cluster instance.
 *
 * @param request ModifyNodeSpecBatchRequest
 * @return ModifyNodeSpecBatchResponse
 */
ModifyNodeSpecBatchResponse Client::modifyNodeSpecBatch(const ModifyNodeSpecBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodeSpecBatchWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameters of an ApsaraDB for MongoDB instance.
 *
 * @description - When you call this operation, the instance status must be running.
 * - If you call this operation to modify specific instance parameters that require a restart to take effect, the instance is automatically restarted after the operation is called. You can call the [DescribeParameterTemplates](https://help.aliyun.com/document_detail/67618.html) operation to identify which parameters require an instance restart to take effect after modification.
 *
 * @param request ModifyParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParametersResponse
 */
ModifyParametersResponse Client::modifyParametersWithOptions(const ModifyParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

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

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParameters"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParametersResponse>();
}

/**
 * @summary Modifies the parameters of an ApsaraDB for MongoDB instance.
 *
 * @description - When you call this operation, the instance status must be running.
 * - If you call this operation to modify specific instance parameters that require a restart to take effect, the instance is automatically restarted after the operation is called. You can call the [DescribeParameterTemplates](https://help.aliyun.com/document_detail/67618.html) operation to identify which parameters require an instance restart to take effect after modification.
 *
 * @param request ModifyParametersRequest
 * @return ModifyParametersResponse
 */
ModifyParametersResponse Client::modifyParameters(const ModifyParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParametersWithOptions(request, runtime);
}

/**
 * @summary Moves an ApsaraDB for MongoDB instance to a specified resource group.
 *
 * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroupWithOptions(const ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"version" , "2015-12-01"},
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
 * @summary Moves an ApsaraDB for MongoDB instance to a specified resource group.
 *
 * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyResourceGroupRequest
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroup(const ModifyResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the ECS security group bound to an ApsaraDB for MongoDB instance.
 *
 * @description > For a sharded cluster instance, the bound ECS security group takes effect only for mongos nodes.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroupConfiguration"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the ECS security group bound to an ApsaraDB for MongoDB instance.
 *
 * @description > For a sharded cluster instance, the bound ECS security group takes effect only for mongos nodes.
 *
 * @param request ModifySecurityGroupConfigurationRequest
 * @return ModifySecurityGroupConfigurationResponse
 */
ModifySecurityGroupConfigurationResponse Client::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP whitelist of a MongoDB instance.
 *
 * @param request ModifySecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIps"},
    {"version" , "2015-12-01"},
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
 * @summary Modifies the IP whitelist of a MongoDB instance.
 *
 * @param request ModifySecurityIpsRequest
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the SRV connection address of a MongoDB instance.
 *
 * @description This operation applies only to replica set instances and sharded cluster instances that use disks.
 *
 * @param request ModifySrvNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySrvNetworkAddressResponse
 */
ModifySrvNetworkAddressResponse Client::modifySrvNetworkAddressWithOptions(const ModifySrvNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionType()) {
    query["ConnectionType"] = request.getConnectionType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "ModifySrvNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySrvNetworkAddressResponse>();
}

/**
 * @summary Modifies the SRV connection address of a MongoDB instance.
 *
 * @description This operation applies only to replica set instances and sharded cluster instances that use disks.
 *
 * @param request ModifySrvNetworkAddressRequest
 * @return ModifySrvNetworkAddressResponse
 */
ModifySrvNetworkAddressResponse Client::modifySrvNetworkAddress(const ModifySrvNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySrvNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a task in the task center for an ApsaraDB for MongoDB instance.
 *
 * @description The actions performed by this operation for a task vary based on the current state of the task. The supported actions for a task can be obtained from the value of the actionInfo parameter in the DescribeHistoryTasks operation.
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
    {"version" , "2015-12-01"},
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
 * @summary Modifies the information of a task in the task center for an ApsaraDB for MongoDB instance.
 *
 * @description The actions performed by this operation for a task vary based on the current state of the task. The supported actions for a task can be obtained from the value of the actionInfo parameter in the DescribeHistoryTasks operation.
 *
 * @param request ModifyTaskInfoRequest
 * @return ModifyTaskInfoResponse
 */
ModifyTaskInfoResponse Client::modifyTaskInfo(const ModifyTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Releases the internal endpoint of a shard or Configserver node for a sharded cluster instance.
 *
 * @description - This operation releases the internal endpoint of a shard or Configserver node for a sharded cluster instance. For more information, see [Release the endpoint of a shard or Configserver node](https://help.aliyun.com/document_detail/134067.html).
 * - To release the public endpoint of a shard or Configserver node for a sharded cluster instance, call the [ReleasePublicNetworkAddress](https://help.aliyun.com/document_detail/67604.html) operation.
 *
 * @param request ReleaseNodePrivateNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseNodePrivateNetworkAddressResponse
 */
ReleaseNodePrivateNetworkAddressResponse Client::releaseNodePrivateNetworkAddressWithOptions(const ReleaseNodePrivateNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionType()) {
    query["ConnectionType"] = request.getConnectionType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseNodePrivateNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseNodePrivateNetworkAddressResponse>();
}

/**
 * @summary Releases the internal endpoint of a shard or Configserver node for a sharded cluster instance.
 *
 * @description - This operation releases the internal endpoint of a shard or Configserver node for a sharded cluster instance. For more information, see [Release the endpoint of a shard or Configserver node](https://help.aliyun.com/document_detail/134067.html).
 * - To release the public endpoint of a shard or Configserver node for a sharded cluster instance, call the [ReleasePublicNetworkAddress](https://help.aliyun.com/document_detail/67604.html) operation.
 *
 * @param request ReleaseNodePrivateNetworkAddressRequest
 * @return ReleaseNodePrivateNetworkAddressResponse
 */
ReleaseNodePrivateNetworkAddressResponse Client::releaseNodePrivateNetworkAddress(const ReleaseNodePrivateNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseNodePrivateNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for MongoDB instance.
 *
 * @param request ReleasePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddressWithOptions(const ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionType()) {
    query["ConnectionType"] = request.getConnectionType();
  }

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
    {"action" , "ReleasePublicNetworkAddress"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePublicNetworkAddressResponse>();
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for MongoDB instance.
 *
 * @param request ReleasePublicNetworkAddressRequest
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddress(const ReleasePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Manually renews an ApsaraDB for MongoDB subscription instance.
 *
 * @description Make sure that you fully understand the billing methods and pricing of ApsaraDB for MongoDB before you call this operation. For more information about the pricing of ApsaraDB for MongoDB, visit the [pricing tab of the product buy page](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * This operation is only applicable to instances that use the subscription billing method.
 *
 * @param request RenewDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewDBInstanceResponse
 */
RenewDBInstanceResponse Client::renewDBInstanceWithOptions(const RenewDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
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
    {"action" , "RenewDBInstance"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewDBInstanceResponse>();
}

/**
 * @summary Manually renews an ApsaraDB for MongoDB subscription instance.
 *
 * @description Make sure that you fully understand the billing methods and pricing of ApsaraDB for MongoDB before you call this operation. For more information about the pricing of ApsaraDB for MongoDB, visit the [pricing tab of the product buy page](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * This operation is only applicable to instances that use the subscription billing method.
 *
 * @param request RenewDBInstanceRequest
 * @return RenewDBInstanceResponse
 */
RenewDBInstanceResponse Client::renewDBInstance(const RenewDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the password of the root account in an ApsaraDB for MongoDB instance.
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

  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "ResetAccountPassword"},
    {"version" , "2015-12-01"},
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
 * @summary Resets the password of the root account in an ApsaraDB for MongoDB instance.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts a MongoDB instance.
 *
 * @description You can call this operation to restart an instance, or a specific shard or mongos node in a sharded cluster instance.
 *
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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

  if (!!request.hasParallelRestartMongos()) {
    query["ParallelRestartMongos"] = request.getParallelRestartMongos();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2015-12-01"},
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
 * @summary Restarts a MongoDB instance.
 *
 * @description You can call this operation to restart an instance, or a specific shard or mongos node in a sharded cluster instance.
 *
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Restarts a single node of an ApsaraDB for MongoDB instance.
 *
 * @description Limits:
 * *   The instance is in the running state.
 * *   The instance is a standard replica set or sharded cluster instance.
 *
 * @param request RestartNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartNodeResponse
 */
RestartNodeResponse Client::restartNodeWithOptions(const RestartNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartNode"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartNodeResponse>();
}

/**
 * @summary Restarts a single node of an ApsaraDB for MongoDB instance.
 *
 * @description Limits:
 * *   The instance is in the running state.
 * *   The instance is a standard replica set or sharded cluster instance.
 *
 * @param request RestartNodeRequest
 * @return RestartNodeResponse
 */
RestartNodeResponse Client::restartNode(const RestartNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartNodeWithOptions(request, runtime);
}

/**
 * @summary Switches the primary and secondary nodes for an ApsaraDB for MongoDB instance.
 *
 * @description The instance must be running when you call this operation.
 * >
 * - This operation is applicable to replica set instances and sharded cluster instances, but cannot be performed on standalone instances.
 * - On replica set instances, the switch is performed between instances. On sharded cluster instances, the switch is performed between shards.
 *
 * @param request SwitchDBInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHAWithOptions(const SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleIds()) {
    query["RoleIds"] = request.getRoleIds();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceHA"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDBInstanceHAResponse>();
}

/**
 * @summary Switches the primary and secondary nodes for an ApsaraDB for MongoDB instance.
 *
 * @description The instance must be running when you call this operation.
 * >
 * - This operation is applicable to replica set instances and sharded cluster instances, but cannot be performed on standalone instances.
 * - On replica set instances, the switch is performed between instances. On sharded cluster instances, the switch is performed between shards.
 *
 * @param request SwitchDBInstanceHARequest
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceHAWithOptions(request, runtime);
}

/**
 * @summary Binds tags to ApsaraDB for MongoDB instances.
 *
 * @description If you have a large number of instances, you can create multiple tags, bind the tags to the instances, and filter the instances by tag.
 * - A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
 * - If the tag that you specify does not exist, this tag is automatically created and bound to the specified instance.
 * - If a tag that has the same key is already bound to the instance, the new tag overwrites the existing tag.
 * - You can bind up to 20 tags to each instance.
 * - You can bind tags to up to 50 instances each time you call the operation.
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"version" , "2015-12-01"},
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
 * @summary Binds tags to ApsaraDB for MongoDB instances.
 *
 * @description If you have a large number of instances, you can create multiple tags, bind the tags to the instances, and filter the instances by tag.
 * - A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
 * - If the tag that you specify does not exist, this tag is automatically created and bound to the specified instance.
 * - If a tag that has the same key is already bound to the instance, the new tag overwrites the existing tag.
 * - You can bind up to 20 tags to each instance.
 * - You can bind tags to up to 50 instances each time you call the operation.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Switches the backup mode of an ApsaraDB for MongoDB sharded cluster instance to the cluster backup mode. After the instance is switched to the cluster backup mode, the instance supports high-frequency backup.
 *
 * @description - The instance is an ApsaraDB for MongoDB sharded cluster instance that runs MongoDB 4.4 or later and uses enhanced SSDs (ESSDs) to store data.
 * - You can call the TransferClusterBackup operation only for instances that are created before October 19, 2023 to switch the instances to the cluster backup mode. Cloud disk-based sharded cluster instances that are created on or after October 19, 2023 are set to the cluster backup mode by default.
 *
 * @param request TransferClusterBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferClusterBackupResponse
 */
TransferClusterBackupResponse Client::transferClusterBackupWithOptions(const TransferClusterBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferClusterBackup"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferClusterBackupResponse>();
}

/**
 * @summary Switches the backup mode of an ApsaraDB for MongoDB sharded cluster instance to the cluster backup mode. After the instance is switched to the cluster backup mode, the instance supports high-frequency backup.
 *
 * @description - The instance is an ApsaraDB for MongoDB sharded cluster instance that runs MongoDB 4.4 or later and uses enhanced SSDs (ESSDs) to store data.
 * - You can call the TransferClusterBackup operation only for instances that are created before October 19, 2023 to switch the instances to the cluster backup mode. Cloud disk-based sharded cluster instances that are created on or after October 19, 2023 are set to the cluster backup mode by default.
 *
 * @param request TransferClusterBackupRequest
 * @return TransferClusterBackupResponse
 */
TransferClusterBackupResponse Client::transferClusterBackup(const TransferClusterBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferClusterBackupWithOptions(request, runtime);
}

/**
 * @summary Transforms the billing method of an ApsaraDB for MongoDB database instance by converting a pay-as-you-go instance to an upfront subscription instance or a subscription instance to a pay-as-you-go instance.
 *
 * @description Ensure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * When you call this operation, the instance must meet the following requirements:
 * - The instance status is Running.
 * - The instance does not have unpaid orders for billing method transform.
 * - The instance type is not a legacy instance type (an instance type that is no longer available). For more information about legacy instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
 * > To change the billing method of an instance of a legacy instance type, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to change the instance type first.
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

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
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

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
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
    {"action" , "TransformInstanceChargeType"},
    {"version" , "2015-12-01"},
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
 * @summary Transforms the billing method of an ApsaraDB for MongoDB database instance by converting a pay-as-you-go instance to an upfront subscription instance or a subscription instance to a pay-as-you-go instance.
 *
 * @description Ensure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
 * When you call this operation, the instance must meet the following requirements:
 * - The instance status is Running.
 * - The instance does not have unpaid orders for billing method transform.
 * - The instance type is not a legacy instance type (an instance type that is no longer available). For more information about legacy instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
 * > To change the billing method of an instance of a legacy instance type, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to change the instance type first.
 *
 * @param request TransformInstanceChargeTypeRequest
 * @return TransformInstanceChargeTypeResponse
 */
TransformInstanceChargeTypeResponse Client::transformInstanceChargeType(const TransformInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of an ApsaraDB for MongoDB instance from pay-as-you-go to subscription.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * A subscription instance cannot be changed to a pay-as-you-go instance. To avoid wasting resources, proceed with caution.
 * Before you call this API operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is in the running state.
 * - The billing method of the instance is pay-as-you-go.
 * - The instance has no unpaid subscription orders.
 * - The instance type is available for purchase. For more information about unavailable instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
 * > To change the billing method of an instance whose instance type is no longer available to subscription, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to first change the instance type.
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

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformToPrePaid"},
    {"version" , "2015-12-01"},
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
 * @summary Changes the billing method of an ApsaraDB for MongoDB instance from pay-as-you-go to subscription.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
 * A subscription instance cannot be changed to a pay-as-you-go instance. To avoid wasting resources, proceed with caution.
 * Before you call this API operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
 * - The instance is in the running state.
 * - The billing method of the instance is pay-as-you-go.
 * - The instance has no unpaid subscription orders.
 * - The instance type is available for purchase. For more information about unavailable instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
 * > To change the billing method of an instance whose instance type is no longer available to subscription, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to first change the instance type.
 *
 * @param request TransformToPrePaidRequest
 * @return TransformToPrePaidResponse
 */
TransformToPrePaidResponse Client::transformToPrePaid(const TransformToPrePaidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformToPrePaidWithOptions(request, runtime);
}

/**
 * @summary Removes a tag if the tag is not added to another instance.
 *
 * @description >
 * - You can remove up to 20 tags at a time.
 * - If you remove a tag from all instances, the tag is automatically deleted.
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"version" , "2015-12-01"},
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
 * @summary Removes a tag if the tag is not added to another instance.
 *
 * @description >
 * - You can remove up to 20 tags at a time.
 * - If you remove a tag from all instances, the tag is automatically deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades the database version of an ApsaraDB for MongoDB instance.
 *
 * @description The instance must be in the running state when you call this operation.
 * > - The available database versions depend on the storage engine used by the instance. For more information, see [Upgrades of MongoDB major versions](https://help.aliyun.com/document_detail/398673.html). You can also call the [DescribeAvailableEngineVersion](https://help.aliyun.com/document_detail/141355.html) operation to query the available database versions.
 * >
 * > - You cannot downgrade the MongoDB version of an instance after you upgrade it.
 * >
 * > - The instance is automatically restarted for two to three times during the upgrade process. Make sure that you upgrade the instance during off-peak hours.
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersionWithOptions(const UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceEngineVersion"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceEngineVersionResponse>();
}

/**
 * @summary Upgrades the database version of an ApsaraDB for MongoDB instance.
 *
 * @description The instance must be in the running state when you call this operation.
 * > - The available database versions depend on the storage engine used by the instance. For more information, see [Upgrades of MongoDB major versions](https://help.aliyun.com/document_detail/398673.html). You can also call the [DescribeAvailableEngineVersion](https://help.aliyun.com/document_detail/141355.html) operation to query the available database versions.
 * >
 * > - You cannot downgrade the MongoDB version of an instance after you upgrade it.
 * >
 * > - The instance is automatically restarted for two to three times during the upgrade process. Make sure that you upgrade the instance during off-peak hours.
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceEngineVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of an ApsaraDB for MongoDB instance.
 *
 * @description When you call the UpgradeDBInstanceKernelVersion operation, the instance must be in the Running state.
 * > * The UpgradeDBInstanceKernelVersion operation is applicable to replica set and sharded cluster instances, but not to standalone instances.
 * > * The instance will be restarted once during the upgrade. Call this operation during off-peak hours.
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersionWithOptions(const UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceKernelVersion"},
    {"version" , "2015-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceKernelVersionResponse>();
}

/**
 * @summary Upgrades the minor version of an ApsaraDB for MongoDB instance.
 *
 * @description When you call the UpgradeDBInstanceKernelVersion operation, the instance must be in the Running state.
 * > * The UpgradeDBInstanceKernelVersion operation is applicable to replica set and sharded cluster instances, but not to standalone instances.
 * > * The instance will be restarted once during the upgrade. Call this operation during off-peak hours.
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dds20151201