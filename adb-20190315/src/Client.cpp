#include <darabonba/Core.hpp>
#include <alibabacloud/Adb20190315.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Adb20190315::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Adb20190315
{

AlibabaCloud::Adb20190315::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "adb.aliyuncs.com"},
    {"cn-beijing" , "adb.aliyuncs.com"},
    {"cn-hangzhou" , "adb.aliyuncs.com"},
    {"cn-shanghai" , "adb.aliyuncs.com"},
    {"cn-shenzhen" , "adb.aliyuncs.com"},
    {"cn-hongkong" , "adb.aliyuncs.com"},
    {"ap-southeast-1" , "adb.aliyuncs.com"},
    {"us-west-1" , "adb.aliyuncs.com"},
    {"us-east-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "adb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "adb.aliyuncs.com"},
    {"ap-northeast-2-pop" , "adb.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "adb.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "adb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "adb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "adb.aliyuncs.com"},
    {"cn-edge-1" , "adb.aliyuncs.com"},
    {"cn-fujian" , "adb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "adb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "adb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "adb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "adb.aliyuncs.com"},
    {"cn-qingdao-nebula" , "adb.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "adb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "adb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "adb.aliyuncs.com"},
    {"cn-shanghai-inner" , "adb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "adb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "adb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "adb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "adb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "adb.aliyuncs.com"},
    {"cn-wuhan" , "adb.aliyuncs.com"},
    {"cn-yushanfang" , "adb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "adb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "adb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "adb.aliyuncs.com"},
    {"eu-west-1-oxs" , "adb.ap-northeast-1.aliyuncs.com"},
    {"me-east-1" , "adb.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "adb.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("adb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 申请公网链接
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
    {"version" , "2019-03-15"},
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
 * @summary 申请公网链接
 *
 * @param request AllocateClusterPublicConnectionRequest
 * @return AllocateClusterPublicConnectionResponse
 */
AllocateClusterPublicConnectionResponse Client::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary ApplyAdviceById
 *
 * @param request ApplyAdviceByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAdviceByIdResponse
 */
ApplyAdviceByIdResponse Client::applyAdviceByIdWithOptions(const ApplyAdviceByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceId()) {
    query["AdviceId"] = request.adviceId();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasBuildImmediately()) {
    query["BuildImmediately"] = request.buildImmediately();
  }

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
    {"action" , "ApplyAdviceById"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAdviceByIdResponse>();
}

/**
 * @summary ApplyAdviceById
 *
 * @param request ApplyAdviceByIdRequest
 * @return ApplyAdviceByIdResponse
 */
ApplyAdviceByIdResponse Client::applyAdviceById(const ApplyAdviceByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAdviceByIdWithOptions(request, runtime);
}

/**
 * @summary 打通用户ENI
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
 *
 * @param request AttachUserENIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachUserENIResponse
 */
AttachUserENIResponse Client::attachUserENIWithOptions(const AttachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "AttachUserENI"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachUserENIResponse>();
}

/**
 * @summary 打通用户ENI
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
 *
 * @param request AttachUserENIRequest
 * @return AttachUserENIResponse
 */
AttachUserENIResponse Client::attachUserENI(const AttachUserENIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachUserENIWithOptions(request, runtime);
}

/**
 * @summary BatchApplyAdviceByIdList
 *
 * @param request BatchApplyAdviceByIdListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchApplyAdviceByIdListResponse
 */
BatchApplyAdviceByIdListResponse Client::batchApplyAdviceByIdListWithOptions(const BatchApplyAdviceByIdListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceIdList()) {
    query["AdviceIdList"] = request.adviceIdList();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasBuildImmediately()) {
    query["BuildImmediately"] = request.buildImmediately();
  }

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
    {"action" , "BatchApplyAdviceByIdList"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchApplyAdviceByIdListResponse>();
}

/**
 * @summary BatchApplyAdviceByIdList
 *
 * @param request BatchApplyAdviceByIdListRequest
 * @return BatchApplyAdviceByIdListResponse
 */
BatchApplyAdviceByIdListResponse Client::batchApplyAdviceByIdList(const BatchApplyAdviceByIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchApplyAdviceByIdListWithOptions(request, runtime);
}

/**
 * @summary Associates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster with a database account.
 *
 * @description ## Precautions
 * *   This operation is applicable only for elastic clusters of 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be associated with a database account.
 *
 * @param request BindDBResourceGroupWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDBResourceGroupWithUserResponse
 */
BindDBResourceGroupWithUserResponse Client::bindDBResourceGroupWithUserWithOptions(const BindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupUser()) {
    query["GroupUser"] = request.groupUser();
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
    {"action" , "BindDBResourceGroupWithUser"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDBResourceGroupWithUserResponse>();
}

/**
 * @summary Associates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster with a database account.
 *
 * @description ## Precautions
 * *   This operation is applicable only for elastic clusters of 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be associated with a database account.
 *
 * @param request BindDBResourceGroupWithUserRequest
 * @return BindDBResourceGroupWithUserResponse
 */
BindDBResourceGroupWithUserResponse Client::bindDBResourceGroupWithUser(const BindDBResourceGroupWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDBResourceGroupWithUserWithOptions(request, runtime);
}

/**
 * @summary 绑定资源组用户
 *
 * @description *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be associated with a database account.
 *
 * @param request BindDBResourcePoolWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDBResourcePoolWithUserResponse
 */
BindDBResourcePoolWithUserResponse Client::bindDBResourcePoolWithUserWithOptions(const BindDBResourcePoolWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasPoolUser()) {
    query["PoolUser"] = request.poolUser();
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
    {"action" , "BindDBResourcePoolWithUser"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDBResourcePoolWithUserResponse>();
}

/**
 * @summary 绑定资源组用户
 *
 * @description *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be associated with a database account.
 *
 * @param request BindDBResourcePoolWithUserRequest
 * @return BindDBResourcePoolWithUserResponse
 */
BindDBResourcePoolWithUserResponse Client::bindDBResourcePoolWithUser(const BindDBResourcePoolWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDBResourcePoolWithUserWithOptions(request, runtime);
}

/**
 * @summary Cancels O\\&M events.
 *
 * @param request CancelActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasksWithOptions(const CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2019-03-15"},
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
 * @summary Cancels O\\&M events.
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Checks whether a service-linked role is created.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2019-03-15"},
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
 * @summary Checks whether a service-linked role is created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a database account for an AnalyticDB for MySQL cluster.
 *
 * @param tmpReq CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAccountShrinkRequest request = CreateAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

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

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2019-03-15"},
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
 * @summary Creates a database account for an AnalyticDB for MySQL cluster.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @description After you create a cluster, you are billed for the cluster specifications that you select. For more information about the billable items and pricing for Data Warehouse Edition  clusters, see [Billable items of Data Warehouse Edition](https://help.aliyun.com/document_detail/303131.html) and [Pricing for Data Warehouse Edition](https://help.aliyun.com/document_detail/135229.html).
 *
 * @param request CreateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBClusterWithOptions(const CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetID()) {
    query["BackupSetID"] = request.backupSetID();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
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

  if (!!request.hasDiskEncryption()) {
    query["DiskEncryption"] = request.diskEncryption();
  }

  if (!!request.hasElasticIOResource()) {
    query["ElasticIOResource"] = request.elasticIOResource();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.enableSSL();
  }

  if (!!request.hasExecutorCount()) {
    query["ExecutorCount"] = request.executorCount();
  }

  if (!!request.hasKmsId()) {
    query["KmsId"] = request.kmsId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.restoreType();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.sourceDBInstanceName();
  }

  if (!!request.hasStorageResource()) {
    query["StorageResource"] = request.storageResource();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
    {"version" , "2019-03-15"},
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
 * @summary Creates an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @description After you create a cluster, you are billed for the cluster specifications that you select. For more information about the billable items and pricing for Data Warehouse Edition  clusters, see [Billable items of Data Warehouse Edition](https://help.aliyun.com/document_detail/303131.html) and [Pricing for Data Warehouse Edition](https://help.aliyun.com/document_detail/135229.html).
 *
 * @param request CreateDBClusterRequest
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBCluster(const CreateDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a resource group for an AnalyticDB for MySQL cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
 *
 * @param tmpReq CreateDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroupWithOptions(const CreateDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBResourceGroupShrinkRequest request = CreateDBResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEngineParams()) {
    request.setEngineParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.engineParams(), "EngineParams", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.clusterMode();
  }

  if (!!request.hasClusterSizeResource()) {
    query["ClusterSizeResource"] = request.clusterSizeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasEngineParamsShrink()) {
    query["EngineParams"] = request.engineParamsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasMaxClusterCount()) {
    query["MaxClusterCount"] = request.maxClusterCount();
  }

  if (!!request.hasMaxComputeResource()) {
    query["MaxComputeResource"] = request.maxComputeResource();
  }

  if (!!request.hasMinClusterCount()) {
    query["MinClusterCount"] = request.minClusterCount();
  }

  if (!!request.hasMinComputeResource()) {
    query["MinComputeResource"] = request.minComputeResource();
  }

  if (!!request.hasNodeNum()) {
    query["NodeNum"] = request.nodeNum();
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
    {"action" , "CreateDBResourceGroup"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResourceGroupResponse>();
}

/**
 * @summary Creates a resource group for an AnalyticDB for MySQL cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
 *
 * @param request CreateDBResourceGroupRequest
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroup(const CreateDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 创建资源组
 *
 * @description This operation is applicable only for elastic clusters of 32 cores or more.
 *
 * @param request CreateDBResourcePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResourcePoolResponse
 */
CreateDBResourcePoolResponse Client::createDBResourcePoolWithOptions(const CreateDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNodeNum()) {
    query["NodeNum"] = request.nodeNum();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
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
    {"action" , "CreateDBResourcePool"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResourcePoolResponse>();
}

/**
 * @summary 创建资源组
 *
 * @description This operation is applicable only for elastic clusters of 32 cores or more.
 *
 * @param request CreateDBResourcePoolRequest
 * @return CreateDBResourcePoolResponse
 */
CreateDBResourcePoolResponse Client::createDBResourcePool(const CreateDBResourcePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBResourcePoolWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request CreateElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlanWithOptions(const CreateElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanEnable()) {
    query["ElasticPlanEnable"] = request.elasticPlanEnable();
  }

  if (!!request.hasElasticPlanEndDay()) {
    query["ElasticPlanEndDay"] = request.elasticPlanEndDay();
  }

  if (!!request.hasElasticPlanMonthlyRepeat()) {
    query["ElasticPlanMonthlyRepeat"] = request.elasticPlanMonthlyRepeat();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasElasticPlanNodeNum()) {
    query["ElasticPlanNodeNum"] = request.elasticPlanNodeNum();
  }

  if (!!request.hasElasticPlanStartDay()) {
    query["ElasticPlanStartDay"] = request.elasticPlanStartDay();
  }

  if (!!request.hasElasticPlanTimeEnd()) {
    query["ElasticPlanTimeEnd"] = request.elasticPlanTimeEnd();
  }

  if (!!request.hasElasticPlanTimeStart()) {
    query["ElasticPlanTimeStart"] = request.elasticPlanTimeStart();
  }

  if (!!request.hasElasticPlanType()) {
    query["ElasticPlanType"] = request.elasticPlanType();
  }

  if (!!request.hasElasticPlanWeeklyRepeat()) {
    query["ElasticPlanWeeklyRepeat"] = request.elasticPlanWeeklyRepeat();
  }

  if (!!request.hasElasticPlanWorkerSpec()) {
    query["ElasticPlanWorkerSpec"] = request.elasticPlanWorkerSpec();
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

  if (!!request.hasResourcePoolName()) {
    query["ResourcePoolName"] = request.resourcePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateElasticPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateElasticPlanResponse>();
}

/**
 * @summary Creates a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request CreateElasticPlanRequest
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlan(const CreateElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createElasticPlanWithOptions(request, runtime);
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2019-03-15"},
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
 * @summary 删除高权限帐号
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
    {"action" , "DeleteAccount"},
    {"version" , "2019-03-15"},
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
 * @summary 删除高权限帐号
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Manually deletes backup sets.
 *
 * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
 * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupsResponse
 */
DeleteBackupsResponse Client::deleteBackupsWithOptions(const DeleteBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackups"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupsResponse>();
}

/**
 * @summary Manually deletes backup sets.
 *
 * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
 * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteBackupsRequest
 * @return DeleteBackupsResponse
 */
DeleteBackupsResponse Client::deleteBackups(const DeleteBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupsWithOptions(request, runtime);
}

/**
 * @summary Deletes an AnalyticDB for MySQL cluster.
 *
 * @description *   You cannot delete subscription clusters by calling API operations. After expiration, subscription clusters are automatically released. If you no longer need a cluster, you can unsubscribe from the cluster in the Expenses and Costs console. For information about cluster refunds, see [Refund policy](https://help.aliyun.com/document_detail/471477.html).
 * *   After you delete a cluster, resources of the cluster are immediately released, and data of the cluster is no longer retained and cannot be restored. Proceed with caution.
 * *   The cluster that you want to delete must be in the Running state.
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
    {"version" , "2019-03-15"},
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
 * @summary Deletes an AnalyticDB for MySQL cluster.
 *
 * @description *   You cannot delete subscription clusters by calling API operations. After expiration, subscription clusters are automatically released. If you no longer need a cluster, you can unsubscribe from the cluster in the Expenses and Costs console. For information about cluster refunds, see [Refund policy](https://help.aliyun.com/document_detail/471477.html).
 * *   After you delete a cluster, resources of the cluster are immediately released, and data of the cluster is no longer retained and cannot be restored. Proceed with caution.
 * *   The cluster that you want to delete must be in the Running state.
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group from an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @description ### Precautions
 * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be deleted.
 *
 * @param request DeleteDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroupWithOptions(const DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
    {"action" , "DeleteDBResourceGroup"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group from an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @description ### Precautions
 * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be deleted.
 *
 * @param request DeleteDBResourceGroupRequest
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroup(const DeleteDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 删除资源组
 *
 * @description **Precautions**
 * *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be deleted.
 *
 * @param request DeleteDBResourcePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResourcePoolResponse
 */
DeleteDBResourcePoolResponse Client::deleteDBResourcePoolWithOptions(const DeleteDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
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
    {"action" , "DeleteDBResourcePool"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResourcePoolResponse>();
}

/**
 * @summary 删除资源组
 *
 * @description **Precautions**
 * *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   The default resource group USER_DEFAULT cannot be deleted.
 *
 * @param request DeleteDBResourcePoolRequest
 * @return DeleteDBResourcePoolResponse
 */
DeleteDBResourcePoolResponse Client::deleteDBResourcePool(const DeleteDBResourcePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBResourcePoolWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduled scaling plan. You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition clusters in elastic mode for Cluster Edition.
 *
 * @param request DeleteElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteElasticPlanResponse
 */
DeleteElasticPlanResponse Client::deleteElasticPlanWithOptions(const DeleteElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
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
    {"action" , "DeleteElasticPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteElasticPlanResponse>();
}

/**
 * @summary Deletes a scheduled scaling plan. You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition clusters in elastic mode for Cluster Edition.
 *
 * @param request DeleteElasticPlanRequest
 * @return DeleteElasticPlanResponse
 */
DeleteElasticPlanResponse Client::deleteElasticPlan(const DeleteElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Queries abnormal SQL patterns within a time range.
 *
 * @param request DescribeAbnormalPatternDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAbnormalPatternDetectionResponse
 */
DescribeAbnormalPatternDetectionResponse Client::describeAbnormalPatternDetectionWithOptions(const DescribeAbnormalPatternDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAbnormalPatternDetection"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAbnormalPatternDetectionResponse>();
}

/**
 * @summary Queries abnormal SQL patterns within a time range.
 *
 * @param request DescribeAbnormalPatternDetectionRequest
 * @return DescribeAbnormalPatternDetectionResponse
 */
DescribeAbnormalPatternDetectionResponse Client::describeAbnormalPatternDetection(const DescribeAbnormalPatternDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAbnormalPatternDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of database accounts for an AnalyticDB for MySQL cluster.
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

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of database accounts for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information about O\\&M tasks.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConfWithOptions(const DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationMaintainConf"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the configuration information about O\\&M tasks.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Queries the information about O\\&M tasks.
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

  if (!!request.hasDbType()) {
    query["DbType"] = request.dbType();
  }

  if (!!request.hasInsName()) {
    query["InsName"] = request.insName();
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

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
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
    {"version" , "2019-03-15"},
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
 * @summary Queries the information about O\\&M tasks.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries whether the suggestion feature is enabled for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAdviceServiceEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdviceServiceEnabledResponse
 */
DescribeAdviceServiceEnabledResponse Client::describeAdviceServiceEnabledWithOptions(const DescribeAdviceServiceEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeAdviceServiceEnabled"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdviceServiceEnabledResponse>();
}

/**
 * @summary Queries whether the suggestion feature is enabled for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAdviceServiceEnabledRequest
 * @return DescribeAdviceServiceEnabledResponse
 */
DescribeAdviceServiceEnabledResponse Client::describeAdviceServiceEnabled(const DescribeAdviceServiceEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdviceServiceEnabledWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an account or the list of accounts of a specific database within an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAllAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllAccountsResponse
 */
DescribeAllAccountsResponse Client::describeAllAccountsWithOptions(const DescribeAllAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeAllAccounts"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllAccountsResponse>();
}

/**
 * @summary Queries the information about an account or the list of accounts of a specific database within an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAllAccountsRequest
 * @return DescribeAllAccountsResponse
 */
DescribeAllAccountsResponse Client::describeAllAccounts(const DescribeAllAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases, tables, and columns in a cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of databases, tables, and columns in a cluster.
 *
 * @param request DescribeAllDataSourceRequest
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSource(const DescribeAllDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAppliedAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppliedAdvicesResponse
 */
DescribeAppliedAdvicesResponse Client::describeAppliedAdvicesWithOptions(const DescribeAppliedAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceType()) {
    query["AdviceType"] = request.adviceType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSchemaTableName()) {
    query["SchemaTableName"] = request.schemaTableName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppliedAdvices"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppliedAdvicesResponse>();
}

/**
 * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAppliedAdvicesRequest
 * @return DescribeAppliedAdvicesResponse
 */
DescribeAppliedAdvicesResponse Client::describeAppliedAdvices(const DescribeAppliedAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppliedAdvicesWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL audit settings of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAuditLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogConfigResponse
 */
DescribeAuditLogConfigResponse Client::describeAuditLogConfigWithOptions(const DescribeAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeAuditLogConfig"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the SQL audit settings of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAuditLogConfigRequest
 * @return DescribeAuditLogConfigResponse
 */
DescribeAuditLogConfigResponse Client::describeAuditLogConfig(const DescribeAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
 *
 * @description Before you call the DescribeAuditLogRecords operation to query the SQL audit logs of an AnalyticDB for MySQL cluster, you must enable SQL audit for the cluster. You can call the [DescribeAuditLogConfig](https://help.aliyun.com/document_detail/190628.html) operation to query the status of SQL audit. If SQL audit is disabled, you can call the [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/190629.html) operation to enable SQL audit.
 * SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
 *
 * @param request DescribeAuditLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogRecordsResponse
 */
DescribeAuditLogRecordsResponse Client::describeAuditLogRecordsWithOptions(const DescribeAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.hostAddress();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.queryKeyword();
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

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSucceed()) {
    query["Succeed"] = request.succeed();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditLogRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogRecordsResponse>();
}

/**
 * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
 *
 * @description Before you call the DescribeAuditLogRecords operation to query the SQL audit logs of an AnalyticDB for MySQL cluster, you must enable SQL audit for the cluster. You can call the [DescribeAuditLogConfig](https://help.aliyun.com/document_detail/190628.html) operation to query the status of SQL audit. If SQL audit is disabled, you can call the [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/190629.html) operation to enable SQL audit.
 * SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
 *
 * @param request DescribeAuditLogRecordsRequest
 * @return DescribeAuditLogRecordsResponse
 */
DescribeAuditLogRecordsResponse Client::describeAuditLogRecords(const DescribeAuditLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Queries the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAutoRenewAttributeRequest
 * @return DescribeAutoRenewAttributeResponse
 */
DescribeAutoRenewAttributeResponse Client::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the available suggestions for cluster optimization.
 *
 * @param request DescribeAvailableAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableAdvicesResponse
 */
DescribeAvailableAdvicesResponse Client::describeAvailableAdvicesWithOptions(const DescribeAvailableAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceType()) {
    query["AdviceType"] = request.adviceType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSchemaTableName()) {
    query["SchemaTableName"] = request.schemaTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableAdvices"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableAdvicesResponse>();
}

/**
 * @summary Queries the available suggestions for cluster optimization.
 *
 * @param request DescribeAvailableAdvicesRequest
 * @return DescribeAvailableAdvicesResponse
 */
DescribeAvailableAdvicesResponse Client::describeAvailableAdvices(const DescribeAvailableAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableAdvicesWithOptions(request, runtime);
}

/**
 * @summary Queries the resources of clusters within zones of a region.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableResource"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the resources of clusters within zones of a region.
 *
 * @param request DescribeAvailableResourceRequest
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource(const DescribeAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary 查看备份策略
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
    {"version" , "2019-03-15"},
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
 * @summary 查看备份策略
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backup sets for an AnalyticDB for MySQL cluster.
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

  if (!!request.hasCrossRole()) {
    query["CrossRole"] = request.crossRole();
  }

  if (!!request.hasCrossUid()) {
    query["CrossUid"] = request.crossUid();
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
    {"action" , "DescribeBackups"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of backup sets for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the bad SQL statements that affect cluster stability within a time range.
 *
 * @param request DescribeBadSqlDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBadSqlDetectionResponse
 */
DescribeBadSqlDetectionResponse Client::describeBadSqlDetectionWithOptions(const DescribeBadSqlDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBadSqlDetection"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBadSqlDetectionResponse>();
}

/**
 * @summary Queries the bad SQL statements that affect cluster stability within a time range.
 *
 * @param request DescribeBadSqlDetectionRequest
 * @return DescribeBadSqlDetectionResponse
 */
DescribeBadSqlDetectionResponse Client::describeBadSqlDetection(const DescribeBadSqlDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBadSqlDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of columns in a table within an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of columns in a table within an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeColumnsRequest
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumns(const DescribeColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of computing resources for AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
 *
 * @param request DescribeComputeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComputeResourceResponse
 */
DescribeComputeResourceResponse Client::describeComputeResourceWithOptions(const DescribeComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
  }

  if (!!request.hasMigrate()) {
    query["Migrate"] = request.migrate();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComputeResource"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComputeResourceResponse>();
}

/**
 * @summary Queries the specifications of computing resources for AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
 *
 * @param request DescribeComputeResourceRequest
 * @return DescribeComputeResourceResponse
 */
DescribeComputeResourceResponse Client::describeComputeResource(const DescribeComputeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComputeResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the current number of connections to an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeConnectionCountRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConnectionCountRecordsResponse
 */
DescribeConnectionCountRecordsResponse Client::describeConnectionCountRecordsWithOptions(const DescribeConnectionCountRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeConnectionCountRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConnectionCountRecordsResponse>();
}

/**
 * @summary Queries the current number of connections to an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeConnectionCountRecordsRequest
 * @return DescribeConnectionCountRecordsResponse
 */
DescribeConnectionCountRecordsResponse Client::describeConnectionCountRecords(const DescribeConnectionCountRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConnectionCountRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the access layer.
 *
 * @param request DescribeControllerDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeControllerDetectionResponse
 */
DescribeControllerDetectionResponse Client::describeControllerDetectionWithOptions(const DescribeControllerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeControllerDetection"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeControllerDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the access layer.
 *
 * @param request DescribeControllerDetectionRequest
 * @return DescribeControllerDetectionResponse
 */
DescribeControllerDetectionResponse Client::describeControllerDetection(const DescribeControllerDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeControllerDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of IP address whitelists for an AnalyticDB for MySQL cluster.
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
    {"action" , "DescribeDBClusterAccessWhiteList"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of IP address whitelists for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterAccessWhiteListRequest
 * @return DescribeDBClusterAccessWhiteListResponse
 */
DescribeDBClusterAccessWhiteListResponse Client::describeDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AnalyticDB for MySQL cluster.
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
    {"action" , "DescribeDBClusterAttribute"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the information about an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterAttributeRequest
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询集群健康检查状态
 *
 * @param request DescribeDBClusterHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterHealthStatusResponse
 */
DescribeDBClusterHealthStatusResponse Client::describeDBClusterHealthStatusWithOptions(const DescribeDBClusterHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDBClusterHealthStatus"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterHealthStatusResponse>();
}

/**
 * @summary 查询集群健康检查状态
 *
 * @param request DescribeDBClusterHealthStatusRequest
 * @return DescribeDBClusterHealthStatusResponse
 */
DescribeDBClusterHealthStatusResponse Client::describeDBClusterHealthStatus(const DescribeDBClusterHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the network information about an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterNetInfoResponse
 */
DescribeDBClusterNetInfoResponse Client::describeDBClusterNetInfoWithOptions(const DescribeDBClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
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
    {"action" , "DescribeDBClusterNetInfo"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the network information about an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterNetInfoRequest
 * @return DescribeDBClusterNetInfoResponse
 */
DescribeDBClusterNetInfoResponse Client::describeDBClusterNetInfo(const DescribeDBClusterNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
 *
 * @description You can call this operation to query the performance data of a cluster over a time range based on its performance metrics. The data is collected every 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourcePools()) {
    query["ResourcePools"] = request.resourcePools();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterPerformance"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
 *
 * @description You can call this operation to query the performance data of a cluster over a time range based on its performance metrics. The data is collected every 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring information about resource groups within an AnalyticDB for MySQL cluster.
 *
 * @description > You can also view the monitoring information about resource groups within an AnalyticDB for MySQL cluster in elastic mode for Cluster Edition in the form of graphs in the console. For more information, see [View monitoring information](https://help.aliyun.com/document_detail/188721.html).
 *
 * @param request DescribeDBClusterResourcePoolPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterResourcePoolPerformanceResponse
 */
DescribeDBClusterResourcePoolPerformanceResponse Client::describeDBClusterResourcePoolPerformanceWithOptions(const DescribeDBClusterResourcePoolPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourcePools()) {
    query["ResourcePools"] = request.resourcePools();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterResourcePoolPerformance"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterResourcePoolPerformanceResponse>();
}

/**
 * @summary Queries the monitoring information about resource groups within an AnalyticDB for MySQL cluster.
 *
 * @description > You can also view the monitoring information about resource groups within an AnalyticDB for MySQL cluster in elastic mode for Cluster Edition in the form of graphs in the console. For more information, see [View monitoring information](https://help.aliyun.com/document_detail/188721.html).
 *
 * @param request DescribeDBClusterResourcePoolPerformanceRequest
 * @return DescribeDBClusterResourcePoolPerformanceResponse
 */
DescribeDBClusterResourcePoolPerformanceResponse Client::describeDBClusterResourcePoolPerformance(const DescribeDBClusterResourcePoolPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterResourcePoolPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
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
    {"action" , "DescribeDBClusterSSL"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request DescribeDBClusterSSLRequest
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSL(const DescribeDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the number of shards in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterShardNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterShardNumberResponse
 */
DescribeDBClusterShardNumberResponse Client::describeDBClusterShardNumberWithOptions(const DescribeDBClusterShardNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDBClusterShardNumber"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterShardNumberResponse>();
}

/**
 * @summary Queries the number of shards in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDBClusterShardNumberRequest
 * @return DescribeDBClusterShardNumberResponse
 */
DescribeDBClusterShardNumberResponse Client::describeDBClusterShardNumber(const DescribeDBClusterShardNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterShardNumberWithOptions(request, runtime);
}

/**
 * @summary Queries the storage overview information of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster, such as the total data size, hot data size, cold data size, and data growth.
 *
 * @param request DescribeDBClusterSpaceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterSpaceSummaryResponse
 */
DescribeDBClusterSpaceSummaryResponse Client::describeDBClusterSpaceSummaryWithOptions(const DescribeDBClusterSpaceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDBClusterSpaceSummary"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterSpaceSummaryResponse>();
}

/**
 * @summary Queries the storage overview information of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster, such as the total data size, hot data size, cold data size, and data growth.
 *
 * @param request DescribeDBClusterSpaceSummaryRequest
 * @return DescribeDBClusterSpaceSummaryResponse
 */
DescribeDBClusterSpaceSummaryResponse Client::describeDBClusterSpaceSummary(const DescribeDBClusterSpaceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSpaceSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the status of AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
 *
 * @param request DescribeDBClusterStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterStatusResponse
 */
DescribeDBClusterStatusResponse Client::describeDBClusterStatusWithOptions(const DescribeDBClusterStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterStatus"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterStatusResponse>();
}

/**
 * @summary Queries the status of AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
 *
 * @param request DescribeDBClusterStatusRequest
 * @return DescribeDBClusterStatusResponse
 */
DescribeDBClusterStatusResponse Client::describeDBClusterStatus(const DescribeDBClusterStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AnalyticDB for MySQL clusters within a region.
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

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
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
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of AnalyticDB for MySQL clusters within a region.
 *
 * @param request DescribeDBClustersRequest
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClusters(const DescribeDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a resource group for an AnalyticDB for MySQL cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
 *
 * @param request DescribeDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroupWithOptions(const DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
    {"action" , "DescribeDBResourceGroup"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBResourceGroupResponse>();
}

/**
 * @summary Queries the information about a resource group for an AnalyticDB for MySQL cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
 *
 * @param request DescribeDBResourceGroupRequest
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroup(const DescribeDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 查询资源组详情
 *
 * @description This operation is applicable only for elastic clusters of 32 cores or more.
 *
 * @param request DescribeDBResourcePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBResourcePoolResponse
 */
DescribeDBResourcePoolResponse Client::describeDBResourcePoolWithOptions(const DescribeDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
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
    {"action" , "DescribeDBResourcePool"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBResourcePoolResponse>();
}

/**
 * @summary 查询资源组详情
 *
 * @description This operation is applicable only for elastic clusters of 32 cores or more.
 *
 * @param request DescribeDBResourcePoolRequest
 * @return DescribeDBResourcePoolResponse
 */
DescribeDBResourcePoolResponse Client::describeDBResourcePool(const DescribeDBResourcePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBResourcePoolWithOptions(request, runtime);
}

/**
 * @summary Queries the deduplicated statistics of SQL statements that meet a condition of the resource group, database, username, and source IP address in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDiagnosisDimensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisDimensionsResponse
 */
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensionsWithOptions(const DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
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
    {"action" , "DescribeDiagnosisDimensions"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisDimensionsResponse>();
}

/**
 * @summary Queries the deduplicated statistics of SQL statements that meet a condition of the resource group, database, username, and source IP address in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDiagnosisDimensionsRequest
 * @return DescribeDiagnosisDimensionsResponse
 */
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensions(const DescribeDiagnosisDimensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisDimensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring information about queries within a time range.
 *
 * @param request DescribeDiagnosisMonitorPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisMonitorPerformanceResponse
 */
DescribeDiagnosisMonitorPerformanceResponse Client::describeDiagnosisMonitorPerformanceWithOptions(const DescribeDiagnosisMonitorPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
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
    {"action" , "DescribeDiagnosisMonitorPerformance"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisMonitorPerformanceResponse>();
}

/**
 * @summary Queries the monitoring information about queries within a time range.
 *
 * @param request DescribeDiagnosisMonitorPerformanceRequest
 * @return DescribeDiagnosisMonitorPerformanceResponse
 */
DescribeDiagnosisMonitorPerformanceResponse Client::describeDiagnosisMonitorPerformance(const DescribeDiagnosisMonitorPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisMonitorPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic information about SQL statements that meet a condition in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDiagnosisRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisRecordsResponse
 */
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecordsWithOptions(const DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxPeakMemory()) {
    query["MaxPeakMemory"] = request.maxPeakMemory();
  }

  if (!!request.hasMaxScanSize()) {
    query["MaxScanSize"] = request.maxScanSize();
  }

  if (!!request.hasMinPeakMemory()) {
    query["MinPeakMemory"] = request.minPeakMemory();
  }

  if (!!request.hasMinScanSize()) {
    query["MinScanSize"] = request.minScanSize();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatternId()) {
    query["PatternId"] = request.patternId();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisRecordsResponse>();
}

/**
 * @summary Queries the diagnostic information about SQL statements that meet a condition in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDiagnosisRecordsRequest
 * @return DescribeDiagnosisRecordsResponse
 */
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecords(const DescribeDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
 *
 * @param request DescribeDiagnosisSQLInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisSQLInfoResponse
 */
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfoWithOptions(const DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisSQLInfo"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisSQLInfoResponse>();
}

/**
 * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
 *
 * @param request DescribeDiagnosisSQLInfoRequest
 * @return DescribeDiagnosisSQLInfoResponse
 */
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfo(const DescribeDiagnosisSQLInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisSQLInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the execution information about distributed tasks in a stage of a query.
 *
 * @param request DescribeDiagnosisTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisTasksResponse
 */
DescribeDiagnosisTasksResponse Client::describeDiagnosisTasksWithOptions(const DescribeDiagnosisTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisTasks"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisTasksResponse>();
}

/**
 * @summary Queries the execution information about distributed tasks in a stage of a query.
 *
 * @param request DescribeDiagnosisTasksRequest
 * @return DescribeDiagnosisTasksResponse
 */
DescribeDiagnosisTasksResponse Client::describeDiagnosisTasks(const DescribeDiagnosisTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of download tasks for the last five SQL queries of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDownloadRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadRecordsResponse
 */
DescribeDownloadRecordsResponse Client::describeDownloadRecordsWithOptions(const DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadRecordsResponse>();
}

/**
 * @summary Queries a list of download tasks for the last five SQL queries of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeDownloadRecordsRequest
 * @return DescribeDownloadRecordsResponse
 */
DescribeDownloadRecordsResponse Client::describeDownloadRecords(const DescribeDownloadRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the range for the number of elastic I/O units (EIUs) for an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request DescribeEIURangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEIURangeResponse
 */
DescribeEIURangeResponse Client::describeEIURangeWithOptions(const DescribeEIURangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.operation();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasSubOperation()) {
    query["SubOperation"] = request.subOperation();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEIURange"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEIURangeResponse>();
}

/**
 * @summary Queries the range for the number of elastic I/O units (EIUs) for an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request DescribeEIURangeRequest
 * @return DescribeEIURangeResponse
 */
DescribeEIURangeResponse Client::describeEIURange(const DescribeEIURangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEIURangeWithOptions(request, runtime);
}

/**
 * @summary 查看日资源弹性
 *
 * @description This operation is available only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request DescribeElasticDailyPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticDailyPlanResponse
 */
DescribeElasticDailyPlanResponse Client::describeElasticDailyPlanWithOptions(const DescribeElasticDailyPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticDailyPlanDay()) {
    query["ElasticDailyPlanDay"] = request.elasticDailyPlanDay();
  }

  if (!!request.hasElasticDailyPlanStatusList()) {
    query["ElasticDailyPlanStatusList"] = request.elasticDailyPlanStatusList();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
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

  if (!!request.hasResourcePoolName()) {
    query["ResourcePoolName"] = request.resourcePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticDailyPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticDailyPlanResponse>();
}

/**
 * @summary 查看日资源弹性
 *
 * @description This operation is available only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request DescribeElasticDailyPlanRequest
 * @return DescribeElasticDailyPlanResponse
 */
DescribeElasticDailyPlanResponse Client::describeElasticDailyPlan(const DescribeElasticDailyPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticDailyPlanWithOptions(request, runtime);
}

/**
 * @summary Queries scaling plans of an AnalyticDB for MySQL cluster. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request DescribeElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlanResponse
 */
DescribeElasticPlanResponse Client::describeElasticPlanWithOptions(const DescribeElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanEnable()) {
    query["ElasticPlanEnable"] = request.elasticPlanEnable();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
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

  if (!!request.hasResourcePoolName()) {
    query["ResourcePoolName"] = request.resourcePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlanResponse>();
}

/**
 * @summary Queries scaling plans of an AnalyticDB for MySQL cluster. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request DescribeElasticPlanRequest
 * @return DescribeElasticPlanResponse
 */
DescribeElasticPlanResponse Client::describeElasticPlan(const DescribeElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Queries the tables that have excessive primary key fields in an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request DescribeExcessivePrimaryKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExcessivePrimaryKeysResponse
 */
DescribeExcessivePrimaryKeysResponse Client::describeExcessivePrimaryKeysWithOptions(const DescribeExcessivePrimaryKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
    {"action" , "DescribeExcessivePrimaryKeys"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExcessivePrimaryKeysResponse>();
}

/**
 * @summary Queries the tables that have excessive primary key fields in an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request DescribeExcessivePrimaryKeysRequest
 * @return DescribeExcessivePrimaryKeysResponse
 */
DescribeExcessivePrimaryKeysResponse Client::describeExcessivePrimaryKeys(const DescribeExcessivePrimaryKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExcessivePrimaryKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the compute layer.
 *
 * @param request DescribeExecutorDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExecutorDetectionResponse
 */
DescribeExecutorDetectionResponse Client::describeExecutorDetectionWithOptions(const DescribeExecutorDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExecutorDetection"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExecutorDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the compute layer.
 *
 * @param request DescribeExecutorDetectionRequest
 * @return DescribeExecutorDetectionResponse
 */
DescribeExecutorDetectionResponse Client::describeExecutorDetection(const DescribeExecutorDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExecutorDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about historical events in the event center.
 *
 * @param request DescribeHistoryEventsStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStatWithOptions(const DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveStatus()) {
    query["ArchiveStatus"] = request.archiveStatus();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.fromStartTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.productId();
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

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.toStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEventsStat"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the information about historical events in the event center.
 *
 * @param request DescribeHistoryEventsStatRequest
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStat(const DescribeHistoryEventsStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsStatWithOptions(request, runtime);
}

/**
 * @summary Queries the disk usage of all storage nodes.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeInclinedNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInclinedNodesResponse
 */
DescribeInclinedNodesResponse Client::describeInclinedNodesWithOptions(const DescribeInclinedNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
    {"action" , "DescribeInclinedNodes"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInclinedNodesResponse>();
}

/**
 * @summary Queries the disk usage of all storage nodes.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeInclinedNodesRequest
 * @return DescribeInclinedNodesResponse
 */
DescribeInclinedNodesResponse Client::describeInclinedNodes(const DescribeInclinedNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInclinedNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeInclinedTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInclinedTablesResponse
 */
DescribeInclinedTablesResponse Client::describeInclinedTablesWithOptions(const DescribeInclinedTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInclinedTables"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInclinedTablesResponse>();
}

/**
 * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeInclinedTablesRequest
 * @return DescribeInclinedTablesResponse
 */
DescribeInclinedTablesResponse Client::describeInclinedTables(const DescribeInclinedTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInclinedTablesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKernelVersionResponse
 */
DescribeKernelVersionResponse Client::describeKernelVersionWithOptions(const DescribeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeKernelVersion"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKernelVersionResponse>();
}

/**
 * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeKernelVersionRequest
 * @return DescribeKernelVersionResponse
 */
DescribeKernelVersionResponse Client::describeKernelVersion(const DescribeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKernelVersionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeKmsKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeysWithOptions(const DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKmsKeys"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeKmsKeysRequest
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeys(const DescribeKmsKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKmsKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the information about asynchronous import and export tasks of an AnalyticDB for MySQL cluster.
 *
 * @description For information about how to asynchronously submit import and export tasks, see [Asynchronously submit an import or export task](https://help.aliyun.com/document_detail/160291.html).
 *
 * @param request DescribeLoadTasksRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadTasksRecordsResponse
 */
DescribeLoadTasksRecordsResponse Client::describeLoadTasksRecordsWithOptions(const DescribeLoadTasksRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadTasksRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadTasksRecordsResponse>();
}

/**
 * @summary Queries the information about asynchronous import and export tasks of an AnalyticDB for MySQL cluster.
 *
 * @description For information about how to asynchronously submit import and export tasks, see [Asynchronously submit an import or export task](https://help.aliyun.com/document_detail/160291.html).
 *
 * @param request DescribeLoadTasksRecordsRequest
 * @return DescribeLoadTasksRecordsResponse
 */
DescribeLoadTasksRecordsResponse Client::describeLoadTasksRecords(const DescribeLoadTasksRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadTasksRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a log shipping job.
 *
 * @param request DescribeLogHubAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogHubAttributeResponse
 */
DescribeLogHubAttributeResponse Client::describeLogHubAttributeWithOptions(const DescribeLogHubAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDeliverName()) {
    query["DeliverName"] = request.deliverName();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    {"action" , "DescribeLogHubAttribute"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogHubAttributeResponse>();
}

/**
 * @summary Queries the information about a log shipping job.
 *
 * @param request DescribeLogHubAttributeRequest
 * @return DescribeLogHubAttributeResponse
 */
DescribeLogHubAttributeResponse Client::describeLogHubAttribute(const DescribeLogHubAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogHubAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of log keywords in a Logstore.
 *
 * @param request DescribeLogStoreKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreKeysResponse
 */
DescribeLogStoreKeysResponse Client::describeLogStoreKeysWithOptions(const DescribeLogStoreKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    {"action" , "DescribeLogStoreKeys"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogStoreKeysResponse>();
}

/**
 * @summary Queries a list of log keywords in a Logstore.
 *
 * @param request DescribeLogStoreKeysRequest
 * @return DescribeLogStoreKeysResponse
 */
DescribeLogStoreKeysResponse Client::describeLogStoreKeys(const DescribeLogStoreKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the log collection information.
 *
 * @param request DescribeLoghubDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoghubDetailResponse
 */
DescribeLoghubDetailResponse Client::describeLoghubDetailWithOptions(const DescribeLoghubDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportName()) {
    query["ExportName"] = request.exportName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    {"action" , "DescribeLoghubDetail"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoghubDetailResponse>();
}

/**
 * @summary Queries the log collection information.
 *
 * @param request DescribeLoghubDetailRequest
 * @return DescribeLoghubDetailResponse
 */
DescribeLoghubDetailResponse Client::describeLoghubDetail(const DescribeLoghubDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoghubDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about O&M events.
 *
 * @param request DescribeMaintenanceActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMaintenanceActionResponse
 */
DescribeMaintenanceActionResponse Client::describeMaintenanceActionWithOptions(const DescribeMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMaintenanceAction"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMaintenanceActionResponse>();
}

/**
 * @summary Queries the information about O&M events.
 *
 * @param request DescribeMaintenanceActionRequest
 * @return DescribeMaintenanceActionResponse
 */
DescribeMaintenanceActionResponse Client::describeMaintenanceAction(const DescribeMaintenanceActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMaintenanceActionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the permissions granted to the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorPermissionResponse
 */
DescribeOperatorPermissionResponse Client::describeOperatorPermissionWithOptions(const DescribeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeOperatorPermission"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorPermissionResponse>();
}

/**
 * @summary Queries the details of the permissions granted to the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOperatorPermissionRequest
 * @return DescribeOperatorPermissionResponse
 */
DescribeOperatorPermissionResponse Client::describeOperatorPermission(const DescribeOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOversizeNonPartitionTableInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOversizeNonPartitionTableInfosResponse
 */
DescribeOversizeNonPartitionTableInfosResponse Client::describeOversizeNonPartitionTableInfosWithOptions(const DescribeOversizeNonPartitionTableInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
    {"action" , "DescribeOversizeNonPartitionTableInfos"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOversizeNonPartitionTableInfosResponse>();
}

/**
 * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOversizeNonPartitionTableInfosRequest
 * @return DescribeOversizeNonPartitionTableInfosResponse
 */
DescribeOversizeNonPartitionTableInfosResponse Client::describeOversizeNonPartitionTableInfos(const DescribeOversizeNonPartitionTableInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOversizeNonPartitionTableInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of an SQL pattern such as the query duration and average memory usage within a period of time.
 *
 * @param request DescribePatternPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePatternPerformanceResponse
 */
DescribePatternPerformanceResponse Client::describePatternPerformanceWithOptions(const DescribePatternPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPatternId()) {
    query["PatternId"] = request.patternId();
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
    {"action" , "DescribePatternPerformance"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePatternPerformanceResponse>();
}

/**
 * @summary Queries the metrics of an SQL pattern such as the query duration and average memory usage within a period of time.
 *
 * @param request DescribePatternPerformanceRequest
 * @return DescribePatternPerformanceResponse
 */
DescribePatternPerformanceResponse Client::describePatternPerformance(const DescribePatternPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePatternPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the queries that are being executed on a cluster.
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRunningTime()) {
    query["RunningTime"] = request.runningTime();
  }

  if (!!request.hasShowFull()) {
    query["ShowFull"] = request.showFull();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessList"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the queries that are being executed on a cluster.
 *
 * @param request DescribeProcessListRequest
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessList(const DescribeProcessListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about specifications of MySQL analytic instances.
 *
 * @param request DescribeRdsAnalysisResourceQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsAnalysisResourceQuotasResponse
 */
DescribeRdsAnalysisResourceQuotasResponse Client::describeRdsAnalysisResourceQuotasWithOptions(const DescribeRdsAnalysisResourceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterCategory()) {
    query["ClusterCategory"] = request.clusterCategory();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.clusterMode();
  }

  if (!!request.hasNodeClass()) {
    query["NodeClass"] = request.nodeClass();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.nodeCount();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRdsInstanceId()) {
    query["RdsInstanceId"] = request.rdsInstanceId();
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

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsAnalysisResourceQuotas"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsAnalysisResourceQuotasResponse>();
}

/**
 * @summary Queries the information about specifications of MySQL analytic instances.
 *
 * @param request DescribeRdsAnalysisResourceQuotasRequest
 * @return DescribeRdsAnalysisResourceQuotasResponse
 */
DescribeRdsAnalysisResourceQuotasResponse Client::describeRdsAnalysisResourceQuotas(const DescribeRdsAnalysisResourceQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsAnalysisResourceQuotasWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available regions and zones for AnalyticDB for MySQL.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
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
    {"action" , "DescribeRegions"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of available regions and zones for AnalyticDB for MySQL.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries information about regions.
 *
 * @param request DescribeRegionsMixedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsMixedResponse
 */
DescribeRegionsMixedResponse Client::describeRegionsMixedWithOptions(const DescribeRegionsMixedRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionsMixed"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsMixedResponse>();
}

/**
 * @summary Queries information about regions.
 *
 * @param request DescribeRegionsMixedRequest
 * @return DescribeRegionsMixedResponse
 */
DescribeRegionsMixedResponse Client::describeRegionsMixed(const DescribeRegionsMixedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsMixedWithOptions(request, runtime);
}

/**
 * @summary 查询Resubmit配置
 *
 * @param request DescribeResubmitConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResubmitConfigResponse
 */
DescribeResubmitConfigResponse Client::describeResubmitConfigWithOptions(const DescribeResubmitConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
    {"action" , "DescribeResubmitConfig"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResubmitConfigResponse>();
}

/**
 * @summary 查询Resubmit配置
 *
 * @param request DescribeResubmitConfigRequest
 * @return DescribeResubmitConfigResponse
 */
DescribeResubmitConfigResponse Client::describeResubmitConfig(const DescribeResubmitConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResubmitConfigWithOptions(request, runtime);
}

/**
 * @summary 查询SQA状态
 *
 * @param request DescribeSQAConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQAConfigResponse
 */
DescribeSQAConfigResponse Client::describeSQAConfigWithOptions(const DescribeSQAConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
    {"action" , "DescribeSQAConfig"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQAConfigResponse>();
}

/**
 * @summary 查询SQA状态
 *
 * @param request DescribeSQAConfigRequest
 * @return DescribeSQAConfigResponse
 */
DescribeSQAConfigResponse Client::describeSQAConfig(const DescribeSQAConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQAConfigWithOptions(request, runtime);
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a period of time.
 *
 * @param request DescribeSQLPatternsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLPatternsResponse
 */
DescribeSQLPatternsResponse Client::describeSQLPatternsWithOptions(const DescribeSQLPatternsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLPatterns"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLPatternsResponse>();
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a period of time.
 *
 * @param request DescribeSQLPatternsRequest
 * @return DescribeSQLPatternsResponse
 */
DescribeSQLPatternsResponse Client::describeSQLPatterns(const DescribeSQLPatternsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLPatternsWithOptions(request, runtime);
}

/**
 * @summary Queries the plan information about an SQL statement such as a query statement or an extract-transform-load (ETL) task statement.
 *
 * @param request DescribeSQLPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLPlanResponse
 */
DescribeSQLPlanResponse Client::describeSQLPlanWithOptions(const DescribeSQLPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.processId();
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
    {"action" , "DescribeSQLPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLPlanResponse>();
}

/**
 * @summary Queries the plan information about an SQL statement such as a query statement or an extract-transform-load (ETL) task statement.
 *
 * @param request DescribeSQLPlanRequest
 * @return DescribeSQLPlanResponse
 */
DescribeSQLPlanResponse Client::describeSQLPlan(const DescribeSQLPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLPlanWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a task.
 *
 * @param request DescribeSQLPlanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLPlanTaskResponse
 */
DescribeSQLPlanTaskResponse Client::describeSQLPlanTaskWithOptions(const DescribeSQLPlanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.processId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStageId()) {
    query["StageId"] = request.stageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLPlanTask"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLPlanTaskResponse>();
}

/**
 * @summary Queries the information about a task.
 *
 * @param request DescribeSQLPlanTaskRequest
 * @return DescribeSQLPlanTaskResponse
 */
DescribeSQLPlanTaskResponse Client::describeSQLPlanTask(const DescribeSQLPlanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLPlanTaskWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeSchemasRequest
 * @return DescribeSchemasResponse
 */
DescribeSchemasResponse Client::describeSchemas(const DescribeSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSchemasWithOptions(request, runtime);
}

/**
 * @summary 查看慢日志
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

  if (!!request.hasProcessID()) {
    query["ProcessID"] = request.processID();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
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

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2019-03-15"},
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
 * @summary 查看慢日志
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a time range.
 *
 * @param request DescribeSqlPatternRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlPatternResponse
 */
DescribeSqlPatternResponse Client::describeSqlPatternWithOptions(const DescribeSqlPatternRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSqlPattern()) {
    query["SqlPattern"] = request.sqlPattern();
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
    {"action" , "DescribeSqlPattern"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlPatternResponse>();
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a time range.
 *
 * @param request DescribeSqlPatternRequest
 * @return DescribeSqlPatternResponse
 */
DescribeSqlPatternResponse Client::describeSqlPattern(const DescribeSqlPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlPatternWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances or clusters that are available for data synchronization.
 *
 * @param request DescribeSyncAvailableDBClusterListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyncAvailableDBClusterListResponse
 */
DescribeSyncAvailableDBClusterListResponse Client::describeSyncAvailableDBClusterListWithOptions(const DescribeSyncAvailableDBClusterListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
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

  if (!!request.hasSourceDBCluster()) {
    query["SourceDBCluster"] = request.sourceDBCluster();
  }

  if (!!request.hasSyncPlatform()) {
    query["SyncPlatform"] = request.syncPlatform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyncAvailableDBClusterList"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyncAvailableDBClusterListResponse>();
}

/**
 * @summary Queries a list of instances or clusters that are available for data synchronization.
 *
 * @param request DescribeSyncAvailableDBClusterListRequest
 * @return DescribeSyncAvailableDBClusterListResponse
 */
DescribeSyncAvailableDBClusterListResponse Client::describeSyncAvailableDBClusterList(const DescribeSyncAvailableDBClusterListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncAvailableDBClusterListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of synchronization jobs in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeSyncJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyncJobListResponse
 */
DescribeSyncJobListResponse Client::describeSyncJobListWithOptions(const DescribeSyncJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGetSourceDetail()) {
    query["GetSourceDetail"] = request.getSourceDetail();
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

  if (!!request.hasSourceDBClusterDescription()) {
    query["SourceDBClusterDescription"] = request.sourceDBClusterDescription();
  }

  if (!!request.hasSourceDBClusterId()) {
    query["SourceDBClusterId"] = request.sourceDBClusterId();
  }

  if (!!request.hasSourceDBType()) {
    query["SourceDBType"] = request.sourceDBType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyncJobList"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyncJobListResponse>();
}

/**
 * @summary Queries a list of synchronization jobs in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeSyncJobListRequest
 * @return DescribeSyncJobListResponse
 */
DescribeSyncJobListResponse Client::describeSyncJobList(const DescribeSyncJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncJobListWithOptions(request, runtime);
}

/**
 * @summary 查询表访问统计信息
 *
 * @param request DescribeTableAccessCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableAccessCountResponse
 */
DescribeTableAccessCountResponse Client::describeTableAccessCountWithOptions(const DescribeTableAccessCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTableAccessCount"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableAccessCountResponse>();
}

/**
 * @summary 查询表访问统计信息
 *
 * @param request DescribeTableAccessCountRequest
 * @return DescribeTableAccessCountResponse
 */
DescribeTableAccessCountResponse Client::describeTableAccessCount(const DescribeTableAccessCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableAccessCountWithOptions(request, runtime);
}

/**
 * @summary 查询表详情
 *
 * @param request DescribeTableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableDetailResponse
 */
DescribeTableDetailResponse Client::describeTableDetailWithOptions(const DescribeTableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeTableDetail"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableDetailResponse>();
}

/**
 * @summary 查询表详情
 *
 * @param request DescribeTableDetailRequest
 * @return DescribeTableDetailResponse
 */
DescribeTableDetailResponse Client::describeTableDetail(const DescribeTableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about partition diagnostics.
 *
 * @param request DescribeTablePartitionDiagnoseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablePartitionDiagnoseResponse
 */
DescribeTablePartitionDiagnoseResponse Client::describeTablePartitionDiagnoseWithOptions(const DescribeTablePartitionDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
    {"action" , "DescribeTablePartitionDiagnose"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTablePartitionDiagnoseResponse>();
}

/**
 * @summary Queries the information about partition diagnostics.
 *
 * @param request DescribeTablePartitionDiagnoseRequest
 * @return DescribeTablePartitionDiagnoseResponse
 */
DescribeTablePartitionDiagnoseResponse Client::describeTablePartitionDiagnose(const DescribeTablePartitionDiagnoseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablePartitionDiagnoseWithOptions(request, runtime);
}

/**
 * @summary Queries the information about table statistics for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeTableStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableStatisticsResponse
 */
DescribeTableStatisticsResponse Client::describeTableStatisticsWithOptions(const DescribeTableStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"action" , "DescribeTableStatistics"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableStatisticsResponse>();
}

/**
 * @summary Queries the information about table statistics for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeTableStatisticsRequest
 * @return DescribeTableStatisticsResponse
 */
DescribeTableStatisticsResponse Client::describeTableStatistics(const DescribeTableStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables in a database of an AnalyticDB for MySQL cluster.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of tables in a database of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a task.
 *
 * @param request DescribeTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskInfoResponse
 */
DescribeTaskInfoResponse Client::describeTaskInfoWithOptions(const DescribeTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskInfo"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskInfoResponse>();
}

/**
 * @summary Queries the information about a task.
 *
 * @param request DescribeTaskInfoRequest
 * @return DescribeTaskInfoResponse
 */
DescribeTaskInfoResponse Client::describeTaskInfo(const DescribeTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswId()) {
    query["VswId"] = request.vswId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitches"},
    {"version" , "2019-03-15"},
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
 * @summary Queries the vSwitches.
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available vSwitches.
 *
 * @param request DescribeVSwitchsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchsResponse
 */
DescribeVSwitchsResponse Client::describeVSwitchsWithOptions(const DescribeVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeVSwitchs"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchsResponse>();
}

/**
 * @summary Queries a list of available vSwitches.
 *
 * @param request DescribeVSwitchsRequest
 * @return DescribeVSwitchsResponse
 */
DescribeVSwitchsResponse Client::describeVSwitchs(const DescribeVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available virtual private clouds (VPCs).
 *
 * @param request DescribeVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcsWithOptions(const DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeVpcs"},
    {"version" , "2019-03-15"},
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
 * @summary Queries a list of available virtual private clouds (VPCs).
 *
 * @param request DescribeVpcsRequest
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcs(const DescribeVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the storage layer.
 *
 * @param request DescribeWorkerDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWorkerDetectionResponse
 */
DescribeWorkerDetectionResponse Client::describeWorkerDetectionWithOptions(const DescribeWorkerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWorkerDetection"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWorkerDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the storage layer.
 *
 * @param request DescribeWorkerDetectionRequest
 * @return DescribeWorkerDetectionResponse
 */
DescribeWorkerDetectionResponse Client::describeWorkerDetection(const DescribeWorkerDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWorkerDetectionWithOptions(request, runtime);
}

/**
 * @summary 关闭用户ENI
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
 *
 * @param request DetachUserENIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachUserENIResponse
 */
DetachUserENIResponse Client::detachUserENIWithOptions(const DetachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DetachUserENI"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachUserENIResponse>();
}

/**
 * @summary 关闭用户ENI
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
 *
 * @param request DetachUserENIRequest
 * @return DetachUserENIResponse
 */
DetachUserENIResponse Client::detachUserENI(const DetachUserENIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachUserENIWithOptions(request, runtime);
}

/**
 * @summary Disables the suggestion feature.
 *
 * @param request DisableAdviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAdviceServiceResponse
 */
DisableAdviceServiceResponse Client::disableAdviceServiceWithOptions(const DisableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DisableAdviceService"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAdviceServiceResponse>();
}

/**
 * @summary Disables the suggestion feature.
 *
 * @param request DisableAdviceServiceRequest
 * @return DisableAdviceServiceResponse
 */
DisableAdviceServiceResponse Client::disableAdviceService(const DisableAdviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAdviceServiceWithOptions(request, runtime);
}

/**
 * @summary Downloads the diagnostic information about SQL statements that meet a condition for an AnalyticDB for MySQL cluster.
 *
 * @param request DownloadDiagnosisRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadDiagnosisRecordsResponse
 */
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecordsWithOptions(const DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxPeakMemory()) {
    query["MaxPeakMemory"] = request.maxPeakMemory();
  }

  if (!!request.hasMaxScanSize()) {
    query["MaxScanSize"] = request.maxScanSize();
  }

  if (!!request.hasMinPeakMemory()) {
    query["MinPeakMemory"] = request.minPeakMemory();
  }

  if (!!request.hasMinScanSize()) {
    query["MinScanSize"] = request.minScanSize();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadDiagnosisRecords"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadDiagnosisRecordsResponse>();
}

/**
 * @summary Downloads the diagnostic information about SQL statements that meet a condition for an AnalyticDB for MySQL cluster.
 *
 * @param request DownloadDiagnosisRecordsRequest
 * @return DownloadDiagnosisRecordsResponse
 */
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecords(const DownloadDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadDiagnosisRecordsWithOptions(request, runtime);
}

/**
 * @summary 开通建议服务
 *
 * @param request EnableAdviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAdviceServiceResponse
 */
EnableAdviceServiceResponse Client::enableAdviceServiceWithOptions(const EnableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "EnableAdviceService"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAdviceServiceResponse>();
}

/**
 * @summary 开通建议服务
 *
 * @param request EnableAdviceServiceRequest
 * @return EnableAdviceServiceResponse
 */
EnableAdviceServiceResponse Client::enableAdviceService(const EnableAdviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAdviceServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the table creation statement for tables.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request GetCreateTableSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreateTableSQLResponse
 */
GetCreateTableSQLResponse Client::getCreateTableSQLWithOptions(const GetCreateTableSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetCreateTableSQL"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreateTableSQLResponse>();
}

/**
 * @summary Queries the table creation statement for tables.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request GetCreateTableSQLRequest
 * @return GetCreateTableSQLResponse
 */
GetCreateTableSQLResponse Client::getCreateTableSQL(const GetCreateTableSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateTableSQLWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
 *
 * @description ###
 * If you need Alibaba Cloud technical support to perform operations on your AnalyticDB for MySQL cluster, you must grant permissions to the service account of your cluster. When the validity period of the authorization ends, the granted permissions are automatically revoked.
 *
 * @param request GrantOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermissionWithOptions(const GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.expiredTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrivileges()) {
    query["Privileges"] = request.privileges();
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
    {"action" , "GrantOperatorPermission"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantOperatorPermissionResponse>();
}

/**
 * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
 *
 * @description ###
 * If you need Alibaba Cloud technical support to perform operations on your AnalyticDB for MySQL cluster, you must grant permissions to the service account of your cluster. When the validity period of the authorization ends, the granted permissions are automatically revoked.
 *
 * @param request GrantOperatorPermissionRequest
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermission(const GrantOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantOperatorPermissionWithOptions(request, runtime);
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
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.processId();
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
    {"version" , "2019-03-15"},
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
 * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
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
    {"version" , "2019-03-15"},
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
 * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Migrates data from a Data Warehouse Edition cluster to a Data Lakehouse Edition cluster in AnalyticDB for MySQL.
 *
 * @param request MigrateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDBClusterResponse
 */
MigrateDBClusterResponse Client::migrateDBClusterWithOptions(const MigrateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductForm()) {
    query["ProductForm"] = request.productForm();
  }

  if (!!request.hasProductVersion()) {
    query["ProductVersion"] = request.productVersion();
  }

  if (!!request.hasReservedNodeCount()) {
    query["ReservedNodeCount"] = request.reservedNodeCount();
  }

  if (!!request.hasReservedNodeSize()) {
    query["ReservedNodeSize"] = request.reservedNodeSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecondaryVSwitchId()) {
    query["SecondaryVSwitchId"] = request.secondaryVSwitchId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.secondaryZoneId();
  }

  if (!!request.hasShardNumber()) {
    query["ShardNumber"] = request.shardNumber();
  }

  if (!!request.hasStorageResource()) {
    query["StorageResource"] = request.storageResource();
  }

  if (!!request.hasStorageResourceSize()) {
    query["StorageResourceSize"] = request.storageResourceSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateDBCluster"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateDBClusterResponse>();
}

/**
 * @summary Migrates data from a Data Warehouse Edition cluster to a Data Lakehouse Edition cluster in AnalyticDB for MySQL.
 *
 * @param request MigrateDBClusterRequest
 * @return MigrateDBClusterResponse
 */
MigrateDBClusterResponse Client::migrateDBCluster(const MigrateDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Changes the time configuration of O\\&M events.
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConfWithOptions(const ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCycleTime()) {
    query["CycleTime"] = request.cycleTime();
  }

  if (!!request.hasCycleType()) {
    query["CycleType"] = request.cycleType();
  }

  if (!!request.hasMaintainEndTime()) {
    query["MaintainEndTime"] = request.maintainEndTime();
  }

  if (!!request.hasMaintainStartTime()) {
    query["MaintainStartTime"] = request.maintainStartTime();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationMaintainConf"},
    {"version" , "2019-03-15"},
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
 * @summary Changes the time configuration of O\\&M events.
 *
 * @param request ModifyActiveOperationMaintainConfRequest
 * @return ModifyActiveOperationMaintainConfResponse
 */
ModifyActiveOperationMaintainConfResponse Client::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary Changes the execution time of O&M events.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2019-03-15"},
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
 * @summary Changes the execution time of O&M events.
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 修改审计日志设置
 *
 * @param request ModifyAuditLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfigWithOptions(const ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditLogStatus()) {
    query["AuditLogStatus"] = request.auditLogStatus();
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
    {"action" , "ModifyAuditLogConfig"},
    {"version" , "2019-03-15"},
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
 * @summary 修改审计日志设置
 *
 * @param request ModifyAuditLogConfigRequest
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
 *
 * @param request ModifyAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttributeWithOptions(const ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
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
    {"version" , "2019-03-15"},
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
 * @summary Modifies the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
 *
 * @param request ModifyAutoRenewAttributeRequest
 * @return ModifyAutoRenewAttributeResponse
 */
ModifyAutoRenewAttributeResponse Client::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改全量备份策略
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

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.enableBackupLog();
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
    {"version" , "2019-03-15"},
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
 * @summary 修改全量备份策略
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Changes the endpoint of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyClusterConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterConnectionStringResponse
 */
ModifyClusterConnectionStringResponse Client::modifyClusterConnectionStringWithOptions(const ModifyClusterConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.currentConnectionString();
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

  if (!!request.hasPort()) {
    query["Port"] = request.port();
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
    {"action" , "ModifyClusterConnectionString"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterConnectionStringResponse>();
}

/**
 * @summary Changes the endpoint of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyClusterConnectionStringRequest
 * @return ModifyClusterConnectionStringResponse
 */
ModifyClusterConnectionStringResponse Client::modifyClusterConnectionString(const ModifyClusterConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Changes the specifications of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBClusterWithOptions(const ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
  }

  if (!!request.hasDBClusterCategory()) {
    query["DBClusterCategory"] = request.DBClusterCategory();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBNodeClass()) {
    query["DBNodeClass"] = request.DBNodeClass();
  }

  if (!!request.hasDBNodeGroupCount()) {
    query["DBNodeGroupCount"] = request.DBNodeGroupCount();
  }

  if (!!request.hasDBNodeStorage()) {
    query["DBNodeStorage"] = request.DBNodeStorage();
  }

  if (!!request.hasDiskPerformanceLevel()) {
    query["DiskPerformanceLevel"] = request.diskPerformanceLevel();
  }

  if (!!request.hasElasticIOResource()) {
    query["ElasticIOResource"] = request.elasticIOResource();
  }

  if (!!request.hasElasticIOResourceSize()) {
    query["ElasticIOResourceSize"] = request.elasticIOResourceSize();
  }

  if (!!request.hasExecutorCount()) {
    query["ExecutorCount"] = request.executorCount();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStorageResource()) {
    query["StorageResource"] = request.storageResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBCluster"},
    {"version" , "2019-03-15"},
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
 * @summary Changes the specifications of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelists of a cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Modifies the IP address whitelists of a cluster.
 *
 * @param request ModifyDBClusterAccessWhiteListRequest
 * @return ModifyDBClusterAccessWhiteListResponse
 */
ModifyDBClusterAccessWhiteListResponse Client::modifyDBClusterAccessWhiteList(const ModifyDBClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary 修改备注
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
    {"version" , "2019-03-15"},
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
 * @summary 修改备注
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Changes the maintenance window of an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Changes the maintenance window of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterPayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterPayTypeResponse
 */
ModifyDBClusterPayTypeResponse Client::modifyDBClusterPayTypeWithOptions(const ModifyDBClusterPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
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

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterPayType"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterPayTypeResponse>();
}

/**
 * @summary Changes the billing method of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterPayTypeRequest
 * @return ModifyDBClusterPayTypeResponse
 */
ModifyDBClusterPayTypeResponse Client::modifyDBClusterPayType(const ModifyDBClusterPayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterPayTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group of an AnalyticDB for MySQL cluster.
 *
 * @description Resource Management enables you to build an organizational structure for resources based on your business needs. You can use a resource directory, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](~~94475#concept-zyn-3p1-dhb~~ "Resource Management provides a collection of resource management services that support enterprise IT administration. The services include Resource Directory, Resource Group, and Tag. Resource Directory allows you to build an organizational structure for resources based on your business requirements. Resource Group and Tag allow you to hierarchically manage the resources. Resource Sharing allows you to share the resources among your accounts.")
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
    {"version" , "2019-03-15"},
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
 * @summary Modifies the resource group of an AnalyticDB for MySQL cluster.
 *
 * @description Resource Management enables you to build an organizational structure for resources based on your business needs. You can use a resource directory, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](~~94475#concept-zyn-3p1-dhb~~ "Resource Management provides a collection of resource management services that support enterprise IT administration. The services include Resource Directory, Resource Group, and Tag. Resource Directory allows you to build an organizational structure for resources based on your business requirements. Resource Group and Tag allow you to hierarchically manage the resources. Resource Sharing allows you to share the resources among your accounts.")
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroup(const ModifyDBClusterResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request ModifyDBClusterSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSLWithOptions(const ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.enableSSL();
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
    {"action" , "ModifyDBClusterSSL"},
    {"version" , "2019-03-15"},
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
 * @summary Modifies the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @param request ModifyDBClusterSSLRequest
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSL(const ModifyDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Changes the number of shards for an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterShardNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterShardNumberResponse
 */
ModifyDBClusterShardNumberResponse Client::modifyDBClusterShardNumberWithOptions(const ModifyDBClusterShardNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasNewShardNumber()) {
    query["NewShardNumber"] = request.newShardNumber();
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
    {"action" , "ModifyDBClusterShardNumber"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterShardNumberResponse>();
}

/**
 * @summary Changes the number of shards for an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterShardNumberRequest
 * @return ModifyDBClusterShardNumberResponse
 */
ModifyDBClusterShardNumberResponse Client::modifyDBClusterShardNumber(const ModifyDBClusterShardNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterShardNumberWithOptions(request, runtime);
}

/**
 * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterVipResponse
 */
ModifyDBClusterVipResponse Client::modifyDBClusterVipWithOptions(const ModifyDBClusterVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
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

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterVip"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterVipResponse>();
}

/**
 * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterVipRequest
 * @return ModifyDBClusterVipResponse
 */
ModifyDBClusterVipResponse Client::modifyDBClusterVip(const ModifyDBClusterVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterVipWithOptions(request, runtime);
}

/**
 * @summary Modifies the number of nodes or the query execution mode for a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more. The number of nodes cannot be modified for the default resource group USER_DEFAULT.
 *
 * @param tmpReq ModifyDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroupWithOptions(const ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBResourceGroupShrinkRequest request = ModifyDBResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEngineParams()) {
    request.setEngineParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.engineParams(), "EngineParams", "json"));
  }

  if (!!tmpReq.hasPoolUserList()) {
    request.setPoolUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.poolUserList(), "PoolUserList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.clusterMode();
  }

  if (!!request.hasClusterSizeResource()) {
    query["ClusterSizeResource"] = request.clusterSizeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngineParamsShrink()) {
    query["EngineParams"] = request.engineParamsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasMaxClusterCount()) {
    query["MaxClusterCount"] = request.maxClusterCount();
  }

  if (!!request.hasMaxComputeResource()) {
    query["MaxComputeResource"] = request.maxComputeResource();
  }

  if (!!request.hasMinClusterCount()) {
    query["MinClusterCount"] = request.minClusterCount();
  }

  if (!!request.hasMinComputeResource()) {
    query["MinComputeResource"] = request.minComputeResource();
  }

  if (!!request.hasNodeNum()) {
    query["NodeNum"] = request.nodeNum();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolUserListShrink()) {
    query["PoolUserList"] = request.poolUserListShrink();
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
    {"action" , "ModifyDBResourceGroup"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBResourceGroupResponse>();
}

/**
 * @summary Modifies the number of nodes or the query execution mode for a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
 *
 * @description This operation is suitable for the following editions:
 * *   **Enterprise Edition**.
 * *   **Basic Edition**.
 * *   **Data Lakehouse Edition**.
 * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more. The number of nodes cannot be modified for the default resource group USER_DEFAULT.
 *
 * @param request ModifyDBResourceGroupRequest
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroup(const ModifyDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the resources of a resource group. This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * *   You can call this operation only for elastic clusters of 32 cores or more.
 * *   You cannot change the number of nodes for the USER_DEFAULT resource group.
 *
 * @param request ModifyDBResourcePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBResourcePoolResponse
 */
ModifyDBResourcePoolResponse Client::modifyDBResourcePoolWithOptions(const ModifyDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNodeNum()) {
    query["NodeNum"] = request.nodeNum();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
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
    {"action" , "ModifyDBResourcePool"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBResourcePoolResponse>();
}

/**
 * @summary Modifies the resources of a resource group. This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description ###
 * *   You can call this operation only for elastic clusters of 32 cores or more.
 * *   You cannot change the number of nodes for the USER_DEFAULT resource group.
 *
 * @param request ModifyDBResourcePoolRequest
 * @return ModifyDBResourcePoolResponse
 */
ModifyDBResourcePoolResponse Client::modifyDBResourcePool(const ModifyDBResourcePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBResourcePoolWithOptions(request, runtime);
}

/**
 * @summary Modifies a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request ModifyElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlanWithOptions(const ModifyElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanEnable()) {
    query["ElasticPlanEnable"] = request.elasticPlanEnable();
  }

  if (!!request.hasElasticPlanEndDay()) {
    query["ElasticPlanEndDay"] = request.elasticPlanEndDay();
  }

  if (!!request.hasElasticPlanMonthlyRepeat()) {
    query["ElasticPlanMonthlyRepeat"] = request.elasticPlanMonthlyRepeat();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasElasticPlanNodeNum()) {
    query["ElasticPlanNodeNum"] = request.elasticPlanNodeNum();
  }

  if (!!request.hasElasticPlanStartDay()) {
    query["ElasticPlanStartDay"] = request.elasticPlanStartDay();
  }

  if (!!request.hasElasticPlanTimeEnd()) {
    query["ElasticPlanTimeEnd"] = request.elasticPlanTimeEnd();
  }

  if (!!request.hasElasticPlanTimeStart()) {
    query["ElasticPlanTimeStart"] = request.elasticPlanTimeStart();
  }

  if (!!request.hasElasticPlanType()) {
    query["ElasticPlanType"] = request.elasticPlanType();
  }

  if (!!request.hasElasticPlanWeeklyRepeat()) {
    query["ElasticPlanWeeklyRepeat"] = request.elasticPlanWeeklyRepeat();
  }

  if (!!request.hasElasticPlanWorkerSpec()) {
    query["ElasticPlanWorkerSpec"] = request.elasticPlanWorkerSpec();
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

  if (!!request.hasResourcePoolName()) {
    query["ResourcePoolName"] = request.resourcePoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticPlan"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticPlanResponse>();
}

/**
 * @summary Modifies a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
 *
 * @param request ModifyElasticPlanRequest
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlan(const ModifyElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Modifies the log backup settings of an AnalyticDB for MySQL cluster.
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

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.enableBackupLog();
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
    {"action" , "ModifyLogBackupPolicy"},
    {"version" , "2019-03-15"},
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
 * @summary Modifies the log backup settings of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyLogBackupPolicyRequest
 * @return ModifyLogBackupPolicyResponse
 */
ModifyLogBackupPolicyResponse Client::modifyLogBackupPolicy(const ModifyLogBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a log shipping job.
 *
 * @param request ModifyLogHubStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLogHubStatusResponse
 */
ModifyLogHubStatusResponse Client::modifyLogHubStatusWithOptions(const ModifyLogHubStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDeliverName()) {
    query["DeliverName"] = request.deliverName();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLogHubStatus"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLogHubStatusResponse>();
}

/**
 * @summary Changes the status of a log shipping job.
 *
 * @param request ModifyLogHubStatusRequest
 * @return ModifyLogHubStatusResponse
 */
ModifyLogHubStatusResponse Client::modifyLogHubStatus(const ModifyLogHubStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLogHubStatusWithOptions(request, runtime);
}

/**
 * @summary Changes the switchover time of O&M events.
 *
 * @param request ModifyMaintenanceActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaintenanceActionResponse
 */
ModifyMaintenanceActionResponse Client::modifyMaintenanceActionWithOptions(const ModifyMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaintenanceAction"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaintenanceActionResponse>();
}

/**
 * @summary Changes the switchover time of O&M events.
 *
 * @param request ModifyMaintenanceActionRequest
 * @return ModifyMaintenanceActionResponse
 */
ModifyMaintenanceActionResponse Client::modifyMaintenanceAction(const ModifyMaintenanceActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaintenanceActionWithOptions(request, runtime);
}

/**
 * @summary 修改Resubmit配置
 *
 * @param tmpReq ModifyResubmitConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResubmitConfigResponse
 */
ModifyResubmitConfigResponse Client::modifyResubmitConfigWithOptions(const ModifyResubmitConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyResubmitConfigShrinkRequest request = ModifyResubmitConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

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

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResubmitConfig"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResubmitConfigResponse>();
}

/**
 * @summary 修改Resubmit配置
 *
 * @param request ModifyResubmitConfigRequest
 * @return ModifyResubmitConfigResponse
 */
ModifyResubmitConfigResponse Client::modifyResubmitConfig(const ModifyResubmitConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResubmitConfigWithOptions(request, runtime);
}

/**
 * @summary 修改SQA配置
 *
 * @param request ModifySQAConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySQAConfigResponse
 */
ModifySQAConfigResponse Client::modifySQAConfigWithOptions(const ModifySQAConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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

  if (!!request.hasSQAStatus()) {
    query["SQAStatus"] = request.SQAStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySQAConfig"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySQAConfigResponse>();
}

/**
 * @summary 修改SQA配置
 *
 * @param request ModifySQAConfigRequest
 * @return ModifySQAConfigResponse
 */
ModifySQAConfigResponse Client::modifySQAConfig(const ModifySQAConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQAConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the synchronization jobs for an AnalyticDB for MySQL cluster.
 *
 * @param request ModifySyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySyncJobResponse
 */
ModifySyncJobResponse Client::modifySyncJobWithOptions(const ModifySyncJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSourceDBCluster()) {
    query["SourceDBCluster"] = request.sourceDBCluster();
  }

  if (!!request.hasSyncPlatform()) {
    query["SyncPlatform"] = request.syncPlatform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySyncJob"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySyncJobResponse>();
}

/**
 * @summary Modifies the synchronization jobs for an AnalyticDB for MySQL cluster.
 *
 * @param request ModifySyncJobRequest
 * @return ModifySyncJobResponse
 */
ModifySyncJobResponse Client::modifySyncJob(const ModifySyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySyncJobWithOptions(request, runtime);
}

/**
 * @summary 修改LogHub投递规则
 *
 * @param request OperateLogHubRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateLogHubResponse
 */
OperateLogHubResponse Client::operateLogHubWithOptions(const OperateLogHubRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreate()) {
    query["Create"] = request.create();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDeliverName()) {
    query["DeliverName"] = request.deliverName();
  }

  if (!!request.hasDeliverTime()) {
    query["DeliverTime"] = request.deliverTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFilterDirtyData()) {
    query["FilterDirtyData"] = request.filterDirtyData();
  }

  if (!!request.hasLogHubStores()) {
    query["LogHubStores"] = request.logHubStores();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
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

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateLogHub"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateLogHubResponse>();
}

/**
 * @summary 修改LogHub投递规则
 *
 * @param request OperateLogHubRequest
 * @return OperateLogHubResponse
 */
OperateLogHubResponse Client::operateLogHub(const OperateLogHubRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateLogHubWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Releases the public endpoint of an AnalyticDB for MySQL cluster.
 *
 * @param request ReleaseClusterPublicConnectionRequest
 * @return ReleaseClusterPublicConnectionResponse
 */
ReleaseClusterPublicConnectionResponse Client::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
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
    {"action" , "ResetAccountPassword"},
    {"version" , "2019-03-15"},
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
 * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary 取消服务帐号授权
 *
 * @param request RevokeOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermissionWithOptions(const RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "RevokeOperatorPermission"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeOperatorPermissionResponse>();
}

/**
 * @summary 取消服务帐号授权
 *
 * @param request RevokeOperatorPermissionRequest
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Adds tags to an AnalyticDB for MySQL cluster.
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
    {"version" , "2019-03-15"},
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
 * @summary Adds tags to an AnalyticDB for MySQL cluster.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Disassociates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster from a database account.
 *
 * @param request UnbindDBResourceGroupWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDBResourceGroupWithUserResponse
 */
UnbindDBResourceGroupWithUserResponse Client::unbindDBResourceGroupWithUserWithOptions(const UnbindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupUser()) {
    query["GroupUser"] = request.groupUser();
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
    {"action" , "UnbindDBResourceGroupWithUser"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDBResourceGroupWithUserResponse>();
}

/**
 * @summary Disassociates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster from a database account.
 *
 * @param request UnbindDBResourceGroupWithUserRequest
 * @return UnbindDBResourceGroupWithUserResponse
 */
UnbindDBResourceGroupWithUserResponse Client::unbindDBResourceGroupWithUser(const UnbindDBResourceGroupWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDBResourceGroupWithUserWithOptions(request, runtime);
}

/**
 * @summary Disassociates a database account from a resource group. This operation can be called only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @param request UnbindDBResourcePoolWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDBResourcePoolWithUserResponse
 */
UnbindDBResourcePoolWithUserResponse Client::unbindDBResourcePoolWithUserWithOptions(const UnbindDBResourcePoolWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasPoolUser()) {
    query["PoolUser"] = request.poolUser();
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
    {"action" , "UnbindDBResourcePoolWithUser"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDBResourcePoolWithUserResponse>();
}

/**
 * @summary Disassociates a database account from a resource group. This operation can be called only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
 *
 * @param request UnbindDBResourcePoolWithUserRequest
 * @return UnbindDBResourcePoolWithUserResponse
 */
UnbindDBResourcePoolWithUserResponse Client::unbindDBResourcePoolWithUser(const UnbindDBResourcePoolWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDBResourcePoolWithUserWithOptions(request, runtime);
}

/**
 * @summary Removes all tags from AnalyticDB for MySQL clusters.
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
    {"version" , "2019-03-15"},
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
 * @summary Removes all tags from AnalyticDB for MySQL clusters.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request UpgradeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersionWithOptions(const UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeKernelVersion"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeKernelVersionResponse>();
}

/**
 * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request UpgradeKernelVersionRequest
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersion(const UpgradeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Adb20190315