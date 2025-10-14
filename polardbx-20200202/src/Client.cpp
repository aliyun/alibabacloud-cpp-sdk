#include <darabonba/Core.hpp>
#include <alibabacloud/Polardbx20200202.hpp>
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
using namespace AlibabaCloud::Polardbx20200202::Models;
namespace AlibabaCloud
{
namespace Polardbx20200202
{

AlibabaCloud::Polardbx20200202::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "polardbx.aliyuncs.com"},
    {"ap-northeast-2-pop" , "polardbx.aliyuncs.com"},
    {"ap-south-1" , "polardbx.aliyuncs.com"},
    {"ap-southeast-2" , "polardbx.aliyuncs.com"},
    {"ap-southeast-3" , "polardbx.aliyuncs.com"},
    {"ap-southeast-5" , "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-1" , "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "polardbx.aliyuncs.com"},
    {"cn-beijing-gov-1" , "polardbx.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "polardbx.aliyuncs.com"},
    {"cn-edge-1" , "polardbx.aliyuncs.com"},
    {"cn-fujian" , "polardbx.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-finance" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "polardbx.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "polardbx.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "polardbx.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "polardbx.aliyuncs.com"},
    {"cn-north-2-gov-1" , "polardbx.aliyuncs.com"},
    {"cn-qingdao-nebula" , "polardbx.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "polardbx.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "polardbx.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "polardbx.aliyuncs.com"},
    {"cn-shanghai-inner" , "polardbx.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "polardbx.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "polardbx.aliyuncs.com"},
    {"cn-shenzhen-inner" , "polardbx.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "polardbx.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "polardbx.aliyuncs.com"},
    {"cn-wuhan" , "polardbx.aliyuncs.com"},
    {"cn-wulanchabu" , "polardbx.aliyuncs.com"},
    {"cn-yushanfang" , "polardbx.aliyuncs.com"},
    {"cn-zhangbei" , "polardbx.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "polardbx.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "polardbx.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "polardbx.aliyuncs.com"},
    {"eu-central-1" , "polardbx.aliyuncs.com"},
    {"eu-west-1" , "polardbx.aliyuncs.com"},
    {"eu-west-1-oxs" , "polardbx.aliyuncs.com"},
    {"me-east-1" , "polardbx.aliyuncs.com"},
    {"rus-west-1-pop" , "polardbx.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("polardbx", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AlignStoragePrimaryAzoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlignStoragePrimaryAzoneResponse
 */
AlignStoragePrimaryAzoneResponse Client::alignStoragePrimaryAzoneWithOptions(const AlignStoragePrimaryAzoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStorageInstanceName()) {
    query["StorageInstanceName"] = request.storageInstanceName();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.switchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AlignStoragePrimaryAzone"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlignStoragePrimaryAzoneResponse>();
}

/**
 * @param request AlignStoragePrimaryAzoneRequest
 * @return AlignStoragePrimaryAzoneResponse
 */
AlignStoragePrimaryAzoneResponse Client::alignStoragePrimaryAzone(const AlignStoragePrimaryAzoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return alignStoragePrimaryAzoneWithOptions(request, runtime);
}

/**
 * @summary 开通冷存储
 *
 * @param request AllocateColdDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateColdDataVolumeResponse
 */
AllocateColdDataVolumeResponse Client::allocateColdDataVolumeWithOptions(const AllocateColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateColdDataVolume"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateColdDataVolumeResponse>();
}

/**
 * @summary 开通冷存储
 *
 * @param request AllocateColdDataVolumeRequest
 * @return AllocateColdDataVolumeResponse
 */
AllocateColdDataVolumeResponse Client::allocateColdDataVolume(const AllocateColdDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateColdDataVolumeWithOptions(request, runtime);
}

/**
 * @param request AllocateInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnectionWithOptions(const AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "AllocateInstancePublicConnection"},
    {"version" , "2020-02-02"},
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
 * @param request AllocateInstancePublicConnectionRequest
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @param request AttachColumnarInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachColumnarInstanceResponse
 */
AttachColumnarInstanceResponse Client::attachColumnarInstanceWithOptions(const AttachColumnarInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachColumnarInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachColumnarInstanceResponse>();
}

/**
 * @param request AttachColumnarInstanceRequest
 * @return AttachColumnarInstanceResponse
 */
AttachColumnarInstanceResponse Client::attachColumnarInstance(const AttachColumnarInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachColumnarInstanceWithOptions(request, runtime);
}

/**
 * @summary 取消主动运维任务
 *
 * @param request CancelActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasksWithOptions(const CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelActiveOperationTasksResponse>();
}

/**
 * @summary 取消主动运维任务
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 修改实例所在资源组.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-02-02"},
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
 * @summary 修改实例所在资源组.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @param request CheckCloudResourceAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorizedWithOptions(const CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.roleArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCloudResourceAuthorized"},
    {"version" , "2020-02-02"},
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
 * @param request CheckCloudResourceAuthorizedRequest
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

/**
 * @param request CheckSqlAuditSlsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSqlAuditSlsStatusResponse
 */
CheckSqlAuditSlsStatusResponse Client::checkSqlAuditSlsStatusWithOptions(const CheckSqlAuditSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSqlAuditSlsStatus"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSqlAuditSlsStatusResponse>();
}

/**
 * @param request CheckSqlAuditSlsStatusRequest
 * @return CheckSqlAuditSlsStatusResponse
 */
CheckSqlAuditSlsStatusResponse Client::checkSqlAuditSlsStatus(const CheckSqlAuditSlsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSqlAuditSlsStatusWithOptions(request, runtime);
}

/**
 * @summary 取消实例迁移
 *
 * @param request CloseEngineMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseEngineMigrationResponse
 */
CloseEngineMigrationResponse Client::closeEngineMigrationWithOptions(const CloseEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinueEnableBinlog()) {
    query["ContinueEnableBinlog"] = request.continueEnableBinlog();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseEngineMigration"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseEngineMigrationResponse>();
}

/**
 * @summary 取消实例迁移
 *
 * @param request CloseEngineMigrationRequest
 * @return CloseEngineMigrationResponse
 */
CloseEngineMigrationResponse Client::closeEngineMigration(const CloseEngineMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeEngineMigrationWithOptions(request, runtime);
}

/**
 * @summary 回滚切换时确认无连接
 *
 * @param request ConfirmNoConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmNoConnectionResponse
 */
ConfirmNoConnectionResponse Client::confirmNoConnectionWithOptions(const ConfirmNoConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmNoConnection"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmNoConnectionResponse>();
}

/**
 * @summary 回滚切换时确认无连接
 *
 * @param request ConfirmNoConnectionRequest
 * @return ConfirmNoConnectionResponse
 */
ConfirmNoConnectionResponse Client::confirmNoConnection(const ConfirmNoConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmNoConnectionWithOptions(request, runtime);
}

/**
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2020-02-02"},
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
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupType()) {
    query["BackupType"] = request.backupType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackup"},
    {"version" , "2020-02-02"},
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
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary 创建自定义endpoint
 *
 * @param request CreateCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomEndpointResponse
 */
CreateCustomEndpointResponse Client::createCustomEndpointWithOptions(const CreateCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNodeAutoEnter()) {
    query["NodeAutoEnter"] = request.nodeAutoEnter();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasNodeRole()) {
    query["NodeRole"] = request.nodeRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomEndpoint"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomEndpointResponse>();
}

/**
 * @summary 创建自定义endpoint
 *
 * @param request CreateCustomEndpointRequest
 * @return CreateCustomEndpointResponse
 */
CreateCustomEndpointResponse Client::createCustomEndpoint(const CreateCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomEndpointWithOptions(request, runtime);
}

/**
 * @param request CreateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDBWithOptions(const CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.accountPrivilege();
  }

  if (!!request.hasCharset()) {
    query["Charset"] = request.charset();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbDescription()) {
    query["DbDescription"] = request.dbDescription();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.storagePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDB"},
    {"version" , "2020-02-02"},
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
 * @param request CreateDBRequest
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDB(const CreateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param tmpReq CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceShrinkRequest request = CreateDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtraParams()) {
    request.setExtraParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extraParams(), "ExtraParams", "json"));
  }

  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.CNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.cnClass();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.DBNodeClass();
  }

  if (!!request.hasDBNodeCount()) {
    query["DBNodeCount"] = request.DBNodeCount();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.DNNodeCount();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.dnClass();
  }

  if (!!request.hasDnStorageSpace()) {
    query["DnStorageSpace"] = request.dnStorageSpace();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.engineVersion();
  }

  if (!!request.hasExtraParamsShrink()) {
    query["ExtraParams"] = request.extraParamsShrink();
  }

  if (!!request.hasIsColumnarReadDBInstance()) {
    query["IsColumnarReadDBInstance"] = request.isColumnarReadDBInstance();
  }

  if (!!request.hasIsReadDBInstance()) {
    query["IsReadDBInstance"] = request.isReadDBInstance();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPrimaryDBInstanceName()) {
    query["PrimaryDBInstanceName"] = request.primaryDBInstanceName();
  }

  if (!!request.hasPrimaryZone()) {
    query["PrimaryZone"] = request.primaryZone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecondaryZone()) {
    query["SecondaryZone"] = request.secondaryZone();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.series();
  }

  if (!!request.hasTertiaryZone()) {
    query["TertiaryZone"] = request.tertiaryZone();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.topologyType();
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
    {"action" , "CreateDBInstance"},
    {"version" , "2020-02-02"},
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
 * @summary 创建实例
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建评估升级的数据迁移任务
 *
 * @param request CreateDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataImportTaskResponse
 */
CreateDataImportTaskResponse Client::createDataImportTaskWithOptions(const CreateDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDstDb()) {
    query["DstDb"] = request.dstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.dstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.dstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.dstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSrcDb()) {
    query["SrcDb"] = request.srcDb();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.srcPassword();
  }

  if (!!request.hasSrcResId()) {
    query["SrcResId"] = request.srcResId();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.srcUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataImportTaskResponse>();
}

/**
 * @summary 创建评估升级的数据迁移任务
 *
 * @param request CreateDataImportTaskRequest
 * @return CreateDataImportTaskResponse
 */
CreateDataImportTaskResponse Client::createDataImportTask(const CreateDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary 创建GDN实例
 *
 * @param request CreateGdnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGdnInstanceResponse
 */
CreateGdnInstanceResponse Client::createGdnInstanceWithOptions(const CreateGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGdnMode()) {
    query["GdnMode"] = request.gdnMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRplConflictStrategy()) {
    query["RplConflictStrategy"] = request.rplConflictStrategy();
  }

  if (!!request.hasRplDmlStrategy()) {
    query["RplDmlStrategy"] = request.rplDmlStrategy();
  }

  if (!!request.hasRplSyncDdl()) {
    query["RplSyncDdl"] = request.rplSyncDdl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGdnInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGdnInstanceResponse>();
}

/**
 * @summary 创建GDN实例
 *
 * @param request CreateGdnInstanceRequest
 * @return CreateGdnInstanceResponse
 */
CreateGdnInstanceResponse Client::createGdnInstance(const CreateGdnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGdnInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建评估预检任务
 *
 * @param request CreateRplInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRplInspectionTaskResponse
 */
CreateRplInspectionTaskResponse Client::createRplInspectionTaskWithOptions(const CreateRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstDb()) {
    query["DstDb"] = request.dstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.dstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.dstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.dstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.srcPassword();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.srcUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRplInspectionTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRplInspectionTaskResponse>();
}

/**
 * @summary 创建评估预检任务
 *
 * @param request CreateRplInspectionTaskRequest
 * @return CreateRplInspectionTaskResponse
 */
CreateRplInspectionTaskResponse Client::createRplInspectionTask(const CreateRplInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRplInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary 创建评估升级的兼容性评估任务
 *
 * @param request CreateSQLEvaluateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSQLEvaluateTaskResponse
 */
CreateSQLEvaluateTaskResponse Client::createSQLEvaluateTaskWithOptions(const CreateSQLEvaluateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDstDb()) {
    query["DstDb"] = request.dstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.dstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.dstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.dstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskDesc()) {
    query["SlinkTaskDesc"] = request.slinkTaskDesc();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSrcDb()) {
    query["SrcDb"] = request.srcDb();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.srcPassword();
  }

  if (!!request.hasSrcResId()) {
    query["SrcResId"] = request.srcResId();
  }

  if (!!request.hasSrcResType()) {
    query["SrcResType"] = request.srcResType();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.srcUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSQLEvaluateTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSQLEvaluateTaskResponse>();
}

/**
 * @summary 创建评估升级的兼容性评估任务
 *
 * @param request CreateSQLEvaluateTaskRequest
 * @return CreateSQLEvaluateTaskResponse
 */
CreateSQLEvaluateTaskResponse Client::createSQLEvaluateTask(const CreateSQLEvaluateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSQLEvaluateTaskWithOptions(request, runtime);
}

/**
 * @summary 创建 PolarDB-X 存储资源池
 *
 * @param request CreateStoragePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStoragePoolResponse
 */
CreateStoragePoolResponse Client::createStoragePoolWithOptions(const CreateStoragePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStoragePoolDNList()) {
    query["StoragePoolDNList"] = request.storagePoolDNList();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.storagePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStoragePool"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStoragePoolResponse>();
}

/**
 * @summary 创建 PolarDB-X 存储资源池
 *
 * @param request CreateStoragePoolRequest
 * @return CreateStoragePoolResponse
 */
CreateStoragePoolResponse Client::createStoragePool(const CreateStoragePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStoragePoolWithOptions(request, runtime);
}

/**
 * @summary 创建评估升级的结构迁移任务
 *
 * @param request CreateStructureImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStructureImportTaskResponse
 */
CreateStructureImportTaskResponse Client::createStructureImportTaskWithOptions(const CreateStructureImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStructureImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStructureImportTaskResponse>();
}

/**
 * @summary 创建评估升级的结构迁移任务
 *
 * @param request CreateStructureImportTaskRequest
 * @return CreateStructureImportTaskResponse
 */
CreateStructureImportTaskResponse Client::createStructureImportTask(const CreateStructureImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStructureImportTaskWithOptions(request, runtime);
}

/**
 * @param request CreateSuperAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSuperAccountResponse
 */
CreateSuperAccountResponse Client::createSuperAccountWithOptions(const CreateSuperAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSuperAccount"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSuperAccountResponse>();
}

/**
 * @param request CreateSuperAccountRequest
 * @return CreateSuperAccountResponse
 */
CreateSuperAccountResponse Client::createSuperAccount(const CreateSuperAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSuperAccountWithOptions(request, runtime);
}

/**
 * @summary 创建标准版迁移到企业版的操作任务
 *
 * @param request CreateTransformOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTransformOperationResponse
 */
CreateTransformOperationResponse Client::createTransformOperationWithOptions(const CreateTransformOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.operation();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransformOperation"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransformOperationResponse>();
}

/**
 * @summary 创建标准版迁移到企业版的操作任务
 *
 * @param request CreateTransformOperationRequest
 * @return CreateTransformOperationResponse
 */
CreateTransformOperationResponse Client::createTransformOperation(const CreateTransformOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransformOperationWithOptions(request, runtime);
}

/**
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2020-02-02"},
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
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary 删除自定义endpoint
 *
 * @param request DeleteCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomEndpointResponse
 */
DeleteCustomEndpointResponse Client::deleteCustomEndpointWithOptions(const DeleteCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.customEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomEndpoint"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomEndpointResponse>();
}

/**
 * @summary 删除自定义endpoint
 *
 * @param request DeleteCustomEndpointRequest
 * @return DeleteCustomEndpointResponse
 */
DeleteCustomEndpointResponse Client::deleteCustomEndpoint(const DeleteCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomEndpointWithOptions(request, runtime);
}

/**
 * @param request DeleteDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDBWithOptions(const DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDB"},
    {"version" , "2020-02-02"},
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
 * @param request DeleteDBRequest
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDB(const DeleteDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBWithOptions(request, runtime);
}

/**
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2020-02-02"},
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
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除评估导入任务
 *
 * @param request DeleteEvaluateAndImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluateAndImportTaskResponse
 */
DeleteEvaluateAndImportTaskResponse Client::deleteEvaluateAndImportTaskWithOptions(const DeleteEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEvaluateAndImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEvaluateAndImportTaskResponse>();
}

/**
 * @summary 删除评估导入任务
 *
 * @param request DeleteEvaluateAndImportTaskRequest
 * @return DeleteEvaluateAndImportTaskResponse
 */
DeleteEvaluateAndImportTaskResponse Client::deleteEvaluateAndImportTask(const DeleteEvaluateAndImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEvaluateAndImportTaskWithOptions(request, runtime);
}

/**
 * @summary 删除GDN实例
 *
 * @param request DeleteGdnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGdnInstanceResponse
 */
DeleteGdnInstanceResponse Client::deleteGdnInstanceWithOptions(const DeleteGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGdnInstanceName()) {
    query["GdnInstanceName"] = request.gdnInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGdnInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGdnInstanceResponse>();
}

/**
 * @summary 删除GDN实例
 *
 * @param request DeleteGdnInstanceRequest
 * @return DeleteGdnInstanceResponse
 */
DeleteGdnInstanceResponse Client::deleteGdnInstance(const DeleteGdnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGdnInstanceWithOptions(request, runtime);
}

/**
 * @param request DescribeAccountListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountListResponse
 */
DescribeAccountListResponse Client::describeAccountListWithOptions(const DescribeAccountListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountListResponse>();
}

/**
 * @param request DescribeAccountListRequest
 * @return DescribeAccountListResponse
 */
DescribeAccountListResponse Client::describeAccountList(const DescribeAccountListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountListWithOptions(request, runtime);
}

/**
 * @summary 展示全局运维窗口配置
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConfWithOptions(const DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationMaintainConf"},
    {"version" , "2020-02-02"},
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
 * @summary 展示全局运维窗口配置
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary 获取主动运维任务数量
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCountWithOptions(const DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTaskCount"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskCountResponse>();
}

/**
 * @summary 获取主动运维任务数量
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskCountWithOptions(request, runtime);
}

/**
 * @summary 获取待执行自动运维任务列表
 *
 * @param request DescribeActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasksWithOptions(const DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTasks"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTasksResponse>();
}

/**
 * @summary 获取待执行自动运维任务列表
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 冷存储表列表
 *
 * @param request DescribeArchiveTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeArchiveTableListResponse
 */
DescribeArchiveTableListResponse Client::describeArchiveTableListWithOptions(const DescribeArchiveTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeArchiveTableList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeArchiveTableListResponse>();
}

/**
 * @summary 冷存储表列表
 *
 * @param request DescribeArchiveTableListRequest
 * @return DescribeArchiveTableListResponse
 */
DescribeArchiveTableListResponse Client::describeArchiveTableList(const DescribeArchiveTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeArchiveTableListWithOptions(request, runtime);
}

/**
 * @summary 获取已开启跨地域备份的地域
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegionsWithOptions(const DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableCrossRegions"},
    {"version" , "2020-02-02"},
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
 * @summary 获取已开启跨地域备份的地域
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegions(const DescribeAvailableCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableCrossRegionsWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 备份集详情
 *
 * @param request DescribeBackupSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetResponse
 */
DescribeBackupSetResponse Client::describeBackupSetWithOptions(const DescribeBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDestCrossRegion()) {
    query["DestCrossRegion"] = request.destCrossRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupSet"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupSetResponse>();
}

/**
 * @summary 备份集详情
 *
 * @param request DescribeBackupSetRequest
 * @return DescribeBackupSetResponse
 */
DescribeBackupSetResponse Client::describeBackupSet(const DescribeBackupSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupSetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetListResponse
 */
DescribeBackupSetListResponse Client::describeBackupSetListWithOptions(const DescribeBackupSetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupSetList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupSetListResponse>();
}

/**
 * @param request DescribeBackupSetListRequest
 * @return DescribeBackupSetListResponse
 */
DescribeBackupSetListResponse Client::describeBackupSetList(const DescribeBackupSetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetListWithOptions(request, runtime);
}

/**
 * @param request DescribeBinaryLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBinaryLogListResponse
 */
DescribeBinaryLogListResponse Client::describeBinaryLogListWithOptions(const DescribeBinaryLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
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
    {"action" , "DescribeBinaryLogList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBinaryLogListResponse>();
}

/**
 * @param request DescribeBinaryLogListRequest
 * @return DescribeBinaryLogListResponse
 */
DescribeBinaryLogListResponse Client::describeBinaryLogList(const DescribeBinaryLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBinaryLogListWithOptions(request, runtime);
}

/**
 * @summary 查询多流规格列表
 *
 * @param request DescribeCdcClassListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcClassListResponse
 */
DescribeCdcClassListResponse Client::describeCdcClassListWithOptions(const DescribeCdcClassListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdcClassList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdcClassListResponse>();
}

/**
 * @summary 查询多流规格列表
 *
 * @param request DescribeCdcClassListRequest
 * @return DescribeCdcClassListResponse
 */
DescribeCdcClassListResponse Client::describeCdcClassList(const DescribeCdcClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcClassListWithOptions(request, runtime);
}

/**
 * @summary 查询CDC信息
 *
 * @param request DescribeCdcInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcInfoResponse
 */
DescribeCdcInfoResponse Client::describeCdcInfoWithOptions(const DescribeCdcInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdcInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdcInfoResponse>();
}

/**
 * @summary 查询CDC信息
 *
 * @param request DescribeCdcInfoRequest
 * @return DescribeCdcInfoResponse
 */
DescribeCdcInfoResponse Client::describeCdcInfo(const DescribeCdcInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcInfoWithOptions(request, runtime);
}

/**
 * @summary 获取CDC版本列表
 *
 * @param request DescribeCdcVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcVersionListResponse
 */
DescribeCdcVersionListResponse Client::describeCdcVersionListWithOptions(const DescribeCdcVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdcVersionList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdcVersionListResponse>();
}

/**
 * @summary 获取CDC版本列表
 *
 * @param request DescribeCdcVersionListRequest
 * @return DescribeCdcVersionListResponse
 */
DescribeCdcVersionListResponse Client::describeCdcVersionList(const DescribeCdcVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcVersionListWithOptions(request, runtime);
}

/**
 * @param request DescribeCharacterSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCharacterSetResponse
 */
DescribeCharacterSetResponse Client::describeCharacterSetWithOptions(const DescribeCharacterSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCharacterSet"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCharacterSetResponse>();
}

/**
 * @param request DescribeCharacterSetRequest
 * @return DescribeCharacterSetResponse
 */
DescribeCharacterSetResponse Client::describeCharacterSet(const DescribeCharacterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCharacterSetWithOptions(request, runtime);
}

/**
 * @summary 冷存储基础信息
 *
 * @param request DescribeColdDataBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColdDataBasicInfoResponse
 */
DescribeColdDataBasicInfoResponse Client::describeColdDataBasicInfoWithOptions(const DescribeColdDataBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColdDataBasicInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColdDataBasicInfoResponse>();
}

/**
 * @summary 冷存储基础信息
 *
 * @param request DescribeColdDataBasicInfoRequest
 * @return DescribeColdDataBasicInfoResponse
 */
DescribeColdDataBasicInfoResponse Client::describeColdDataBasicInfo(const DescribeColdDataBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdDataBasicInfoWithOptions(request, runtime);
}

/**
 * @summary 查询列存规格列表
 *
 * @param request DescribeColumnarClassListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarClassListResponse
 */
DescribeColumnarClassListResponse Client::describeColumnarClassListWithOptions(const DescribeColumnarClassListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumnarClassList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnarClassListResponse>();
}

/**
 * @summary 查询列存规格列表
 *
 * @param request DescribeColumnarClassListRequest
 * @return DescribeColumnarClassListResponse
 */
DescribeColumnarClassListResponse Client::describeColumnarClassList(const DescribeColumnarClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarClassListWithOptions(request, runtime);
}

/**
 * @summary 查询Columnar信息
 *
 * @param request DescribeColumnarInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarInfoResponse
 */
DescribeColumnarInfoResponse Client::describeColumnarInfoWithOptions(const DescribeColumnarInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumnarInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnarInfoResponse>();
}

/**
 * @summary 查询Columnar信息
 *
 * @param request DescribeColumnarInfoRequest
 * @return DescribeColumnarInfoResponse
 */
DescribeColumnarInfoResponse Client::describeColumnarInfo(const DescribeColumnarInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarInfoWithOptions(request, runtime);
}

/**
 * @summary 获取Columnar版本列表
 *
 * @param request DescribeColumnarVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarVersionListResponse
 */
DescribeColumnarVersionListResponse Client::describeColumnarVersionListWithOptions(const DescribeColumnarVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumnarVersionList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnarVersionListResponse>();
}

/**
 * @summary 获取Columnar版本列表
 *
 * @param request DescribeColumnarVersionListRequest
 * @return DescribeColumnarVersionListResponse
 */
DescribeColumnarVersionListResponse Client::describeColumnarVersionList(const DescribeColumnarVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarVersionListWithOptions(request, runtime);
}

/**
 * @summary 查询PolarDB-X 实例指定组件的属性列表
 *
 * @param request DescribeComponentPropetiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentPropetiesResponse
 */
DescribeComponentPropetiesResponse Client::describeComponentPropetiesWithOptions(const DescribeComponentPropetiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.componentName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentPropeties"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentPropetiesResponse>();
}

/**
 * @summary 查询PolarDB-X 实例指定组件的属性列表
 *
 * @param request DescribeComponentPropetiesRequest
 * @return DescribeComponentPropetiesResponse
 */
DescribeComponentPropetiesResponse Client::describeComponentPropeties(const DescribeComponentPropetiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentPropetiesWithOptions(request, runtime);
}

/**
 * @summary 查询自定义连接信息
 *
 * @param request DescribeCustomEndpointListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEndpointListResponse
 */
DescribeCustomEndpointListResponse Client::describeCustomEndpointListWithOptions(const DescribeCustomEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckDeleteCN()) {
    query["CheckDeleteCN"] = request.checkDeleteCN();
  }

  if (!!request.hasCustomEndpointIds()) {
    query["CustomEndpointIds"] = request.customEndpointIds();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomEndpointList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomEndpointListResponse>();
}

/**
 * @summary 查询自定义连接信息
 *
 * @param request DescribeCustomEndpointListRequest
 * @return DescribeCustomEndpointListResponse
 */
DescribeCustomEndpointListResponse Client::describeCustomEndpointList(const DescribeCustomEndpointListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomEndpointListWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2020-02-02"},
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
 * @summary 获取实例详情
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询实例配置信息
 *
 * @param request DescribeDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfigWithOptions(const DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.configName();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConfig"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConfigResponse>();
}

/**
 * @summary 查询实例配置信息
 *
 * @param request DescribeDBInstanceConfigRequest
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 查询实例的HA信息
 *
 * @param request DescribeDBInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceHAResponse
 */
DescribeDBInstanceHAResponse Client::describeDBInstanceHAWithOptions(const DescribeDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceHA"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceHAResponse>();
}

/**
 * @summary 查询实例的HA信息
 *
 * @param request DescribeDBInstanceHARequest
 * @return DescribeDBInstanceHAResponse
 */
DescribeDBInstanceHAResponse Client::describeDBInstanceHA(const DescribeDBInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceHAWithOptions(request, runtime);
}

/**
 * @param request DescribeDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSLWithOptions(const DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSSL"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeDBInstanceSSLRequest
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @param request DescribeDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDEWithOptions(const DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceTDE"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceTDEResponse>();
}

/**
 * @param request DescribeDBInstanceTDERequest
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary 查询实例拓扑
 *
 * @param request DescribeDBInstanceTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTopologyResponse
 */
DescribeDBInstanceTopologyResponse Client::describeDBInstanceTopologyWithOptions(const DescribeDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMinuteSimple()) {
    query["MinuteSimple"] = request.minuteSimple();
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
    {"action" , "DescribeDBInstanceTopology"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceTopologyResponse>();
}

/**
 * @summary 查询实例拓扑
 *
 * @param request DescribeDBInstanceTopologyRequest
 * @return DescribeDBInstanceTopologyResponse
 */
DescribeDBInstanceTopologyResponse Client::describeDBInstanceTopology(const DescribeDBInstanceTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTopologyWithOptions(request, runtime);
}

/**
 * @summary 通过Endpoint查询实例
 *
 * @param request DescribeDBInstanceViaEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceViaEndpointResponse
 */
DescribeDBInstanceViaEndpointResponse Client::describeDBInstanceViaEndpointWithOptions(const DescribeDBInstanceViaEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceViaEndpoint"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceViaEndpointResponse>();
}

/**
 * @summary 通过Endpoint查询实例
 *
 * @param request DescribeDBInstanceViaEndpointRequest
 * @return DescribeDBInstanceViaEndpointResponse
 */
DescribeDBInstanceViaEndpointResponse Client::describeDBInstanceViaEndpoint(const DescribeDBInstanceViaEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceViaEndpointWithOptions(request, runtime);
}

/**
 * @summary 获取PolarDB-X实例列表
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbVersion()) {
    query["DbVersion"] = request.dbVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMustHasCdc()) {
    query["MustHasCdc"] = request.mustHasCdc();
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

  if (!!request.hasSeries()) {
    query["Series"] = request.series();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2020-02-02"},
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
 * @summary 获取PolarDB-X实例列表
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary 性能监控数据接口
 *
 * @param request DescribeDBNodePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformanceWithOptions(const DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.characterType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
  }

  if (!!request.hasDBNodeRole()) {
    query["DBNodeRole"] = request.DBNodeRole();
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
    {"action" , "DescribeDBNodePerformance"},
    {"version" , "2020-02-02"},
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
 * @summary 性能监控数据接口
 *
 * @param request DescribeDBNodePerformanceRequest
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodePerformanceWithOptions(request, runtime);
}

/**
 * @summary 导入任务详情
 *
 * @param request DescribeDataImportTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataImportTaskInfoResponse
 */
DescribeDataImportTaskInfoResponse Client::describeDataImportTaskInfoWithOptions(const DescribeDataImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFailPageNumber()) {
    query["FailPageNumber"] = request.failPageNumber();
  }

  if (!!request.hasFailPageSize()) {
    query["FailPageSize"] = request.failPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSuccessPageNumber()) {
    query["SuccessPageNumber"] = request.successPageNumber();
  }

  if (!!request.hasSuccessPageSize()) {
    query["SuccessPageSize"] = request.successPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataImportTaskInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataImportTaskInfoResponse>();
}

/**
 * @summary 导入任务详情
 *
 * @param request DescribeDataImportTaskInfoRequest
 * @return DescribeDataImportTaskInfoResponse
 */
DescribeDataImportTaskInfoResponse Client::describeDataImportTaskInfo(const DescribeDataImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataImportTaskInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeDbListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbListResponse
 */
DescribeDbListResponse Client::describeDbListWithOptions(const DescribeDbListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "DescribeDbList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDbListResponse>();
}

/**
 * @param request DescribeDbListRequest
 * @return DescribeDbListResponse
 */
DescribeDbListResponse Client::describeDbList(const DescribeDbListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbListWithOptions(request, runtime);
}

/**
 * @param request DescribeDistributeTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDistributeTableListResponse
 */
DescribeDistributeTableListResponse Client::describeDistributeTableListWithOptions(const DescribeDistributeTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDistributeTableList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDistributeTableListResponse>();
}

/**
 * @param request DescribeDistributeTableListRequest
 * @return DescribeDistributeTableListResponse
 */
DescribeDistributeTableListResponse Client::describeDistributeTableList(const DescribeDistributeTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributeTableListWithOptions(request, runtime);
}

/**
 * @summary 获取已开启跨地域备份的地域
 *
 * @param request DescribeEnabledCrossRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnabledCrossRegionsResponse
 */
DescribeEnabledCrossRegionsResponse Client::describeEnabledCrossRegionsWithOptions(const DescribeEnabledCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnabledCrossRegions"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnabledCrossRegionsResponse>();
}

/**
 * @summary 获取已开启跨地域备份的地域
 *
 * @param request DescribeEnabledCrossRegionsRequest
 * @return DescribeEnabledCrossRegionsResponse
 */
DescribeEnabledCrossRegionsResponse Client::describeEnabledCrossRegions(const DescribeEnabledCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnabledCrossRegionsWithOptions(request, runtime);
}

/**
 * @summary 查询单个评估迁移任务详情
 *
 * @param request DescribeEvaluateAndImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEvaluateAndImportTaskResponse
 */
DescribeEvaluateAndImportTaskResponse Client::describeEvaluateAndImportTaskWithOptions(const DescribeEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvaluateAndImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEvaluateAndImportTaskResponse>();
}

/**
 * @summary 查询单个评估迁移任务详情
 *
 * @param request DescribeEvaluateAndImportTaskRequest
 * @return DescribeEvaluateAndImportTaskResponse
 */
DescribeEvaluateAndImportTaskResponse Client::describeEvaluateAndImportTask(const DescribeEvaluateAndImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEvaluateAndImportTaskWithOptions(request, runtime);
}

/**
 * @summary 请求评估导入任务列表
 *
 * @param request DescribeEvaluateAndImportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEvaluateAndImportTasksResponse
 */
DescribeEvaluateAndImportTasksResponse Client::describeEvaluateAndImportTasksWithOptions(const DescribeEvaluateAndImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DescribeEvaluateAndImportTasks"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEvaluateAndImportTasksResponse>();
}

/**
 * @summary 请求评估导入任务列表
 *
 * @param request DescribeEvaluateAndImportTasksRequest
 * @return DescribeEvaluateAndImportTasksResponse
 */
DescribeEvaluateAndImportTasksResponse Client::describeEvaluateAndImportTasks(const DescribeEvaluateAndImportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEvaluateAndImportTasksWithOptions(request, runtime);
}

/**
 * @summary 历史事件
 *
 * @param request DescribeEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvents"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsResponse>();
}

/**
 * @summary 历史事件
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary 获取GDN实例列表
 *
 * @param request DescribeGdnInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGdnInstancesResponse
 */
DescribeGdnInstancesResponse Client::describeGdnInstancesWithOptions(const DescribeGdnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterType()) {
    query["FilterType"] = request.filterType();
  }

  if (!!request.hasFilterValue()) {
    query["FilterValue"] = request.filterValue();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.GDNId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
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
    {"action" , "DescribeGdnInstances"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGdnInstancesResponse>();
}

/**
 * @summary 获取GDN实例列表
 *
 * @param request DescribeGdnInstancesRequest
 * @return DescribeGdnInstancesResponse
 */
DescribeGdnInstancesResponse Client::describeGdnInstances(const DescribeGdnInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGdnInstancesWithOptions(request, runtime);
}

/**
 * @summary 开放商业备份集
 *
 * @param request DescribeOpenBackupSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenBackupSetResponse
 */
DescribeOpenBackupSetResponse Client::describeOpenBackupSetWithOptions(const DescribeOpenBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpenBackupSet"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpenBackupSetResponse>();
}

/**
 * @summary 开放商业备份集
 *
 * @param request DescribeOpenBackupSetRequest
 * @return DescribeOpenBackupSetResponse
 */
DescribeOpenBackupSetResponse Client::describeOpenBackupSet(const DescribeOpenBackupSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenBackupSetWithOptions(request, runtime);
}

/**
 * @summary 查询参数模版列表
 *
 * @param request DescribeParameterGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroupsWithOptions(const DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterGroups"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupsResponse>();
}

/**
 * @summary 查询参数模版列表
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.engineVersion();
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
    {"action" , "DescribeParameterTemplates"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @param request DescribeParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParametersWithOptions(const DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
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
    {"action" , "DescribeParameters"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeParametersRequest
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary 查询数据节点列表
 *
 * @param request DescribePolarxDataNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarxDataNodesResponse
 */
DescribePolarxDataNodesResponse Client::describePolarxDataNodesWithOptions(const DescribePolarxDataNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolarxDataNodes"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolarxDataNodesResponse>();
}

/**
 * @summary 查询数据节点列表
 *
 * @param request DescribePolarxDataNodesRequest
 * @return DescribePolarxDataNodesResponse
 */
DescribePolarxDataNodesResponse Client::describePolarxDataNodes(const DescribePolarxDataNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarxDataNodesWithOptions(request, runtime);
}

/**
 * @param request DescribeRdsVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcsWithOptions(const DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVpcs"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeRdsVpcsRequest
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary 查询Vswitch信息
 *
 * @param request DescribeRdsVswitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVswitchesResponse
 */
DescribeRdsVswitchesResponse Client::describeRdsVswitchesWithOptions(const DescribeRdsVswitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"action" , "DescribeRdsVswitches"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVswitchesResponse>();
}

/**
 * @summary 查询Vswitch信息
 *
 * @param request DescribeRdsVswitchesRequest
 * @return DescribeRdsVswitchesResponse
 */
DescribeRdsVswitchesResponse Client::describeRdsVswitches(const DescribeRdsVswitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVswitchesWithOptions(request, runtime);
}

/**
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-02-02"},
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
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary 查询预检任务结果
 *
 * @param request DescribeRplInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRplInspectionTaskResponse
 */
DescribeRplInspectionTaskResponse Client::describeRplInspectionTaskWithOptions(const DescribeRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFailPageNumber()) {
    query["FailPageNumber"] = request.failPageNumber();
  }

  if (!!request.hasFailPageSize()) {
    query["FailPageSize"] = request.failPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSuccessPageNumber()) {
    query["SuccessPageNumber"] = request.successPageNumber();
  }

  if (!!request.hasSuccessPageSize()) {
    query["SuccessPageSize"] = request.successPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRplInspectionTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRplInspectionTaskResponse>();
}

/**
 * @summary 查询预检任务结果
 *
 * @param request DescribeRplInspectionTaskRequest
 * @return DescribeRplInspectionTaskResponse
 */
DescribeRplInspectionTaskResponse Client::describeRplInspectionTask(const DescribeRplInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRplInspectionTaskWithOptions(request, runtime);
}

/**
 * @param request DescribeScaleOutMigrateTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScaleOutMigrateTaskListResponse
 */
DescribeScaleOutMigrateTaskListResponse Client::describeScaleOutMigrateTaskListWithOptions(const DescribeScaleOutMigrateTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "DescribeScaleOutMigrateTaskList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScaleOutMigrateTaskListResponse>();
}

/**
 * @param request DescribeScaleOutMigrateTaskListRequest
 * @return DescribeScaleOutMigrateTaskListResponse
 */
DescribeScaleOutMigrateTaskListResponse Client::describeScaleOutMigrateTaskList(const DescribeScaleOutMigrateTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScaleOutMigrateTaskListWithOptions(request, runtime);
}

/**
 * @param request DescribeSecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIpsWithOptions(const DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIps"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeSecurityIpsRequest
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIps(const DescribeSecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIpsWithOptions(request, runtime);
}

/**
 * @summary 查询 PolarDB-X 存储节点信息
 *
 * @param request DescribeShowStorageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeShowStorageInfoResponse
 */
DescribeShowStorageInfoResponse Client::describeShowStorageInfoWithOptions(const DescribeShowStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "DescribeShowStorageInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeShowStorageInfoResponse>();
}

/**
 * @summary 查询 PolarDB-X 存储节点信息
 *
 * @param request DescribeShowStorageInfoRequest
 * @return DescribeShowStorageInfoResponse
 */
DescribeShowStorageInfoResponse Client::describeShowStorageInfo(const DescribeShowStorageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeShowStorageInfoWithOptions(request, runtime);
}

/**
 * @summary 慢SQL明细
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.characterType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.DBNodeIds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
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
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2020-02-02"},
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
 * @summary 慢SQL明细
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @param request DescribeSqlAuditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlAuditInfoResponse
 */
DescribeSqlAuditInfoResponse Client::describeSqlAuditInfoWithOptions(const DescribeSqlAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.auditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.auditAccountPassword();
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
    {"action" , "DescribeSqlAuditInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlAuditInfoResponse>();
}

/**
 * @param request DescribeSqlAuditInfoRequest
 * @return DescribeSqlAuditInfoResponse
 */
DescribeSqlAuditInfoResponse Client::describeSqlAuditInfo(const DescribeSqlAuditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlAuditInfoWithOptions(request, runtime);
}

/**
 * @summary SQL闪回任务列表查询
 *
 * @param request DescribeSqlFlashbackTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlFlashbackTaskListResponse
 */
DescribeSqlFlashbackTaskListResponse Client::describeSqlFlashbackTaskListWithOptions(const DescribeSqlFlashbackTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.polardbxInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSqlFlashbackTaskList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlFlashbackTaskListResponse>();
}

/**
 * @summary SQL闪回任务列表查询
 *
 * @param request DescribeSqlFlashbackTaskListRequest
 * @return DescribeSqlFlashbackTaskListResponse
 */
DescribeSqlFlashbackTaskListResponse Client::describeSqlFlashbackTaskList(const DescribeSqlFlashbackTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlFlashbackTaskListWithOptions(request, runtime);
}

/**
 * @summary 查询 PolarDB-X 存储资源池信息
 *
 * @param request DescribeStoragePoolInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStoragePoolInfoResponse
 */
DescribeStoragePoolInfoResponse Client::describeStoragePoolInfoWithOptions(const DescribeStoragePoolInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "DescribeStoragePoolInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStoragePoolInfoResponse>();
}

/**
 * @summary 查询 PolarDB-X 存储资源池信息
 *
 * @param request DescribeStoragePoolInfoRequest
 * @return DescribeStoragePoolInfoResponse
 */
DescribeStoragePoolInfoResponse Client::describeStoragePoolInfo(const DescribeStoragePoolInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStoragePoolInfoWithOptions(request, runtime);
}

/**
 * @summary 查询结构迁移任务结果
 *
 * @param request DescribeStructureImportTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStructureImportTaskInfoResponse
 */
DescribeStructureImportTaskInfoResponse Client::describeStructureImportTaskInfoWithOptions(const DescribeStructureImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStructureImportTaskInfo"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStructureImportTaskInfoResponse>();
}

/**
 * @summary 查询结构迁移任务结果
 *
 * @param request DescribeStructureImportTaskInfoRequest
 * @return DescribeStructureImportTaskInfoResponse
 */
DescribeStructureImportTaskInfoResponse Client::describeStructureImportTaskInfo(const DescribeStructureImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStructureImportTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 标签列表查询
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2020-02-02"},
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
 * @summary 标签列表查询
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @param request DescribeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
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
    {"action" , "DescribeTasks"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary 查询标准版迁移到企业版的任务状态
 *
 * @param request DescribeTransformStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransformStatusResponse
 */
DescribeTransformStatusResponse Client::describeTransformStatusWithOptions(const DescribeTransformStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasQueryReport()) {
    query["QueryReport"] = request.queryReport();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransformStatus"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransformStatusResponse>();
}

/**
 * @summary 查询标准版迁移到企业版的任务状态
 *
 * @param request DescribeTransformStatusRequest
 * @return DescribeTransformStatusResponse
 */
DescribeTransformStatusResponse Client::describeTransformStatus(const DescribeTransformStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransformStatusWithOptions(request, runtime);
}

/**
 * @param request DescribeUserEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyListWithOptions(const DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEncryptionKeyList"},
    {"version" , "2020-02-02"},
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
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @param request DisableRightsSeparationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRightsSeparationResponse
 */
DisableRightsSeparationResponse Client::disableRightsSeparationWithOptions(const DisableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbaAccountName()) {
    query["DbaAccountName"] = request.dbaAccountName();
  }

  if (!!request.hasDbaAccountPassword()) {
    query["DbaAccountPassword"] = request.dbaAccountPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableRightsSeparation"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableRightsSeparationResponse>();
}

/**
 * @param request DisableRightsSeparationRequest
 * @return DisableRightsSeparationResponse
 */
DisableRightsSeparationResponse Client::disableRightsSeparation(const DisableRightsSeparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRightsSeparationWithOptions(request, runtime);
}

/**
 * @param request DisableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAuditWithOptions(const DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.auditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.auditAccountPassword();
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
    {"action" , "DisableSqlAudit"},
    {"version" , "2020-02-02"},
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
 * @param request DisableSqlAuditRequest
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAudit(const DisableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSqlAuditWithOptions(request, runtime);
}

/**
 * @summary 开启三权分立
 *
 * @param request EnableRightsSeparationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRightsSeparationResponse
 */
EnableRightsSeparationResponse Client::enableRightsSeparationWithOptions(const EnableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountDescription()) {
    query["AuditAccountDescription"] = request.auditAccountDescription();
  }

  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.auditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.auditAccountPassword();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountDescription()) {
    query["SecurityAccountDescription"] = request.securityAccountDescription();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableRightsSeparation"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableRightsSeparationResponse>();
}

/**
 * @summary 开启三权分立
 *
 * @param request EnableRightsSeparationRequest
 * @return EnableRightsSeparationResponse
 */
EnableRightsSeparationResponse Client::enableRightsSeparation(const EnableRightsSeparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRightsSeparationWithOptions(request, runtime);
}

/**
 * @param request EnableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAuditWithOptions(const EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.auditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.auditAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasExpireAfterDays()) {
    query["ExpireAfterDays"] = request.expireAfterDays();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSqlAudit"},
    {"version" , "2020-02-02"},
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
 * @param request EnableSqlAuditRequest
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAudit(const EnableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSqlAuditWithOptions(request, runtime);
}

/**
 * @summary 查标签接口
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
    {"version" , "2020-02-02"},
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
 * @summary 查标签接口
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @param request MigrateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstanceWithOptions(const MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasPrimaryZoneId()) {
    query["PrimaryZoneId"] = request.primaryZoneId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.secondaryZoneId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  if (!!request.hasTertiaryZoneId()) {
    query["TertiaryZoneId"] = request.tertiaryZoneId();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.topologyType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateDBInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateDBInstanceResponse>();
}

/**
 * @param request MigrateDBInstanceRequest
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstance(const MigrateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDBInstanceWithOptions(request, runtime);
}

/**
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2020-02-02"},
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

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.accountPrivilege();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPrivilege"},
    {"version" , "2020-02-02"},
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
 * @summary 修改全局运维窗口信息
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConfWithOptions(const ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationMaintainConf"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationMaintainConfResponse>();
}

/**
 * @summary 修改全局运维窗口信息
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary 修改主动运维任务
 *
 * @param request ModifyActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasksWithOptions(const ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasImmediateStart()) {
    query["ImmediateStart"] = request.immediateStart();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2020-02-02"},
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
 * @summary 修改主动运维任务
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary CDC变配
 *
 * @description ****
 *
 * @param request ModifyCdcClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdcClassResponse
 */
ModifyCdcClassResponse Client::modifyCdcClassWithOptions(const ModifyCdcClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCDCNodeCount()) {
    query["CDCNodeCount"] = request.CDCNodeCount();
  }

  if (!!request.hasCdcClass()) {
    query["CdcClass"] = request.cdcClass();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdcClass"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdcClassResponse>();
}

/**
 * @summary CDC变配
 *
 * @description ****
 *
 * @param request ModifyCdcClassRequest
 * @return ModifyCdcClassResponse
 */
ModifyCdcClassResponse Client::modifyCdcClass(const ModifyCdcClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdcClassWithOptions(request, runtime);
}

/**
 * @summary Columnar变配
 *
 * @description ****
 *
 * @param request ModifyColumnarClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyColumnarClassResponse
 */
ModifyColumnarClassResponse Client::modifyColumnarClassWithOptions(const ModifyColumnarClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnarClass()) {
    query["ColumnarClass"] = request.columnarClass();
  }

  if (!!request.hasColumnarNodeCount()) {
    query["ColumnarNodeCount"] = request.columnarNodeCount();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyColumnarClass"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyColumnarClassResponse>();
}

/**
 * @summary Columnar变配
 *
 * @description ****
 *
 * @param request ModifyColumnarClassRequest
 * @return ModifyColumnarClassResponse
 */
ModifyColumnarClassResponse Client::modifyColumnarClass(const ModifyColumnarClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyColumnarClassWithOptions(request, runtime);
}

/**
 * @summary 修复自定连接基本信息
 *
 * @param request ModifyCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomEndpointResponse
 */
ModifyCustomEndpointResponse Client::modifyCustomEndpointWithOptions(const ModifyCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.customEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNodeAutoEnter()) {
    query["NodeAutoEnter"] = request.nodeAutoEnter();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasNodeRole()) {
    query["NodeRole"] = request.nodeRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomEndpoint"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomEndpointResponse>();
}

/**
 * @summary 修复自定连接基本信息
 *
 * @param request ModifyCustomEndpointRequest
 * @return ModifyCustomEndpointResponse
 */
ModifyCustomEndpointResponse Client::modifyCustomEndpoint(const ModifyCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomEndpointWithOptions(request, runtime);
}

/**
 * @summary 修复自定连接的网络信息
 *
 * @param request ModifyCustomEndpointNetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomEndpointNetResponse
 */
ModifyCustomEndpointNetResponse Client::modifyCustomEndpointNetWithOptions(const ModifyCustomEndpointNetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnPrefix()) {
    query["ConnPrefix"] = request.connPrefix();
  }

  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.customEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomEndpointNet"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomEndpointNetResponse>();
}

/**
 * @summary 修复自定连接的网络信息
 *
 * @param request ModifyCustomEndpointNetRequest
 * @return ModifyCustomEndpointNetResponse
 */
ModifyCustomEndpointNetResponse Client::modifyCustomEndpointNet(const ModifyCustomEndpointNetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomEndpointNetWithOptions(request, runtime);
}

/**
 * @param request ModifyDBInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClassWithOptions(const ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.cnClass();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.dnClass();
  }

  if (!!request.hasDnStorageSpace()) {
    query["DnStorageSpace"] = request.dnStorageSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSpecifiedDNScale()) {
    query["SpecifiedDNScale"] = request.specifiedDNScale();
  }

  if (!!request.hasSpecifiedDNSpecMapJson()) {
    query["SpecifiedDNSpecMapJson"] = request.specifiedDNSpecMapJson();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.switchTimeMode();
  }

  if (!!request.hasTargetDBInstanceClass()) {
    query["TargetDBInstanceClass"] = request.targetDBInstanceClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceClass"},
    {"version" , "2020-02-02"},
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
 * @param request ModifyDBInstanceClassRequest
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

/**
 * @summary 修改实例配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.configName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.configValue();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2020-02-02"},
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
 * @summary 修改实例配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 修改实例链接串
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasNewPort()) {
    query["NewPort"] = request.newPort();
  }

  if (!!request.hasNewPrefix()) {
    query["NewPrefix"] = request.newPrefix();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2020-02-02"},
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
 * @summary 修改实例链接串
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @param request ModifyDBInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescriptionWithOptions(const ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDescription"},
    {"version" , "2020-02-02"},
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
 * @param request ModifyDBInstanceDescriptionRequest
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTimeWithOptions(const ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.maintainTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMaintainTime"},
    {"version" , "2020-02-02"},
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
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @description ****
 *
 * @param request ModifyDBInstanceVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceVipResponse
 */
ModifyDBInstanceVipResponse Client::modifyDBInstanceVipWithOptions(const ModifyDBInstanceVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceVip"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceVipResponse>();
}

/**
 * @description ****
 *
 * @param request ModifyDBInstanceVipRequest
 * @return ModifyDBInstanceVipResponse
 */
ModifyDBInstanceVipResponse Client::modifyDBInstanceVip(const ModifyDBInstanceVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceVipWithOptions(request, runtime);
}

/**
 * @param request ModifyDatabaseDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseDescriptionResponse
 */
ModifyDatabaseDescriptionResponse Client::modifyDatabaseDescriptionWithOptions(const ModifyDatabaseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDbDescription()) {
    query["DbDescription"] = request.dbDescription();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseDescription"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseDescriptionResponse>();
}

/**
 * @param request ModifyDatabaseDescriptionRequest
 * @return ModifyDatabaseDescriptionResponse
 */
ModifyDatabaseDescriptionResponse Client::modifyDatabaseDescription(const ModifyDatabaseDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseDescriptionWithOptions(request, runtime);
}

/**
 * @summary ModifyEngineMigration
 *
 * @description ****
 *
 * @param request ModifyEngineMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEngineMigrationResponse
 */
ModifyEngineMigrationResponse Client::modifyEngineMigrationWithOptions(const ModifyEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStrings()) {
    query["ConnectionStrings"] = request.connectionStrings();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasNewMasterDBInstanceName()) {
    query["NewMasterDBInstanceName"] = request.newMasterDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.sourceDBInstanceName();
  }

  if (!!request.hasSwapConnectionString()) {
    query["SwapConnectionString"] = request.swapConnectionString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEngineMigration"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEngineMigrationResponse>();
}

/**
 * @summary ModifyEngineMigration
 *
 * @description ****
 *
 * @param request ModifyEngineMigrationRequest
 * @return ModifyEngineMigrationResponse
 */
ModifyEngineMigrationResponse Client::modifyEngineMigration(const ModifyEngineMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEngineMigrationWithOptions(request, runtime);
}

/**
 * @param request ModifyParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameterWithOptions(const ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.paramLevel();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.parameterGroupId();
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
    {"action" , "ModifyParameter"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParameterResponse>();
}

/**
 * @param request ModifyParameterRequest
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameter(const ModifyParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterWithOptions(request, runtime);
}

/**
 * @param request ModifySecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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
    {"action" , "ModifySecurityIps"},
    {"version" , "2020-02-02"},
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
 * @param request ModifySecurityIpsRequest
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary SQL闪回任务预检
 *
 * @param request PreCheckSqlFlashbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreCheckSqlFlashbackTaskResponse
 */
PreCheckSqlFlashbackTaskResponse Client::preCheckSqlFlashbackTaskWithOptions(const PreCheckSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.polardbxInstanceId();
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
    {"action" , "PreCheckSqlFlashbackTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreCheckSqlFlashbackTaskResponse>();
}

/**
 * @summary SQL闪回任务预检
 *
 * @param request PreCheckSqlFlashbackTaskRequest
 * @return PreCheckSqlFlashbackTaskResponse
 */
PreCheckSqlFlashbackTaskResponse Client::preCheckSqlFlashbackTask(const PreCheckSqlFlashbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preCheckSqlFlashbackTaskWithOptions(request, runtime);
}

/**
 * @summary 刷新评估升级任务的导入元数据
 *
 * @param request RefreshImportMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshImportMetaResponse
 */
RefreshImportMetaResponse Client::refreshImportMetaWithOptions(const RefreshImportMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshImportMeta"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshImportMetaResponse>();
}

/**
 * @summary 刷新评估升级任务的导入元数据
 *
 * @param request RefreshImportMetaRequest
 * @return RefreshImportMetaResponse
 */
RefreshImportMetaResponse Client::refreshImportMeta(const RefreshImportMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshImportMetaWithOptions(request, runtime);
}

/**
 * @summary 关闭冷存储
 *
 * @param request ReleaseColdDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseColdDataVolumeResponse
 */
ReleaseColdDataVolumeResponse Client::releaseColdDataVolumeWithOptions(const ReleaseColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseColdDataVolume"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseColdDataVolumeResponse>();
}

/**
 * @summary 关闭冷存储
 *
 * @param request ReleaseColdDataVolumeRequest
 * @return ReleaseColdDataVolumeResponse
 */
ReleaseColdDataVolumeResponse Client::releaseColdDataVolume(const ReleaseColdDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseColdDataVolumeWithOptions(request, runtime);
}

/**
 * @param request ReleaseInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnectionWithOptions(const ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.currentConnectionString();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstancePublicConnection"},
    {"version" , "2020-02-02"},
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
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
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
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2020-02-02"},
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
 * @description ****
 *
 * @param request ResetAccountPasswordRestrictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordRestrictResponse
 */
ResetAccountPasswordRestrictResponse Client::resetAccountPasswordRestrictWithOptions(const ResetAccountPasswordRestrictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.securityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.securityAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPasswordRestrict"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordRestrictResponse>();
}

/**
 * @description ****
 *
 * @param request ResetAccountPasswordRestrictRequest
 * @return ResetAccountPasswordRestrictResponse
 */
ResetAccountPasswordRestrictResponse Client::resetAccountPasswordRestrict(const ResetAccountPasswordRestrictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordRestrictWithOptions(request, runtime);
}

/**
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2020-02-02"},
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
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 重启数据导入任务
 *
 * @param request RestartDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDataImportTaskResponse
 */
RestartDataImportTaskResponse Client::restartDataImportTaskWithOptions(const RestartDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDataImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDataImportTaskResponse>();
}

/**
 * @summary 重启数据导入任务
 *
 * @param request RestartDataImportTaskRequest
 * @return RestartDataImportTaskResponse
 */
RestartDataImportTaskResponse Client::restartDataImportTask(const RestartDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary 跳过评估迁移的当前步骤
 *
 * @param request SkipCurrentStepRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipCurrentStepResponse
 */
SkipCurrentStepResponse Client::skipCurrentStepWithOptions(const SkipCurrentStepRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentStep()) {
    query["CurrentStep"] = request.currentStep();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipCurrentStep"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipCurrentStepResponse>();
}

/**
 * @summary 跳过评估迁移的当前步骤
 *
 * @param request SkipCurrentStepRequest
 * @return SkipCurrentStepResponse
 */
SkipCurrentStepResponse Client::skipCurrentStep(const SkipCurrentStepRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipCurrentStepWithOptions(request, runtime);
}

/**
 * @summary 开始评估迁移切换
 *
 * @param request StartSwitchDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSwitchDatabaseResponse
 */
StartSwitchDatabaseResponse Client::startSwitchDatabaseWithOptions(const StartSwitchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDstMainConnectString()) {
    query["DstMainConnectString"] = request.dstMainConnectString();
  }

  if (!!request.hasDstMainPort()) {
    query["DstMainPort"] = request.dstMainPort();
  }

  if (!!request.hasIsModifyEndpoint()) {
    query["IsModifyEndpoint"] = request.isModifyEndpoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  if (!!request.hasSrcMainConnectString()) {
    query["SrcMainConnectString"] = request.srcMainConnectString();
  }

  if (!!request.hasSrcMainPort()) {
    query["SrcMainPort"] = request.srcMainPort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSwitchDatabase"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSwitchDatabaseResponse>();
}

/**
 * @summary 开始评估迁移切换
 *
 * @param request StartSwitchDatabaseRequest
 * @return StartSwitchDatabaseResponse
 */
StartSwitchDatabaseResponse Client::startSwitchDatabase(const StartSwitchDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSwitchDatabaseWithOptions(request, runtime);
}

/**
 * @summary 暂停数据导入任务
 *
 * @param request StopDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDataImportTaskResponse
 */
StopDataImportTaskResponse Client::stopDataImportTaskWithOptions(const StopDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.slinkTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDataImportTask"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDataImportTaskResponse>();
}

/**
 * @summary 暂停数据导入任务
 *
 * @param request StopDataImportTaskRequest
 * @return StopDataImportTaskResponse
 */
StopDataImportTaskResponse Client::stopDataImportTask(const StopDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary 提交SQL闪回任务
 *
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

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.polardbxInstanceId();
  }

  if (!!request.hasRecallRestoreType()) {
    query["RecallRestoreType"] = request.recallRestoreType();
  }

  if (!!request.hasRecallType()) {
    query["RecallType"] = request.recallType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"version" , "2020-02-02"},
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
 * @summary 提交SQL闪回任务
 *
 * @param request SubmitSqlFlashbackTaskRequest
 * @return SubmitSqlFlashbackTaskResponse
 */
SubmitSqlFlashbackTaskResponse Client::submitSqlFlashbackTask(const SubmitSqlFlashbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSqlFlashbackTaskWithOptions(request, runtime);
}

/**
 * @param request SwitchDBInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHAWithOptions(const SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
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

  if (!!request.hasTargetPrimaryAzoneId()) {
    query["TargetPrimaryAzoneId"] = request.targetPrimaryAzoneId();
  }

  if (!!request.hasTargetPrimaryRegionId()) {
    query["TargetPrimaryRegionId"] = request.targetPrimaryRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceHA"},
    {"version" , "2020-02-02"},
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
 * @param request SwitchDBInstanceHARequest
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceHAWithOptions(request, runtime);
}

/**
 * @summary GDN主备切换
 *
 * @param request SwitchGdnMemberRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchGdnMemberRoleResponse
 */
SwitchGdnMemberRoleResponse Client::switchGdnMemberRoleWithOptions(const SwitchGdnMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  if (!!request.hasTaskTimeout()) {
    query["TaskTimeout"] = request.taskTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchGdnMemberRole"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchGdnMemberRoleResponse>();
}

/**
 * @summary GDN主备切换
 *
 * @param request SwitchGdnMemberRoleRequest
 * @return SwitchGdnMemberRoleResponse
 */
SwitchGdnMemberRoleResponse Client::switchGdnMemberRole(const SwitchGdnMemberRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchGdnMemberRoleWithOptions(request, runtime);
}

/**
 * @summary 打标签接口
 *
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
    {"version" , "2020-02-02"},
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
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 删标签接口
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
    {"version" , "2020-02-02"},
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
 * @summary 删标签接口
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @param request UpdateBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicyWithOptions(const UpdateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.backupPeriod();
  }

  if (!!request.hasBackupPlanBegin()) {
    query["BackupPlanBegin"] = request.backupPlanBegin();
  }

  if (!!request.hasBackupSetRetention()) {
    query["BackupSetRetention"] = request.backupSetRetention();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.backupType();
  }

  if (!!request.hasBackupWay()) {
    query["BackupWay"] = request.backupWay();
  }

  if (!!request.hasColdDataBackupInterval()) {
    query["ColdDataBackupInterval"] = request.coldDataBackupInterval();
  }

  if (!!request.hasColdDataBackupRetention()) {
    query["ColdDataBackupRetention"] = request.coldDataBackupRetention();
  }

  if (!!request.hasCrossRegionDataBackupRetention()) {
    query["CrossRegionDataBackupRetention"] = request.crossRegionDataBackupRetention();
  }

  if (!!request.hasCrossRegionLogBackupRetention()) {
    query["CrossRegionLogBackupRetention"] = request.crossRegionLogBackupRetention();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDestCrossRegion()) {
    query["DestCrossRegion"] = request.destCrossRegion();
  }

  if (!!request.hasForceCleanOnHighSpaceUsage()) {
    query["ForceCleanOnHighSpaceUsage"] = request.forceCleanOnHighSpaceUsage();
  }

  if (!!request.hasIsCrossRegionDataBackupEnabled()) {
    query["IsCrossRegionDataBackupEnabled"] = request.isCrossRegionDataBackupEnabled();
  }

  if (!!request.hasIsCrossRegionLogBackupEnabled()) {
    query["IsCrossRegionLogBackupEnabled"] = request.isCrossRegionLogBackupEnabled();
  }

  if (!!request.hasIsEnabled()) {
    query["IsEnabled"] = request.isEnabled();
  }

  if (!!request.hasLocalLogRetention()) {
    query["LocalLogRetention"] = request.localLogRetention();
  }

  if (!!request.hasLocalLogRetentionNumber()) {
    query["LocalLogRetentionNumber"] = request.localLogRetentionNumber();
  }

  if (!!request.hasLogLocalRetentionSpace()) {
    query["LogLocalRetentionSpace"] = request.logLocalRetentionSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemoveLogRetention()) {
    query["RemoveLogRetention"] = request.removeLogRetention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBackupPolicy"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBackupPolicyResponse>();
}

/**
 * @param request UpdateBackupPolicyRequest
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicy(const UpdateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBackupPolicyWithOptions(request, runtime);
}

/**
 * @param request UpdateDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDBInstanceSSLResponse
 */
UpdateDBInstanceSSLResponse Client::updateDBInstanceSSLWithOptions(const UpdateDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertCommonName()) {
    query["CertCommonName"] = request.certCommonName();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.enableSSL();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDBInstanceSSL"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDBInstanceSSLResponse>();
}

/**
 * @param request UpdateDBInstanceSSLRequest
 * @return UpdateDBInstanceSSLResponse
 */
UpdateDBInstanceSSLResponse Client::updateDBInstanceSSL(const UpdateDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @param request UpdateDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDBInstanceTDEResponse
 */
UpdateDBInstanceTDEResponse Client::updateDBInstanceTDEWithOptions(const UpdateDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.encryptionKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"action" , "UpdateDBInstanceTDE"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDBInstanceTDEResponse>();
}

/**
 * @param request UpdateDBInstanceTDERequest
 * @return UpdateDBInstanceTDEResponse
 */
UpdateDBInstanceTDEResponse Client::updateDBInstanceTDE(const UpdateDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary 扩缩容实例节点数
 *
 * @param request UpdatePolarDBXInstanceNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarDBXInstanceNodeResponse
 */
UpdatePolarDBXInstanceNodeResponse Client::updatePolarDBXInstanceNodeWithOptions(const UpdatePolarDBXInstanceNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddDNSpec()) {
    query["AddDNSpec"] = request.addDNSpec();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.CNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.DNNodeCount();
  }

  if (!!request.hasDbInstanceNodeCount()) {
    query["DbInstanceNodeCount"] = request.dbInstanceNodeCount();
  }

  if (!!request.hasDeleteDNIds()) {
    query["DeleteDNIds"] = request.deleteDNIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.storagePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolarDBXInstanceNode"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolarDBXInstanceNodeResponse>();
}

/**
 * @summary 扩缩容实例节点数
 *
 * @param request UpdatePolarDBXInstanceNodeRequest
 * @return UpdatePolarDBXInstanceNodeResponse
 */
UpdatePolarDBXInstanceNodeResponse Client::updatePolarDBXInstanceNode(const UpdatePolarDBXInstanceNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarDBXInstanceNodeWithOptions(request, runtime);
}

/**
 * @summary 升级CDC版本
 *
 * @param request UpgradeCDCVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeCDCVersionResponse
 */
UpgradeCDCVersionResponse Client::upgradeCDCVersionWithOptions(const UpgradeCDCVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdcDbVersion()) {
    query["CdcDbVersion"] = request.cdcDbVersion();
  }

  if (!!request.hasCdcMinorVersion()) {
    query["CdcMinorVersion"] = request.cdcMinorVersion();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeCDCVersion"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeCDCVersionResponse>();
}

/**
 * @summary 升级CDC版本
 *
 * @param request UpgradeCDCVersionRequest
 * @return UpgradeCDCVersionResponse
 */
UpgradeCDCVersionResponse Client::upgradeCDCVersion(const UpgradeCDCVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeCDCVersionWithOptions(request, runtime);
}

/**
 * @summary 升级Columnar版本
 *
 * @param request UpgradeColumnarVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeColumnarVersionResponse
 */
UpgradeColumnarVersionResponse Client::upgradeColumnarVersionWithOptions(const UpgradeColumnarVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnarVersion()) {
    query["ColumnarVersion"] = request.columnarVersion();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeColumnarVersion"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeColumnarVersionResponse>();
}

/**
 * @summary 升级Columnar版本
 *
 * @param request UpgradeColumnarVersionRequest
 * @return UpgradeColumnarVersionResponse
 */
UpgradeColumnarVersionResponse Client::upgradeColumnarVersion(const UpgradeColumnarVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeColumnarVersionWithOptions(request, runtime);
}

/**
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersionWithOptions(const UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasMinorVersion()) {
    query["MinorVersion"] = request.minorVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceKernelVersion"},
    {"version" , "2020-02-02"},
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
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Polardbx20200202