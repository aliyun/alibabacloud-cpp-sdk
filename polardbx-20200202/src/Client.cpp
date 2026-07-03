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
    {"rus-west-1-pop" , "polardbx.aliyuncs.com"},
    {"us-west-1" , "polardbx.us-west-1.aliyuncs.com"},
    {"us-east-1" , "polardbx.us-east-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "polardbx.cn-zhangjiakou.aliyuncs.com"},
    {"cn-shenzhen" , "polardbx.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "polardbx.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "polardbx.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "polardbx.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "polardbx.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "polardbx.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "polardbx.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "polardbx.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "polardbx.ap-southeast-1.aliyuncs.com"}
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
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStorageInstanceName()) {
    query["StorageInstanceName"] = request.getStorageInstanceName();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
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
 * @summary Calls the AllocateColdDataVolume operation.
 *
 * @param request AllocateColdDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateColdDataVolumeResponse
 */
AllocateColdDataVolumeResponse Client::allocateColdDataVolumeWithOptions(const AllocateColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the AllocateColdDataVolume operation.
 *
 * @param request AllocateColdDataVolumeRequest
 * @return AllocateColdDataVolumeResponse
 */
AllocateColdDataVolumeResponse Client::allocateColdDataVolume(const AllocateColdDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateColdDataVolumeWithOptions(request, runtime);
}

/**
 * @summary Calls the AllocateInstancePublicConnection operation to create a public IP address.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceClusterName()) {
    query["InstanceClusterName"] = request.getInstanceClusterName();
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
 * @summary Calls the AllocateInstancePublicConnection operation to create a public IP address.
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Enables a public domain name for a Mem0 instance.
 *
 * @description This operation is used to confirm that no active connections exist before a rollback task, to ensure operation safety.
 *
 * @param request AllocateMem0PublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateMem0PublicConnectionResponse
 */
AllocateMem0PublicConnectionResponse Client::allocateMem0PublicConnectionWithOptions(const AllocateMem0PublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateMem0PublicConnection"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateMem0PublicConnectionResponse>();
}

/**
 * @summary Enables a public domain name for a Mem0 instance.
 *
 * @description This operation is used to confirm that no active connections exist before a rollback task, to ensure operation safety.
 *
 * @param request AllocateMem0PublicConnectionRequest
 * @return AllocateMem0PublicConnectionResponse
 */
AllocateMem0PublicConnectionResponse Client::allocateMem0PublicConnection(const AllocateMem0PublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateMem0PublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Mounts a columnar instance to a specified primary database instance.
 *
 * @param request AttachColumnarInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachColumnarInstanceResponse
 */
AttachColumnarInstanceResponse Client::attachColumnarInstanceWithOptions(const AttachColumnarInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Mounts a columnar instance to a specified primary database instance.
 *
 * @param request AttachColumnarInstanceRequest
 * @return AttachColumnarInstanceResponse
 */
AttachColumnarInstanceResponse Client::attachColumnarInstance(const AttachColumnarInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachColumnarInstanceWithOptions(request, runtime);
}

/**
 * @summary Cancels active O&M event tasks by calling the CancelActiveOperationTasks operation.
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
 * @summary Cancels active O&M event tasks by calling the CancelActiveOperationTasks operation.
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group of an instance.
 *
 * @description Note: 
 * - The **endpoint** differs from other operations. Use **polardbx.aliyuncs.com** for Chinese mainland regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
 * - When testing this API operation, if a service unavailable error is returned, verify that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** to change the **endpoint** to **polardbx.aliyuncs.com**.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Modifies the resource group of an instance.
 *
 * @description Note: 
 * - The **endpoint** differs from other operations. Use **polardbx.aliyuncs.com** for Chinese mainland regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
 * - When testing this API operation, if a service unavailable error is returned, verify that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** to change the **endpoint** to **polardbx.aliyuncs.com**.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks whether a PolarDB-X instance is authorized to use Key Management Service (KMS).
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorizedWithOptions(const CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
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
 * @summary Checks whether a PolarDB-X instance is authorized to use Key Management Service (KMS).
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealthWithOptions(const CheckHealthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckHealth"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckHealthResponse>();
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealth(const CheckHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkHealthWithOptions(request, runtime);
}

/**
 * @summary Checks whether SQL audit logs of a specified database instance have been successfully connected to Simple Log Service (SLS).
 * After the call, the system returns the connection status between the SQL audit feature and SLS for the current instance, the project and Logstore configuration information, and whether synchronization is normal.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request CheckSqlAuditSlsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSqlAuditSlsStatusResponse
 */
CheckSqlAuditSlsStatusResponse Client::checkSqlAuditSlsStatusWithOptions(const CheckSqlAuditSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Checks whether SQL audit logs of a specified database instance have been successfully connected to Simple Log Service (SLS).
 * After the call, the system returns the connection status between the SQL audit feature and SLS for the current instance, the project and Logstore configuration information, and whether synchronization is normal.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request CheckSqlAuditSlsStatusRequest
 * @return CheckSqlAuditSlsStatusResponse
 */
CheckSqlAuditSlsStatusResponse Client::checkSqlAuditSlsStatus(const CheckSqlAuditSlsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSqlAuditSlsStatusWithOptions(request, runtime);
}

/**
 * @summary Closes the database engine migration process for a specified instance. After you start a data migration task from another database (such as a self-managed MySQL database or an ApsaraDB RDS instance) to PolarDB-X, you can call this operation to safely stop the migration process if you need to terminate or clean up the migration state.
 *
 * @param request CloseEngineMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseEngineMigrationResponse
 */
CloseEngineMigrationResponse Client::closeEngineMigrationWithOptions(const CloseEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContinueEnableBinlog()) {
    query["ContinueEnableBinlog"] = request.getContinueEnableBinlog();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Closes the database engine migration process for a specified instance. After you start a data migration task from another database (such as a self-managed MySQL database or an ApsaraDB RDS instance) to PolarDB-X, you can call this operation to safely stop the migration process if you need to terminate or clean up the migration state.
 *
 * @param request CloseEngineMigrationRequest
 * @return CloseEngineMigrationResponse
 */
CloseEngineMigrationResponse Client::closeEngineMigration(const CloseEngineMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeEngineMigrationWithOptions(request, runtime);
}

/**
 * @summary Confirms that no active connections exist before performing a rollback switchover.
 *
 * @description Confirms that no active connections exist before a rollback task to ensure operation safety.
 *
 * @param request ConfirmNoConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmNoConnectionResponse
 */
ConfirmNoConnectionResponse Client::confirmNoConnectionWithOptions(const ConfirmNoConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Confirms that no active connections exist before performing a rollback switchover.
 *
 * @description Confirms that no active connections exist before a rollback task to ensure operation safety.
 *
 * @param request ConfirmNoConnectionRequest
 * @return ConfirmNoConnectionResponse
 */
ConfirmNoConnectionResponse Client::confirmNoConnection(const ConfirmNoConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmNoConnectionWithOptions(request, runtime);
}

/**
 * @summary Creates an account by calling the CreateAccount operation.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Creates an account by calling the CreateAccount operation.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateBackup operation to create a backup.
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the CreateBackup operation to create a backup.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates a custom endpoint for a database instance.
 *
 * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html)..
 *
 * @param request CreateCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomEndpointResponse
 */
CreateCustomEndpointResponse Client::createCustomEndpointWithOptions(const CreateCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNodeAutoEnter()) {
    query["NodeAutoEnter"] = request.getNodeAutoEnter();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasNodeRole()) {
    query["NodeRole"] = request.getNodeRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates a custom endpoint for a database instance.
 *
 * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html)..
 *
 * @param request CreateCustomEndpointRequest
 * @return CreateCustomEndpointResponse
 */
CreateCustomEndpointResponse Client::createCustomEndpoint(const CreateCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a database by calling the CreateDB operation.
 *
 * @param request CreateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDBWithOptions(const CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasCharset()) {
    query["Charset"] = request.getCharset();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbDescription()) {
    query["DbDescription"] = request.getDbDescription();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.getStoragePoolName();
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
 * @summary Creates a database by calling the CreateDB operation.
 *
 * @param request CreateDBRequest
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDB(const CreateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateDBInstance operation to create a PolarDB-X instance.
 *
 * @description ****
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
    request.setExtraParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtraParams(), "ExtraParams", "json"));
  }

  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.getCNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.getCnClass();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasDBNodeCount()) {
    query["DBNodeCount"] = request.getDBNodeCount();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.getDNNodeCount();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.getDnClass();
  }

  if (!!request.hasDnStorageSpace()) {
    query["DnStorageSpace"] = request.getDnStorageSpace();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExtraParamsShrink()) {
    query["ExtraParams"] = request.getExtraParamsShrink();
  }

  if (!!request.hasIsColumnarReadDBInstance()) {
    query["IsColumnarReadDBInstance"] = request.getIsColumnarReadDBInstance();
  }

  if (!!request.hasIsReadDBInstance()) {
    query["IsReadDBInstance"] = request.getIsReadDBInstance();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasOriginMinorVersion()) {
    query["OriginMinorVersion"] = request.getOriginMinorVersion();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrimaryDBInstanceName()) {
    query["PrimaryDBInstanceName"] = request.getPrimaryDBInstanceName();
  }

  if (!!request.hasPrimaryZone()) {
    query["PrimaryZone"] = request.getPrimaryZone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecondaryZone()) {
    query["SecondaryZone"] = request.getSecondaryZone();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.getSeries();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTertiaryZone()) {
    query["TertiaryZone"] = request.getTertiaryZone();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.getTopologyType();
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
 * @summary Calls the CreateDBInstance operation to create a PolarDB-X instance.
 *
 * @description ****
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a data import task to import external data files, such as SQL scripts and CSV files, into a target database instance.
 *
 * @description Creates a data import task that imports SQL or CSV files stored in OSS or ECS, or directly provided files, into a target database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request CreateDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataImportTaskResponse
 */
CreateDataImportTaskResponse Client::createDataImportTaskWithOptions(const CreateDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDstDb()) {
    query["DstDb"] = request.getDstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.getDstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.getDstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.getDstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSrcDb()) {
    query["SrcDb"] = request.getSrcDb();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.getSrcPassword();
  }

  if (!!request.hasSrcResId()) {
    query["SrcResId"] = request.getSrcResId();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.getSrcUserName();
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
 * @summary Creates a data import task to import external data files, such as SQL scripts and CSV files, into a target database instance.
 *
 * @description Creates a data import task that imports SQL or CSV files stored in OSS or ECS, or directly provided files, into a target database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request CreateDataImportTaskRequest
 * @return CreateDataImportTaskResponse
 */
CreateDataImportTaskResponse Client::createDataImportTask(const CreateDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an AI gateway consumer for a PolarDB-X instance.
 *
 * @description ****.
 *
 * @param request CreateGatewayConsumerForPolarDBXRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayConsumerForPolarDBXResponse
 */
CreateGatewayConsumerForPolarDBXResponse Client::createGatewayConsumerForPolarDBXWithOptions(const CreateGatewayConsumerForPolarDBXRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayConsumerForPolarDBX"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayConsumerForPolarDBXResponse>();
}

/**
 * @summary Creates an AI gateway consumer for a PolarDB-X instance.
 *
 * @description ****.
 *
 * @param request CreateGatewayConsumerForPolarDBXRequest
 * @return CreateGatewayConsumerForPolarDBXResponse
 */
CreateGatewayConsumerForPolarDBXResponse Client::createGatewayConsumerForPolarDBX(const CreateGatewayConsumerForPolarDBXRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewayConsumerForPolarDBXWithOptions(request, runtime);
}

/**
 * @summary Creates a Global Database Network (GDN) instance.
 *
 * @param request CreateGdnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGdnInstanceResponse
 */
CreateGdnInstanceResponse Client::createGdnInstanceWithOptions(const CreateGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGdnMode()) {
    query["GdnMode"] = request.getGdnMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRplConflictStrategy()) {
    query["RplConflictStrategy"] = request.getRplConflictStrategy();
  }

  if (!!request.hasRplDmlStrategy()) {
    query["RplDmlStrategy"] = request.getRplDmlStrategy();
  }

  if (!!request.hasRplSyncDdl()) {
    query["RplSyncDdl"] = request.getRplSyncDdl();
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
 * @summary Creates a Global Database Network (GDN) instance.
 *
 * @param request CreateGdnInstanceRequest
 * @return CreateGdnInstanceResponse
 */
CreateGdnInstanceResponse Client::createGdnInstance(const CreateGdnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGdnInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建GDN从实例
 *
 * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
 *
 * @param request CreateGdnStandbyMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGdnStandbyMemberResponse
 */
CreateGdnStandbyMemberResponse Client::createGdnStandbyMemberWithOptions(const CreateGdnStandbyMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.getCNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloneInstanceName()) {
    query["CloneInstanceName"] = request.getCloneInstanceName();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.getCnClass();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.getDNNodeCount();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.getDnClass();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrimaryZone()) {
    query["PrimaryZone"] = request.getPrimaryZone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecondaryZone()) {
    query["SecondaryZone"] = request.getSecondaryZone();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.getSeries();
  }

  if (!!request.hasSourceInstanceRegion()) {
    query["SourceInstanceRegion"] = request.getSourceInstanceRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTertiaryZone()) {
    query["TertiaryZone"] = request.getTertiaryZone();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.getTopologyType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGdnStandbyMember"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGdnStandbyMemberResponse>();
}

/**
 * @summary 创建GDN从实例
 *
 * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
 *
 * @param request CreateGdnStandbyMemberRequest
 * @return CreateGdnStandbyMemberResponse
 */
CreateGdnStandbyMemberResponse Client::createGdnStandbyMember(const CreateGdnStandbyMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGdnStandbyMemberWithOptions(request, runtime);
}

/**
 * @summary Enable Memory Engine
 *
 * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
 *
 * @param request CreateMem0Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMem0Response
 */
CreateMem0Response Client::createMem0WithOptions(const CreateMem0Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMem0"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMem0Response>();
}

/**
 * @summary Enable Memory Engine
 *
 * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
 *
 * @param request CreateMem0Request
 * @return CreateMem0Response
 */
CreateMem0Response Client::createMem0(const CreateMem0Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMem0WithOptions(request, runtime);
}

/**
 * @summary Creates a Supabase instance.
 *
 * @description ****
 *
 * @param request CreatePolardbxSupabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolardbxSupabaseInstanceResponse
 */
CreatePolardbxSupabaseInstanceResponse Client::createPolardbxSupabaseInstanceWithOptions(const CreatePolardbxSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.getDashboardPassword();
  }

  if (!!request.hasDbInstanceDescription()) {
    query["DbInstanceDescription"] = request.getDbInstanceDescription();
  }

  if (!!request.hasDbPassword()) {
    query["DbPassword"] = request.getDbPassword();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTenantMode()) {
    query["TenantMode"] = request.getTenantMode();
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
    {"action" , "CreatePolardbxSupabaseInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolardbxSupabaseInstanceResponse>();
}

/**
 * @summary Creates a Supabase instance.
 *
 * @description ****
 *
 * @param request CreatePolardbxSupabaseInstanceRequest
 * @return CreatePolardbxSupabaseInstanceResponse
 */
CreatePolardbxSupabaseInstanceResponse Client::createPolardbxSupabaseInstance(const CreatePolardbxSupabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolardbxSupabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Performs a health check on the replication task during data migration.
 *
 * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for issues such as latency, replication interruption, or data inconsistency.
 *
 * @param request CreateRplInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRplInspectionTaskResponse
 */
CreateRplInspectionTaskResponse Client::createRplInspectionTaskWithOptions(const CreateRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstDb()) {
    query["DstDb"] = request.getDstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.getDstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.getDstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.getDstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.getSrcPassword();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.getSrcUserName();
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
 * @summary Performs a health check on the replication task during data migration.
 *
 * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for issues such as latency, replication interruption, or data inconsistency.
 *
 * @param request CreateRplInspectionTaskRequest
 * @return CreateRplInspectionTaskResponse
 */
CreateRplInspectionTaskResponse Client::createRplInspectionTask(const CreateRplInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRplInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a SQL statement assessment task. You submit SQL statements through this operation, and the system performs static analysis and risk assessment to identify execution risks and compatibility issues on the target database instance.
 *
 * @param request CreateSQLEvaluateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSQLEvaluateTaskResponse
 */
CreateSQLEvaluateTaskResponse Client::createSQLEvaluateTaskWithOptions(const CreateSQLEvaluateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDstDb()) {
    query["DstDb"] = request.getDstDb();
  }

  if (!!request.hasDstPassword()) {
    query["DstPassword"] = request.getDstPassword();
  }

  if (!!request.hasDstResId()) {
    query["DstResId"] = request.getDstResId();
  }

  if (!!request.hasDstUserName()) {
    query["DstUserName"] = request.getDstUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskDesc()) {
    query["SlinkTaskDesc"] = request.getSlinkTaskDesc();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSrcDb()) {
    query["SrcDb"] = request.getSrcDb();
  }

  if (!!request.hasSrcPassword()) {
    query["SrcPassword"] = request.getSrcPassword();
  }

  if (!!request.hasSrcResId()) {
    query["SrcResId"] = request.getSrcResId();
  }

  if (!!request.hasSrcResType()) {
    query["SrcResType"] = request.getSrcResType();
  }

  if (!!request.hasSrcUserName()) {
    query["SrcUserName"] = request.getSrcUserName();
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
 * @summary Creates a SQL statement assessment task. You submit SQL statements through this operation, and the system performs static analysis and risk assessment to identify execution risks and compatibility issues on the target database instance.
 *
 * @param request CreateSQLEvaluateTaskRequest
 * @return CreateSQLEvaluateTaskResponse
 */
CreateSQLEvaluateTaskResponse Client::createSQLEvaluateTask(const CreateSQLEvaluateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSQLEvaluateTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a resource storage pool.
 *
 * @param request CreateStoragePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStoragePoolResponse
 */
CreateStoragePoolResponse Client::createStoragePoolWithOptions(const CreateStoragePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStoragePoolDNList()) {
    query["StoragePoolDNList"] = request.getStoragePoolDNList();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.getStoragePoolName();
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
 * @summary Creates a resource storage pool.
 *
 * @param request CreateStoragePoolRequest
 * @return CreateStoragePoolResponse
 */
CreateStoragePoolResponse Client::createStoragePool(const CreateStoragePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStoragePoolWithOptions(request, runtime);
}

/**
 * @summary Creates a database schema import task. This operation allows you to import SQL script files or text content that contains DDL statements into a target database instance, and automatically performs schema operations such as creating tables, indexes, views, and stored procedures.
 *
 * @param request CreateStructureImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStructureImportTaskResponse
 */
CreateStructureImportTaskResponse Client::createStructureImportTaskWithOptions(const CreateStructureImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
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
 * @summary Creates a database schema import task. This operation allows you to import SQL script files or text content that contains DDL statements into a target database instance, and automatically performs schema operations such as creating tables, indexes, views, and stored procedures.
 *
 * @param request CreateStructureImportTaskRequest
 * @return CreateStructureImportTaskResponse
 */
CreateStructureImportTaskResponse Client::createStructureImportTask(const CreateStructureImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStructureImportTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a custom endpoint.
 *
 * @description ****
 *
 * @param request CreateSubCNInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCNInstanceResponse
 */
CreateSubCNInstanceResponse Client::createSubCNInstanceWithOptions(const CreateSubCNInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasIsAutoCreate()) {
    query["IsAutoCreate"] = request.getIsAutoCreate();
  }

  if (!!request.hasReadType()) {
    query["ReadType"] = request.getReadType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSubCNInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubCNInstanceResponse>();
}

/**
 * @summary Creates a custom endpoint.
 *
 * @description ****
 *
 * @param request CreateSubCNInstanceRequest
 * @return CreateSubCNInstanceResponse
 */
CreateSubCNInstanceResponse Client::createSubCNInstance(const CreateSubCNInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubCNInstanceWithOptions(request, runtime);
}

/**
 * @summary Enables the public endpoint for a Supabase instance.
 *
 * @description ****
 *
 * @param request CreateSupabaseNetTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSupabaseNetTypeResponse
 */
CreateSupabaseNetTypeResponse Client::createSupabaseNetTypeWithOptions(const CreateSupabaseNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSupabaseNetType"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSupabaseNetTypeResponse>();
}

/**
 * @summary Enables the public endpoint for a Supabase instance.
 *
 * @description ****
 *
 * @param request CreateSupabaseNetTypeRequest
 * @return CreateSupabaseNetTypeResponse
 */
CreateSupabaseNetTypeResponse Client::createSupabaseNetType(const CreateSupabaseNetTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSupabaseNetTypeWithOptions(request, runtime);
}

/**
 * @summary Creates a privileged user. Each instance can have only one privileged user.
 *
 * @param request CreateSuperAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSuperAccountResponse
 */
CreateSuperAccountResponse Client::createSuperAccountWithOptions(const CreateSuperAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates a privileged user. Each instance can have only one privileged user.
 *
 * @param request CreateSuperAccountRequest
 * @return CreateSuperAccountResponse
 */
CreateSuperAccountResponse Client::createSuperAccount(const CreateSuperAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSuperAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a conversion task to change a specific status or configuration of an instance.
 *
 * @param request CreateTransformOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTransformOperationResponse
 */
CreateTransformOperationResponse Client::createTransformOperationWithOptions(const CreateTransformOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates a conversion task to change a specific status or configuration of an instance.
 *
 * @param request CreateTransformOperationRequest
 * @return CreateTransformOperationResponse
 */
CreateTransformOperationResponse Client::createTransformOperation(const CreateTransformOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransformOperationWithOptions(request, runtime);
}

/**
 * @summary Deletes an account by calling the DeleteAccount operation.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Deletes an account by calling the DeleteAccount operation.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom endpoint domain name.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
 *
 * @param request DeleteCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomEndpointResponse
 */
DeleteCustomEndpointResponse Client::deleteCustomEndpointWithOptions(const DeleteCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.getCustomEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a custom endpoint domain name.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
 *
 * @param request DeleteCustomEndpointRequest
 * @return DeleteCustomEndpointResponse
 */
DeleteCustomEndpointResponse Client::deleteCustomEndpoint(const DeleteCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a database by calling the DeleteDB operation.
 *
 * @param request DeleteDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDBWithOptions(const DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a database by calling the DeleteDB operation.
 *
 * @param request DeleteDBRequest
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDB(const DeleteDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteDBInstance operation to delete an instance.
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DeleteDBInstance operation to delete an instance.
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes an evaluation import task.
 *
 * @description Deletes a created evaluation task and performs subsequent data import operations.
 *
 * @param request DeleteEvaluateAndImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluateAndImportTaskResponse
 */
DeleteEvaluateAndImportTaskResponse Client::deleteEvaluateAndImportTaskWithOptions(const DeleteEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Deletes an evaluation import task.
 *
 * @description Deletes a created evaluation task and performs subsequent data import operations.
 *
 * @param request DeleteEvaluateAndImportTaskRequest
 * @return DeleteEvaluateAndImportTaskResponse
 */
DeleteEvaluateAndImportTaskResponse Client::deleteEvaluateAndImportTask(const DeleteEvaluateAndImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEvaluateAndImportTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a global database network (GDN) instance.
 *
 * @param request DeleteGdnInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGdnInstanceResponse
 */
DeleteGdnInstanceResponse Client::deleteGdnInstanceWithOptions(const DeleteGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGdnInstanceName()) {
    query["GdnInstanceName"] = request.getGdnInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a global database network (GDN) instance.
 *
 * @param request DeleteGdnInstanceRequest
 * @return DeleteGdnInstanceResponse
 */
DeleteGdnInstanceResponse Client::deleteGdnInstance(const DeleteGdnInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGdnInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables the memory engine.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables the access entry for the domain name.
 *
 * @param request DeleteMem0Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMem0Response
 */
DeleteMem0Response Client::deleteMem0WithOptions(const DeleteMem0Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMem0"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMem0Response>();
}

/**
 * @summary Disables the memory engine.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables the access entry for the domain name.
 *
 * @param request DeleteMem0Request
 * @return DeleteMem0Response
 */
DeleteMem0Response Client::deleteMem0(const DeleteMem0Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMem0WithOptions(request, runtime);
}

/**
 * @summary Deletes a Supabase instance.
 *
 * @description ****
 *
 * @param request DeletePolardbxSupabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolardbxSupabaseInstanceResponse
 */
DeletePolardbxSupabaseInstanceResponse Client::deletePolardbxSupabaseInstanceWithOptions(const DeletePolardbxSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolardbxSupabaseInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolardbxSupabaseInstanceResponse>();
}

/**
 * @summary Deletes a Supabase instance.
 *
 * @description ****
 *
 * @param request DeletePolardbxSupabaseInstanceRequest
 * @return DeletePolardbxSupabaseInstanceResponse
 */
DeletePolardbxSupabaseInstanceResponse Client::deletePolardbxSupabaseInstance(const DeletePolardbxSupabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolardbxSupabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除自定义地址
 *
 * @description ****
 *
 * @param request DeleteSubCNInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubCNInstanceResponse
 */
DeleteSubCNInstanceResponse Client::deleteSubCNInstanceWithOptions(const DeleteSubCNInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceClusterName()) {
    query["InstanceClusterName"] = request.getInstanceClusterName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubCNInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubCNInstanceResponse>();
}

/**
 * @summary 删除自定义地址
 *
 * @description ****
 *
 * @param request DeleteSubCNInstanceRequest
 * @return DeleteSubCNInstanceResponse
 */
DeleteSubCNInstanceResponse Client::deleteSubCNInstance(const DeleteSubCNInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubCNInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of a Supabase instance.
 *
 * @description ****
 *
 * @param request DeleteSupabaseNetTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSupabaseNetTypeResponse
 */
DeleteSupabaseNetTypeResponse Client::deleteSupabaseNetTypeWithOptions(const DeleteSupabaseNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSupabaseNetType"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSupabaseNetTypeResponse>();
}

/**
 * @summary Releases the public endpoint of a Supabase instance.
 *
 * @description ****
 *
 * @param request DeleteSupabaseNetTypeRequest
 * @return DeleteSupabaseNetTypeResponse
 */
DeleteSupabaseNetTypeResponse Client::deleteSupabaseNetType(const DeleteSupabaseNetTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSupabaseNetTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of accounts by calling the DescribeAccountList operation.
 *
 * @param request DescribeAccountListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountListResponse
 */
DescribeAccountListResponse Client::describeAccountListWithOptions(const DescribeAccountListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of accounts by calling the DescribeAccountList operation.
 *
 * @param request DescribeAccountListRequest
 * @return DescribeAccountListResponse
 */
DescribeAccountListResponse Client::describeAccountList(const DescribeAccountListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeActiveOperationMaintainConf operation to display the O&M window configuration.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConfWithOptions(const DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeActiveOperationMaintainConf operation to display the O&M window configuration.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Retrieves the total number of O&M events.
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
 * @summary Retrieves the total number of O&M events.
 *
 * @param request DescribeActiveOperationTaskCountRequest
 * @return DescribeActiveOperationTaskCountResponse
 */
DescribeActiveOperationTaskCountResponse Client::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskCountWithOptions(request, runtime);
}

/**
 * @summary Queries O&M events by calling the DescribeActiveOperationTasks operation.
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
 * @summary Queries O&M events by calling the DescribeActiveOperationTasks operation.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Lists cold storage tables.
 *
 * @param request DescribeArchiveTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeArchiveTableListResponse
 */
DescribeArchiveTableListResponse Client::describeArchiveTableListWithOptions(const DescribeArchiveTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
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
 * @summary Lists cold storage tables.
 *
 * @param request DescribeArchiveTableListRequest
 * @return DescribeArchiveTableListResponse
 */
DescribeArchiveTableListResponse Client::describeArchiveTableList(const DescribeArchiveTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeArchiveTableListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of available regions that support cross-region operations, typically used for multi-region deployment or data replication scenarios.
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegionsWithOptions(const DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of available regions that support cross-region operations, typically used for multi-region deployment or data replication scenarios.
 *
 * @param request DescribeAvailableCrossRegionsRequest
 * @return DescribeAvailableCrossRegionsResponse
 */
DescribeAvailableCrossRegionsResponse Client::describeAvailableCrossRegions(const DescribeAvailableCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableCrossRegionsWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeBackupPolicy operation to query the backup settings of an instance.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeBackupPolicy operation to query the backup settings of an instance.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a backup set by calling the DescribeBackupSet operation.
 *
 * @param request DescribeBackupSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetResponse
 */
DescribeBackupSetResponse Client::describeBackupSetWithOptions(const DescribeBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDestCrossRegion()) {
    query["DestCrossRegion"] = request.getDestCrossRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the details of a backup set by calling the DescribeBackupSet operation.
 *
 * @param request DescribeBackupSetRequest
 * @return DescribeBackupSetResponse
 */
DescribeBackupSetResponse Client::describeBackupSet(const DescribeBackupSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeBackupSetList operation to query the list of backup sets.
 *
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
 * @summary Calls the DescribeBackupSetList operation to query the list of backup sets.
 *
 * @param request DescribeBackupSetListRequest
 * @return DescribeBackupSetListResponse
 */
DescribeBackupSetListResponse Client::describeBackupSetList(const DescribeBackupSetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeBinaryLogList operation to query binlog logs.
 *
 * @description - Binlog files are retained for 15 days by default.
 * - The returned log list includes all logs whose record end time is after the query start time and whose record start time is before the query end time.
 * - When the DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeBinaryLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBinaryLogListResponse
 */
DescribeBinaryLogListResponse Client::describeBinaryLogListWithOptions(const DescribeBinaryLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Calls the DescribeBinaryLogList operation to query binlog logs.
 *
 * @description - Binlog files are retained for 15 days by default.
 * - The returned log list includes all logs whose record end time is after the query start time and whose record start time is before the query end time.
 * - When the DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeBinaryLogListRequest
 * @return DescribeBinaryLogListResponse
 */
DescribeBinaryLogListResponse Client::describeBinaryLogList(const DescribeBinaryLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBinaryLogListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of instance specifications.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeCdcClassListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcClassListResponse
 */
DescribeCdcClassListResponse Client::describeCdcClassListWithOptions(const DescribeCdcClassListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of instance specifications.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeCdcClassListRequest
 * @return DescribeCdcClassListResponse
 */
DescribeCdcClassListResponse Client::describeCdcClassList(const DescribeCdcClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcClassListWithOptions(request, runtime);
}

/**
 * @summary Queries CDC information.
 *
 * @param request DescribeCdcInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcInfoResponse
 */
DescribeCdcInfoResponse Client::describeCdcInfoWithOptions(const DescribeCdcInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries CDC information.
 *
 * @param request DescribeCdcInfoRequest
 * @return DescribeCdcInfoResponse
 */
DescribeCdcInfoResponse Client::describeCdcInfo(const DescribeCdcInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of CDC versions.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - When DownloadLink is not NULL, you can download the backup file from this URL. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeCdcVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdcVersionListResponse
 */
DescribeCdcVersionListResponse Client::describeCdcVersionListWithOptions(const DescribeCdcVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the list of CDC versions.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - When DownloadLink is not NULL, you can download the backup file from this URL. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeCdcVersionListRequest
 * @return DescribeCdcVersionListResponse
 */
DescribeCdcVersionListResponse Client::describeCdcVersionList(const DescribeCdcVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdcVersionListWithOptions(request, runtime);
}

/**
 * @summary Invokes the DescribeCharacterSet operation to query the character set types supported by databases in a target instance.
 *
 * @param request DescribeCharacterSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCharacterSetResponse
 */
DescribeCharacterSetResponse Client::describeCharacterSetWithOptions(const DescribeCharacterSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Invokes the DescribeCharacterSet operation to query the character set types supported by databases in a target instance.
 *
 * @param request DescribeCharacterSetRequest
 * @return DescribeCharacterSetResponse
 */
DescribeCharacterSetResponse Client::describeCharacterSet(const DescribeCharacterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCharacterSetWithOptions(request, runtime);
}

/**
 * @summary The cold storage basic information.
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
 * @summary The cold storage basic information.
 *
 * @param request DescribeColdDataBasicInfoRequest
 * @return DescribeColdDataBasicInfoResponse
 */
DescribeColdDataBasicInfoResponse Client::describeColdDataBasicInfo(const DescribeColdDataBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdDataBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of column store specifications for an instance.
 *
 * @param request DescribeColumnarClassListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarClassListResponse
 */
DescribeColumnarClassListResponse Client::describeColumnarClassListWithOptions(const DescribeColumnarClassListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of column store specifications for an instance.
 *
 * @param request DescribeColumnarClassListRequest
 * @return DescribeColumnarClassListResponse
 */
DescribeColumnarClassListResponse Client::describeColumnarClassList(const DescribeColumnarClassListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarClassListWithOptions(request, runtime);
}

/**
 * @summary Queries column store information.
 *
 * @param request DescribeColumnarInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarInfoResponse
 */
DescribeColumnarInfoResponse Client::describeColumnarInfoWithOptions(const DescribeColumnarInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries column store information.
 *
 * @param request DescribeColumnarInfoRequest
 * @return DescribeColumnarInfoResponse
 */
DescribeColumnarInfoResponse Client::describeColumnarInfo(const DescribeColumnarInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarInfoWithOptions(request, runtime);
}

/**
 * @summary Queries column store version information.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - When DownloadLink is not NULL, you can download the backup file from this URL. This URL is valid for 2 days after it is generated. Download the file before the expiration time.
 *
 * @param request DescribeColumnarVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnarVersionListResponse
 */
DescribeColumnarVersionListResponse Client::describeColumnarVersionListWithOptions(const DescribeColumnarVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries column store version information.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
 * - When DownloadLink is not NULL, you can download the backup file from this URL. This URL is valid for 2 days after it is generated. Download the file before the expiration time.
 *
 * @param request DescribeColumnarVersionListRequest
 * @return DescribeColumnarVersionListResponse
 */
DescribeColumnarVersionListResponse Client::describeColumnarVersionList(const DescribeColumnarVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnarVersionListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the property information of a specified component, including property names and types.
 *
 * @param request DescribeComponentPropetiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentPropetiesResponse
 */
DescribeComponentPropetiesResponse Client::describeComponentPropetiesWithOptions(const DescribeComponentPropetiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.getComponentName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
 * @summary Retrieves the property information of a specified component, including property names and types.
 *
 * @param request DescribeComponentPropetiesRequest
 * @return DescribeComponentPropetiesResponse
 */
DescribeComponentPropetiesResponse Client::describeComponentPropeties(const DescribeComponentPropetiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComponentPropetiesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of custom endpoints defined by the user.
 *
 * @description Queries the list of custom endpoints configured by the user. You can use this operation to manage and view the settings of private connections or VPC endpoint services.
 *
 * @param request DescribeCustomEndpointListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEndpointListResponse
 */
DescribeCustomEndpointListResponse Client::describeCustomEndpointListWithOptions(const DescribeCustomEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckDeleteCN()) {
    query["CheckDeleteCN"] = request.getCheckDeleteCN();
  }

  if (!!request.hasCustomEndpointIds()) {
    query["CustomEndpointIds"] = request.getCustomEndpointIds();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of custom endpoints defined by the user.
 *
 * @description Queries the list of custom endpoints configured by the user. You can use this operation to manage and view the settings of private connections or VPC endpoint services.
 *
 * @param request DescribeCustomEndpointListRequest
 * @return DescribeCustomEndpointListResponse
 */
DescribeCustomEndpointListResponse Client::describeCustomEndpointList(const DescribeCustomEndpointListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomEndpointListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDBInstanceAttribute operation to retrieve instance attributes.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
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
 * @summary Calls the DescribeDBInstanceAttribute operation to retrieve instance attributes.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDBInstanceConfig operation to retrieve the configuration parameters of an instance.
 *
 * @param request DescribeDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfigWithOptions(const DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeDBInstanceConfig operation to retrieve the configuration parameters of an instance.
 *
 * @param request DescribeDBInstanceConfigRequest
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 查询endpoint列表
 *
 * @description 该接口用于获取用户已配置的自定义终端节点（Endpoint）列表，便于管理和查看私有连接或VPC终端服务的设置。
 *
 * @param request DescribeDBInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceEndpointResponse
 */
DescribeDBInstanceEndpointResponse Client::describeDBInstanceEndpointWithOptions(const DescribeDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceEndpoint"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceEndpointResponse>();
}

/**
 * @summary 查询endpoint列表
 *
 * @description 该接口用于获取用户已配置的自定义终端节点（Endpoint）列表，便于管理和查看私有连接或VPC终端服务的设置。
 *
 * @param request DescribeDBInstanceEndpointRequest
 * @return DescribeDBInstanceEndpointResponse
 */
DescribeDBInstanceEndpointResponse Client::describeDBInstanceEndpoint(const DescribeDBInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the high availability (HA) information of an instance.
 *
 * @param request DescribeDBInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceHAResponse
 */
DescribeDBInstanceHAResponse Client::describeDBInstanceHAWithOptions(const DescribeDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the high availability (HA) information of an instance.
 *
 * @param request DescribeDBInstanceHARequest
 * @return DescribeDBInstanceHAResponse
 */
DescribeDBInstanceHAResponse Client::describeDBInstanceHA(const DescribeDBInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceHAWithOptions(request, runtime);
}

/**
 * @summary Views SSL information.
 *
 * @param request DescribeDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSLWithOptions(const DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Views SSL information.
 *
 * @param request DescribeDBInstanceSSLRequest
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDBInstanceTDE operation to retrieve the details of Transparent Data Encryption (TDE) for an instance.
 *
 * @param request DescribeDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDEWithOptions(const DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeDBInstanceTDE operation to retrieve the details of Transparent Data Encryption (TDE) for an instance.
 *
 * @param request DescribeDBInstanceTDERequest
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDBInstanceTopology operation to retrieve the topology information of an instance.
 *
 * @param request DescribeDBInstanceTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTopologyResponse
 */
DescribeDBInstanceTopologyResponse Client::describeDBInstanceTopologyWithOptions(const DescribeDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMinuteSimple()) {
    query["MinuteSimple"] = request.getMinuteSimple();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Calls the DescribeDBInstanceTopology operation to retrieve the topology information of an instance.
 *
 * @param request DescribeDBInstanceTopologyRequest
 * @return DescribeDBInstanceTopologyResponse
 */
DescribeDBInstanceTopologyResponse Client::describeDBInstanceTopology(const DescribeDBInstanceTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTopologyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information about an instance by using the endpoint of the instance.
 *
 * @param request DescribeDBInstanceViaEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceViaEndpointResponse
 */
DescribeDBInstanceViaEndpointResponse Client::describeDBInstanceViaEndpointWithOptions(const DescribeDBInstanceViaEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the basic information about an instance by using the endpoint of the instance.
 *
 * @param request DescribeDBInstanceViaEndpointRequest
 * @return DescribeDBInstanceViaEndpointResponse
 */
DescribeDBInstanceViaEndpointResponse Client::describeDBInstanceViaEndpoint(const DescribeDBInstanceViaEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceViaEndpointWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDBInstances operation to query a list of instances.
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbVersion()) {
    query["DbVersion"] = request.getDbVersion();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMustHasCdc()) {
    query["MustHasCdc"] = request.getMustHasCdc();
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

  if (!!request.hasSeries()) {
    query["Series"] = request.getSeries();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Calls the DescribeDBInstances operation to query a list of instances.
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of an instance by calling the DescribeDBNodePerformance operation.
 *
 * @description Note: 
 * - The **endpoint** differs from other API operations. Use **polardbx.aliyuncs.com** for Chinese regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
 * - When debugging this API operation, if a service not active error is returned, confirm that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** and change the **endpoint** to **polardbx.aliyuncs.com**.
 *
 * @param request DescribeDBNodePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformanceWithOptions(const DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasDBNodeRole()) {
    query["DBNodeRole"] = request.getDBNodeRole();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the performance data of an instance by calling the DescribeDBNodePerformance operation.
 *
 * @description Note: 
 * - The **endpoint** differs from other API operations. Use **polardbx.aliyuncs.com** for Chinese regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
 * - When debugging this API operation, if a service not active error is returned, confirm that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** and change the **endpoint** to **polardbx.aliyuncs.com**.
 *
 * @param request DescribeDBNodePerformanceRequest
 * @return DescribeDBNodePerformanceResponse
 */
DescribeDBNodePerformanceResponse Client::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBNodePerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the execution details of a data import task.
 *
 * @param request DescribeDataImportTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataImportTaskInfoResponse
 */
DescribeDataImportTaskInfoResponse Client::describeDataImportTaskInfoWithOptions(const DescribeDataImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFailPageNumber()) {
    query["FailPageNumber"] = request.getFailPageNumber();
  }

  if (!!request.hasFailPageSize()) {
    query["FailPageSize"] = request.getFailPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSuccessPageNumber()) {
    query["SuccessPageNumber"] = request.getSuccessPageNumber();
  }

  if (!!request.hasSuccessPageSize()) {
    query["SuccessPageSize"] = request.getSuccessPageSize();
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
 * @summary Queries the execution details of a data import task.
 *
 * @param request DescribeDataImportTaskInfoRequest
 * @return DescribeDataImportTaskInfoResponse
 */
DescribeDataImportTaskInfoResponse Client::describeDataImportTaskInfo(const DescribeDataImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataImportTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of databases by calling the DescribeDbList operation.
 *
 * @param request DescribeDbListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDbListResponse
 */
DescribeDbListResponse Client::describeDbListWithOptions(const DescribeDbListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of databases by calling the DescribeDbList operation.
 *
 * @param request DescribeDbListRequest
 * @return DescribeDbListResponse
 */
DescribeDbListResponse Client::describeDbList(const DescribeDbListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDbListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeDistributeTableList operation to retrieve the list of database tables.
 *
 * @param request DescribeDistributeTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDistributeTableListResponse
 */
DescribeDistributeTableListResponse Client::describeDistributeTableListWithOptions(const DescribeDistributeTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeDistributeTableList operation to retrieve the list of database tables.
 *
 * @param request DescribeDistributeTableListRequest
 * @return DescribeDistributeTableListResponse
 */
DescribeDistributeTableListResponse Client::describeDistributeTableList(const DescribeDistributeTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDistributeTableListWithOptions(request, runtime);
}

/**
 * @summary Queries the currently enabled cross-zone configurations.
 *
 * @param request DescribeEnabledCrossRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnabledCrossRegionsResponse
 */
DescribeEnabledCrossRegionsResponse Client::describeEnabledCrossRegionsWithOptions(const DescribeEnabledCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the currently enabled cross-zone configurations.
 *
 * @param request DescribeEnabledCrossRegionsRequest
 * @return DescribeEnabledCrossRegionsResponse
 */
DescribeEnabledCrossRegionsResponse Client::describeEnabledCrossRegions(const DescribeEnabledCrossRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnabledCrossRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of PolarDB-X assessment import tasks. (Single).
 *
 * @param request DescribeEvaluateAndImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEvaluateAndImportTaskResponse
 */
DescribeEvaluateAndImportTaskResponse Client::describeEvaluateAndImportTaskWithOptions(const DescribeEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Queries the list of PolarDB-X assessment import tasks. (Single).
 *
 * @param request DescribeEvaluateAndImportTaskRequest
 * @return DescribeEvaluateAndImportTaskResponse
 */
DescribeEvaluateAndImportTaskResponse Client::describeEvaluateAndImportTask(const DescribeEvaluateAndImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEvaluateAndImportTaskWithOptions(request, runtime);
}

/**
 * @summary Queries a list of assessment import tasks for PolarDB-X.
 *
 * @description Creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided files, into a destination database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request DescribeEvaluateAndImportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEvaluateAndImportTasksResponse
 */
DescribeEvaluateAndImportTasksResponse Client::describeEvaluateAndImportTasksWithOptions(const DescribeEvaluateAndImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Queries a list of assessment import tasks for PolarDB-X.
 *
 * @description Creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided files, into a destination database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request DescribeEvaluateAndImportTasksRequest
 * @return DescribeEvaluateAndImportTasksResponse
 */
DescribeEvaluateAndImportTasksResponse Client::describeEvaluateAndImportTasks(const DescribeEvaluateAndImportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEvaluateAndImportTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves historical events.
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
 * @summary Retrieves historical events.
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of global database network (GDN) instances.
 *
 * @param request DescribeGdnInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGdnInstancesResponse
 */
DescribeGdnInstancesResponse Client::describeGdnInstancesWithOptions(const DescribeGdnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterType()) {
    query["FilterType"] = request.getFilterType();
  }

  if (!!request.hasFilterValue()) {
    query["FilterValue"] = request.getFilterValue();
  }

  if (!!request.hasGDNId()) {
    query["GDNId"] = request.getGDNId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
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
 * @summary Retrieves a list of global database network (GDN) instances.
 *
 * @param request DescribeGdnInstancesRequest
 * @return DescribeGdnInstancesResponse
 */
DescribeGdnInstancesResponse Client::describeGdnInstances(const DescribeGdnInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGdnInstancesWithOptions(request, runtime);
}

/**
 * @summary View Memory Engine Information
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, the number of requests, data transformation, and data shipping. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeMem0InfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMem0InfoResponse
 */
DescribeMem0InfoResponse Client::describeMem0InfoWithOptions(const DescribeMem0InfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMem0Info"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMem0InfoResponse>();
}

/**
 * @summary View Memory Engine Information
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, the number of requests, data transformation, and data shipping. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeMem0InfoRequest
 * @return DescribeMem0InfoResponse
 */
DescribeMem0InfoResponse Client::describeMem0Info(const DescribeMem0InfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMem0InfoWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist of a memory engine.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data processing, and data shipping. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeMem0SecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMem0SecurityIpsResponse
 */
DescribeMem0SecurityIpsResponse Client::describeMem0SecurityIpsWithOptions(const DescribeMem0SecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMem0SecurityIps"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMem0SecurityIpsResponse>();
}

/**
 * @summary Queries the whitelist of a memory engine.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data processing, and data shipping. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeMem0SecurityIpsRequest
 * @return DescribeMem0SecurityIpsResponse
 */
DescribeMem0SecurityIpsResponse Client::describeMem0SecurityIps(const DescribeMem0SecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMem0SecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Exposes instance topology information and download links for commercial backup sets to support offline restoration of cloud instances.
 *
 * @param request DescribeOpenBackupSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenBackupSetResponse
 */
DescribeOpenBackupSetResponse Client::describeOpenBackupSetWithOptions(const DescribeOpenBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
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
 * @summary Exposes instance topology information and download links for commercial backup sets to support offline restoration of cloud instances.
 *
 * @param request DescribeOpenBackupSetRequest
 * @return DescribeOpenBackupSetResponse
 */
DescribeOpenBackupSetResponse Client::describeOpenBackupSet(const DescribeOpenBackupSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenBackupSetWithOptions(request, runtime);
}

/**
 * @summary Queries the list of database parameter templates created by users or supported by the system, including basic information, associated engine types, and modification times of each parameter template.
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
 * @summary Queries the list of database parameter templates created by users or supported by the system, including basic information, associated engine types, and modification times of each parameter template.
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeParameterTemplates operation to retrieve the parameter template list for an instance.
 *
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.getParamLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeParameterTemplates operation to retrieve the parameter template list for an instance.
 *
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeParameters operation to retrieve instance parameters.
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

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.getParamLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeParameters operation to retrieve instance parameters.
 *
 * @param request DescribeParametersRequest
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all data nodes (Data Nodes) in a PolarDB-X instance, including node status, storage usage, and network addresses, to facilitate operations management and monitoring.
 *
 * @param request DescribePolarxDataNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolarxDataNodesResponse
 */
DescribePolarxDataNodesResponse Client::describePolarxDataNodesWithOptions(const DescribePolarxDataNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
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
 * @summary Queries the details of all data nodes (Data Nodes) in a PolarDB-X instance, including node status, storage usage, and network addresses, to facilitate operations management and monitoring.
 *
 * @param request DescribePolarxDataNodesRequest
 * @return DescribePolarxDataNodesResponse
 */
DescribePolarxDataNodesResponse Client::describePolarxDataNodes(const DescribePolarxDataNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolarxDataNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of VPCs available for PolarDB-X.
 *
 * @description Queries the list of Virtual Private Clouds (VPCs) available under your account for database instances. You can use this operation to select an appropriate network environment when creating or managing database instances.
 *
 * @param request DescribeRdsVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcsWithOptions(const DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary Queries the list of VPCs available for PolarDB-X.
 *
 * @description Queries the list of Virtual Private Clouds (VPCs) available under your account for database instances. You can use this operation to select an appropriate network environment when creating or managing database instances.
 *
 * @param request DescribeRdsVpcsRequest
 * @return DescribeRdsVpcsResponse
 */
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of available vSwitches in a virtual private cloud (VPC) for an ApsaraDB RDS instance.
 *
 * @description Queries the list of available virtual private clouds (VPCs) under your account for an instance, so that you can select an appropriate network environment when creating or managing a database instance.
 *
 * @param request DescribeRdsVswitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVswitchesResponse
 */
DescribeRdsVswitchesResponse Client::describeRdsVswitchesWithOptions(const DescribeRdsVswitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of available vSwitches in a virtual private cloud (VPC) for an ApsaraDB RDS instance.
 *
 * @description Queries the list of available virtual private clouds (VPCs) under your account for an instance, so that you can select an appropriate network environment when creating or managing a database instance.
 *
 * @param request DescribeRdsVswitchesRequest
 * @return DescribeRdsVswitchesResponse
 */
DescribeRdsVswitchesResponse Client::describeRdsVswitches(const DescribeRdsVswitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVswitchesWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeRegions operation to obtain the list of regions.
 *
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
 * @summary Calls the DescribeRegions operation to obtain the list of regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary Queries the details of a replication lag inspection task for an instance.
 *
 * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for exceptions such as latency, interruption, or data inconsistency.
 *
 * @param request DescribeRplInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRplInspectionTaskResponse
 */
DescribeRplInspectionTaskResponse Client::describeRplInspectionTaskWithOptions(const DescribeRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFailPageNumber()) {
    query["FailPageNumber"] = request.getFailPageNumber();
  }

  if (!!request.hasFailPageSize()) {
    query["FailPageSize"] = request.getFailPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSuccessPageNumber()) {
    query["SuccessPageNumber"] = request.getSuccessPageNumber();
  }

  if (!!request.hasSuccessPageSize()) {
    query["SuccessPageSize"] = request.getSuccessPageSize();
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
 * @summary Queries the details of a replication lag inspection task for an instance.
 *
 * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for exceptions such as latency, interruption, or data inconsistency.
 *
 * @param request DescribeRplInspectionTaskRequest
 * @return DescribeRplInspectionTaskResponse
 */
DescribeRplInspectionTaskResponse Client::describeRplInspectionTask(const DescribeRplInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRplInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Display the ScaleOut migration task progress.
 *
 * @param request DescribeScaleOutMigrateTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScaleOutMigrateTaskListResponse
 */
DescribeScaleOutMigrateTaskListResponse Client::describeScaleOutMigrateTaskListWithOptions(const DescribeScaleOutMigrateTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
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
 * @summary Display the ScaleOut migration task progress.
 *
 * @param request DescribeScaleOutMigrateTaskListRequest
 * @return DescribeScaleOutMigrateTaskListResponse
 */
DescribeScaleOutMigrateTaskListResponse Client::describeScaleOutMigrateTaskList(const DescribeScaleOutMigrateTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScaleOutMigrateTaskListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeSecurityIps operation to view the IP whitelist of an instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIpsWithOptions(const DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeSecurityIps operation to view the IP whitelist of an instance.
 *
 * @param request DescribeSecurityIpsRequest
 * @return DescribeSecurityIpsResponse
 */
DescribeSecurityIpsResponse Client::describeSecurityIps(const DescribeSecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Queries the storage usage details of an instance, including the total capacity, used space, remaining space, and other information.
 *
 * @param request DescribeShowStorageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeShowStorageInfoResponse
 */
DescribeShowStorageInfoResponse Client::describeShowStorageInfoWithOptions(const DescribeShowStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
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
 * @summary Queries the storage usage details of an instance, including the total capacity, used space, remaining space, and other information.
 *
 * @param request DescribeShowStorageInfoRequest
 * @return DescribeShowStorageInfoResponse
 */
DescribeShowStorageInfoResponse Client::describeShowStorageInfo(const DescribeShowStorageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeShowStorageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of slow SQL statements on compute nodes and storage nodes of a PolarDB-X instance.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterType()) {
    query["CharacterType"] = request.getCharacterType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDBNodeIds()) {
    query["DBNodeIds"] = request.getDBNodeIds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the details of slow SQL statements on compute nodes and storage nodes of a PolarDB-X instance.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries SQL audit information.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeSqlAuditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlAuditInfoResponse
 */
DescribeSqlAuditInfoResponse Client::describeSqlAuditInfoWithOptions(const DescribeSqlAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.getAuditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.getAuditAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries SQL audit information.
 *
 * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request DescribeSqlAuditInfoRequest
 * @return DescribeSqlAuditInfoResponse
 */
DescribeSqlAuditInfoResponse Client::describeSqlAuditInfo(const DescribeSqlAuditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlAuditInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of SQL flashback tasks by calling the DescribeSqlFlashbackTaskList operation.
 *
 * @param request DescribeSqlFlashbackTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlFlashbackTaskListResponse
 */
DescribeSqlFlashbackTaskListResponse Client::describeSqlFlashbackTaskListWithOptions(const DescribeSqlFlashbackTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.getPolardbxInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of SQL flashback tasks by calling the DescribeSqlFlashbackTaskList operation.
 *
 * @param request DescribeSqlFlashbackTaskListRequest
 * @return DescribeSqlFlashbackTaskListResponse
 */
DescribeSqlFlashbackTaskListResponse Client::describeSqlFlashbackTaskList(const DescribeSqlFlashbackTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlFlashbackTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a storage pool, including capacity, usage, and status.
 *
 * @param request DescribeStoragePoolInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStoragePoolInfoResponse
 */
DescribeStoragePoolInfoResponse Client::describeStoragePoolInfoWithOptions(const DescribeStoragePoolInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
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
 * @summary Queries the details of a storage pool, including capacity, usage, and status.
 *
 * @param request DescribeStoragePoolInfoRequest
 * @return DescribeStoragePoolInfoResponse
 */
DescribeStoragePoolInfoResponse Client::describeStoragePoolInfo(const DescribeStoragePoolInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStoragePoolInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a database schema import task.
 *
 * @description The CreateDataImportTask operation creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided, into a destination database instance. Specify the instance ID, database name, engine type, data source (such as an OSS path), and import type. The system performs the data write operation asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request DescribeStructureImportTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStructureImportTaskInfoResponse
 */
DescribeStructureImportTaskInfoResponse Client::describeStructureImportTaskInfoWithOptions(const DescribeStructureImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Queries the details of a database schema import task.
 *
 * @description The CreateDataImportTask operation creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided, into a destination database instance. Specify the instance ID, database name, engine type, data source (such as an OSS path), and import type. The system performs the data write operation asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
 *
 * @param request DescribeStructureImportTaskInfoRequest
 * @return DescribeStructureImportTaskInfoResponse
 */
DescribeStructureImportTaskInfoResponse Client::describeStructureImportTaskInfo(const DescribeStructureImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStructureImportTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the Supabase API key.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeSupabaseApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupabaseApiKeyResponse
 */
DescribeSupabaseApiKeyResponse Client::describeSupabaseApiKeyWithOptions(const DescribeSupabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupabaseApiKey"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupabaseApiKeyResponse>();
}

/**
 * @summary Queries the Supabase API key.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeSupabaseApiKeyRequest
 * @return DescribeSupabaseApiKeyResponse
 */
DescribeSupabaseApiKeyResponse Client::describeSupabaseApiKey(const DescribeSupabaseApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupabaseApiKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Supabase instance.
 *
 * @description ****
 *
 * @param request DescribeSupabaseInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupabaseInstanceAttributeResponse
 */
DescribeSupabaseInstanceAttributeResponse Client::describeSupabaseInstanceAttributeWithOptions(const DescribeSupabaseInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupabaseInstanceAttribute"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupabaseInstanceAttributeResponse>();
}

/**
 * @summary Queries the details of a Supabase instance.
 *
 * @description ****
 *
 * @param request DescribeSupabaseInstanceAttributeRequest
 * @return DescribeSupabaseInstanceAttributeResponse
 */
DescribeSupabaseInstanceAttributeResponse Client::describeSupabaseInstanceAttribute(const DescribeSupabaseInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupabaseInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Supabase instances.
 *
 * @description Queries the list of custom endpoints configured by the user for managing and viewing private connection or VPC endpoint service settings.
 *
 * @param request DescribeSupabaseInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupabaseInstancesResponse
 */
DescribeSupabaseInstancesResponse Client::describeSupabaseInstancesWithOptions(const DescribeSupabaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupabaseInstances"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupabaseInstancesResponse>();
}

/**
 * @summary Queries a list of Supabase instances.
 *
 * @description Queries the list of custom endpoints configured by the user for managing and viewing private connection or VPC endpoint service settings.
 *
 * @param request DescribeSupabaseInstancesRequest
 * @return DescribeSupabaseInstancesResponse
 */
DescribeSupabaseInstancesResponse Client::describeSupabaseInstances(const DescribeSupabaseInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupabaseInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the IP whitelist of a Supabase instance.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is later than the specified query start time and whose log record start time is earlier than the specified query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeSupabaseIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupabaseIpWhitelistResponse
 */
DescribeSupabaseIpWhitelistResponse Client::describeSupabaseIpWhitelistWithOptions(const DescribeSupabaseIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupabaseIpWhitelist"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupabaseIpWhitelistResponse>();
}

/**
 * @summary Queries the IP whitelist of a Supabase instance.
 *
 * @description - Binary log files are retained for 15 days by default.
 * - The returned log list includes all logs whose log record end time is later than the specified query start time and whose log record start time is earlier than the specified query end time.
 * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
 *
 * @param request DescribeSupabaseIpWhitelistRequest
 * @return DescribeSupabaseIpWhitelistResponse
 */
DescribeSupabaseIpWhitelistResponse Client::describeSupabaseIpWhitelist(const DescribeSupabaseIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupabaseIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary Retrieves tag information.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
 * @summary Retrieves tag information.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the task list of an instance.
 *
 * @param request DescribeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
 * @summary Retrieves the task list of an instance.
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the current status of a task that upgrades or converts a standard instance to an Enterprise instance.
 *
 * @param request DescribeTransformStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransformStatusResponse
 */
DescribeTransformStatusResponse Client::describeTransformStatusWithOptions(const DescribeTransformStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasQueryReport()) {
    query["QueryReport"] = request.getQueryReport();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the current status of a task that upgrades or converts a standard instance to an Enterprise instance.
 *
 * @param request DescribeTransformStatusRequest
 * @return DescribeTransformStatusResponse
 */
DescribeTransformStatusResponse Client::describeTransformStatus(const DescribeTransformStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransformStatusWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeUserEncryptionKeyList operation to retrieve the list of Transparent Data Encryption (TDE) keys for a user.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyListWithOptions(const DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the DescribeUserEncryptionKeyList operation to retrieve the list of Transparent Data Encryption (TDE) keys for a user.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

/**
 * @summary Disables three-role mode.
 *
 * @param request DisableRightsSeparationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRightsSeparationResponse
 */
DisableRightsSeparationResponse Client::disableRightsSeparationWithOptions(const DisableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbaAccountName()) {
    query["DbaAccountName"] = request.getDbaAccountName();
  }

  if (!!request.hasDbaAccountPassword()) {
    query["DbaAccountPassword"] = request.getDbaAccountPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Disables three-role mode.
 *
 * @param request DisableRightsSeparationRequest
 * @return DisableRightsSeparationResponse
 */
DisableRightsSeparationResponse Client::disableRightsSeparation(const DisableRightsSeparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRightsSeparationWithOptions(request, runtime);
}

/**
 * @summary Disables the SQL audit feature.
 *
 * @description > After the SQL audit and analysis feature is disabled, data is no longer written to Simple Log Service. However, you can still view historical data, which incurs storage and indexing fees. You can delete all data to deactivate Simple Log Service. After Simple Log Service is deactivated, no further fees are incurred. For more information about deactivating Simple Log Service, see [Deactivate Simple Log Service](https://help.aliyun.com/document_detail/90650.html).
 *
 * @param request DisableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAuditWithOptions(const DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.getAuditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.getAuditAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Disables the SQL audit feature.
 *
 * @description > After the SQL audit and analysis feature is disabled, data is no longer written to Simple Log Service. However, you can still view historical data, which incurs storage and indexing fees. You can delete all data to deactivate Simple Log Service. After Simple Log Service is deactivated, no further fees are incurred. For more information about deactivating Simple Log Service, see [Deactivate Simple Log Service](https://help.aliyun.com/document_detail/90650.html).
 *
 * @param request DisableSqlAuditRequest
 * @return DisableSqlAuditResponse
 */
DisableSqlAuditResponse Client::disableSqlAudit(const DisableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSqlAuditWithOptions(request, runtime);
}

/**
 * @summary Enables three-role mode.
 *
 * @param request EnableRightsSeparationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRightsSeparationResponse
 */
EnableRightsSeparationResponse Client::enableRightsSeparationWithOptions(const EnableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountDescription()) {
    query["AuditAccountDescription"] = request.getAuditAccountDescription();
  }

  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.getAuditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.getAuditAccountPassword();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountDescription()) {
    query["SecurityAccountDescription"] = request.getSecurityAccountDescription();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Enables three-role mode.
 *
 * @param request EnableRightsSeparationRequest
 * @return EnableRightsSeparationResponse
 */
EnableRightsSeparationResponse Client::enableRightsSeparation(const EnableRightsSeparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRightsSeparationWithOptions(request, runtime);
}

/**
 * @summary Enables the SQL audit feature.
 *
 * @description > * The PolarDB-X 2.0 SQL audit and analysis feature itself is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data transformation, data shipping, and other services. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request EnableSqlAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAuditWithOptions(const EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAccountName()) {
    query["AuditAccountName"] = request.getAuditAccountName();
  }

  if (!!request.hasAuditAccountPassword()) {
    query["AuditAccountPassword"] = request.getAuditAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExpireAfterDays()) {
    query["ExpireAfterDays"] = request.getExpireAfterDays();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Enables the SQL audit feature.
 *
 * @description > * The PolarDB-X 2.0 SQL audit and analysis feature itself is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data transformation, data shipping, and other services. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
 *
 * @param request EnableSqlAuditRequest
 * @return EnableSqlAuditResponse
 */
EnableSqlAuditResponse Client::enableSqlAudit(const EnableSqlAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSqlAuditWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of labels.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Retrieves a list of labels.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Migrates an instance from one zone to another.
 *
 * @param request MigrateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstanceWithOptions(const MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPrimaryZoneId()) {
    query["PrimaryZoneId"] = request.getPrimaryZoneId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.getSecondaryZoneId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  if (!!request.hasTertiaryZoneId()) {
    query["TertiaryZoneId"] = request.getTertiaryZoneId();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.getTopologyType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
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
 * @summary Migrates an instance from one zone to another.
 *
 * @param request MigrateDBInstanceRequest
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstance(const MigrateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyAccountDescription operation to modify the description of an account.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the ModifyAccountDescription operation to modify the description of an account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a standard account.
 *
 * @param request ModifyAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPrivilegeResponse
 */
ModifyAccountPrivilegeResponse Client::modifyAccountPrivilegeWithOptions(const ModifyAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Modifies the permissions of a standard account.
 *
 * @param request ModifyAccountPrivilegeRequest
 * @return ModifyAccountPrivilegeResponse
 */
ModifyAccountPrivilegeResponse Client::modifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyActiveOperationMaintainConf operation to modify the time configuration of O&M events.
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
 * @summary Calls the ModifyActiveOperationMaintainConf operation to modify the time configuration of O&M events.
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyActiveOperationTasks operation to modify the execution time of O&M events.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
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
 * @summary Calls the ModifyActiveOperationTasks operation to modify the execution time of O&M events.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Modifies the CDC configuration.
 *
 * @description ****.
 *
 * @param request ModifyCdcClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdcClassResponse
 */
ModifyCdcClassResponse Client::modifyCdcClassWithOptions(const ModifyCdcClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCDCNodeCount()) {
    query["CDCNodeCount"] = request.getCDCNodeCount();
  }

  if (!!request.hasCdcClass()) {
    query["CdcClass"] = request.getCdcClass();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
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
 * @summary Modifies the CDC configuration.
 *
 * @description ****.
 *
 * @param request ModifyCdcClassRequest
 * @return ModifyCdcClassResponse
 */
ModifyCdcClassResponse Client::modifyCdcClass(const ModifyCdcClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdcClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the column store specifications.
 *
 * @description ****.
 *
 * @param request ModifyColumnarClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyColumnarClassResponse
 */
ModifyColumnarClassResponse Client::modifyColumnarClassWithOptions(const ModifyColumnarClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnarClass()) {
    query["ColumnarClass"] = request.getColumnarClass();
  }

  if (!!request.hasColumnarNodeCount()) {
    query["ColumnarNodeCount"] = request.getColumnarNodeCount();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
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
 * @summary Modifies the column store specifications.
 *
 * @description ****.
 *
 * @param request ModifyColumnarClassRequest
 * @return ModifyColumnarClassResponse
 */
ModifyColumnarClassResponse Client::modifyColumnarClass(const ModifyColumnarClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyColumnarClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a custom endpoint.
 *
 * @description In PolarDB-X, in addition to the default primary endpoint and read-only endpoint, you can create custom endpoints to implement more flexible read/write splitting, load balancing, or business isolation strategies. The ModifyCustomEndpoint operation allows you to dynamically adjust the attributes of these custom endpoints without restarting the instance.
 *
 * @param request ModifyCustomEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomEndpointResponse
 */
ModifyCustomEndpointResponse Client::modifyCustomEndpointWithOptions(const ModifyCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.getCustomEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNodeAutoEnter()) {
    query["NodeAutoEnter"] = request.getNodeAutoEnter();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasNodeRole()) {
    query["NodeRole"] = request.getNodeRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the configuration of a custom endpoint.
 *
 * @description In PolarDB-X, in addition to the default primary endpoint and read-only endpoint, you can create custom endpoints to implement more flexible read/write splitting, load balancing, or business isolation strategies. The ModifyCustomEndpoint operation allows you to dynamically adjust the attributes of these custom endpoints without restarting the instance.
 *
 * @param request ModifyCustomEndpointRequest
 * @return ModifyCustomEndpointResponse
 */
ModifyCustomEndpointResponse Client::modifyCustomEndpoint(const ModifyCustomEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the network configurations of a custom network endpoint, such as the subnet, security group, and public network access settings.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
 *
 * @param request ModifyCustomEndpointNetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomEndpointNetResponse
 */
ModifyCustomEndpointNetResponse Client::modifyCustomEndpointNetWithOptions(const ModifyCustomEndpointNetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnPrefix()) {
    query["ConnPrefix"] = request.getConnPrefix();
  }

  if (!!request.hasCustomEndpointId()) {
    query["CustomEndpointId"] = request.getCustomEndpointId();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the network configurations of a custom network endpoint, such as the subnet, security group, and public network access settings.
 *
 * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
 *
 * @param request ModifyCustomEndpointNetRequest
 * @return ModifyCustomEndpointNetResponse
 */
ModifyCustomEndpointNetResponse Client::modifyCustomEndpointNet(const ModifyCustomEndpointNetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomEndpointNetWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyDBInstanceClass operation to modify the specifications of an instance.
 *
 * @param request ModifyDBInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClassWithOptions(const ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.getCnClass();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.getDnClass();
  }

  if (!!request.hasDnStorageSpace()) {
    query["DnStorageSpace"] = request.getDnStorageSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpecifiedDNScale()) {
    query["SpecifiedDNScale"] = request.getSpecifiedDNScale();
  }

  if (!!request.hasSpecifiedDNSpecMapJson()) {
    query["SpecifiedDNSpecMapJson"] = request.getSpecifiedDNSpecMapJson();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  if (!!request.hasTargetDBInstanceClass()) {
    query["TargetDBInstanceClass"] = request.getTargetDBInstanceClass();
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
 * @summary Calls the ModifyDBInstanceClass operation to modify the specifications of an instance.
 *
 * @param request ModifyDBInstanceClassRequest
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyDBInstanceConfig operation to modify instance configuration items.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the ModifyDBInstanceConfig operation to modify instance configuration items.
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection string of an instance.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasNewPort()) {
    query["NewPort"] = request.getNewPort();
  }

  if (!!request.hasNewPrefix()) {
    query["NewPrefix"] = request.getNewPrefix();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the connection string of an instance.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyDBInstanceDescription operation to modify the description of an instance.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the ModifyDBInstanceDescription operation to modify the description of an instance.
 *
 * @param request ModifyDBInstanceDescriptionRequest
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of an instance.
 *
 * @description ****.
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTimeWithOptions(const ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.getMaintainTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the maintenance window of an instance.
 *
 * @description ****.
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the virtual IP (VIP) address or network properties bound to a database instance. This operation supports changing the internal IP address, adjusting the vSwitch, migrating across zones, and other operations.
 *
 * @description ****.
 *
 * @param request ModifyDBInstanceVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceVipResponse
 */
ModifyDBInstanceVipResponse Client::modifyDBInstanceVipWithOptions(const ModifyDBInstanceVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceClusterName()) {
    query["InstanceClusterName"] = request.getInstanceClusterName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the virtual IP (VIP) address or network properties bound to a database instance. This operation supports changing the internal IP address, adjusting the vSwitch, migrating across zones, and other operations.
 *
 * @description ****.
 *
 * @param request ModifyDBInstanceVipRequest
 * @return ModifyDBInstanceVipResponse
 */
ModifyDBInstanceVipResponse Client::modifyDBInstanceVip(const ModifyDBInstanceVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceVipWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyDatabaseDescription operation to modify the description of a database.
 *
 * @param request ModifyDatabaseDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseDescriptionResponse
 */
ModifyDatabaseDescriptionResponse Client::modifyDatabaseDescriptionWithOptions(const ModifyDatabaseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDbDescription()) {
    query["DbDescription"] = request.getDbDescription();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the ModifyDatabaseDescription operation to modify the description of a database.
 *
 * @param request ModifyDatabaseDescriptionRequest
 * @return ModifyDatabaseDescriptionResponse
 */
ModifyDatabaseDescriptionResponse Client::modifyDatabaseDescription(const ModifyDatabaseDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration or migration parameters of a database engine migration task, such as the source database, destination database, migration objects, or migration mode.
 *
 * @description ****.
 *
 * @param request ModifyEngineMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEngineMigrationResponse
 */
ModifyEngineMigrationResponse Client::modifyEngineMigrationWithOptions(const ModifyEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStrings()) {
    query["ConnectionStrings"] = request.getConnectionStrings();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasNewMasterDBInstanceName()) {
    query["NewMasterDBInstanceName"] = request.getNewMasterDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.getSourceDBInstanceName();
  }

  if (!!request.hasSwapConnectionString()) {
    query["SwapConnectionString"] = request.getSwapConnectionString();
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
 * @summary Modifies the configuration or migration parameters of a database engine migration task, such as the source database, destination database, migration objects, or migration mode.
 *
 * @description ****.
 *
 * @param request ModifyEngineMigrationRequest
 * @return ModifyEngineMigrationResponse
 */
ModifyEngineMigrationResponse Client::modifyEngineMigration(const ModifyEngineMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEngineMigrationWithOptions(request, runtime);
}

/**
 * @summary Modifies the whitelist of a memory engine.
 *
 * @description ****
 *
 * @param request ModifyMem0SecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMem0SecurityIpsResponse
 */
ModifyMem0SecurityIpsResponse Client::modifyMem0SecurityIpsWithOptions(const ModifyMem0SecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMem0SecurityIps"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMem0SecurityIpsResponse>();
}

/**
 * @summary Modifies the whitelist of a memory engine.
 *
 * @description ****
 *
 * @param request ModifyMem0SecurityIpsRequest
 * @return ModifyMem0SecurityIpsResponse
 */
ModifyMem0SecurityIpsResponse Client::modifyMem0SecurityIps(const ModifyMem0SecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMem0SecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyParameter operation to modify instance parameters, including compute layer and storage layer parameters.
 *
 * @param request ModifyParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameterWithOptions(const ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasParamLevel()) {
    query["ParamLevel"] = request.getParamLevel();
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
 * @summary Calls the ModifyParameter operation to modify instance parameters, including compute layer and storage layer parameters.
 *
 * @param request ModifyParameterRequest
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameter(const ModifyParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifySecurityIps operation to modify the whitelist of an instance.
 *
 * @param request ModifySecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
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
 * @summary Calls the ModifySecurityIps operation to modify the whitelist of an instance.
 *
 * @param request ModifySecurityIpsRequest
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the Supabase Dashboard password.
 *
 * @description ****
 *
 * @param request ModifySupabaseDashboardPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySupabaseDashboardPasswordResponse
 */
ModifySupabaseDashboardPasswordResponse Client::modifySupabaseDashboardPasswordWithOptions(const ModifySupabaseDashboardPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySupabaseDashboardPassword"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySupabaseDashboardPasswordResponse>();
}

/**
 * @summary Modifies the Supabase Dashboard password.
 *
 * @description ****
 *
 * @param request ModifySupabaseDashboardPasswordRequest
 * @return ModifySupabaseDashboardPasswordResponse
 */
ModifySupabaseDashboardPasswordResponse Client::modifySupabaseDashboardPassword(const ModifySupabaseDashboardPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySupabaseDashboardPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP whitelist of a Supabase instance.
 *
 * @description ****
 *
 * @param request ModifySupabaseSecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySupabaseSecurityIPListResponse
 */
ModifySupabaseSecurityIPListResponse Client::modifySupabaseSecurityIPListWithOptions(const ModifySupabaseSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySupabaseSecurityIPList"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySupabaseSecurityIPListResponse>();
}

/**
 * @summary Modifies the IP whitelist of a Supabase instance.
 *
 * @description ****
 *
 * @param request ModifySupabaseSecurityIPListRequest
 * @return ModifySupabaseSecurityIPListResponse
 */
ModifySupabaseSecurityIPListResponse Client::modifySupabaseSecurityIPList(const ModifySupabaseSecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySupabaseSecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Performs a pre-check and feasibility assessment for a recovery task before you execute SQL flashback recovery.
 *
 * @param request PreCheckSqlFlashbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreCheckSqlFlashbackTaskResponse
 */
PreCheckSqlFlashbackTaskResponse Client::preCheckSqlFlashbackTaskWithOptions(const PreCheckSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.getPolardbxInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Performs a pre-check and feasibility assessment for a recovery task before you execute SQL flashback recovery.
 *
 * @param request PreCheckSqlFlashbackTaskRequest
 * @return PreCheckSqlFlashbackTaskResponse
 */
PreCheckSqlFlashbackTaskResponse Client::preCheckSqlFlashbackTask(const PreCheckSqlFlashbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preCheckSqlFlashbackTaskWithOptions(request, runtime);
}

/**
 * @summary Refreshes the metadata of an import task.
 *
 * @param request RefreshImportMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshImportMetaResponse
 */
RefreshImportMetaResponse Client::refreshImportMetaWithOptions(const RefreshImportMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Refreshes the metadata of an import task.
 *
 * @param request RefreshImportMetaRequest
 * @return RefreshImportMetaResponse
 */
RefreshImportMetaResponse Client::refreshImportMeta(const RefreshImportMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshImportMetaWithOptions(request, runtime);
}

/**
 * @summary Calls the ReleaseColdDataVolume operation.
 *
 * @param request ReleaseColdDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseColdDataVolumeResponse
 */
ReleaseColdDataVolumeResponse Client::releaseColdDataVolumeWithOptions(const ReleaseColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Calls the ReleaseColdDataVolume operation.
 *
 * @param request ReleaseColdDataVolumeRequest
 * @return ReleaseColdDataVolumeResponse
 */
ReleaseColdDataVolumeResponse Client::releaseColdDataVolume(const ReleaseColdDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseColdDataVolumeWithOptions(request, runtime);
}

/**
 * @summary Releases the public network connection of an instance by calling the ReleaseInstancePublicConnection operation.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Releases the public network connection of an instance by calling the ReleaseInstancePublicConnection operation.
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Releases the public domain name for a Mem0 instance.
 *
 * @description This operation is used to verify that no active connections exist before a rollback task to ensure operational safety.
 *
 * @param request ReleaseMem0PublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseMem0PublicConnectionResponse
 */
ReleaseMem0PublicConnectionResponse Client::releaseMem0PublicConnectionWithOptions(const ReleaseMem0PublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseMem0PublicConnection"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseMem0PublicConnectionResponse>();
}

/**
 * @summary Releases the public domain name for a Mem0 instance.
 *
 * @description This operation is used to verify that no active connections exist before a rollback task to ensure operational safety.
 *
 * @param request ReleaseMem0PublicConnectionRequest
 * @return ReleaseMem0PublicConnectionResponse
 */
ReleaseMem0PublicConnectionResponse Client::releaseMem0PublicConnection(const ReleaseMem0PublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseMem0PublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets the password of an account.
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

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Resets the password of an account.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Resets the password of an account.
 *
 * @description ****.
 *
 * @param request ResetAccountPasswordRestrictRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordRestrictResponse
 */
ResetAccountPasswordRestrictResponse Client::resetAccountPasswordRestrictWithOptions(const ResetAccountPasswordRestrictRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityAccountName()) {
    query["SecurityAccountName"] = request.getSecurityAccountName();
  }

  if (!!request.hasSecurityAccountPassword()) {
    query["SecurityAccountPassword"] = request.getSecurityAccountPassword();
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
 * @summary Resets the password of an account.
 *
 * @description ****.
 *
 * @param request ResetAccountPasswordRestrictRequest
 * @return ResetAccountPasswordRestrictResponse
 */
ResetAccountPasswordRestrictResponse Client::resetAccountPasswordRestrict(const ResetAccountPasswordRestrictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordRestrictWithOptions(request, runtime);
}

/**
 * @summary Resets the API key of the memory engine.
 *
 * @description ****.
 *
 * @param request ResetMem0AccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetMem0AccountPasswordResponse
 */
ResetMem0AccountPasswordResponse Client::resetMem0AccountPasswordWithOptions(const ResetMem0AccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasMem0ApiKey()) {
    query["Mem0ApiKey"] = request.getMem0ApiKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetMem0AccountPassword"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetMem0AccountPasswordResponse>();
}

/**
 * @summary Resets the API key of the memory engine.
 *
 * @description ****.
 *
 * @param request ResetMem0AccountPasswordRequest
 * @return ResetMem0AccountPasswordResponse
 */
ResetMem0AccountPasswordResponse Client::resetMem0AccountPassword(const ResetMem0AccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetMem0AccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an instance by calling the RestartDBInstance operation.
 *
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Restarts an instance by calling the RestartDBInstance operation.
 *
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Restarts a data import task.
 *
 * @param request RestartDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDataImportTaskResponse
 */
RestartDataImportTaskResponse Client::restartDataImportTaskWithOptions(const RestartDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Restarts a data import task.
 *
 * @param request RestartDataImportTaskRequest
 * @return RestartDataImportTaskResponse
 */
RestartDataImportTaskResponse Client::restartDataImportTask(const RestartDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary Restarts a Supabase instance.
 *
 * @description ****
 *
 * @param request RestartSupabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartSupabaseInstanceResponse
 */
RestartSupabaseInstanceResponse Client::restartSupabaseInstanceWithOptions(const RestartSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartSupabaseInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartSupabaseInstanceResponse>();
}

/**
 * @summary Restarts a Supabase instance.
 *
 * @description ****
 *
 * @param request RestartSupabaseInstanceRequest
 * @return RestartSupabaseInstanceResponse
 */
RestartSupabaseInstanceResponse Client::restartSupabaseInstance(const RestartSupabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartSupabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary 克隆PolarDB-X实例
 *
 * @description ****
 *
 * @param request RestoreDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreDBInstanceResponse
 */
RestoreDBInstanceResponse Client::restoreDBInstanceWithOptions(const RestoreDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupSetRegion()) {
    query["BackupSetRegion"] = request.getBackupSetRegion();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.getCNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloneInstanceName()) {
    query["CloneInstanceName"] = request.getCloneInstanceName();
  }

  if (!!request.hasCnClass()) {
    query["CnClass"] = request.getCnClass();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.getDBNodeClass();
  }

  if (!!request.hasDBNodeCount()) {
    query["DBNodeCount"] = request.getDBNodeCount();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.getDNNodeCount();
  }

  if (!!request.hasDnClass()) {
    query["DnClass"] = request.getDnClass();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGdnRole()) {
    query["GdnRole"] = request.getGdnRole();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrimaryZone()) {
    query["PrimaryZone"] = request.getPrimaryZone();
  }

  if (!!request.hasRecoveryTypeCode()) {
    query["RecoveryTypeCode"] = request.getRecoveryTypeCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSecondaryZone()) {
    query["SecondaryZone"] = request.getSecondaryZone();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.getSeries();
  }

  if (!!request.hasSourceInstanceRegion()) {
    query["SourceInstanceRegion"] = request.getSourceInstanceRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTertiaryZone()) {
    query["TertiaryZone"] = request.getTertiaryZone();
  }

  if (!!request.hasTopologyType()) {
    query["TopologyType"] = request.getTopologyType();
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
    {"action" , "RestoreDBInstance"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreDBInstanceResponse>();
}

/**
 * @summary 克隆PolarDB-X实例
 *
 * @description ****
 *
 * @param request RestoreDBInstanceRequest
 * @return RestoreDBInstanceResponse
 */
RestoreDBInstanceResponse Client::restoreDBInstance(const RestoreDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreDBInstanceWithOptions(request, runtime);
}

/**
 * @summary This API is used to skip the current step.
 *
 * @param request SkipCurrentStepRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipCurrentStepResponse
 */
SkipCurrentStepResponse Client::skipCurrentStepWithOptions(const SkipCurrentStepRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentStep()) {
    query["CurrentStep"] = request.getCurrentStep();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary This API is used to skip the current step.
 *
 * @param request SkipCurrentStepRequest
 * @return SkipCurrentStepResponse
 */
SkipCurrentStepResponse Client::skipCurrentStep(const SkipCurrentStepRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipCurrentStepWithOptions(request, runtime);
}

/**
 * @summary Starts a database cutover for a database migration or synchronization task.
 *
 * @param request StartSwitchDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSwitchDatabaseResponse
 */
StartSwitchDatabaseResponse Client::startSwitchDatabaseWithOptions(const StartSwitchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDstMainConnectString()) {
    query["DstMainConnectString"] = request.getDstMainConnectString();
  }

  if (!!request.hasDstMainPort()) {
    query["DstMainPort"] = request.getDstMainPort();
  }

  if (!!request.hasIsModifyEndpoint()) {
    query["IsModifyEndpoint"] = request.getIsModifyEndpoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
  }

  if (!!request.hasSrcMainConnectString()) {
    query["SrcMainConnectString"] = request.getSrcMainConnectString();
  }

  if (!!request.hasSrcMainPort()) {
    query["SrcMainPort"] = request.getSrcMainPort();
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
 * @summary Starts a database cutover for a database migration or synchronization task.
 *
 * @param request StartSwitchDatabaseRequest
 * @return StartSwitchDatabaseResponse
 */
StartSwitchDatabaseResponse Client::startSwitchDatabase(const StartSwitchDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSwitchDatabaseWithOptions(request, runtime);
}

/**
 * @summary Stops a data import task.
 *
 * @param request StopDataImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDataImportTaskResponse
 */
StopDataImportTaskResponse Client::stopDataImportTaskWithOptions(const StopDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSlinkTaskId()) {
    query["SlinkTaskId"] = request.getSlinkTaskId();
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
 * @summary Stops a data import task.
 *
 * @param request StopDataImportTaskRequest
 * @return StopDataImportTaskResponse
 */
StopDataImportTaskResponse Client::stopDataImportTask(const StopDataImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDataImportTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a SQL flashback task by calling the SubmitSqlFlashbackTask operation.
 *
 * @param request SubmitSqlFlashbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSqlFlashbackTaskResponse
 */
SubmitSqlFlashbackTaskResponse Client::submitSqlFlashbackTaskWithOptions(const SubmitSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPolardbxInstanceId()) {
    query["PolardbxInstanceId"] = request.getPolardbxInstanceId();
  }

  if (!!request.hasRecallRestoreType()) {
    query["RecallRestoreType"] = request.getRecallRestoreType();
  }

  if (!!request.hasRecallType()) {
    query["RecallType"] = request.getRecallType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSqlPk()) {
    query["SqlPk"] = request.getSqlPk();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.getTraceId();
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
 * @summary Creates a SQL flashback task by calling the SubmitSqlFlashbackTask operation.
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
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  if (!!request.hasTargetPrimaryAzoneId()) {
    query["TargetPrimaryAzoneId"] = request.getTargetPrimaryAzoneId();
  }

  if (!!request.hasTargetPrimaryRegionId()) {
    query["TargetPrimaryRegionId"] = request.getTargetPrimaryRegionId();
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
 * @summary Performs a primary/secondary switchover for a global database network (GDN).
 *
 * @param request SwitchGdnMemberRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchGdnMemberRoleResponse
 */
SwitchGdnMemberRoleResponse Client::switchGdnMemberRoleWithOptions(const SwitchGdnMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDstMainConnectString()) {
    query["DstMainConnectString"] = request.getDstMainConnectString();
  }

  if (!!request.hasDstMainPort()) {
    query["DstMainPort"] = request.getDstMainPort();
  }

  if (!!request.hasIsModifyEndpoint()) {
    query["IsModifyEndpoint"] = request.getIsModifyEndpoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSrcMainConnectString()) {
    query["SrcMainConnectString"] = request.getSrcMainConnectString();
  }

  if (!!request.hasSrcMainPort()) {
    query["SrcMainPort"] = request.getSrcMainPort();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
  }

  if (!!request.hasTaskTimeout()) {
    query["TaskTimeout"] = request.getTaskTimeout();
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
 * @summary Performs a primary/secondary switchover for a global database network (GDN).
 *
 * @param request SwitchGdnMemberRoleRequest
 * @return SwitchGdnMemberRoleResponse
 */
SwitchGdnMemberRoleResponse Client::switchGdnMemberRole(const SwitchGdnMemberRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchGdnMemberRoleWithOptions(request, runtime);
}

/**
 * @summary Calls the TagResources operation to add tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Calls the TagResources operation to add tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a resource.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Calls the UpdateBackupPolicy operation to modify the backup policy of an instance.
 *
 * @param request UpdateBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicyWithOptions(const UpdateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.getBackupPeriod();
  }

  if (!!request.hasBackupPlanBegin()) {
    query["BackupPlanBegin"] = request.getBackupPlanBegin();
  }

  if (!!request.hasBackupSetRetention()) {
    query["BackupSetRetention"] = request.getBackupSetRetention();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasBackupWay()) {
    query["BackupWay"] = request.getBackupWay();
  }

  if (!!request.hasColdDataBackupInterval()) {
    query["ColdDataBackupInterval"] = request.getColdDataBackupInterval();
  }

  if (!!request.hasColdDataBackupRetention()) {
    query["ColdDataBackupRetention"] = request.getColdDataBackupRetention();
  }

  if (!!request.hasCrossRegionDataBackupRetention()) {
    query["CrossRegionDataBackupRetention"] = request.getCrossRegionDataBackupRetention();
  }

  if (!!request.hasCrossRegionFilterValue()) {
    query["CrossRegionFilterValue"] = request.getCrossRegionFilterValue();
  }

  if (!!request.hasCrossRegionLogBackupRetention()) {
    query["CrossRegionLogBackupRetention"] = request.getCrossRegionLogBackupRetention();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDestCrossRegion()) {
    query["DestCrossRegion"] = request.getDestCrossRegion();
  }

  if (!!request.hasForceCleanOnHighSpaceUsage()) {
    query["ForceCleanOnHighSpaceUsage"] = request.getForceCleanOnHighSpaceUsage();
  }

  if (!!request.hasIsCrossRegionDataBackupEnabled()) {
    query["IsCrossRegionDataBackupEnabled"] = request.getIsCrossRegionDataBackupEnabled();
  }

  if (!!request.hasIsCrossRegionLogBackupEnabled()) {
    query["IsCrossRegionLogBackupEnabled"] = request.getIsCrossRegionLogBackupEnabled();
  }

  if (!!request.hasIsEnabled()) {
    query["IsEnabled"] = request.getIsEnabled();
  }

  if (!!request.hasLocalLogRetention()) {
    query["LocalLogRetention"] = request.getLocalLogRetention();
  }

  if (!!request.hasLocalLogRetentionNumber()) {
    query["LocalLogRetentionNumber"] = request.getLocalLogRetentionNumber();
  }

  if (!!request.hasLogLocalRetentionSpace()) {
    query["LogLocalRetentionSpace"] = request.getLogLocalRetentionSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoveLogRetention()) {
    query["RemoveLogRetention"] = request.getRemoveLogRetention();
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
 * @summary Calls the UpdateBackupPolicy operation to modify the backup policy of an instance.
 *
 * @param request UpdateBackupPolicyRequest
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicy(const UpdateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 更新实例的管控参数
 *
 * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
 *
 * @param request UpdateCustinsParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustinsParamResponse
 */
UpdateCustinsParamResponse Client::updateCustinsParamWithOptions(const UpdateCustinsParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustinsParam"},
    {"version" , "2020-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustinsParamResponse>();
}

/**
 * @summary 更新实例的管控参数
 *
 * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
 *
 * @param request UpdateCustinsParamRequest
 * @return UpdateCustinsParamResponse
 */
UpdateCustinsParamResponse Client::updateCustinsParam(const UpdateCustinsParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustinsParamWithOptions(request, runtime);
}

/**
 * @summary Updates the SSL configuration of an instance.
 *
 * @param request UpdateDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDBInstanceSSLResponse
 */
UpdateDBInstanceSSLResponse Client::updateDBInstanceSSLWithOptions(const UpdateDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertCommonName()) {
    query["CertCommonName"] = request.getCertCommonName();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.getEnableSSL();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Updates the SSL configuration of an instance.
 *
 * @param request UpdateDBInstanceSSLRequest
 * @return UpdateDBInstanceSSLResponse
 */
UpdateDBInstanceSSLResponse Client::updateDBInstanceSSL(const UpdateDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Enables Transparent Data Encryption (TDE) for an instance by calling the UpdateDBInstanceTDE operation.
 *
 * @param request UpdateDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDBInstanceTDEResponse
 */
UpdateDBInstanceTDEResponse Client::updateDBInstanceTDEWithOptions(const UpdateDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Enables Transparent Data Encryption (TDE) for an instance by calling the UpdateDBInstanceTDE operation.
 *
 * @param request UpdateDBInstanceTDERequest
 * @return UpdateDBInstanceTDEResponse
 */
UpdateDBInstanceTDEResponse Client::updateDBInstanceTDE(const UpdateDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary Calls the UpdatePolarDBXInstanceNode operation to change the number of nodes for an instance, including scaling out and scaling in. This request generates a billable order.
 *
 * @param request UpdatePolarDBXInstanceNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolarDBXInstanceNodeResponse
 */
UpdatePolarDBXInstanceNodeResponse Client::updatePolarDBXInstanceNodeWithOptions(const UpdatePolarDBXInstanceNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddDNSpec()) {
    query["AddDNSpec"] = request.getAddDNSpec();
  }

  if (!!request.hasCNNodeCount()) {
    query["CNNodeCount"] = request.getCNNodeCount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDNNodeCount()) {
    query["DNNodeCount"] = request.getDNNodeCount();
  }

  if (!!request.hasDbInstanceNodeCount()) {
    query["DbInstanceNodeCount"] = request.getDbInstanceNodeCount();
  }

  if (!!request.hasDeleteDNIds()) {
    query["DeleteDNIds"] = request.getDeleteDNIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStoragePoolName()) {
    query["StoragePoolName"] = request.getStoragePoolName();
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
 * @summary Calls the UpdatePolarDBXInstanceNode operation to change the number of nodes for an instance, including scaling out and scaling in. This request generates a billable order.
 *
 * @param request UpdatePolarDBXInstanceNodeRequest
 * @return UpdatePolarDBXInstanceNodeResponse
 */
UpdatePolarDBXInstanceNodeResponse Client::updatePolarDBXInstanceNode(const UpdatePolarDBXInstanceNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolarDBXInstanceNodeWithOptions(request, runtime);
}

/**
 * @summary Upgrades the CDC node version of a PolarDB-X instance.
 *
 * @param request UpgradeCDCVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeCDCVersionResponse
 */
UpgradeCDCVersionResponse Client::upgradeCDCVersionWithOptions(const UpgradeCDCVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdcDbVersion()) {
    query["CdcDbVersion"] = request.getCdcDbVersion();
  }

  if (!!request.hasCdcMinorVersion()) {
    query["CdcMinorVersion"] = request.getCdcMinorVersion();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
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
 * @summary Upgrades the CDC node version of a PolarDB-X instance.
 *
 * @param request UpgradeCDCVersionRequest
 * @return UpgradeCDCVersionResponse
 */
UpgradeCDCVersionResponse Client::upgradeCDCVersion(const UpgradeCDCVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeCDCVersionWithOptions(request, runtime);
}

/**
 * @summary Updates the column store version.
 *
 * @param request UpgradeColumnarVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeColumnarVersionResponse
 */
UpgradeColumnarVersionResponse Client::upgradeColumnarVersionWithOptions(const UpgradeColumnarVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnarVersion()) {
    query["ColumnarVersion"] = request.getColumnarVersion();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
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
 * @summary Updates the column store version.
 *
 * @param request UpgradeColumnarVersionRequest
 * @return UpgradeColumnarVersionResponse
 */
UpgradeColumnarVersionResponse Client::upgradeColumnarVersion(const UpgradeColumnarVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeColumnarVersionWithOptions(request, runtime);
}

/**
 * @summary Invokes the UpgradeDBInstanceKernelVersion operation to update the kernel version of an instance.
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersionWithOptions(const UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasMinorVersion()) {
    query["MinorVersion"] = request.getMinorVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.getSwitchMode();
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
 * @summary Invokes the UpgradeDBInstanceKernelVersion operation to update the kernel version of an instance.
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Polardbx20200202